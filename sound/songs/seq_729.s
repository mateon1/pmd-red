@ File generated by m4a2s Song-Module
	.include "MPlayDef.s"

	.equ	seq_729_grp, bank_026
	.equ	seq_729_pri, 127
	.equ	seq_729_rev, 0
	.equ	seq_729_mvl, 127
	.equ	seq_729_key, 0

	.section .rodata
	.global	seq_729
	.align	2

@*********************** Track 01 ***********************@

seq_729_0:
	.byte	KEYSH , seq_729_key+0
	.byte	TEMPO , 150/2
	.byte		VOICE , 0
	.byte	W01
	.byte		VOL   , 75*seq_729_mvl/mxv
	.byte	W01
	.byte		PAN   , c_v+0
	.byte	W01
	.byte		MOD   , 127
	.byte	W02
	.byte		N01   , Dn4 , v120
	.byte	W02
	.byte		        Dn3 
	.byte	W01
	.byte		        Gn4 
	.byte	W02
	.byte		N20   , An2 
	.byte	W01
	.byte		        Cn2 , v088
	.byte	W06
	.byte		MOD   , 0
	.byte	W06
	.byte		BEND  , c_v+32
	.byte	W01
	.byte		        c_v+32
	.byte	W01
	.byte		        c_v+33
	.byte	W01
	.byte		        c_v+34
	.byte	W01
	.byte		        c_v+37
	.byte	W01
	.byte		VOL   , 76*seq_729_mvl/mxv
	.byte		BEND  , c_v+43
	.byte	W01
	.byte		VOL   , 74*seq_729_mvl/mxv
	.byte		BEND  , c_v+49
	.byte	W01
	.byte		VOL   , 73*seq_729_mvl/mxv
	.byte		BEND  , c_v+52
	.byte	W01
	.byte		VOL   , 71*seq_729_mvl/mxv
	.byte	W01
	.byte		        69*seq_729_mvl/mxv
	.byte	W01
	.byte		        64*seq_729_mvl/mxv
	.byte	W01
	.byte		        62*seq_729_mvl/mxv
	.byte	W01
	.byte		        59*seq_729_mvl/mxv
	.byte	W01
	.byte		        57*seq_729_mvl/mxv
	.byte	W01
	.byte		        55*seq_729_mvl/mxv
	.byte	W01
	.byte		        51*seq_729_mvl/mxv
	.byte	W01
	.byte		        48*seq_729_mvl/mxv
	.byte	W01
	.byte		        45*seq_729_mvl/mxv
	.byte	W01
	.byte		        42*seq_729_mvl/mxv
	.byte	W01
	.byte		        33*seq_729_mvl/mxv
	.byte	W01
	.byte		        27*seq_729_mvl/mxv
	.byte	W01
	.byte		        22*seq_729_mvl/mxv
	.byte	W01
	.byte		        21*seq_729_mvl/mxv
	.byte	FINE

@******************************************************@

	.align	2

seq_729:
	.byte	1	@ NumTrks
	.byte	0	@ NumBlks
	.byte	seq_729_pri	@ Priority
	.byte	seq_729_rev	@ Reverb

	.word	seq_729_grp

	.word	seq_729_0

	.end
