@ File generated by m4a2s Song-Module
	.include "MPlayDef.s"

	.equ	seq_457_grp, bank_027
	.equ	seq_457_pri, 127
	.equ	seq_457_rev, 0
	.equ	seq_457_mvl, 127
	.equ	seq_457_key, 0

	.section .rodata
	.global	seq_457
	.align	2

@*********************** Track 01 ***********************@

seq_457_0:
	.byte	KEYSH , seq_457_key+0
	.byte	TEMPO , 200/2
	.byte		VOICE , 76
	.byte		VOL   , 70*seq_457_mvl/mxv
	.byte		PAN   , c_v+0
	.byte	W01
	.byte		BENDR , 20
	.byte		BEND  , c_v-11
	.byte	W01
	.byte		        c_v-7
	.byte		N06   , Cn3 , v100
	.byte	W01
	.byte		BEND  , c_v-2
	.byte	W01
	.byte		        c_v+3
	.byte	W01
	.byte		        c_v+12
	.byte	W01
	.byte		        c_v+21
	.byte	W01
	.byte		        c_v+36
	.byte	W01
	.byte		        c_v+51
	.byte		N02   , Bn3 , v092
	.byte	W01
	.byte		BEND  , c_v+63
	.byte	W01
	.byte		N02   , Bn3 , v040
	.byte	W03
	.byte		BEND  , c_v-11
	.byte	W01
	.byte		        c_v-7
	.byte		N06   , Cn3 , v100
	.byte	W01
	.byte		BEND  , c_v-2
	.byte	W01
	.byte		        c_v+3
	.byte	W01
	.byte		        c_v+12
	.byte	W01
	.byte		        c_v+21
	.byte	W01
	.byte		        c_v+36
	.byte	W01
	.byte		        c_v+51
	.byte		N02   , Bn3 , v092
	.byte	W01
	.byte		BEND  , c_v+63
	.byte	W01
	.byte		N02   , Bn3 , v040
	.byte	W02
	.byte	FINE

@******************************************************@

	.align	2

seq_457:
	.byte	1	@ NumTrks
	.byte	0	@ NumBlks
	.byte	seq_457_pri	@ Priority
	.byte	seq_457_rev	@ Reverb

	.word	seq_457_grp

	.word	seq_457_0

	.end
