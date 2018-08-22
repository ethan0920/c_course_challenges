	.file	"main.c"
	.section	.rodata
	.align 8
.LC0:
	.string	"Python is the preferred language"
	.align 8
.LC1:
	.string	"Ruby is the preferred language"
.LC2:
	.string	"C is the preferred language"
.LC3:
	.string	"C++ is the preferred language"
	.align 8
.LC4:
	.string	"Java is the preferred language"
	.align 8
.LC5:
	.string	"JavaScript is the preferred language"
.LC6:
	.string	"C# is the preferred language"
	.align 8
.LC7:
	.string	"Kotlin is the preferred language"
	.align 8
.LC8:
	.string	"Elixir is the preferred language"
	.align 8
.LC9:
	.string	"Erlang is the preferred language"
	.align 8
.LC10:
	.string	"Julia is the preferred language"
.LC11:
	.string	"R is the preferred language"
.LC12:
	.string	"D is the preferred language"
	.align 8
.LC13:
	.string	"Rust is the preferred language"
	.align 8
.LC14:
	.string	"I do not know of this language"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$2, -4(%rbp)
	cmpl	$13, -4(%rbp)
	ja	.L2
	movl	-4(%rbp), %eax
	movq	.L4(,%rax,8), %rax
	jmp	*%rax
	.section	.rodata
	.align 8
	.align 4
.L4:
	.quad	.L3
	.quad	.L5
	.quad	.L6
	.quad	.L7
	.quad	.L8
	.quad	.L9
	.quad	.L10
	.quad	.L11
	.quad	.L12
	.quad	.L13
	.quad	.L14
	.quad	.L15
	.quad	.L16
	.quad	.L17
	.text
.L3:
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	jmp	.L18
.L5:
	movl	$.LC1, %edi
	movl	$0, %eax
	call	printf
	jmp	.L18
.L6:
	movl	$.LC2, %edi
	movl	$0, %eax
	call	printf
	jmp	.L18
.L7:
	movl	$.LC3, %edi
	movl	$0, %eax
	call	printf
	jmp	.L18
.L8:
	movl	$.LC4, %edi
	movl	$0, %eax
	call	printf
	jmp	.L18
.L9:
	movl	$.LC5, %edi
	movl	$0, %eax
	call	printf
	jmp	.L18
.L10:
	movl	$.LC6, %edi
	movl	$0, %eax
	call	printf
	jmp	.L18
.L11:
	movl	$.LC7, %edi
	movl	$0, %eax
	call	printf
	jmp	.L18
.L12:
	movl	$.LC8, %edi
	movl	$0, %eax
	call	printf
	jmp	.L18
.L13:
	movl	$.LC9, %edi
	movl	$0, %eax
	call	printf
	jmp	.L18
.L14:
	movl	$.LC10, %edi
	movl	$0, %eax
	call	printf
	jmp	.L18
.L15:
	movl	$.LC11, %edi
	movl	$0, %eax
	call	printf
	jmp	.L18
.L16:
	movl	$.LC12, %edi
	movl	$0, %eax
	call	printf
	jmp	.L18
.L17:
	movl	$.LC13, %edi
	movl	$0, %eax
	call	printf
	jmp	.L18
.L2:
	movl	$.LC14, %edi
	movl	$0, %eax
	call	printf
	nop
.L18:
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.10) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
