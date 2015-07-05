library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity sms_core is
    port ( rst_n    : in  std_logic;
           clk      : in  std_logic;
           addr     : out std_logic_vector(7 downto 0);
           data_in  : in  std_logic_vector(7 downto 0);
           data_out : out std_logic_vector(7 downto 0);
           read_n   : out std_logic);
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
						  state_execute_1);

	signal core_state : core_state_t;
	signal rst_internal_n : std_logic := '1';

	signal instruction : std_logic_vector(7 downto 0);
	signal operand_a, operand_b : std_logic_vector(7 downto 0);
	signal bus_a, bus_b, bus_mux_b : std_logic_vector(7 downto 0);
	signal alu_output : std_logic_vector(7 downto 0);
	signal alu_carry  : std_logic;
	
	signal AL, BL, CL, DL : std_logic_vector(7 downto 0);
	signal IP : unsigned(7 downto 0);
	signal SR : std_logic_vector(7 downto 0);

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
			 
	control: process(rst_n, clk)
	begin
		if clk'event and clk='1' then
			if rst_n='0' or rst_internal_n='0' then
				core_state <= state_fetch_i_0;
				IP <= x"01";
				AL <= x"00";
				BL <= x"00";
				CL <= x"00";
				DL <= x"00";
				instruction <= x"FF";
				operand_a <= x"00";
				operand_b <= x"00";
				read_n <= '0';
				addr <= x"01";
			else
				case core_state is
					when state_fetch_i_0 =>
						addr <= std_logic_vector(IP);
						IP <= IP + 1;
						core_state <= state_fetch_i_1;
					when state_fetch_i_1 =>
						core_state <= state_fetch_i_2;
					when state_fetch_i_2 =>
						instruction <= data_in;
						addr <= std_logic_vector(IP);
						IP <= IP + 1;
						core_state <= state_fetch_a_0;
					when state_fetch_a_0 =>
						core_state <= state_fetch_a_1;
					when state_fetch_a_1 =>
						operand_a <= data_in;
						addr <= std_logic_vector(IP);
						IP <= IP + 1;
						core_state <= state_fetch_b_0;
					when state_fetch_b_0 =>
						core_state <= state_fetch_b_1;
					when state_fetch_b_1 =>
						operand_b <= data_in;
						addr <= std_logic_vector(IP);
						IP <= IP + 1;
						core_state <= state_execute_0;
					when state_execute_0 =>
						core_state <= state_execute_1;
					when state_execute_1 =>
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
						core_state <= state_fetch_i_2;
					when others =>
						rst_internal_n <= '0';
				end case;
			end if;
		end if;
	end process;

end rtl;

