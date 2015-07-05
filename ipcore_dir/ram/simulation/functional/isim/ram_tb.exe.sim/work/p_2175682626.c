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
extern char *STD_STANDARD;
static const char *ng1 = "Function if_then_else ended without a return statement";



int work_p_2175682626_sub_78417520111523319_4060900461(char *t1, int t2, int t3)
{
    char t4[128];
    char t5[16];
    char t9[8];
    int t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    char *t15;
    char *t16;
    unsigned char t17;
    int t18;
    int t19;

LAB0:    t6 = (t4 + 4U);
    t7 = ((STD_STANDARD) + 384);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    xsi_type_set_default_value(t7, t9, 0);
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 4U;
    t12 = (t5 + 4U);
    *((int *)t12) = t2;
    t13 = (t5 + 8U);
    *((int *)t13) = t3;
    t14 = (t2 / t3);
    t15 = (t6 + 56U);
    t16 = *((char **)t15);
    t15 = (t16 + 0);
    *((int *)t15) = t14;
    t14 = xsi_vhdl_mod(t2, t3);
    t17 = (t14 != 0);
    if (t17 != 0)
        goto LAB2;

LAB4:
LAB3:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t14 = *((int *)t8);
    t0 = t14;

LAB1:    return t0;
LAB2:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t18 = *((int *)t8);
    t19 = (t18 + 1);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = t19;
    goto LAB3;

LAB5:;
}

char *work_p_2175682626_sub_2512774162866427924_4060900461(char *t1, char *t2, unsigned char t3, char *t4, char *t5, char *t6, char *t7)
{
    char t9[40];
    char *t0;
    char *t10;
    char *t11;
    unsigned char t12;
    char *t13;
    char *t14;
    unsigned char t15;
    char *t16;
    unsigned char t17;
    char *t18;
    unsigned int t19;
    char *t20;
    int t21;
    char *t22;
    int t23;
    char *t24;
    int t25;
    char *t26;
    char *t27;
    int t28;
    unsigned int t29;

LAB0:    t10 = (t9 + 4U);
    *((unsigned char *)t10) = t3;
    t11 = (t9 + 5U);
    t12 = (t4 != 0);
    if (t12 == 1)
        goto LAB3;

LAB2:    t13 = (t9 + 13U);
    *((char **)t13) = t5;
    t14 = (t9 + 21U);
    t15 = (t6 != 0);
    if (t15 == 1)
        goto LAB5;

LAB4:    t16 = (t9 + 29U);
    *((char **)t16) = t7;
    t17 = (!(t3));
    if (t17 != 0)
        goto LAB6;

LAB8:    t18 = (t5 + 12U);
    t19 = *((unsigned int *)t18);
    t19 = (t19 * 1U);
    t0 = xsi_get_transient_memory(t19);
    memcpy(t0, t4, t19);
    t20 = (t5 + 0U);
    t21 = *((int *)t20);
    t22 = (t5 + 4U);
    t23 = *((int *)t22);
    t24 = (t5 + 8U);
    t25 = *((int *)t24);
    t26 = (t2 + 0U);
    t27 = (t26 + 0U);
    *((int *)t27) = t21;
    t27 = (t26 + 4U);
    *((int *)t27) = t23;
    t27 = (t26 + 8U);
    *((int *)t27) = t25;
    t28 = (t23 - t21);
    t29 = (t28 * t25);
    t29 = (t29 + 1);
    t27 = (t26 + 12U);
    *((unsigned int *)t27) = t29;

LAB1:    return t0;
LAB3:    *((char **)t11) = t4;
    goto LAB2;

LAB5:    *((char **)t14) = t6;
    goto LAB4;

LAB6:    t18 = (t7 + 12U);
    t19 = *((unsigned int *)t18);
    t19 = (t19 * 1U);
    t0 = xsi_get_transient_memory(t19);
    memcpy(t0, t6, t19);
    t20 = (t7 + 0U);
    t21 = *((int *)t20);
    t22 = (t7 + 4U);
    t23 = *((int *)t22);
    t24 = (t7 + 8U);
    t25 = *((int *)t24);
    t26 = (t2 + 0U);
    t27 = (t26 + 0U);
    *((int *)t27) = t21;
    t27 = (t26 + 4U);
    *((int *)t27) = t23;
    t27 = (t26 + 8U);
    *((int *)t27) = t25;
    t28 = (t23 - t21);
    t29 = (t28 * t25);
    t29 = (t29 + 1);
    t27 = (t26 + 12U);
    *((unsigned int *)t27) = t29;
    goto LAB1;

LAB7:    xsi_error(ng1);
    t0 = 0;
    goto LAB1;

LAB9:    goto LAB7;

LAB10:    goto LAB7;

}

unsigned char work_p_2175682626_sub_11925537914021070576_4060900461(char *t1, unsigned char t2, unsigned char t3, unsigned char t4)
{
    char t6[8];
    unsigned char t0;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;

LAB0:    t7 = (t6 + 4U);
    *((unsigned char *)t7) = t2;
    t8 = (t6 + 5U);
    *((unsigned char *)t8) = t3;
    t9 = (t6 + 6U);
    *((unsigned char *)t9) = t4;
    t10 = (!(t2));
    if (t10 != 0)
        goto LAB2;

LAB4:    t0 = t3;

LAB1:    return t0;
LAB2:    t0 = t4;
    goto LAB1;

LAB3:    xsi_error(ng1);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    goto LAB3;

}

int work_p_2175682626_sub_4998376546216353788_4060900461(char *t1, unsigned char t2, int t3, int t4)
{
    char t5[128];
    char t6[16];
    char t10[8];
    int t0;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned char t16;
    char *t17;
    char *t18;
    int t19;

LAB0:    t7 = (t5 + 4U);
    t8 = ((STD_STANDARD) + 384);
    t9 = (t7 + 88U);
    *((char **)t9) = t8;
    t11 = (t7 + 56U);
    *((char **)t11) = t10;
    *((int *)t10) = 0;
    t12 = (t7 + 80U);
    *((unsigned int *)t12) = 4U;
    t13 = (t6 + 4U);
    *((unsigned char *)t13) = t2;
    t14 = (t6 + 5U);
    *((int *)t14) = t3;
    t15 = (t6 + 9U);
    *((int *)t15) = t4;
    t16 = (t2 == (unsigned char)0);
    if (t16 != 0)
        goto LAB2;

LAB4:    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((int *)t8) = t3;

LAB3:    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t19 = *((int *)t9);
    t0 = t19;

LAB1:    return t0;
LAB2:    t17 = (t7 + 56U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    *((int *)t17) = t4;
    goto LAB3;

LAB5:;
}

char *work_p_2175682626_sub_4497644195088856487_4060900461(char *t1, char *t2, unsigned char t3, char *t4, char *t5, char *t6, char *t7)
{
    char t9[40];
    char *t0;
    char *t10;
    char *t11;
    unsigned char t12;
    char *t13;
    char *t14;
    unsigned char t15;
    char *t16;
    unsigned char t17;
    char *t18;
    unsigned int t19;
    char *t20;
    int t21;
    char *t22;
    int t23;
    char *t24;
    int t25;
    char *t26;
    char *t27;
    int t28;
    unsigned int t29;

LAB0:    t10 = (t9 + 4U);
    *((unsigned char *)t10) = t3;
    t11 = (t9 + 5U);
    t12 = (t4 != 0);
    if (t12 == 1)
        goto LAB3;

LAB2:    t13 = (t9 + 13U);
    *((char **)t13) = t5;
    t14 = (t9 + 21U);
    t15 = (t6 != 0);
    if (t15 == 1)
        goto LAB5;

LAB4:    t16 = (t9 + 29U);
    *((char **)t16) = t7;
    t17 = (!(t3));
    if (t17 != 0)
        goto LAB6;

LAB8:    t18 = (t5 + 12U);
    t19 = *((unsigned int *)t18);
    t19 = (t19 * 1U);
    t0 = xsi_get_transient_memory(t19);
    memcpy(t0, t4, t19);
    t20 = (t5 + 0U);
    t21 = *((int *)t20);
    t22 = (t5 + 4U);
    t23 = *((int *)t22);
    t24 = (t5 + 8U);
    t25 = *((int *)t24);
    t26 = (t2 + 0U);
    t27 = (t26 + 0U);
    *((int *)t27) = t21;
    t27 = (t26 + 4U);
    *((int *)t27) = t23;
    t27 = (t26 + 8U);
    *((int *)t27) = t25;
    t28 = (t23 - t21);
    t29 = (t28 * t25);
    t29 = (t29 + 1);
    t27 = (t26 + 12U);
    *((unsigned int *)t27) = t29;

LAB1:    return t0;
LAB3:    *((char **)t11) = t4;
    goto LAB2;

LAB5:    *((char **)t14) = t6;
    goto LAB4;

LAB6:    t18 = (t7 + 12U);
    t19 = *((unsigned int *)t18);
    t19 = (t19 * 1U);
    t0 = xsi_get_transient_memory(t19);
    memcpy(t0, t6, t19);
    t20 = (t7 + 0U);
    t21 = *((int *)t20);
    t22 = (t7 + 4U);
    t23 = *((int *)t22);
    t24 = (t7 + 8U);
    t25 = *((int *)t24);
    t26 = (t2 + 0U);
    t27 = (t26 + 0U);
    *((int *)t27) = t21;
    t27 = (t26 + 4U);
    *((int *)t27) = t23;
    t27 = (t26 + 8U);
    *((int *)t27) = t25;
    t28 = (t23 - t21);
    t29 = (t28 * t25);
    t29 = (t29 + 1);
    t27 = (t26 + 12U);
    *((unsigned int *)t27) = t29;
    goto LAB1;

LAB7:    xsi_error(ng1);
    t0 = 0;
    goto LAB1;

LAB9:    goto LAB7;

LAB10:    goto LAB7;

}

int work_p_2175682626_sub_15457353181902354256_4060900461(char *t1, int t2)
{
    char t3[248];
    char t4[8];
    char t8[8];
    char t14[8];
    int t0;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    unsigned char t18;
    char *t19;
    char *t20;
    int t21;
    int t22;
    int t23;

LAB0:    t5 = (t3 + 4U);
    t6 = ((STD_STANDARD) + 384);
    t7 = (t5 + 88U);
    *((char **)t7) = t6;
    t9 = (t5 + 56U);
    *((char **)t9) = t8;
    *((int *)t8) = 0;
    t10 = (t5 + 80U);
    *((unsigned int *)t10) = 4U;
    t11 = (t3 + 124U);
    t12 = ((STD_STANDARD) + 384);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    *((int *)t14) = 1;
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 4U;
    t17 = (t4 + 4U);
    *((int *)t17) = t2;
    t18 = (t2 <= 1);
    if (t18 != 0)
        goto LAB2;

LAB4:
LAB5:    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t21 = *((int *)t7);
    t18 = (t21 < t2);
    if (t18 != 0)
        goto LAB6;

LAB8:
LAB3:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t21 = *((int *)t7);
    t0 = t21;

LAB1:    return t0;
LAB2:    t19 = (t5 + 56U);
    t20 = *((char **)t19);
    t19 = (t20 + 0);
    *((int *)t19) = 1;
    goto LAB3;

LAB6:    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    t22 = *((int *)t9);
    t23 = (t22 + 1);
    t6 = (t5 + 56U);
    t10 = *((char **)t6);
    t6 = (t10 + 0);
    *((int *)t6) = t23;
    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t21 = *((int *)t7);
    t22 = (t21 * 2);
    t6 = (t11 + 56U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    *((int *)t6) = t22;
    goto LAB5;

LAB7:;
LAB9:;
}


extern void work_p_2175682626_init()
{
	static char *se[] = {(void *)work_p_2175682626_sub_78417520111523319_4060900461,(void *)work_p_2175682626_sub_2512774162866427924_4060900461,(void *)work_p_2175682626_sub_11925537914021070576_4060900461,(void *)work_p_2175682626_sub_4998376546216353788_4060900461,(void *)work_p_2175682626_sub_4497644195088856487_4060900461,(void *)work_p_2175682626_sub_15457353181902354256_4060900461};
	xsi_register_didat("work_p_2175682626", "isim/ram_tb.exe.sim/work/p_2175682626.didat");
	xsi_register_subprogram_executes(se);
}
