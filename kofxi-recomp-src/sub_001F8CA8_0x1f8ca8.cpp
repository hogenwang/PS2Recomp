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

// Function: sub_001F8CA8
// Address: 0x1f8ca8 - 0x1f8cd0
void sub_001F8CA8_0x1f8ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8CA8_0x1f8ca8");
#endif

    switch (ctx->pc) {
        case 0x1f8cc4u: goto label_1f8cc4;
        default: break;
    }

    ctx->pc = 0x1f8ca8u;

    // 0x1f8ca8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f8ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f8cac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f8cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f8cb0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1f8cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f8cb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f8cb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8cb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f8cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f8cbc: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1F8CBCu;
    SET_GPR_U32(ctx, 31, 0x1F8CC4u);
    ctx->pc = 0x1F8CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8CBCu;
    // 0x1f8cc0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1F8CBCu, 0x1F8CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8CC4u;
label_1f8cc4:
    // 0x1f8cc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f8cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8CC8u;
        // 0x1f8ccc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8CD0u;
}
