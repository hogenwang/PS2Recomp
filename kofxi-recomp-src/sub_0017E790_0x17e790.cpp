#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017E790
// Address: 0x17e790 - 0x17e800
void sub_0017E790_0x17e790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E790_0x17e790");
#endif

    switch (ctx->pc) {
        case 0x17e7acu: goto label_17e7ac;
        case 0x17e7b8u: goto label_17e7b8;
        case 0x17e7c8u: goto label_17e7c8;
        case 0x17e7d0u: goto label_17e7d0;
        case 0x17e7d8u: goto label_17e7d8;
        case 0x17e7e0u: goto label_17e7e0;
        default: break;
    }

    ctx->pc = 0x17e790u;

    // 0x17e790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17e790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17e794: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17e794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17e798: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17e798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17e79c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17e79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17e7a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17e7a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e7a4: 0xc057c28  jal         func_15F0A0
    ctx->pc = 0x17E7A4u;
    SET_GPR_U32(ctx, 31, 0x17E7ACu);
    ctx->pc = 0x17E7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E7A4u;
            // 0x17e7a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F0A0u;
    if (runtime->hasFunction(0x15F0A0u)) {
        auto targetFn = runtime->lookupFunction(0x15F0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E7ACu; }
        if (ctx->pc != 0x17E7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F0A0_0x15f0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E7ACu; }
        if (ctx->pc != 0x17E7ACu) { return; }
    }
    ctx->pc = 0x17E7ACu;
label_17e7ac:
    // 0x17e7ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17e7acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e7b0: 0xc057be0  jal         func_15EF80
    ctx->pc = 0x17E7B0u;
    SET_GPR_U32(ctx, 31, 0x17E7B8u);
    ctx->pc = 0x17E7B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E7B0u;
            // 0x17e7b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EF80u;
    if (runtime->hasFunction(0x15EF80u)) {
        auto targetFn = runtime->lookupFunction(0x15EF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E7B8u; }
        if (ctx->pc != 0x17E7B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EF80_0x15ef80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E7B8u; }
        if (ctx->pc != 0x17E7B8u) { return; }
    }
    ctx->pc = 0x17E7B8u;
label_17e7b8:
    // 0x17e7b8: 0x9226008c  lbu         $a2, 0x8C($s1)
    ctx->pc = 0x17e7b8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x17e7bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17e7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e7c0: 0xc058528  jal         func_1614A0
    ctx->pc = 0x17E7C0u;
    SET_GPR_U32(ctx, 31, 0x17E7C8u);
    ctx->pc = 0x17E7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E7C0u;
            // 0x17e7c4: 0x26250268  addiu       $a1, $s1, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1614A0u;
    if (runtime->hasFunction(0x1614A0u)) {
        auto targetFn = runtime->lookupFunction(0x1614A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E7C8u; }
        if (ctx->pc != 0x17E7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001614A0_0x1614a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E7C8u; }
        if (ctx->pc != 0x17E7C8u) { return; }
    }
    ctx->pc = 0x17E7C8u;
label_17e7c8:
    // 0x17e7c8: 0xc058690  jal         func_161A40
    ctx->pc = 0x17E7C8u;
    SET_GPR_U32(ctx, 31, 0x17E7D0u);
    ctx->pc = 0x17E7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E7C8u;
            // 0x17e7cc: 0x262405f8  addiu       $a0, $s1, 0x5F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161A40u;
    if (runtime->hasFunction(0x161A40u)) {
        auto targetFn = runtime->lookupFunction(0x161A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E7D0u; }
        if (ctx->pc != 0x17E7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00161A40_0x161a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E7D0u; }
        if (ctx->pc != 0x17E7D0u) { return; }
    }
    ctx->pc = 0x17E7D0u;
label_17e7d0:
    // 0x17e7d0: 0xc057b84  jal         func_15EE10
    ctx->pc = 0x17E7D0u;
    SET_GPR_U32(ctx, 31, 0x17E7D8u);
    ctx->pc = 0x17E7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E7D0u;
            // 0x17e7d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EE10u;
    if (runtime->hasFunction(0x15EE10u)) {
        auto targetFn = runtime->lookupFunction(0x15EE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E7D8u; }
        if (ctx->pc != 0x17E7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EE10_0x15ee10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E7D8u; }
        if (ctx->pc != 0x17E7D8u) { return; }
    }
    ctx->pc = 0x17E7D8u;
label_17e7d8:
    // 0x17e7d8: 0xc057bbc  jal         func_15EEF0
    ctx->pc = 0x17E7D8u;
    SET_GPR_U32(ctx, 31, 0x17E7E0u);
    ctx->pc = 0x17E7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E7D8u;
            // 0x17e7dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EEF0u;
    if (runtime->hasFunction(0x15EEF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E7E0u; }
        if (ctx->pc != 0x17E7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EEF0_0x15eef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E7E0u; }
        if (ctx->pc != 0x17E7E0u) { return; }
    }
    ctx->pc = 0x17E7E0u;
label_17e7e0:
    // 0x17e7e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17e7e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e7e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17e7e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e7e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17e7e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e7ec: 0x3e00008  jr          $ra
    ctx->pc = 0x17E7ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E7ECu;
            // 0x17e7f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E7F4u;
    // 0x17e7f4: 0x0  nop
    ctx->pc = 0x17e7f4u;
    // NOP
    // 0x17e7f8: 0x0  nop
    ctx->pc = 0x17e7f8u;
    // NOP
    // 0x17e7fc: 0x0  nop
    ctx->pc = 0x17e7fcu;
    // NOP
    ctx->pc = 0x17e800u;
}
