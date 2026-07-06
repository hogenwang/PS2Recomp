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

// Function: sub_00189EF0
// Address: 0x189ef0 - 0x189f20
void sub_00189EF0_0x189ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189EF0_0x189ef0");
#endif

    switch (ctx->pc) {
        case 0x189f00u: goto label_189f00;
        default: break;
    }

    ctx->pc = 0x189ef0u;

    // 0x189ef0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x189ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x189ef4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189ef8: 0xc0627a4  jal         func_189E90
    ctx->pc = 0x189EF8u;
    SET_GPR_U32(ctx, 31, 0x189F00u);
    ctx->pc = 0x189E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189E90u, 0x189EF8u, 0x189F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189F00u;
label_189f00:
    // 0x189f00: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x189F00u;
    {
        const bool branch_taken_0x189f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189f00) {
            ctx->pc = 0x189F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189F00u;
            // 0x189f04: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189F0Cu;
            goto label_189f0c;
        }
    }
    ctx->pc = 0x189F08u;
    // 0x189f08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x189f08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189f0c:
    // 0x189f0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189f10: 0x3e00008  jr          $ra
    ctx->pc = 0x189F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189F10u;
        // 0x189f14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189F18u;
    // 0x189f18: 0x0  nop
    ctx->pc = 0x189f18u;
    // NOP
    // 0x189f1c: 0x0  nop
    ctx->pc = 0x189f1cu;
    // NOP
}
