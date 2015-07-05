--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   22:01:54 06/27/2015
-- Design Name:   
-- Module Name:   C:/Users/Maicor B/Desktop/Projeto_Sistemas_Digitais/sms/ula_tb.vhd
-- Project Name:  sms
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: ula
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY ula_tb IS
END ula_tb;
 
ARCHITECTURE behavior OF ula_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT ula
    PORT(
         clk 			: IN  std_logic;
         rst_n 		: IN  std_logic;
         data_in_a 	: IN  std_logic_vector(7 downto 0);
         data_in_b 	: IN  std_logic_vector(7 downto 0);
         data_out 	: OUT  std_logic_vector(7 downto 0);
         carry_out 	: OUT  std_logic;
         operation 	: IN  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk 			: std_logic := '0';
   signal rst_n 		: std_logic := '0';
   signal data_in_a 	: std_logic_vector(7 downto 0) := (others => '0');
   signal data_in_b 	: std_logic_vector(7 downto 0) := (others => '0');
   signal operation 	: std_logic_vector(7 downto 0) := (others => '0');

 	--Outputs
   signal data_out 	: std_logic_vector(7 downto 0);
   signal carry_out 	: std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ula PORT MAP (
          clk => clk,
          rst_n => rst_n,
          data_in_a => data_in_a,
          data_in_b => data_in_b,
          data_out => data_out,
          carry_out => carry_out,
          operation => operation
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
		rst_n <= '1';
      wait for clk_period*10;

      -- insert stimulus here 
		operation <= x"00";
		data_in_a <= x"30";
		data_in_b <= x"20";
		wait for clk_period;
		data_in_a <= x"FF";
		data_in_b <= x"02";
		wait for clk_period;
		operation <= x"01";
		data_in_a <= x"30";
		data_in_b <= x"20";
		wait for clk_period;
		data_in_a <= x"00";
		data_in_b <= x"01";
		wait for clk_period;
		data_in_a <= x"25";
		data_in_b <= x"25";
		wait for clk_period;
		operation <= x"00";
		data_in_a <= x"16";
		data_in_b <= x"16";

      wait;
   end process;

END;
