#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010AB68
// Address: 0x10ab68 - 0x10ab80
void sub_0010AB68_0x10ab68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AB68_0x10ab68");
#endif

    ctx->pc = 0x10ab68u;

    // 0x10ab68: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x10ab68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x10ab6c: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x10ab6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x10ab70: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x10ab70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x10ab74: 0x3e00008  jr          $ra
    ctx->pc = 0x10AB74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AB74u;
            // 0x10ab78: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10AB7Cu;
    // 0x10ab7c: 0x0  nop
    ctx->pc = 0x10ab7cu;
    // NOP
    ctx->pc = 0x10ab80u;
}
