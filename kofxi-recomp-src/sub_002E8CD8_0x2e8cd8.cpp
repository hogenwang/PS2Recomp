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

// Function: sub_002E8CD8
// Address: 0x2e8cd8 - 0x2e8d28
void sub_002E8CD8_0x2e8cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8CD8_0x2e8cd8");
#endif

    switch (ctx->pc) {
        case 0x2e8cf8u: goto label_2e8cf8;
        case 0x2e8d00u: goto label_2e8d00;
        default: break;
    }

    ctx->pc = 0x2e8cd8u;

    // 0x2e8cd8: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x2e8cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x2e8cdc: 0x8c62fda0  lw          $v0, -0x260($v1)
    ctx->pc = 0x2e8cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966688)));
    // 0x2e8ce0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8CE0u;
    {
        const bool branch_taken_0x2e8ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8CE0u;
        // 0x2e8ce4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8ce0) {
            ctx->pc = 0x2E8CF0u;
            goto label_2e8cf0;
        }
    }
    ctx->pc = 0x2E8CE8u;
    // 0x2e8ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8CE8u;
        // 0x2e8cec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8CF0u;
label_2e8cf0:
    // 0x2e8cf0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2e8cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8cf4: 0x0  nop
    ctx->pc = 0x2e8cf4u;
    // NOP
label_2e8cf8:
    // 0x2e8cf8: 0x8ca3fda0  lw          $v1, -0x260($a1)
    ctx->pc = 0x2e8cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294966688)));
    // 0x2e8cfc: 0x0  nop
    ctx->pc = 0x2e8cfcu;
    // NOP
label_2e8d00:
    // 0x2e8d00: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E8D00u;
    {
        const bool branch_taken_0x2e8d00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8d00) {
            ctx->pc = 0x2E8D1Cu;
            goto label_2e8d1c;
        }
    }
    ctx->pc = 0x2E8D08u;
    // 0x2e8d08: 0x8c624e34  lw          $v0, 0x4E34($v1)
    ctx->pc = 0x2e8d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20020)));
    // 0x2e8d0c: 0x5444fffc  bnel        $v0, $a0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2E8D0Cu;
    {
        const bool branch_taken_0x2e8d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2e8d0c) {
            ctx->pc = 0x2E8D10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8D0Cu;
            // 0x2e8d10: 0x8c634e30  lw          $v1, 0x4E30($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20016)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8D00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e8d00;
        }
    }
    ctx->pc = 0x2E8D14u;
    // 0x2e8d14: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2E8D14u;
    {
        const bool branch_taken_0x2e8d14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8d14) {
            ctx->pc = 0x2E8D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8D14u;
            // 0x2e8d18: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8CF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e8cf8;
        }
    }
    ctx->pc = 0x2E8D1Cu;
label_2e8d1c:
    // 0x2e8d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8D1Cu;
        // 0x2e8d20: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8D24u;
    // 0x2e8d24: 0x0  nop
    ctx->pc = 0x2e8d24u;
    // NOP
    if (ctx->pc == 0x2e8d24u) { ctx->pc = 0x2e8d28u; }
}
