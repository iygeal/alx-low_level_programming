global	main
extern	printf

section .data
	format db 'Hello, Holberton\n',0	; Definition of format string
main:
	mov	edi, format	; Load the address of the string
	xor	eax,	eax	; Clear the eax register
	call	printf		; Call printf to print the formatted string
	mov	eax,	0	; Set return value to 0, which implies success
	ret			; Return from the main function
