section .data
    num1 dd 10   ; Define the first number (change the value as needed)
    num2 dd 20   ; Define the second number (change the value as needed)
    result dd 0  ; Define a variable to store the result

section .text
    global _start

_start:
    ; Load the first number into eax
    mov eax, [num1]

    ; Add the second number to eax
    add eax, [num2]

    ; Store the result in the result variable
    mov [result], eax

    ; Exit the program
    mov eax, 1      ; syscall number for exit
    xor ebx, ebx    ; exit status 0
    int 0x80        ; perform syscall