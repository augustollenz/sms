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
static const char *ng0 = "/home/augusto/Projeto_Sistemas_Digitais/sms/ipcore_dir/ram/simulation/bmg_stim_gen.vhd";
extern char *WORK_P_2175682626;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
unsigned char work_p_2175682626_sub_11925537914021070576_4060900461(char *, unsigned char , unsigned char , unsigned char );
char *work_p_2175682626_sub_2512774162866427924_4060900461(char *, char *, unsigned char , char *, char *, char *, char *);


static void work_a_3937885924_3212880686_p_0(char *t0)
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

LAB0:    xsi_set_current_line(148, ng0);

LAB3:    t1 = (t0 + 4632U);
    t2 = *((char **)t1);
    t3 = (31 - 7);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 10528);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_delta(t6, 0U, 8U, 0LL);

LAB2:    t11 = (t0 + 10352);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3937885924_3212880686_p_1(char *t0)
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

LAB0:    xsi_set_current_line(149, ng0);

LAB3:    t1 = (t0 + 5112U);
    t2 = *((char **)t1);
    t3 = (31 - 7);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 10592);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_delta(t6, 0U, 8U, 0LL);

LAB2:    t11 = (t0 + 10368);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3937885924_3212880686_p_2(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(150, ng0);

LAB3:    t2 = (t0 + 5432U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    t2 = (t0 + 4792U);
    t6 = *((char **)t2);
    t2 = (t0 + 18272U);
    t7 = (t0 + 4952U);
    t8 = *((char **)t7);
    t7 = (t0 + 18288U);
    t9 = work_p_2175682626_sub_2512774162866427924_4060900461(WORK_P_2175682626, t1, t5, t6, t2, t8, t7);
    t10 = (t1 + 12U);
    t11 = *((unsigned int *)t10);
    t11 = (t11 * 1U);
    t12 = (8U != t11);
    if (t12 == 1)
        goto LAB5;

LAB6:    t13 = (t0 + 10656);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t9, 8U);
    xsi_driver_first_trans_fast_port(t13);

LAB2:    t18 = (t0 + 10384);
    *((int *)t18) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(8U, t11, 0);
    goto LAB6;

}

static void work_a_3937885924_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(151, ng0);

LAB3:    t1 = (t0 + 5272U);
    t2 = *((char **)t1);
    t1 = (t0 + 10720);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 10400);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3937885924_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(153, ng0);

LAB3:    t1 = (t0 + 5592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 10784);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 10416);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3937885924_3212880686_p_5(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int t11;
    int t12;

LAB0:    xsi_set_current_line(196, ng0);
    t1 = (t0 + 3632U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 10432);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(197, ng0);
    t3 = (t0 + 3832U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 5752U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t2 = (t11 < 4);
    if (t2 != 0)
        goto LAB8;

LAB9:    t1 = (t0 + 5752U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t2 = (t11 < 8);
    if (t2 != 0)
        goto LAB10;

LAB11:    t1 = (t0 + 5752U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t2 = (t11 == 8);
    if (t2 != 0)
        goto LAB12;

LAB13:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(198, ng0);
    t3 = (t0 + 10848);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(199, ng0);
    t1 = (t0 + 10912);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(200, ng0);
    t1 = (t0 + 10976);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB8:    xsi_set_current_line(202, ng0);
    t1 = (t0 + 10848);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(203, ng0);
    t1 = (t0 + 10912);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(204, ng0);
    t1 = (t0 + 5752U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t12 = (t11 + 1);
    t1 = (t0 + 10976);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = t12;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB10:    xsi_set_current_line(206, ng0);
    t1 = (t0 + 10848);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(207, ng0);
    t1 = (t0 + 10912);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(208, ng0);
    t1 = (t0 + 5752U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t12 = (t11 + 1);
    t1 = (t0 + 10976);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = t12;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB12:    xsi_set_current_line(210, ng0);
    t1 = (t0 + 10848);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(211, ng0);
    t1 = (t0 + 10912);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(212, ng0);
    t1 = (t0 + 10976);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

}

static void work_a_3937885924_3212880686_p_6(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(241, ng0);

LAB3:    t1 = (t0 + 5432U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    t5 = work_p_2175682626_sub_11925537914021070576_4060900461(WORK_P_2175682626, t4, (unsigned char)3, (unsigned char)2);
    t1 = (t0 + 11040);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t5;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);

LAB2:    t10 = (t0 + 10448);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3937885924_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3937885924_3212880686_p_0,(void *)work_a_3937885924_3212880686_p_1,(void *)work_a_3937885924_3212880686_p_2,(void *)work_a_3937885924_3212880686_p_3,(void *)work_a_3937885924_3212880686_p_4,(void *)work_a_3937885924_3212880686_p_5,(void *)work_a_3937885924_3212880686_p_6};
	xsi_register_didat("work_a_3937885924_3212880686", "isim/ram_tb.exe.sim/work/a_3937885924_3212880686.didat");
	xsi_register_executes(pe);
}
