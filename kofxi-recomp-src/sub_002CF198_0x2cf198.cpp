#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CF198
// Address: 0x2cf198 - 0x2cf1d0
void sub_002CF198_0x2cf198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF198_0x2cf198");
#endif

    switch (ctx->pc) {
        case 0x2cf1acu: goto label_2cf1ac;
        case 0x2cf1b4u: goto label_2cf1b4;
        default: break;
    }

    ctx->pc = 0x2cf198u;

    // 0x2cf198: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cf198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cf19c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cf19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cf1a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2cf1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2cf1a4: 0xc0b3cfc  jal         func_2CF3F0
    ctx->pc = 0x2CF1A4u;
    SET_GPR_U32(ctx, 31, 0x2CF1ACu);
    ctx->pc = 0x2CF1A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF1A4u;
            // 0x2cf1a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF3F0u;
    if (runtime->hasFunction(0x2CF3F0u)) {
        auto targetFn = runtime->lookupFunction(0x2CF3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF1ACu; }
        if (ctx->pc != 0x2CF1ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CF3F0_0x2cf3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF1ACu; }
        if (ctx->pc != 0x2CF1ACu) { return; }
    }
    ctx->pc = 0x2CF1ACu;
label_2cf1ac:
    // 0x2cf1ac: 0xc0b2296  jal         func_2C8A58
    ctx->pc = 0x2CF1ACu;
    SET_GPR_U32(ctx, 31, 0x2CF1B4u);
    ctx->pc = 0x2CF1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF1ACu;
            // 0x2cf1b0: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8A58u;
    if (runtime->hasFunction(0x2C8A58u)) {
        auto targetFn = runtime->lookupFunction(0x2C8A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF1B4u; }
        if (ctx->pc != 0x2CF1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C8A58_0x2c8a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF1B4u; }
        if (ctx->pc != 0x2CF1B4u) { return; }
    }
    ctx->pc = 0x2CF1B4u;
label_2cf1b4:
    // 0x2cf1b4: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x2cf1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x2cf1b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2cf1b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cf1bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cf1bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf1c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cf1c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf1c4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2cf1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2cf1c8: 0x80b608e  j           func_2D8238
    ctx->pc = 0x2CF1C8u;
    ctx->pc = 0x2CF1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF1C8u;
            // 0x2cf1cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002D8238_0x2d8238(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2CF1D0u;
    ctx->pc = 0x2cf1d0u;
}
