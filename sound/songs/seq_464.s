@ File generated by m4a2s Song-Module
	.include "MPlayDef.s"

	.equ	seq_464_grp, bank_028
	.equ	seq_464_pri, 127
	.equ	seq_464_rev, 0
	.equ	seq_464_mvl, 127
	.equ	seq_464_key, 0

	.section .rodata
	.global	seq_464
	.align	2

@*********************** Track 01 ***********************@

seq_464_0:
	.byte	KEYSH , seq_464_key+0
	.byte	TEMPO , 160/2
	.byte		VOICE , 18
	.byte		MOD   , 64
	.byte		VOL   , 125*seq_464_mvl/mxv
	.byte	W01
	.byte		PAN   , c_v+0
	.byte		BENDR , 2
	.byte		LFOS  , 50
	.byte	W01
	.byte		MODT  , mod_tre
	.byte	W03
	.byte		BEND  , c_v-6
	.byte	W01
	.byte		        c_v+0
	.byte		N03   , Cs4 , v127
	.byte	W01
	.byte		BEND  , c_v+7
	.byte	W01
	.byte		        c_v+14
	.byte	W01
	.byte		        c_v+20
	.byte		N03   , Fs4 
	.byte	W01
	.byte		BEND  , c_v+27
	.byte	W02
	.byte		N03   , Cs5 
	.byte	W03
	.byte	FINE

@******************************************************@

	.align	2

seq_464:
	.byte	1	@ NumTrks
	.byte	0	@ NumBlks
	.byte	seq_464_pri	@ Priority
	.byte	seq_464_rev	@ Reverb

	.word	seq_464_grp

	.word	seq_464_0

	.end
