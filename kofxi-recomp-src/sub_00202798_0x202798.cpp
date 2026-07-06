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

// Function: sub_00202798
// Address: 0x202798 - 0x2027d8
void sub_00202798_0x202798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202798_0x202798");
#endif

    switch (ctx->pc) {
        case 0x2027c8u: goto label_2027c8;
        default: break;
    }

    ctx->pc = 0x202798u;

    // 0x202798: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x202798u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20279c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20279cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2027a0: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2027a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2027a4: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x2027a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2027a8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2027A8u;
    {
        const bool branch_taken_0x2027a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2027ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2027A8u;
        // 0x2027ac: 0xc4810040  lwc1        $f1, 0x40($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2027a8) {
            ctx->pc = 0x2027BCu;
            goto label_2027bc;
        }
    }
    ctx->pc = 0x2027B0u;
    // 0x2027b0: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x2027b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2027b4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2027B4u;
    {
        const bool branch_taken_0x2027b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2027b4) {
            ctx->pc = 0x2027B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2027B4u;
            // 0x2027b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2027BCu;
            goto label_2027bc;
        }
    }
    ctx->pc = 0x2027BCu;
label_2027bc:
    // 0x2027bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2027BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2027BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2027C4u;
    // 0x2027c4: 0x0  nop
    ctx->pc = 0x2027c4u;
    // NOP
label_2027c8:
    // 0x2027c8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2027c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2027cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2027CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2027D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2027CCu;
        // 0x2027d0: 0xac441e04  sw          $a0, 0x1E04($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 7684), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2027CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2027D4u;
    // 0x2027d4: 0x0  nop
    ctx->pc = 0x2027d4u;
    // NOP
    if (ctx->pc == 0x2027d4u) { ctx->pc = 0x2027d8u; }
}
