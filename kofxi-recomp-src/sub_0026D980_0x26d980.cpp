#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026D980
// Address: 0x26d980 - 0x26d9e8
void sub_0026D980_0x26d980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026D980_0x26d980");
#endif

    switch (ctx->pc) {
        case 0x26d9a0u: goto label_26d9a0;
        case 0x26d9acu: goto label_26d9ac;
        case 0x26d9b8u: goto label_26d9b8;
        case 0x26d9c8u: goto label_26d9c8;
        default: break;
    }

    ctx->pc = 0x26d980u;

    // 0x26d980: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26d980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26d984: 0x2485006a  addiu       $a1, $a0, 0x6A
    ctx->pc = 0x26d984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 106));
    // 0x26d988: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x26d988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x26d98c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x26d98cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x26d990: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x26d990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x26d994: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26d994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x26d998: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26D998u;
    SET_GPR_U32(ctx, 31, 0x26D9A0u);
    ctx->pc = 0x26D99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D998u;
            // 0x26d99c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D9A0u; }
        if (ctx->pc != 0x26D9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D9A0u; }
        if (ctx->pc != 0x26D9A0u) { return; }
    }
    ctx->pc = 0x26D9A0u;
label_26d9a0:
    // 0x26d9a0: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x26d9a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26d9a4: 0xc098ba8  jal         func_262EA0
    ctx->pc = 0x26D9A4u;
    SET_GPR_U32(ctx, 31, 0x26D9ACu);
    ctx->pc = 0x26D9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D9A4u;
            // 0x26d9a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262EA0u;
    if (runtime->hasFunction(0x262EA0u)) {
        auto targetFn = runtime->lookupFunction(0x262EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D9ACu; }
        if (ctx->pc != 0x26D9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262EA0_0x262ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D9ACu; }
        if (ctx->pc != 0x26D9ACu) { return; }
    }
    ctx->pc = 0x26D9ACu;
label_26d9ac:
    // 0x26d9ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26d9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d9b0: 0xc09ae16  jal         func_26B858
    ctx->pc = 0x26D9B0u;
    SET_GPR_U32(ctx, 31, 0x26D9B8u);
    ctx->pc = 0x26D9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D9B0u;
            // 0x26d9b4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B858u;
    if (runtime->hasFunction(0x26B858u)) {
        auto targetFn = runtime->lookupFunction(0x26B858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D9B8u; }
        if (ctx->pc != 0x26D9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026B858_0x26b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D9B8u; }
        if (ctx->pc != 0x26D9B8u) { return; }
    }
    ctx->pc = 0x26D9B8u;
label_26d9b8:
    // 0x26d9b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26d9b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d9bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26d9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d9c0: 0xc09ae16  jal         func_26B858
    ctx->pc = 0x26D9C0u;
    SET_GPR_U32(ctx, 31, 0x26D9C8u);
    ctx->pc = 0x26D9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D9C0u;
            // 0x26d9c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B858u;
    if (runtime->hasFunction(0x26B858u)) {
        auto targetFn = runtime->lookupFunction(0x26B858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D9C8u; }
        if (ctx->pc != 0x26D9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026B858_0x26b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D9C8u; }
        if (ctx->pc != 0x26D9C8u) { return; }
    }
    ctx->pc = 0x26D9C8u;
label_26d9c8:
    // 0x26d9c8: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x26d9c8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x26d9cc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26d9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26d9d0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x26d9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x26d9d4: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x26d9d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26d9d8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x26d9d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26d9dc: 0x3e00008  jr          $ra
    ctx->pc = 0x26D9DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D9DCu;
            // 0x26d9e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26D9E4u;
    // 0x26d9e4: 0x0  nop
    ctx->pc = 0x26d9e4u;
    // NOP
    ctx->pc = 0x26d9e8u;
}
