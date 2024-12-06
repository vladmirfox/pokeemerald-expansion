	.arch armv4t
	.fpu softvfp
	.file	"<stdin>"
	.text
	.global	gDecompressionBuffer
	.section	.sbss,"aw",%nobits
	.align	2
	.type	gDecompressionBuffer, %object
	.size	gDecompressionBuffer, 16384
gDecompressionBuffer:
	.space	16384
	.global	ykTemplate
	.section	.ewram,"aw"
	.align	2
	.type	ykTemplate, %object
	.size	ykTemplate, 512
ykTemplate:
	.byte	0
	.byte	0
	.space	2
	.byte	64
	.byte	6
	.space	2
	.byte	64
	.byte	5
	.space	2
	.byte	96
	.byte	5
	.space	2
	.byte	64
	.byte	4
	.space	2
	.byte	80
	.byte	4
	.space	2
	.byte	96
	.byte	4
	.space	2
	.byte	112
	.byte	4
	.space	2
	.byte	64
	.byte	3
	.space	2
	.byte	72
	.byte	3
	.space	2
	.byte	80
	.byte	3
	.space	2
	.byte	88
	.byte	3
	.space	2
	.byte	96
	.byte	3
	.space	2
	.byte	104
	.byte	3
	.space	2
	.byte	112
	.byte	3
	.space	2
	.byte	120
	.byte	3
	.space	2
	.byte	64
	.byte	2
	.space	2
	.byte	68
	.byte	2
	.space	2
	.byte	72
	.byte	2
	.space	2
	.byte	76
	.byte	2
	.space	2
	.byte	80
	.byte	2
	.space	2
	.byte	84
	.byte	2
	.space	2
	.byte	88
	.byte	2
	.space	2
	.byte	92
	.byte	2
	.space	2
	.byte	96
	.byte	2
	.space	2
	.byte	100
	.byte	2
	.space	2
	.byte	104
	.byte	2
	.space	2
	.byte	108
	.byte	2
	.space	2
	.byte	112
	.byte	2
	.space	2
	.byte	116
	.byte	2
	.space	2
	.byte	120
	.byte	2
	.space	2
	.byte	124
	.byte	2
	.space	2
	.byte	64
	.byte	1
	.space	2
	.byte	66
	.byte	1
	.space	2
	.byte	68
	.byte	1
	.space	2
	.byte	70
	.byte	1
	.space	2
	.byte	72
	.byte	1
	.space	2
	.byte	74
	.byte	1
	.space	2
	.byte	76
	.byte	1
	.space	2
	.byte	78
	.byte	1
	.space	2
	.byte	80
	.byte	1
	.space	2
	.byte	82
	.byte	1
	.space	2
	.byte	84
	.byte	1
	.space	2
	.byte	86
	.byte	1
	.space	2
	.byte	88
	.byte	1
	.space	2
	.byte	90
	.byte	1
	.space	2
	.byte	92
	.byte	1
	.space	2
	.byte	94
	.byte	1
	.space	2
	.byte	96
	.byte	1
	.space	2
	.byte	98
	.byte	1
	.space	2
	.byte	100
	.byte	1
	.space	2
	.byte	102
	.byte	1
	.space	2
	.byte	104
	.byte	1
	.space	2
	.byte	106
	.byte	1
	.space	2
	.byte	108
	.byte	1
	.space	2
	.byte	110
	.byte	1
	.space	2
	.byte	112
	.byte	1
	.space	2
	.byte	114
	.byte	1
	.space	2
	.byte	116
	.byte	1
	.space	2
	.byte	118
	.byte	1
	.space	2
	.byte	120
	.byte	1
	.space	2
	.byte	122
	.byte	1
	.space	2
	.byte	124
	.byte	1
	.space	2
	.byte	126
	.byte	1
	.space	2
	.byte	64
	.byte	0
	.space	2
	.byte	65
	.byte	0
	.space	2
	.byte	66
	.byte	0
	.space	2
	.byte	67
	.byte	0
	.space	2
	.byte	68
	.byte	0
	.space	2
	.byte	69
	.byte	0
	.space	2
	.byte	70
	.byte	0
	.space	2
	.byte	71
	.byte	0
	.space	2
	.byte	72
	.byte	0
	.space	2
	.byte	73
	.byte	0
	.space	2
	.byte	74
	.byte	0
	.space	2
	.byte	75
	.byte	0
	.space	2
	.byte	76
	.byte	0
	.space	2
	.byte	77
	.byte	0
	.space	2
	.byte	78
	.byte	0
	.space	2
	.byte	79
	.byte	0
	.space	2
	.byte	80
	.byte	0
	.space	2
	.byte	81
	.byte	0
	.space	2
	.byte	82
	.byte	0
	.space	2
	.byte	83
	.byte	0
	.space	2
	.byte	84
	.byte	0
	.space	2
	.byte	85
	.byte	0
	.space	2
	.byte	86
	.byte	0
	.space	2
	.byte	87
	.byte	0
	.space	2
	.byte	88
	.byte	0
	.space	2
	.byte	89
	.byte	0
	.space	2
	.byte	90
	.byte	0
	.space	2
	.byte	91
	.byte	0
	.space	2
	.byte	92
	.byte	0
	.space	2
	.byte	93
	.byte	0
	.space	2
	.byte	94
	.byte	0
	.space	2
	.byte	95
	.byte	0
	.space	2
	.byte	96
	.byte	0
	.space	2
	.byte	97
	.byte	0
	.space	2
	.byte	98
	.byte	0
	.space	2
	.byte	99
	.byte	0
	.space	2
	.byte	100
	.byte	0
	.space	2
	.byte	101
	.byte	0
	.space	2
	.byte	102
	.byte	0
	.space	2
	.byte	103
	.byte	0
	.space	2
	.byte	104
	.byte	0
	.space	2
	.byte	105
	.byte	0
	.space	2
	.byte	106
	.byte	0
	.space	2
	.byte	107
	.byte	0
	.space	2
	.byte	108
	.byte	0
	.space	2
	.byte	109
	.byte	0
	.space	2
	.byte	110
	.byte	0
	.space	2
	.byte	111
	.byte	0
	.space	2
	.byte	112
	.byte	0
	.space	2
	.byte	113
	.byte	0
	.space	2
	.byte	114
	.byte	0
	.space	2
	.byte	115
	.byte	0
	.space	2
	.byte	116
	.byte	0
	.space	2
	.byte	117
	.byte	0
	.space	2
	.byte	118
	.byte	0
	.space	2
	.byte	119
	.byte	0
	.space	2
	.byte	120
	.byte	0
	.space	2
	.byte	121
	.byte	0
	.space	2
	.byte	122
	.byte	0
	.space	2
	.byte	123
	.byte	0
	.space	2
	.byte	124
	.byte	0
	.space	2
	.byte	125
	.byte	0
	.space	2
	.byte	126
	.byte	0
	.space	2
	.byte	127
	.byte	0
	.space	2
	.text
	.align	1
	.p2align 2,,3
	.global	LZDecompressWram
	.syntax unified
	.code	16
	.thumb_func
	.type	LZDecompressWram, %function
LZDecompressWram:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, lr}
	sub	sp, sp, #8
	movs	r5, r1
	ldr	r2, .L6
	mov	r1, sp
	movs	r4, r0
	bl	CpuSet
	mov	r3, sp
	ldrb	r3, [r3]
	lsls	r3, r3, #27
	lsrs	r3, r3, #27
	cmp	r3, #16
	beq	.L5
	movs	r1, r4
	movs	r2, r5
	mov	r0, sp
	adds	r1, r1, #8
	bl	SmolDecompressData
.L1:
	add	sp, sp, #8
	@ sp needed
	pop	{r4, r5}
	pop	{r0}
	bx	r0
.L5:
	movs	r1, r5
	movs	r0, r4
	bl	LZ77UnCompWram
	b	.L1
.L7:
	.align	2
.L6:
	.word	67108866
	.size	LZDecompressWram, .-LZDecompressWram
	.align	1
	.p2align 2,,3
	.global	LZDecompressVram
	.syntax unified
	.code	16
	.thumb_func
	.type	LZDecompressVram, %function
LZDecompressVram:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, lr}
	sub	sp, sp, #8
	movs	r5, r1
	ldr	r2, .L12
	mov	r1, sp
	movs	r4, r0
	bl	CpuSet
	mov	r3, sp
	ldrb	r3, [r3]
	lsls	r3, r3, #27
	lsrs	r3, r3, #27
	cmp	r3, #16
	beq	.L11
	movs	r1, r4
	movs	r2, r5
	mov	r0, sp
	adds	r1, r1, #8
	bl	SmolDecompressData
.L8:
	add	sp, sp, #8
	@ sp needed
	pop	{r4, r5}
	pop	{r0}
	bx	r0
.L11:
	movs	r1, r5
	movs	r0, r4
	bl	LZ77UnCompVram
	b	.L8
.L13:
	.align	2
.L12:
	.word	67108866
	.size	LZDecompressVram, .-LZDecompressVram
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
	bne	.L17
	ldrb	r4, [r3]
	movs	r0, #0
	cmp	r4, #16
	bne	.L14
	ldrb	r0, [r3, #2]
	ldrb	r4, [r3, #3]
	lsls	r0, r0, #8
	ldrb	r3, [r3, #1]
	lsls	r4, r4, #16
	orrs	r0, r4
	orrs	r0, r3
	cmp	r0, r1
	bcc	.L17
	cmp	r2, r0
	bcc	.L17
.L14:
	@ sp needed
	pop	{r4}
	pop	{r1}
	bx	r1
.L17:
	movs	r0, #0
	b	.L14
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
	push	{r4, r5, r6, lr}
	ldr	r5, [r0]
	sub	sp, sp, #8
	movs	r4, r0
	mov	r1, sp
	movs	r0, r5
	ldr	r2, .L27
	bl	CpuSet
	mov	r3, sp
	ldrb	r3, [r3]
	lsls	r3, r3, #27
	ldr	r6, .L27+4
	lsrs	r3, r3, #27
	cmp	r3, #16
	beq	.L26
	movs	r1, r5
	movs	r2, r6
	mov	r0, sp
	adds	r1, r1, #8
	bl	SmolDecompressData
.L25:
	ldr	r3, [r4, #4]
	mov	r0, sp
	str	r6, [sp]
	str	r3, [sp, #4]
	bl	LoadSpriteSheet
	add	sp, sp, #8
	@ sp needed
	pop	{r4, r5, r6}
	pop	{r1}
	bx	r1
.L26:
	movs	r1, r6
	movs	r0, r5
	bl	LZ77UnCompWram
	b	.L25
.L28:
	.align	2
.L27:
	.word	67108866
	.word	gDecompressionBuffer
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
	mov	lr, r8
	push	{lr}
	ldr	r3, [r0, #12]
	ldr	r4, [r3]
	movs	r5, r0
	movs	r6, r1
	sub	sp, sp, #32
	lsls	r3, r4, #30
	bne	.L30
	ldrb	r3, [r4]
	cmp	r3, #16
	beq	.L37
.L30:
	movs	r2, r6
	movs	r1, #0
	movs	r0, r5
	bl	LoadSpriteSheetByTemplate
.L33:
	add	sp, sp, #32
	@ sp needed
	pop	{r7}
	mov	r8, r7
	pop	{r4, r5, r6, r7}
	pop	{r1}
	bx	r1
.L37:
	ldrb	r7, [r4, #2]
	ldrb	r3, [r4, #3]
	lsls	r7, r7, #8
	lsls	r3, r3, #16
	orrs	r7, r3
	ldrb	r3, [r4, #1]
	orrs	r7, r3
	movs	r2, r7
	ldr	r3, .L39
	subs	r2, r2, #32
	cmp	r2, r3
	bhi	.L30
	movs	r0, r4
	ldr	r2, .L39+4
	add	r1, sp, #8
	bl	CpuSet
	mov	r3, sp
	ldrb	r3, [r3, #8]
	lsls	r3, r3, #27
	lsrs	r3, r3, #27
	cmp	r3, #16
	beq	.L38
	movs	r1, r4
	ldr	r3, .L39+8
	adds	r1, r1, #8
	movs	r2, r3
	add	r0, sp, #8
	mov	r8, r3
	bl	SmolDecompressData
.L34:
	mov	r3, r8
	str	r3, [sp]
	mov	r3, sp
	mov	r2, sp
	adds	r7, r7, r6
	str	r3, [sp, #20]
	strh	r7, [r3, #4]
	ldrh	r3, [r5]
	movs	r1, #0
	strh	r3, [r2, #8]
	add	r0, sp, #8
	movs	r2, r6
	bl	LoadSpriteSheetByTemplate
	b	.L33
.L38:
	ldr	r3, .L39+8
	movs	r0, r4
	movs	r1, r3
	mov	r8, r3
	bl	LZ77UnCompWram
	b	.L34
.L40:
	.align	2
.L39:
	.word	16352
	.word	67108866
	.word	gDecompressionBuffer
	.size	LoadCompressedSpriteSheetByTemplate, .-LoadCompressedSpriteSheetByTemplate
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
	push	{r4, r5, r6, lr}
	ldr	r6, [r0]
	sub	sp, sp, #8
	movs	r4, r0
	movs	r5, r1
	movs	r0, r6
	mov	r1, sp
	ldr	r2, .L45
	bl	CpuSet
	mov	r3, sp
	ldrb	r3, [r3]
	lsls	r3, r3, #27
	lsrs	r3, r3, #27
	cmp	r3, #16
	beq	.L44
	movs	r1, r6
	movs	r2, r5
	mov	r0, sp
	adds	r1, r1, #8
	bl	SmolDecompressData
.L43:
	ldr	r3, [r4, #4]
	mov	r0, sp
	str	r5, [sp]
	str	r3, [sp, #4]
	bl	LoadSpriteSheet
	add	sp, sp, #8
	@ sp needed
	pop	{r4, r5, r6}
	pop	{r0}
	bx	r0
.L44:
	movs	r1, r5
	movs	r0, r6
	bl	LZ77UnCompWram
	b	.L43
.L46:
	.align	2
.L45:
	.word	67108866
	.size	LoadCompressedSpriteSheetOverrideBuffer, .-LoadCompressedSpriteSheetOverrideBuffer
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
	push	{r4, r5, r6, lr}
	ldr	r5, [r0]
	sub	sp, sp, #8
	movs	r4, r0
	mov	r1, sp
	movs	r0, r5
	ldr	r2, .L51
	bl	CpuSet
	mov	r3, sp
	ldrb	r3, [r3]
	lsls	r3, r3, #27
	ldr	r6, .L51+4
	lsrs	r3, r3, #27
	cmp	r3, #16
	beq	.L50
	movs	r1, r5
	movs	r2, r6
	mov	r0, sp
	adds	r1, r1, #8
	bl	SmolDecompressData
.L49:
	mov	r2, sp
	str	r6, [sp]
	ldrh	r3, [r4, #4]
	mov	r0, sp
	strh	r3, [r2, #4]
	bl	LoadSpritePalette
	add	sp, sp, #8
	@ sp needed
	pop	{r4, r5, r6}
	pop	{r0}
	bx	r0
.L50:
	movs	r1, r6
	movs	r0, r5
	bl	LZ77UnCompWram
	b	.L49
.L52:
	.align	2
.L51:
	.word	67108866
	.word	gDecompressionBuffer
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
	push	{r4, r5, r6, lr}
	sub	sp, sp, #8
	lsls	r5, r1, #16
	ldr	r2, .L57
	mov	r1, sp
	movs	r4, r0
	bl	CpuSet
	mov	r3, sp
	ldrb	r3, [r3]
	lsls	r3, r3, #27
	ldr	r6, .L57+4
	lsrs	r5, r5, #16
	lsrs	r3, r3, #27
	cmp	r3, #16
	beq	.L56
	movs	r1, r4
	movs	r2, r6
	mov	r0, sp
	adds	r1, r1, #8
	bl	SmolDecompressData
.L55:
	mov	r3, sp
	str	r6, [sp]
	mov	r0, sp
	strh	r5, [r3, #4]
	bl	LoadSpritePalette
	add	sp, sp, #8
	@ sp needed
	pop	{r4, r5, r6}
	pop	{r0}
	bx	r0
.L56:
	movs	r1, r6
	movs	r0, r4
	bl	LZ77UnCompWram
	b	.L55
.L58:
	.align	2
.L57:
	.word	67108866
	.word	gDecompressionBuffer
	.size	LoadCompressedSpritePaletteWithTag, .-LoadCompressedSpritePaletteWithTag
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
	push	{r4, r5, r6, lr}
	ldr	r6, [r0]
	sub	sp, sp, #8
	movs	r4, r0
	movs	r5, r1
	movs	r0, r6
	mov	r1, sp
	ldr	r2, .L63
	bl	CpuSet
	mov	r3, sp
	ldrb	r3, [r3]
	lsls	r3, r3, #27
	lsrs	r3, r3, #27
	cmp	r3, #16
	beq	.L62
	movs	r1, r6
	movs	r2, r5
	mov	r0, sp
	adds	r1, r1, #8
	bl	SmolDecompressData
.L61:
	mov	r2, sp
	str	r5, [sp]
	ldrh	r3, [r4, #4]
	mov	r0, sp
	strh	r3, [r2, #4]
	bl	LoadSpritePalette
	add	sp, sp, #8
	@ sp needed
	pop	{r4, r5, r6}
	pop	{r0}
	bx	r0
.L62:
	movs	r1, r5
	movs	r0, r6
	bl	LZ77UnCompWram
	b	.L61
.L64:
	.align	2
.L63:
	.word	67108866
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
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, lr}
	ldr	r4, [r0]
	sub	sp, sp, #8
	movs	r5, r1
	movs	r0, r4
	mov	r1, sp
	ldr	r2, .L69
	bl	CpuSet
	mov	r3, sp
	ldrb	r3, [r3]
	lsls	r3, r3, #27
	lsrs	r3, r3, #27
	cmp	r3, #16
	beq	.L68
	movs	r1, r4
	movs	r2, r5
	mov	r0, sp
	adds	r1, r1, #8
	bl	SmolDecompressData
.L65:
	add	sp, sp, #8
	@ sp needed
	pop	{r4, r5}
	pop	{r0}
	bx	r0
.L68:
	movs	r1, r5
	movs	r0, r4
	bl	LZ77UnCompWram
	b	.L65
.L70:
	.align	2
.L69:
	.word	67108866
	.size	DecompressPicFromTable, .-DecompressPicFromTable
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
	.global	UnpackFrequencies
	.syntax unified
	.code	16
	.thumb_func
	.type	UnpackFrequencies, %function
UnpackFrequencies:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	movs	r3, #0
	str	r3, [r1, #60]
	ldr	r2, [r0]
	adds	r3, r3, #63
	ands	r2, r3
	str	r2, [r1]
	ldr	r2, [r0]
	lsrs	r2, r2, #6
	ands	r2, r3
	str	r2, [r1, #4]
	ldr	r2, [r0]
	lsrs	r2, r2, #12
	ands	r2, r3
	str	r2, [r1, #8]
	ldr	r2, [r0]
	lsrs	r2, r2, #18
	ands	r2, r3
	str	r2, [r1, #12]
	ldrb	r2, [r0, #3]
	ands	r2, r3
	str	r2, [r1, #16]
	push	{r4, r5, lr}
	ldr	r4, [r0]
	@ sp needed
	lsrs	r4, r4, #30
	str	r4, [r1, #60]
	ldr	r2, [r0, #4]
	ands	r2, r3
	str	r2, [r1, #20]
	ldr	r2, [r0, #4]
	lsrs	r2, r2, #6
	ands	r2, r3
	str	r2, [r1, #24]
	ldr	r2, [r0, #4]
	lsrs	r2, r2, #12
	ands	r2, r3
	str	r2, [r1, #28]
	ldr	r2, [r0, #4]
	lsrs	r2, r2, #18
	ands	r2, r3
	str	r2, [r1, #32]
	ldrb	r2, [r0, #7]
	ands	r2, r3
	str	r2, [r1, #36]
	movs	r2, #12
	ldr	r5, [r0, #4]
	lsrs	r5, r5, #28
	ands	r2, r5
	adds	r2, r2, r4
	str	r2, [r1, #60]
	ldr	r4, [r0, #8]
	ands	r4, r3
	str	r4, [r1, #40]
	ldr	r4, [r0, #8]
	lsrs	r4, r4, #6
	ands	r4, r3
	str	r4, [r1, #44]
	ldr	r4, [r0, #8]
	lsrs	r4, r4, #12
	ands	r4, r3
	str	r4, [r1, #48]
	ldr	r4, [r0, #8]
	lsrs	r4, r4, #18
	ands	r4, r3
	str	r4, [r1, #52]
	ldrb	r4, [r0, #11]
	ands	r3, r4
	str	r3, [r1, #56]
	movs	r3, #48
	ldr	r0, [r0, #8]
	lsrs	r0, r0, #26
	ands	r3, r0
	adds	r3, r3, r2
	str	r3, [r1, #60]
	pop	{r4, r5}
	pop	{r0}
	bx	r0
	.size	UnpackFrequencies, .-UnpackFrequencies
	.align	1
	.p2align 2,,3
	.global	DecompressDataVram
	.syntax unified
	.code	16
	.thumb_func
	.type	DecompressDataVram, %function
DecompressDataVram:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, lr}
	sub	sp, sp, #8
	movs	r5, r1
	ldr	r2, .L77
	mov	r1, sp
	movs	r4, r0
	bl	CpuSet
	mov	r3, sp
	ldrb	r3, [r3]
	lsls	r3, r3, #27
	lsrs	r3, r3, #27
	cmp	r3, #16
	beq	.L76
	movs	r1, r4
	movs	r2, r5
	mov	r0, sp
	adds	r1, r1, #8
	bl	SmolDecompressData
.L73:
	add	sp, sp, #8
	@ sp needed
	pop	{r4, r5}
	pop	{r0}
	bx	r0
.L76:
	movs	r1, r5
	movs	r0, r4
	bl	LZ77UnCompVram
	b	.L73
.L78:
	.align	2
.L77:
	.word	67108866
	.size	DecompressDataVram, .-DecompressDataVram
	.align	1
	.p2align 2,,3
	.global	DecompressDataWram
	.syntax unified
	.code	16
	.thumb_func
	.type	DecompressDataWram, %function
DecompressDataWram:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, lr}
	sub	sp, sp, #8
	movs	r5, r1
	ldr	r2, .L83
	mov	r1, sp
	movs	r4, r0
	bl	CpuSet
	mov	r3, sp
	ldrb	r3, [r3]
	lsls	r3, r3, #27
	lsrs	r3, r3, #27
	cmp	r3, #16
	beq	.L82
	movs	r1, r4
	movs	r2, r5
	mov	r0, sp
	adds	r1, r1, #8
	bl	SmolDecompressData
.L79:
	add	sp, sp, #8
	@ sp needed
	pop	{r4, r5}
	pop	{r0}
	bx	r0
.L82:
	movs	r1, r5
	movs	r0, r4
	bl	LZ77UnCompWram
	b	.L79
.L84:
	.align	2
.L83:
	.word	67108866
	.size	DecompressDataWram, .-DecompressDataWram
	.align	1
	.p2align 2,,3
	.global	BuildDecompressionTable
	.syntax unified
	.code	16
	.thumb_func
	.type	BuildDecompressionTable, %function
BuildDecompressionTable:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 64
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, lr}
	movs	r3, #63
	mov	r6, r9
	mov	r5, r8
	mov	lr, fp
	mov	r7, r10
	push	{r5, r6, r7, lr}
	movs	r5, r3
	movs	r6, r3
	ldr	r4, [r0]
	sub	sp, sp, #64
	ands	r5, r4
	str	r5, [sp]
	lsrs	r5, r4, #6
	ands	r5, r3
	str	r5, [sp, #4]
	lsrs	r5, r4, #12
	ands	r5, r3
	str	r5, [sp, #8]
	lsrs	r5, r4, #18
	ands	r5, r3
	str	r5, [sp, #12]
	lsrs	r5, r4, #24
	ands	r5, r3
	str	r5, [sp, #16]
	ldr	r5, [r0, #4]
	ands	r6, r5
	str	r6, [sp, #20]
	lsrs	r6, r5, #6
	ands	r6, r3
	str	r6, [sp, #24]
	lsrs	r6, r5, #12
	ands	r6, r3
	str	r6, [sp, #28]
	lsrs	r6, r5, #18
	ands	r6, r3
	str	r6, [sp, #32]
	lsrs	r6, r5, #24
	ands	r6, r3
	str	r6, [sp, #36]
	movs	r6, r3
	ldr	r0, [r0, #8]
	ands	r6, r0
	str	r6, [sp, #40]
	lsrs	r6, r0, #6
	ands	r6, r3
	str	r6, [sp, #44]
	lsrs	r6, r0, #12
	ands	r6, r3
	str	r6, [sp, #48]
	lsrs	r6, r0, #18
	ands	r6, r3
	str	r6, [sp, #52]
	lsrs	r6, r0, #24
	ands	r3, r6
	str	r3, [sp, #56]
	movs	r3, #48
	lsrs	r0, r0, #26
	ands	r3, r0
	movs	r0, #12
	lsrs	r5, r5, #28
	ands	r0, r5
	orrs	r3, r0
	lsrs	r4, r4, #30
	adds	r3, r3, r4
	str	r3, [sp, #60]
	ldr	r3, .L110
	mov	r9, r3
	ldr	r3, .L110+4
	mov	r8, r3
	ldr	r3, .L110+8
	mov	ip, r3
	movs	r3, #128
	lsls	r3, r3, #24
	mov	fp, r1
	mov	r4, sp
	movs	r0, #0
	movs	r5, #0
	mov	r10, r3
	ldr	r6, .L110+12
	b	.L92
.L86:
	ldr	r3, [r4, #4]
	cmp	r3, #0
	bne	.L108
.L89:
	adds	r0, r0, #2
	adds	r4, r4, #8
	cmp	r0, #16
	beq	.L109
.L92:
	ldr	r3, [r4]
	cmp	r3, #0
	beq	.L86
	mov	r1, r8
	lsls	r3, r3, #2
	add	r3, r3, r9
	str	r3, [r1]
	mov	r1, fp
	mov	r7, ip
	lsls	r3, r5, #2
	adds	r1, r1, r3
	str	r1, [r7]
	mov	r7, r10
	ldr	r1, [r4]
	lsls	r1, r1, #2
	lsrs	r1, r1, #1
	orrs	r1, r7
	str	r1, [r6]
	ldr	r1, [r6]
	ldr	r1, [r4]
	cmp	r1, #0
	beq	.L86
	adds	r5, r5, r1
	lsls	r1, r5, #2
	adds	r3, r2, r3
	adds	r1, r2, r1
.L88:
	stmia	r3!, {r0}
	cmp	r1, r3
	bne	.L88
	ldr	r3, [r4, #4]
	cmp	r3, #0
	beq	.L89
.L108:
	mov	r1, r8
	lsls	r3, r3, #2
	add	r3, r3, r9
	str	r3, [r1]
	mov	r1, fp
	mov	r7, ip
	lsls	r3, r5, #2
	adds	r1, r1, r3
	str	r1, [r7]
	mov	r7, r10
	ldr	r1, [r4, #4]
	lsls	r1, r1, #2
	lsrs	r1, r1, #1
	orrs	r1, r7
	str	r1, [r6]
	ldr	r7, [r4, #4]
	ldr	r1, [r6]
	cmp	r7, #0
	beq	.L89
	adds	r5, r5, r7
	lsls	r7, r5, #2
	adds	r1, r0, #1
	adds	r3, r2, r3
	adds	r7, r2, r7
.L91:
	stmia	r3!, {r1}
	cmp	r3, r7
	bne	.L91
	adds	r0, r0, #2
	adds	r4, r4, #8
	cmp	r0, #16
	bne	.L92
.L109:
	add	sp, sp, #64
	@ sp needed
	pop	{r4, r5, r6, r7}
	mov	fp, r7
	mov	r10, r6
	mov	r9, r5
	mov	r8, r4
	pop	{r4, r5, r6, r7}
	pop	{r0}
	bx	r0
.L111:
	.align	2
.L110:
	.word	ykTemplate
	.word	67109076
	.word	67109080
	.word	67109084
	.size	BuildDecompressionTable, .-BuildDecompressionTable
	.section	.sbss
	.type	sBitIndex, %object
	.size	sBitIndex, 1
sBitIndex:
	.space	1
	.align	2
	.type	sReadIndex, %object
	.size	sReadIndex, 4
sReadIndex:
	.space	4
	.align	2
	.type	sCurrState, %object
	.size	sCurrState, 4
sCurrState:
	.space	4
	.align	2
	.type	sMemoryAllocated, %object
	.size	sMemoryAllocated, 4
sMemoryAllocated:
	.space	4
	.text
	.align	1
	.p2align 2,,3
	.global	DecodeLOtANS
	.syntax unified
	.code	16
	.thumb_func
	.type	DecodeLOtANS, %function
DecodeLOtANS:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 28
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, lr}
	mov	r7, r10
	mov	r6, r9
	mov	r5, r8
	mov	lr, fp
	mov	r9, r0
	push	{r5, r6, r7, lr}
	movs	r4, r3
	ldr	r3, .L129
	ldr	r7, [r3]
	adds	r3, r7, #1
	adds	r3, r3, #255
	sub	sp, sp, #28
	str	r0, [sp, #16]
	movs	r5, r2
	movs	r0, r1
	movs	r2, r3
	movs	r1, r7
	mov	r8, r3
	bl	BuildDecompressionTable
	mov	r2, r9
	ldr	r6, .L129+4
	ldr	r3, [r6]
	mov	r10, r3
	lsls	r3, r3, #2
	ldr	r3, [r3, r2]
	mov	r9, r3
	cmp	r4, #0
	beq	.L112
	ldr	r1, .L129+8
	mov	ip, r1
	ldr	r2, .L129+12
	ldr	r3, [r2]
	adds	r0, r5, r4
	movs	r4, #0
	str	r2, [sp, #24]
	movs	r2, r3
	mov	r3, ip
	str	r4, [sp, #12]
	adds	r4, r4, #255
	mov	ip, r7
	mov	fp, r4
	movs	r7, r0
	movs	r0, r3
	ldrb	r1, [r1]
	str	r6, [sp, #20]
.L114:
	movs	r3, r0
	movs	r4, #0
	movs	r6, #0
	mov	r0, r9
	str	r7, [sp]
	str	r5, [sp, #4]
	str	r3, [sp, #8]
.L117:
	mov	r3, r8
	lsls	r2, r2, #2
	ldr	r3, [r3, r2]
	lsls	r3, r3, r4
	adds	r6, r6, r3
	movs	r3, #8
	mov	r7, fp
	add	r2, r2, ip
	ldrb	r5, [r2, #1]
	subs	r3, r3, r5
	asrs	r7, r7, r3
	movs	r3, r0
	lsrs	r3, r3, r1
	ldrb	r2, [r2]
	ands	r3, r7
	adds	r1, r1, r5
	adds	r2, r3, r2
	cmp	r1, #31
	bhi	.L115
	lsls	r1, r1, #24
	lsrs	r1, r1, #24
.L116:
	subs	r2, r2, #64
	cmp	r4, #4
	beq	.L128
.L121:
	movs	r4, #4
	b	.L117
.L115:
	movs	r3, #1
	mov	r9, r3
	add	r10, r10, r9
	mov	r3, r10
	ldr	r0, [sp, #16]
	lsls	r3, r3, #2
	ldr	r0, [r3, r0]
	cmp	r1, #32
	beq	.L120
	movs	r3, #1
	subs	r1, r1, #32
	rsbs	r3, r3, #0
	lsls	r3, r3, r1
	movs	r7, r0
	bics	r7, r3
	movs	r3, r7
	subs	r5, r5, r1
	lsls	r3, r3, r5
	adds	r2, r2, r3
	movs	r3, #1
	lsls	r1, r1, #24
	str	r3, [sp, #12]
	lsrs	r1, r1, #24
	subs	r2, r2, #64
	cmp	r4, #4
	bne	.L121
.L128:
	ldr	r5, [sp, #4]
	ldr	r3, [sp, #8]
	ldr	r7, [sp]
	strb	r6, [r5]
	adds	r5, r5, #1
	mov	r9, r0
	movs	r0, r3
	cmp	r7, r5
	bne	.L114
	mov	ip, r0
	ldr	r0, [sp, #12]
	movs	r3, r2
	ldr	r6, [sp, #20]
	ldr	r2, [sp, #24]
	cmp	r0, #0
	beq	.L119
	mov	r0, r10
	str	r0, [r6]
.L119:
	mov	r0, ip
	str	r3, [r2]
	strb	r1, [r0]
.L112:
	add	sp, sp, #28
	@ sp needed
	pop	{r4, r5, r6, r7}
	mov	fp, r7
	mov	r10, r6
	mov	r9, r5
	mov	r8, r4
	pop	{r4, r5, r6, r7}
	pop	{r0}
	bx	r0
.L120:
	movs	r3, #1
	movs	r1, #0
	str	r3, [sp, #12]
	b	.L116
.L130:
	.align	2
.L129:
	.word	sMemoryAllocated
	.word	sReadIndex
	.word	sBitIndex
	.word	sCurrState
	.size	DecodeLOtANS, .-DecodeLOtANS
	.align	1
	.p2align 2,,3
	.global	DecodeSymtANS
	.syntax unified
	.code	16
	.thumb_func
	.type	DecodeSymtANS, %function
DecodeSymtANS:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 28
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, lr}
	mov	r7, r10
	mov	r6, r9
	mov	r5, r8
	mov	lr, fp
	mov	r10, r0
	push	{r5, r6, r7, lr}
	movs	r4, r3
	ldr	r3, .L145
	ldr	r7, [r3]
	adds	r3, r7, #1
	adds	r3, r3, #255
	sub	sp, sp, #28
	str	r0, [sp, #4]
	movs	r5, r2
	movs	r0, r1
	movs	r2, r3
	movs	r1, r7
	mov	r8, r3
	bl	BuildDecompressionTable
	mov	r2, r10
	ldr	r6, .L145+4
	ldr	r3, [r6]
	mov	r9, r3
	lsls	r3, r3, #2
	ldr	r3, [r3, r2]
	mov	ip, r3
	cmp	r4, #0
	beq	.L131
	ldr	r2, .L145+8
	lsls	r4, r4, #1
	str	r2, [sp, #16]
	ldrb	r1, [r2]
	adds	r2, r5, r4
	movs	r4, #0
	mov	r10, r4
	adds	r4, r4, #8
	mov	fp, r4
	adds	r4, r4, #247
	str	r4, [sp]
	movs	r4, r7
	ldr	r0, .L145+12
	ldr	r3, [r0]
	mov	r7, ip
	str	r2, [sp, #12]
	str	r6, [sp, #20]
	movs	r2, r3
	movs	r6, r5
	mov	ip, r4
	str	r0, [sp, #24]
.L134:
	movs	r0, #0
	movs	r5, #0
	str	r6, [sp, #8]
.L137:
	mov	r3, r8
	lsls	r2, r2, #2
	ldr	r3, [r3, r2]
	lsls	r3, r3, r0
	adds	r5, r5, r3
	mov	r3, fp
	add	r2, r2, ip
	ldrb	r4, [r2, #1]
	ldr	r6, [sp]
	subs	r3, r3, r4
	asrs	r6, r6, r3
	movs	r3, r7
	lsrs	r3, r3, r1
	ldrb	r2, [r2]
	ands	r3, r6
	adds	r1, r1, r4
	adds	r2, r3, r2
	cmp	r1, #31
	bhi	.L135
	lsls	r1, r1, #24
	lsrs	r1, r1, #24
.L136:
	adds	r0, r0, #4
	subs	r2, r2, #64
	cmp	r0, #16
	bne	.L137
	ldr	r6, [sp, #8]
	ldr	r3, [sp, #12]
	strh	r5, [r6]
	adds	r6, r6, #2
	cmp	r3, r6
	bne	.L134
	movs	r3, r2
	ldr	r0, [sp, #24]
	str	r3, [r0]
	mov	r3, r10
	ldr	r2, [sp, #16]
	ldr	r6, [sp, #20]
	strb	r1, [r2]
	cmp	r3, #0
	beq	.L131
	mov	r3, r9
	str	r3, [r6]
.L131:
	add	sp, sp, #28
	@ sp needed
	pop	{r4, r5, r6, r7}
	mov	fp, r7
	mov	r10, r6
	mov	r9, r5
	mov	r8, r4
	pop	{r4, r5, r6, r7}
	pop	{r0}
	bx	r0
.L135:
	movs	r3, #1
	mov	r10, r3
	add	r9, r9, r10
	mov	r3, r9
	ldr	r6, [sp, #4]
	lsls	r3, r3, #2
	ldr	r7, [r3, r6]
	cmp	r1, #32
	beq	.L140
	movs	r3, #1
	subs	r1, r1, #32
	rsbs	r3, r3, #0
	lsls	r3, r3, r1
	movs	r6, r7
	bics	r6, r3
	movs	r3, r6
	subs	r4, r4, r1
	lsls	r3, r3, r4
	lsls	r1, r1, #24
	adds	r2, r2, r3
	lsrs	r1, r1, #24
	b	.L136
.L140:
	movs	r3, #1
	movs	r1, #0
	mov	r10, r3
	b	.L136
.L146:
	.align	2
.L145:
	.word	sMemoryAllocated
	.word	sReadIndex
	.word	sBitIndex
	.word	sCurrState
	.size	DecodeSymtANS, .-DecodeSymtANS
	.align	1
	.p2align 2,,3
	.global	DecodeSymDeltatANSLoop
	.syntax unified
	.code	16
	.thumb_func
	.type	DecodeSymDeltatANSLoop, %function
DecodeSymDeltatANSLoop:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 28
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, lr}
	mov	r5, r8
	mov	r6, r9
	mov	lr, fp
	mov	r7, r10
	ldr	r4, .L158
	ldr	r3, [r4]
	push	{r5, r6, r7, lr}
	mov	r8, r3
	lsls	r3, r3, #2
	ldr	r3, [r3, r0]
	mov	ip, r3
	ldr	r3, .L158+4
	sub	sp, sp, #28
	str	r0, [sp, #4]
	ldr	r5, [r1, #12]
	ldrb	r0, [r3]
	str	r3, [sp, #16]
	mov	r9, r2
	movs	r3, r0
	cmp	r5, #0
	beq	.L148
	ldr	r3, [r1, #4]
	ldr	r7, .L158+8
	ldr	r2, [r1, #8]
	mov	fp, r3
	mov	r10, r2
	ldr	r3, [r7]
	ldr	r2, [r1]
	movs	r6, #15
	lsls	r5, r5, #1
	adds	r5, r5, r2
	str	r7, [sp, #20]
	movs	r1, #0
	movs	r7, r2
	movs	r2, r3
	str	r6, [sp]
	str	r5, [sp, #12]
	str	r4, [sp, #24]
.L149:
	movs	r4, #0
	movs	r6, #0
	str	r7, [sp, #8]
.L151:
	mov	r3, fp
	lsls	r2, r2, #2
	ldr	r3, [r3, r2]
	adds	r1, r1, r3
	ldr	r3, [sp]
	ands	r1, r3
	movs	r3, r1
	lsls	r3, r3, r4
	adds	r6, r6, r3
	mov	r3, r9
	add	r2, r2, r10
	ldrb	r5, [r2, #1]
	ldrb	r7, [r3, r5]
	mov	r3, ip
	lsrs	r3, r3, r0
	ldrb	r2, [r2]
	ands	r3, r7
	adds	r0, r0, r5
	adds	r2, r3, r2
	cmp	r0, #31
	bls	.L150
	movs	r3, #1
	mov	ip, r3
	add	r8, r8, ip
	mov	r3, r8
	ldr	r7, [sp, #4]
	lsls	r3, r3, #2
	ldr	r3, [r3, r7]
	mov	ip, r3
	cmp	r0, #32
	beq	.L153
	movs	r3, #1
	subs	r0, r0, #32
	rsbs	r3, r3, #0
	lsls	r3, r3, r0
	mov	r7, ip
	bics	r7, r3
	movs	r3, r7
	subs	r5, r5, r0
	lsls	r3, r3, r5
	adds	r2, r2, r3
.L150:
	adds	r4, r4, #4
	subs	r2, r2, #64
	cmp	r4, #16
	bne	.L151
	ldr	r7, [sp, #8]
	ldr	r3, [sp, #12]
	strh	r6, [r7]
	adds	r7, r7, #2
	cmp	r3, r7
	bne	.L149
	ldr	r7, [sp, #20]
	lsls	r0, r0, #24
	ldr	r4, [sp, #24]
	str	r2, [r7]
	lsrs	r3, r0, #24
.L148:
	ldr	r2, [sp, #16]
	strb	r3, [r2]
	mov	r3, r8
	str	r3, [r4]
	add	sp, sp, #28
	@ sp needed
	pop	{r4, r5, r6, r7}
	mov	fp, r7
	mov	r10, r6
	mov	r9, r5
	mov	r8, r4
	pop	{r4, r5, r6, r7}
	pop	{r0}
	bx	r0
.L153:
	movs	r0, #0
	b	.L150
.L159:
	.align	2
.L158:
	.word	sReadIndex
	.word	sBitIndex
	.word	sCurrState
	.size	DecodeSymDeltatANSLoop, .-DecodeSymDeltatANSLoop
	.align	1
	.p2align 2,,3
	.global	DecodeSymDeltatANS
	.syntax unified
	.code	16
	.thumb_func
	.type	DecodeSymDeltatANS, %function
DecodeSymDeltatANS:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 1424
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, lr}
	mov	lr, r8
	push	{lr}
	ldr	r4, .L163
	add	sp, sp, r4
	movs	r4, r3
	ldr	r3, .L163+4
	ldr	r6, [r3]
	adds	r3, r6, #1
	adds	r3, r3, #255
	movs	r7, r2
	movs	r5, r0
	movs	r2, r3
	movs	r0, r1
	movs	r1, r6
	mov	r8, r3
	bl	BuildDecompressionTable
	mov	r2, sp
	ldr	r3, .L163+8
	str	r3, [sp]
	ldr	r3, .L163+12
	strh	r3, [r2, #4]
	movs	r3, #63
	strb	r3, [r2, #6]
	mov	r3, r8
	str	r4, [sp, #20]
	str	r3, [sp, #12]
	str	r7, [sp, #8]
	str	r6, [sp, #16]
	ldr	r3, .L163+16
	ldr	r4, .L163+20
	add	r2, sp, #24
.L161:
	ldmia	r3!, {r1}
	stmia	r2!, {r1}
	cmp	r3, r4
	bne	.L161
	movs	r3, #25
	mov	r2, sp
	movs	r0, r5
	add	r1, sp, #8
	add	r3, r3, sp
	bl	.L165
	movs	r3, #178
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
	.word	-1424
	.word	sMemoryAllocated
	.word	117637376
	.word	7951
	.word	DecodeSymDeltatANSLoop
	.word	DecodeSymDeltatANS
	.size	DecodeSymDeltatANS, .-DecodeSymDeltatANS
	.align	2
	.global	DecodeInstructions
	.syntax unified
	.code	16
	.thumb_func
	.type	DecodeInstructions, %function
DecodeInstructions:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 12
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, lr}
	mov	r6, r9
	mov	lr, fp
	mov	r7, r10
	mov	r5, r8
	push	{r5, r6, r7, lr}
	sub	sp, sp, #12
	mov	r9, r0
	str	r2, [sp]
	movs	r2, #0
	mov	ip, r2
	mov	r2, r9
	movs	r0, #0
	cmp	r2, #0
	beq	.L166
	movs	r2, #127
	mov	r8, r2
	ldr	r2, .L180
	mov	fp, r2
	ldr	r2, .L180+4
	ldr	r7, .L180+8
	str	r2, [sp, #4]
	b	.L167
.L179:
	ldrh	r5, [r4]
	adds	r4, r3, #2
	strh	r5, [r3]
	lsls	r3, r6, #1
	adds	r3, r4, r3
	cmp	r2, #1
	beq	.L178
	mov	r5, fp
	lsls	r2, r2, #1
	subs	r2, r4, r2
	str	r2, [r5]
	ldr	r2, [sp, #4]
	str	r4, [r2]
	movs	r2, #128
	lsls	r2, r2, #24
	orrs	r6, r2
	str	r6, [r7]
	ldr	r2, [r7]
.L172:
	movs	r2, #1
	mov	r10, r2
	add	ip, ip, r10
	cmp	r0, r9
	bcs	.L166
.L167:
	mov	r6, r8
	ldrb	r2, [r1, r0]
	adds	r5, r0, #1
	ands	r6, r2
	ldrb	r4, [r1, r5]
	lsls	r2, r2, #24
	bpl	.L168
	lsls	r4, r4, #7
	adds	r6, r6, r4
	adds	r5, r0, #2
.L168:
	mov	r2, r8
	ldrb	r4, [r1, r5]
	adds	r0, r5, #1
	ands	r2, r4
	lsls	r4, r4, #24
	bpl	.L169
	ldrb	r0, [r1, r0]
	lsls	r0, r0, #7
	adds	r2, r2, r0
	adds	r0, r5, #2
.L169:
	ldr	r5, [sp]
	mov	r4, ip
	mov	r10, r5
	lsls	r4, r4, #1
	add	r4, r4, r10
	cmp	r6, #0
	bne	.L179
	mov	r5, fp
	str	r4, [r5]
	ldr	r4, [sp, #4]
	str	r3, [r4]
	movs	r4, #128
	lsls	r4, r4, #24
	orrs	r4, r2
	str	r4, [r7]
	ldr	r4, [r7]
	lsls	r4, r2, #1
	adds	r3, r3, r4
	add	ip, ip, r2
	cmp	r0, r9
	bcc	.L167
.L166:
	add	sp, sp, #12
	@ sp needed
	pop	{r4, r5, r6, r7}
	mov	fp, r7
	mov	r10, r6
	mov	r9, r5
	mov	r8, r4
	pop	{r4, r5, r6, r7}
	pop	{r0}
	bx	r0
.L178:
	add	r2, sp, #8
	strh	r5, [r2, #2]
	mov	r2, fp
	add	r5, sp, #8
	adds	r5, r5, #2
	str	r5, [r2]
	ldr	r2, [sp, #4]
	str	r4, [r2]
	movs	r2, #129
	lsls	r2, r2, #24
	orrs	r6, r2
	str	r6, [r7]
	ldr	r2, [r7]
	b	.L172
.L181:
	.align	2
.L180:
	.word	67109076
	.word	67109080
	.word	67109084
	.size	DecodeInstructions, .-DecodeInstructions
	.align	2
	.global	DecodeInstructionsIwram
	.syntax unified
	.code	16
	.thumb_func
	.type	DecodeInstructionsIwram, %function
DecodeInstructionsIwram:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 1400
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, lr}
	ldr	r4, .L185
	add	sp, sp, r4
	mov	r5, sp
	ldr	r4, .L185+4
	ldr	r7, .L185+8
.L183:
	ldmia	r4!, {r6}
	stmia	r5!, {r6}
	cmp	r4, r7
	bne	.L183
	mov	r4, sp
	adds	r4, r4, #1
	bl	.L187
	movs	r3, #175
	lsls	r3, r3, #3
	add	sp, sp, r3
	@ sp needed
	pop	{r4, r5, r6, r7}
	pop	{r0}
	bx	r0
.L186:
	.align	2
.L185:
	.word	-1400
	.word	DecodeInstructions
	.word	DecodeInstructionsIwram
	.size	DecodeInstructionsIwram, .-DecodeInstructionsIwram
	.section	.rodata.str1.4,"aMS",%progbits,1
	.align	2
.LC23:
	.ascii	"src/decompress.c:629\000"
	.text
	.align	1
	.p2align 2,,3
	.global	SmolDecompressData
	.syntax unified
	.code	16
	.thumb_func
	.type	SmolDecompressData, %function
SmolDecompressData:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 16
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, lr}
	mov	lr, fp
	mov	r7, r10
	mov	r6, r9
	mov	r5, r8
	push	{r5, r6, r7, lr}
	sub	sp, sp, #16
	str	r2, [sp, #4]
	movs	r2, #0
	ldr	r3, .L214
	str	r2, [r3]
	mov	r8, r3
	ldrb	r3, [r0, #4]
	ldr	r2, .L214+4
	lsls	r3, r3, #26
	lsrs	r3, r3, #26
	str	r3, [r2]
	ldrh	r3, [r0, #2]
	lsls	r3, r3, #17
	lsrs	r3, r3, #17
	ldrh	r7, [r0, #6]
	adds	r6, r3, #1
	adds	r6, r6, #255
	lsls	r6, r6, #1
	lsrs	r7, r7, #3
	movs	r4, r0
	movs	r5, r1
	adds	r0, r6, r7
	ldr	r1, .L214+8
	mov	fp, r3
	bl	Alloc_
	ldr	r3, .L214+12
	mov	r10, r3
	str	r0, [r3]
	movs	r3, #128
	lsls	r3, r3, #2
	mov	r9, r3
	adds	r3, r0, r6
	str	r3, [sp]
	ldrb	r3, [r4]
	lsls	r3, r3, #27
	lsrs	r3, r3, #27
	subs	r2, r3, #3
	add	r9, r9, r0
	cmp	r2, #2
	bls	.L189
	cmp	r3, #3
	bhi	.L190
	movs	r1, r3
	movs	r2, #31
	adds	r1, r1, #31
	ands	r2, r1
	cmp	r2, #1
	bhi	.L190
	subs	r3, r3, #2
	rsbs	r2, r3, #0
	adcs	r2, r2, r3
	mov	r3, r8
	ldr	r3, [r3]
	str	r2, [sp, #8]
	lsls	r2, r3, #2
	adds	r2, r5, r2
	str	r2, [sp, #12]
	mov	r2, r8
	adds	r3, r3, #3
	str	r3, [r2]
	movs	r2, #0
	movs	r6, #0
	ldr	r3, .L214+16
	strb	r2, [r3]
.L196:
	ldr	r3, [sp, #8]
	cmp	r3, #0
	beq	.L212
	mov	r3, fp
	mov	r2, r9
	movs	r0, r5
	ldr	r1, [sp, #12]
	bl	DecodeSymDeltatANS
.L211:
	ldr	r3, [r4, #4]
	lsls	r3, r3, #13
	lsrs	r3, r3, #19
	lsls	r3, r3, #2
	adds	r1, r5, r3
	cmp	r6, #0
	beq	.L202
.L201:
	mov	r2, r9
	movs	r0, r7
	ldr	r3, [sp, #4]
	ldr	r1, [sp]
	bl	DecodeInstructionsIwram
	mov	r3, r10
	ldr	r0, [r3]
	bl	Free
	add	sp, sp, #16
	@ sp needed
	pop	{r4, r5, r6, r7}
	mov	fp, r7
	mov	r10, r6
	mov	r9, r5
	mov	r8, r4
	pop	{r4, r5, r6, r7}
	pop	{r0}
	bx	r0
.L190:
	movs	r2, #0
	ldr	r3, .L214+16
	mov	r1, r9
	strb	r2, [r3]
	movs	r0, r5
	mov	r2, fp
	bl	CpuSet
	ldr	r3, .L214+20
	mov	ip, r3
	add	r6, r6, ip
	adds	r1, r5, r6
.L202:
	movs	r2, r7
	ldr	r0, [sp]
	bl	memcpy
	b	.L201
.L189:
	cmp	r3, #4
	beq	.L203
	movs	r2, #1
	str	r2, [sp, #8]
	cmp	r3, #5
	bne	.L213
.L192:
	mov	r3, r8
	movs	r6, #1
	ldr	r3, [r3]
	lsls	r2, r3, #2
	adds	r1, r5, r2
	adds	r2, r2, #12
	adds	r2, r5, r2
	str	r2, [sp, #12]
	adds	r3, r3, #6
.L195:
	mov	r2, r8
	str	r3, [r2]
	movs	r2, #0
	ldr	r3, .L214+16
	movs	r0, r5
	strb	r2, [r3]
	movs	r3, r7
	ldr	r2, [sp]
	bl	DecodeLOtANS
	cmp	r6, #0
	bne	.L196
	ldr	r0, [r4, #4]
	lsls	r0, r0, #13
	lsrs	r0, r0, #19
	lsls	r0, r0, #2
	mov	r2, fp
	mov	r1, r9
	adds	r0, r5, r0
	bl	CpuSet
	b	.L201
.L213:
	mov	r3, r8
	movs	r2, #0
	ldr	r3, [r3]
	lsls	r1, r3, #2
	movs	r6, #0
	str	r2, [sp, #8]
	adds	r1, r5, r1
	adds	r3, r3, #3
	b	.L195
.L212:
	mov	r3, fp
	mov	r2, r9
	movs	r0, r5
	ldr	r1, [sp, #12]
	bl	DecodeSymtANS
	b	.L211
.L203:
	movs	r3, #0
	str	r3, [sp, #8]
	b	.L192
.L215:
	.align	2
.L214:
	.word	sReadIndex
	.word	sCurrState
	.word	.LC23
	.word	sMemoryAllocated
	.word	sBitIndex
	.word	-512
	.size	SmolDecompressData, .-SmolDecompressData
	.align	1
	.p2align 2,,3
	.global	isModeLoEncoded
	.syntax unified
	.code	16
	.thumb_func
	.type	isModeLoEncoded, %function
isModeLoEncoded:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	subs	r3, r0, #3
	movs	r2, #2
	@ sp needed
	movs	r0, #0
	cmp	r2, r3
	adcs	r0, r0, r0
	bx	lr
	.size	isModeLoEncoded, .-isModeLoEncoded
	.align	1
	.p2align 2,,3
	.global	isModeSymEncoded
	.syntax unified
	.code	16
	.thumb_func
	.type	isModeSymEncoded, %function
isModeSymEncoded:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	movs	r3, #0
	push	{r4, lr}
	movs	r1, #1
	@ sp needed
	movs	r4, r3
	subs	r2, r0, #1
	cmp	r1, r2
	adcs	r4, r4, r3
	subs	r0, r0, #4
	cmp	r1, r0
	adcs	r3, r3, r3
	movs	r2, r4
	orrs	r2, r3
	movs	r0, r2
	pop	{r4}
	pop	{r1}
	bx	r1
	.size	isModeSymEncoded, .-isModeSymEncoded
	.align	1
	.p2align 2,,3
	.global	isModeSymDelta
	.syntax unified
	.code	16
	.thumb_func
	.type	isModeSymDelta, %function
isModeSymDelta:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
	movs	r3, r0
	@ sp needed
	subs	r0, r0, #2
	subs	r3, r3, #5
	rsbs	r2, r0, #0
	adcs	r0, r0, r2
	rsbs	r2, r3, #0
	adcs	r3, r3, r2
	orrs	r0, r3
	bx	lr
	.size	isModeSymDelta, .-isModeSymDelta
	.align	1
	.p2align 2,,3
	.global	LoadSpecialPokePic
	.syntax unified
	.code	16
	.thumb_func
	.type	LoadSpecialPokePic, %function
LoadSpecialPokePic:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, lr}
	mov	lr, r9
	mov	r7, r8
	push	{r7, lr}
	lsls	r1, r1, #16
	movs	r6, r0
	sub	sp, sp, #8
	lsrs	r0, r1, #16
	lsls	r5, r3, #24
	movs	r7, r2
	bl	SanitizeSpeciesId
	lsrs	r5, r5, #24
	movs	r4, r0
	cmp	r0, #201
	beq	.L258
.L220:
	ldr	r3, .L265
	mov	r8, r3
	cmp	r5, #0
	beq	.L221
	lsls	r5, r4, #6
	adds	r3, r5, r4
	lsls	r3, r3, #2
	add	r3, r3, r8
	ldr	r3, [r3, #108]
	mov	r9, r3
	cmp	r3, #0
	beq	.L222
	lsls	r0, r4, #16
	movs	r1, r7
	lsrs	r0, r0, #16
	bl	IsPersonalityFemale
	cmp	r0, #0
	bne	.L259
.L222:
	adds	r5, r5, r4
	lsls	r5, r5, #2
	add	r5, r5, r8
	ldr	r5, [r5, #88]
	cmp	r5, #0
	bne	.LCB2091
	b	.L226	@long jump
.LCB2091:
.L255:
	mov	r1, sp
	movs	r0, r5
	ldr	r2, .L265+4
	bl	CpuSet
	mov	r3, sp
	ldrb	r3, [r3]
	lsls	r3, r3, #27
	lsrs	r3, r3, #27
	cmp	r3, #16
	beq	.L260
	movs	r1, r5
	movs	r2, r6
	mov	r0, sp
	adds	r1, r1, #8
	bl	SmolDecompressData
.L225:
	movs	r3, #72
	adds	r3, r3, #255
	cmp	r4, r3
	bne	.L219
	movs	r2, #0
	movs	r1, r6
	movs	r0, r7
	bl	DrawSpindaSpots
	movs	r2, #1
	movs	r1, r6
	movs	r0, r7
	bl	DrawSpindaSpots
.L219:
	add	sp, sp, #8
	@ sp needed
	pop	{r6, r7}
	mov	r9, r7
	mov	r8, r6
	pop	{r4, r5, r6, r7}
	pop	{r0}
	bx	r0
.L221:
	lsls	r5, r4, #6
	adds	r3, r5, r4
	lsls	r3, r3, #2
	add	r3, r3, r8
	ldr	r3, [r3, #112]
	mov	r9, r3
	cmp	r3, #0
	beq	.L231
	lsls	r0, r4, #16
	movs	r1, r7
	lsrs	r0, r0, #16
	bl	IsPersonalityFemale
	cmp	r0, #0
	bne	.L261
.L231:
	adds	r5, r5, r4
	lsls	r5, r5, #2
	add	r5, r5, r8
	ldr	r4, [r5, #92]
	cmp	r4, #0
	beq	.L235
.L257:
	mov	r1, sp
	movs	r0, r4
	ldr	r2, .L265+4
	bl	CpuSet
	mov	r3, sp
	ldrb	r3, [r3]
	lsls	r3, r3, #27
	lsrs	r3, r3, #27
	cmp	r3, #16
	beq	.L262
	movs	r1, r4
	movs	r2, r6
	mov	r0, sp
	adds	r1, r1, #8
	bl	SmolDecompressData
	b	.L219
.L258:
	movs	r0, r7
	bl	GetUnownSpeciesId
	movs	r4, r0
	b	.L220
.L261:
	mov	r1, sp
	mov	r0, r9
	ldr	r2, .L265+4
	bl	CpuSet
	mov	r3, sp
	ldrb	r3, [r3]
	lsls	r3, r3, #27
	lsrs	r3, r3, #27
	cmp	r3, #16
	beq	.L263
	mov	r1, r9
	movs	r2, r6
	mov	r0, sp
	adds	r1, r1, #8
	bl	SmolDecompressData
	b	.L219
.L259:
	mov	r1, sp
	mov	r0, r9
	ldr	r2, .L265+4
	bl	CpuSet
	mov	r3, sp
	ldrb	r3, [r3]
	lsls	r3, r3, #27
	lsrs	r3, r3, #27
	cmp	r3, #16
	beq	.L264
	mov	r1, r9
	movs	r2, r6
	mov	r0, sp
	adds	r1, r1, #8
	bl	SmolDecompressData
	b	.L225
.L260:
	movs	r1, r6
	movs	r0, r5
	bl	LZ77UnCompWram
	b	.L225
.L262:
	movs	r1, r6
	movs	r0, r4
	bl	LZ77UnCompWram
	b	.L219
.L226:
	mov	r3, r8
	ldr	r5, [r3, #88]
	b	.L255
.L235:
	mov	r3, r8
	ldr	r4, [r3, #92]
	b	.L257
.L263:
	movs	r1, r6
	mov	r0, r9
	bl	LZ77UnCompWram
	b	.L219
.L264:
	movs	r1, r6
	mov	r0, r9
	bl	LZ77UnCompWram
	b	.L225
.L266:
	.align	2
.L265:
	.word	gSpeciesInfo
	.word	67108866
	.size	LoadSpecialPokePic, .-LoadSpecialPokePic
	.align	1
	.p2align 2,,3
	.global	Unused_LZDecompressWramIndirect
	.syntax unified
	.code	16
	.thumb_func
	.type	Unused_LZDecompressWramIndirect, %function
Unused_LZDecompressWramIndirect:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 8
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, lr}
	ldr	r4, [r0]
	sub	sp, sp, #8
	movs	r5, r1
	movs	r0, r4
	mov	r1, sp
	ldr	r2, .L271
	bl	CpuSet
	mov	r3, sp
	ldrb	r3, [r3]
	lsls	r3, r3, #27
	lsrs	r3, r3, #27
	cmp	r3, #16
	beq	.L270
	movs	r1, r4
	movs	r2, r5
	mov	r0, sp
	adds	r1, r1, #8
	bl	SmolDecompressData
.L267:
	add	sp, sp, #8
	@ sp needed
	pop	{r4, r5}
	pop	{r0}
	bx	r0
.L270:
	movs	r1, r5
	movs	r0, r4
	bl	LZ77UnCompWram
	b	.L267
.L272:
	.align	2
.L271:
	.word	67108866
	.size	Unused_LZDecompressWramIndirect, .-Unused_LZDecompressWramIndirect
	.align	1
	.p2align 2,,3
	.syntax unified
	.code	16
	.thumb_func
	.type	StitchObjectsOn8x8Canvas, %function
StitchObjectsOn8x8Canvas:
	@ Function supports interworking.
	@ args = 0, pretend = 0, frame = 40
	@ frame_needed = 0, uses_anonymous_args = 0
	push	{r4, r5, r6, r7, lr}
	mov	r7, r10
	mov	r5, r8
	mov	lr, fp
	mov	r6, r9
	push	{r5, r6, r7, lr}
	sub	sp, sp, #40
	movs	r5, r2
	movs	r7, r3
	str	r1, [sp, #20]
	lsls	r3, r0, #31
	bmi	.L274
	movs	r3, #0
	lsls	r4, r0, #5
	mov	r8, r3
	cmp	r1, #0
	ble	.L273
	mov	r9, r0
.L314:
	mov	r3, r9
	cmp	r3, #6
	beq	.L337
	cmp	r3, #0
	ble	.L307
	movs	r3, #0
	mov	r10, r3
	mov	r3, r9
	cmp	r3, #6
	beq	.L330
.L311:
	movs	r3, #0
.L309:
	ldrb	r2, [r5]
	adds	r3, r3, #1
	movs	r6, r7
	strb	r2, [r7]
	adds	r5, r5, #1
	adds	r7, r7, #1
	cmp	r3, r4
	blt	.L309
	mov	r3, r9
	cmp	r3, #6
	beq	.L310
	movs	r3, #1
	mov	ip, r3
	add	r10, r10, ip
	cmp	r10, r9
	bne	.L311
.L307:
	movs	r3, #1
	mov	ip, r3
	ldr	r3, [sp, #20]
	add	r8, r8, ip
	cmp	r3, r8
	bne	.L314
.L273:
	add	sp, sp, #40
	@ sp needed
	pop	{r4, r5, r6, r7}
	mov	fp, r7
	mov	r10, r6
	mov	r9, r5
	mov	r8, r4
	pop	{r4, r5, r6, r7}
	pop	{r0}
	bx	r0
.L337:
	movs	r2, #128
	movs	r0, r7
	movs	r1, #0
	lsls	r2, r2, #1
	bl	memset
	adds	r7, r7, #1
	adds	r7, r7, #255
.L330:
	movs	r3, #0
	mov	r10, r3
.L312:
	movs	r0, r7
	movs	r2, #32
	movs	r1, #0
	bl	memset
	adds	r7, r7, #32
	b	.L311
.L310:
	movs	r0, r7
	movs	r2, #32
	movs	r1, #0
	bl	memset
	movs	r3, #1
	mov	ip, r3
	add	r10, r10, ip
	movs	r7, r6
	mov	r3, r10
	adds	r7, r7, #33
	cmp	r3, #6
	bne	.L312
	movs	r2, #128
	movs	r0, r7
	movs	r1, #0
	lsls	r2, r2, #1
	bl	memset
	movs	r3, #1
	mov	ip, r3
	adds	r6, r6, #34
	ldr	r3, [sp, #20]
	adds	r6, r6, #255
	add	r8, r8, ip
	movs	r7, r6
	cmp	r3, r8
	bne	.L314
	b	.L273
.L274:
	asrs	r3, r0, #1
	adds	r3, r3, #4
	ldr	r1, [sp, #20]
	lsls	r3, r3, #24
	lsrs	r3, r3, #24
	cmp	r1, #0
	ble	.L273
	lsls	r3, r3, #8
	adds	r1, r3, #1
	adds	r1, r1, #255
	mov	fp, r1
	movs	r1, #16
	mov	r10, r1
	add	r10, r10, r3
	movs	r3, #8
	subs	r3, r3, r0
	str	r3, [sp, #8]
	cmp	r0, #0
	bgt	.LCB2489
	b	.L277	@long jump
.LCB2489:
	lsls	r3, r0, #5
	str	r3, [sp, #28]
	subs	r3, r0, #1
	lsls	r3, r3, #5
	str	r3, [sp, #12]
.L280:
	movs	r3, #0
	movs	r4, #0
	mov	ip, r0
	movs	r1, r5
	str	r3, [sp, #24]
	str	r7, [sp, #4]
.L281:
	movs	r0, #1
	ldr	r2, [sp, #4]
	mov	r9, r0
	ldr	r0, [sp, #8]
	movs	r3, #0
	adds	r2, r2, #16
	cmp	r0, #0
	ble	.L288
	mov	r0, ip
	str	r1, [sp, #36]
	ldr	r1, [sp, #4]
	str	r2, [sp, #16]
	mov	r8, r1
	movs	r2, r3
	str	r0, [sp, #32]
.L304:
	mov	r3, r9
	ands	r3, r2
	mov	ip, r3
	asrs	r0, r2, #1
	ldr	r3, [sp, #16]
	lsls	r0, r0, #8
	adds	r5, r3, r0
	str	r2, [sp]
	adds	r3, r0, #1
	adds	r3, r3, #255
.L289:
	mov	r1, r10
	mov	r2, r8
	adds	r6, r0, r1
	mov	r1, ip
	adds	r2, r2, r0
	cmp	r1, #0
	bne	.LCB2540
	b	.L282	@long jump
.LCB2540:
	movs	r7, r0
	mov	r1, fp
	adds	r7, r7, #16
	adds	r6, r1, r0
.L284:
	subs	r1, r2, r0
	adds	r2, r2, #1
	strb	r4, [r1, r7]
	strb	r4, [r1, r6]
	cmp	r2, r5
	bne	.L284
.L283:
	adds	r0, r0, #32
	adds	r5, r5, #32
	cmp	r3, r0
	bne	.L289
	ldr	r2, [sp]
	ldr	r3, [sp, #8]
	adds	r2, r2, #1
	cmp	r2, r3
	bne	.L304
	ldr	r3, [sp, #32]
	mov	ip, r3
	ldr	r1, [sp, #36]
.L288:
	movs	r2, #128
	ldr	r6, [sp, #4]
	lsls	r2, r2, #4
	mov	r8, r2
	movs	r3, r6
	add	r3, r3, r8
	movs	r5, r3
	mov	r7, ip
	mov	r8, r1
.L290:
	movs	r2, #32
	movs	r1, #0
	movs	r0, r6
	bl	memset
	movs	r0, r6
	adds	r6, r6, #1
	movs	r2, #32
	movs	r1, #0
	adds	r0, r0, #192
	adds	r6, r6, #255
	bl	memset
	cmp	r6, r5
	bne	.L290
	movs	r2, #130
	lsls	r2, r2, #4
	mov	r1, r8
	mov	r8, r2
	ldr	r3, [sp, #4]
	movs	r6, r3
	add	r3, r3, r8
	movs	r5, r3
	mov	r8, r1
	adds	r6, r6, #32
.L291:
	movs	r2, #32
	movs	r1, #0
	movs	r0, r6
	bl	memset
	movs	r0, r6
	adds	r6, r6, #1
	movs	r2, #32
	movs	r1, #0
	adds	r0, r0, #192
	adds	r6, r6, #255
	bl	memset
	cmp	r6, r5
	bne	.L291
	mov	ip, r7
	mov	r1, r8
	cmp	r7, #5
	beq	.L338
	cmp	r7, #0
	ble	.L294
.L293:
	mov	r2, fp
	movs	r3, #0
	str	r2, [sp, #16]
	mov	r2, r10
	str	r3, [sp]
	ldr	r3, [sp, #28]
	str	r2, [sp, #32]
	mov	r9, r3
	movs	r2, r1
	ldr	r6, [sp, #4]
.L295:
	mov	r8, r2
	movs	r1, #0
	movs	r7, r2
	mov	r10, r2
	mov	fp, r6
	movs	r2, r6
	mov	r6, r8
	mov	r8, r1
	mov	r1, r9
	adds	r7, r7, #16
.L302:
	movs	r3, r2
	movs	r0, r6
	mov	r9, r1
	adds	r5, r2, #3
	adds	r3, r3, #18
	adds	r5, r5, #255
.L296:
	ldrb	r1, [r0]
	strb	r1, [r3]
	ldrb	r1, [r0, #1]
	strb	r1, [r3, #1]
	ldrb	r1, [r0, #2]
	strb	r1, [r3, #30]
	ldrb	r1, [r0, #3]
	strb	r1, [r3, #31]
	ldrb	r1, [r0, #16]
	strb	r1, [r5]
	ldrb	r1, [r0, #17]
	strb	r1, [r5, #1]
	ldrb	r1, [r0, #18]
	strb	r1, [r5, #30]
	ldrb	r1, [r0, #19]
	adds	r0, r0, #4
	strb	r1, [r5, #31]
	adds	r3, r3, #4
	adds	r5, r5, #4
	cmp	r0, r7
	bne	.L296
	movs	r3, #1
	mov	r1, r9
	mov	r9, r3
	adds	r0, r0, #32
	add	r8, r8, r9
	movs	r7, r0
	adds	r6, r6, #32
	adds	r2, r2, #32
	cmp	ip, r8
	bgt	.L302
	mov	r9, r1
	mov	r2, r10
	mov	r6, fp
	mov	r1, ip
	ldr	r3, [sp, #12]
	add	r2, r2, r9
	adds	r3, r6, r3
	cmp	r1, #7
	beq	.L339
	add	r6, r6, r9
	cmp	r1, #5
	bne	.L299
	adds	r3, r3, #128
	movs	r6, r3
.L299:
	ldr	r3, [sp]
	adds	r3, r3, #1
	str	r3, [sp]
	cmp	ip, r3
	bgt	.L295
	ldr	r3, [sp, #16]
	mov	fp, r3
	ldr	r3, [sp, #32]
	mov	r10, r3
	mov	r3, ip
	movs	r1, r2
	str	r6, [sp, #4]
	cmp	r3, #7
	beq	.L340
	cmp	r3, #5
	bne	.L294
	ldr	r3, [sp, #4]
	adds	r3, r3, #225
	adds	r3, r3, #255
	str	r3, [sp, #4]
.L294:
	ldr	r3, [sp, #24]
	ldr	r2, [sp, #20]
	adds	r3, r3, #1
	str	r3, [sp, #24]
	cmp	r2, r3
	beq	.LCB2730
	b	.L281	@long jump
.LCB2730:
	b	.L273
.L282:
	strb	r4, [r2]
	subs	r1, r2, r0
	adds	r2, r2, #1
	strb	r4, [r1, r6]
	cmp	r5, r2
	bne	.LCB2740
	b	.L283	@long jump
.LCB2740:
	strb	r4, [r2]
	subs	r1, r2, r0
	adds	r2, r2, #1
	strb	r4, [r1, r6]
	cmp	r5, r2
	bne	.L282
	b	.L283
.L339:
	adds	r3, r3, #64
	movs	r6, r3
	b	.L299
.L340:
	movs	r3, r6
	adds	r3, r3, #1
	adds	r3, r3, #255
	str	r3, [sp, #4]
	b	.L294
.L338:
	ldr	r3, [sp, #4]
	adds	r3, r3, #33
	adds	r3, r3, #255
	str	r3, [sp, #4]
	b	.L293
.L277:
	movs	r3, #32
	str	r3, [sp, #28]
	movs	r3, #0
	str	r3, [sp, #12]
	b	.L280
	.size	StitchObjectsOn8x8Canvas, .-StitchObjectsOn8x8Canvas
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
	movs	r3, #31
	ldrb	r2, [r0]
	ands	r3, r2
	cmp	r3, #16
	beq	.L344
	ldrh	r0, [r0]
	lsrs	r0, r0, #5
	lsls	r0, r0, #5
.L341:
	@ sp needed
	bx	lr
.L344:
	ldrb	r3, [r0, #3]
	ldrb	r2, [r0, #2]
	lsls	r3, r3, #16
	ldrb	r0, [r0, #1]
	lsls	r2, r2, #8
	orrs	r3, r2
	orrs	r0, r3
	b	.L341
	.size	GetDecompressedDataSize, .-GetDecompressedDataSize
	.section	.rodata.str1.4
	.align	2
.LC28:
	.ascii	"src/decompress.c:933\000"
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
	push	{r4, r5, r6, lr}
	ldr	r3, [r0]
	movs	r5, r0
	ldr	r0, [r3]
	sub	sp, sp, #8
	ldr	r1, .L349
	lsrs	r0, r0, #8
	bl	AllocZeroed_
	ldr	r6, [r5]
	movs	r4, r0
	mov	r1, sp
	movs	r0, r6
	ldr	r2, .L349+4
	bl	CpuSet
	mov	r3, sp
	ldrb	r3, [r3]
	lsls	r3, r3, #27
	lsrs	r3, r3, #27
	cmp	r3, #16
	beq	.L348
	movs	r1, r6
	movs	r2, r4
	mov	r0, sp
	adds	r1, r1, #8
	bl	SmolDecompressData
.L347:
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
	pop	{r4, r5, r6}
	pop	{r1}
	bx	r1
.L348:
	movs	r1, r4
	movs	r0, r6
	bl	LZ77UnCompWram
	b	.L347
.L350:
	.align	2
.L349:
	.word	.LC28
	.word	67108866
	.size	LoadCompressedSpriteSheetUsingHeap, .-LoadCompressedSpriteSheetUsingHeap
	.section	.rodata.str1.4
	.align	2
.LC30:
	.ascii	"src/decompress.c:950\000"
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
	push	{r4, r5, r6, lr}
	ldr	r3, [r0]
	movs	r5, r0
	ldr	r0, [r3]
	sub	sp, sp, #8
	ldr	r1, .L355
	lsrs	r0, r0, #8
	bl	AllocZeroed_
	ldr	r6, [r5]
	movs	r4, r0
	mov	r1, sp
	movs	r0, r6
	ldr	r2, .L355+4
	bl	CpuSet
	mov	r3, sp
	ldrb	r3, [r3]
	lsls	r3, r3, #27
	lsrs	r3, r3, #27
	cmp	r3, #16
	beq	.L354
	movs	r1, r6
	movs	r2, r4
	mov	r0, sp
	adds	r1, r1, #8
	bl	SmolDecompressData
.L353:
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
	pop	{r4, r5, r6}
	pop	{r1}
	bx	r1
.L354:
	movs	r1, r4
	movs	r0, r6
	bl	LZ77UnCompWram
	b	.L353
.L356:
	.align	2
.L355:
	.word	.LC30
	.word	67108866
	.size	LoadCompressedSpritePaletteUsingHeap, .-LoadCompressedSpritePaletteUsingHeap
	.ident	"GCC: (devkitARM release 63) 13.2.0"
	.code 16
	.align	1
.L165:
	bx	r3
.L187:
	bx	r4
.text
	.align	2, 0

