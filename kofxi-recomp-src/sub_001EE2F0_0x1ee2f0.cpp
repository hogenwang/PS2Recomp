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

// Function: sub_001EE2F0
// Address: 0x1ee2f0 - 0x1ee330
void sub_001EE2F0_0x1ee2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EE2F0_0x1ee2f0");
#endif

    switch (ctx->pc) {
        case 0x1ee300u: goto label_1ee300;
        default: break;
    }

    ctx->pc = 0x1ee2f0u;

    // 0x1ee2f0: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1EE2F0u;
    {
        const bool branch_taken_0x1ee2f0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1EE2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE2F0u;
        // 0x1ee2f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee2f0) {
            ctx->pc = 0x1EE324u;
            goto label_1ee324;
        }
    }
    ctx->pc = 0x1EE2F8u;
    // 0x1ee2f8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1ee2f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ee2fc: 0x0  nop
    ctx->pc = 0x1ee2fcu;
    // NOP
label_1ee300:
    // 0x1ee300: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ee300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ee304: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EE304u;
    {
        const bool branch_taken_0x1ee304 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE304u;
        // 0x1ee308: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee304) {
            ctx->pc = 0x1EE328u;
            goto label_1ee328;
        }
    }
    ctx->pc = 0x1EE30Cu;
    // 0x1ee30c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ee30cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1ee310: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x1ee310u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1ee314: 0x0  nop
    ctx->pc = 0x1ee314u;
    // NOP
    // 0x1ee318: 0x0  nop
    ctx->pc = 0x1ee318u;
    // NOP
    // 0x1ee31c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1EE31Cu;
    {
        const bool branch_taken_0x1ee31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee31c) {
            ctx->pc = 0x1EE320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE31Cu;
            // 0x1ee320: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE300u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ee300;
        }
    }
    ctx->pc = 0x1EE324u;
label_1ee324:
    // 0x1ee324: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ee324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ee328:
    // 0x1ee328: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE330u;
}
