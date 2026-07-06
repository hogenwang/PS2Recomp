#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A48A0
// Address: 0x1a48a0 - 0x1a48c0
void sub_001A48A0_0x1a48a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A48A0_0x1a48a0");
#endif

    ctx->pc = 0x1a48a0u;

    // 0x1a48a0: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1a48a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1a48a4: 0x3c0501cd  lui         $a1, 0x1CD
    ctx->pc = 0x1a48a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)461 << 16));
    // 0x1a48a8: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1a48a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1a48ac: 0x24846948  addiu       $a0, $a0, 0x6948
    ctx->pc = 0x1a48acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26952));
    // 0x1a48b0: 0x24a5f500  addiu       $a1, $a1, -0xB00
    ctx->pc = 0x1a48b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964480));
    // 0x1a48b4: 0x8068fcc  j           func_1A3F30
    ctx->pc = 0x1A48B4u;
    ctx->pc = 0x1A48B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A48B4u;
            // 0x1a48b8: 0x34462000  ori         $a2, $v0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3F30u;
    if (runtime->hasFunction(0x1A3F30u)) {
        auto targetFn = runtime->lookupFunction(0x1A3F30u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A3F30_0x1a3f30(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A48BCu;
    // 0x1a48bc: 0x0  nop
    ctx->pc = 0x1a48bcu;
    // NOP
    ctx->pc = 0x1a48c0u;
}
