@ File generated by m4a2s Song-Module
	.include "MPlayDef.s"

	.equ	seq_875_grp, bank_026
	.equ	seq_875_pri, 127
	.equ	seq_875_rev, 0
	.equ	seq_875_mvl, 127
	.equ	seq_875_key, 0

	.section .rodata
	.global	seq_875
	.align	2

@*********************** Track 01 ***********************@

seq_875_0:
	.byte	KEYSH , seq_875_key+0
	.byte	TEMPO , 280/2
	.byte		VOICE , 11
	.byte		VOL   , 115*seq_875_mvl/mxv
	.byte		PAN   , c_v+0
	.byte	W03
	.byte		N11   , Cn3 , v127
	.byte	W02
	.byte		BEND  , c_v-13
	.byte	W01
	.byte		        c_v-12
	.byte	W01
	.byte		        c_v-3
	.byte	W01
	.byte		        c_v+1
	.byte	W20
	.byte		        c_v-15
	.byte	W01
	.byte		        c_v-15
	.byte		N12   , Dn3 , v100
	.byte	W01
	.byte		BEND  , c_v-13
	.byte	W01
	.byte		        c_v-10
	.byte	W01
	.byte		        c_v-5
	.byte	W01
	.byte		        c_v+1
	.byte	W24
	.byte	W02
	.byte		N12   , En3 
	.byte	W02
	.byte		BEND  , c_v-16
	.byte	W01
	.byte		        c_v-15
	.byte	W01
	.byte		        c_v-13
	.byte	W01
	.byte		        c_v-9
	.byte	W01
	.byte		        c_v-3
	.byte	W01
	.byte		VOICE , 8
	.byte		VOL   , 115*seq_875_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		BEND  , c_v-1
	.byte	W01
	.byte		BENDR , 36
	.byte		LFOS  , 60
	.byte		MODT  , mod_pan
	.byte	W01
	.byte		MOD   , 40
	.byte	W01
	.byte		N36   , Cn3 , v120
	.byte	W10
	.byte		BEND  , c_v-3
	.byte	W01
	.byte		        c_v-5
	.byte	W01
	.byte		        c_v-7
	.byte	W01
	.byte		        c_v-9
	.byte	W01
	.byte		        c_v-12
	.byte	W01
	.byte		        c_v-14
	.byte	W01
	.byte		        c_v-16
	.byte	W01
	.byte		        c_v-18
	.byte	W01
	.byte		        c_v-20
	.byte	W01
	.byte		VOL   , 113*seq_875_mvl/mxv
	.byte		BEND  , c_v-23
	.byte	W01
	.byte		        c_v-25
	.byte	W01
	.byte		VOL   , 112*seq_875_mvl/mxv
	.byte		BEND  , c_v-30
	.byte	W01
	.byte		VOL   , 109*seq_875_mvl/mxv
	.byte		BEND  , c_v-32
	.byte	W01
	.byte		VOL   , 106*seq_875_mvl/mxv
	.byte		BEND  , c_v-33
	.byte	W01
	.byte		VOL   , 103*seq_875_mvl/mxv
	.byte		BEND  , c_v-35
	.byte	W01
	.byte		VOL   , 98*seq_875_mvl/mxv
	.byte		BEND  , c_v-36
	.byte	W01
	.byte		VOL   , 93*seq_875_mvl/mxv
	.byte		BEND  , c_v-37
	.byte	W01
	.byte		VOL   , 86*seq_875_mvl/mxv
	.byte		BEND  , c_v-40
	.byte	W01
	.byte		VOL   , 79*seq_875_mvl/mxv
	.byte		BEND  , c_v-42
	.byte	W01
	.byte		VOL   , 71*seq_875_mvl/mxv
	.byte		BEND  , c_v-45
	.byte	W01
	.byte		VOL   , 62*seq_875_mvl/mxv
	.byte	W01
	.byte		        53*seq_875_mvl/mxv
	.byte	W01
	.byte		        42*seq_875_mvl/mxv
	.byte	W01
	.byte		        31*seq_875_mvl/mxv
	.byte	W01
	.byte		        19*seq_875_mvl/mxv
	.byte	W01
	.byte		        0*seq_875_mvl/mxv
	.byte	W04
	.byte	FINE

@******************************************************@

	.align	2

seq_875:
	.byte	1	@ NumTrks
	.byte	0	@ NumBlks
	.byte	seq_875_pri	@ Priority
	.byte	seq_875_rev	@ Reverb

	.word	seq_875_grp

	.word	seq_875_0

	.end