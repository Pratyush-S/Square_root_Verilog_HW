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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "X:/GITHUB/Square_root_Verilog_HW/M1_DigitByDigit.v";
static int ng1[] = {5, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {1, 0};
static int ng5[] = {4, 0};
static int ng6[] = {2, 0};



static void Always_34_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 3648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 4216);
    *((int *)t2) = 1;
    t3 = (t0 + 3680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 5);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    goto LAB2;

}

static void Always_40_1(char *t0)
{
    char t4[8];
    char t11[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 4232);
    *((int *)t2) = 1;
    t3 = (t0 + 3928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t5 = ((char*)((ng3)));
    t6 = (t0 + 1768);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlogtype_concat(t4, 8, 8, 2U, t8, 6, t5, 2);
    t9 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t9, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1008U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2728);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_generic_get_index_select_value(t4, 1, t3, t6, 2, t9, 5, 2);
    t10 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t10, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1008U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 2728);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng4)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 32, t9, 5, t10, 32);
    xsi_vlog_generic_get_index_select_value(t4, 1, t3, t6, 2, t11, 32, 2);
    t12 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_multiply(t4, 32, t5, 6, t6, 32);
    t7 = (t0 + 2088);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 1928);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    xsi_vlogtype_concat(t11, 32, 2, 2U, t13, 1, t9, 1);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t4, 32, t11, 32);
    t15 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t15, t14, 0, 0, 6, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng6)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_multiply(t4, 32, t5, 6, t6, 32);
    t7 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 6, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2408);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memset(t4, 0, 8);
    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB7;

LAB6:    t10 = (t8 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t5) > *((unsigned int *)t8))
        goto LAB8;

LAB9:    t13 = (t4 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (~(t16));
    t18 = *((unsigned int *)t4);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB11;

LAB12:
LAB13:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng6)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t5, 5, t6, 32);
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 5);
    goto LAB2;

LAB7:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(50, ng0);

LAB14:    xsi_set_current_line(51, ng0);
    t15 = (t0 + 2568);
    t21 = (t15 + 56U);
    t22 = *((char **)t21);
    t23 = (t0 + 2408);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 8, t22, 6, t25, 8);
    t26 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t26, t11, 0, 0, 6, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 6, t6, 32);
    t7 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 6, 0LL);
    goto LAB13;

}


extern void work_m_00000000001426708906_0862509299_init()
{
	static char *pe[] = {(void *)Always_34_0,(void *)Always_40_1};
	xsi_register_didat("work_m_00000000001426708906_0862509299", "isim/M1_DigitByDigit_isim_beh.exe.sim/work/m_00000000001426708906_0862509299.didat");
	xsi_register_executes(pe);
}
