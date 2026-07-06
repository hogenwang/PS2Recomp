#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AF978
// Address: 0x1af978 - 0x1af9c8
void sub_001AF978_0x1af978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF978_0x1af978");
#endif

    switch (ctx->pc) {
        case 0x1af990u: goto label_1af990;
        case 0x1af9a4u: goto label_1af9a4;
        case 0x1af9acu: goto label_1af9ac;
        case 0x1af9b4u: goto label_1af9b4;
        default: break;
    }

    ctx->pc = 0x1af978u;

    // 0x1af978: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1af978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1af97c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1af980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af984: 0x806be72  j           func_1AF9C8
    ctx->pc = 0x1AF984u;
    ctx->pc = 0x1AF988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF984u;
            // 0x1af988: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF9C8u;
    if (runtime->hasFunction(0x1AF9C8u)) {
        auto targetFn = runtime->lookupFunction(0x1AF9C8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AF9C8_0x1af9c8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AF98Cu;
    // 0x1af98c: 0x0  nop
    ctx->pc = 0x1af98cu;
    // NOP
label_1af990:
    // 0x1af990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1af990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1af994: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1af994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1af998: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1af998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1af99c: 0xc06c6ac  jal         func_1B1AB0
    ctx->pc = 0x1AF99Cu;
    SET_GPR_U32(ctx, 31, 0x1AF9A4u);
    ctx->pc = 0x1AF9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF99Cu;
            // 0x1af9a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AB0u;
    if (runtime->hasFunction(0x1B1AB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF9A4u; }
        if (ctx->pc != 0x1AF9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AB0_0x1b1ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF9A4u; }
        if (ctx->pc != 0x1AF9A4u) { return; }
    }
    ctx->pc = 0x1AF9A4u;
label_1af9a4:
    // 0x1af9a4: 0xc06be72  jal         func_1AF9C8
    ctx->pc = 0x1AF9A4u;
    SET_GPR_U32(ctx, 31, 0x1AF9ACu);
    ctx->pc = 0x1AF9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF9A4u;
            // 0x1af9a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF9C8u;
    if (runtime->hasFunction(0x1AF9C8u)) {
        auto targetFn = runtime->lookupFunction(0x1AF9C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF9ACu; }
        if (ctx->pc != 0x1AF9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF9C8_0x1af9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF9ACu; }
        if (ctx->pc != 0x1AF9ACu) { return; }
    }
    ctx->pc = 0x1AF9ACu;
label_1af9ac:
    // 0x1af9ac: 0xc06c6b2  jal         func_1B1AC8
    ctx->pc = 0x1AF9ACu;
    SET_GPR_U32(ctx, 31, 0x1AF9B4u);
    ctx->pc = 0x1AF9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF9ACu;
            // 0x1af9b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AC8u;
    if (runtime->hasFunction(0x1B1AC8u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF9B4u; }
        if (ctx->pc != 0x1AF9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AC8_0x1b1ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF9B4u; }
        if (ctx->pc != 0x1AF9B4u) { return; }
    }
    ctx->pc = 0x1AF9B4u;
label_1af9b4:
    // 0x1af9b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1af9b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1af9b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1af9b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af9bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af9bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af9c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF9C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF9C0u;
            // 0x1af9c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF9C8u;
    ctx->pc = 0x1af9c8u;
}
