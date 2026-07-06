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

// Function: sub_00261CA0
// Address: 0x261ca0 - 0x261cd8
void sub_00261CA0_0x261ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261CA0_0x261ca0");
#endif

    switch (ctx->pc) {
        case 0x261ca8u: goto label_261ca8;
        default: break;
    }

    ctx->pc = 0x261ca0u;

    // 0x261ca0: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x261ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x261ca4: 0x8c43d770  lw          $v1, -0x2890($v0)
    ctx->pc = 0x261ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956912)));
label_261ca8:
    // 0x261ca8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x261CA8u;
    {
        const bool branch_taken_0x261ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x261ca8) {
            ctx->pc = 0x261CC4u;
            goto label_261cc4;
        }
    }
    ctx->pc = 0x261CB0u;
    // 0x261cb0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x261cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x261cb4: 0x5482fffc  bnel        $a0, $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x261CB4u;
    {
        const bool branch_taken_0x261cb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x261cb4) {
            ctx->pc = 0x261CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261CB4u;
            // 0x261cb8: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261CA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261ca8;
        }
    }
    ctx->pc = 0x261CBCu;
    // 0x261cbc: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x261CBCu;
    {
        const bool branch_taken_0x261cbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x261cbc) {
            ctx->pc = 0x261CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261CBCu;
            // 0x261cc0: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261CCCu;
            goto label_261ccc;
        }
    }
    ctx->pc = 0x261CC4u;
label_261cc4:
    // 0x261cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x261CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261CC4u;
        // 0x261cc8: 0x2402ffe4  addiu       $v0, $zero, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261CCCu;
label_261ccc:
    // 0x261ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x261CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261CCCu;
        // 0x261cd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261CD4u;
    // 0x261cd4: 0x0  nop
    ctx->pc = 0x261cd4u;
    // NOP
}
