#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020EB80
// Address: 0x20eb80 - 0x20eba0
void sub_0020EB80_0x20eb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020EB80_0x20eb80");
#endif

    ctx->pc = 0x20eb80u;

    // 0x20eb80: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x20eb80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20eb84: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x20eb84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x20eb88: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x20eb88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20eb8c: 0x24a5f9a0  addiu       $a1, $a1, -0x660
    ctx->pc = 0x20eb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965664));
    // 0x20eb90: 0x804a5f2  j           func_1297C8
    ctx->pc = 0x20EB90u;
    ctx->pc = 0x20EB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20EB90u;
            // 0x20eb94: 0x2484a4c0  addiu       $a0, $a0, -0x5B40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001297C8_0x1297c8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x20EB98u;
    // 0x20eb98: 0x0  nop
    ctx->pc = 0x20eb98u;
    // NOP
    // 0x20eb9c: 0x0  nop
    ctx->pc = 0x20eb9cu;
    // NOP
    ctx->pc = 0x20eba0u;
}
