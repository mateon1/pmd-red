@ File generated by m4a2s Song-Module
	.include "MPlayDef.s"

	.equ	seq_886_grp, bank_026
	.equ	seq_886_pri, 127
	.equ	seq_886_rev, 0
	.equ	seq_886_mvl, 127
	.equ	seq_886_key, 0

	.section .rodata
	.global	seq_886
	.align	2

@*********************** Track 01 ***********************@

seq_886_0:
	.byte		VOL   , 127*seq_886_mvl/mxv
	.byte	KEYSH , seq_886_key+0
	.byte	TEMPO , 180/2
	.byte		VOICE , 15
	.byte		N16   , Gs3 , v076
	.byte		N15   , Cs4 , v112
	.byte	W01
	.byte		VOL   , 127*seq_886_mvl/mxv
	.byte		PAN   , c_v+0
	.byte	W23
	.byte		N18   , Gs3 , v052
	.byte		N17   , Cs4 , v088
	.byte	W24
	.byte		N18   , Gs3 , v036
	.byte		N17   , Cs4 , v076
	.byte	W24
	.byte		N16   , Gs3 , v012
	.byte		N15   , Cs4 , v048
	.byte	W16
	.byte	FINE

@******************************************************@

	.align	2

seq_886:
	.byte	1	@ NumTrks
	.byte	0	@ NumBlks
	.byte	seq_886_pri	@ Priority
	.byte	seq_886_rev	@ Reverb

	.word	seq_886_grp

	.word	seq_886_0

	.end