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

// Function: sub_00336E50
// Address: 0x336e50 - 0x336ea0
void sub_00336E50_0x336e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336E50_0x336e50");
#endif

    switch (ctx->pc) {
        case 0x336e64u: goto label_336e64;
        default: break;
    }

    ctx->pc = 0x336e50u;

    // 0x336e50: 0x90870000  lbu         $a3, 0x0($a0)
    ctx->pc = 0x336e50u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x336e54: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x336e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x336e58: 0x10e6000b  beq         $a3, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x336E58u;
    {
        const bool branch_taken_0x336e58 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x336E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336E58u;
        // 0x336e5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336e58) {
            ctx->pc = 0x336E88u;
            goto label_336e88;
        }
    }
    ctx->pc = 0x336E60u;
    // 0x336e60: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x336e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_336e64:
    // 0x336e64: 0x54e30003  bnel        $a3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x336E64u;
    {
        const bool branch_taken_0x336e64 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x336e64) {
            ctx->pc = 0x336E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336E64u;
            // 0x336e68: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336E74u;
            goto label_336e74;
        }
    }
    ctx->pc = 0x336E6Cu;
    // 0x336e6c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x336E6Cu;
    {
        const bool branch_taken_0x336e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336e6c) {
            ctx->pc = 0x336E8Cu;
            goto label_336e8c;
        }
    }
    ctx->pc = 0x336E74u;
label_336e74:
    // 0x336e74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x336e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x336e78: 0x90870000  lbu         $a3, 0x0($a0)
    ctx->pc = 0x336e78u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x336e7c: 0x14e6fff9  bne         $a3, $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x336E7Cu;
    {
        const bool branch_taken_0x336e7c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x336E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336E7Cu;
        // 0x336e80: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x336e7c) {
            ctx->pc = 0x336E64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_336e64;
        }
    }
    ctx->pc = 0x336E84u;
    // 0x336e84: 0x0  nop
    ctx->pc = 0x336e84u;
    // NOP
label_336e88:
    // 0x336e88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x336e88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_336e8c:
    // 0x336e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x336E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336E94u;
    // 0x336e94: 0x0  nop
    ctx->pc = 0x336e94u;
    // NOP
    // 0x336e98: 0x0  nop
    ctx->pc = 0x336e98u;
    // NOP
    // 0x336e9c: 0x0  nop
    ctx->pc = 0x336e9cu;
    // NOP
}
