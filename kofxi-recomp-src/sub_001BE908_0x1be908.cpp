#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BE908
// Address: 0x1be908 - 0x1be918
void sub_001BE908_0x1be908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE908_0x1be908");
#endif

    ctx->pc = 0x1be908u;

    // 0x1be908: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1be908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1be90c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE90Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE90Cu;
            // 0x1be910: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE914u;
    // 0x1be914: 0x0  nop
    ctx->pc = 0x1be914u;
    // NOP
    ctx->pc = 0x1be918u;
}
