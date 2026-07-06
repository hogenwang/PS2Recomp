#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C5F28
// Address: 0x1c5f28 - 0x1c5f30
void sub_001C5F28_0x1c5f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5F28_0x1c5f28");
#endif

    ctx->pc = 0x1c5f28u;

    // 0x1c5f28: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5F28u;
            // 0x1c5f2c: 0xac850028  sw          $a1, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5F30u;
    ctx->pc = 0x1c5f30u;
}
