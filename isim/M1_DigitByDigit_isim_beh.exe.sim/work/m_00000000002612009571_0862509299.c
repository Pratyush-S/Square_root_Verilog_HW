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
static int ng1[] = {15, 0};
static int ng2[] = {0, 0};
static int ng3[] = {7, 0};
static int ng4[] = {4, 0};
static unsigned int ng5[] = {1U, 0U};
static int ng6[] = {1, 0};
static int ng7[] = {2, 0};



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
    t2 = (t0 + 4464);
    *((int *)t2) = 1;
    t3 = (t0 + 3680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 9, 0LL);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 11, 0LL);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 22, 0LL);
    goto LAB2;

}

static void Always_41_1(char *t0)
{
    char t13[8];
    char t14[8];
    char t26[8];
    char t28[8];
    char t29[8];
    char t37[8];
    char t79[8];
    char t81[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    int t61;
    int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t80;
    char *t82;

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 4480);
    *((int *)t2) = 1;
    t3 = (t0 + 3928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t2) == 0)
        goto LAB10;

LAB12:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;

LAB13:    memset(t14, 0, 8);
    t5 = (t13 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t17 = *((unsigned int *)t13);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t5) != 0)
        goto LAB16;

LAB17:    t12 = (t14 + 4);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t12);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB18;

LAB19:    memcpy(t37, t14, 8);

LAB20:    t69 = (t37 + 4);
    t70 = *((unsigned int *)t69);
    t71 = (~(t70));
    t72 = *((unsigned int *)t37);
    t73 = (t72 & t71);
    t74 = (t73 != 0);
    if (t74 > 0)
        goto LAB28;

LAB29:
LAB30:    goto LAB2;

LAB6:    xsi_set_current_line(44, ng0);

LAB9:    xsi_set_current_line(45, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2568);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 9);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 11);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 22);
    goto LAB8;

LAB10:    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB14:    *((unsigned int *)t14) = 1;
    goto LAB17;

LAB16:    t11 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB17;

LAB18:    t23 = (t0 + 2568);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t27 = ((char*)((ng3)));
    memset(t26, 0, 8);
    xsi_vlog_signed_unary_minus(t26, 32, t27, 32);
    memset(t28, 0, 8);
    xsi_vlog_signed_greater(t28, 32, t25, 9, t26, 32);
    memset(t29, 0, 8);
    t30 = (t28 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (~(t31));
    t33 = *((unsigned int *)t28);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t30) != 0)
        goto LAB23;

LAB24:    t38 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t29);
    t40 = (t38 & t39);
    *((unsigned int *)t37) = t40;
    t41 = (t14 + 4);
    t42 = (t29 + 4);
    t43 = (t37 + 4);
    t44 = *((unsigned int *)t41);
    t45 = *((unsigned int *)t42);
    t46 = (t44 | t45);
    *((unsigned int *)t43) = t46;
    t47 = *((unsigned int *)t43);
    t48 = (t47 != 0);
    if (t48 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB20;

LAB21:    *((unsigned int *)t29) = 1;
    goto LAB24;

LAB23:    t36 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB24;

LAB25:    t49 = *((unsigned int *)t37);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t37) = (t49 | t50);
    t51 = (t14 + 4);
    t52 = (t29 + 4);
    t53 = *((unsigned int *)t14);
    t54 = (~(t53));
    t55 = *((unsigned int *)t51);
    t56 = (~(t55));
    t57 = *((unsigned int *)t29);
    t58 = (~(t57));
    t59 = *((unsigned int *)t52);
    t60 = (~(t59));
    t61 = (t54 & t56);
    t62 = (t58 & t60);
    t63 = (~(t61));
    t64 = (~(t62));
    t65 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t65 & t63);
    t66 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t66 & t64);
    t67 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t67 & t63);
    t68 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t68 & t64);
    goto LAB27;

LAB28:    xsi_set_current_line(51, ng0);

LAB31:    xsi_set_current_line(52, ng0);
    t75 = (t0 + 1768);
    t76 = (t75 + 56U);
    t77 = *((char **)t76);
    t78 = ((char*)((ng4)));
    memset(t79, 0, 8);
    xsi_vlog_unsigned_multiply(t79, 32, t77, 11, t78, 32);
    t80 = ((char*)((ng5)));
    memset(t81, 0, 8);
    xsi_vlog_unsigned_add(t81, 32, t79, 32, t80, 32);
    t82 = (t0 + 2248);
    xsi_vlogvar_assign_value(t82, t81, 0, 0, 11);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1008U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t11 = (t0 + 2568);
    t12 = (t11 + 56U);
    t23 = *((char **)t12);
    xsi_vlog_generic_get_index_select_value(t13, 1, t3, t5, 2, t23, 9, 1);
    t24 = (t0 + 1928);
    xsi_vlogvar_assign_value(t24, t13, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1008U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t11 = (t0 + 2568);
    t12 = (t11 + 56U);
    t23 = *((char **)t12);
    t24 = ((char*)((ng6)));
    memset(t14, 0, 8);
    xsi_vlog_signed_minus(t14, 32, t23, 9, t24, 32);
    xsi_vlog_generic_get_index_select_value(t13, 1, t3, t5, 2, t14, 32, 1);
    t25 = (t0 + 2088);
    xsi_vlogvar_assign_value(t25, t13, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_multiply(t13, 32, t4, 22, t5, 32);
    t11 = (t0 + 2088);
    t12 = (t11 + 56U);
    t23 = *((char **)t12);
    t24 = (t0 + 1928);
    t25 = (t24 + 56U);
    t27 = *((char **)t25);
    xsi_vlogtype_concat(t14, 32, 2, 2U, t27, 1, t23, 1);
    memset(t26, 0, 8);
    xsi_vlog_unsigned_add(t26, 32, t13, 32, t14, 32);
    t30 = (t0 + 2408);
    xsi_vlogvar_assign_value(t30, t26, 0, 0, 22);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_multiply(t13, 32, t4, 11, t5, 32);
    t11 = (t0 + 1768);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 11);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2248);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t23 = (t4 + 4);
    if (*((unsigned int *)t23) != 0)
        goto LAB33;

LAB32:    t24 = (t12 + 4);
    if (*((unsigned int *)t24) != 0)
        goto LAB33;

LAB36:    if (*((unsigned int *)t4) < *((unsigned int *)t12))
        goto LAB35;

LAB34:    *((unsigned int *)t13) = 1;

LAB35:    t27 = (t13 + 4);
    t6 = *((unsigned int *)t27);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB37;

LAB38:
LAB39:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t13, 0, 8);
    xsi_vlog_signed_minus(t13, 32, t4, 9, t5, 32);
    t11 = (t0 + 2568);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 9);
    goto LAB30;

LAB33:    t25 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB35;

LAB37:    xsi_set_current_line(58, ng0);

LAB40:    xsi_set_current_line(59, ng0);
    t30 = (t0 + 2408);
    t36 = (t30 + 56U);
    t41 = *((char **)t36);
    t42 = (t0 + 2248);
    t43 = (t42 + 56U);
    t51 = *((char **)t43);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 22, t41, 22, t51, 11);
    t52 = (t0 + 2408);
    xsi_vlogvar_assign_value(t52, t14, 0, 0, 22);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 11, t5, 32);
    t11 = (t0 + 1768);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 11);
    goto LAB39;

}

static void impl1_execute(char *t0)
{
    char t6[8];
    char t17[8];
    char t26[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;

LAB0:    t1 = (t0 + 4144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4496);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t3 = (t0 + 2728);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB5;

LAB6:    if (*((unsigned int *)t4) != 0)
        goto LAB7;

LAB8:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB9;

LAB10:    memcpy(t34, t6, 8);

LAB11:    xsi_vlogimplicitvar_assign_value(t3, t34, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t6) = 1;
    goto LAB8;

LAB7:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB8;

LAB9:    t18 = (t0 + 1368U);
    t19 = *((char **)t18);
    memset(t17, 0, 8);
    t18 = (t19 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t19);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB15;

LAB13:    if (*((unsigned int *)t18) == 0)
        goto LAB12;

LAB14:    t25 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t25) = 1;

LAB15:    memset(t26, 0, 8);
    t27 = (t17 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t17);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t27) != 0)
        goto LAB18;

LAB19:    t35 = *((unsigned int *)t6);
    t36 = *((unsigned int *)t26);
    t37 = (t35 & t36);
    *((unsigned int *)t34) = t37;
    t38 = (t6 + 4);
    t39 = (t26 + 4);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t38);
    t42 = *((unsigned int *)t39);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB20;

LAB21:
LAB22:    goto LAB11;

LAB12:    *((unsigned int *)t17) = 1;
    goto LAB15;

LAB16:    *((unsigned int *)t26) = 1;
    goto LAB19;

LAB18:    t33 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB19;

LAB20:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t46 | t47);
    t48 = (t6 + 4);
    t49 = (t26 + 4);
    t50 = *((unsigned int *)t6);
    t51 = (~(t50));
    t52 = *((unsigned int *)t48);
    t53 = (~(t52));
    t54 = *((unsigned int *)t26);
    t55 = (~(t54));
    t56 = *((unsigned int *)t49);
    t57 = (~(t56));
    t58 = (t51 & t53);
    t59 = (t55 & t57);
    t60 = (~(t58));
    t61 = (~(t59));
    t62 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t62 & t60);
    t63 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t63 & t61);
    t64 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t64 & t60);
    t65 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t65 & t61);
    goto LAB22;

}


extern void work_m_00000000002612009571_0862509299_init()
{
	static char *pe[] = {(void *)Always_34_0,(void *)Always_41_1,(void *)impl1_execute};
	xsi_register_didat("work_m_00000000002612009571_0862509299", "isim/M1_DigitByDigit_isim_beh.exe.sim/work/m_00000000002612009571_0862509299.didat");
	xsi_register_executes(pe);
}
