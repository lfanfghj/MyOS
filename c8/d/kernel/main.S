	.file	"main.c"
	.section	.rodata
.LC0:
	.string	"i am kernel!!!!!\n"
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
	subl	$16, %esp
	movl	$.LC0, (%esp)
	call	put_str
	movl	$0, (%esp)
	call	put_int
	movl	$10, (%esp)
	call	put_char
	movl	$137791, (%esp)
	call	put_int
	movl	$10, (%esp)
	call	put_char
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (GNU) 4.8.5 20150623 (Red Hat 4.8.5-44)"
	.section	.note.GNU-stack,"",@progbits
