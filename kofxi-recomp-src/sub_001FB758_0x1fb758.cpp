#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FB758
// Address: 0x1fb758 - 0x1fb780
void sub_001FB758_0x1fb758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB758_0x1fb758");
#endif

    ctx->pc = 0x1fb758u;

    // 0x1fb758: 0xa480001e  sh          $zero, 0x1E($a0)
    ctx->pc = 0x1fb758u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 0));
    // 0x1fb75c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1fb75cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1fb760: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1fb760u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1fb764: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1fb764u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1fb768: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1fb768u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1fb76c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1fb76cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1fb770: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1fb770u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1fb774: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1fb774u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1fb778: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB778u;
            // 0x1fb77c: 0xa480001c  sh          $zero, 0x1C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FB780u;
    ctx->pc = 0x1fb780u;
}
