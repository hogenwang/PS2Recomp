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

// Function: sub_001C2B40
// Address: 0x1c2b40 - 0x1c2b78
void sub_001C2B40_0x1c2b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2B40_0x1c2b40");
#endif

    switch (ctx->pc) {
        case 0x1c2b50u: goto label_1c2b50;
        default: break;
    }

    ctx->pc = 0x1c2b40u;

    // 0x1c2b40: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c2b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c2b44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2b48: 0x2443dd20  addiu       $v1, $v0, -0x22E0
    ctx->pc = 0x1c2b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958368));
    // 0x1c2b4c: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x1c2b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_1c2b50:
    // 0x1c2b50: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1c2b50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c2b54: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1c2b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1c2b58: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1c2b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1c2b5c: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x1c2b5cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x1c2b60: 0x0  nop
    ctx->pc = 0x1c2b60u;
    // NOP
    // 0x1c2b64: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C2B64u;
    {
        const bool branch_taken_0x1c2b64 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1C2B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B64u;
        // 0x1c2b68: 0x24630048  addiu       $v1, $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b64) {
            ctx->pc = 0x1C2B50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c2b50;
        }
    }
    ctx->pc = 0x1C2B6Cu;
    // 0x1c2b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B6Cu;
        // 0x1c2b70: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2B74u;
    // 0x1c2b74: 0x0  nop
    ctx->pc = 0x1c2b74u;
    // NOP
    if (ctx->pc == 0x1c2b74u) { ctx->pc = 0x1c2b78u; }
}
