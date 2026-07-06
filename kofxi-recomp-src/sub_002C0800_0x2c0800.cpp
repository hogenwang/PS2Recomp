#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C0800
// Address: 0x2c0800 - 0x2c0810
void sub_002C0800_0x2c0800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0800_0x2c0800");
#endif

    ctx->pc = 0x2c0800u;

    // 0x2c0800: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2c0800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2c0804: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0804u;
            // 0x2c0808: 0x2442ed10  addiu       $v0, $v0, -0x12F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C080Cu;
    // 0x2c080c: 0x0  nop
    ctx->pc = 0x2c080cu;
    // NOP
    ctx->pc = 0x2c0810u;
}
