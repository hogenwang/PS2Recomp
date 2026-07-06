#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AED38
// Address: 0x1aed38 - 0x1aed68
void sub_001AED38_0x1aed38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AED38_0x1aed38");
#endif

    switch (ctx->pc) {
        case 0x1aed40u: goto label_1aed40;
        default: break;
    }

    ctx->pc = 0x1aed38u;

    // 0x1aed38: 0x3402c350  ori         $v0, $zero, 0xC350
    ctx->pc = 0x1aed38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
    // 0x1aed3c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1aed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1aed40:
    // 0x1aed40: 0x0  nop
    ctx->pc = 0x1aed40u;
    // NOP
    // 0x1aed44: 0x0  nop
    ctx->pc = 0x1aed44u;
    // NOP
    // 0x1aed48: 0x0  nop
    ctx->pc = 0x1aed48u;
    // NOP
    // 0x1aed4c: 0x0  nop
    ctx->pc = 0x1aed4cu;
    // NOP
    // 0x1aed50: 0x0  nop
    ctx->pc = 0x1aed50u;
    // NOP
    // 0x1aed54: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AED54u;
    {
        const bool branch_taken_0x1aed54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aed54) {
            ctx->pc = 0x1AED58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AED54u;
            // 0x1aed58: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AED40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1aed40;
        }
    }
    ctx->pc = 0x1AED5Cu;
    // 0x1aed5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AED5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AED64u;
    // 0x1aed64: 0x0  nop
    ctx->pc = 0x1aed64u;
    // NOP
    ctx->pc = 0x1aed68u;
}
