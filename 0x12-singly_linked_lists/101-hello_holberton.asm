	global main
	extern printf
	section   .text
main:
	mov       rdi, str				; first argument
	xor       rax, rax				; for vaargs
	call      printf
	xor       rax, rax				; 0 return value
	ret								; return

	section   .data
str:
	db        "Hello, Holberton", 10, 0 ; 10 == '\n'
