LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY sms_core_tb IS
END sms_core_tb;
 
ARCHITECTURE behavior OF sms_core_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT sms_core
    PORT(
         rst_n : IN  std_logic;
         clk : IN  std_logic;
         addr : OUT  std_logic_vector(7 downto 0);
         data_in : IN  std_logic_vector(7 downto 0);
         data_out : OUT  std_logic_vector(7 downto 0);
         read_n : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal rst_n : std_logic := '0';
   signal clk : std_logic := '0';
   signal data_in : std_logic_vector(7 downto 0) := (others => '0');

 	--Outputs
   signal addr : std_logic_vector(7 downto 0);
   signal data_out : std_logic_vector(7 downto 0);
   signal read_n : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: sms_core PORT MAP (
          rst_n => rst_n,
          clk => clk,
          addr => addr,
          data_in => data_in,
          data_out => data_out,
          read_n => read_n
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_period*10;

      -- insert stimulus here
	  rst_n <= '1';

      wait;
   end process;

END;
