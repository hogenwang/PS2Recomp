#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003410B0
// Address: 0x3410b0 - 0x341170
void sub_003410B0_0x3410b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003410B0_0x3410b0");
#endif

    ctx->pc = 0x3410b0u;

    // 0x3410b0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3410b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3410b4: 0xac60ea98  sw          $zero, -0x1568($v1)
    ctx->pc = 0x3410b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961816), GPR_U32(ctx, 0));
    // 0x3410b8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3410b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3410bc: 0xac60ea9c  sw          $zero, -0x1564($v1)
    ctx->pc = 0x3410bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961820), GPR_U32(ctx, 0));
    // 0x3410c0: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x3410c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x3410c4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3410c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3410c8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3410c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3410cc: 0x8c63eaa8  lw          $v1, -0x1558($v1)
    ctx->pc = 0x3410ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961832)));
    // 0x3410d0: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3410D0u;
    {
        const bool branch_taken_0x3410d0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3410d0) {
            ctx->pc = 0x3410D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3410D0u;
            // 0x3410d4: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3410E4u;
            goto label_3410e4;
        }
    }
    ctx->pc = 0x3410D8u;
    // 0x3410d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3410d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3410dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3410DCu;
    {
        const bool branch_taken_0x3410dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3410E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3410DCu;
            // 0x3410e0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3410dc) {
            ctx->pc = 0x3410FCu;
            goto label_3410fc;
        }
    }
    ctx->pc = 0x3410E4u;
label_3410e4:
    // 0x3410e4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3410e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3410e8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3410e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3410ec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3410ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3410f0: 0x0  nop
    ctx->pc = 0x3410f0u;
    // NOP
    // 0x3410f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3410f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3410f8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3410f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3410fc:
    // 0x3410fc: 0x0  nop
    ctx->pc = 0x3410fcu;
    // NOP
    // 0x341100: 0x0  nop
    ctx->pc = 0x341100u;
    // NOP
    // 0x341104: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x341104u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
    // 0x341108: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x341108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34110c: 0x3c0443e0  lui         $a0, 0x43E0
    ctx->pc = 0x34110cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17376 << 16));
    // 0x341110: 0x8c63eaac  lw          $v1, -0x1554($v1)
    ctx->pc = 0x341110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961836)));
    // 0x341114: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x341114u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x341118: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x341118u;
    {
        const bool branch_taken_0x341118 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x341118) {
            ctx->pc = 0x34111Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x341118u;
            // 0x34111c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34112Cu;
            goto label_34112c;
        }
    }
    ctx->pc = 0x341120u;
    // 0x341120: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x341120u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341124: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x341124u;
    {
        const bool branch_taken_0x341124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x341124u;
            // 0x341128: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x341124) {
            ctx->pc = 0x341144u;
            goto label_341144;
        }
    }
    ctx->pc = 0x34112Cu;
label_34112c:
    // 0x34112c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x34112cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x341130: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x341130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x341134: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x341134u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341138: 0x0  nop
    ctx->pc = 0x341138u;
    // NOP
    // 0x34113c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34113cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x341140: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x341140u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_341144:
    // 0x341144: 0x0  nop
    ctx->pc = 0x341144u;
    // NOP
    // 0x341148: 0x0  nop
    ctx->pc = 0x341148u;
    // NOP
    // 0x34114c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x34114cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x341150: 0x0  nop
    ctx->pc = 0x341150u;
    // NOP
    // 0x341154: 0x0  nop
    ctx->pc = 0x341154u;
    // NOP
    // 0x341158: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x341158u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34115c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x34115Cu;
    {
        const bool branch_taken_0x34115c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34115c) {
            ctx->pc = 0x341160u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34115Cu;
            // 0x341160: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x341164u;
            goto label_341164;
        }
    }
    ctx->pc = 0x341164u;
label_341164:
    // 0x341164: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x341164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x341168: 0x3e00008  jr          $ra
    ctx->pc = 0x341168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34116Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x341168u;
            // 0x34116c: 0xe460ea94  swc1        $f0, -0x156C($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294961812), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x341170u;
    ctx->pc = 0x341170u;
}
