@ File generated by m4a2s Song-Module
	.include "MPlayDef.s"

	.equ	seq_695_grp, bank_026
	.equ	seq_695_pri, 127
	.equ	seq_695_rev, 0
	.equ	seq_695_mvl, 127
	.equ	seq_695_key, 0

	.section .rodata
	.global	seq_695
	.align	2

@*********************** Track 01 ***********************@

seq_695_0:
	.byte	KEYSH , seq_695_key+0
	.byte	TEMPO , 220/2
	.byte		VOICE , 29
	.byte		VOL   , 120*seq_695_mvl/mxv
	.byte		PAN   , c_v+0
	.byte	W01
	.byte		BENDR , 24
	.byte		LFOS  , 80
	.byte		MODT  , mod_pan
	.byte	W02
	.byte		N40   , Dn3 , v100
	.byte	W01
	.byte		BEND  , c_v+0
	.byte	W01
	.byte		        c_v+0
	.byte	W01
	.byte		        c_v+0
	.byte	W01
	.byte		        c_v+1
	.byte	W01
	.byte		        c_v+3
	.byte	W01
	.byte		        c_v+5
	.byte	W01
	.byte		        c_v+7
	.byte	W01
	.byte		        c_v+10
	.byte	W01
	.byte		        c_v+13
	.byte	W01
	.byte		        c_v+17
	.byte	W01
	.byte		        c_v+21
	.byte	W01
	.byte		        c_v+22
	.byte	W01
	.byte		        c_v+21
	.byte	W01
	.byte		        c_v+17
	.byte	W01
	.byte		MOD   , 40
	.byte		BEND  , c_v+9
	.byte	W02
	.byte		        c_v+10
	.byte	W01
	.byte		        c_v+10
	.byte	W01
	.byte		        c_v+11
	.byte	W01
	.byte		        c_v+12
	.byte	W01
	.byte		        c_v+14
	.byte	W01
	.byte		        c_v+19
	.byte	W01
	.byte		        c_v+22
	.byte	W01
	.byte		        c_v+26
	.byte	W01
	.byte		        c_v+28
	.byte	W02
	.byte		        c_v+31
	.byte	W01
	.byte		        c_v+30
	.byte	W01
	.byte		        c_v+29
	.byte	W01
	.byte		        c_v+26
	.byte	W01
	.byte		        c_v+19
	.byte	W01
	.byte		        c_v+21
	.byte	W01
	.byte		        c_v+22
	.byte	W01
	.byte		        c_v+24
	.byte	W01
	.byte		        c_v+28
	.byte	W06
	.byte		N07   , Dn3 , v020
	.byte	W07
	.byte	FINE

@******************************************************@

	.align	2

seq_695:
	.byte	1	@ NumTrks
	.byte	0	@ NumBlks
	.byte	seq_695_pri	@ Priority
	.byte	seq_695_rev	@ Reverb

	.word	seq_695_grp

	.word	seq_695_0

	.end
