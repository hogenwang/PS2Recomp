#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015EE00
// Address: 0x15ee00 - 0x15ee10
void sub_0015EE00_0x15ee00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015EE00_0x15ee00");
#endif

    ctx->pc = 0x15ee00u;

    // 0x15ee00: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15ee00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15ee04: 0xa04044d0  sb          $zero, 0x44D0($v0)
    ctx->pc = 0x15ee04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17616), (uint8_t)GPR_U32(ctx, 0));
    // 0x15ee08: 0x3e00008  jr          $ra
    ctx->pc = 0x15EE08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EE08u;
            // 0x15ee0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15EE10u;
    ctx->pc = 0x15ee10u;
}
