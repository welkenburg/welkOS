global long_mode_start
extern kernel_main

section .text
bits 64
long_mode_start:
; load null into all data segemnt registers
    mov eax, 0
    mov ss, eax
    mov ds, eax
    mov es, eax
    mov fs, eax
    mov gs, eax

    call kernel_main

    hlt