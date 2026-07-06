#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003005E4
// Address: 0x3005e4 - 0x300780
void sub_003005E4_0x3005e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003005E4_0x3005e4");
#endif

    switch (ctx->pc) {
        case 0x3005f0u: goto label_3005f0;
        case 0x300610u: goto label_300610;
        case 0x300620u: goto label_300620;
        case 0x300644u: goto label_300644;
        case 0x300688u: goto label_300688;
        case 0x3006acu: goto label_3006ac;
        case 0x3006c8u: goto label_3006c8;
        case 0x3006e0u: goto label_3006e0;
        case 0x300708u: goto label_300708;
        case 0x300718u: goto label_300718;
        case 0x300734u: goto label_300734;
        case 0x30075cu: goto label_30075c;
        case 0x300770u: goto label_300770;
        default: break;
    }

    ctx->pc = 0x3005e4u;

    // 0x3005e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3005e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3005e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3005E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3005ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3005E8u;
            // 0x3005ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3005F0u;
label_3005f0:
    // 0x3005f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3005f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3005f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3005f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3005f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3005f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3005fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3005fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300600: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x300600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x300604: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x300604u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x300608: 0xc047b8e  jal         func_11EE38
    ctx->pc = 0x300608u;
    SET_GPR_U32(ctx, 31, 0x300610u);
    ctx->pc = 0x30060Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300608u;
            // 0x30060c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EE38u;
    if (runtime->hasFunction(0x11EE38u)) {
        auto targetFn = runtime->lookupFunction(0x11EE38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300610u; }
        if (ctx->pc != 0x300610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EE38_0x11ee38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300610u; }
        if (ctx->pc != 0x300610u) { return; }
    }
    ctx->pc = 0x300610u;
label_300610:
    // 0x300610: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x300610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300614: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x300614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300618: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x300618u;
    SET_GPR_U32(ctx, 31, 0x300620u);
    ctx->pc = 0x30061Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300618u;
            // 0x30061c: 0x27a6001c  addiu       $a2, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (runtime->hasFunction(0x11ED18u)) {
        auto targetFn = runtime->lookupFunction(0x11ED18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300620u; }
        if (ctx->pc != 0x300620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011ED18_0x11ed18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300620u; }
        if (ctx->pc != 0x300620u) { return; }
    }
    ctx->pc = 0x300620u;
label_300620:
    // 0x300620: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x300620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x300624: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x300624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x300628: 0x50a40008  beql        $a1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x300628u;
    {
        const bool branch_taken_0x300628 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x300628) {
            ctx->pc = 0x30062Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x300628u;
            // 0x30062c: 0x8fa3001c  lw          $v1, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30064Cu;
            goto label_30064c;
        }
    }
    ctx->pc = 0x300630u;
    // 0x300630: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x300630u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x300634: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x300634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300638: 0x24c605f0  addiu       $a2, $a2, 0x5F0
    ctx->pc = 0x300638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1520));
    // 0x30063c: 0xc0bf89c  jal         func_2FE270
    ctx->pc = 0x30063Cu;
    SET_GPR_U32(ctx, 31, 0x300644u);
    ctx->pc = 0x300640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30063Cu;
            // 0x300640: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FE270u;
    if (runtime->hasFunction(0x2FE270u)) {
        auto targetFn = runtime->lookupFunction(0x2FE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300644u; }
        if (ctx->pc != 0x300644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FE270_0x2fe270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300644u; }
        if (ctx->pc != 0x300644u) { return; }
    }
    ctx->pc = 0x300644u;
label_300644:
    // 0x300644: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x300644u;
    {
        const bool branch_taken_0x300644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300644u;
            // 0x300648: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300644) {
            ctx->pc = 0x300774u;
            goto label_300774;
        }
    }
    ctx->pc = 0x30064Cu;
label_30064c:
    // 0x30064c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x30064cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x300650: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x300650u;
    {
        const bool branch_taken_0x300650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x300650) {
            ctx->pc = 0x3006B4u;
            goto label_3006b4;
        }
    }
    ctx->pc = 0x300658u;
    // 0x300658: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x300658u;
    {
        const bool branch_taken_0x300658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x300658) {
            ctx->pc = 0x300690u;
            goto label_300690;
        }
    }
    ctx->pc = 0x300660u;
    // 0x300660: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x300660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x300664: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x300664u;
    {
        const bool branch_taken_0x300664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x300664) {
            ctx->pc = 0x300674u;
            goto label_300674;
        }
    }
    ctx->pc = 0x30066Cu;
    // 0x30066c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x30066Cu;
    {
        const bool branch_taken_0x30066c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30066Cu;
            // 0x300670: 0x3c060030  lui         $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30066c) {
            ctx->pc = 0x3006D0u;
            goto label_3006d0;
        }
    }
    ctx->pc = 0x300674u;
label_300674:
    // 0x300674: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x300674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x300678: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x300678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x30067c: 0x24a50270  addiu       $a1, $a1, 0x270
    ctx->pc = 0x30067cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 624));
    // 0x300680: 0xc0bf86c  jal         func_2FE1B0
    ctx->pc = 0x300680u;
    SET_GPR_U32(ctx, 31, 0x300688u);
    ctx->pc = 0x300684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300680u;
            // 0x300684: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FE1B0u;
    if (runtime->hasFunction(0x2FE1B0u)) {
        auto targetFn = runtime->lookupFunction(0x2FE1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300688u; }
        if (ctx->pc != 0x300688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FE1B0_0x2fe1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300688u; }
        if (ctx->pc != 0x300688u) { return; }
    }
    ctx->pc = 0x300688u;
label_300688:
    // 0x300688: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x300688u;
    {
        const bool branch_taken_0x300688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300688) {
            ctx->pc = 0x300770u;
            goto label_300770;
        }
    }
    ctx->pc = 0x300690u;
label_300690:
    // 0x300690: 0x10a40015  beq         $a1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x300690u;
    {
        const bool branch_taken_0x300690 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x300690) {
            ctx->pc = 0x3006E8u;
            goto label_3006e8;
        }
    }
    ctx->pc = 0x300698u;
    // 0x300698: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x300698u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x30069c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30069cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3006a0: 0x24c60450  addiu       $a2, $a2, 0x450
    ctx->pc = 0x3006a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1104));
    // 0x3006a4: 0xc0bf86c  jal         func_2FE1B0
    ctx->pc = 0x3006A4u;
    SET_GPR_U32(ctx, 31, 0x3006ACu);
    ctx->pc = 0x3006A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3006A4u;
            // 0x3006a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FE1B0u;
    if (runtime->hasFunction(0x2FE1B0u)) {
        auto targetFn = runtime->lookupFunction(0x2FE1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3006ACu; }
        if (ctx->pc != 0x3006ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FE1B0_0x2fe1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3006ACu; }
        if (ctx->pc != 0x3006ACu) { return; }
    }
    ctx->pc = 0x3006ACu;
label_3006ac:
    // 0x3006ac: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x3006ACu;
    {
        const bool branch_taken_0x3006ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3006ac) {
            ctx->pc = 0x300770u;
            goto label_300770;
        }
    }
    ctx->pc = 0x3006B4u;
label_3006b4:
    // 0x3006b4: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x3006b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x3006b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3006b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3006bc: 0x24c60450  addiu       $a2, $a2, 0x450
    ctx->pc = 0x3006bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1104));
    // 0x3006c0: 0xc0bf86c  jal         func_2FE1B0
    ctx->pc = 0x3006C0u;
    SET_GPR_U32(ctx, 31, 0x3006C8u);
    ctx->pc = 0x3006C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3006C0u;
            // 0x3006c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FE1B0u;
    if (runtime->hasFunction(0x2FE1B0u)) {
        auto targetFn = runtime->lookupFunction(0x2FE1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3006C8u; }
        if (ctx->pc != 0x3006C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FE1B0_0x2fe1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3006C8u; }
        if (ctx->pc != 0x3006C8u) { return; }
    }
    ctx->pc = 0x3006C8u;
label_3006c8:
    // 0x3006c8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x3006C8u;
    {
        const bool branch_taken_0x3006c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3006c8) {
            ctx->pc = 0x300770u;
            goto label_300770;
        }
    }
    ctx->pc = 0x3006D0u;
label_3006d0:
    // 0x3006d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3006d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3006d4: 0x24c60450  addiu       $a2, $a2, 0x450
    ctx->pc = 0x3006d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1104));
    // 0x3006d8: 0xc0bf86c  jal         func_2FE1B0
    ctx->pc = 0x3006D8u;
    SET_GPR_U32(ctx, 31, 0x3006E0u);
    ctx->pc = 0x3006DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3006D8u;
            // 0x3006dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FE1B0u;
    if (runtime->hasFunction(0x2FE1B0u)) {
        auto targetFn = runtime->lookupFunction(0x2FE1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3006E0u; }
        if (ctx->pc != 0x3006E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FE1B0_0x2fe1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3006E0u; }
        if (ctx->pc != 0x3006E0u) { return; }
    }
    ctx->pc = 0x3006E0u;
label_3006e0:
    // 0x3006e0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3006E0u;
    {
        const bool branch_taken_0x3006e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3006e0) {
            ctx->pc = 0x300770u;
            goto label_300770;
        }
    }
    ctx->pc = 0x3006E8u;
label_3006e8:
    // 0x3006e8: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x3006e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x3006ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3006ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3006f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3006f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3006f4: 0x24c630e0  addiu       $a2, $a2, 0x30E0
    ctx->pc = 0x3006f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12512));
    // 0x3006f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3006f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3006fc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x3006fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x300700: 0xc047c0a  jal         func_11F028
    ctx->pc = 0x300700u;
    SET_GPR_U32(ctx, 31, 0x300708u);
    ctx->pc = 0x300704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300700u;
            // 0x300704: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F028u;
    if (runtime->hasFunction(0x11F028u)) {
        auto targetFn = runtime->lookupFunction(0x11F028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300708u; }
        if (ctx->pc != 0x300708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011F028_0x11f028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300708u; }
        if (ctx->pc != 0x300708u) { return; }
    }
    ctx->pc = 0x300708u;
label_300708:
    // 0x300708: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x300708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30070c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30070cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300710: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x300710u;
    SET_GPR_U32(ctx, 31, 0x300718u);
    ctx->pc = 0x300714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300710u;
            // 0x300714: 0x27a6001c  addiu       $a2, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (runtime->hasFunction(0x11ED18u)) {
        auto targetFn = runtime->lookupFunction(0x11ED18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300718u; }
        if (ctx->pc != 0x300718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011ED18_0x11ed18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300718u; }
        if (ctx->pc != 0x300718u) { return; }
    }
    ctx->pc = 0x300718u;
label_300718:
    // 0x300718: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x300718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x30071c: 0x58400007  blezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30071Cu;
    {
        const bool branch_taken_0x30071c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x30071c) {
            ctx->pc = 0x300720u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30071Cu;
            // 0x300720: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30073Cu;
            goto label_30073c;
        }
    }
    ctx->pc = 0x300724u;
    // 0x300724: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x300724u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x300728: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x300728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x30072c: 0xc0bf7fc  jal         func_2FDFF0
    ctx->pc = 0x30072Cu;
    SET_GPR_U32(ctx, 31, 0x300734u);
    ctx->pc = 0x300730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30072Cu;
            // 0x300730: 0x24a5f640  addiu       $a1, $a1, -0x9C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FDFF0u;
    if (runtime->hasFunction(0x2FDFF0u)) {
        auto targetFn = runtime->lookupFunction(0x2FDFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300734u; }
        if (ctx->pc != 0x300734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FDFF0_0x2fdff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300734u; }
        if (ctx->pc != 0x300734u) { return; }
    }
    ctx->pc = 0x300734u;
label_300734:
    // 0x300734: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x300734u;
    {
        const bool branch_taken_0x300734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300734) {
            ctx->pc = 0x300770u;
            goto label_300770;
        }
    }
    ctx->pc = 0x30073Cu;
label_30073c:
    // 0x30073c: 0x284100e1  slti        $at, $v0, 0xE1
    ctx->pc = 0x30073cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)225) ? 1 : 0);
    // 0x300740: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x300740u;
    {
        const bool branch_taken_0x300740 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x300740) {
            ctx->pc = 0x300764u;
            goto label_300764;
        }
    }
    ctx->pc = 0x300748u;
    // 0x300748: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x300748u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x30074c: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x30074cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x300750: 0x24c60450  addiu       $a2, $a2, 0x450
    ctx->pc = 0x300750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1104));
    // 0x300754: 0xc0bf89c  jal         func_2FE270
    ctx->pc = 0x300754u;
    SET_GPR_U32(ctx, 31, 0x30075Cu);
    ctx->pc = 0x300758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300754u;
            // 0x300758: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FE270u;
    if (runtime->hasFunction(0x2FE270u)) {
        auto targetFn = runtime->lookupFunction(0x2FE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30075Cu; }
        if (ctx->pc != 0x30075Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FE270_0x2fe270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30075Cu; }
        if (ctx->pc != 0x30075Cu) { return; }
    }
    ctx->pc = 0x30075Cu;
label_30075c:
    // 0x30075c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30075Cu;
    {
        const bool branch_taken_0x30075c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30075c) {
            ctx->pc = 0x300770u;
            goto label_300770;
        }
    }
    ctx->pc = 0x300764u;
label_300764:
    // 0x300764: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x300764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x300768: 0xc082674  jal         func_2099D0
    ctx->pc = 0x300768u;
    SET_GPR_U32(ctx, 31, 0x300770u);
    ctx->pc = 0x30076Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300768u;
            // 0x30076c: 0x2484da10  addiu       $a0, $a0, -0x25F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300770u; }
        if (ctx->pc != 0x300770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300770u; }
        if (ctx->pc != 0x300770u) { return; }
    }
    ctx->pc = 0x300770u;
label_300770:
    // 0x300770: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x300770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_300774:
    // 0x300774: 0x3e00008  jr          $ra
    ctx->pc = 0x300774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300774u;
            // 0x300778: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30077Cu;
    // 0x30077c: 0x0  nop
    ctx->pc = 0x30077cu;
    // NOP
    ctx->pc = 0x300780u;
}
