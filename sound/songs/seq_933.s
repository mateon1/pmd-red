@ File generated by m4a2s Song-Module
	.include "MPlayDef.s"

	.equ	seq_933_grp, bank_026
	.equ	seq_933_pri, 127
	.equ	seq_933_rev, 0
	.equ	seq_933_mvl, 127
	.equ	seq_933_key, 0

	.section .rodata
	.global	seq_933
	.align	2

@*********************** Track 01 ***********************@

seq_933_0:
	.byte	KEYSH , seq_933_key+0
	.byte	TEMPO , 160/2
	.byte		VOICE , 18
	.byte		MOD   , 0
	.byte		VOL   , 117*seq_933_mvl/mxv
	.byte	W01
	.byte		PAN   , c_v+0
	.byte		BENDR , 43
	.byte		LFOS  , 1
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
	.byte		N03   , Ds5 
	.byte	W01
	.byte		BEND  , c_v+27
	.byte	W02
	.byte	FINE

@******************************************************@

	.align	2

seq_933:
	.byte	1	@ NumTrks
	.byte	0	@ NumBlks
	.byte	seq_933_pri	@ Priority
	.byte	seq_933_rev	@ Reverb

	.word	seq_933_grp

	.word	seq_933_0

	.end
