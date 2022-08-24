/* C code for program testSuspension, generated by snc from ../testSuspension.st */
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <limits.h>

#include "seq_snc.h"
# line 5 "../testSuspension.st"
#include "epicsAssert.h"

/* Variable declarations */


/* Function declarations */

#define seqg_var (*(struct seqg_vars *const *)seqg_env)

/* Program init func */
static void seqg_init(PROG_ID seqg_env)
{
}

/****** Code for state "testSuspensionInit" in state set "testSuspension" ******/

/* Event function for state "testSuspensionInit" in state set "testSuspension" */
static seqBool seqg_event_testSuspension_0_testSuspensionInit(SS_ID seqg_env, int *seqg_ptrn, int *seqg_pnst)
{
# line 11 "../testSuspension.st"
	if (seq_delay(seqg_env, 0.1))
	{
		*seqg_pnst = 0;
		*seqg_ptrn = 0;
		return TRUE;
	}
	return FALSE;
}

/* Action function for state "testSuspensionInit" in state set "testSuspension" */
static void seqg_action_testSuspension_0_testSuspensionInit(SS_ID seqg_env, int seqg_trn, int *seqg_pnst)
{
	switch(seqg_trn)
	{
	case 0:
		{
# line 12 "../testSuspension.st"
			assert(0);
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

/* Event masks for state set "testSuspension" */
static const seqMask seqg_mask_testSuspension_0_testSuspensionInit[] = {
	0x00000000,
};

/* State table for state set "testSuspension" */
static seqState seqg_states_testSuspension[] = {
	{
	/* state name */        "testSuspensionInit",
	/* action function */   seqg_action_testSuspension_0_testSuspensionInit,
	/* event function */    seqg_event_testSuspension_0_testSuspensionInit,
	/* entry function */    0,
	/* exit function */     0,
	/* event mask array */  seqg_mask_testSuspension_0_testSuspensionInit,
	/* state options */     (0)
	},
};

/* State set table */
static seqSS seqg_statesets[] = {
	{
	/* state set name */    "testSuspension",
	/* states */            seqg_states_testSuspension,
	/* number of states */  1
	},
};

/* Program table (global) */
seqProgram testSuspension = {
	/* magic number */      2002008,
	/* program name */      "testSuspension",
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
static void testSuspensionRegistrar (void) {
    seqRegisterSequencerCommands();
    seqRegisterSequencerProgram (&testSuspension);
}
epicsExportRegistrar(testSuspensionRegistrar);
