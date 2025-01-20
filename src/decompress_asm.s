    .syntax unified

    .arm
    .section .iwram.code
    .align 2

.global FastUnsafeCopy32
.type FastUnsafeCopy32, %function
    
    @ Word aligned, 32-byte copy
    @ This function WILL overwrite your buffer, so make sure it is at least 32 bytes larger than the desired size.
FastUnsafeCopy32:
    push    {r4-r10}
.Lloop_32:
    ldmia r1!, {r3-r10}
    stmia r0!, {r3-r10}
    subs    r2, r2, #32
    bgt     .Lloop_32
    pop     {r4-r10}
    bx    lr
