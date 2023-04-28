SECTION .data
msgz:    db "Hello, Holberton", 0
fmtz:    db "%s", 10, 0

        SECTION .text
        extern printf
        global main
main:
        mov esi, msgz
        mov edi, fmtz
        mov eax, 0
        call printf

        mov eax, 0
        ret
