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
static const char *ng0 = "/home/augusto/Projeto_Sistemas_Digitais/sms/ipcore_dir/ram/simulation/ram_tb.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );
unsigned char ieee_p_3620187407_sub_1306455576380142462_3965413181(char *, char *, char *, char *, char *);


static void work_a_1923279871_2758704004_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int64 t10;

LAB0:    t1 = (t0 + 2504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t4);
    t2 = (t0 + 3400);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t5;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(89, ng0);
    t10 = (100 * 1000LL);
    t2 = (t0 + 2312);
    xsi_process_wait(t2, t10);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t4);
    t2 = (t0 + 3400);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t5;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(91, ng0);
    t10 = (100 * 1000LL);
    t2 = (t0 + 2312);
    xsi_process_wait(t2, t10);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_1923279871_2758704004_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;

LAB0:    t1 = (t0 + 2752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 3464);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(96, ng0);
    t7 = (1000 * 1000LL);
    t2 = (t0 + 2560);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 3464);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(98, ng0);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_1923279871_2758704004_p_2(char *t0)
{
    char t12[16];
    char t15[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    unsigned int t13;
    char *t16;
    char *t17;
    int t18;

LAB0:    t1 = (t0 + 3000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(110, ng0);

LAB6:    t2 = (t0 + 3320);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t11 = (t0 + 3320);
    *((int *)t11) = 0;
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t6 = (8 - 7);
    t7 = (t6 * 1U);
    t8 = (0 + t7);
    t2 = (t3 + t8);
    t4 = (t12 + 0U);
    t11 = (t4 + 0U);
    *((int *)t11) = 7;
    t11 = (t4 + 4U);
    *((int *)t11) = 0;
    t11 = (t4 + 8U);
    *((int *)t11) = -1;
    t5 = (0 - 7);
    t13 = (t5 * -1);
    t13 = (t13 + 1);
    t11 = (t4 + 12U);
    *((unsigned int *)t11) = t13;
    t11 = (t0 + 5739);
    t16 = (t15 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 0;
    t17 = (t16 + 4U);
    *((int *)t17) = 0;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t18 = (0 - 0);
    t13 = (t18 * 1);
    t13 = (t13 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t13;
    t9 = ieee_p_3620187407_sub_1306455576380142462_3965413181(IEEE_P_3620187407, t2, t12, t11, t15);
    if (t9 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(118, ng0);
    if ((unsigned char)0 == 0)
        goto LAB13;

LAB14:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 5793);
    xsi_report(t2, 27U, (unsigned char)3);

LAB9:    goto LAB2;

LAB5:    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t5 = (8 - 8);
    t6 = (t5 * -1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t3 = (t4 + t8);
    t9 = *((unsigned char *)t3);
    t10 = (t9 == (unsigned char)3);
    if (t10 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(112, ng0);
    if ((unsigned char)0 == 0)
        goto LAB11;

LAB12:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 5767);
    xsi_report(t2, 17U, (unsigned char)3);
    goto LAB9;

LAB11:    t17 = (t0 + 5740);
    xsi_report(t17, 27U, (unsigned char)0);
    goto LAB12;

LAB13:    t2 = (t0 + 5784);
    xsi_report(t2, 9U, (unsigned char)0);
    goto LAB14;

}


extern void work_a_1923279871_2758704004_init()
{
	static char *pe[] = {(void *)work_a_1923279871_2758704004_p_0,(void *)work_a_1923279871_2758704004_p_1,(void *)work_a_1923279871_2758704004_p_2};
	xsi_register_didat("work_a_1923279871_2758704004", "isim/ram_tb.exe.sim/work/a_1923279871_2758704004.didat");
	xsi_register_executes(pe);
}
