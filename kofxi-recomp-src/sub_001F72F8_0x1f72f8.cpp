#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F72F8
// Address: 0x1f72f8 - 0x1f7308
void sub_001F72F8_0x1f72f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F72F8_0x1f72f8");
#endif

    ctx->pc = 0x1f72f8u;

    // 0x1f72f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f72f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f72fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f72fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7300: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7300u;
            // 0x1f7304: 0xac83004c  sw          $v1, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F7308u;
    ctx->pc = 0x1f7308u;
}
