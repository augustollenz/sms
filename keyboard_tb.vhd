LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY keyboard_tb IS
END keyboard_tb;
 
ARCHITECTURE behavior OF keyboard_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT keyboard
    PORT(
         clk : IN  std_logic;
         rst_n : IN  std_logic;
         req : IN  std_logic;
         ack : OUT  std_logic;
         tclk : INOUT  std_logic;
         tdata : INOUT  std_logic;
         key : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal rst_n : std_logic := '0';
   signal req : std_logic := '0';

	--BiDirs
   signal tclk : std_logic;
   signal tdata : std_logic;

 	--Outputs
   signal ack : std_logic;
   signal key : std_logic_vector(15 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
   constant tclk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: keyboard PORT MAP (
          clk => clk,
          rst_n => rst_n,
          req => req,
          ack => ack,
          tclk => tclk,
          tdata => tdata,
          key => key
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 
--   tclk_process :process
--   begin
--		tclk <= '0';
--		wait for tclk_period/2;
--		tclk <= '1';
--		wait for tclk_period/2;
--   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	
		rst_n <= '1';
      wait for clk_period*10;

      -- insert stimulus here 

		req <= '0';
		tclk <= '1';
		tdata <= '1';
		--------------------------------------------DESCONSIDERAR COMENTARIOS----------BAGUNADOS
		wait for clk_period;
		req <= '1';     		--Ativa req
		wait for clk_period;
		tdata <= '0';			--1st H2L Edge  Start Bit
		
		wait for clk_period;
		tclk <= '0';			--1st H2L Edge
		wait for clk_period;
		tclk <= '1';			--1st L2H Edge
		
		wait for clk_period;	
		tdata <= '1';			

		wait for clk_period;
		tclk <= '0';			--2nd H2L Edge
		wait for clk_period;
		tclk <= '1';			--2nd H2L Edge
		
		wait for clk_period;
		tdata <= '0';			

		wait for clk_period;	
		tclk <= '0';			--2nd L2H Edge
		wait for clk_period;
		tclk <= '1';			--3rd H2L Edge

		wait for clk_period;
		tdata <= '1';			--3rd H2L Edge
		
		wait for clk_period;
		tclk <= '0';			--3rd L2H Edge
		wait for clk_period;	
		tclk <= '1';			--3rd L2H Edge

		wait for clk_period;
		tdata <= '1';			--4th H2L Edge
		
		wait for clk_period;
		tclk <= '0';			--4th H2L Edge
		wait for clk_period;
		tclk <= '1';			--4th L2H Edge

		wait for clk_period;	
		tdata <= '1';			--4th L2H Edge

		wait for clk_period;
		tclk <= '0';			--5th H2L Edge
		wait for clk_period;
		tclk <= '1';			--5th H2L Edge
		
		wait for clk_period;
		tdata <= '1';			--5th L2H Edge
		
		wait for clk_period;	
		tclk <= '0';			--5th L2H Edge
		wait for clk_period;
		tclk <= '1';			--6th H2L Edge
	
		wait for clk_period;
		tdata <= '1';			--6th H2L Edge
		
		wait for clk_period;
		tclk <= '0';			--6th L2H Edge
		wait for clk_period;	
		tclk <= '1';			--6th L2H Edge

		wait for clk_period;
		tdata <= '1';			--7th H2L Edge
		
		wait for clk_period;
		tclk <= '0';			--7th H2L Edge
		wait for clk_period;
		tclk <= '1';			--7th L2H Edge
		
		wait for clk_period;	
		tdata <= '1';			--7th L2H Edge

		wait for clk_period;
		tclk <= '0';			--8th H2L Edge
		wait for clk_period;
		tclk <= '1';			--8th H2L Edge
		
		wait for clk_period;
		tdata <= '1';			--8th L2H Edge
		
		
		wait for clk_period;	
		tclk <= '0';			--8th L2H Edge
		wait for clk_period;
		tclk <= '1';			--9th H2L Edge
		
		wait for clk_period;
		tdata <= '1';			--8th L2H Edge
		
	
				
		wait for clk_period;	
		tclk <= '0';			--8th L2H Edge
		wait for clk_period;
		tclk <= '1';			--9th H2L Edge
		
		wait for clk_period;  
		tdata <= '1';
		req <= '0';
		
      wait;
   end process;

END;
