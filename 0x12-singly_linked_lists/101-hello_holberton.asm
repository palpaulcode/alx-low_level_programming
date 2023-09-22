	extern	printf			; function to be called
		
		section	.data		; Data section, initialize variables
msg:		db "Hello, Holberton",0 ; needed for a string
fmt:		db "%s", 10, 0		; The print format, "\n",'0'

		section	.text		; code section

		global main		; standard gcc entry point
main					; program label for the entry point
		push	rbp		; set up stack frame

		mov	rdi,fmt		; format for printf
		mov 	rsi,msg
		mov	rax,0		; no xmm register
		call	printf		; cakk C function

		pop	rbp		; rerstore the stack

		mov	rax,0		; normal, no error, return value
		ret			; return
