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

// Function: sub_00265700
// Address: 0x265700 - 0x265738
void sub_00265700_0x265700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265700_0x265700");
#endif

    ctx->pc = 0x265700u;

    // 0x265700: 0x2483ffde  addiu       $v1, $a0, -0x22
    ctx->pc = 0x265700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967262));
    // 0x265704: 0x2c62003b  sltiu       $v0, $v1, 0x3B
    ctx->pc = 0x265704u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
    // 0x265708: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x265708u;
    {
        const bool branch_taken_0x265708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265708u;
        // 0x26570c: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265708) {
            ctx->pc = 0x265730u;
            goto label_265730;
        }
    }
    ctx->pc = 0x265710u;
    // 0x265710: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x265710u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x265714: 0x24427700  addiu       $v0, $v0, 0x7700
    ctx->pc = 0x265714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30464));
    // 0x265718: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x265718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26571c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26571cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x265720: 0x800008  jr          $a0
    ctx->pc = 0x265720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x265728u: goto label_265728;
            case 0x265730u: goto label_265730;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265720u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x265728u;
label_265728:
    // 0x265728: 0x3e00008  jr          $ra
    ctx->pc = 0x265728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265728u;
        // 0x26572c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265730u;
label_265730:
    // 0x265730: 0x3e00008  jr          $ra
    ctx->pc = 0x265730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265730u;
        // 0x265734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265738u;
}
