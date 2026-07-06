#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FA650
// Address: 0x2fa650 - 0x2fa660
void sub_002FA650_0x2fa650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA650_0x2fa650");
#endif

    ctx->pc = 0x2fa650u;

    // 0x2fa650: 0xac800168  sw          $zero, 0x168($a0)
    ctx->pc = 0x2fa650u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 360), GPR_U32(ctx, 0));
    // 0x2fa654: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA654u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA654u;
            // 0x2fa658: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FA65Cu;
    // 0x2fa65c: 0x0  nop
    ctx->pc = 0x2fa65cu;
    // NOP
    ctx->pc = 0x2fa660u;
}
