/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *STD_STANDARD;
char *IEEE_P_3620187407;
char *SYNOPSYS_P_3308480207;
char *IEEE_P_3499444699;
char *IEEE_P_0017514958;
char *IEEE_P_1242562249;
char *STD_TEXTIO;
char *WORK_P_2175682626;
char *UNISIM_P_0947159679;
char *IEEE_P_3564397177;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    ieee_p_1242562249_init();
    synopsys_p_3308480207_init();
    ieee_p_0017514958_init();
    std_textio_init();
    work_p_2175682626_init();
    unisim_p_0947159679_init();
    work_a_1422433016_3212880686_init();
    work_a_1814824741_3052351951_init();
    work_a_0931578142_2466324600_init();
    work_a_1757759284_3212880686_init();
    work_a_3206535093_1680675862_init();
    work_a_3937885924_3212880686_init();
    unisim_a_1490675510_1976025627_init();
    ieee_p_3564397177_init();
    xilinxcorelib_a_1923264462_2959432447_init();
    xilinxcorelib_a_4282816042_1709443946_init();
    xilinxcorelib_a_1676187077_0543512595_init();
    xilinxcorelib_a_3579414959_3212880686_init();
    work_a_3830602496_2414994591_init();
    work_a_2780441866_0912031422_init();
    work_a_0782988956_1439580264_init();
    work_a_1923279871_2758704004_init();


    xsi_register_tops("work_a_1923279871_2758704004");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    SYNOPSYS_P_3308480207 = xsi_get_engine_memory("synopsys_p_3308480207");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    IEEE_P_0017514958 = xsi_get_engine_memory("ieee_p_0017514958");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    WORK_P_2175682626 = xsi_get_engine_memory("work_p_2175682626");
    UNISIM_P_0947159679 = xsi_get_engine_memory("unisim_p_0947159679");
    IEEE_P_3564397177 = xsi_get_engine_memory("ieee_p_3564397177");

    return xsi_run_simulation(argc, argv);

}
