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

// Function: sub_0012EFB0
// Address: 0x12efb0 - 0x12efd0
void sub_0012EFB0_0x12efb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012EFB0_0x12efb0");
#endif

    ctx->pc = 0x12efb0u;

    // 0x12efb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12efb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12efb4: 0x0  nop
    ctx->pc = 0x12efb4u;
    // NOP
    // 0x12efb8: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x12efb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12efbc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x12EFBCu;
    {
        const bool branch_taken_0x12efbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12efbc) {
            ctx->pc = 0x12EFC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EFBCu;
            // 0x12efc0: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
            ctx->f[12] = FPU_NEG_S(ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EFC4u;
            goto label_12efc4;
        }
    }
    ctx->pc = 0x12EFC4u;
label_12efc4:
    // 0x12efc4: 0x3e00008  jr          $ra
    ctx->pc = 0x12EFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EFC4u;
        // 0x12efc8: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EFC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EFCCu;
    // 0x12efcc: 0x0  nop
    ctx->pc = 0x12efccu;
    // NOP
}
