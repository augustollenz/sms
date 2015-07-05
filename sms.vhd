library ieee;
use ieee.std_logic_1164.all;

entity sms is
    port ( rst_n : in STD_LOGIC;
           clk   : in STD_LOGIC);
end sms;

architecture rtl of sms is
	component sms_core
		port (
			rst_n : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           addr : out  STD_LOGIC_VECTOR (7 downto 0);
           data_in : in  STD_LOGIC_VECTOR (7 downto 0);
           data_out : out  STD_LOGIC_VECTOR (7 downto 0);
           read_n : out  STD_LOGIC
		   );
	end component sms_core;
	
	component ram
	  port (
		clka  : in  std_logic;
		wea   : in  std_logic_vector(0 downto 0);
		addra : in  std_logic_vector(7 downto 0);
		dina  : in  std_logic_vector(7 downto 0);
		douta : out std_logic_vector(7 downto 0)
	  );
	end component ram;
	
	signal read_n   : std_logic_vector(0 downto 0);
	signal addr     : std_logic_vector(7 downto 0);
	signal data_in  : std_logic_vector(7 downto 0);
	signal data_out : std_logic_vector(7 downto 0);
	
begin
core0: sms_core
	port map (
		rst_n => rst_n,
		clk => clk,
		addr => addr,
		data_in => data_in,
		data_out => data_out,
		read_n => read_n(0)
	);
ram0: ram
	port map (
		clka => clk,
		wea => read_n,
		addra => addr,
		dina => data_out,
		douta => data_in
	);
end rtl;
