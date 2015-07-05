LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY sms_tb IS
END sms_tb;
 
ARCHITECTURE behavior OF sms_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT sms
    PORT(
         rst_n : IN  std_logic;
         clk : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal rst_n : std_logic := '0';
   signal clk : std_logic := '0';

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: sms PORT MAP (
          rst_n => rst_n,
          clk => clk
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
      -- wait for 100 ns;	

      wait for clk_period*2;

      -- insert stimulus here
      rst_n <= '1';

      wait;
   end process;

END;
