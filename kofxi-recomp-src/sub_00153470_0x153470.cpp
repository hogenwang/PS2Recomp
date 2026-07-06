#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00153470
// Address: 0x153470 - 0x153520
void sub_00153470_0x153470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153470_0x153470");
#endif

    switch (ctx->pc) {
        case 0x153484u: goto label_153484;
        case 0x153490u: goto label_153490;
        case 0x1534f8u: goto label_1534f8;
        case 0x153504u: goto label_153504;
        case 0x153510u: goto label_153510;
        default: break;
    }

    ctx->pc = 0x153470u;

    // 0x153470: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x153470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x153474: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x153474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153478: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x153478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15347c: 0xc067cac  jal         func_19F2B0
    ctx->pc = 0x15347Cu;
    SET_GPR_U32(ctx, 31, 0x153484u);
    ctx->pc = 0x153480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15347Cu;
            // 0x153480: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F2B0u;
    if (runtime->hasFunction(0x19F2B0u)) {
        auto targetFn = runtime->lookupFunction(0x19F2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153484u; }
        if (ctx->pc != 0x153484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F2B0_0x19f2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153484u; }
        if (ctx->pc != 0x153484u) { return; }
    }
    ctx->pc = 0x153484u;
label_153484:
    // 0x153484: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x153484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153488: 0xc067cac  jal         func_19F2B0
    ctx->pc = 0x153488u;
    SET_GPR_U32(ctx, 31, 0x153490u);
    ctx->pc = 0x15348Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153488u;
            // 0x15348c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F2B0u;
    if (runtime->hasFunction(0x19F2B0u)) {
        auto targetFn = runtime->lookupFunction(0x19F2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153490u; }
        if (ctx->pc != 0x153490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F2B0_0x19f2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153490u; }
        if (ctx->pc != 0x153490u) { return; }
    }
    ctx->pc = 0x153490u;
label_153490:
    // 0x153490: 0x3c024029  lui         $v0, 0x4029
    ctx->pc = 0x153490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16425 << 16));
    // 0x153494: 0x3c0343f0  lui         $v1, 0x43F0
    ctx->pc = 0x153494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17392 << 16));
    // 0x153498: 0x34489999  ori         $t0, $v0, 0x9999
    ctx->pc = 0x153498u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39321);
    // 0x15349c: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x15349cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x1534a0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1534a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1534a4: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x1534a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x1534a8: 0x8c47e7c8  lw          $a3, -0x1838($v0)
    ctx->pc = 0x1534a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x1534ac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1534acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1534b0: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1534b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x1534b4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1534b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1534b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1534b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1534bc: 0xafa80028  sw          $t0, 0x28($sp)
    ctx->pc = 0x1534bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 8));
    // 0x1534c0: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x1534c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x1534c4: 0xafa7001c  sw          $a3, 0x1C($sp)
    ctx->pc = 0x1534c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 7));
    // 0x1534c8: 0xafa7002c  sw          $a3, 0x2C($sp)
    ctx->pc = 0x1534c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 7));
    // 0x1534cc: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1534ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x1534d0: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1534d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1534d4: 0xafa80038  sw          $t0, 0x38($sp)
    ctx->pc = 0x1534d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 8));
    // 0x1534d8: 0xafa80048  sw          $t0, 0x48($sp)
    ctx->pc = 0x1534d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 8));
    // 0x1534dc: 0xafa7003c  sw          $a3, 0x3C($sp)
    ctx->pc = 0x1534dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 7));
    // 0x1534e0: 0xafa7004c  sw          $a3, 0x4C($sp)
    ctx->pc = 0x1534e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 7));
    // 0x1534e4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1534e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1534e8: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1534e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1534ec: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1534ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1534f0: 0xc067ce8  jal         func_19F3A0
    ctx->pc = 0x1534F0u;
    SET_GPR_U32(ctx, 31, 0x1534F8u);
    ctx->pc = 0x1534F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1534F0u;
            // 0x1534f4: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F3A0u;
    if (runtime->hasFunction(0x19F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x19F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1534F8u; }
        if (ctx->pc != 0x1534F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F3A0_0x19f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1534F8u; }
        if (ctx->pc != 0x1534F8u) { return; }
    }
    ctx->pc = 0x1534F8u;
label_1534f8:
    // 0x1534f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1534f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1534fc: 0xc067cac  jal         func_19F2B0
    ctx->pc = 0x1534FCu;
    SET_GPR_U32(ctx, 31, 0x153504u);
    ctx->pc = 0x153500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1534FCu;
            // 0x153500: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F2B0u;
    if (runtime->hasFunction(0x19F2B0u)) {
        auto targetFn = runtime->lookupFunction(0x19F2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153504u; }
        if (ctx->pc != 0x153504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F2B0_0x19f2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153504u; }
        if (ctx->pc != 0x153504u) { return; }
    }
    ctx->pc = 0x153504u;
label_153504:
    // 0x153504: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x153504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153508: 0xc067cac  jal         func_19F2B0
    ctx->pc = 0x153508u;
    SET_GPR_U32(ctx, 31, 0x153510u);
    ctx->pc = 0x15350Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153508u;
            // 0x15350c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F2B0u;
    if (runtime->hasFunction(0x19F2B0u)) {
        auto targetFn = runtime->lookupFunction(0x19F2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153510u; }
        if (ctx->pc != 0x153510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F2B0_0x19f2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153510u; }
        if (ctx->pc != 0x153510u) { return; }
    }
    ctx->pc = 0x153510u;
label_153510:
    // 0x153510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x153510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153514: 0x3e00008  jr          $ra
    ctx->pc = 0x153514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153514u;
            // 0x153518: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15351Cu;
    // 0x15351c: 0x0  nop
    ctx->pc = 0x15351cu;
    // NOP
    ctx->pc = 0x153520u;
}
