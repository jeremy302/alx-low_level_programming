	global main
	section   .text
main:
	mov       rax, 1 				; write
	mov       rdi, 1				; stdout
	mov       rsi, str
	mov       rdx, 17				; str length
	syscall
	mov       rax, 60				; exit
	xor       rdi, rdi				; 0 status
	syscall


	section   .data
str:
	db        "Hello, Holberton", 10 ; 10 == '\n'
