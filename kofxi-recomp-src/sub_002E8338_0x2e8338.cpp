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

// Function: sub_002E8338
// Address: 0x2e8338 - 0x2e8388
void sub_002E8338_0x2e8338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8338_0x2e8338");
#endif

    switch (ctx->pc) {
        case 0x2e8350u: goto label_2e8350;
        case 0x2e8358u: goto label_2e8358;
        default: break;
    }

    ctx->pc = 0x2e8338u;

    // 0x2e8338: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2e8338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2e833c: 0x8c44ea08  lw          $a0, -0x15F8($v0)
    ctx->pc = 0x2e833cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961672)));
    // 0x2e8340: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2E8340u;
    {
        const bool branch_taken_0x2e8340 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8340u;
        // 0x2e8344: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8340) {
            ctx->pc = 0x2E8380u;
            goto label_2e8380;
        }
    }
    ctx->pc = 0x2E8348u;
    // 0x2e8348: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e8348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e834c: 0x0  nop
    ctx->pc = 0x2e834cu;
    // NOP
label_2e8350:
    // 0x2e8350: 0x24830038  addiu       $v1, $a0, 0x38
    ctx->pc = 0x2e8350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
    // 0x2e8354: 0x0  nop
    ctx->pc = 0x2e8354u;
    // NOP
label_2e8358:
    // 0x2e8358: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e8358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e835c: 0x10460003  beq         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E835Cu;
    {
        const bool branch_taken_0x2e835c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x2E8360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E835Cu;
        // 0x2e8360: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e835c) {
            ctx->pc = 0x2E836Cu;
            goto label_2e836c;
        }
    }
    ctx->pc = 0x2E8364u;
    // 0x2e8364: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8364u;
        // 0x2e8368: 0x2402ffe9  addiu       $v0, $zero, -0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967273));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E836Cu;
label_2e836c:
    // 0x2e836c: 0x18a0fffa  blez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E836Cu;
    {
        const bool branch_taken_0x2e836c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2E8370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E836Cu;
        // 0x2e8370: 0x24630028  addiu       $v1, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e836c) {
            ctx->pc = 0x2E8358u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e8358;
        }
    }
    ctx->pc = 0x2E8374u;
    // 0x2e8374: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2e8374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e8378: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2E8378u;
    {
        const bool branch_taken_0x2e8378 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8378u;
        // 0x2e837c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8378) {
            ctx->pc = 0x2E8350u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e8350;
        }
    }
    ctx->pc = 0x2E8380u;
label_2e8380:
    // 0x2e8380: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8380u;
        // 0x2e8384: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8388u;
}
