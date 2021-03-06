@ File generated by m4a2s Song-Module
	.include "MPlayDef.s"

	.equ	seq_720_grp, bank_026
	.equ	seq_720_pri, 127
	.equ	seq_720_rev, 0
	.equ	seq_720_mvl, 127
	.equ	seq_720_key, 0

	.section .rodata
	.global	seq_720
	.align	2

@*********************** Track 01 ***********************@

seq_720_0:
	.byte	KEYSH , seq_720_key+0
	.byte	TEMPO , 180/2
	.byte		VOICE , 3
	.byte		VOL   , 125*seq_720_mvl/mxv
	.byte		PAN   , c_v+0
	.byte	W01
	.byte		MOD   , 50
	.byte	W02
	.byte		N04   , Dn4 , v127
	.byte	W02
	.byte		BEND  , c_v+6
	.byte	W01
	.byte		VOICE , 14
	.byte		BEND  , c_v+22
	.byte		N03   , Fs4 , v100
	.byte	W01
	.byte		BEND  , c_v+29
	.byte	W01
	.byte		VOL   , 122*seq_720_mvl/mxv
	.byte		BEND  , c_v+34
	.byte		N07   , Ds3 , v127
	.byte	W01
	.byte		VOL   , 119*seq_720_mvl/mxv
	.byte		BEND  , c_v+40
	.byte	W01
	.byte		VOL   , 107*seq_720_mvl/mxv
	.byte		N07   , Gs2 , v088
	.byte	W02
	.byte		BEND  , c_v+32
	.byte	W01
	.byte		VOL   , 120*seq_720_mvl/mxv
	.byte		BEND  , c_v+30
	.byte	W01
	.byte		VOL   , 115*seq_720_mvl/mxv
	.byte		BEND  , c_v+26
	.byte	W01
	.byte		VOL   , 106*seq_720_mvl/mxv
	.byte		BEND  , c_v+9
	.byte	W01
	.byte		VOL   , 94*seq_720_mvl/mxv
	.byte		BEND  , c_v+0
	.byte	W01
	.byte		VOL   , 60*seq_720_mvl/mxv
	.byte	W01
	.byte		        37*seq_720_mvl/mxv
	.byte	W01
	.byte		        0*seq_720_mvl/mxv
	.byte	FINE

@******************************************************@

	.align	2

seq_720:
	.byte	1	@ NumTrks
	.byte	0	@ NumBlks
	.byte	seq_720_pri	@ Priority
	.byte	seq_720_rev	@ Reverb

	.word	seq_720_grp

	.word	seq_720_0

	.end
