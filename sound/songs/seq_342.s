@ File generated by m4a2s Song-Module
	.include "MPlayDef.s"

	.equ	seq_342_grp, bank_027
	.equ	seq_342_pri, 127
	.equ	seq_342_rev, 0
	.equ	seq_342_mvl, 127
	.equ	seq_342_key, 0

	.section .rodata
	.global	seq_342
	.align	2

@*********************** Track 01 ***********************@

seq_342_0:
	.byte	KEYSH , seq_342_key+0
	.byte	TEMPO , 140/2
	.byte		VOICE , 61
	.byte		VOL   , 78*seq_342_mvl/mxv
	.byte		PAN   , c_v+0
	.byte	W01
	.byte		N03   , Dn4 , v120
	.byte	W03
	.byte		        As3 
	.byte	W03
	.byte		        Fs3 
	.byte	W03
	.byte		        Dn3 
	.byte	W02
	.byte	W12
	.byte	W12
	.byte	W12
	.byte	W12
	.byte	W12
	.byte	W12
	.byte	W12
	.byte	W12
	.byte	W12
	.byte	W12
	.byte	W12
	.byte	W12
	.byte	W12
	.byte	W12
	.byte	W12
	.byte	W12
	.byte	W12
	.byte	W12
	.byte	W12
	.byte	W12
	.byte	W12
	.byte	W12
	.byte	W12
	.byte	W12
	.byte	W12
	.byte	W12
	.byte	W12
	.byte	W12
	.byte	W12
	.byte	W12
	.byte	W12
	.byte	FINE

@******************************************************@

	.align	2

seq_342:
	.byte	1	@ NumTrks
	.byte	0	@ NumBlks
	.byte	seq_342_pri	@ Priority
	.byte	seq_342_rev	@ Reverb

	.word	seq_342_grp

	.word	seq_342_0

	.end
