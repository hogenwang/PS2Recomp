#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A0580
// Address: 0x1a0580 - 0x1a0610
void sub_001A0580_0x1a0580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0580_0x1a0580");
#endif

    ctx->pc = 0x1a0580u;

    // 0x1a0580: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1a0580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1a0584: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A0584u;
    {
        const bool branch_taken_0x1a0584 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A0588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0584u;
        // 0x1a0588: 0x3085ffff  andi        $a1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0584) {
            ctx->pc = 0x1A0598u;
            goto label_1a0598;
        }
    }
    ctx->pc = 0x1A058Cu;
    // 0x1a058c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a058cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0590: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A0590u;
    {
        const bool branch_taken_0x1a0590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0590u;
        // 0x1a0594: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0590) {
            ctx->pc = 0x1A05B4u;
            goto label_1a05b4;
        }
    }
    ctx->pc = 0x1A0598u;
label_1a0598:
    // 0x1a0598: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1a0598u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1a059c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a059cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a05a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a05a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a05a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a05a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a05a8: 0x0  nop
    ctx->pc = 0x1a05a8u;
    // NOP
    // 0x1a05ac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1a05acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a05b0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1a05b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1a05b4:
    // 0x1a05b4: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x1a05b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x1a05b8: 0x51203  sra         $v0, $a1, 8
    ctx->pc = 0x1a05b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 8));
    // 0x1a05bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a05bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a05c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a05c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a05c4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1a05c4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x1a05c8: 0x0  nop
    ctx->pc = 0x1a05c8u;
    // NOP
    // 0x1a05cc: 0x0  nop
    ctx->pc = 0x1a05ccu;
    // NOP
    // 0x1a05d0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A05D0u;
    {
        const bool branch_taken_0x1a05d0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a05d0) {
            ctx->pc = 0x1A05E4u;
            goto label_1a05e4;
        }
    }
    ctx->pc = 0x1A05D8u;
    // 0x1a05d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a05d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a05dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A05DCu;
    {
        const bool branch_taken_0x1a05dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A05E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A05DCu;
        // 0x1a05e0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a05dc) {
            ctx->pc = 0x1A0600u;
            goto label_1a0600;
        }
    }
    ctx->pc = 0x1A05E4u;
label_1a05e4:
    // 0x1a05e4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1a05e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1a05e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a05e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a05ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a05ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a05f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a05f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a05f4: 0x0  nop
    ctx->pc = 0x1a05f4u;
    // NOP
    // 0x1a05f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a05f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a05fc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1a05fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1a0600:
    // 0x1a0600: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0600u;
        // 0x1a0604: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0608u;
    // 0x1a0608: 0x0  nop
    ctx->pc = 0x1a0608u;
    // NOP
    // 0x1a060c: 0x0  nop
    ctx->pc = 0x1a060cu;
    // NOP
    if (ctx->pc == 0x1a060cu) { ctx->pc = 0x1a0610u; }
}
