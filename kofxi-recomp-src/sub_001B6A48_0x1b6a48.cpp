#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6A48
// Address: 0x1b6a48 - 0x1b6ac0
void sub_001B6A48_0x1b6a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6A48_0x1b6a48");
#endif

    switch (ctx->pc) {
        case 0x1b6a7cu: goto label_1b6a7c;
        default: break;
    }

    ctx->pc = 0x1b6a48u;

    // 0x1b6a48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b6a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b6a4c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b6a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b6a50: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1b6a50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6a54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b6a58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b6a58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6a5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b6a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b6a60: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1b6a60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6a64: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b6a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b6a68: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b6a68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6a6c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b6a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b6a70: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1b6a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1b6a74: 0xc06e042  jal         func_1B8108
    ctx->pc = 0x1B6A74u;
    SET_GPR_U32(ctx, 31, 0x1B6A7Cu);
    ctx->pc = 0x1B6A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6A74u;
            // 0x1b6a78: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8108u;
    if (runtime->hasFunction(0x1B8108u)) {
        auto targetFn = runtime->lookupFunction(0x1B8108u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6A7Cu; }
        if (ctx->pc != 0x1B6A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8108_0x1b8108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6A7Cu; }
        if (ctx->pc != 0x1B6A7Cu) { return; }
    }
    ctx->pc = 0x1B6A7Cu;
label_1b6a7c:
    // 0x1b6a7c: 0x121ac0  sll         $v1, $s2, 11
    ctx->pc = 0x1b6a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 11));
    // 0x1b6a80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b6a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6a84: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x1b6a84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x1b6a88: 0xae120014  sw          $s2, 0x14($s0)
    ctx->pc = 0x1b6a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 18));
    // 0x1b6a8c: 0xae130050  sw          $s3, 0x50($s0)
    ctx->pc = 0x1b6a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 19));
    // 0x1b6a90: 0xae140054  sw          $s4, 0x54($s0)
    ctx->pc = 0x1b6a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 20));
    // 0x1b6a94: 0xa2020045  sb          $v0, 0x45($s0)
    ctx->pc = 0x1b6a94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b6a98: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1b6a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1b6a9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b6a9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6aa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6aa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6aa4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b6aa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6aa8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b6aa8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b6aac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b6aacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6ab0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1b6ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b6ab4: 0x806e048  j           func_1B8120
    ctx->pc = 0x1B6AB4u;
    ctx->pc = 0x1B6AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6AB4u;
            // 0x1b6ab8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8120u;
    if (runtime->hasFunction(0x1B8120u)) {
        auto targetFn = runtime->lookupFunction(0x1B8120u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B8120_0x1b8120(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B6ABCu;
    // 0x1b6abc: 0x0  nop
    ctx->pc = 0x1b6abcu;
    // NOP
    ctx->pc = 0x1b6ac0u;
}
