section .data
    hello db "Hello, Holberton",10  ; The string to be printed, followed by a newline character (10)

section .text
    global main
    extern printf

main:
    sub rsp, 8   ; Align the stack to 16 bytes (required by the ABI)
    mov rdi, hello  ; Load the address of the string into rdi (1st argument for printf)
    call printf  ; Call the printf function

    add rsp, 8   ; Restore the stack
    ret          ; Return from main