section .rodata
	msg: db "Hello, Holberton", 10
	msglen equ $ - msg

section .text
	global main

main:
	; write HelloHolberton to screen
	mov rax, 1 ; syscall for write
	mov rdi, 1
	mov rsi, msg
	move rdx, msglen
	syscall
	mov rax, 60 ; 60 is exit
	xor rdi, edi ; exit (0)
	syscall
