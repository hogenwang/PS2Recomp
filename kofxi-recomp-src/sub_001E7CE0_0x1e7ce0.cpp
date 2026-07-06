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

// Function: sub_001E7CE0
// Address: 0x1e7ce0 - 0x1e7d20
void sub_001E7CE0_0x1e7ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7CE0_0x1e7ce0");
#endif

    switch (ctx->pc) {
        case 0x1e7d08u: goto label_1e7d08;
        default: break;
    }

    ctx->pc = 0x1e7ce0u;

    // 0x1e7ce0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e7ce4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E7CE4u;
    {
        const bool branch_taken_0x1e7ce4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7CE4u;
        // 0x1e7ce8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7ce4) {
            ctx->pc = 0x1E7CF8u;
            goto label_1e7cf8;
        }
    }
    ctx->pc = 0x1E7CECu;
    // 0x1e7cec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7cf0: 0x806de5a  j           func_1B7968
    ctx->pc = 0x1E7CF0u;
    ctx->pc = 0x1E7CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7CF0u;
    // 0x1e7cf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7968u;
    sub_001B7968_0x1b7968(rdram, ctx, runtime); return;
    ctx->pc = 0x1E7CF8u;
label_1e7cf8:
    // 0x1e7cf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7CFCu;
        // 0x1e7d00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7D04u;
    // 0x1e7d04: 0x0  nop
    ctx->pc = 0x1e7d04u;
    // NOP
label_1e7d08:
    // 0x1e7d08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e7d0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7d10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7d14: 0x806de2e  j           func_1B78B8
    ctx->pc = 0x1E7D14u;
    ctx->pc = 0x1E7D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7D14u;
    // 0x1e7d18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B78B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B78B8u, 0x1E7D14u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1E7D1Cu;
    // 0x1e7d1c: 0x0  nop
    ctx->pc = 0x1e7d1cu;
    // NOP
    if (ctx->pc == 0x1e7d1cu) { ctx->pc = 0x1e7d20u; }
}
