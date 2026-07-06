#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B7A18
// Address: 0x1b7a18 - 0x1b7a30
void sub_001B7A18_0x1b7a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7A18_0x1b7a18");
#endif

    switch (ctx->pc) {
        case 0x1b7a28u: goto label_1b7a28;
        default: break;
    }

    ctx->pc = 0x1b7a18u;

    // 0x1b7a18: 0xac85002c  sw          $a1, 0x2C($a0)
    ctx->pc = 0x1b7a18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 5));
    // 0x1b7a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7A1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7A1Cu;
            // 0x1b7a20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7A24u;
    // 0x1b7a24: 0x0  nop
    ctx->pc = 0x1b7a24u;
    // NOP
label_1b7a28:
    // 0x1b7a28: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7A28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7A30u;
    ctx->pc = 0x1b7a30u;
}
