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

// Function: sub_001C4780
// Address: 0x1c4780 - 0x1c47b8
void sub_001C4780_0x1c4780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4780_0x1c4780");
#endif

    switch (ctx->pc) {
        case 0x1c4790u: goto label_1c4790;
        default: break;
    }

    ctx->pc = 0x1c4780u;

    // 0x1c4780: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c4780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c4784: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c4784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4788: 0x2443ebb0  addiu       $v1, $v0, -0x1450
    ctx->pc = 0x1c4788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962096));
    // 0x1c478c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1c478cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1c4790:
    // 0x1c4790: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1c4790u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c4794: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1c4794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1c4798: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1c4798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1c479c: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x1c479cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x1c47a0: 0x0  nop
    ctx->pc = 0x1c47a0u;
    // NOP
    // 0x1c47a4: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C47A4u;
    {
        const bool branch_taken_0x1c47a4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1C47A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C47A4u;
        // 0x1c47a8: 0x24630030  addiu       $v1, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c47a4) {
            ctx->pc = 0x1C4790u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c4790;
        }
    }
    ctx->pc = 0x1C47ACu;
    // 0x1c47ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1C47ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C47B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C47ACu;
        // 0x1c47b0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C47ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C47B4u;
    // 0x1c47b4: 0x0  nop
    ctx->pc = 0x1c47b4u;
    // NOP
    if (ctx->pc == 0x1c47b4u) { ctx->pc = 0x1c47b8u; }
}
