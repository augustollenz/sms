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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/augusto/Projeto_Sistemas_Digitais/sms/ipcore_dir/ram/simulation/data_gen.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1814824741_3052351951_p_0(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(102, ng0);

LAB3:    t1 = (t0 + 1936U);
    t2 = *((char **)t1);
    t3 = (8 - 1);
    t4 = (7 - t3);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = (t0 + 5480);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_fast(t7);

LAB2:    t12 = (t0 + 5352);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1814824741_3052351951_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    unsigned int t7;
    char *t8;
    int t9;
    int t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    int t16;
    int t17;
    int t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned char t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;

LAB0:    xsi_set_current_line(103, ng0);

LAB3:    t1 = (t0 + 2096U);
    t2 = *((char **)t1);
    t1 = (t0 + 2256U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (8 * t4);
    t6 = (t5 - 1);
    t7 = (7 - t6);
    t1 = (t0 + 2256U);
    t8 = *((char **)t1);
    t9 = *((int *)t8);
    t10 = (8 * t9);
    t11 = (t10 - 8);
    xsi_vhdl_check_range_of_slice(7, 0, -1, t6, t11, -1);
    t12 = (t7 * 1U);
    t13 = (0 + t12);
    t1 = (t2 + t13);
    t14 = (t0 + 2256U);
    t15 = *((char **)t14);
    t16 = *((int *)t15);
    t17 = (8 * t16);
    t18 = (t17 - 1);
    t14 = (t0 + 2256U);
    t19 = *((char **)t14);
    t20 = *((int *)t19);
    t21 = (8 * t20);
    t22 = (t21 - 8);
    t23 = (t22 - t18);
    t24 = (t23 * -1);
    t24 = (t24 + 1);
    t25 = (1U * t24);
    t26 = (8U != t25);
    if (t26 == 1)
        goto LAB5;

LAB6:    t14 = (t0 + 5544);
    t27 = (t14 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t1, 8U);
    xsi_driver_first_trans_fast_port(t14);

LAB2:    t31 = (t0 + 5368);
    *((int *)t31) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(8U, t25, 0);
    goto LAB6;

}

static void work_a_1814824741_3052351951_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(104, ng0);
    t1 = (t0 + 2256U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 < 1);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 1616U);
    t10 = *((char **)t9);
    t11 = *((unsigned char *)t10);
    t9 = (t0 + 5608);
    t12 = (t9 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t11;
    xsi_driver_first_trans_fast(t9);

LAB2:    t16 = (t0 + 5384);
    *((int *)t16) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 5608);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1814824741_3052351951_p_3(char *t0)
{
    char *t1;
    unsigned char t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    int t14;
    int t15;
    char *t16;

LAB0:    xsi_set_current_line(108, ng0);
    t1 = (t0 + 1256U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5400);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(109, ng0);
    t4 = (t0 + 1616U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = (unsigned char)0;

LAB10:    if (t3 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 1616U);
    t4 = *((char **)t1);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = (unsigned char)0;

LAB15:    if (t2 != 0)
        goto LAB11;

LAB12:    xsi_set_current_line(120, ng0);
    t1 = (t0 + 5672);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    *((int *)t10) = 1;
    xsi_driver_first_trans_fast(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(110, ng0);
    t4 = (t0 + 5672);
    t9 = (t4 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((int *)t12) = 1;
    xsi_driver_first_trans_fast(t4);
    goto LAB6;

LAB8:    t8 = (1 == 1);
    t3 = t8;
    goto LAB10;

LAB11:    xsi_set_current_line(112, ng0);
    t1 = (t0 + 2256U);
    t5 = *((char **)t1);
    t13 = *((int *)t5);
    t8 = (t13 == 1);
    if (t8 != 0)
        goto LAB16;

LAB18:    t1 = (t0 + 2256U);
    t4 = *((char **)t1);
    t13 = *((int *)t4);
    t2 = (t13 < 1);
    if (t2 != 0)
        goto LAB19;

LAB20:    xsi_set_current_line(117, ng0);
    t1 = (t0 + 5672);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    *((int *)t10) = 1;
    xsi_driver_first_trans_fast(t1);

LAB17:    goto LAB6;

LAB13:    t7 = (1 > 1);
    t2 = t7;
    goto LAB15;

LAB16:    xsi_set_current_line(113, ng0);
    t1 = (t0 + 2256U);
    t9 = *((char **)t1);
    t14 = *((int *)t9);
    t15 = (t14 + 1);
    t1 = (t0 + 5672);
    t10 = (t1 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t16 = *((char **)t12);
    *((int *)t16) = t15;
    xsi_driver_first_trans_fast(t1);
    goto LAB17;

LAB19:    xsi_set_current_line(115, ng0);
    t1 = (t0 + 2256U);
    t5 = *((char **)t1);
    t14 = *((int *)t5);
    t15 = (t14 + 1);
    t1 = (t0 + 5672);
    t9 = (t1 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((int *)t12) = t15;
    xsi_driver_first_trans_fast(t1);
    goto LAB17;

}


extern void work_a_1814824741_3052351951_init()
{
	static char *pe[] = {(void *)work_a_1814824741_3052351951_p_0,(void *)work_a_1814824741_3052351951_p_1,(void *)work_a_1814824741_3052351951_p_2,(void *)work_a_1814824741_3052351951_p_3};
	xsi_register_didat("work_a_1814824741_3052351951", "isim/ram_tb.exe.sim/work/a_1814824741_3052351951.didat");
	xsi_register_executes(pe);
}
