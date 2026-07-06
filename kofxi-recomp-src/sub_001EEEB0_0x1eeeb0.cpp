#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EEEB0
// Address: 0x1eeeb0 - 0x1eeec8
void sub_001EEEB0_0x1eeeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EEEB0_0x1eeeb0");
#endif

    ctx->pc = 0x1eeeb0u;

    // 0x1eeeb0: 0x8c831fd4  lw          $v1, 0x1FD4($a0)
    ctx->pc = 0x1eeeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8148)));
    // 0x1eeeb4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1eeeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1eeeb8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1eeeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1eeebc: 0x3e00008  jr          $ra
    ctx->pc = 0x1EEEBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EEEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEEBCu;
            // 0x1eeec0: 0xac620020  sw          $v0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EEEC4u;
    // 0x1eeec4: 0x0  nop
    ctx->pc = 0x1eeec4u;
    // NOP
    ctx->pc = 0x1eeec8u;
}
