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
static const char *ng0 = "C:/Users/Student/Documents/dhb/lab5group4project2/fpcvt.v";
static int ng1[] = {1, 0};
static int ng2[] = {10, 0};
static int ng3[] = {0, 0};
static int ng4[] = {2047, 0};
static int ng5[] = {11, 0};
static unsigned int ng6[] = {7U, 0U};
static int ng7[] = {9, 0};
static unsigned int ng8[] = {6U, 0U};
static int ng9[] = {8, 0};
static unsigned int ng10[] = {5U, 0U};
static int ng11[] = {7, 0};
static unsigned int ng12[] = {4U, 0U};
static int ng13[] = {6, 0};
static unsigned int ng14[] = {3U, 0U};
static int ng15[] = {5, 0};
static unsigned int ng16[] = {2U, 0U};
static int ng17[] = {4, 0};
static unsigned int ng18[] = {1U, 0U};
static unsigned int ng19[] = {0U, 0U};
static int ng20[] = {3, 0};
static int ng21[] = {15, 0};
static unsigned int ng22[] = {8U, 0U};



static void Always_31_0(char *t0)
{
    char t6[8];
    char t28[8];
    char t29[8];
    char t40[8];
    char t41[8];
    char t42[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    int t50;
    char *t51;
    unsigned int t52;
    int t53;
    int t54;
    char *t55;
    unsigned int t56;
    int t57;
    int t58;
    unsigned int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    int t63;
    int t64;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 3328);
    *((int *)t2) = 1;
    t3 = (t0 + 3040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 11);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 11);
    t13 = (t12 & 1);
    *((unsigned int *)t4) = t13;
    t14 = (t0 + 1448);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 1);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t14 = (t5 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t14);
    t13 = (t11 ^ t12);
    t15 = (t10 | t13);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t14);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(38, ng0);

LAB23:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 2047U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 2047U);
    t5 = (t0 + 1928);
    t7 = (t0 + 1928);
    t14 = (t7 + 72U);
    t21 = *((char **)t14);
    t22 = ((char*)((ng2)));
    t30 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t28, t29, t40, ((int*)(t21)), 2, t22, 32, 1, t30, 32, 1);
    t31 = (t28 + 4);
    t15 = *((unsigned int *)t31);
    t50 = (!(t15));
    t32 = (t29 + 4);
    t16 = *((unsigned int *)t32);
    t53 = (!(t16));
    t54 = (t50 && t53);
    t39 = (t40 + 4);
    t17 = *((unsigned int *)t39);
    t57 = (!(t17));
    t58 = (t54 && t57);
    if (t58 == 1)
        goto LAB24;

LAB25:
LAB12:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    t4 = (t0 + 1928);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t14 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t6, t7, 2, t14, 32, 1);
    t21 = (t6 + 4);
    t8 = *((unsigned int *)t21);
    t50 = (!(t8));
    if (t50 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1928);
    t7 = (t5 + 72U);
    t14 = *((char **)t7);
    t21 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t4, t14, 2, t21, 32, 1);
    t22 = ((char*)((ng1)));
    memset(t28, 0, 8);
    t30 = (t6 + 4);
    t31 = (t22 + 4);
    t8 = *((unsigned int *)t6);
    t9 = *((unsigned int *)t22);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t30);
    t12 = *((unsigned int *)t31);
    t13 = (t11 ^ t12);
    t15 = (t10 | t13);
    t16 = *((unsigned int *)t30);
    t17 = *((unsigned int *)t31);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB31;

LAB28:    if (t18 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t28) = 1;

LAB31:    t39 = (t28 + 4);
    t23 = *((unsigned int *)t39);
    t24 = (~(t23));
    t25 = *((unsigned int *)t28);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1928);
    t7 = (t5 + 72U);
    t14 = *((char **)t7);
    t21 = ((char*)((ng7)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t4, t14, 2, t21, 32, 1);
    t22 = ((char*)((ng1)));
    memset(t28, 0, 8);
    t30 = (t6 + 4);
    t31 = (t22 + 4);
    t8 = *((unsigned int *)t6);
    t9 = *((unsigned int *)t22);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t30);
    t12 = *((unsigned int *)t31);
    t13 = (t11 ^ t12);
    t15 = (t10 | t13);
    t16 = *((unsigned int *)t30);
    t17 = *((unsigned int *)t31);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB38;

LAB35:    if (t18 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t28) = 1;

LAB38:    t39 = (t28 + 4);
    t23 = *((unsigned int *)t39);
    t24 = (~(t23));
    t25 = *((unsigned int *)t28);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1928);
    t7 = (t5 + 72U);
    t14 = *((char **)t7);
    t21 = ((char*)((ng9)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t4, t14, 2, t21, 32, 1);
    t22 = ((char*)((ng1)));
    memset(t28, 0, 8);
    t30 = (t6 + 4);
    t31 = (t22 + 4);
    t8 = *((unsigned int *)t6);
    t9 = *((unsigned int *)t22);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t30);
    t12 = *((unsigned int *)t31);
    t13 = (t11 ^ t12);
    t15 = (t10 | t13);
    t16 = *((unsigned int *)t30);
    t17 = *((unsigned int *)t31);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB45;

LAB42:    if (t18 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t28) = 1;

LAB45:    t39 = (t28 + 4);
    t23 = *((unsigned int *)t39);
    t24 = (~(t23));
    t25 = *((unsigned int *)t28);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1928);
    t7 = (t5 + 72U);
    t14 = *((char **)t7);
    t21 = ((char*)((ng11)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t4, t14, 2, t21, 32, 1);
    t22 = ((char*)((ng1)));
    memset(t28, 0, 8);
    t30 = (t6 + 4);
    t31 = (t22 + 4);
    t8 = *((unsigned int *)t6);
    t9 = *((unsigned int *)t22);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t30);
    t12 = *((unsigned int *)t31);
    t13 = (t11 ^ t12);
    t15 = (t10 | t13);
    t16 = *((unsigned int *)t30);
    t17 = *((unsigned int *)t31);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB52;

LAB49:    if (t18 != 0)
        goto LAB51;

LAB50:    *((unsigned int *)t28) = 1;

LAB52:    t39 = (t28 + 4);
    t23 = *((unsigned int *)t39);
    t24 = (~(t23));
    t25 = *((unsigned int *)t28);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1928);
    t7 = (t5 + 72U);
    t14 = *((char **)t7);
    t21 = ((char*)((ng13)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t4, t14, 2, t21, 32, 1);
    t22 = ((char*)((ng1)));
    memset(t28, 0, 8);
    t30 = (t6 + 4);
    t31 = (t22 + 4);
    t8 = *((unsigned int *)t6);
    t9 = *((unsigned int *)t22);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t30);
    t12 = *((unsigned int *)t31);
    t13 = (t11 ^ t12);
    t15 = (t10 | t13);
    t16 = *((unsigned int *)t30);
    t17 = *((unsigned int *)t31);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB59;

LAB56:    if (t18 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t28) = 1;

LAB59:    t39 = (t28 + 4);
    t23 = *((unsigned int *)t39);
    t24 = (~(t23));
    t25 = *((unsigned int *)t28);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1928);
    t7 = (t5 + 72U);
    t14 = *((char **)t7);
    t21 = ((char*)((ng15)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t4, t14, 2, t21, 32, 1);
    t22 = ((char*)((ng1)));
    memset(t28, 0, 8);
    t30 = (t6 + 4);
    t31 = (t22 + 4);
    t8 = *((unsigned int *)t6);
    t9 = *((unsigned int *)t22);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t30);
    t12 = *((unsigned int *)t31);
    t13 = (t11 ^ t12);
    t15 = (t10 | t13);
    t16 = *((unsigned int *)t30);
    t17 = *((unsigned int *)t31);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB66;

LAB63:    if (t18 != 0)
        goto LAB65;

LAB64:    *((unsigned int *)t28) = 1;

LAB66:    t39 = (t28 + 4);
    t23 = *((unsigned int *)t39);
    t24 = (~(t23));
    t25 = *((unsigned int *)t28);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB67;

LAB68:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1928);
    t7 = (t5 + 72U);
    t14 = *((char **)t7);
    t21 = ((char*)((ng17)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t4, t14, 2, t21, 32, 1);
    t22 = ((char*)((ng1)));
    memset(t28, 0, 8);
    t30 = (t6 + 4);
    t31 = (t22 + 4);
    t8 = *((unsigned int *)t6);
    t9 = *((unsigned int *)t22);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t30);
    t12 = *((unsigned int *)t31);
    t13 = (t11 ^ t12);
    t15 = (t10 | t13);
    t16 = *((unsigned int *)t30);
    t17 = *((unsigned int *)t31);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB73;

LAB70:    if (t18 != 0)
        goto LAB72;

LAB71:    *((unsigned int *)t28) = 1;

LAB73:    t39 = (t28 + 4);
    t23 = *((unsigned int *)t39);
    t24 = (~(t23));
    t25 = *((unsigned int *)t28);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB74;

LAB75:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB76:
LAB69:
LAB62:
LAB55:
LAB48:
LAB41:
LAB34:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1928);
    t7 = (t5 + 72U);
    t14 = *((char **)t7);
    t21 = (t0 + 1608);
    t22 = (t21 + 56U);
    t30 = *((char **)t22);
    t31 = ((char*)((ng20)));
    memset(t28, 0, 8);
    xsi_vlog_unsigned_add(t28, 32, t30, 3, t31, 32);
    t32 = ((char*)((ng17)));
    xsi_vlog_get_indexed_partselect(t6, 4, t4, ((int*)(t14)), 2, t28, 32, 2, t32, 32, 1, 0);
    t39 = (t0 + 1768);
    xsi_vlogvar_assign_value(t39, t6, 0, 0, 4);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1928);
    t7 = (t5 + 72U);
    t14 = *((char **)t7);
    t21 = (t0 + 1608);
    t22 = (t21 + 56U);
    t30 = *((char **)t22);
    t31 = ((char*)((ng1)));
    memset(t28, 0, 8);
    xsi_vlog_unsigned_minus(t28, 32, t30, 3, t31, 32);
    xsi_vlog_generic_get_index_select_value(t6, 1, t4, t14, 2, t28, 32, 2);
    t32 = (t0 + 2088);
    xsi_vlogvar_assign_value(t32, t6, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB77;

LAB78:
LAB79:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(35, ng0);

LAB13:    xsi_set_current_line(36, ng0);
    t30 = (t0 + 1048U);
    t31 = *((char **)t30);
    memset(t29, 0, 8);
    t30 = (t29 + 4);
    t32 = (t31 + 4);
    t33 = *((unsigned int *)t31);
    t34 = (t33 >> 0);
    *((unsigned int *)t29) = t34;
    t35 = *((unsigned int *)t32);
    t36 = (t35 >> 0);
    *((unsigned int *)t30) = t36;
    t37 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t37 & 2047U);
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 2047U);
    memset(t28, 0, 8);
    xsi_vlog_unsigned_unary_minus(t28, 11, t29, 11);
    t39 = (t0 + 1928);
    t43 = (t0 + 1928);
    t44 = (t43 + 72U);
    t45 = *((char **)t44);
    t46 = ((char*)((ng2)));
    t47 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t40, t41, t42, ((int*)(t45)), 2, t46, 32, 1, t47, 32, 1);
    t48 = (t40 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (!(t49));
    t51 = (t41 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (!(t52));
    t54 = (t50 && t53);
    t55 = (t42 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (!(t56));
    t58 = (t54 && t57);
    if (t58 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 4095U);
    if (t12 != 0)
        goto LAB19;

LAB17:    if (*((unsigned int *)t5) == 0)
        goto LAB16;

LAB18:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;

LAB19:    t14 = (t6 + 4);
    t13 = *((unsigned int *)t14);
    t15 = (~(t13));
    t16 = *((unsigned int *)t6);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB20;

LAB21:
LAB22:    goto LAB12;

LAB14:    t59 = *((unsigned int *)t42);
    t60 = (t59 + 0);
    t61 = *((unsigned int *)t40);
    t62 = *((unsigned int *)t41);
    t63 = (t61 - t62);
    t64 = (t63 + 1);
    xsi_vlogvar_assign_value(t39, t28, t60, *((unsigned int *)t41), t64);
    goto LAB15;

LAB16:    *((unsigned int *)t6) = 1;
    goto LAB19;

LAB20:    xsi_set_current_line(37, ng0);
    t21 = ((char*)((ng4)));
    t22 = (t0 + 1928);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 12);
    goto LAB22;

LAB24:    t18 = *((unsigned int *)t40);
    t60 = (t18 + 0);
    t19 = *((unsigned int *)t28);
    t20 = *((unsigned int *)t29);
    t63 = (t19 - t20);
    t64 = (t63 + 1);
    xsi_vlogvar_assign_value(t5, t6, t60, *((unsigned int *)t29), t64);
    goto LAB25;

LAB26:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t6), 1);
    goto LAB27;

LAB30:    t32 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(45, ng0);
    t43 = ((char*)((ng6)));
    t44 = (t0 + 1608);
    xsi_vlogvar_assign_value(t44, t43, 0, 0, 3);
    goto LAB34;

LAB37:    t32 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB38;

LAB39:    xsi_set_current_line(46, ng0);
    t43 = ((char*)((ng8)));
    t44 = (t0 + 1608);
    xsi_vlogvar_assign_value(t44, t43, 0, 0, 3);
    goto LAB41;

LAB44:    t32 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB45;

LAB46:    xsi_set_current_line(47, ng0);
    t43 = ((char*)((ng10)));
    t44 = (t0 + 1608);
    xsi_vlogvar_assign_value(t44, t43, 0, 0, 3);
    goto LAB48;

LAB51:    t32 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB52;

LAB53:    xsi_set_current_line(48, ng0);
    t43 = ((char*)((ng12)));
    t44 = (t0 + 1608);
    xsi_vlogvar_assign_value(t44, t43, 0, 0, 3);
    goto LAB55;

LAB58:    t32 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB59;

LAB60:    xsi_set_current_line(49, ng0);
    t43 = ((char*)((ng14)));
    t44 = (t0 + 1608);
    xsi_vlogvar_assign_value(t44, t43, 0, 0, 3);
    goto LAB62;

LAB65:    t32 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB66;

LAB67:    xsi_set_current_line(50, ng0);
    t43 = ((char*)((ng16)));
    t44 = (t0 + 1608);
    xsi_vlogvar_assign_value(t44, t43, 0, 0, 3);
    goto LAB69;

LAB72:    t32 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB73;

LAB74:    xsi_set_current_line(51, ng0);
    t43 = ((char*)((ng18)));
    t44 = (t0 + 1608);
    xsi_vlogvar_assign_value(t44, t43, 0, 0, 3);
    goto LAB76;

LAB77:    xsi_set_current_line(61, ng0);

LAB80:    xsi_set_current_line(62, ng0);
    t7 = (t0 + 1768);
    t14 = (t7 + 56U);
    t21 = *((char **)t14);
    t22 = ((char*)((ng21)));
    memset(t6, 0, 8);
    t30 = (t21 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB82;

LAB81:    t31 = (t22 + 4);
    if (*((unsigned int *)t31) != 0)
        goto LAB82;

LAB85:    if (*((unsigned int *)t21) < *((unsigned int *)t22))
        goto LAB83;

LAB84:    t39 = (t6 + 4);
    t13 = *((unsigned int *)t39);
    t15 = (~(t13));
    t16 = *((unsigned int *)t6);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB86;

LAB87:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng11)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB91;

LAB90:    t14 = (t5 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB91;

LAB94:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB92;

LAB93:    t22 = (t6 + 4);
    t8 = *((unsigned int *)t22);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB95;

LAB96:
LAB97:
LAB88:    goto LAB79;

LAB82:    t32 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB84;

LAB83:    *((unsigned int *)t6) = 1;
    goto LAB84;

LAB86:    xsi_set_current_line(62, ng0);

LAB89:    xsi_set_current_line(63, ng0);
    t43 = (t0 + 1768);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t46 = ((char*)((ng1)));
    memset(t28, 0, 8);
    xsi_vlog_unsigned_add(t28, 32, t45, 4, t46, 32);
    t47 = (t0 + 1768);
    xsi_vlogvar_assign_value(t47, t28, 0, 0, 4);
    goto LAB88;

LAB91:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB93;

LAB92:    *((unsigned int *)t6) = 1;
    goto LAB93;

LAB95:    xsi_set_current_line(66, ng0);

LAB98:    xsi_set_current_line(67, ng0);
    t30 = (t0 + 1608);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t39 = ((char*)((ng1)));
    memset(t28, 0, 8);
    xsi_vlog_unsigned_add(t28, 32, t32, 3, t39, 32);
    t43 = (t0 + 1608);
    xsi_vlogvar_assign_value(t43, t28, 0, 0, 3);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB97;

}


extern void work_m_00000000000984580602_3509695277_init()
{
	static char *pe[] = {(void *)Always_31_0};
	xsi_register_didat("work_m_00000000000984580602_3509695277", "isim/tb_isim_beh.exe.sim/work/m_00000000000984580602_3509695277.didat");
	xsi_register_executes(pe);
}
