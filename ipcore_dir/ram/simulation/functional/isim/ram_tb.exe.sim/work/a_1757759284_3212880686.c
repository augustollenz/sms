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
static const char *ng0 = "/home/augusto/Projeto_Sistemas_Digitais/sms/ipcore_dir/ram/simulation/addr_gen.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;
extern char *IEEE_P_3499444699;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3499444699_sub_17544701978858283880_3536714472(char *, char *, int , int );
char *ieee_p_3620187407_sub_1496620905533649268_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_16272557775307340295_3965413181(char *, char *, char *, char *, unsigned char );
unsigned char ieee_p_3620187407_sub_970019341842465249_3965413181(char *, char *, char *, int );


static void work_a_1757759284_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(96, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 4168);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4072);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1757759284_3212880686_p_1(char *t0)
{
    char t7[16];
    char t10[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    int t22;

LAB0:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4088);
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
        goto LAB10;

LAB12:
LAB11:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(101, ng0);
    t3 = (t0 + 6948);
    t9 = (t0 + 6768U);
    t11 = ieee_p_3499444699_sub_17544701978858283880_3536714472(IEEE_P_3499444699, t10, 0, 32);
    t12 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t7, t3, t9, t11, t10);
    t13 = (t7 + 12U);
    t14 = *((unsigned int *)t13);
    t15 = (1U * t14);
    t16 = (32U != t15);
    if (t16 == 1)
        goto LAB8;

LAB9:    t17 = (t0 + 4232);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t12, 32U);
    xsi_driver_first_trans_fast(t17);
    goto LAB6;

LAB8:    xsi_size_not_matching(32U, t15, 0);
    goto LAB9;

LAB10:    xsi_set_current_line(104, ng0);
    t1 = (t0 + 1512U);
    t4 = *((char **)t1);
    t6 = *((unsigned char *)t4);
    t16 = (t6 == (unsigned char)3);
    if (t16 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t1 = (t0 + 6816U);
    t22 = (256 - 1);
    t2 = ieee_p_3620187407_sub_970019341842465249_3965413181(IEEE_P_3620187407, t3, t1, t22);
    if (t2 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(110, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t1 = (t0 + 6816U);
    t4 = ieee_p_3620187407_sub_16272557775307340295_3965413181(IEEE_P_3620187407, t7, t3, t1, (unsigned char)3);
    t8 = (t7 + 12U);
    t14 = *((unsigned int *)t8);
    t15 = (1U * t14);
    t2 = (32U != t15);
    if (t2 == 1)
        goto LAB21;

LAB22:    t9 = (t0 + 4232);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t17 = *((char **)t13);
    memcpy(t17, t4, 32U);
    xsi_driver_first_trans_fast(t9);

LAB17:
LAB14:    goto LAB11;

LAB13:    xsi_set_current_line(105, ng0);
    t1 = (t0 + 1672U);
    t8 = *((char **)t1);
    t1 = (t0 + 4232);
    t9 = (t1 + 56U);
    t11 = *((char **)t9);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t8, 32U);
    xsi_driver_first_trans_fast(t1);
    goto LAB14;

LAB16:    xsi_set_current_line(108, ng0);
    t4 = (t0 + 6980);
    t9 = (t0 + 6768U);
    t11 = ieee_p_3499444699_sub_17544701978858283880_3536714472(IEEE_P_3499444699, t10, 0, 32);
    t12 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t7, t4, t9, t11, t10);
    t13 = (t7 + 12U);
    t14 = *((unsigned int *)t13);
    t15 = (1U * t14);
    t5 = (32U != t15);
    if (t5 == 1)
        goto LAB19;

LAB20:    t17 = (t0 + 4232);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t12, 32U);
    xsi_driver_first_trans_fast(t17);
    goto LAB17;

LAB19:    xsi_size_not_matching(32U, t15, 0);
    goto LAB20;

LAB21:    xsi_size_not_matching(32U, t15, 0);
    goto LAB22;

}


extern void work_a_1757759284_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1757759284_3212880686_p_0,(void *)work_a_1757759284_3212880686_p_1};
	xsi_register_didat("work_a_1757759284_3212880686", "isim/ram_tb.exe.sim/work/a_1757759284_3212880686.didat");
	xsi_register_executes(pe);
}
