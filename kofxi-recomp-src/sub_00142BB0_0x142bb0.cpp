#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00142BB0
// Address: 0x142bb0 - 0x142d80
void sub_00142BB0_0x142bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142BB0_0x142bb0");
#endif

    switch (ctx->pc) {
        case 0x142cecu: goto label_142cec;
        case 0x142d04u: goto label_142d04;
        case 0x142d20u: goto label_142d20;
        default: break;
    }

    ctx->pc = 0x142bb0u;

    // 0x142bb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x142bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x142bb4: 0x3c024780  lui         $v0, 0x4780
    ctx->pc = 0x142bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18304 << 16));
    // 0x142bb8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x142bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x142bbc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x142bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x142bc0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x142bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x142bc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x142bc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142bc8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x142bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x142bcc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x142bccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x142bd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x142bd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142bd4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x142bd4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x142bd8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x142bd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x142bdc: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x142bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x142be0: 0x84860088  lh          $a2, 0x88($a0)
    ctx->pc = 0x142be0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x142be4: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x142be4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x142be8: 0x34040  sll         $t0, $v1, 1
    ctx->pc = 0x142be8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x142bec: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x142becu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x142bf0: 0x8483008a  lh          $v1, 0x8A($a0)
    ctx->pc = 0x142bf0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 138)));
    // 0x142bf4: 0x83c03  sra         $a3, $t0, 16
    ctx->pc = 0x142bf4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 8), 16));
    // 0x142bf8: 0xc52023  subu        $a0, $a2, $a1
    ctx->pc = 0x142bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x142bfc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x142bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x142c00: 0x72c3c  dsll32      $a1, $a3, 16
    ctx->pc = 0x142c00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << (32 + 16));
    // 0x142c04: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x142c04u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x142c08: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x142c08u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x142c0c: 0x0  nop
    ctx->pc = 0x142c0cu;
    // NOP
    // 0x142c10: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x142c10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x142c14: 0x3105ffff  andi        $a1, $t0, 0xFFFF
    ctx->pc = 0x142c14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x142c18: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x142c18u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x142c1c: 0x0  nop
    ctx->pc = 0x142c1cu;
    // NOP
    // 0x142c20: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x142c20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x142c24: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x142c24u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x142c28: 0x46011880  add.s       $f2, $f3, $f1
    ctx->pc = 0x142c28u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x142c2c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x142c2cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x142c30: 0x0  nop
    ctx->pc = 0x142c30u;
    // NOP
    // 0x142c34: 0x46800da0  cvt.s.w     $f22, $f1
    ctx->pc = 0x142c34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
    // 0x142c38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x142c38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x142c3c: 0x0  nop
    ctx->pc = 0x142c3cu;
    // NOP
    // 0x142c40: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x142c40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142c44: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x142C44u;
    {
        const bool branch_taken_0x142c44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x142C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142C44u;
            // 0x142c48: 0x46800d60  cvt.s.w     $f21, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x142c44) {
            ctx->pc = 0x142C64u;
            goto label_142c64;
        }
    }
    ctx->pc = 0x142C4Cu;
    // 0x142c4c: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x142c4cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142c50: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x142C50u;
    {
        const bool branch_taken_0x142c50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x142c50) {
            ctx->pc = 0x142C54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x142C50u;
            // 0x142c54: 0x4615a81a  mula.s      $f21, $f21 (Delay Slot)
        ctx->f[31] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x142C68u;
            goto label_142c68;
        }
    }
    ctx->pc = 0x142C58u;
    // 0x142c58: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x142c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x142c5c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x142C5Cu;
    {
        const bool branch_taken_0x142c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142C5Cu;
            // 0x142c60: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142c5c) {
            ctx->pc = 0x142D14u;
            goto label_142d14;
        }
    }
    ctx->pc = 0x142C64u;
label_142c64:
    // 0x142c64: 0x4615a81a  mula.s      $f21, $f21
    ctx->pc = 0x142c64u;
    ctx->f[31] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
label_142c68:
    // 0x142c68: 0x4616b05c  madd.s      $f1, $f22, $f22
    ctx->pc = 0x142c68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[22]));
    // 0x142c6c: 0x46010044  c1          0x10044
    ctx->pc = 0x142c6cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x142c70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x142c70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142c74: 0x0  nop
    ctx->pc = 0x142c74u;
    // NOP
    // 0x142c78: 0x0  nop
    ctx->pc = 0x142c78u;
    // NOP
    // 0x142c7c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x142c7cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142c80: 0x45030022  bc1tl       . + 4 + (0x22 << 2)
    ctx->pc = 0x142C80u;
    {
        const bool branch_taken_0x142c80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x142c80) {
            ctx->pc = 0x142C84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x142C80u;
            // 0x142c84: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x142D0Cu;
            goto label_142d0c;
        }
    }
    ctx->pc = 0x142C88u;
    // 0x142c88: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x142c88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142c8c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x142C8Cu;
    {
        const bool branch_taken_0x142c8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x142C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142C8Cu;
            // 0x142c90: 0x9211008c  lbu         $s1, 0x8C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142c8c) {
            ctx->pc = 0x142C98u;
            goto label_142c98;
        }
    }
    ctx->pc = 0x142C94u;
    // 0x142c94: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x142c94u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_142c98:
    // 0x142c98: 0x0  nop
    ctx->pc = 0x142c98u;
    // NOP
    // 0x142c9c: 0x0  nop
    ctx->pc = 0x142c9cu;
    // NOP
    // 0x142ca0: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x142ca0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[1];
    // 0x142ca4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x142ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x142ca8: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x142ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x142cac: 0x4602b002  mul.s       $f0, $f22, $f2
    ctx->pc = 0x142cacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
    // 0x142cb0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x142cb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x142cb4: 0x0  nop
    ctx->pc = 0x142cb4u;
    // NOP
    // 0x142cb8: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x142cb8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[1];
    // 0x142cbc: 0x0  nop
    ctx->pc = 0x142cbcu;
    // NOP
    // 0x142cc0: 0x4602a802  mul.s       $f0, $f21, $f2
    ctx->pc = 0x142cc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x142cc4: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x142cc4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[1];
    // 0x142cc8: 0x0  nop
    ctx->pc = 0x142cc8u;
    // NOP
    // 0x142ccc: 0x0  nop
    ctx->pc = 0x142cccu;
    // NOP
    // 0x142cd0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x142CD0u;
    {
        const bool branch_taken_0x142cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142cd0) {
            ctx->pc = 0x142CE0u;
            goto label_142ce0;
        }
    }
    ctx->pc = 0x142CD8u;
    // 0x142cd8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x142CD8u;
    {
        const bool branch_taken_0x142cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142cd8) {
            ctx->pc = 0x142CE4u;
            goto label_142ce4;
        }
    }
    ctx->pc = 0x142CE0u;
label_142ce0:
    // 0x142ce0: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x142ce0u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
label_142ce4:
    // 0x142ce4: 0xc068184  jal         func_1A0610
    ctx->pc = 0x142CE4u;
    SET_GPR_U32(ctx, 31, 0x142CECu);
    ctx->pc = 0x1A0610u;
    if (runtime->hasFunction(0x1A0610u)) {
        auto targetFn = runtime->lookupFunction(0x1A0610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142CECu; }
        if (ctx->pc != 0x142CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0610_0x1a0610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142CECu; }
        if (ctx->pc != 0x142CECu) { return; }
    }
    ctx->pc = 0x142CECu;
label_142cec:
    // 0x142cec: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x142cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x142cf0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x142cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x142cf4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x142CF4u;
    {
        const bool branch_taken_0x142cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142cf4) {
            ctx->pc = 0x142CF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x142CF4u;
            // 0x142cf8: 0x4600a507  neg.s       $f20, $f20 (Delay Slot)
        ctx->f[20] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x142CFCu;
            goto label_142cfc;
        }
    }
    ctx->pc = 0x142CFCu;
label_142cfc:
    // 0x142cfc: 0xc068184  jal         func_1A0610
    ctx->pc = 0x142CFCu;
    SET_GPR_U32(ctx, 31, 0x142D04u);
    ctx->pc = 0x142D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142CFCu;
            // 0x142d00: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0610u;
    if (runtime->hasFunction(0x1A0610u)) {
        auto targetFn = runtime->lookupFunction(0x1A0610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142D04u; }
        if (ctx->pc != 0x142D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0610_0x1a0610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142D04u; }
        if (ctx->pc != 0x142D04u) { return; }
    }
    ctx->pc = 0x142D04u;
label_142d04:
    // 0x142d04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x142D04u;
    {
        const bool branch_taken_0x142d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142D04u;
            // 0x142d08: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142d04) {
            ctx->pc = 0x142D14u;
            goto label_142d14;
        }
    }
    ctx->pc = 0x142D0Cu;
label_142d0c:
    // 0x142d0c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x142d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x142d10: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x142d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_142d14:
    // 0x142d14: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x142d14u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x142d18: 0xc0509f4  jal         func_1427D0
    ctx->pc = 0x142D18u;
    SET_GPR_U32(ctx, 31, 0x142D20u);
    ctx->pc = 0x142D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142D18u;
            // 0x142d1c: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1427D0u;
    if (runtime->hasFunction(0x1427D0u)) {
        auto targetFn = runtime->lookupFunction(0x1427D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142D20u; }
        if (ctx->pc != 0x142D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001427D0_0x1427d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142D20u; }
        if (ctx->pc != 0x142D20u) { return; }
    }
    ctx->pc = 0x142D20u;
label_142d20:
    // 0x142d20: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x142d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x142d24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x142d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x142d28: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x142d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x142d2c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x142d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x142d30: 0xa2000030  sb          $zero, 0x30($s0)
    ctx->pc = 0x142d30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x142d34: 0xa2000031  sb          $zero, 0x31($s0)
    ctx->pc = 0x142d34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 49), (uint8_t)GPR_U32(ctx, 0));
    // 0x142d38: 0x92030064  lbu         $v1, 0x64($s0)
    ctx->pc = 0x142d38u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x142d3c: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x142D3Cu;
    {
        const bool branch_taken_0x142d3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x142d3c) {
            ctx->pc = 0x142D40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x142D3Cu;
            // 0x142d40: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x142D58u;
            goto label_142d58;
        }
    }
    ctx->pc = 0x142D44u;
    // 0x142d44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x142d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142d48: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x142D48u;
    {
        const bool branch_taken_0x142d48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x142d48) {
            ctx->pc = 0x142D4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x142D48u;
            // 0x142d4c: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x142D58u;
            goto label_142d58;
        }
    }
    ctx->pc = 0x142D50u;
    // 0x142d50: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x142D50u;
    {
        const bool branch_taken_0x142d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x142d50) {
            ctx->pc = 0x142D54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x142D50u;
            // 0x142d54: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x142D5Cu;
            goto label_142d5c;
        }
    }
    ctx->pc = 0x142D58u;
label_142d58:
    // 0x142d58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x142d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_142d5c:
    // 0x142d5c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x142d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x142d60: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x142d60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x142d64: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x142d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x142d68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x142d68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142d6c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x142d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x142d70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x142d70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142d74: 0x3e00008  jr          $ra
    ctx->pc = 0x142D74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142D74u;
            // 0x142d78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x142D7Cu;
    // 0x142d7c: 0x0  nop
    ctx->pc = 0x142d7cu;
    // NOP
    ctx->pc = 0x142d80u;
}
