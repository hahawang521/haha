	.file	"reverse.c"
	.text
	.globl	reverse
	.type	reverse, @function
reverse:
.LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	strlen
	movl	%eax, -12(%ebp)
	movl	$0, -16(%ebp)
	jmp	.L2
.L3:
	movl	-16(%ebp), %edx
	movl	8(%ebp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	movb	%al, -17(%ebp)
	movl	-16(%ebp), %edx
	movl	8(%ebp), %eax
	addl	%eax, %edx
	movl	-12(%ebp), %ecx
	movl	-16(%ebp), %eax
	subl	%eax, %ecx
	movl	%ecx, %eax
	leal	-1(%eax), %ecx
	movl	8(%ebp), %eax
	addl	%ecx, %eax
	movzbl	(%eax), %eax
	movb	%al, (%edx)
	movl	-12(%ebp), %edx
	movl	-16(%ebp), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	leal	-1(%eax), %edx
	movl	8(%ebp), %eax
	addl	%eax, %edx
	movzbl	-17(%ebp), %eax
	movb	%al, (%edx)
	addl	$1, -16(%ebp)
.L2:
	movl	-12(%ebp), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	cmpl	-16(%ebp), %eax
	jg	.L3
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	reverse, .-reverse
	.section	.rodata
.LC0:
	.string	"Give me a word to reverse"
.LC1:
	.string	"%s"
.LC2:
	.string	"Reverse=%s\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$1056, %esp
	movl	%gs:20, %eax
	movl	%eax, 1052(%esp)
	xorl	%eax, %eax
	movl	$.LC0, (%esp)
	call	puts
	leal	28(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$.LC1, (%esp)
	call	__isoc99_scanf
	leal	28(%esp), %eax
	movl	%eax, (%esp)
	call	reverse
	leal	28(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$.LC2, (%esp)
	call	printf
	movl	$0, %eax
	movl	1052(%esp), %edx
	xorl	%gs:20, %edx
	je	.L6
	call	__stack_chk_fail
.L6:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.4) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
