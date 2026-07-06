#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029B378
// Address: 0x29b378 - 0x29b388
void sub_0029B378_0x29b378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B378_0x29b378");
#endif

    ctx->pc = 0x29b378u;

    // 0x29b378: 0xac8500c8  sw          $a1, 0xC8($a0)
    ctx->pc = 0x29b378u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 5));
    // 0x29b37c: 0x3e00008  jr          $ra
    ctx->pc = 0x29B37Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B37Cu;
            // 0x29b380: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B384u;
    // 0x29b384: 0x0  nop
    ctx->pc = 0x29b384u;
    // NOP
    ctx->pc = 0x29b388u;
}
