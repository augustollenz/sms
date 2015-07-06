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
static const char *ng0 = "/home/augusto/Dropbox/Projeto_Sistemas_Digitais/sms/ula.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

char *ieee_p_1242562249_sub_1701011461141717515_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1701011461141789389_1035706684(char *, char *, char *, char *, char *, char *);


static void work_a_3735238183_1516540902_p_0(char *t0)
{
    char t22[16];
    char t23[16];
    char t26[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    int t20;
    int t21;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;

LAB0:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 4120);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(22, ng0);
    t4 = (t0 + 1192U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t17 = (7 - 1);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t2 = (t4 + t19);
    t5 = (t0 + 6627);
    t20 = xsi_mem_cmp(t5, t2, 2U);
    if (t20 == 1)
        goto LAB12;

LAB15:    t11 = (t0 + 6629);
    t21 = xsi_mem_cmp(t11, t2, 2U);
    if (t21 == 1)
        goto LAB13;

LAB16:
LAB14:    xsi_set_current_line(33, ng0);
    t2 = xsi_get_transient_memory(9U);
    memset(t2, 0, 9U);
    t4 = t2;
    memset(t4, (unsigned char)2, 9U);
    t5 = (t0 + 4232);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 9U);
    xsi_driver_first_trans_fast(t5);

LAB11:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(23, ng0);
    t4 = xsi_get_transient_memory(9U);
    memset(t4, 0, 9U);
    t11 = t4;
    memset(t11, (unsigned char)2, 9U);
    t12 = (t0 + 4232);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 9U);
    xsi_driver_first_trans_fast(t12);
    goto LAB9;

LAB12:    xsi_set_current_line(28, ng0);
    t13 = (t0 + 1352U);
    t14 = *((char **)t13);
    t15 = ((IEEE_P_2592010699) + 4000);
    t16 = (t0 + 6504U);
    t13 = xsi_base_array_concat(t13, t23, t15, (char)99, (unsigned char)2, (char)97, t14, t16, (char)101);
    t24 = (t0 + 1512U);
    t25 = *((char **)t24);
    t27 = ((IEEE_P_2592010699) + 4000);
    t28 = (t0 + 6520U);
    t24 = xsi_base_array_concat(t24, t26, t27, (char)99, (unsigned char)2, (char)97, t25, t28, (char)101);
    t29 = ieee_p_1242562249_sub_1701011461141717515_1035706684(IEEE_P_1242562249, t22, t13, t23, t24, t26);
    t30 = (t0 + 4232);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    memcpy(t34, t29, 9U);
    xsi_driver_first_trans_fast(t30);
    goto LAB11;

LAB13:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1352U);
    t4 = *((char **)t2);
    t5 = ((IEEE_P_2592010699) + 4000);
    t8 = (t0 + 6504U);
    t2 = xsi_base_array_concat(t2, t23, t5, (char)99, (unsigned char)2, (char)97, t4, t8, (char)101);
    t11 = (t0 + 1512U);
    t12 = *((char **)t11);
    t13 = ((IEEE_P_2592010699) + 4000);
    t14 = (t0 + 6520U);
    t11 = xsi_base_array_concat(t11, t26, t13, (char)99, (unsigned char)2, (char)97, t12, t14, (char)101);
    t15 = ieee_p_1242562249_sub_1701011461141789389_1035706684(IEEE_P_1242562249, t22, t2, t23, t11, t26);
    t16 = (t0 + 4232);
    t24 = (t16 + 56U);
    t25 = *((char **)t24);
    t27 = (t25 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t15, 9U);
    xsi_driver_first_trans_fast(t16);
    goto LAB11;

LAB17:;
}

static void work_a_3735238183_1516540902_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(39, ng0);

LAB3:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = (8 - 7);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 4296);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 4136);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3735238183_1516540902_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(40, ng0);

LAB3:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = (8 - 8);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 4360);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 4152);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3735238183_1516540902_init()
{
	static char *pe[] = {(void *)work_a_3735238183_1516540902_p_0,(void *)work_a_3735238183_1516540902_p_1,(void *)work_a_3735238183_1516540902_p_2};
	xsi_register_didat("work_a_3735238183_1516540902", "isim/sms_tb_isim_beh.exe.sim/work/a_3735238183_1516540902.didat");
	xsi_register_executes(pe);
}
