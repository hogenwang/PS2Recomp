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

// Function: sub_00202750
// Address: 0x202750 - 0x202798
void sub_00202750_0x202750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202750_0x202750");
#endif

    switch (ctx->pc) {
        case 0x202780u: goto label_202780;
        default: break;
    }

    ctx->pc = 0x202750u;

    // 0x202750: 0x460c6836  c.le.s      $f13, $f12
    ctx->pc = 0x202750u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x202754: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x202754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202758: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x202758u;
    {
        const bool branch_taken_0x202758 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20275Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202758u;
        // 0x20275c: 0x460c6841  sub.s       $f1, $f13, $f12 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202758) {
            ctx->pc = 0x202764u;
            goto label_202764;
        }
    }
    ctx->pc = 0x202760u;
    // 0x202760: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x202760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202764:
    // 0x202764: 0x3c01c160  lui         $at, 0xC160
    ctx->pc = 0x202764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49504 << 16));
    // 0x202768: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x202768u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20276c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20276cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x202770: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x202770u;
    {
        const bool branch_taken_0x202770 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x202770) {
            ctx->pc = 0x202774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202770u;
            // 0x202774: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202778u;
            goto label_202778;
        }
    }
    ctx->pc = 0x202778u;
label_202778:
    // 0x202778: 0x3e00008  jr          $ra
    ctx->pc = 0x202778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202780u;
label_202780:
    // 0x202780: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x202780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202784: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x202784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x202788: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x202788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20278c: 0x3e00008  jr          $ra
    ctx->pc = 0x20278Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20278Cu;
        // 0x202790: 0xe4c10000  swc1        $f1, 0x0($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20278Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202794u;
    // 0x202794: 0x0  nop
    ctx->pc = 0x202794u;
    // NOP
    if (ctx->pc == 0x202794u) { ctx->pc = 0x202798u; }
}
