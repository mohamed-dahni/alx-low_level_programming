section .data
    hello db "Hello, Holberton", 0   ; Null-terminated string

section .text
    global _start

_start:
    ; Write "Hello, Holberton" to stdout
    mov rax, 1              ; syscall number for sys_write
    mov rdi, 1              ; file descriptor 1 (stdout)
    lea rsi, [hello]        ; address of the hello string
    mov rdx, 16             ; length of the string
    syscall

    ; Write a new line to stdout
    mov rax, 1              ; syscall number for sys_write
    mov rdi, 1              ; file descriptor 1 (stdout)
    mov rsi, nl             ; address of the new line string
    mov rdx, 1              ; length of the string
    syscall

    ; Exit the program
    mov rax, 60             ; syscall number for sys_exit
    xor rdi, rdi            ; exit status 0
    syscall

section .data
    nl db 10                ; New line character

section .bss
    resb 1                  ; Reserve space for the new line character

