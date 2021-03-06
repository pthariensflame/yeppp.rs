;                       Yeppp! library implementation
;                   This file is auto-generated by Peach-Py,
;        Portable Efficient Assembly Code-generator in Higher-level Python,
;                  part of the Yeppp! library infrastructure
; This file is part of Yeppp! library and licensed under the New BSD license.
; See LICENSE.txt for the full text of the license.

section .text$e code align=16
global _yepCore_Sum_V32f_S32f_Nehalem
_yepCore_Sum_V32f_S32f_Nehalem:
	.ENTRY:
	SUB rsp, 168
	MOVAPS [rsp], xmm7
	MOVAPS [byte rsp + 16], xmm8
	MOVAPS [byte rsp + 32], xmm9
	MOVAPS [byte rsp + 48], xmm10
	MOVAPS [byte rsp + 64], xmm11
	MOVAPS [byte rsp + 80], xmm12
	MOVAPS [byte rsp + 96], xmm13
	MOVAPS [byte rsp + 112], xmm14
	MOVAPS [dword rsp + 128], xmm15
	MOVAPS [dword rsp + 144], xmm6
	TEST rcx, rcx
	JZ .return_null_pointer
	TEST rcx, 3
	JNZ .return_misaligned_pointer
	TEST rdx, rdx
	JZ .return_null_pointer
	TEST rdx, 3
	JNZ .return_misaligned_pointer
	XORPS xmm7, xmm7
	TEST r8, r8
	JZ .return_ok
	XORPS xmm8, xmm8
	XORPS xmm9, xmm9
	XORPS xmm10, xmm10
	XORPS xmm11, xmm11
	XORPS xmm12, xmm12
	XORPS xmm13, xmm13
	XORPS xmm14, xmm14
	TEST rcx, 15
	JZ .source_16b_aligned
	.source_16b_misaligned:
	MOVSS xmm15, [rcx]
	ADDPS xmm7, xmm15
	ADD rcx, 4
	SUB r8, 1
	JZ .reduce_batch
	TEST rcx, 15
	JNZ .source_16b_misaligned
	.source_16b_aligned:
	SUB r8, 32
	JB .batch_process_finish
	.process_batch_prologue:
	MOVUPS xmm15, [rcx]
	MOVUPS xmm4, [byte rcx + 16]
	MOVUPS xmm5, [byte rcx + 32]
	MOVUPS xmm3, [byte rcx + 48]
	MOVUPS xmm1, [byte rcx + 64]
	MOVUPS xmm2, [byte rcx + 80]
	ADDPS xmm7, xmm15
	MOVUPS xmm0, [byte rcx + 96]
	ADDPS xmm8, xmm4
	MOVUPS xmm6, [byte rcx + 112]
	ADDPS xmm9, xmm5
	ADD rcx, 128
	ADDPS xmm10, xmm3
	SUB r8, 32
	JB .process_batch_epilogue
	align 16
	.process_batch:
	MOVUPS xmm15, [rcx]
	ADDPS xmm11, xmm1
	MOVUPS xmm4, [byte rcx + 16]
	ADDPS xmm12, xmm2
	MOVUPS xmm5, [byte rcx + 32]
	ADDPS xmm13, xmm0
	MOVUPS xmm3, [byte rcx + 48]
	ADDPS xmm14, xmm6
	MOVUPS xmm1, [byte rcx + 64]
	MOVUPS xmm2, [byte rcx + 80]
	ADDPS xmm7, xmm15
	MOVUPS xmm0, [byte rcx + 96]
	ADDPS xmm8, xmm4
	MOVUPS xmm6, [byte rcx + 112]
	ADDPS xmm9, xmm5
	ADD rcx, 128
	ADDPS xmm10, xmm3
	SUB r8, 32
	JAE .process_batch
	.process_batch_epilogue:
	ADDPS xmm11, xmm1
	ADDPS xmm12, xmm2
	ADDPS xmm13, xmm0
	ADDPS xmm14, xmm6
	.batch_process_finish:
	ADD r8, 32
	JZ .reduce_batch
	.process_single:
	MOVSS xmm4, [rcx]
	ADDPS xmm7, xmm4
	ADD rcx, 4
	SUB r8, 1
	JNZ .process_single
	.reduce_batch:
	ADDPS xmm7, xmm8
	ADDPS xmm9, xmm10
	ADDPS xmm11, xmm12
	ADDPS xmm13, xmm14
	ADDPS xmm7, xmm9
	ADDPS xmm11, xmm13
	ADDPS xmm7, xmm11
	MOVHLPS xmm4, xmm7
	ADDPS xmm7, xmm4
	MOVSHDUP xmm4, xmm7
	ADDSS xmm7, xmm4
	.return_ok:
	MOVSS [rdx], xmm7
	XOR eax, eax
	.return:
	MOVAPS xmm7, [rsp]
	MOVAPS xmm8, [byte rsp + 16]
	MOVAPS xmm9, [byte rsp + 32]
	MOVAPS xmm10, [byte rsp + 48]
	MOVAPS xmm11, [byte rsp + 64]
	MOVAPS xmm12, [byte rsp + 80]
	MOVAPS xmm13, [byte rsp + 96]
	MOVAPS xmm14, [byte rsp + 112]
	MOVAPS xmm15, [dword rsp + 128]
	MOVAPS xmm6, [dword rsp + 144]
	ADD rsp, 168
	RET
	.return_null_pointer:
	MOV eax, 1
	JMP .return
	.return_misaligned_pointer:
	MOV eax, 2
	JMP .return

section .text$f code align=16
global _yepCore_Sum_V32f_S32f_SandyBridge
_yepCore_Sum_V32f_S32f_SandyBridge:
	.ENTRY:
	SUB rsp, 168
	VMOVAPS [rsp], xmm6
	VMOVAPS [byte rsp + 16], xmm7
	VMOVAPS [byte rsp + 32], xmm8
	VMOVAPS [byte rsp + 48], xmm9
	VMOVAPS [byte rsp + 64], xmm10
	VMOVAPS [byte rsp + 80], xmm11
	VMOVAPS [byte rsp + 96], xmm12
	VMOVAPS [byte rsp + 112], xmm13
	VMOVAPS [dword rsp + 128], xmm14
	VMOVAPS [dword rsp + 144], xmm15
	TEST rcx, rcx
	JZ .return_null_pointer
	TEST rcx, 3
	JNZ .return_misaligned_pointer
	TEST rdx, rdx
	JZ .return_null_pointer
	TEST rdx, 3
	JNZ .return_misaligned_pointer
	VXORPS xmm0, xmm0, xmm0
	TEST r8, r8
	JZ .return_ok
	VXORPS xmm6, xmm6, xmm6
	VXORPS xmm7, xmm7, xmm7
	VXORPS xmm8, xmm8, xmm8
	VXORPS xmm9, xmm9, xmm9
	VXORPS xmm10, xmm10, xmm10
	VXORPS xmm11, xmm11, xmm11
	VXORPS xmm12, xmm12, xmm12
	TEST rcx, 31
	JZ .source_32b_aligned
	.source_32b_misaligned:
	VMOVSS xmm13, [rcx]
	VADDPS ymm0, ymm0, ymm13
	ADD rcx, 4
	SUB r8, 1
	JZ .reduce_batch
	TEST rcx, 31
	JNZ .source_32b_misaligned
	.source_32b_aligned:
	SUB r8, 64
	JB .batch_process_finish
	.process_batch_prologue:
	VMOVUPS ymm13, [rcx]
	VMOVUPS ymm4, [byte rcx + 32]
	VMOVUPS ymm5, [byte rcx + 64]
	VMOVUPS ymm14, [byte rcx + 96]
	VMOVUPS ymm15, [dword rcx + 128]
	VADDPS ymm0, ymm0, ymm13
	VMOVUPS ymm1, [dword rcx + 160]
	VADDPS ymm6, ymm6, ymm4
	VMOVUPS ymm3, [dword rcx + 192]
	VADDPS ymm7, ymm7, ymm5
	VMOVUPS ymm2, [dword rcx + 224]
	VADDPS ymm8, ymm8, ymm14
	ADD rcx, 256
	VADDPS ymm9, ymm9, ymm15
	SUB r8, 64
	JB .process_batch_epilogue
	align 16
	.process_batch:
	VMOVUPS ymm13, [rcx]
	VADDPS ymm10, ymm10, ymm1
	VMOVUPS ymm4, [byte rcx + 32]
	VADDPS ymm11, ymm11, ymm3
	VMOVUPS ymm5, [byte rcx + 64]
	VADDPS ymm12, ymm12, ymm2
	VMOVUPS ymm14, [byte rcx + 96]
	VMOVUPS ymm15, [dword rcx + 128]
	VADDPS ymm0, ymm0, ymm13
	VMOVUPS ymm1, [dword rcx + 160]
	VADDPS ymm6, ymm6, ymm4
	VMOVUPS ymm3, [dword rcx + 192]
	VADDPS ymm7, ymm7, ymm5
	VMOVUPS ymm2, [dword rcx + 224]
	VADDPS ymm8, ymm8, ymm14
	ADD rcx, 256
	VADDPS ymm9, ymm9, ymm15
	SUB r8, 64
	JAE .process_batch
	.process_batch_epilogue:
	VADDPS ymm10, ymm10, ymm1
	VADDPS ymm11, ymm11, ymm3
	VADDPS ymm12, ymm12, ymm2
	.batch_process_finish:
	ADD r8, 64
	JZ .reduce_batch
	.process_single:
	VMOVSS xmm4, [rcx]
	VADDPS ymm0, ymm0, ymm4
	ADD rcx, 4
	SUB r8, 1
	JNZ .process_single
	.reduce_batch:
	VADDPS ymm0, ymm0, ymm6
	VADDPS ymm7, ymm7, ymm8
	VADDPS ymm9, ymm9, ymm10
	VADDPS ymm11, ymm11, ymm12
	VADDPS ymm0, ymm0, ymm7
	VADDPS ymm9, ymm9, ymm11
	VADDPS ymm0, ymm0, ymm9
	VEXTRACTF128 xmm4, ymm0, 1
	VADDPS xmm0, xmm0, xmm4
	VUNPCKHPD xmm4, xmm0, xmm0
	VADDPS xmm0, xmm0, xmm4
	VMOVSHDUP xmm4, xmm0
	VADDSS xmm0, xmm0, xmm4
	.return_ok:
	VMOVSS [rdx], xmm0
	XOR eax, eax
	.return:
	VMOVAPS xmm6, [rsp]
	VMOVAPS xmm7, [byte rsp + 16]
	VMOVAPS xmm8, [byte rsp + 32]
	VMOVAPS xmm9, [byte rsp + 48]
	VMOVAPS xmm10, [byte rsp + 64]
	VMOVAPS xmm11, [byte rsp + 80]
	VMOVAPS xmm12, [byte rsp + 96]
	VMOVAPS xmm13, [byte rsp + 112]
	VMOVAPS xmm14, [dword rsp + 128]
	VMOVAPS xmm15, [dword rsp + 144]
	ADD rsp, 168
	VZEROUPPER
	RET
	.return_null_pointer:
	MOV eax, 1
	JMP .return
	.return_misaligned_pointer:
	MOV eax, 2
	JMP .return

section .text$n code align=16
global _yepCore_Sum_V32f_S32f_Bulldozer
_yepCore_Sum_V32f_S32f_Bulldozer:
	.ENTRY:
	SUB rsp, 104
	VMOVAPS [rsp], xmm6
	VMOVAPS [byte rsp + 16], xmm7
	VMOVAPS [byte rsp + 32], xmm8
	VMOVAPS [byte rsp + 48], xmm9
	VMOVAPS [byte rsp + 64], xmm10
	VMOVAPS [byte rsp + 80], xmm11
	TEST rcx, rcx
	JZ .return_null_pointer
	TEST rcx, 3
	JNZ .return_misaligned_pointer
	TEST rdx, rdx
	JZ .return_null_pointer
	TEST rdx, 3
	JNZ .return_misaligned_pointer
	VXORPS xmm2, xmm2, xmm2
	TEST r8, r8
	JZ .return_ok
	VXORPS xmm1, xmm1, xmm1
	VXORPS xmm0, xmm0, xmm0
	VXORPS xmm6, xmm6, xmm6
	VXORPS xmm7, xmm7, xmm7
	VXORPS xmm8, xmm8, xmm8
	TEST rcx, 31
	JZ .source_32b_aligned
	.source_32b_misaligned:
	VMOVSS xmm9, [rcx]
	VADDPS xmm2, xmm2, xmm9
	ADD rcx, 4
	SUB r8, 1
	JZ .reduce_batch
	TEST rcx, 31
	JNZ .source_32b_misaligned
	.source_32b_aligned:
	SUB r8, 32
	JB .batch_process_finish
	.process_batch_prologue:
	VMOVUPS xmm9, [rcx]
	VMOVUPS xmm3, [byte rcx + 16]
	VMOVUPS ymm10, [byte rcx + 32]
	VMOVUPS xmm11, [byte rcx + 64]
	VADDPS xmm2, xmm2, xmm9
	VMOVUPS xmm4, [byte rcx + 80]
	VADDPS xmm1, xmm1, xmm3
	VMOVUPS ymm5, [byte rcx + 96]
	VADDPS ymm0, ymm0, ymm10
	ADD rcx, 128
	VADDPS xmm6, xmm6, xmm11
	SUB r8, 32
	JB .process_batch_epilogue
	align 16
	.process_batch:
	VMOVUPS xmm9, [rcx]
	VADDPS xmm7, xmm7, xmm4
	VMOVUPS xmm3, [byte rcx + 16]
	VADDPS ymm8, ymm8, ymm5
	VMOVUPS ymm10, [byte rcx + 32]
	VMOVUPS xmm11, [byte rcx + 64]
	VADDPS xmm2, xmm2, xmm9
	VMOVUPS xmm4, [byte rcx + 80]
	VADDPS xmm1, xmm1, xmm3
	VMOVUPS ymm5, [byte rcx + 96]
	VADDPS ymm0, ymm0, ymm10
	ADD rcx, 128
	VADDPS xmm6, xmm6, xmm11
	SUB r8, 32
	JAE .process_batch
	.process_batch_epilogue:
	VADDPS xmm7, xmm7, xmm4
	VADDPS ymm8, ymm8, ymm5
	.batch_process_finish:
	ADD r8, 32
	JZ .reduce_batch
	.process_single:
	VMOVSS xmm4, [rcx]
	VADDPS xmm2, xmm2, xmm4
	ADD rcx, 4
	SUB r8, 1
	JNZ .process_single
	.reduce_batch:
	VADDPS xmm2, xmm2, xmm1
	VADDPS ymm0, ymm0, ymm6
	VADDPS ymm7, ymm7, ymm8
	VADDPS ymm2, ymm2, ymm0
	VADDPS ymm2, ymm2, ymm7
	VEXTRACTF128 xmm4, ymm2, 1
	VADDPS xmm2, xmm2, xmm4
	VUNPCKHPD xmm4, xmm2, xmm2
	VADDPS xmm2, xmm2, xmm4
	VMOVSHDUP xmm4, xmm2
	VADDSS xmm2, xmm2, xmm4
	.return_ok:
	VMOVSS [rdx], xmm2
	XOR eax, eax
	.return:
	VMOVAPS xmm6, [rsp]
	VMOVAPS xmm7, [byte rsp + 16]
	VMOVAPS xmm8, [byte rsp + 32]
	VMOVAPS xmm9, [byte rsp + 48]
	VMOVAPS xmm10, [byte rsp + 64]
	VMOVAPS xmm11, [byte rsp + 80]
	ADD rsp, 104
	VZEROUPPER
	RET
	.return_null_pointer:
	MOV eax, 1
	JMP .return
	.return_misaligned_pointer:
	MOV eax, 2
	JMP .return

section .text$e code align=16
global _yepCore_Sum_V64f_S64f_Nehalem
_yepCore_Sum_V64f_S64f_Nehalem:
	.ENTRY:
	SUB rsp, 168
	MOVAPS [rsp], xmm7
	MOVAPS [byte rsp + 16], xmm8
	MOVAPS [byte rsp + 32], xmm9
	MOVAPS [byte rsp + 48], xmm10
	MOVAPS [byte rsp + 64], xmm11
	MOVAPS [byte rsp + 80], xmm12
	MOVAPS [byte rsp + 96], xmm13
	MOVAPS [byte rsp + 112], xmm14
	MOVAPS [dword rsp + 128], xmm15
	MOVAPS [dword rsp + 144], xmm6
	TEST rcx, rcx
	JZ .return_null_pointer
	TEST rcx, 7
	JNZ .return_misaligned_pointer
	TEST rdx, rdx
	JZ .return_null_pointer
	TEST rdx, 7
	JNZ .return_misaligned_pointer
	XORPD xmm7, xmm7
	TEST r8, r8
	JZ .return_ok
	XORPD xmm8, xmm8
	XORPD xmm9, xmm9
	XORPD xmm10, xmm10
	XORPD xmm11, xmm11
	XORPD xmm12, xmm12
	XORPD xmm13, xmm13
	XORPD xmm14, xmm14
	TEST rcx, 15
	JZ .source_16b_aligned
	.source_16b_misaligned:
	MOVSD xmm15, [rcx]
	ADDPD xmm7, xmm15
	ADD rcx, 8
	SUB r8, 1
	JZ .reduce_batch
	TEST rcx, 15
	JNZ .source_16b_misaligned
	.source_16b_aligned:
	SUB r8, 16
	JB .batch_process_finish
	.process_batch_prologue:
	MOVUPD xmm15, [rcx]
	MOVUPD xmm4, [byte rcx + 16]
	MOVUPD xmm5, [byte rcx + 32]
	MOVUPD xmm3, [byte rcx + 48]
	MOVUPD xmm1, [byte rcx + 64]
	MOVUPD xmm2, [byte rcx + 80]
	ADDPD xmm7, xmm15
	MOVUPD xmm0, [byte rcx + 96]
	ADDPD xmm8, xmm4
	MOVUPD xmm6, [byte rcx + 112]
	ADDPD xmm9, xmm5
	ADD rcx, 128
	ADDPD xmm10, xmm3
	SUB r8, 16
	JB .process_batch_epilogue
	align 16
	.process_batch:
	MOVUPD xmm15, [rcx]
	ADDPD xmm11, xmm1
	MOVUPD xmm4, [byte rcx + 16]
	ADDPD xmm12, xmm2
	MOVUPD xmm5, [byte rcx + 32]
	ADDPD xmm13, xmm0
	MOVUPD xmm3, [byte rcx + 48]
	ADDPD xmm14, xmm6
	MOVUPD xmm1, [byte rcx + 64]
	MOVUPD xmm2, [byte rcx + 80]
	ADDPD xmm7, xmm15
	MOVUPD xmm0, [byte rcx + 96]
	ADDPD xmm8, xmm4
	MOVUPD xmm6, [byte rcx + 112]
	ADDPD xmm9, xmm5
	ADD rcx, 128
	ADDPD xmm10, xmm3
	SUB r8, 16
	JAE .process_batch
	.process_batch_epilogue:
	ADDPD xmm11, xmm1
	ADDPD xmm12, xmm2
	ADDPD xmm13, xmm0
	ADDPD xmm14, xmm6
	.batch_process_finish:
	ADD r8, 16
	JZ .reduce_batch
	.process_single:
	MOVSD xmm4, [rcx]
	ADDPD xmm7, xmm4
	ADD rcx, 8
	SUB r8, 1
	JNZ .process_single
	.reduce_batch:
	ADDPD xmm7, xmm8
	ADDPD xmm9, xmm10
	ADDPD xmm11, xmm12
	ADDPD xmm13, xmm14
	ADDPD xmm7, xmm9
	ADDPD xmm11, xmm13
	ADDPD xmm7, xmm11
	MOVHLPS xmm4, xmm7
	ADDSD xmm7, xmm4
	.return_ok:
	MOVSD [rdx], xmm7
	XOR eax, eax
	.return:
	MOVAPS xmm7, [rsp]
	MOVAPS xmm8, [byte rsp + 16]
	MOVAPS xmm9, [byte rsp + 32]
	MOVAPS xmm10, [byte rsp + 48]
	MOVAPS xmm11, [byte rsp + 64]
	MOVAPS xmm12, [byte rsp + 80]
	MOVAPS xmm13, [byte rsp + 96]
	MOVAPS xmm14, [byte rsp + 112]
	MOVAPS xmm15, [dword rsp + 128]
	MOVAPS xmm6, [dword rsp + 144]
	ADD rsp, 168
	RET
	.return_null_pointer:
	MOV eax, 1
	JMP .return
	.return_misaligned_pointer:
	MOV eax, 2
	JMP .return

section .text$f code align=16
global _yepCore_Sum_V64f_S64f_SandyBridge
_yepCore_Sum_V64f_S64f_SandyBridge:
	.ENTRY:
	SUB rsp, 168
	VMOVAPS [rsp], xmm6
	VMOVAPS [byte rsp + 16], xmm7
	VMOVAPS [byte rsp + 32], xmm8
	VMOVAPS [byte rsp + 48], xmm9
	VMOVAPS [byte rsp + 64], xmm10
	VMOVAPS [byte rsp + 80], xmm11
	VMOVAPS [byte rsp + 96], xmm12
	VMOVAPS [byte rsp + 112], xmm13
	VMOVAPS [dword rsp + 128], xmm14
	VMOVAPS [dword rsp + 144], xmm15
	TEST rcx, rcx
	JZ .return_null_pointer
	TEST rcx, 7
	JNZ .return_misaligned_pointer
	TEST rdx, rdx
	JZ .return_null_pointer
	TEST rdx, 7
	JNZ .return_misaligned_pointer
	VXORPD xmm0, xmm0, xmm0
	TEST r8, r8
	JZ .return_ok
	VXORPD xmm6, xmm6, xmm6
	VXORPD xmm7, xmm7, xmm7
	VXORPD xmm8, xmm8, xmm8
	VXORPD xmm9, xmm9, xmm9
	VXORPD xmm10, xmm10, xmm10
	VXORPD xmm11, xmm11, xmm11
	VXORPD xmm12, xmm12, xmm12
	TEST rcx, 31
	JZ .source_32b_aligned
	.source_32b_misaligned:
	VMOVSD xmm13, [rcx]
	VADDPD ymm0, ymm0, ymm13
	ADD rcx, 8
	SUB r8, 1
	JZ .reduce_batch
	TEST rcx, 31
	JNZ .source_32b_misaligned
	.source_32b_aligned:
	SUB r8, 32
	JB .batch_process_finish
	.process_batch_prologue:
	VMOVUPD ymm13, [rcx]
	VMOVUPD ymm4, [byte rcx + 32]
	VMOVUPD ymm5, [byte rcx + 64]
	VMOVUPD ymm14, [byte rcx + 96]
	VMOVUPD ymm15, [dword rcx + 128]
	VADDPD ymm0, ymm0, ymm13
	VMOVUPD ymm1, [dword rcx + 160]
	VADDPD ymm6, ymm6, ymm4
	VMOVUPD ymm3, [dword rcx + 192]
	VADDPD ymm7, ymm7, ymm5
	VMOVUPD ymm2, [dword rcx + 224]
	VADDPD ymm8, ymm8, ymm14
	ADD rcx, 256
	VADDPD ymm9, ymm9, ymm15
	SUB r8, 32
	JB .process_batch_epilogue
	align 16
	.process_batch:
	VMOVUPD ymm13, [rcx]
	VADDPD ymm10, ymm10, ymm1
	VMOVUPD ymm4, [byte rcx + 32]
	VADDPD ymm11, ymm11, ymm3
	VMOVUPD ymm5, [byte rcx + 64]
	VADDPD ymm12, ymm12, ymm2
	VMOVUPD ymm14, [byte rcx + 96]
	VMOVUPD ymm15, [dword rcx + 128]
	VADDPD ymm0, ymm0, ymm13
	VMOVUPD ymm1, [dword rcx + 160]
	VADDPD ymm6, ymm6, ymm4
	VMOVUPD ymm3, [dword rcx + 192]
	VADDPD ymm7, ymm7, ymm5
	VMOVUPD ymm2, [dword rcx + 224]
	VADDPD ymm8, ymm8, ymm14
	ADD rcx, 256
	VADDPD ymm9, ymm9, ymm15
	SUB r8, 32
	JAE .process_batch
	.process_batch_epilogue:
	VADDPD ymm10, ymm10, ymm1
	VADDPD ymm11, ymm11, ymm3
	VADDPD ymm12, ymm12, ymm2
	.batch_process_finish:
	ADD r8, 32
	JZ .reduce_batch
	.process_single:
	VMOVSD xmm4, [rcx]
	VADDPD ymm0, ymm0, ymm4
	ADD rcx, 8
	SUB r8, 1
	JNZ .process_single
	.reduce_batch:
	VADDPD ymm0, ymm0, ymm6
	VADDPD ymm7, ymm7, ymm8
	VADDPD ymm9, ymm9, ymm10
	VADDPD ymm11, ymm11, ymm12
	VADDPD ymm0, ymm0, ymm7
	VADDPD ymm9, ymm9, ymm11
	VADDPD ymm0, ymm0, ymm9
	VEXTRACTF128 xmm4, ymm0, 1
	VADDPD xmm0, xmm0, xmm4
	VUNPCKHPD xmm4, xmm0, xmm0
	VADDSD xmm0, xmm0, xmm4
	.return_ok:
	VMOVSD [rdx], xmm0
	XOR eax, eax
	.return:
	VMOVAPS xmm6, [rsp]
	VMOVAPS xmm7, [byte rsp + 16]
	VMOVAPS xmm8, [byte rsp + 32]
	VMOVAPS xmm9, [byte rsp + 48]
	VMOVAPS xmm10, [byte rsp + 64]
	VMOVAPS xmm11, [byte rsp + 80]
	VMOVAPS xmm12, [byte rsp + 96]
	VMOVAPS xmm13, [byte rsp + 112]
	VMOVAPS xmm14, [dword rsp + 128]
	VMOVAPS xmm15, [dword rsp + 144]
	ADD rsp, 168
	VZEROUPPER
	RET
	.return_null_pointer:
	MOV eax, 1
	JMP .return
	.return_misaligned_pointer:
	MOV eax, 2
	JMP .return

section .text$n code align=16
global _yepCore_Sum_V64f_S64f_Bulldozer
_yepCore_Sum_V64f_S64f_Bulldozer:
	.ENTRY:
	SUB rsp, 104
	VMOVAPS [rsp], xmm6
	VMOVAPS [byte rsp + 16], xmm7
	VMOVAPS [byte rsp + 32], xmm8
	VMOVAPS [byte rsp + 48], xmm9
	VMOVAPS [byte rsp + 64], xmm10
	VMOVAPS [byte rsp + 80], xmm11
	TEST rcx, rcx
	JZ .return_null_pointer
	TEST rcx, 7
	JNZ .return_misaligned_pointer
	TEST rdx, rdx
	JZ .return_null_pointer
	TEST rdx, 7
	JNZ .return_misaligned_pointer
	VXORPD xmm2, xmm2, xmm2
	TEST r8, r8
	JZ .return_ok
	VXORPD xmm1, xmm1, xmm1
	VXORPD xmm0, xmm0, xmm0
	VXORPD xmm6, xmm6, xmm6
	VXORPD xmm7, xmm7, xmm7
	VXORPD xmm8, xmm8, xmm8
	TEST rcx, 31
	JZ .source_32b_aligned
	.source_32b_misaligned:
	VMOVSD xmm9, [rcx]
	VADDPD xmm2, xmm2, xmm9
	ADD rcx, 8
	SUB r8, 1
	JZ .reduce_batch
	TEST rcx, 31
	JNZ .source_32b_misaligned
	.source_32b_aligned:
	SUB r8, 16
	JB .batch_process_finish
	.process_batch_prologue:
	VMOVUPD xmm9, [rcx]
	VMOVUPD xmm3, [byte rcx + 16]
	VMOVUPD ymm10, [byte rcx + 32]
	VMOVUPD xmm11, [byte rcx + 64]
	VADDPD xmm2, xmm2, xmm9
	VMOVUPD xmm4, [byte rcx + 80]
	VADDPD xmm1, xmm1, xmm3
	VMOVUPD ymm5, [byte rcx + 96]
	VADDPD ymm0, ymm0, ymm10
	ADD rcx, 128
	VADDPD xmm6, xmm6, xmm11
	SUB r8, 16
	JB .process_batch_epilogue
	align 16
	.process_batch:
	VMOVUPD xmm9, [rcx]
	VADDPD xmm7, xmm7, xmm4
	VMOVUPD xmm3, [byte rcx + 16]
	VADDPD ymm8, ymm8, ymm5
	VMOVUPD ymm10, [byte rcx + 32]
	VMOVUPD xmm11, [byte rcx + 64]
	VADDPD xmm2, xmm2, xmm9
	VMOVUPD xmm4, [byte rcx + 80]
	VADDPD xmm1, xmm1, xmm3
	VMOVUPD ymm5, [byte rcx + 96]
	VADDPD ymm0, ymm0, ymm10
	ADD rcx, 128
	VADDPD xmm6, xmm6, xmm11
	SUB r8, 16
	JAE .process_batch
	.process_batch_epilogue:
	VADDPD xmm7, xmm7, xmm4
	VADDPD ymm8, ymm8, ymm5
	.batch_process_finish:
	ADD r8, 16
	JZ .reduce_batch
	.process_single:
	VMOVSD xmm4, [rcx]
	VADDPD xmm2, xmm2, xmm4
	ADD rcx, 8
	SUB r8, 1
	JNZ .process_single
	.reduce_batch:
	VADDPD xmm2, xmm2, xmm1
	VADDPD ymm0, ymm0, ymm6
	VADDPD ymm7, ymm7, ymm8
	VADDPD ymm2, ymm2, ymm0
	VADDPD ymm2, ymm2, ymm7
	VEXTRACTF128 xmm4, ymm2, 1
	VADDPD xmm2, xmm2, xmm4
	VUNPCKHPD xmm4, xmm2, xmm2
	VADDSD xmm2, xmm2, xmm4
	.return_ok:
	VMOVSD [rdx], xmm2
	XOR eax, eax
	.return:
	VMOVAPS xmm6, [rsp]
	VMOVAPS xmm7, [byte rsp + 16]
	VMOVAPS xmm8, [byte rsp + 32]
	VMOVAPS xmm9, [byte rsp + 48]
	VMOVAPS xmm10, [byte rsp + 64]
	VMOVAPS xmm11, [byte rsp + 80]
	ADD rsp, 104
	VZEROUPPER
	RET
	.return_null_pointer:
	MOV eax, 1
	JMP .return
	.return_misaligned_pointer:
	MOV eax, 2
	JMP .return
