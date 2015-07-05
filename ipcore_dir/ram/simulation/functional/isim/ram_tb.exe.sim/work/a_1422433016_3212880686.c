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
static const char *ng0 = "/home/augusto/Projeto_Sistemas_Digitais/sms/ipcore_dir/ram/simulation/random.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3499444699;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_3488768497506413324_503743352(char *, unsigned char , unsigned char );
char *ieee_p_3499444699_sub_17544701978858283880_3536714472(char *, char *, int , int );


static void work_a_1422433016_3212880686_p_0(char *t0)
{
    char t7[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t8;
    char *t9;
    int t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned char t20;
    unsigned char t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(110, ng0);
    t1 = (t0 + 2048U);
    t3 = *((char **)t1);
    t1 = (t0 + 3544);
    t4 = (t1 + 56U);
    t8 = *((char **)t4);
    t9 = (t8 + 56U);
    t22 = *((char **)t9);
    memcpy(t22, t3, 8U);
    xsi_driver_first_trans_fast_port(t1);
    t1 = (t0 + 3464);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(100, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(103, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB8;

LAB10:
LAB9:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(101, ng0);
    t3 = ieee_p_3499444699_sub_17544701978858283880_3536714472(IEEE_P_3499444699, t7, 2, 8);
    t8 = (t0 + 2048U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    memcpy(t8, t3, 8U);
    goto LAB6;

LAB8:    xsi_set_current_line(104, ng0);
    t1 = (t0 + 2048U);
    t4 = *((char **)t1);
    t10 = (8 - 1);
    t11 = (t10 - 7);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t1 = (t4 + t14);
    t6 = *((unsigned char *)t1);
    t8 = (t0 + 2048U);
    t9 = *((char **)t8);
    t15 = (8 - 2);
    t16 = (t15 - 7);
    t17 = (t16 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t8 = (t9 + t19);
    t20 = *((unsigned char *)t8);
    t21 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t6, t20);
    t22 = (t0 + 2168U);
    t23 = *((char **)t22);
    t22 = (t23 + 0);
    *((unsigned char *)t22) = t21;
    xsi_set_current_line(105, ng0);
    t1 = (t0 + 2048U);
    t3 = *((char **)t1);
    t10 = (8 - 2);
    t12 = (7 - t10);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t1 = (t3 + t14);
    t4 = xsi_get_transient_memory(7U);
    memcpy(t4, t1, 7U);
    t8 = (t0 + 2048U);
    t9 = *((char **)t8);
    t11 = (8 - 1);
    t17 = (7 - t11);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t8 = (t9 + t19);
    memcpy(t8, t4, 7U);
    xsi_set_current_line(106, ng0);
    t1 = (t0 + 2168U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 2048U);
    t4 = *((char **)t1);
    t10 = (0 - 7);
    t12 = (t10 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t1 = (t4 + t14);
    *((unsigned char *)t1) = t2;
    goto LAB9;

}


extern void work_a_1422433016_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1422433016_3212880686_p_0};
	xsi_register_didat("work_a_1422433016_3212880686", "isim/ram_tb.exe.sim/work/a_1422433016_3212880686.didat");
	xsi_register_executes(pe);
}
