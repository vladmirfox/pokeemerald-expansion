	.arch armv4t
	.fpu softvfp
	.file	"<stdin>"
	.text
	.align	2
	.arch armv4t
	.fpu softvfp
	.syntax unified
	.arm
	.type	DecodeLOtANSLoop, %function
DecodeLOtANSLoop:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, r8, r9, r10, fp, lr}
	ldr	r7, .L32
	mvn	r6, #0
	ldrb	ip, [r7]	@ zero_extendqisi2
	ldr	r4, [r7, #4]
	ldr	r5, [r0], #4
	b	.L11
.L2:
	ldr	lr, [r1, ip, lsl #2]
	and	fp, lr, #7
	lsl	r8, lr, #1
	lsr	r10, lr, #16
	add	ip, r4, fp
	and	r8, r8, #496
	and	r10, r10, r5, lsr r4
	lsl	lr, lr, #16
	cmp	ip, #31
	add	lr, r10, lr, lsr #24
	orr	r8, r8, r9
	bhi	.L29
	ldr	r4, [r1, lr, lsl #2]
	lsl	lr, r4, #5
	and	lr, lr, #7936
	and	r9, r4, #7
	orr	lr, lr, r8
	lsr	r8, r4, #16
	and	r8, r8, r5, lsr ip
	add	ip, ip, r9
	lsl	r4, r4, #16
	cmp	ip, #31
	add	r4, r8, r4, lsr #24
	bhi	.L30
	ldr	r8, [r1, r4, lsl #2]
	lsl	r4, r8, #9
	and	r4, r4, #126976
	and	r9, r8, #7
	orr	lr, r4, lr
	lsr	r4, r8, #16
	and	r4, r4, r5, lsr ip
	add	ip, ip, r9
	lsl	r8, r8, #16
	cmp	ip, #31
	add	r4, r4, r8, lsr #24
	bls	.L4
	mov	r10, r0
	ldr	r5, [r10], #4
	subs	ip, ip, #32
	strh	lr, [r2], #2	@ movhi
	subne	r9, r9, ip
	bicne	r8, r5, r6, lsl ip
	addne	r4, r4, r8, lsl r9
	cmp	r2, r3
	bcs	.L10
	ldr	r8, [r1, r4, lsl #2]
	mov	r0, r10
	lsr	lr, r8, #16
	and	r10, r8, #7
	add	r10, r10, ip
	and	ip, lr, r5, lsr ip
	lsl	lr, r8, #16
	add	ip, ip, lr, lsr #24
	ldr	ip, [r1, ip, lsl #2]
	lsr	lr, ip, #16
	lsl	r4, ip, #16
	and	lr, lr, r5, lsr r10
	add	lr, lr, r4, lsr #24
	ldr	r4, [r1, lr, lsl #2]
	and	r9, ip, #7
	lsl	lr, ip, #1
	add	r9, r9, r10
	lsl	r8, r8, #24
	lsr	ip, r4, #16
	and	lr, lr, #496
	orr	lr, lr, r8, lsr #27
	and	ip, ip, r5, lsr r9
	lsl	r8, r4, #16
	add	ip, ip, r8, lsr #24
	lsl	r10, r4, #5
	and	r4, r4, #7
	add	r8, r4, r9
	ldr	ip, [r1, ip, lsl #2]
	and	r4, r10, #7936
	orr	r4, r4, lr
.L27:
	lsl	lr, ip, #9
	and	lr, lr, #126976
	orr	lr, lr, r4
	lsr	r4, ip, #16
	lsl	r9, ip, #16
	and	r4, r4, r5, lsr r8
	and	ip, ip, #7
	add	r4, r4, r9, lsr #24
	add	ip, ip, r8
.L4:
	strh	lr, [r2], #2	@ movhi
	cmp	r3, r2
	bls	.L31
.L11:
	ldr	lr, [r1, r4, lsl #2]
	and	r8, lr, #7
	lsr	r10, lr, #16
	add	r4, ip, r8
	lsr	r9, lr, #3
	and	ip, r10, r5, lsr ip
	lsl	lr, lr, #16
	cmp	r4, #31
	and	r9, r9, #31
	add	ip, ip, lr, lsr #24
	bls	.L2
	ldr	r5, [r0], #4
	subs	lr, r4, #32
	subne	r8, r8, lr
	bicne	r4, r5, r6, lsl lr
	addne	ip, ip, r4, lsl r8
	ldr	ip, [r1, ip, lsl #2]
	lsr	r4, ip, #16
	lsl	r8, ip, #16
	and	r4, r4, r5, lsr lr
	add	r4, r4, r8, lsr #24
	ldr	r8, [r1, r4, lsl #2]
	and	r4, ip, #7
	lsl	ip, ip, #1
	add	r4, r4, lr
	and	ip, ip, #496
	lsr	lr, r8, #16
	orr	ip, ip, r9
	and	lr, lr, r5, lsr r4
	lsl	r9, r8, #16
	add	lr, lr, r9, lsr #24
	ldr	r9, [r1, lr, lsl #2]
	lsl	lr, r8, #5
	lsl	r10, r9, #9
	and	lr, lr, #7936
	and	r10, r10, #126976
	orr	lr, lr, ip
	orr	lr, r10, lr
	strh	lr, [r2], #2	@ movhi
	and	r8, r8, #7
	add	r8, r8, r4
	lsr	r4, r9, #16
	and	r4, r4, r5, lsr r8
	lsl	r10, r9, #16
	and	ip, r9, #7
	cmp	r3, r2
	add	r4, r4, r10, lsr #24
	add	ip, ip, r8
	bhi	.L11
.L31:
	sub	r0, r0, #4
.L10:
	strb	ip, [r7]
	str	r4, [r7, #4]
	str	r0, [r7, #8]
	pop	{r4, r5, r6, r7, r8, r9, r10, fp, lr}
	bx	lr
.L29:
	ldr	r5, [r0], #4
	subs	ip, ip, #32
	bicne	r4, r5, r6, lsl ip
	subne	fp, fp, ip
	addne	lr, lr, r4, lsl fp
	ldr	lr, [r1, lr, lsl #2]
	lsl	r4, lr, #5
	and	r4, r4, #7936
	lsr	r9, lr, #16
	orr	r4, r4, r8
	and	r8, lr, #7
	add	r8, r8, ip
	lsl	lr, lr, #16
	and	ip, r9, r5, lsr ip
	add	ip, ip, lr, lsr #24
	ldr	ip, [r1, ip, lsl #2]
	b	.L27
.L30:
	ldr	r5, [r0], #4
	subs	ip, ip, #32
	subne	r9, r9, ip
	bicne	r8, r5, r6, lsl ip
	addne	r4, r4, r8, lsl r9
	ldr	r8, [r1, r4, lsl #2]
	lsl	r4, r8, #9
	and	r4, r4, #126976
	orr	lr, r4, lr
	lsr	r4, r8, #16
	and	r4, r4, r5, lsr ip
	lsl	r9, r8, #16
	and	r8, r8, #7
	add	r4, r4, r9, lsr #24
	add	ip, r8, ip
	b	.L4
.L33:
	.align	2
.L32:
	.word	.LANCHOR0
	.size	DecodeLOtANSLoop, .-DecodeLOtANSLoop
	.align	2
	.syntax unified
	.arm
	.type	SwitchToArmCallLOtANS, %function
SwitchToArmCallLOtANS:
	@ Function supports interworking.
	@ args = 4, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	ip, [sp]
	bx	ip	@ indirect register sibling call
	.size	SwitchToArmCallLOtANS, .-SwitchToArmCallLOtANS
	.align	2
	.global	DecodeSymDeltatANSLoop
	.syntax unified
	.arm
	.type	DecodeSymDeltatANSLoop, %function
DecodeSymDeltatANSLoop:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	mov	ip, #0
	push	{r4, r5, r6, r7, r8, r9, r10, lr}
	ldr	r4, .L90
	ldr	lr, [r0], #4
	ldrb	r6, [r4]	@ zero_extendqisi2
	ldr	r5, [r4, #4]
.L53:
	ldr	r5, [r1, r5, lsl #2]
	and	r8, r5, #7
	lsr	r7, r5, #16
	and	r7, r7, lr, lsr r6
	add	r6, r6, r8
	add	ip, ip, r5, lsr #3
	cmp	r6, #31
	lsl	r5, r5, #16
	add	r5, r7, r5, lsr #24
	and	r7, ip, #15
	bhi	.L82
	ldr	r9, [r1, r5, lsl #2]
	lsr	r5, r9, #16
	and	r8, r9, #7
	and	r10, r5, lr, lsr r6
	add	ip, r7, r9, lsr #3
	add	r6, r6, r8
	and	ip, ip, #15
	lsl	r5, r9, #16
	cmp	r6, #31
	orr	r7, r7, ip, lsl #4
	add	r5, r10, r5, lsr #24
	bhi	.L83
	ldr	r8, [r1, r5, lsl #2]
	lsr	r5, r8, #16
	and	r9, r8, #7
	and	r10, r5, lr, lsr r6
	add	ip, ip, r8, lsr #3
	add	r6, r6, r9
	and	ip, ip, #15
	lsl	r5, r8, #16
	cmp	r6, #31
	orr	r7, r7, ip, lsl #8
	add	r5, r10, r5, lsr #24
	bhi	.L84
	ldr	r5, [r1, r5, lsl #2]
	and	r9, r5, #7
	lsr	r8, r5, #16
	add	ip, ip, r5, lsr #3
	and	r8, r8, lr, lsr r6
	add	r6, r6, r9
	and	ip, ip, #15
	lsl	r5, r5, #16
	cmp	r6, #31
	orr	r7, r7, ip, lsl #12
	add	r8, r8, r5, lsr #24
	bhi	.L85
.L45:
	ldr	r8, [r1, r8, lsl #2]
	and	r9, r8, #7
	lsr	r5, r8, #16
	add	ip, ip, r8, lsr #3
	and	r5, r5, lr, lsr r6
	add	r6, r6, r9
	and	ip, ip, #15
	lsl	r8, r8, #16
	cmp	r6, #31
	orr	r7, r7, ip, lsl #16
	add	r5, r5, r8, lsr #24
	bhi	.L86
.L38:
	ldr	r8, [r1, r5, lsl #2]
	and	r9, r8, #7
	lsr	r5, r8, #16
	add	ip, ip, r8, lsr #3
	and	r5, r5, lr, lsr r6
	add	r6, r6, r9
	and	ip, ip, #15
	lsl	r8, r8, #16
	cmp	r6, #31
	orr	r7, r7, ip, lsl #20
	add	r5, r5, r8, lsr #24
	bhi	.L87
.L41:
	ldr	r9, [r1, r5, lsl #2]
	add	ip, ip, r9, lsr #3
	and	ip, ip, #15
	lsr	r5, r9, #16
	orr	r8, r7, ip, lsl #24
	and	r7, r9, #7
	and	r10, r5, lr, lsr r6
	add	r6, r6, r7
	lsl	r5, r9, #16
	cmp	r6, #31
	add	r5, r10, r5, lsr #24
	bhi	.L88
.L44:
	ldr	r7, [r1, r5, lsl #2]
	and	r9, r7, #7
	lsr	r5, r7, #16
	and	r5, r5, lr, lsr r6
	add	r6, r6, r9
	add	ip, ip, r7, lsr #3
	cmp	r6, #31
	lsl	r7, r7, #16
	orr	r8, r8, ip, lsl #28
	add	r5, r5, r7, lsr #24
	and	ip, ip, #15
	bls	.L47
	mov	r10, r0
	subs	r6, r6, #32
	mvnne	r7, #0
	ldr	lr, [r10], #4
	str	r8, [r2], #4
	subne	r9, r9, r6
	bicne	r7, lr, r7, lsl r6
	addne	r5, r5, r7, lsl r9
	cmp	r2, r3
	bcs	.L52
	ldr	r5, [r1, r5, lsl #2]
	add	r7, ip, r5, lsr #3
	lsr	ip, r5, #16
	lsl	r8, r5, #16
	and	ip, ip, lr, lsr r6
	add	ip, ip, r8, lsr #24
	ldr	ip, [r1, ip, lsl #2]
	and	r5, r5, #7
	add	r5, r5, r6
	lsr	r6, ip, #16
	lsl	r8, ip, #16
	and	r6, r6, lr, lsr r5
	add	r6, r6, r8, lsr #24
	ldr	r8, [r1, r6, lsl #2]
	and	r9, ip, #7
	add	r9, r9, r5
	and	r7, r7, #15
	lsr	r5, r8, #16
	lsl	r6, r8, #16
	add	ip, r7, ip, lsr #3
	and	r5, r5, lr, lsr r9
	and	ip, ip, #15
	add	r5, r5, r6, lsr #24
	ldr	r6, [r1, r5, lsl #2]
	orr	r7, r7, ip, lsl #4
	add	ip, ip, r8, lsr #3
	and	ip, ip, #15
	and	r5, r8, #7
	add	r5, r5, r9
	orr	r7, r7, ip, lsl #8
	lsr	r8, r6, #16
	add	ip, ip, r6, lsr #3
	lsl	r9, r6, #16
	and	ip, ip, #15
	and	r8, r8, lr, lsr r5
	and	r6, r6, #7
	mov	r0, r10
	orr	r7, r7, ip, lsl #12
	add	r8, r8, r9, lsr #24
	add	r6, r6, r5
	b	.L45
.L86:
	subs	r6, r6, #32
	mvnne	r8, #0
	ldr	lr, [r0], #4
	subne	r9, r9, r6
	bicne	r8, lr, r8, lsl r6
	addne	r5, r5, r8, lsl r9
	ldr	r9, [r1, r5, lsl #2]
	lsr	r5, r9, #16
	lsl	r8, r9, #16
	and	r5, r5, lr, lsr r6
	add	r5, r5, r8, lsr #24
	ldr	r5, [r1, r5, lsl #2]
	add	ip, ip, r9, lsr #3
	and	ip, ip, #15
	orr	r7, r7, ip, lsl #20
	and	r9, r9, #7
	add	ip, ip, r5, lsr #3
	add	r9, r9, r6
	and	ip, ip, #15
	lsr	r6, r5, #16
	orr	r8, r7, ip, lsl #24
	and	r6, r6, lr, lsr r9
	lsl	r7, r5, #16
	add	r6, r6, r7, lsr #24
	ldr	r6, [r1, r6, lsl #2]
	and	r5, r5, #7
.L81:
	add	r9, r5, r9
	lsr	r5, r6, #16
	add	ip, ip, r6, lsr #3
	lsl	r7, r6, #16
	and	r5, r5, lr, lsr r9
	and	r6, r6, #7
	orr	r8, r8, ip, lsl #28
	add	r5, r5, r7, lsr #24
	and	ip, ip, #15
	add	r6, r6, r9
.L47:
	str	r8, [r2], #4
	cmp	r3, r2
	bhi	.L53
.L89:
	sub	r0, r0, #4
.L52:
	strb	r6, [r4]
	str	r0, [r4, #8]
	str	r5, [r4, #4]
	mov	r0, ip
	pop	{r4, r5, r6, r7, r8, r9, r10, lr}
	bx	lr
.L82:
	subs	r6, r6, #32
	mvnne	ip, #0
	ldr	lr, [r0], #4
	subne	r8, r8, r6
	bicne	ip, lr, ip, lsl r6
	addne	r5, r5, ip, lsl r8
	ldr	ip, [r1, r5, lsl #2]
	lsr	r5, ip, #16
	lsl	r8, ip, #16
	and	r5, r5, lr, lsr r6
	add	r5, r5, r8, lsr #24
	ldr	r5, [r1, r5, lsl #2]
	and	r8, ip, #7
	add	r6, r8, r6
	lsr	r8, r5, #16
	lsl	r9, r5, #16
	and	r8, r8, lr, lsr r6
	add	ip, r7, ip, lsr #3
	add	r8, r8, r9, lsr #24
	ldr	r8, [r1, r8, lsl #2]
	and	ip, ip, #15
	orr	r7, r7, ip, lsl #4
	add	ip, ip, r5, lsr #3
	and	r5, r5, #7
	add	r5, r5, r6
	lsr	r6, r8, #16
	lsl	r9, r8, #16
	and	r6, r6, lr, lsr r5
	and	ip, ip, #15
	add	r6, r6, r9, lsr #24
	ldr	r6, [r1, r6, lsl #2]
	orr	r7, r7, ip, lsl #8
	add	ip, ip, r8, lsr #3
	and	ip, ip, #15
	and	r8, r8, #7
	add	r8, r8, r5
	orr	r7, r7, ip, lsl #12
	lsr	r5, r6, #16
	add	ip, ip, r6, lsr #3
	lsl	r9, r6, #16
	and	ip, ip, #15
	and	r5, r5, lr, lsr r8
	and	r6, r6, #7
	orr	r7, r7, ip, lsl #16
	add	r5, r5, r9, lsr #24
	add	r6, r6, r8
	b	.L38
.L83:
	subs	r6, r6, #32
	mvnne	r9, #0
	ldr	lr, [r0], #4
	subne	r8, r8, r6
	bicne	r9, lr, r9, lsl r6
	addne	r5, r5, r9, lsl r8
	ldr	r5, [r1, r5, lsl #2]
	add	r9, ip, r5, lsr #3
	lsr	ip, r5, #16
	lsl	r8, r5, #16
	and	ip, ip, lr, lsr r6
	add	ip, ip, r8, lsr #24
	ldr	ip, [r1, ip, lsl #2]
	and	r5, r5, #7
	add	r6, r5, r6
	lsr	r5, ip, #16
	lsl	r8, ip, #16
	and	r5, r5, lr, lsr r6
	add	r5, r5, r8, lsr #24
	ldr	r5, [r1, r5, lsl #2]
	and	r9, r9, #15
	orr	r7, r7, r9, lsl #8
	add	r9, r9, ip, lsr #3
	and	ip, ip, #7
	add	ip, ip, r6
	lsr	r6, r5, #16
	lsl	r8, r5, #16
	and	r6, r6, lr, lsr ip
	and	r9, r9, #15
	add	r6, r6, r8, lsr #24
	ldr	r6, [r1, r6, lsl #2]
	orr	r7, r7, r9, lsl #12
	add	r9, r9, r5, lsr #3
	and	r9, r9, #15
	and	r5, r5, #7
	add	r10, r5, ip
	add	ip, r9, r6, lsr #3
	lsr	r5, r6, #16
	lsl	r8, r6, #16
	orr	r7, r7, r9, lsl #16
	and	ip, ip, #15
	and	r5, r5, lr, lsr r10
	and	r6, r6, #7
	orr	r7, r7, ip, lsl #20
	add	r5, r5, r8, lsr #24
	add	r6, r6, r10
	b	.L41
.L88:
	subs	r6, r6, #32
	mvnne	r9, #0
	ldr	lr, [r0], #4
	subne	r7, r7, r6
	bicne	r9, lr, r9, lsl r6
	addne	r5, r5, r9, lsl r7
	ldr	r7, [r1, r5, lsl #2]
	add	ip, ip, r7, lsr #3
	orr	r8, r8, ip, lsl #28
	str	r8, [r2], #4
	lsr	r5, r7, #16
	and	r5, r5, lr, lsr r6
	lsl	r9, r7, #16
	cmp	r3, r2
	and	r7, r7, #7
	and	ip, ip, #15
	add	r5, r5, r9, lsr #24
	add	r6, r7, r6
	bhi	.L53
	b	.L89
.L84:
	subs	r6, r6, #32
	mvnne	r8, #0
	ldr	lr, [r0], #4
	subne	r9, r9, r6
	bicne	r8, lr, r8, lsl r6
	addne	r5, r5, r8, lsl r9
	ldr	r5, [r1, r5, lsl #2]
	add	ip, ip, r5, lsr #3
	and	r10, ip, #15
	lsr	ip, r5, #16
	lsl	r8, r5, #16
	and	ip, ip, lr, lsr r6
	add	ip, ip, r8, lsr #24
	ldr	ip, [r1, ip, lsl #2]
	and	r5, r5, #7
	add	r6, r5, r6
	lsr	r5, ip, #16
	lsl	r8, ip, #16
	and	r5, r5, lr, lsr r6
	add	r5, r5, r8, lsr #24
	ldr	r5, [r1, r5, lsl #2]
	orr	r7, r7, r10, lsl #12
	add	r10, r10, ip, lsr #3
	and	r10, r10, #15
	orr	r7, r7, r10, lsl #16
	and	ip, ip, #7
	add	r10, r10, r5, lsr #3
	add	ip, ip, r6
	and	r10, r10, #15
	lsr	r6, r5, #16
	orr	r8, r7, r10, lsl #20
	and	r6, r6, lr, lsr ip
	lsl	r7, r5, #16
	add	r6, r6, r7, lsr #24
	ldr	r6, [r1, r6, lsl #2]
	and	r5, r5, #7
	add	r9, r5, ip
	add	ip, r10, r6, lsr #3
	lsr	r5, r6, #16
	lsl	r7, r6, #16
	and	ip, ip, #15
	and	r5, r5, lr, lsr r9
	and	r6, r6, #7
	orr	r8, r8, ip, lsl #24
	add	r5, r5, r7, lsr #24
	add	r6, r6, r9
	b	.L44
.L87:
	subs	r6, r6, #32
	mvnne	r8, #0
	ldr	lr, [r0], #4
	subne	r9, r9, r6
	bicne	r8, lr, r8, lsl r6
	addne	r5, r5, r8, lsl r9
	ldr	r5, [r1, r5, lsl #2]
	lsr	r8, r5, #16
	lsl	r9, r5, #16
	and	r8, r8, lr, lsr r6
	add	r8, r8, r9, lsr #24
	ldr	r10, [r1, r8, lsl #2]
	add	ip, ip, r5, lsr #3
	and	ip, ip, #15
	orr	r7, r7, ip, lsl #24
	add	ip, ip, r10, lsr #3
	and	r5, r5, #7
	orr	r8, r7, ip, lsl #28
	add	r9, r5, r6
	str	r8, [r2], #4
	lsr	r5, r10, #16
	lsl	r6, r10, #16
	and	r5, r5, lr, lsr r9
	add	r5, r5, r6, lsr #24
	cmp	r3, r2
	and	r6, r10, #7
	and	ip, ip, #15
	add	r6, r6, r9
	bhi	.L53
	b	.L89
.L85:
	subs	r6, r6, #32
	mvnne	r5, #0
	ldr	lr, [r0], #4
	subne	r9, r9, r6
	bicne	r5, lr, r5, lsl r6
	addne	r8, r8, r5, lsl r9
	ldr	r5, [r1, r8, lsl #2]
	lsr	r8, r5, #16
	lsl	r9, r5, #16
	and	r8, r8, lr, lsr r6
	add	r8, r8, r9, lsr #24
	ldr	r9, [r1, r8, lsl #2]
	add	ip, ip, r5, lsr #3
	and	r5, r5, #7
	add	r5, r5, r6
	lsr	r6, r9, #16
	lsl	r8, r9, #16
	and	r6, r6, lr, lsr r5
	add	r6, r6, r8, lsr #24
	ldr	r10, [r1, r6, lsl #2]
	and	ip, ip, #15
	orr	r7, r7, ip, lsl #16
	and	r6, r9, #7
	add	ip, ip, r9, lsr #3
	and	ip, ip, #15
	add	r9, r6, r5
	lsr	r5, r10, #16
	orr	r7, r7, ip, lsl #20
	lsl	r6, r10, #16
	add	ip, ip, r10, lsr #3
	and	r5, r5, lr, lsr r9
	add	r5, r5, r6, lsr #24
	and	ip, ip, #15
	ldr	r6, [r1, r5, lsl #2]
	orr	r8, r7, ip, lsl #24
	and	r5, r10, #7
	b	.L81
.L91:
	.align	2
.L90:
	.word	.LANCHOR0
	.size	DecodeSymDeltatANSLoop, .-DecodeSymDeltatANSLoop
	.align	2
	.syntax unified
	.arm
	.type	SwitchToArmCallSymDeltaANS, %function
SwitchToArmCallSymDeltaANS:
	@ Function supports interworking.
	@ args = 4, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	ip, [sp]
	bx	ip
	.size	SwitchToArmCallSymDeltaANS, .-SwitchToArmCallSymDeltaANS
	.align	2
	.syntax unified
	.arm
	.type	DecodeInstructions, %function
DecodeInstructions:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, r8, r9, lr}
	mov	r4, r2
	mov	r2, r3
	add	r0, r1, r0
.L120:
	ldrb	lr, [r1]	@ zero_extendqisi2
	tst	lr, #128
	ldrb	ip, [r1, #1]	@ zero_extendqisi2
	bne	.L144
	tst	ip, #128
	ldrbne	r3, [r1, #2]	@ zero_extendqisi2
	and	ip, ip, #127
	addne	r1, r1, #3
	orrne	ip, ip, r3, lsl #7
	addeq	r1, r1, #2
	cmp	lr, #0
	beq	.L145
.L98:
	mov	r3, r2
	ldrh	r6, [r4], #2
	strh	r6, [r3], #2	@ movhi
	cmp	ip, #1
	add	r5, r3, lr, lsl #1
	beq	.L146
	sub	lr, r5, r2
	sub	lr, lr, #4
	cmp	lr, #16
	sub	r6, r3, ip, lsl #1
	bls	.L110
	rsb	ip, ip, #1
	add	ip, r2, ip, lsl #1
	orr	r7, ip, r3
	tst	r7, #3
	beq	.L147
.L110:
	ldrh	r2, [r6], #2
	strh	r2, [r3], #2	@ movhi
	cmp	r5, r3
	bne	.L110
.L119:
	mov	r2, r5
.L100:
	cmp	r1, r0
	bcc	.L120
	pop	{r4, r5, r6, r7, r8, r9, lr}
	bx	lr
.L144:
	ldrb	r3, [r1, #2]	@ zero_extendqisi2
	and	lr, lr, #127
	tst	r3, #128
	orr	lr, lr, ip, lsl #7
	and	ip, r3, #127
	ldrbne	r3, [r1, #3]	@ zero_extendqisi2
	addeq	r1, r1, #3
	addne	r1, r1, #4
	orrne	ip, ip, r3, lsl #7
	cmp	lr, #0
	bne	.L98
.L145:
	cmp	ip, #0
	beq	.L148
	sub	r3, ip, #1
	cmp	r3, #8
	bls	.L112
	orr	lr, r4, r2
	add	r3, r4, #2
	subs	r3, r2, r3
	and	lr, lr, #3
	movne	r3, #1
	cmp	lr, #0
	movne	r3, #0
	cmp	r3, #0
	bne	.L149
.L112:
	sub	r3, r4, #2
	lsl	r6, ip, #1
	sub	lr, r2, #2
	add	ip, r3, ip, lsl #1
.L117:
	ldrh	r5, [r3, #2]!
	cmp	ip, r3
	strh	r5, [lr, #2]!	@ movhi
	bne	.L117
	add	r2, r2, r6
	add	r4, r4, r6
	b	.L100
.L146:
	sub	ip, lr, #1
	lsr	r8, r3, #1
	cmp	ip, #5
	and	r8, r8, #1
	bls	.L121
	cmp	r8, #0
	sub	r7, lr, r8
	add	ip, r8, #1
	add	ip, r2, ip, lsl #1
	strhne	r6, [r2, #2]	@ movhi
	lsr	r2, r7, #1
	add	r2, ip, r2, lsl #2
	orr	r9, r6, r6, lsl #16
.L104:
	str	r9, [ip], #4
	cmp	ip, r2
	bne	.L104
	tst	r7, #1
	beq	.L119
	bic	r2, r7, #1
	add	r2, r2, r8
.L102:
	add	ip, r2, #1
	cmp	ip, lr
	lsl	ip, r2, #1
	strh	r6, [r3, ip]	@ movhi
	bcs	.L119
	add	r3, r3, ip
	add	ip, r2, #2
	cmp	lr, ip
	strh	r6, [r3, #2]	@ movhi
	bls	.L119
	add	ip, r2, #3
	cmp	lr, ip
	strh	r6, [r3, #4]	@ movhi
	bls	.L119
	add	ip, r2, #4
	cmp	lr, ip
	strh	r6, [r3, #6]	@ movhi
	bls	.L119
	add	r2, r2, #5
	cmp	lr, r2
	strh	r6, [r3, #8]	@ movhi
	strhhi	r6, [r3, #10]	@ movhi
	b	.L119
.L147:
	lsr	lr, lr, #1
	add	r7, lr, #1
	mov	lr, r3
	lsr	r8, r7, #1
	add	r8, r2, r8, lsl #2
	sub	ip, ip, #4
	add	r8, r8, #2
.L107:
	ldr	r2, [ip, #4]!
	str	r2, [lr], #4
	cmp	lr, r8
	bne	.L107
	bic	r2, r7, #1
	tst	r7, #1
	lsl	r2, r2, #1
	ldrhne	ip, [r6, r2]
	strhne	ip, [r3, r2]	@ movhi
	b	.L119
.L149:
	mov	r3, r2
	lsr	r6, ip, #1
	add	r6, r2, r6, lsl #2
	sub	lr, r4, #4
.L113:
	ldr	r5, [lr, #4]!
	str	r5, [r3], #4
	cmp	r3, r6
	bne	.L113
	tst	ip, #1
	bic	r3, ip, #1
	lslne	r3, r3, #1
	ldrhne	lr, [r4, r3]
	lsleq	r6, ip, #1
	lslne	r6, ip, #1
	strhne	lr, [r2, r3]	@ movhi
	add	r4, r4, r6
	add	r2, r2, r6
	b	.L100
.L148:
	mov	r6, ip
	add	r2, r2, r6
	add	r4, r4, r6
	b	.L100
.L121:
	mov	r2, #0
	b	.L102
	.size	DecodeInstructions, .-DecodeInstructions
	.align	2
	.syntax unified
	.arm
	.type	SwitchToArmCallDecodeInstructions, %function
SwitchToArmCallDecodeInstructions:
	@ Function supports interworking.
	@ args = 4, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldr	ip, [sp]
	bx	ip	@ indirect register sibling call
	.size	SwitchToArmCallDecodeInstructions, .-SwitchToArmCallDecodeInstructions
	.section	.iwram.code,"ax",%progbits
	.align	2
	.syntax unified
	.arm
	.type	CopyTable, %function
CopyTable:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	add	r2, r0, r2, lsl #2
.L152:
	ldr	ip, [r1], #4
	orr	ip, ip, r3
	str	ip, [r0], #4
	cmp	r2, r0
	bne	.L152
	bx	lr
	.size	CopyTable, .-CopyTable
	.align	2
	.syntax unified
	.arm
	.type	TilemapLoop, %function
TilemapLoop:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, r8, r9, r10, lr}
	mov	r8, #0
	lsl	r3, r0, #1
	rsb	r9, r2, #8
	add	r4, r3, #8
	add	r0, r1, r0, lsl #1
	add	r3, r2, r3
	add	r9, r1, r9
	ldr	r7, .L159
	add	r4, r0, r4
	add	lr, r0, #8
	add	r9, r9, r3
	add	r5, r1, #8
	add	r6, r2, #8
.L156:
	ldr	ip, [r5, #-8]
	add	r10, r8, ip
	and	r10, r10, r7
	ldr	r2, [r5, #-4]
	ldrh	r8, [r4, #-8]
	ldrh	r0, [lr, #-8]
	add	ip, r10, ip, lsr #16
	and	ip, ip, r7
	add	r1, ip, r2
	orr	r0, r0, r8
	ldrh	r3, [lr, #-4]
	and	r1, r1, r7
	orr	r0, r0, r10
	ldrh	r10, [r4, #-4]
	add	r2, r1, r2, lsr #16
	and	r8, r2, r7
	orr	r3, r3, r10
	ldrh	r2, [lr, #-2]
	ldrh	r10, [r4, #-2]
	orr	r2, r2, r10
	orr	r3, r3, r1
	orr	r2, r2, r8
	ldrh	r1, [lr, #-6]
	orr	r3, r3, r2, lsl #16
	ldrh	r2, [r4, #-6]
	orr	r1, r1, r2
	add	r5, r5, #8
	orr	r1, r1, ip
	orr	r0, r0, r1, lsl #16
	cmp	r5, r9
	stmdb	r6, {r0, r3}
	add	lr, lr, #8
	add	r4, r4, #8
	add	r6, r6, #8
	bne	.L156
	pop	{r4, r5, r6, r7, r8, r9, r10, lr}
	bx	lr
.L160:
	.align	2
.L159:
	.word	1023
	.size	TilemapLoop, .-TilemapLoop
	.text
	.align	1
	.p2align 2,,3
	.arch armv4t
	.fpu softvfp
	.syntax unified
	.code	16
	.thumb_func
	.type	DecodeInstructionsIwram, %function
DecodeInstructionsIwram:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 1400
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, lr}
	mov	lr, r8
	push	{lr}
	ldr	r4, .L163
	movs	r6, r1
	add	sp, sp, r4
	ldr	r1, .L163+4
	ldr	r4, .L163+8
	movs	r7, r2
	subs	r2, r4, r1
	mov	r4, sp
	movs	r5, r0
	mov	r8, r3
	movs	r0, r4
	bl	FastUnsafeCopy32
	mov	r3, r8
	movs	r2, r7
	movs	r1, r6
	movs	r0, r5
	bl	.L165
	movs	r3, #175
	lsls	r3, r3, #3
	add	sp, sp, r3
	@ sp needed
	pop	{r7}
	mov	r8, r7
	pop	{r4, r5, r6, r7}
	pop	{r0}
	bx	r0
.L164:
	.align	2
.L163:
	.word	-1400
	.word	DecodeInstructions
	.word	SwitchToArmCallDecodeInstructions
	.size	DecodeInstructionsIwram, .-DecodeInstructionsIwram
	.align	1
	.p2align 2,,3
	.syntax unified
	.code	16
	.thumb_func
	.type	BuildDecompressionTable.constprop.0, %function
BuildDecompressionTable.constprop.0:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 32
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, lr}
	mov	r7, r8
	mov	lr, r9
	ldr	r3, [r0]
	movs	r6, #48
	push	{r7, lr}
	mov	r8, r3
	movs	r7, #12
	ldr	r4, [r0, #4]
	ldr	r0, [r0, #8]
	lsrs	r1, r0, #26
	ands	r6, r1
	lsrs	r1, r4, #28
	ands	r7, r1
	mov	r1, r8
	movs	r2, #63
	sub	sp, sp, #32
	mov	r5, sp
	adds	r6, r6, r7
	lsrs	r7, r1, #6
	ands	r7, r2
	strh	r7, [r5, #2]
	lsrs	r7, r1, #12
	ands	r7, r2
	strh	r7, [r5, #4]
	lsrs	r7, r1, #18
	ands	r7, r2
	strh	r7, [r5, #6]
	lsrs	r7, r1, #24
	ands	r7, r2
	strh	r7, [r5, #8]
	lsrs	r7, r4, #6
	ands	r7, r2
	strh	r7, [r5, #12]
	lsrs	r7, r4, #12
	ands	r7, r2
	strh	r7, [r5, #14]
	lsrs	r7, r4, #18
	ands	r7, r2
	strh	r7, [r5, #16]
	lsrs	r7, r4, #24
	ands	r4, r2
	strh	r4, [r5, #10]
	lsrs	r4, r0, #6
	ands	r4, r2
	strh	r4, [r5, #22]
	lsrs	r4, r0, #12
	ands	r4, r2
	strh	r4, [r5, #24]
	lsrs	r4, r0, #18
	ands	r4, r2
	strh	r4, [r5, #26]
	lsrs	r4, r0, #24
	ands	r4, r2
	ands	r7, r2
	ands	r0, r2
	ands	r2, r1
	strh	r2, [r5]
	ldr	r2, .L181
	lsrs	r1, r1, #30
	mov	r8, r2
	ldr	r2, .L181+4
	adds	r1, r6, r1
	strh	r4, [r5, #28]
	movs	r3, #0
	mov	r9, r2
	strh	r7, [r5, #18]
	strh	r0, [r5, #20]
	strh	r1, [r5, #30]
	ldr	r4, .L181+8
	ldr	r6, .L181+12
	b	.L172
.L179:
	ldr	r1, .L181+16
	cmp	r2, #0
	beq	.L169
	orrs	r1, r3
	stmia	r4!, {r1}
.L169:
	adds	r3, r3, #8
	adds	r5, r5, #2
	cmp	r3, #128
	beq	.L178
.L172:
	ldrh	r2, [r5]
	cmp	r2, #2
	beq	.L167
	bls	.L179
	cmp	r2, #3
	bne	.L180
	movs	r0, r6
	ldr	r1, .L181+20
	ldr	r2, .L181+24
	orrs	r0, r3
	orrs	r1, r3
	orrs	r2, r3
	adds	r3, r3, #8
	str	r0, [r4]
	str	r1, [r4, #4]
	str	r2, [r4, #8]
	adds	r5, r5, #2
	adds	r4, r4, #12
	cmp	r3, #128
	bne	.L172
.L178:
	add	sp, sp, #32
	@ sp needed
	pop	{r6, r7}
	mov	r9, r7
	mov	r8, r6
	pop	{r4, r5, r6, r7}
	pop	{r0}
	bx	r0
.L167:
	mov	r1, r8
	movs	r2, r6
	orrs	r1, r3
	orrs	r2, r3
	str	r1, [r4]
	str	r2, [r4, #4]
	adds	r4, r4, #8
	b	.L169
.L180:
	mov	r1, r9
	lsls	r7, r2, #2
	movs	r0, r4
	adds	r1, r7, r1
	bl	CopyTable
	adds	r4, r4, r7
	b	.L169
.L182:
	.align	2
.L181:
	.word	2031621
	.word	sYkTemplate
	.word	sWorkingYkTable
	.word	2039813
	.word	4128774
	.word	983044
	.word	987140
	.size	BuildDecompressionTable.constprop.0, .-BuildDecompressionTable.constprop.0
	.align	1
	.p2align 2,,3
	.syntax unified
	.code	16
	.thumb_func
	.type	DecodeSymtANS, %function
DecodeSymtANS:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 1200
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, lr}
	ldr	r4, .L184
	add	sp, sp, r4
	mov	r7, sp
	movs	r4, r3
	movs	r5, r2
	movs	r6, r0
	movs	r0, r1
	bl	BuildDecompressionTable.constprop.0
	ldr	r3, .L184+4
	ldr	r1, .L184+8
	movs	r0, r7
	subs	r2, r3, r1
	bl	FastUnsafeCopy32
	lsls	r3, r4, #1
	movs	r2, r5
	movs	r0, r6
	ldr	r1, .L184+12
	adds	r3, r5, r3
	bl	.L186
	movs	r3, #150
	lsls	r3, r3, #3
	add	sp, sp, r3
	@ sp needed
	pop	{r4, r5, r6, r7}
	pop	{r0}
	bx	r0
.L185:
	.align	2
.L184:
	.word	-1200
	.word	SwitchToArmCallLOtANS
	.word	DecodeLOtANSLoop
	.word	sWorkingYkTable
	.size	DecodeSymtANS, .-DecodeSymtANS
	.align	1
	.p2align 2,,3
	.syntax unified
	.code	16
	.thumb_func
	.type	DecodeSymDeltatANS, %function
DecodeSymDeltatANS:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 1816
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, lr}
	mov	lr, fp
	mov	r6, r9
	mov	r5, r8
	mov	r7, r10
	push	{r5, r6, r7, lr}
	ldr	r4, .L211
	movs	r6, #1
	add	sp, sp, r4
	movs	r4, r3
	movs	r7, r2
	mov	r8, r0
	movs	r0, r1
	bl	BuildDecompressionTable.constprop.0
	ldr	r1, .L211+4
	ldr	r2, .L211+8
	add	r3, sp, #16
	movs	r0, r3
	subs	r2, r2, r1
	ands	r6, r4
	mov	r9, r3
	subs	r4, r4, r6
	bl	FastUnsafeCopy32
	ldr	r5, .L211+12
	lsls	r4, r4, #1
	adds	r3, r7, r4
	movs	r2, r7
	movs	r1, r5
	mov	r0, r8
	str	r3, [sp]
	bl	.L213
	movs	r7, r0
	cmp	r6, #0
	beq	.L187
	ldr	r1, .L211+16
	ldr	r2, [r1, #4]
	lsls	r2, r2, #2
	ldr	r6, [r5, r2]
	ldr	r3, [r1, #8]
	lsrs	r4, r6, #3
	mov	r8, r3
	ldr	r3, [r3]
	mov	r10, r4
	mov	ip, r3
	movs	r4, #15
	add	r7, r7, r10
	mov	r9, r4
	ands	r4, r7
	mov	r7, ip
	ldrb	r3, [r1]
	lsrs	r7, r7, r3
	movs	r0, #7
	mov	r10, r4
	lsrs	r4, r6, #16
	ands	r4, r7
	movs	r7, #255
	mov	fp, r4
	ands	r0, r6
	lsrs	r6, r6, #8
	ands	r6, r7
	adds	r3, r3, r0
	add	r6, r6, fp
	cmp	r3, #31
	bhi	.L208
	movs	r4, #7
	lsls	r6, r6, #2
	ldr	r0, [r5, r6]
	ands	r4, r0
	movs	r2, r4
	str	r4, [sp, #12]
	mov	r4, r9
	lsrs	r6, r0, #3
	add	r6, r6, r10
	ands	r6, r4
	lsls	r4, r6, #4
	mov	fp, r4
	str	r6, [sp, #4]
	mov	r4, r10
	mov	r6, fp
	orrs	r4, r6
	str	r4, [sp, #8]
	mov	r4, ip
	lsrs	r4, r4, r3
	mov	r10, r4
	lsrs	r4, r0, #16
	mov	fp, r4
	mov	r4, r10
	mov	r6, fp
	ands	r4, r6
	mov	r10, r4
	lsrs	r0, r0, #8
	ands	r0, r7
	add	r0, r0, r10
	mov	r10, r2
	add	r3, r3, r10
	movs	r4, r2
	cmp	r3, #31
	bls	.LCB1676
	b	.L209	@long jump
.LCB1676:
	movs	r4, #7
	lsls	r0, r0, #2
	ldr	r0, [r5, r0]
	ands	r4, r0
	mov	fp, r4
	lsrs	r4, r0, #3
	mov	r10, r4
	mov	r4, r9
	ldr	r6, [sp, #4]
	add	r6, r6, r10
	ands	r4, r6
	movs	r6, r4
	lsls	r4, r4, #8
	mov	r9, r4
	mov	r2, r9
	ldr	r4, [sp, #8]
	orrs	r4, r2
	mov	r9, r4
	mov	r4, ip
	lsrs	r4, r4, r3
	lsrs	r2, r0, #16
	ands	r4, r2
	mov	r10, r4
	lsrs	r0, r0, #8
	ands	r0, r7
	add	r3, r3, fp
	add	r0, r0, r10
	cmp	r3, #31
	bls	.LCB1707
	b	.L210	@long jump
.LCB1707:
	lsls	r0, r0, #2
	ldr	r2, [r5, r0]
	mov	r8, r2
	lsrs	r0, r2, #3
	mov	r2, r9
	mov	r5, ip
	adds	r0, r0, r6
	lsls	r0, r0, #28
	lsrs	r0, r0, #16
	orrs	r0, r2
	mov	r2, r8
	lsrs	r5, r5, r3
	movs	r4, #7
	lsrs	r6, r2, #16
	ands	r5, r6
	lsrs	r6, r2, #8
	ands	r2, r4
	adds	r2, r2, r3
	ands	r7, r6
	ldr	r3, [sp]
	adds	r7, r5, r7
	str	r7, [r1, #4]
	strh	r0, [r3]
	strb	r2, [r1]
.L187:
	movs	r3, #227
	lsls	r3, r3, #3
	add	sp, sp, r3
	@ sp needed
	pop	{r4, r5, r6, r7}
	mov	fp, r7
	mov	r10, r6
	mov	r9, r5
	mov	r8, r4
	pop	{r4, r5, r6, r7}
	pop	{r0}
	bx	r0
.L208:
	mov	r2, r8
	ldr	r7, [r2, #4]
	movs	r2, #32
	rsbs	r2, r2, #0
	mov	ip, r2
	add	ip, ip, r3
	cmp	r3, #32
	beq	.L190
	movs	r3, #1
	mov	r2, ip
	rsbs	r3, r3, #0
	lsls	r3, r3, r2
	movs	r2, r7
	bics	r2, r3
	movs	r3, r2
	mov	r2, ip
	subs	r0, r0, r2
	lsls	r3, r3, r0
	adds	r6, r6, r3
.L190:
	movs	r3, #15
	mov	r2, r10
	lsls	r6, r6, #2
	ldr	r6, [r5, r6]
	lsrs	r0, r6, #3
	add	r0, r0, r10
	ands	r0, r3
	mov	r9, r3
	lsls	r3, r0, #4
	orrs	r2, r3
	movs	r3, #7
	mov	fp, r3
	ands	r3, r6
	add	r3, r3, ip
	mov	r8, r3
	mov	r4, ip
	movs	r3, r7
	lsrs	r3, r3, r4
	lsrs	r4, r6, #16
	ands	r4, r3
	lsrs	r3, r6, #8
	movs	r6, #255
	mov	ip, r4
	ands	r3, r6
	add	r3, r3, ip
	lsls	r3, r3, #2
	ldr	r3, [r5, r3]
	lsrs	r4, r3, #3
	mov	ip, r4
	mov	r4, r9
	add	r0, r0, ip
	ands	r0, r4
	lsls	r4, r0, #8
	mov	r9, r4
	movs	r4, r2
	mov	r2, r9
	orrs	r4, r2
	mov	r9, r4
	mov	r4, fp
	ands	r4, r3
	mov	r2, r8
	mov	ip, r4
	movs	r4, r7
	lsrs	r4, r4, r2
	lsrs	r2, r3, #16
	ands	r4, r2
	add	ip, ip, r8
	mov	r8, r4
	mov	r2, r9
	lsrs	r3, r3, #8
	ands	r3, r6
	add	r3, r3, r8
	lsls	r3, r3, #2
	ldr	r3, [r5, r3]
	lsrs	r5, r3, #3
	adds	r0, r5, r0
	lsls	r0, r0, #28
	lsrs	r0, r0, #16
	orrs	r0, r2
	mov	r2, ip
	lsrs	r7, r7, r2
	mov	r2, fp
	lsrs	r5, r3, #16
	ands	r7, r5
	lsrs	r5, r3, #8
	ands	r6, r5
	ands	r2, r3
	adds	r7, r7, r6
	add	r2, r2, ip
.L191:
	ldr	r3, [sp]
	str	r7, [r1, #4]
	strh	r0, [r3]
	strb	r2, [r1]
	b	.L187
.L210:
	mov	r2, r8
	ldr	r7, [r2, #4]
	movs	r2, #32
	rsbs	r2, r2, #0
	mov	ip, r2
	add	ip, ip, r3
	cmp	r3, #32
	beq	.L195
	movs	r3, #1
	mov	r2, ip
	rsbs	r3, r3, #0
	lsls	r3, r3, r2
	movs	r2, r7
	mov	r4, ip
	bics	r2, r3
	mov	r3, fp
	subs	r3, r3, r4
	lsls	r2, r2, r3
	adds	r0, r0, r2
.L195:
	mov	r2, r9
	lsls	r0, r0, #2
	ldr	r3, [r5, r0]
	lsrs	r0, r3, #3
	adds	r0, r0, r6
	lsls	r0, r0, #28
	lsrs	r0, r0, #16
	orrs	r0, r2
	mov	r2, ip
	lsrs	r7, r7, r2
	lsrs	r2, r3, #16
	ands	r7, r2
	lsls	r2, r3, #16
	lsrs	r2, r2, #24
	adds	r7, r7, r2
	movs	r2, #7
	ands	r2, r3
	add	r2, r2, ip
	b	.L191
.L209:
	mov	r2, r8
	ldr	r7, [r2, #4]
	movs	r2, #32
	rsbs	r2, r2, #0
	mov	ip, r2
	add	ip, ip, r3
	cmp	r3, #32
	beq	.L193
	movs	r3, #1
	mov	r2, ip
	rsbs	r3, r3, #0
	lsls	r3, r3, r2
	movs	r2, r7
	bics	r2, r3
	movs	r3, r4
	mov	r4, ip
	subs	r3, r3, r4
	lsls	r2, r2, r3
	adds	r0, r0, r2
.L193:
	lsls	r0, r0, #2
	ldr	r3, [r5, r0]
	ldr	r0, [sp, #4]
	mov	r8, r0
	movs	r0, #15
	lsrs	r2, r3, #3
	add	r2, r2, r8
	ands	r0, r2
	ldr	r4, [sp, #8]
	lsls	r2, r0, #8
	orrs	r4, r2
	movs	r2, #7
	mov	r8, r4
	mov	r10, r2
	movs	r6, r2
	movs	r4, r7
	mov	r2, ip
	lsrs	r4, r4, r2
	lsrs	r2, r3, #16
	ands	r4, r2
	movs	r2, #255
	mov	r9, r4
	ands	r6, r3
	lsrs	r3, r3, #8
	add	r6, r6, ip
	ands	r3, r2
	mov	ip, r2
	mov	r2, r8
	add	r3, r3, r9
	lsls	r3, r3, #2
	ldr	r3, [r5, r3]
	lsrs	r5, r3, #3
	adds	r0, r5, r0
	lsls	r0, r0, #28
	lsrs	r7, r7, r6
	lsrs	r0, r0, #16
	orrs	r0, r2
	mov	r2, ip
	lsrs	r5, r3, #16
	ands	r7, r5
	lsrs	r5, r3, #8
	ands	r5, r2
	mov	r2, r10
	ands	r2, r3
	adds	r7, r7, r5
	adds	r2, r2, r6
	b	.L191
.L212:
	.align	2
.L211:
	.word	-1816
	.word	DecodeSymDeltatANSLoop
	.word	SwitchToArmCallSymDeltaANS
	.word	sWorkingYkTable
	.word	.LANCHOR0
	.size	DecodeSymDeltatANS, .-DecodeSymDeltatANS
	.align	1
	.p2align 2,,3
	.syntax unified
	.code	16
	.thumb_func
	.type	DecodeLOtANS, %function
DecodeLOtANS:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 1608
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, lr}
	mov	lr, fp
	mov	r6, r9
	mov	r5, r8
	mov	r7, r10
	push	{r5, r6, r7, lr}
	ldr	r4, .L228
	movs	r5, #1
	add	sp, sp, r4
	movs	r4, r3
	movs	r6, r2
	mov	r8, r0
	movs	r0, r1
	bl	BuildDecompressionTable.constprop.0
	ldr	r3, .L228+4
	ldr	r1, .L228+8
	subs	r2, r3, r1
	add	r3, sp, #8
	movs	r0, r3
	ands	r5, r4
	mov	r9, r3
	subs	r4, r4, r5
	bl	FastUnsafeCopy32
	ldr	r7, .L228+12
	adds	r4, r6, r4
	movs	r3, r4
	movs	r2, r6
	movs	r1, r7
	mov	r0, r8
	bl	.L213
	cmp	r5, #0
	beq	.L214
	ldr	r0, .L228+16
	ldr	r3, [r0, #8]
	mov	ip, r3
	ldr	r3, [r3]
	mov	r9, r3
	movs	r3, #0
	str	r3, [sp, #4]
	adds	r3, r3, #255
	movs	r5, #0
	mov	fp, r3
	movs	r3, r0
	ldr	r2, [r0, #4]
	ldrb	r1, [r0]
	str	r7, [sp]
	mov	r0, r9
	movs	r6, #0
	mov	r8, r4
	movs	r7, r5
	mov	r9, r3
.L217:
	movs	r5, #31
	ldr	r3, [sp]
	lsls	r2, r2, #2
	ldr	r3, [r3, r2]
	lsrs	r2, r3, #3
	ands	r2, r5
	lsls	r2, r2, r7
	orrs	r6, r2
	movs	r2, r0
	lsrs	r2, r2, r1
	lsrs	r4, r3, #16
	ands	r2, r4
	mov	r4, fp
	subs	r5, r5, #24
	ands	r5, r3
	adds	r1, r1, r5
	lsrs	r3, r3, #8
	ands	r3, r4
	lsls	r1, r1, #24
	adds	r2, r2, r3
	lsrs	r1, r1, #24
	cmp	r1, #31
	bls	.L216
	subs	r1, r1, #32
	lsls	r1, r1, #24
	mov	r3, ip
	mov	r0, ip
	mov	ip, r1
	mov	r4, ip
	adds	r3, r3, #4
	mov	r10, r3
	ldr	r0, [r0, #4]
	lsrs	r1, r1, #24
	cmp	r4, #0
	beq	.L219
	movs	r4, #1
	rsbs	r4, r4, #0
	lsls	r4, r4, r1
	mov	ip, r4
	movs	r4, r0
	mov	r3, ip
	subs	r5, r5, r1
	bics	r4, r3
	movs	r3, #1
	lsls	r4, r4, r5
	mov	ip, r10
	str	r3, [sp, #4]
	adds	r2, r2, r4
.L216:
	cmp	r7, #4
	beq	.L227
	movs	r7, #4
	b	.L217
.L227:
	mov	r0, r9
	ldr	r3, [sp, #4]
	mov	r4, r8
	strb	r1, [r0]
	str	r2, [r0, #4]
	cmp	r3, #0
	beq	.L218
	mov	r3, ip
	str	r3, [r0, #8]
.L218:
	strb	r6, [r4]
.L214:
	movs	r3, #201
	lsls	r3, r3, #3
	add	sp, sp, r3
	@ sp needed
	pop	{r4, r5, r6, r7}
	mov	fp, r7
	mov	r10, r6
	mov	r9, r5
	mov	r8, r4
	pop	{r4, r5, r6, r7}
	pop	{r0}
	bx	r0
.L219:
	mov	ip, r3
	movs	r3, #1
	str	r3, [sp, #4]
	b	.L216
.L229:
	.align	2
.L228:
	.word	-1608
	.word	SwitchToArmCallLOtANS
	.word	DecodeLOtANSLoop
	.word	sWorkingYkTable
	.word	.LANCHOR0
	.size	DecodeLOtANS, .-DecodeLOtANS
	.section	.rodata.str1.4,"aMS",%progbits,1
	.align	2
.LC16:
	.ascii	"src/decompress.c:991\000"
	.text
	.align	1
	.p2align 2,,3
	.syntax unified
	.code	16
	.thumb_func
	.type	SmolDecompressData.part.0, %function
SmolDecompressData.part.0:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 20
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, lr}
	mov	r7, r10
	mov	r5, r8
	mov	r6, r9
	mov	lr, fp
	ldr	r3, .L257
	mov	r10, r3
	push	{r5, r6, r7, lr}
	sub	sp, sp, #20
	str	r2, [sp]
	mov	r2, r10
	ldrb	r3, [r0, #4]
	lsls	r3, r3, #26
	lsrs	r3, r3, #26
	str	r3, [r2, #4]
	ldrh	r3, [r0, #6]
	lsrs	r3, r3, #3
	mov	r8, r3
	ldrb	r3, [r0]
	ldrh	r7, [r0, #2]
	lsls	r3, r3, #28
	movs	r6, r0
	movs	r5, r1
	lsrs	r7, r7, #2
	lsrs	r3, r3, #28
	cmp	r3, #4
	bne	.LCB2192
	b	.L231	@long jump
.LCB2192:
	bhi	.L232
	cmp	r3, #1
	bne	.LCB2196
	b	.L233	@long jump
.LCB2196:
	movs	r1, r3
	movs	r2, #15
	adds	r1, r1, #14
	ands	r2, r1
	cmp	r2, #1
	bls	.LCB2204
	b	.L248	@long jump
.LCB2204:
	movs	r2, r5
	mov	r1, r10
	adds	r2, r2, #12
	subs	r3, r3, #3
	str	r2, [r1, #8]
	rsbs	r2, r3, #0
	adcs	r2, r2, r3
	movs	r3, #0
	mov	fp, r3
	str	r2, [sp, #12]
	str	r5, [sp, #8]
	str	r3, [sp, #16]
.L235:
	movs	r3, #1
	str	r3, [sp, #4]
.L234:
	movs	r4, #1
	mov	r0, r8
	ands	r0, r4
	ands	r4, r7
	adds	r4, r7, r4
	lsls	r4, r4, #1
	add	r0, r0, r8
	adds	r0, r4, r0
	ldr	r1, .L257+4
	bl	Alloc_
	movs	r3, #0
	mov	r2, r10
	mov	r9, r0
	strb	r3, [r2]
	mov	r3, fp
	add	r4, r4, r9
	cmp	r3, #0
	bne	.L240
	ldr	r3, [sp, #4]
	cmp	r3, #0
	beq	.L255
.L241:
	mov	r3, r10
	ldr	r0, [r3, #8]
	ldr	r3, [sp, #12]
	cmp	r3, #0
	beq	.L244
	movs	r3, r7
	mov	r2, r9
	ldr	r1, [sp, #8]
	bl	DecodeSymDeltatANS
	mov	r3, fp
	cmp	r3, #0
	beq	.L256
.L252:
	mov	r5, r9
.L246:
	mov	r0, r8
	movs	r2, r5
	movs	r1, r4
	ldr	r3, [sp]
	bl	DecodeInstructionsIwram
	mov	r0, r9
	bl	Free
.L230:
	add	sp, sp, #20
	@ sp needed
	pop	{r4, r5, r6, r7}
	mov	fp, r7
	mov	r10, r6
	mov	r9, r5
	mov	r8, r4
	pop	{r4, r5, r6, r7}
	pop	{r0}
	bx	r0
.L232:
	movs	r1, r3
	movs	r2, #15
	adds	r1, r1, #11
	ands	r2, r1
	cmp	r2, #1
	bhi	.L248
	movs	r2, #12
	mov	ip, r2
	add	ip, ip, r5
	mov	r2, ip
	str	r2, [sp, #8]
	movs	r2, r5
	mov	r1, r10
	adds	r2, r2, #24
	str	r2, [r1, #8]
	str	r5, [sp, #16]
	cmp	r3, #5
	bne	.L249
	movs	r3, #0
	str	r3, [sp, #12]
	adds	r3, r3, #1
	mov	fp, r3
	b	.L235
.L255:
	lsls	r7, r7, #1
	adds	r4, r5, r7
	b	.L246
.L240:
	mov	r3, r8
	ldr	r0, [r2, #8]
	ldr	r1, [sp, #16]
	movs	r2, r4
	bl	DecodeLOtANS
	ldr	r3, [sp, #4]
	adds	r5, r5, #12
	cmp	r3, #0
	bne	.L241
	ldr	r3, [r6, #4]
	lsls	r3, r3, #13
	lsrs	r3, r3, #19
	lsls	r3, r3, #2
	adds	r5, r5, r3
	b	.L246
.L233:
	lsls	r1, r7, #1
	movs	r2, r5
	mov	r0, r8
	ldr	r3, [sp]
	adds	r1, r5, r1
	bl	DecodeInstructionsIwram
	b	.L230
.L231:
	movs	r3, r1
	adds	r3, r3, #12
	str	r3, [r2, #8]
	movs	r3, #0
	str	r3, [sp, #8]
	str	r3, [sp, #4]
	adds	r3, r3, #1
	mov	fp, r3
	movs	r3, #0
	str	r1, [sp, #16]
	str	r3, [sp, #12]
	b	.L234
.L244:
	movs	r3, r7
	mov	r2, r9
	ldr	r1, [sp, #8]
	bl	DecodeSymtANS
	mov	r3, fp
	cmp	r3, #0
	bne	.L252
.L256:
	ldr	r4, [r6, #4]
	lsls	r4, r4, #13
	lsrs	r4, r4, #19
	lsls	r4, r4, #2
	adds	r4, r4, #12
	adds	r4, r5, r4
	mov	r5, r9
	b	.L246
.L248:
	movs	r3, #0
	mov	fp, r3
	str	r3, [sp, #8]
	str	r3, [sp, #4]
	str	r3, [sp, #16]
	str	r3, [sp, #12]
	b	.L234
.L249:
	movs	r3, #1
	mov	fp, r3
	str	r3, [sp, #4]
	str	r3, [sp, #12]
	b	.L234
.L258:
	.align	2
.L257:
	.word	.LANCHOR0
	.word	.LC16
	.size	SmolDecompressData.part.0, .-SmolDecompressData.part.0
	.align	1
	.p2align 2,,3
	.global	IsLZ77Data
	.syntax unified
	.code	16
	.thumb_func
	.type	IsLZ77Data, %function
IsLZ77Data:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	movs	r3, r0
	movs	r0, #3
	push	{r4, lr}
	tst	r3, r0
	bne	.L262
	ldrb	r4, [r3]
	movs	r0, #0
	cmp	r4, #16
	bne	.L259
	ldrb	r0, [r3, #2]
	ldrb	r4, [r3, #3]
	lsls	r0, r0, #8
	ldrb	r3, [r3, #1]
	lsls	r4, r4, #16
	orrs	r0, r4
	orrs	r0, r3
	cmp	r0, r1
	bcc	.L262
	cmp	r2, r0
	bcc	.L262
.L259:
	@ sp needed
	pop	{r4}
	pop	{r1}
	bx	r1
.L262:
	movs	r0, #0
	b	.L259
	.size	IsLZ77Data, .-IsLZ77Data
	.align	1
	.p2align 2,,3
	.global	LoadCompressedSpriteSheet
	.syntax unified
	.code	16
	.thumb_func
	.type	LoadCompressedSpriteSheet, %function
LoadCompressedSpriteSheet:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, lr}
	movs	r1, #0
	sub	sp, sp, #8
	movs	r5, r0
	ldr	r0, [r0]
	bl	malloc_and_decompress
	ldr	r3, [r5, #4]
	movs	r4, r0
	str	r0, [sp]
	mov	r0, sp
	str	r3, [sp, #4]
	bl	LoadSpriteSheet
	movs	r5, r0
	movs	r0, r4
	bl	Free
	movs	r0, r5
	add	sp, sp, #8
	@ sp needed
	pop	{r4, r5}
	pop	{r1}
	bx	r1
	.size	LoadCompressedSpriteSheet, .-LoadCompressedSpriteSheet
	.align	1
	.p2align 2,,3
	.global	LoadCompressedSpriteSheetByTemplate
	.syntax unified
	.code	16
	.thumb_func
	.type	LoadCompressedSpriteSheetByTemplate, %function
LoadCompressedSpriteSheetByTemplate:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 32
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, lr}
	ldr	r3, [r0, #12]
	movs	r4, r0
	ldr	r0, [r3]
	movs	r5, r1
	sub	sp, sp, #32
	lsls	r3, r0, #30
	bne	.L270
	ldrb	r3, [r0]
	cmp	r3, #16
	beq	.L273
.L270:
	movs	r0, r4
	movs	r2, r5
	movs	r1, #0
	bl	LoadSpriteSheetByTemplate
	movs	r4, r0
.L269:
	movs	r0, r4
	add	sp, sp, #32
	@ sp needed
	pop	{r4, r5, r6, r7}
	pop	{r1}
	bx	r1
.L273:
	ldrb	r6, [r0, #2]
	ldrb	r3, [r0, #3]
	lsls	r6, r6, #8
	lsls	r3, r3, #16
	orrs	r6, r3
	ldrb	r3, [r0, #1]
	orrs	r6, r3
	movs	r2, r6
	ldr	r3, .L274
	subs	r2, r2, #32
	cmp	r2, r3
	bhi	.L270
	movs	r1, #0
	bl	malloc_and_decompress
	mov	r3, sp
	movs	r7, r0
	str	r0, [sp]
	adds	r6, r6, r5
	strh	r6, [r3, #4]
	str	r3, [sp, #20]
	ldrh	r3, [r4]
	add	r0, sp, #8
	movs	r2, r5
	movs	r1, #0
	strh	r3, [r0]
	bl	LoadSpriteSheetByTemplate
	movs	r4, r0
	movs	r0, r7
	bl	Free
	b	.L269
.L275:
	.align	2
.L274:
	.word	16352
	.size	LoadCompressedSpriteSheetByTemplate, .-LoadCompressedSpriteSheetByTemplate
	.align	1
	.p2align 2,,3
	.global	LoadCompressedSpritePalette
	.syntax unified
	.code	16
	.thumb_func
	.type	LoadCompressedSpritePalette, %function
LoadCompressedSpritePalette:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, lr}
	movs	r1, #0
	sub	sp, sp, #8
	ldrh	r5, [r0, #4]
	ldr	r0, [r0]
	bl	malloc_and_decompress
	mov	r3, sp
	movs	r4, r0
	str	r0, [sp]
	mov	r0, sp
	strh	r5, [r3, #4]
	bl	LoadSpritePalette
	movs	r5, r0
	movs	r0, r4
	bl	Free
	movs	r0, r5
	add	sp, sp, #8
	@ sp needed
	pop	{r4, r5}
	pop	{r1}
	bx	r1
	.size	LoadCompressedSpritePalette, .-LoadCompressedSpritePalette
	.align	1
	.p2align 2,,3
	.global	LoadCompressedSpritePaletteWithTag
	.syntax unified
	.code	16
	.thumb_func
	.type	LoadCompressedSpritePaletteWithTag, %function
LoadCompressedSpritePaletteWithTag:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, lr}
	lsls	r4, r1, #16
	sub	sp, sp, #8
	movs	r1, #0
	bl	malloc_and_decompress
	mov	r3, sp
	movs	r5, r0
	str	r0, [sp]
	lsrs	r4, r4, #16
	mov	r0, sp
	strh	r4, [r3, #4]
	bl	LoadSpritePalette
	movs	r4, r0
	movs	r0, r5
	bl	Free
	movs	r0, r4
	add	sp, sp, #8
	@ sp needed
	pop	{r4, r5}
	pop	{r1}
	bx	r1
	.size	LoadCompressedSpritePaletteWithTag, .-LoadCompressedSpritePaletteWithTag
	.align	1
	.p2align 2,,3
	.global	DecompressDataWithHeaderVram
	.syntax unified
	.code	16
	.thumb_func
	.type	DecompressDataWithHeaderVram, %function
DecompressDataWithHeaderVram:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, lr}
	sub	sp, sp, #8
	movs	r5, r1
	ldr	r2, .L281
	mov	r1, sp
	movs	r4, r0
	bl	CpuSet
	mov	r3, sp
	ldrb	r3, [r3]
	lsls	r3, r3, #28
	bne	.L279
	movs	r1, r5
	movs	r0, r4
	bl	LZ77UnCompVram
.L278:
	add	sp, sp, #8
	@ sp needed
	pop	{r4, r5}
	pop	{r0}
	bx	r0
.L279:
	mov	r3, sp
	adds	r3, r3, #6
	ldrh	r3, [r3]
	cmp	r3, #7
	bls	.L278
	mov	r3, sp
	adds	r3, r3, #2
	ldrh	r3, [r3]
	cmp	r3, #3
	bls	.L278
	movs	r1, r4
	movs	r2, r5
	mov	r0, sp
	adds	r1, r1, #8
	bl	SmolDecompressData.part.0
	b	.L278
.L282:
	.align	2
.L281:
	.word	67108866
	.size	DecompressDataWithHeaderVram, .-DecompressDataWithHeaderVram
	.align	1
	.p2align 2,,3
	.global	GetDecompressedDataSize
	.syntax unified
	.code	16
	.thumb_func
	.type	GetDecompressedDataSize, %function
GetDecompressedDataSize:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	ldrb	r3, [r0]
	lsls	r3, r3, #28
	lsrs	r2, r3, #28
	cmp	r3, #0
	beq	.L284
	cmp	r2, #8
	bne	.L289
	ldr	r0, [r0]
	lsls	r0, r0, #14
	lsrs	r0, r0, #18
.L283:
	@ sp needed
	bx	lr
.L289:
	ldr	r0, [r0]
	lsls	r0, r0, #14
	lsrs	r0, r0, #18
	lsls	r0, r0, #2
	b	.L283
.L284:
	ldr	r0, [r0]
	lsrs	r0, r0, #8
	b	.L283
	.size	GetDecompressedDataSize, .-GetDecompressedDataSize
	.align	1
	.p2align 2,,3
	.global	FastLZ77UnCompWram
	.syntax unified
	.code	16
	.thumb_func
	.type	FastLZ77UnCompWram, %function
FastLZ77UnCompWram:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 800
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, lr}
	ldr	r4, .L291
	add	sp, sp, r4
	mov	r6, sp
	movs	r4, r0
	movs	r5, r1
	ldr	r2, .L291+4
	ldr	r1, .L291+8
	movs	r0, r6
	subs	r2, r2, r1
	bl	FastUnsafeCopy32
	movs	r1, r5
	movs	r0, r4
	bl	.L293
	movs	r3, #200
	lsls	r3, r3, #2
	add	sp, sp, r3
	@ sp needed
	pop	{r4, r5, r6}
	pop	{r0}
	bx	r0
.L292:
	.align	2
.L291:
	.word	-800
	.word	LZ77UnCompWRAMOptimized_end
	.word	LZ77UnCompWRAMOptimized
	.size	FastLZ77UnCompWram, .-FastLZ77UnCompWram
	.section	.rodata.str1.4
	.align	2
.LC20:
	.ascii	"src/decompress.c:1075\000"
	.text
	.align	1
	.p2align 2,,3
	.global	DecompressDataWithHeaderWram
	.syntax unified
	.code	16
	.thumb_func
	.type	DecompressDataWithHeaderWram, %function
DecompressDataWithHeaderWram:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, lr}
	sub	sp, sp, #8
	ldr	r2, .L300
	movs	r5, r1
	mov	r1, sp
	movs	r4, r0
	bl	CpuSet
	mov	r3, sp
	ldrb	r3, [r3]
	lsls	r3, r3, #28
	lsrs	r2, r3, #28
	cmp	r3, #0
	beq	.L295
	cmp	r2, #8
	beq	.L296
	mov	r3, sp
	adds	r3, r3, #6
	ldrh	r3, [r3]
	cmp	r3, #7
	bls	.L294
	mov	r3, sp
	adds	r3, r3, #2
	ldrh	r3, [r3]
	cmp	r3, #3
	bls	.L294
	movs	r1, r4
	movs	r2, r5
	mov	r0, sp
	adds	r1, r1, #8
	bl	SmolDecompressData.part.0
	b	.L294
.L296:
	ldr	r3, [sp]
	lsls	r3, r3, #14
	lsrs	r3, r3, #18
	lsls	r0, r3, #1
	ldr	r1, .L300+4
	adds	r0, r0, r3
	bl	Alloc_
	mov	r3, sp
	ldrh	r1, [r3, #2]
	movs	r3, #1
	lsrs	r1, r1, #2
	adds	r1, r1, #1
	bics	r1, r3
	add	r3, sp, #4
	ldrh	r2, [r3]
	ldr	r3, [sp, #4]
	lsls	r2, r2, #21
	lsls	r3, r3, #12
	lsrs	r3, r3, #23
	lsrs	r2, r2, #21
	adds	r2, r2, r3
	mov	r3, sp
	movs	r6, r0
	adds	r3, r3, #6
	ldrh	r3, [r3]
	lsls	r3, r3, #18
	adds	r4, r4, #8
	lsrs	r3, r3, #22
	lsls	r1, r1, #1
	adds	r0, r2, r3
	adds	r1, r4, r1
	movs	r3, r6
	movs	r2, r4
	bl	DecodeInstructionsIwram
	ldr	r0, [sp]
	lsls	r0, r0, #14
	lsrs	r0, r0, #19
	movs	r2, r5
	movs	r1, r6
	bl	TilemapLoop
	movs	r0, r6
	bl	Free
.L294:
	add	sp, sp, #8
	@ sp needed
	pop	{r4, r5, r6}
	pop	{r0}
	bx	r0
.L295:
	movs	r1, r5
	movs	r0, r4
	bl	FastLZ77UnCompWram
	b	.L294
.L301:
	.align	2
.L300:
	.word	67108866
	.word	.LC20
	.size	DecompressDataWithHeaderWram, .-DecompressDataWithHeaderWram
	.align	1
	.p2align 2,,3
	.global	LoadCompressedSpriteSheetOverrideBuffer
	.syntax unified
	.code	16
	.thumb_func
	.type	LoadCompressedSpriteSheetOverrideBuffer, %function
LoadCompressedSpriteSheetOverrideBuffer:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, lr}
	movs	r4, r0
	movs	r5, r1
	sub	sp, sp, #8
	ldr	r0, [r0]
	bl	DecompressDataWithHeaderWram
	ldr	r3, [r4, #4]
	mov	r0, sp
	str	r5, [sp]
	str	r3, [sp, #4]
	bl	LoadSpriteSheet
	add	sp, sp, #8
	@ sp needed
	pop	{r4, r5}
	pop	{r1}
	bx	r1
	.size	LoadCompressedSpriteSheetOverrideBuffer, .-LoadCompressedSpriteSheetOverrideBuffer
	.align	1
	.p2align 2,,3
	.global	LoadCompressedSpritePaletteOverrideBuffer
	.syntax unified
	.code	16
	.thumb_func
	.type	LoadCompressedSpritePaletteOverrideBuffer, %function
LoadCompressedSpritePaletteOverrideBuffer:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, lr}
	movs	r5, r1
	movs	r4, r0
	sub	sp, sp, #8
	ldr	r0, [r0]
	bl	DecompressDataWithHeaderWram
	mov	r2, sp
	str	r5, [sp]
	ldrh	r3, [r4, #4]
	mov	r0, sp
	strh	r3, [r2, #4]
	bl	LoadSpritePalette
	add	sp, sp, #8
	@ sp needed
	pop	{r4, r5}
	pop	{r0}
	bx	r0
	.size	LoadCompressedSpritePaletteOverrideBuffer, .-LoadCompressedSpritePaletteOverrideBuffer
	.align	1
	.p2align 2,,3
	.global	DecompressPicFromTable
	.syntax unified
	.code	16
	.thumb_func
	.type	DecompressPicFromTable, %function
DecompressPicFromTable:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{lr}
	ldr	r0, [r0]
	@ sp needed
	bl	DecompressDataWithHeaderWram
	pop	{r0}
	bx	r0
	.size	DecompressPicFromTable, .-DecompressPicFromTable
	.align	1
	.p2align 2,,3
	.global	LoadSpecialPokePic
	.syntax unified
	.code	16
	.thumb_func
	.type	LoadSpecialPokePic, %function
LoadSpecialPokePic:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, lr}
	mov	lr, r9
	mov	r7, r8
	lsls	r1, r1, #16
	push	{r7, lr}
	movs	r6, r0
	lsrs	r0, r1, #16
	lsls	r5, r3, #24
	movs	r7, r2
	bl	SanitizeSpeciesId
	lsrs	r5, r5, #24
	movs	r4, r0
	cmp	r0, #201
	beq	.L328
.L306:
	ldr	r3, .L331
	mov	r8, r3
	cmp	r5, #0
	beq	.L307
	lsls	r5, r4, #6
	adds	r3, r5, r4
	lsls	r3, r3, #2
	add	r3, r3, r8
	ldr	r3, [r3, #108]
	mov	r9, r3
	cmp	r3, #0
	beq	.L308
	lsls	r0, r4, #16
	movs	r1, r7
	lsrs	r0, r0, #16
	bl	IsPersonalityFemale
	cmp	r0, #0
	bne	.L329
.L308:
	adds	r5, r5, r4
	lsls	r5, r5, #2
	add	r5, r5, r8
	ldr	r0, [r5, #88]
	cmp	r0, #0
	beq	.L310
.L326:
	movs	r1, r6
	bl	DecompressDataWithHeaderWram
.L309:
	movs	r3, #72
	adds	r3, r3, #255
	cmp	r4, r3
	bne	.L305
	movs	r2, #0
	movs	r1, r6
	movs	r0, r7
	bl	DrawSpindaSpots
	movs	r2, #1
	movs	r1, r6
	movs	r0, r7
	bl	DrawSpindaSpots
.L305:
	@ sp needed
	pop	{r6, r7}
	mov	r9, r7
	mov	r8, r6
	pop	{r4, r5, r6, r7}
	pop	{r0}
	bx	r0
.L307:
	lsls	r5, r4, #6
	adds	r3, r5, r4
	lsls	r3, r3, #2
	add	r3, r3, r8
	ldr	r3, [r3, #112]
	mov	r9, r3
	cmp	r3, #0
	beq	.L311
	lsls	r0, r4, #16
	movs	r1, r7
	lsrs	r0, r0, #16
	bl	IsPersonalityFemale
	cmp	r0, #0
	bne	.L330
.L311:
	adds	r5, r5, r4
	lsls	r5, r5, #2
	add	r5, r5, r8
	ldr	r0, [r5, #92]
	cmp	r0, #0
	beq	.L313
.L327:
	movs	r1, r6
	bl	DecompressDataWithHeaderWram
	b	.L305
.L328:
	movs	r0, r7
	bl	GetUnownSpeciesId
	movs	r4, r0
	b	.L306
.L330:
	movs	r1, r6
	mov	r0, r9
	bl	DecompressDataWithHeaderWram
	b	.L305
.L329:
	movs	r1, r6
	mov	r0, r9
	bl	DecompressDataWithHeaderWram
	b	.L309
.L310:
	mov	r3, r8
	ldr	r0, [r3, #88]
	b	.L326
.L313:
	mov	r3, r8
	ldr	r0, [r3, #92]
	b	.L327
.L332:
	.align	2
.L331:
	.word	gSpeciesInfo
	.size	LoadSpecialPokePic, .-LoadSpecialPokePic
	.align	1
	.p2align 2,,3
	.global	HandleLoadSpecialPokePic
	.syntax unified
	.code	16
	.thumb_func
	.type	HandleLoadSpecialPokePic, %function
HandleLoadSpecialPokePic:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, lr}
	movs	r4, r1
	@ sp needed
	movs	r1, r2
	movs	r2, r3
	movs	r3, #255
	ands	r3, r0
	movs	r0, r4
	bl	LoadSpecialPokePic
	pop	{r4}
	pop	{r0}
	bx	r0
	.size	HandleLoadSpecialPokePic, .-HandleLoadSpecialPokePic
	.align	1
	.p2align 2,,3
	.global	Unused_DecompressDataWithHeaderWramIndirect
	.syntax unified
	.code	16
	.thumb_func
	.type	Unused_DecompressDataWithHeaderWramIndirect, %function
Unused_DecompressDataWithHeaderWramIndirect:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{lr}
	ldr	r0, [r0]
	@ sp needed
	bl	DecompressDataWithHeaderWram
	pop	{r0}
	bx	r0
	.size	Unused_DecompressDataWithHeaderWramIndirect, .-Unused_DecompressDataWithHeaderWramIndirect
	.section	.rodata.str1.4
	.align	2
.LC23:
	.ascii	"src/decompress.c:1329\000"
	.text
	.align	1
	.p2align 2,,3
	.global	LoadCompressedSpriteSheetUsingHeap
	.syntax unified
	.code	16
	.thumb_func
	.type	LoadCompressedSpriteSheetUsingHeap, %function
LoadCompressedSpriteSheetUsingHeap:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, lr}
	ldr	r2, [r0]
	ldrb	r3, [r2]
	lsls	r3, r3, #28
	movs	r5, r0
	sub	sp, sp, #8
	lsrs	r1, r3, #28
	cmp	r3, #0
	beq	.L336
	cmp	r1, #8
	bne	.L341
	ldr	r0, [r2]
	lsls	r0, r0, #14
	lsrs	r0, r0, #18
.L339:
	ldr	r1, .L342
	bl	AllocZeroed_
	movs	r4, r0
	ldr	r0, [r5]
	movs	r1, r4
	bl	DecompressDataWithHeaderWram
	ldr	r3, [r5, #4]
	mov	r0, sp
	str	r3, [sp, #4]
	str	r4, [sp]
	bl	LoadSpriteSheet
	movs	r0, r4
	bl	Free
	movs	r0, #0
	add	sp, sp, #8
	@ sp needed
	pop	{r4, r5}
	pop	{r1}
	bx	r1
.L341:
	ldr	r0, [r2]
	lsls	r0, r0, #14
	lsrs	r0, r0, #18
	lsls	r0, r0, #2
	b	.L339
.L336:
	ldr	r0, [r2]
	lsrs	r0, r0, #8
	b	.L339
.L343:
	.align	2
.L342:
	.word	.LC23
	.size	LoadCompressedSpriteSheetUsingHeap, .-LoadCompressedSpriteSheetUsingHeap
	.section	.rodata.str1.4
	.align	2
.LC25:
	.ascii	"src/decompress.c:1346\000"
	.text
	.align	1
	.p2align 2,,3
	.global	LoadCompressedSpritePaletteUsingHeap
	.syntax unified
	.code	16
	.thumb_func
	.type	LoadCompressedSpritePaletteUsingHeap, %function
LoadCompressedSpritePaletteUsingHeap:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, lr}
	ldr	r2, [r0]
	ldrb	r3, [r2]
	lsls	r3, r3, #28
	movs	r5, r0
	sub	sp, sp, #8
	lsrs	r1, r3, #28
	cmp	r3, #0
	beq	.L345
	cmp	r1, #8
	bne	.L350
	ldr	r0, [r2]
	lsls	r0, r0, #14
	lsrs	r0, r0, #18
.L348:
	ldr	r1, .L351
	bl	AllocZeroed_
	movs	r4, r0
	ldr	r0, [r5]
	movs	r1, r4
	bl	DecompressDataWithHeaderWram
	mov	r2, sp
	str	r4, [sp]
	ldrh	r3, [r5, #4]
	mov	r0, sp
	strh	r3, [r2, #4]
	bl	LoadSpritePalette
	movs	r0, r4
	bl	Free
	movs	r0, #0
	add	sp, sp, #8
	@ sp needed
	pop	{r4, r5}
	pop	{r1}
	bx	r1
.L350:
	ldr	r0, [r2]
	lsls	r0, r0, #14
	lsrs	r0, r0, #18
	lsls	r0, r0, #2
	b	.L348
.L345:
	ldr	r0, [r2]
	lsrs	r0, r0, #8
	b	.L348
.L352:
	.align	2
.L351:
	.word	.LC25
	.size	LoadCompressedSpritePaletteUsingHeap, .-LoadCompressedSpritePaletteUsingHeap
	.section	.rodata
	.align	2
	.type	sYkTemplate, %object
	.size	sYkTemplate, 512
sYkTemplate:
	.word	0
	.word	4128774
	.word	2031621
	.word	2039813
	.word	983044
	.word	987140
	.word	991236
	.word	995332
	.word	458755
	.word	460803
	.word	462851
	.word	464899
	.word	466947
	.word	468995
	.word	471043
	.word	473091
	.word	196610
	.word	197634
	.word	198658
	.word	199682
	.word	200706
	.word	201730
	.word	202754
	.word	203778
	.word	204802
	.word	205826
	.word	206850
	.word	207874
	.word	208898
	.word	209922
	.word	210946
	.word	211970
	.word	65537
	.word	66049
	.word	66561
	.word	67073
	.word	67585
	.word	68097
	.word	68609
	.word	69121
	.word	69633
	.word	70145
	.word	70657
	.word	71169
	.word	71681
	.word	72193
	.word	72705
	.word	73217
	.word	73729
	.word	74241
	.word	74753
	.word	75265
	.word	75777
	.word	76289
	.word	76801
	.word	77313
	.word	77825
	.word	78337
	.word	78849
	.word	79361
	.word	79873
	.word	80385
	.word	80897
	.word	81409
	.word	0
	.word	256
	.word	512
	.word	768
	.word	1024
	.word	1280
	.word	1536
	.word	1792
	.word	2048
	.word	2304
	.word	2560
	.word	2816
	.word	3072
	.word	3328
	.word	3584
	.word	3840
	.word	4096
	.word	4352
	.word	4608
	.word	4864
	.word	5120
	.word	5376
	.word	5632
	.word	5888
	.word	6144
	.word	6400
	.word	6656
	.word	6912
	.word	7168
	.word	7424
	.word	7680
	.word	7936
	.word	8192
	.word	8448
	.word	8704
	.word	8960
	.word	9216
	.word	9472
	.word	9728
	.word	9984
	.word	10240
	.word	10496
	.word	10752
	.word	11008
	.word	11264
	.word	11520
	.word	11776
	.word	12032
	.word	12288
	.word	12544
	.word	12800
	.word	13056
	.word	13312
	.word	13568
	.word	13824
	.word	14080
	.word	14336
	.word	14592
	.word	14848
	.word	15104
	.word	15360
	.word	15616
	.word	15872
	.word	16128
	.section	.bss,"aw",%nobits
	.align	2
	.set	.LANCHOR0,. + 0
	.type	sBitIndex, %object
	.size	sBitIndex, 1
sBitIndex:
	.space	1
	.space	3
	.type	sCurrState, %object
	.size	sCurrState, 4
sCurrState:
	.space	4
	.type	sDataPtr, %object
	.size	sDataPtr, 4
sDataPtr:
	.space	4
	.type	sWorkingYkTable, %object
	.size	sWorkingYkTable, 256
sWorkingYkTable:
	.space	256
	.ident	"GCC: (devkitARM release 63) 13.2.0"
	.text
	.code 16
	.align	1
.L165:
	bx	r4
.L293:
	bx	r6
.L186:
	bx	r7
.L213:
	bx	r9
.text
	.align	2, 0

