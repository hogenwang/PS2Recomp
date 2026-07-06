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

// Function: sub_001EA108
// Address: 0x1ea108 - 0x1ea148
void sub_001EA108_0x1ea108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA108_0x1ea108");
#endif

    switch (ctx->pc) {
        case 0x1ea118u: goto label_1ea118;
        default: break;
    }

    ctx->pc = 0x1ea108u;

    // 0x1ea108: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1ea108u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea10c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1ea10cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea110: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ea110u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea114: 0x0  nop
    ctx->pc = 0x1ea114u;
    // NOP
label_1ea118:
    // 0x1ea118: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1ea118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1ea11c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1ea11cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1ea120: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x1ea120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1ea124: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1ea124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1ea128: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ea128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ea12c: 0x28e50008  slti        $a1, $a3, 0x8
    ctx->pc = 0x1ea12cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1ea130: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1ea130u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1ea134: 0x14a0fff8  bnez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1EA134u;
    {
        const bool branch_taken_0x1ea134 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA134u;
        // 0x1ea138: 0xc43021  addu        $a2, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea134) {
            ctx->pc = 0x1EA118u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ea118;
        }
    }
    ctx->pc = 0x1EA13Cu;
    // 0x1ea13c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA13Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA144u;
    // 0x1ea144: 0x0  nop
    ctx->pc = 0x1ea144u;
    // NOP
    if (ctx->pc == 0x1ea144u) { ctx->pc = 0x1ea148u; }
}
