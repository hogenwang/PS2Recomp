#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C62B8
// Address: 0x1c62b8 - 0x1c62e8
void sub_001C62B8_0x1c62b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C62B8_0x1c62b8");
#endif

    switch (ctx->pc) {
        case 0x1c62ccu: goto label_1c62cc;
        case 0x1c62d4u: goto label_1c62d4;
        default: break;
    }

    ctx->pc = 0x1c62b8u;

    // 0x1c62b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c62b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c62bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c62bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c62c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c62c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c62c4: 0xc071aae  jal         func_1C6AB8
    ctx->pc = 0x1C62C4u;
    SET_GPR_U32(ctx, 31, 0x1C62CCu);
    ctx->pc = 0x1C62C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C62C4u;
            // 0x1c62c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AB8u;
    if (runtime->hasFunction(0x1C6AB8u)) {
        auto targetFn = runtime->lookupFunction(0x1C6AB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C62CCu; }
        if (ctx->pc != 0x1C62CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6AB8_0x1c6ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C62CCu; }
        if (ctx->pc != 0x1C62CCu) { return; }
    }
    ctx->pc = 0x1C62CCu;
label_1c62cc:
    // 0x1c62cc: 0xc0718ba  jal         func_1C62E8
    ctx->pc = 0x1C62CCu;
    SET_GPR_U32(ctx, 31, 0x1C62D4u);
    ctx->pc = 0x1C62D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C62CCu;
            // 0x1c62d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C62E8u;
    if (runtime->hasFunction(0x1C62E8u)) {
        auto targetFn = runtime->lookupFunction(0x1C62E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C62D4u; }
        if (ctx->pc != 0x1C62D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C62E8_0x1c62e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C62D4u; }
        if (ctx->pc != 0x1C62D4u) { return; }
    }
    ctx->pc = 0x1C62D4u;
label_1c62d4:
    // 0x1c62d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c62d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c62d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c62d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c62dc: 0x8071ab0  j           func_1C6AC0
    ctx->pc = 0x1C62DCu;
    ctx->pc = 0x1C62E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C62DCu;
            // 0x1c62e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AC0u;
    if (runtime->hasFunction(0x1C6AC0u)) {
        auto targetFn = runtime->lookupFunction(0x1C6AC0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C6AC0_0x1c6ac0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C62E4u;
    // 0x1c62e4: 0x0  nop
    ctx->pc = 0x1c62e4u;
    // NOP
    ctx->pc = 0x1c62e8u;
}
