#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F8A30
// Address: 0x1f8a30 - 0x1f8a40
void sub_001F8A30_0x1f8a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8A30_0x1f8a30");
#endif

    ctx->pc = 0x1f8a30u;

    // 0x1f8a30: 0xfc800010  sd          $zero, 0x10($a0)
    ctx->pc = 0x1f8a30u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 0));
    // 0x1f8a34: 0xfc800000  sd          $zero, 0x0($a0)
    ctx->pc = 0x1f8a34u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 0));
    // 0x1f8a38: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8A38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8A38u;
            // 0x1f8a3c: 0xfc800008  sd          $zero, 0x8($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F8A40u;
    ctx->pc = 0x1f8a40u;
}
