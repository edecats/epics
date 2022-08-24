/* C code for program testCpuUse, generated by snc from ../testCpuUse.st */
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <limits.h>

#include "seq_snc.h"
# line 5 "../testCpuUse.st"
#include "math.h"

/* Variable declarations */
# line 7 "../testCpuUse.st"
static	int i;


/* Function declarations */

#define seqg_var (*(struct seqg_vars *const *)seqg_env)

/* Program init func */
static void seqg_init(PROG_ID seqg_env)
{
}

/****** Code for state "testCpuUseInit" in state set "testCpuUse" ******/

/* Event function for state "testCpuUseInit" in state set "testCpuUse" */
static seqBool seqg_event_testCpuUse_0_testCpuUseInit(SS_ID seqg_env, int *seqg_ptrn, int *seqg_pnst)
{
# line 13 "../testCpuUse.st"
	if (seq_delay(seqg_env, 0.1))
	{
		*seqg_pnst = 0;
		*seqg_ptrn = 0;
		return TRUE;
	}
	return FALSE;
}

/* Action function for state "testCpuUseInit" in state set "testCpuUse" */
static void seqg_action_testCpuUse_0_testCpuUseInit(SS_ID seqg_env, int seqg_trn, int *seqg_pnst)
{
	switch(seqg_trn)
	{
	case 0:
		{
# line 14 "../testCpuUse.st"
			for (i = 0; i < 100000; i++)
			{
# line 15 "../testCpuUse.st"
				sqrt(i);
			}
		}
		return;
	}
}

/* Program exit func */
static void seqg_exit(SS_ID seqg_env)
{
}

#undef seqg_var

/************************ Tables ************************/

/* No channel definitions */
#define seqg_chans 0

/* Event masks for state set "testCpuUse" */
static const seqMask seqg_mask_testCpuUse_0_testCpuUseInit[] = {
	0x00000000,
};

/* State table for state set "testCpuUse" */
static seqState seqg_states_testCpuUse[] = {
	{
	/* state name */        "testCpuUseInit",
	/* action function */   seqg_action_testCpuUse_0_testCpuUseInit,
	/* event function */    seqg_event_testCpuUse_0_testCpuUseInit,
	/* entry function */    0,
	/* exit function */     0,
	/* event mask array */  seqg_mask_testCpuUse_0_testCpuUseInit,
	/* state options */     (0)
	},
};

/* State set table */
static seqSS seqg_statesets[] = {
	{
	/* state set name */    "testCpuUse",
	/* states */            seqg_states_testCpuUse,
	/* number of states */  1
	},
};

/* Program table (global) */
seqProgram testCpuUse = {
	/* magic number */      2002008,
	/* program name */      "testCpuUse",
	/* channels */          seqg_chans,
	/* num. channels */     0,
	/* state sets */        seqg_statesets,
	/* num. state sets */   1,
	/* user var size */     0,
	/* param */             "",
	/* num. event flags */  0,
	/* encoded options */   (0 | OPT_NEWEF),
	/* init func */         seqg_init,
	/* entry func */        0,
	/* exit func */         seqg_exit,
	/* num. queues */       0
};

/* Register sequencer commands and program */
#include "epicsExport.h"
static void testCpuUseRegistrar (void) {
    seqRegisterSequencerCommands();
    seqRegisterSequencerProgram (&testCpuUse);
}
epicsExportRegistrar(testCpuUseRegistrar);