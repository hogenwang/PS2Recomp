#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00189E50
// Address: 0x189e50 - 0x189e60
void sub_00189E50_0x189e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189E50_0x189e50");
#endif

    ctx->pc = 0x189e50u;

    // 0x189e50: 0x3082000c  andi        $v0, $a0, 0xC
    ctx->pc = 0x189e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x189e54: 0x8062784  j           func_189E10
    ctx->pc = 0x189E54u;
    ctx->pc = 0x189E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189E54u;
            // 0x189e58: 0x22082  srl         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189E10u;
    if (runtime->hasFunction(0x189E10u)) {
        auto targetFn = runtime->lookupFunction(0x189E10u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00189E10_0x189e10(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x189E5Cu;
    // 0x189e5c: 0x0  nop
    ctx->pc = 0x189e5cu;
    // NOP
    ctx->pc = 0x189e60u;
}
