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

// Function: sub_00227DA0
// Address: 0x227da0 - 0x227dd8
void sub_00227DA0_0x227da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227DA0_0x227da0");
#endif

    switch (ctx->pc) {
        case 0x227db0u: goto label_227db0;
        default: break;
    }

    ctx->pc = 0x227da0u;

    // 0x227da0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x227da4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227da8: 0xc089f32  jal         func_227CC8
    ctx->pc = 0x227DA8u;
    SET_GPR_U32(ctx, 31, 0x227DB0u);
    ctx->pc = 0x227CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227CC8u, 0x227DA8u, 0x227DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227DB0u;
label_227db0:
    // 0x227db0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x227DB0u;
    {
        const bool branch_taken_0x227db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227DB0u;
        // 0x227db4: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227db0) {
            ctx->pc = 0x227DC4u;
            goto label_227dc4;
        }
    }
    ctx->pc = 0x227DB8u;
    // 0x227db8: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x227db8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x227dbc: 0x144f0003  bne         $v0, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x227DBCu;
    {
        const bool branch_taken_0x227dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x227DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227DBCu;
        // 0x227dc0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227dbc) {
            ctx->pc = 0x227DCCu;
            goto label_227dcc;
        }
    }
    ctx->pc = 0x227DC4u;
label_227dc4:
    // 0x227dc4: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x227dc4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227dc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_227dcc:
    // 0x227dcc: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x227dccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x227DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227DD0u;
        // 0x227dd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227DD8u;
}
