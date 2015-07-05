library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use ieee.numeric_std.all;

entity ula is
    port ( clk 		: in  std_logic;
           rst_n 		: in  std_logic;
           data_in_a : in  std_logic_vector (7 downto 0);
           data_in_b : in  std_logic_vector (7 downto 0);
           data_out 	: out std_logic_vector (7 downto 0);
           carry_out	: out std_logic;
           operation : in  std_logic_vector (7 downto 0));
end ula;

architecture rtl of ula is
	signal temp : std_logic_vector (8 downto 0) := (others => '0');
begin
	process(clk, rst_n)
	begin
		if clk'event and clk='1' then
			if rst_n='0' then
				temp <= (others => '0');
			else
				case operation(1 downto 0) is
					when "00" =>
						--temp <= std_logic_vector(('0' & unsigned(data_in_a)) + ('0' & unsigned(data_in_b)));
						temp <= std_logic_vector(unsigned('0' & data_in_a) + unsigned('0' & data_in_b));
					when "01" =>
						--temp <= std_logic_vector(('0' & unsigned(data_in_a)) - ('0' & unsigned(data_in_b)));
						temp <= std_logic_vector(unsigned('0' & data_in_a) - unsigned('0' & data_in_b));
					when others =>
						temp <= (others => '0');
				end case;
			end if;
		end if;
	end process;
	
	data_out <= temp(7 downto 0);
	carry_out <= temp(8);	
end rtl;

