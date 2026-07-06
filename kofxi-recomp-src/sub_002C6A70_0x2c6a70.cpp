#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C6A70
// Address: 0x2c6a70 - 0x2c6a80
void sub_002C6A70_0x2c6a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6A70_0x2c6a70");
#endif

    ctx->pc = 0x2c6a70u;

    // 0x2c6a70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c6a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6a74: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6A74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6A74u;
            // 0x2c6a78: 0xac820028  sw          $v0, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C6A7Cu;
    // 0x2c6a7c: 0x0  nop
    ctx->pc = 0x2c6a7cu;
    // NOP
    ctx->pc = 0x2c6a80u;
}
