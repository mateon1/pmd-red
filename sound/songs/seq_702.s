@ File generated by m4a2s Song-Module
	.include "MPlayDef.s"

	.equ	seq_702_grp, bank_026
	.equ	seq_702_pri, 127
	.equ	seq_702_rev, 0
	.equ	seq_702_mvl, 127
	.equ	seq_702_key, 0

	.section .rodata
	.global	seq_702
	.align	2

@*********************** Track 01 ***********************@

seq_702_0:
	.byte	KEYSH , seq_702_key+0
	.byte	TEMPO , 200/2
	.byte		VOICE , 12
	.byte		VOL   , 118*seq_702_mvl/mxv
	.byte		PAN   , c_v+0
	.byte	W01
	.byte		MOD   , 50
	.byte	W02
	.byte		BEND  , c_v+0
	.byte		N04   , Fs1 , v088
	.byte		N04   , Gn2 , v100
	.byte	W05
	.byte		BEND  , c_v-1
	.byte		N19   , Dn2 , v127
	.byte	W01
	.byte		BEND  , c_v-5
	.byte		N18   , Bn1 , v040
	.byte	W01
	.byte		BEND  , c_v-18
	.byte	W01
	.byte		        c_v-58
	.byte	W01
	.byte	W02
	.byte		VOL   , 115*seq_702_mvl/mxv
	.byte	W01
	.byte		        105*seq_702_mvl/mxv
	.byte		BEND  , c_v-60
	.byte	W01
	.byte		VOL   , 95*seq_702_mvl/mxv
	.byte		BEND  , c_v-60
	.byte	W01
	.byte		VOL   , 84*seq_702_mvl/mxv
	.byte		BEND  , c_v-57
	.byte	W01
	.byte		VOL   , 72*seq_702_mvl/mxv
	.byte		BEND  , c_v-52
	.byte	W01
	.byte		VOL   , 61*seq_702_mvl/mxv
	.byte		BEND  , c_v-46
	.byte	W01
	.byte		VOL   , 51*seq_702_mvl/mxv
	.byte		BEND  , c_v-38
	.byte	W01
	.byte		VOL   , 39*seq_702_mvl/mxv
	.byte		BEND  , c_v-17
	.byte	W01
	.byte		VOL   , 28*seq_702_mvl/mxv
	.byte		BEND  , c_v-4
	.byte	W01
	.byte		        c_v+12
	.byte	W01
	.byte		        c_v+29
	.byte	W01
	.byte		        c_v+48
	.byte	W02
	.byte	FINE

@******************************************************@

	.align	2

seq_702:
	.byte	1	@ NumTrks
	.byte	0	@ NumBlks
	.byte	seq_702_pri	@ Priority
	.byte	seq_702_rev	@ Reverb

	.word	seq_702_grp

	.word	seq_702_0

	.end
