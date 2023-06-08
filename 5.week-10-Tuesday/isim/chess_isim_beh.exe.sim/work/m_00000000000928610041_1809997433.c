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
static const char *ng0 = "C:/Users/Student/Documents/dhb/lab5group4final/chess.v";
static unsigned int ng1[] = {64U, 0U, 0U, 0U, 262144U, 0U, 0U, 0U, 4U, 0U, 4U, 0U, 536870912U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 142631680U, 0U, 0U, 0U, 0U, 0U, 1073741824U, 0U, 0U, 0U, 524288U, 0U, 4096U, 0U, 67108864U, 0U, 0U, 0U, 256U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 12657672U, 0U};



static void Initial_40_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);

LAB4:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 768);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2176);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    goto LAB1;

}


extern void work_m_00000000000928610041_1809997433_init()
{
	static char *pe[] = {(void *)Initial_40_0};
	xsi_register_didat("work_m_00000000000928610041_1809997433", "isim/chess_isim_beh.exe.sim/work/m_00000000000928610041_1809997433.didat");
	xsi_register_executes(pe);
}
