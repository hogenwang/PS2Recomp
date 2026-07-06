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

// Function: sub_001BE8A0
// Address: 0x1be8a0 - 0x1be908
void sub_001BE8A0_0x1be8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE8A0_0x1be8a0");
#endif

    switch (ctx->pc) {
        case 0x1be8c0u: goto label_1be8c0;
        default: break;
    }

    ctx->pc = 0x1be8a0u;

    // 0x1be8a0: 0x3c0501bf  lui         $a1, 0x1BF
    ctx->pc = 0x1be8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)447 << 16));
    // 0x1be8a4: 0x24a25450  addiu       $v0, $a1, 0x5450
    ctx->pc = 0x1be8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 21584));
    // 0x1be8a8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1be8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1be8ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1be8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be8b0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1BE8B0u;
    {
        const bool branch_taken_0x1be8b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE8B0u;
        // 0x1be8b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be8b0) {
            ctx->pc = 0x1BE8E4u;
            goto label_1be8e4;
        }
    }
    ctx->pc = 0x1BE8B8u;
    // 0x1be8b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1be8b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be8bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1be8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1be8c0:
    // 0x1be8c0: 0x28820028  slti        $v0, $a0, 0x28
    ctx->pc = 0x1be8c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x1be8c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BE8C4u;
    {
        const bool branch_taken_0x1be8c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE8C4u;
        // 0x1be8c8: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be8c4) {
            ctx->pc = 0x1BE8E4u;
            goto label_1be8e4;
        }
    }
    ctx->pc = 0x1BE8CCu;
    // 0x1be8cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1be8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1be8d0: 0x0  nop
    ctx->pc = 0x1be8d0u;
    // NOP
    // 0x1be8d4: 0x0  nop
    ctx->pc = 0x1be8d4u;
    // NOP
    // 0x1be8d8: 0x0  nop
    ctx->pc = 0x1be8d8u;
    // NOP
    // 0x1be8dc: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1BE8DCu;
    {
        const bool branch_taken_0x1be8dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be8dc) {
            ctx->pc = 0x1BE8E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BE8DCu;
            // 0x1be8e0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BE8C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1be8c0;
        }
    }
    ctx->pc = 0x1BE8E4u;
label_1be8e4:
    // 0x1be8e4: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x1be8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1be8e8: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE8E8u;
    {
        const bool branch_taken_0x1be8e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BE8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE8E8u;
        // 0x1be8ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be8e8) {
            ctx->pc = 0x1BE8FCu;
            goto label_1be8fc;
        }
    }
    ctx->pc = 0x1BE8F0u;
    // 0x1be8f0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1be8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1be8f4: 0x24a25450  addiu       $v0, $a1, 0x5450
    ctx->pc = 0x1be8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 21584));
    // 0x1be8f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1be8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1be8fc:
    // 0x1be8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE904u;
    // 0x1be904: 0x0  nop
    ctx->pc = 0x1be904u;
    // NOP
}
