section .data
    hello db "Hello, Holberton",0xa,0    ; The string to be printed, followed by a newline character (0xa)
    format db "%s",0                      ; The format string for printf

section .text
    extern printf
    global main

main:
    push rbp
    mov rdi, format     ; Load the format string
    mov rsi, hello      ; Load the address of the hello string
    call printf         ; Call printf function
    pop rbp
    ret

