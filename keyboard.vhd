library ieee;
use ieee.std_logic_1164.all;

entity keyboard is
    port ( clk   : in  std_logic;
           rst_n : in  std_logic;
			  req   : in  std_logic;
			  ack   : out  std_logic;
	        tclk  : inout std_logic;
           tdata : inout std_logic;
		   key   : out   std_logic_vector(15 downto 0));
end keyboard;

architecture rtl of keyboard is
	type prot_state is (prot_state_idle,
	                    prot_state_data,
						prot_state_parity,
						prot_state_stop);
	signal state : prot_state;
	signal clock_prev : std_logic;
	signal skey : std_logic_vector(15 downto 0);
	signal counter : integer range 0 to 7;
	signal sync_tclk, sync_tdata : std_logic_vector(2 downto 0);
	
begin
	tclk  <= 'Z';-- when tclk = '1' else ;
	tdata <= 'Z';
	
	process(clk)
	begin
		if (clk'event and clk='1') then
			if (rst_n ='0') then
				sync_tclk <= "111";
				sync_tdata <= "111";
			else
				sync_tclk <= sync_tclk(1 downto 0) & tclk;
				sync_tdata <= sync_tdata(1 downto 0) & tdata;
			end if;
		end if;
	end process;
	
	key <= skey;
	input: process(clk) is
	begin
		if clk'event and clk = '1' then
			if rst_n = '0' then
				skey <= (others => '0');
				clock_prev <= '0';
				counter <= 0;
				state <= prot_state_idle;
			else
				if req = '1' then
					if clock_prev = '1' and sync_tclk(2) = '0' then
						case state is
							when prot_state_idle =>
								if sync_tdata(2) = '0' then
									ack <= '0';
									state <= prot_state_data;
								end if;
							when prot_state_data =>
								skey <= sync_tdata(2) & skey(15 downto 1);
								counter <= counter + 1;
								if counter = 7 then
									state <= prot_state_parity;
									counter <= 0;
								end if;
							when prot_state_parity =>
								state <= prot_state_stop;
							when prot_state_stop =>
								ack <= '1';
								state <= prot_state_idle;	
							when others =>
								state <= prot_state_idle;
						end case;
					end if;
					clock_prev <= sync_tclk(2);
				else
					ack <= '0';
					state <= prot_state_idle;
				end if;
			end if;
		end if;
	end process input;
end rtl;
