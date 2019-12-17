	.file	"pointer.c"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	movl	%gs:20, %eax
	movl	%eax, 28(%esp)
	xorl	%eax, %eax
	movl	$1819042157, 23(%esp)
	movb	$97, 27(%esp)
	movw	$25970, 20(%esp)
	movb	$100, 22(%esp)
	leal	23(%esp), %eax
	movl	%eax, (%esp)
	call	puts
	leal	20(%esp), %eax
	movl	%eax, (%esp)
	call	puts
	movl	$0, %eax
	movl	28(%esp), %edx
	xorl	%gs:20, %edx
	je	.L3
	call	__stack_chk_fail
.L3:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
