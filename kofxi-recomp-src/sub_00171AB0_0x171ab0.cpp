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

// Function: sub_00171AB0
// Address: 0x171ab0 - 0x171ad0
void sub_00171AB0_0x171ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171AB0_0x171ab0");
#endif

    ctx->pc = 0x171ab0u;

    // 0x171ab0: 0x30830200  andi        $v1, $a0, 0x200
    ctx->pc = 0x171ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
    // 0x171ab4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x171AB4u;
    {
        const bool branch_taken_0x171ab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x171AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171AB4u;
        // 0x171ab8: 0x30820003  andi        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x171ab4) {
            ctx->pc = 0x171AC0u;
            goto label_171ac0;
        }
    }
    ctx->pc = 0x171ABCu;
    // 0x171abc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x171abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_171ac0:
    // 0x171ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x171AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171AC8u;
    // 0x171ac8: 0x0  nop
    ctx->pc = 0x171ac8u;
    // NOP
    // 0x171acc: 0x0  nop
    ctx->pc = 0x171accu;
    // NOP
}
