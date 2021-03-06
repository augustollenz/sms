library ieee;
use ieee.std_logic_1164.all;

entity sms is
    port ( rst_n : in STD_LOGIC;
           clk   : in STD_LOGIC;
		   ps2_clk  : inout STD_LOGIC;
		   ps2_data : inout STD_LOGIC
		   );
end sms;

architecture rtl of sms is
        component sms_core
		port (
	   rst_n : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           addr : out  STD_LOGIC_VECTOR (7 downto 0);
           data_in : in  STD_LOGIC_VECTOR (7 downto 0);
           data_out : out  STD_LOGIC_VECTOR (7 downto 0);
           read_n : out  STD_LOGIC;
		   input : in std_logic_vector(7 downto 0)
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

	component keyboard
	    port (
			clk   : in  std_logic;
			rst_n : in  std_logic;
			req   : in  std_logic;
			ack   : out  std_logic;
	        tclk  : inout std_logic;
            tdata : inout std_logic;
		    key   : out   std_logic_vector(15 downto 0)
		);
	end component keyboard;
	
	signal read_n   : std_logic_vector(0 downto 0);
	signal read_nr  : std_logic_vector(0 downto 0);
	signal addr     : std_logic_vector(7 downto 0);
	signal data_in  : std_logic_vector(7 downto 0);
	signal data_out : std_logic_vector(7 downto 0);
	
	signal key_req  : std_logic;
	signal key_ack  : std_logic;
	signal key_data : std_logic_vector(15 downto 0);

begin
core0: sms_core
	port map (
		rst_n => rst_n,
		clk => clk,
		addr => addr,
		data_in => data_in,
		data_out => data_out,
		read_n => read_n(0),
		input => key_data(15 downto 8)
	);

    read_nr <= read_n when rst_n='1' else "0";
ram0: ram
	port map (
		clka => clk,
		wea => read_nr,
		addra => addr,
		dina => data_out,
		douta => data_in
	);
keyboard0: keyboard
	port map (
		rst_n => rst_n,
		clk => clk,
		req => key_req,
		ack => key_ack,
		key => key_data
	);
end rtl;
