/* C code for program pvPutAsyncTest, generated by snc from ../pvPutAsync.st */
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <limits.h>

#include "seq_snc.h"
# line 9 "../pvPutAsync.st"
#include "../testSupport.h"

/* Variable declarations */
# line 11 "../pvPutAsync.st"
static	int x;
struct seqg_vars_test1 {
	struct {
# line 20 "../pvPutAsync.st"
		int i;
	} seqg_vars_put_async;
} seqg_vars_test1;


/* Function declarations */

#define seqg_var (*(struct seqg_vars *const *)seqg_env)

/* Program init func */
static void seqg_init(PROG_ID seqg_env)
{
}

/* Program entry func */
static void seqg_entry(SS_ID seqg_env)
{
# line 15 "../pvPutAsync.st"
	seq_test_init(10);
}

/****** Code for state "put_async" in state set "test1" ******/

/* Entry function for state "put_async" in state set "test1" */
static void seqg_entry_test1_0_put_async(SS_ID seqg_env)
{
# line 22 "../pvPutAsync.st"
	seqg_vars_test1.seqg_vars_put_async.i = 0;
}

/* Event function for state "put_async" in state set "test1" */
static seqBool seqg_event_test1_0_put_async(SS_ID seqg_env, int *seqg_ptrn, int *seqg_pnst)
{
# line 24 "../pvPutAsync.st"
	if (seqg_vars_test1.seqg_vars_put_async.i == 5)
	{
		*seqg_pnst = 1;
		*seqg_ptrn = 0;
		return TRUE;
	}
# line 26 "../pvPutAsync.st"
	if (seq_delay(seqg_env, 0.4))
	{
		*seqg_pnst = 0;
		*seqg_ptrn = 1;
		return TRUE;
	}
	return FALSE;
}

/* Action function for state "put_async" in state set "test1" */
static void seqg_action_test1_0_put_async(SS_ID seqg_env, int seqg_trn, int *seqg_pnst)
{
	switch(seqg_trn)
	{
	case 0:
		{
		}
		return;
	case 1:
		{
# line 27 "../pvPutAsync.st"
			int status;
# line 28 "../pvPutAsync.st"
			x = 1;
# line 29 "../pvPutAsync.st"
			status = seq_pvPutTmo(seqg_env, 0/*x*/, ASYNC, DEFAULT_TIMEOUT);
# line 32 "../pvPutAsync.st"
			testOk((seqg_vars_test1.seqg_vars_put_async.i == 0) == (status == pvStatOK), "pvPut/ASYNC %d: result=%d (%s)", seqg_vars_test1.seqg_vars_put_async.i, status, status ? seq_pvMessage(seqg_env, 0/*x*/) : "");
# line 33 "../pvPutAsync.st"
			++seqg_vars_test1.seqg_vars_put_async.i;
		}
		return;
	}
}

/****** Code for state "wait_complete" in state set "test1" ******/

/* Event function for state "wait_complete" in state set "test1" */
static seqBool seqg_event_test1_0_wait_complete(SS_ID seqg_env, int *seqg_ptrn, int *seqg_pnst)
{
# line 37 "../pvPutAsync.st"
	if (seq_delay(seqg_env, 5.0))
	{
		*seqg_pnst = 2;
		*seqg_ptrn = 0;
		return TRUE;
	}
# line 40 "../pvPutAsync.st"
	if (seq_pvPutComplete(seqg_env, 0/*x*/, 1, FALSE, NULL))
	{
		*seqg_pnst = 2;
		*seqg_ptrn = 1;
		return TRUE;
	}
	return FALSE;
}

/* Action function for state "wait_complete" in state set "test1" */
static void seqg_action_test1_0_wait_complete(SS_ID seqg_env, int seqg_trn, int *seqg_pnst)
{
	switch(seqg_trn)
	{
	case 0:
		{
# line 38 "../pvPutAsync.st"
			testFail("pvPut completion timeout");
		}
		return;
	case 1:
		{
# line 41 "../pvPutAsync.st"
			testPass("pvPut/ASYNC complete");
		}
		return;
	}
}

/****** Code for state "put_sync" in state set "test1" ******/

/* Entry function for state "put_sync" in state set "test1" */
static void seqg_entry_test1_0_put_sync(SS_ID seqg_env)
{
# line 46 "../pvPutAsync.st"
	int i = 0;
# line 47 "../pvPutAsync.st"
	int status;
# line 48 "../pvPutAsync.st"
	for (i = 0; i < 2; i++)
	{
# line 49 "../pvPutAsync.st"
		status = seq_pvPutTmo(seqg_env, 0/*x*/, SYNC, DEFAULT_TIMEOUT);
# line 52 "../pvPutAsync.st"
		testOk(status == pvStatOK, "pvPut/SYNC %d, status=%d (%s)", i, status, status ? seq_pvMessage(seqg_env, 0/*x*/) : "");
	}
# line 54 "../pvPutAsync.st"
	i = 2;
# line 55 "../pvPutAsync.st"
	status = seq_pvPutTmo(seqg_env, 0/*x*/, SYNC, 1.0);
# line 58 "../pvPutAsync.st"
	testOk(status == pvStatTIMEOUT, "pvPut/SYNC %d, status=%d (%s)", i, status, status ? seq_pvMessage(seqg_env, 0/*x*/) : "");
# line 60 "../pvPutAsync.st"
	i = 3;
# line 61 "../pvPutAsync.st"
	status = seq_pvPutTmo(seqg_env, 0/*x*/, SYNC, 10.0);
# line 64 "../pvPutAsync.st"
	testOk(status == pvStatOK, "pvPut/SYNC %d, status=%d (%s)", i, status, status ? seq_pvMessage(seqg_env, 0/*x*/) : "");
}

/* Event function for state "put_sync" in state set "test1" */
static seqBool seqg_event_test1_0_put_sync(SS_ID seqg_env, int *seqg_ptrn, int *seqg_pnst)
{
# line 66 "../pvPutAsync.st"
	if (seq_delay(seqg_env, 1))
	{
		seq_exit(seqg_env);
		*seqg_ptrn = 0;
		return TRUE;
	}
	return FALSE;
}

/* Action function for state "put_sync" in state set "test1" */
static void seqg_action_test1_0_put_sync(SS_ID seqg_env, int seqg_trn, int *seqg_pnst)
{
	switch(seqg_trn)
	{
	case 0:
		{
		}
		return;
	}
}

/* Program exit func */
static void seqg_exit(SS_ID seqg_env)
{
# line 72 "../pvPutAsync.st"
	seq_test_done();
}

#undef seqg_var

/************************ Tables ************************/

/* Channel table */
static seqChan seqg_chans[] = {
	/* chName, offset, varName, varType, count, eventNum, efId, monitored, queueSize, queueIndex */
	{"pvPutAsync1", (size_t)&x, "x", P_INT, 1, 1, 0, 0, 0, 0},
};

/* Event masks for state set "test1" */
static const seqMask seqg_mask_test1_0_put_async[] = {
	0x00000000,
};
static const seqMask seqg_mask_test1_0_wait_complete[] = {
	0x00000002,
};
static const seqMask seqg_mask_test1_0_put_sync[] = {
	0x00000000,
};

/* State table for state set "test1" */
static seqState seqg_states_test1[] = {
	{
	/* state name */        "put_async",
	/* action function */   seqg_action_test1_0_put_async,
	/* event function */    seqg_event_test1_0_put_async,
	/* entry function */    seqg_entry_test1_0_put_async,
	/* exit function */     0,
	/* event mask array */  seqg_mask_test1_0_put_async,
	/* state options */     (0)
	},
	{
	/* state name */        "wait_complete",
	/* action function */   seqg_action_test1_0_wait_complete,
	/* event function */    seqg_event_test1_0_wait_complete,
	/* entry function */    0,
	/* exit function */     0,
	/* event mask array */  seqg_mask_test1_0_wait_complete,
	/* state options */     (0)
	},
	{
	/* state name */        "put_sync",
	/* action function */   seqg_action_test1_0_put_sync,
	/* event function */    seqg_event_test1_0_put_sync,
	/* entry function */    seqg_entry_test1_0_put_sync,
	/* exit function */     0,
	/* event mask array */  seqg_mask_test1_0_put_sync,
	/* state options */     (0)
	},
};

/* State set table */
static seqSS seqg_statesets[] = {
	{
	/* state set name */    "test1",
	/* states */            seqg_states_test1,
	/* number of states */  3
	},
};

/* Program table (global) */
seqProgram pvPutAsyncTest = {
	/* magic number */      2002008,
	/* program name */      "pvPutAsyncTest",
	/* channels */          seqg_chans,
	/* num. channels */     1,
	/* state sets */        seqg_statesets,
	/* num. state sets */   1,
	/* user var size */     0,
	/* param */             "",
	/* num. event flags */  0,
	/* encoded options */   (0 | OPT_CONN | OPT_NEWEF),
	/* init func */         seqg_init,
	/* entry func */        seqg_entry,
	/* exit func */         seqg_exit,
	/* num. queues */       0
};

#define PROG_NAME pvPutAsyncTest
#include "seqMain.c"

/* Register sequencer commands and program */
#include "epicsExport.h"
static void pvPutAsyncTestRegistrar (void) {
    seqRegisterSequencerCommands();
    seqRegisterSequencerProgram (&pvPutAsyncTest);
}
epicsExportRegistrar(pvPutAsyncTestRegistrar);
