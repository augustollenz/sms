library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity sms_core is
    port ( rst_n    : in  std_logic;
           clk      : in  std_logic;
           addr     : out std_logic_vector(7 downto 0);
           data_in  : in  std_logic_vector(7 downto 0);
           data_out : out std_logic_vector(7 downto 0);
           read_n   : out std_logic;
		   input    : in std_logic_vector(7 downto 0));
end sms_core;

architecture rtl of sms_core is
	component ula
	port(
		 clk 		: in  std_logic;
		 rst_n 		: in  std_logic;
		 data_in_a 	: in  std_logic_vector(7 downto 0);
		 data_in_b 	: in  std_logic_vector(7 downto 0);
		 data_out 	: out std_logic_vector(7 downto 0);
		 carry_out 	: out std_logic;
		 operation 	: in  std_logic_vector(7 downto 0)
		);
	end component;

	type core_state_t is (state_fetch_i_0,
	                      state_fetch_i_1,
						  state_fetch_i_2,
						  state_fetch_a_0,
						  state_fetch_a_1,
						  state_fetch_b_0,
						  state_fetch_b_1,
						  state_execute_0,
						  state_execute_1,
						  state_execute_2);

	signal core_state : core_state_t;
	signal rst_internal_n : std_logic := '1';
	signal ready : std_logic := '0';

	signal instruction : std_logic_vector(7 downto 0);
	signal operand_a, operand_b : std_logic_vector(7 downto 0);
	signal bus_a, bus_b, bus_mux_b : std_logic_vector(7 downto 0);
	signal mov_mux : std_logic_vector(7 downto 0);
	
	signal addr_exec : std_logic_vector(7 downto 0);
	signal addr_ctrl : std_logic_vector(7 downto 0);
	
	signal alu_output : std_logic_vector(7 downto 0);
	signal alu_carry  : std_logic;
	
	signal AL, BL, CL, DL : std_logic_vector(7 downto 0);
	signal IP : unsigned(7 downto 0);
	signal SR : std_logic_vector(7 downto 0);

	type num_operands_array is array(0 to 255) of integer range 0 to 2;
	constant num_operands : num_operands_array := (
	--  0 1 2 3 4 5 6 7 8 9 A B C D E F
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, -- 0
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, -- 1
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, -- 2
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, -- 3
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, -- 4
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, -- 5
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, -- 6
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, -- 7
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, -- 8
		0,0,0,0,0,0,0,0,0,0,2,2,2,2,0,0, -- 9
		2,2,2,2,1,1,2,0,0,0,2,2,2,1,0,0, -- A
		2,2,2,2,0,0,2,0,0,0,2,2,2,0,0,0, -- B
		1,1,1,1,1,1,1,0,0,0,1,0,1,0,0,0, -- C
		2,2,2,2,2,0,0,0,0,0,2,2,2,0,0,0, -- D
		1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0, -- E
		1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0  -- F
	);

begin
	ula0: ula
		port map (
		  clk => clk,
		  rst_n => rst_n,
		  data_in_a => bus_a,
		  data_in_b => bus_b,
		  data_out => alu_output,
		  carry_out => alu_carry,
		  operation => instruction
		);
	
	bus_a <= AL when operand_a(1 downto 0)="00" else
	         BL when operand_a(1 downto 0)="01" else
			 CL when operand_a(1 downto 0)="10" else
			 DL when operand_a(1 downto 0)="11";
			 
	bus_mux_b <= AL when operand_b(1 downto 0)="00" else
	             BL when operand_b(1 downto 0)="01" else
			     CL when operand_b(1 downto 0)="10" else
			     DL when operand_b(1 downto 0)="11";

	bus_b <= operand_b when instruction(4)='1' else
	         bus_mux_b;
			 
	mov_mux <= operand_b when instruction(2 downto 0)="000" else
	           data_in   when instruction(2 downto 0)="001" or
			                  instruction(2 downto 0)="011" else
			   bus_mux_b when instruction(2 downto 0)="010" or
			                  instruction(2 downto 0)="100";

	data_out <= mov_mux;

	addr_exec <= operand_b when instruction(2 downto 0)="001" else
	             operand_a when instruction(2 downto 0)="010" else
				 bus_mux_b when instruction(2 downto 0)="011" else
				 bus_a     when instruction(2 downto 0)="100";

	addr <= addr_exec when core_state=state_execute_0 or
                           core_state=state_execute_1 or
						   core_state=state_execute_2 else
	        addr_ctrl;

	control: process(clk)
	begin
		if clk'event and clk='1' then
			if rst_n='0' or rst_internal_n='0' then
				core_state <= state_fetch_i_0;
				addr_ctrl <= x"00";
				IP <= x"00";
				instruction <= x"FF";
				operand_a <= x"00";
				operand_b <= x"00";
			else
				case core_state is
					when state_fetch_i_0 =>
						addr_ctrl <= std_logic_vector(IP);
						IP <= IP + 1;
						core_state <= state_fetch_i_1;
					when state_fetch_i_1 =>
						core_state <= state_fetch_i_2;
					when state_fetch_i_2 =>
						instruction <= data_in;
						if num_operands(to_integer(unsigned(data_in)))/=0 then
							core_state <= state_fetch_a_0;
							addr_ctrl <= std_logic_vector(IP);
							IP <= IP + 1;
						else
							core_state <= state_execute_0;
						end if;
					when state_fetch_a_0 =>
						core_state <= state_fetch_a_1;
					when state_fetch_a_1 =>
						operand_a <= data_in;
						if num_operands(to_integer(unsigned(instruction)))/=0 then
							addr_ctrl <= std_logic_vector(IP);
							IP <= IP + 1;
							core_state <= state_fetch_b_0;
						else
							core_state <= state_execute_0;
						end if;
					when state_fetch_b_0 =>
						core_state <= state_fetch_b_1;
					when state_fetch_b_1 =>
						operand_b <= data_in;
						addr_ctrl <= std_logic_vector(IP);
						IP <= IP + 1;
						core_state <= state_execute_0;
					when state_execute_0 =>
						core_state <= state_execute_1;
					when state_execute_1 =>
						if ready='1' then
							core_state <= state_execute_2;
						end if;
					-- esse ciclo deveria ser no exec process
					-- na instrucao mov com memoria
					when state_execute_2 =>
						core_state <= state_fetch_i_1;
					when others =>
						rst_internal_n <= '0';
				end case;
			end if;
		end if;
	end process;
	
	execute: process(clk)
	begin
		if clk'event and clk='1' then
			if rst_n='0' or rst_internal_n='0' then
				ready <= '0';
				read_n <= '0';
				AL <= x"00";
				BL <= x"00";
				CL <= x"00";
				DL <= x"00";				
			elsif core_state=state_execute_1 then
				if instruction(7 downto 4)=x"A" or
				   instruction(7 downto 4)=x"B" then
					SR(1) <= alu_carry;
					case operand_a is
						when x"00" =>
							AL <= alu_output;
						when x"01" =>
							BL <= alu_output;
						when x"02" =>
							CL <= alu_output;
						when x"03" =>
							DL <= alu_output;
						when others =>
							AL <= alu_output;
					end case;
					ready <= '1';
				-- MOV
				elsif instruction(7 downto 4)=x"D" then
					if instruction(2 downto 0)="000" or
					   instruction(2 downto 0)="001" or
					   instruction(2 downto 0)="011" then
						case operand_a(1 downto 0) is
							when "00" =>
								AL <= mov_mux;
							when "01" =>
								BL <= mov_mux;
							when "10" =>
								CL <= mov_mux;
							when others =>
								DL <= mov_mux;							
						end case;
					elsif instruction(2 downto 0)="010" or
					      instruction(2 downto 0)="100" then
						read_n <= '1';
					end if;
					ready <= '1';
				elsif instruction(7 downto 4)=x"F" then
					case instruction(3 downto 0) is
						when x"0" =>
							AL <= input;
						when others =>
							AL <= x"00";
					end case;
				else
					ready <= '0';
				end if;
			else--not executig
				read_n <= '0';
				ready <= '0';
			end if;
		end if;
	end process;

end rtl;

