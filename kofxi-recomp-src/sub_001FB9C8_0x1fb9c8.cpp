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

// Function: sub_001FB9C8
// Address: 0x1fb9c8 - 0x1fba00
void sub_001FB9C8_0x1fb9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB9C8_0x1fb9c8");
#endif

    ctx->pc = 0x1fb9c8u;

    // 0x1fb9c8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1fb9c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb9cc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1fb9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fb9d0: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x1fb9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x1fb9d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fb9d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb9d8: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FB9D8u;
    {
        const bool branch_taken_0x1fb9d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1FB9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB9D8u;
        // 0x1fb9dc: 0x24a60950  addiu       $a2, $a1, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb9d8) {
            ctx->pc = 0x1FB9F4u;
            goto label_1fb9f4;
        }
    }
    ctx->pc = 0x1FB9E0u;
    // 0x1fb9e0: 0x8ca30050  lw          $v1, 0x50($a1)
    ctx->pc = 0x1fb9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x1fb9e4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FB9E4u;
    {
        const bool branch_taken_0x1fb9e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb9e4) {
            ctx->pc = 0x1FB9F4u;
            goto label_1fb9f4;
        }
    }
    ctx->pc = 0x1FB9ECu;
    // 0x1fb9ec: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x1fb9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1fb9f0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1fb9f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1fb9f4:
    // 0x1fb9f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB9F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB9FCu;
    // 0x1fb9fc: 0x0  nop
    ctx->pc = 0x1fb9fcu;
    // NOP
}
