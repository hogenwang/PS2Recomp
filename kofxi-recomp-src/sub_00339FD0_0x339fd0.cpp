#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00339FD0
// Address: 0x339fd0 - 0x339ff0
void sub_00339FD0_0x339fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339FD0_0x339fd0");
#endif

    ctx->pc = 0x339fd0u;

    // 0x339fd0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x339fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x339fd4: 0x240400f8  addiu       $a0, $zero, 0xF8
    ctx->pc = 0x339fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    // 0x339fd8: 0x8046e8e8  lb          $a2, -0x1718($v0)
    ctx->pc = 0x339fd8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961384)));
    // 0x339fdc: 0x80ce7a4  j           func_339E90
    ctx->pc = 0x339FDCu;
    ctx->pc = 0x339FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x339FDCu;
            // 0x339fe0: 0x240500ec  addiu       $a1, $zero, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x339E90u;
    if (runtime->hasFunction(0x339E90u)) {
        auto targetFn = runtime->lookupFunction(0x339E90u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00339E90_0x339e90(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x339FE4u;
    // 0x339fe4: 0x0  nop
    ctx->pc = 0x339fe4u;
    // NOP
    // 0x339fe8: 0x0  nop
    ctx->pc = 0x339fe8u;
    // NOP
    // 0x339fec: 0x0  nop
    ctx->pc = 0x339fecu;
    // NOP
    ctx->pc = 0x339ff0u;
}
