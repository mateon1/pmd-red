@ File generated by m4a2s Song-Module
	.include "MPlayDef.s"

	.equ	seq_344_grp, bank_026
	.equ	seq_344_pri, 127
	.equ	seq_344_rev, 0
	.equ	seq_344_mvl, 127
	.equ	seq_344_key, 0

	.section .rodata
	.global	seq_344
	.align	2

@*********************** Track 01 ***********************@

seq_344_0:
	.byte	KEYSH , seq_344_key+0
	.byte	TEMPO , 160/2
	.byte		VOICE , 3
	.byte	W01
	.byte		VOL   , 120*seq_344_mvl/mxv
	.byte	W01
	.byte		PAN   , c_v+0
	.byte	W01
	.byte		N04   , Cn3 , v120
	.byte	W04
	.byte		N06   , An3 
	.byte	W06
	.byte	FINE

@******************************************************@

	.align	2

seq_344:
	.byte	1	@ NumTrks
	.byte	0	@ NumBlks
	.byte	seq_344_pri	@ Priority
	.byte	seq_344_rev	@ Reverb

	.word	seq_344_grp

	.word	seq_344_0

	.end
