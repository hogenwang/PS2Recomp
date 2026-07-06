#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001662C0
// Address: 0x1662c0 - 0x1662d0
void sub_001662C0_0x1662c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001662C0_0x1662c0");
#endif

    ctx->pc = 0x1662c0u;

    // 0x1662c0: 0x948203d8  lhu         $v0, 0x3D8($a0)
    ctx->pc = 0x1662c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 984)));
    // 0x1662c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1662c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1662c8: 0x805a068  j           func_1681A0
    ctx->pc = 0x1662C8u;
    ctx->pc = 0x1662CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1662C8u;
            // 0x1662cc: 0xa4820288  sh          $v0, 0x288($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 648), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1681A0u;
    if (runtime->hasFunction(0x1681A0u)) {
        auto targetFn = runtime->lookupFunction(0x1681A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001681A0_0x1681a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1662D0u;
    ctx->pc = 0x1662d0u;
}
