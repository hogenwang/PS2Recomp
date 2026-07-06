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

// Function: sub_00189FE0
// Address: 0x189fe0 - 0x18a010
void sub_00189FE0_0x189fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189FE0_0x189fe0");
#endif

    switch (ctx->pc) {
        case 0x189ff0u: goto label_189ff0;
        default: break;
    }

    ctx->pc = 0x189fe0u;

    // 0x189fe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x189fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x189fe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189fe8: 0xc0627c8  jal         func_189F20
    ctx->pc = 0x189FE8u;
    SET_GPR_U32(ctx, 31, 0x189FF0u);
    ctx->pc = 0x189F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189F20u, 0x189FE8u, 0x189FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189FF0u;
label_189ff0:
    // 0x189ff0: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x189FF0u;
    {
        const bool branch_taken_0x189ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x189ff0) {
            ctx->pc = 0x189FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189FF0u;
            // 0x189ff4: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189FFCu;
            goto label_189ffc;
        }
    }
    ctx->pc = 0x189FF8u;
    // 0x189ff8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x189ff8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189ffc:
    // 0x189ffc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a000: 0x3e00008  jr          $ra
    ctx->pc = 0x18A000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A000u;
        // 0x18a004: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A008u;
    // 0x18a008: 0x0  nop
    ctx->pc = 0x18a008u;
    // NOP
    // 0x18a00c: 0x0  nop
    ctx->pc = 0x18a00cu;
    // NOP
}
