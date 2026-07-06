#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A0660
// Address: 0x2a0660 - 0x2a0d48
void sub_002A0660_0x2a0660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0660_0x2a0660");
#endif

    switch (ctx->pc) {
        case 0x2a0694u: goto label_2a0694;
        case 0x2a06a0u: goto label_2a06a0;
        case 0x2a06a8u: goto label_2a06a8;
        case 0x2a06b8u: goto label_2a06b8;
        case 0x2a06c4u: goto label_2a06c4;
        case 0x2a06d0u: goto label_2a06d0;
        case 0x2a06e0u: goto label_2a06e0;
        case 0x2a0700u: goto label_2a0700;
        case 0x2a0724u: goto label_2a0724;
        case 0x2a0738u: goto label_2a0738;
        case 0x2a074cu: goto label_2a074c;
        case 0x2a0754u: goto label_2a0754;
        case 0x2a0778u: goto label_2a0778;
        case 0x2a07c8u: goto label_2a07c8;
        case 0x2a07d0u: goto label_2a07d0;
        case 0x2a07f0u: goto label_2a07f0;
        case 0x2a081cu: goto label_2a081c;
        case 0x2a0848u: goto label_2a0848;
        case 0x2a08a8u: goto label_2a08a8;
        case 0x2a08d8u: goto label_2a08d8;
        case 0x2a08f0u: goto label_2a08f0;
        case 0x2a0930u: goto label_2a0930;
        case 0x2a0958u: goto label_2a0958;
        case 0x2a0978u: goto label_2a0978;
        case 0x2a0988u: goto label_2a0988;
        case 0x2a09b8u: goto label_2a09b8;
        case 0x2a09d8u: goto label_2a09d8;
        case 0x2a09e8u: goto label_2a09e8;
        case 0x2a0a2cu: goto label_2a0a2c;
        case 0x2a0a40u: goto label_2a0a40;
        case 0x2a0a50u: goto label_2a0a50;
        case 0x2a0a74u: goto label_2a0a74;
        case 0x2a0a94u: goto label_2a0a94;
        case 0x2a0abcu: goto label_2a0abc;
        case 0x2a0ae0u: goto label_2a0ae0;
        case 0x2a0b0cu: goto label_2a0b0c;
        case 0x2a0b30u: goto label_2a0b30;
        case 0x2a0b58u: goto label_2a0b58;
        case 0x2a0b88u: goto label_2a0b88;
        case 0x2a0bc8u: goto label_2a0bc8;
        case 0x2a0bdcu: goto label_2a0bdc;
        case 0x2a0c04u: goto label_2a0c04;
        case 0x2a0c20u: goto label_2a0c20;
        case 0x2a0c2cu: goto label_2a0c2c;
        case 0x2a0c44u: goto label_2a0c44;
        case 0x2a0c60u: goto label_2a0c60;
        case 0x2a0c7cu: goto label_2a0c7c;
        case 0x2a0cb0u: goto label_2a0cb0;
        case 0x2a0cecu: goto label_2a0cec;
        case 0x2a0cfcu: goto label_2a0cfc;
        case 0x2a0d0cu: goto label_2a0d0c;
        case 0x2a0d1cu: goto label_2a0d1c;
        case 0x2a0d2cu: goto label_2a0d2c;
        default: break;
    }

    ctx->pc = 0x2a0660u;

label_2a0660:
    // 0x2a0660: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a0660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a0664: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a0664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2a0668: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2a0668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2a066c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2a066cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2a0670: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a0670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2a0674: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a0674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a0678: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a0678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a067c: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x2a067cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a0680: 0x12000035  beqz        $s0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2A0680u;
    {
        const bool branch_taken_0x2a0680 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0680u;
            // 0x2a0684: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0680) {
            ctx->pc = 0x2A0758u;
            goto label_2a0758;
        }
    }
    ctx->pc = 0x2A0688u;
    // 0x2a0688: 0x8e140040  lw          $s4, 0x40($s0)
    ctx->pc = 0x2a0688u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2a068c: 0xc0a1a36  jal         func_2868D8
    ctx->pc = 0x2A068Cu;
    SET_GPR_U32(ctx, 31, 0x2A0694u);
    ctx->pc = 0x2A0690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A068Cu;
            // 0x2a0690: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2868D8u;
    if (runtime->hasFunction(0x2868D8u)) {
        auto targetFn = runtime->lookupFunction(0x2868D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0694u; }
        if (ctx->pc != 0x2A0694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002868D8_0x2868d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0694u; }
        if (ctx->pc != 0x2A0694u) { return; }
    }
    ctx->pc = 0x2A0694u;
label_2a0694:
    // 0x2a0694: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a0694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0698: 0xc0a1a36  jal         func_2868D8
    ctx->pc = 0x2A0698u;
    SET_GPR_U32(ctx, 31, 0x2A06A0u);
    ctx->pc = 0x2A069Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0698u;
            // 0x2a069c: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2868D8u;
    if (runtime->hasFunction(0x2868D8u)) {
        auto targetFn = runtime->lookupFunction(0x2868D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A06A0u; }
        if (ctx->pc != 0x2A06A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002868D8_0x2868d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A06A0u; }
        if (ctx->pc != 0x2A06A0u) { return; }
    }
    ctx->pc = 0x2A06A0u;
label_2a06a0:
    // 0x2a06a0: 0xc0a1a36  jal         func_2868D8
    ctx->pc = 0x2A06A0u;
    SET_GPR_U32(ctx, 31, 0x2A06A8u);
    ctx->pc = 0x2A06A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A06A0u;
            // 0x2a06a4: 0x2604002c  addiu       $a0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2868D8u;
    if (runtime->hasFunction(0x2868D8u)) {
        auto targetFn = runtime->lookupFunction(0x2868D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A06A8u; }
        if (ctx->pc != 0x2A06A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002868D8_0x2868d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A06A8u; }
        if (ctx->pc != 0x2A06A8u) { return; }
    }
    ctx->pc = 0x2A06A8u;
label_2a06a8:
    // 0x2a06a8: 0x5a80001a  blezl       $s4, . + 4 + (0x1A << 2)
    ctx->pc = 0x2A06A8u;
    {
        const bool branch_taken_0x2a06a8 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x2a06a8) {
            ctx->pc = 0x2A06ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A06A8u;
            // 0x2a06ac: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A0714u;
            goto label_2a0714;
        }
    }
    ctx->pc = 0x2A06B0u;
    // 0x2a06b0: 0x24120014  addiu       $s2, $zero, 0x14
    ctx->pc = 0x2a06b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2a06b4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a06b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a06b8:
    // 0x2a06b8: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x2a06b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2a06bc: 0xc0a1a36  jal         func_2868D8
    ctx->pc = 0x2A06BCu;
    SET_GPR_U32(ctx, 31, 0x2A06C4u);
    ctx->pc = 0x2A06C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A06BCu;
            // 0x2a06c0: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2868D8u;
    if (runtime->hasFunction(0x2868D8u)) {
        auto targetFn = runtime->lookupFunction(0x2868D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A06C4u; }
        if (ctx->pc != 0x2A06C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002868D8_0x2868d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A06C4u; }
        if (ctx->pc != 0x2A06C4u) { return; }
    }
    ctx->pc = 0x2A06C4u;
label_2a06c4:
    // 0x2a06c4: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x2a06c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2a06c8: 0xc0a1a36  jal         func_2868D8
    ctx->pc = 0x2A06C8u;
    SET_GPR_U32(ctx, 31, 0x2A06D0u);
    ctx->pc = 0x2A06CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A06C8u;
            // 0x2a06cc: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2868D8u;
    if (runtime->hasFunction(0x2868D8u)) {
        auto targetFn = runtime->lookupFunction(0x2868D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A06D0u; }
        if (ctx->pc != 0x2A06D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002868D8_0x2868d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A06D0u; }
        if (ctx->pc != 0x2A06D0u) { return; }
    }
    ctx->pc = 0x2A06D0u;
label_2a06d0:
    // 0x2a06d0: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x2a06d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2a06d4: 0x26440014  addiu       $a0, $s2, 0x14
    ctx->pc = 0x2a06d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x2a06d8: 0xc0a1a36  jal         func_2868D8
    ctx->pc = 0x2A06D8u;
    SET_GPR_U32(ctx, 31, 0x2A06E0u);
    ctx->pc = 0x2A06DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A06D8u;
            // 0x2a06dc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2868D8u;
    if (runtime->hasFunction(0x2868D8u)) {
        auto targetFn = runtime->lookupFunction(0x2868D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A06E0u; }
        if (ctx->pc != 0x2A06E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002868D8_0x2868d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A06E0u; }
        if (ctx->pc != 0x2A06E0u) { return; }
    }
    ctx->pc = 0x2A06E0u;
label_2a06e0:
    // 0x2a06e0: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2a06e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2a06e4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2a06e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2a06e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a06e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a06ec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a06ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a06f0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A06F0u;
    {
        const bool branch_taken_0x2a06f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A06F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A06F0u;
            // 0x2a06f4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a06f0) {
            ctx->pc = 0x2A0700u;
            goto label_2a0700;
        }
    }
    ctx->pc = 0x2A06F8u;
    // 0x2a06f8: 0xc0a1d56  jal         func_287558
    ctx->pc = 0x2A06F8u;
    SET_GPR_U32(ctx, 31, 0x2A0700u);
    ctx->pc = 0x287558u;
    if (runtime->hasFunction(0x287558u)) {
        auto targetFn = runtime->lookupFunction(0x287558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0700u; }
        if (ctx->pc != 0x2A0700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287558_0x287558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0700u; }
        if (ctx->pc != 0x2A0700u) { return; }
    }
    ctx->pc = 0x2A0700u;
label_2a0700:
    // 0x2a0700: 0x2652003c  addiu       $s2, $s2, 0x3C
    ctx->pc = 0x2a0700u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
    // 0x2a0704: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x2a0704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2a0708: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2A0708u;
    {
        const bool branch_taken_0x2a0708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A070Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0708u;
            // 0x2a070c: 0x2673003c  addiu       $s3, $s3, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0708) {
            ctx->pc = 0x2A06B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a06b8;
        }
    }
    ctx->pc = 0x2A0710u;
    // 0x2a0710: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x2a0710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_2a0714:
    // 0x2a0714: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0714u;
    {
        const bool branch_taken_0x2a0714 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0714) {
            ctx->pc = 0x2A0718u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0714u;
            // 0x2a0718: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A0728u;
            goto label_2a0728;
        }
    }
    ctx->pc = 0x2A071Cu;
    // 0x2a071c: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2A071Cu;
    SET_GPR_U32(ctx, 31, 0x2A0724u);
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0724u; }
        if (ctx->pc != 0x2A0724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0724u; }
        if (ctx->pc != 0x2A0724u) { return; }
    }
    ctx->pc = 0x2A0724u;
label_2a0724:
    // 0x2a0724: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x2a0724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2a0728:
    // 0x2a0728: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0728u;
    {
        const bool branch_taken_0x2a0728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0728) {
            ctx->pc = 0x2A072Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0728u;
            // 0x2a072c: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A073Cu;
            goto label_2a073c;
        }
    }
    ctx->pc = 0x2A0730u;
    // 0x2a0730: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2A0730u;
    SET_GPR_U32(ctx, 31, 0x2A0738u);
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0738u; }
        if (ctx->pc != 0x2A0738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0738u; }
        if (ctx->pc != 0x2A0738u) { return; }
    }
    ctx->pc = 0x2A0738u;
label_2a0738:
    // 0x2a0738: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2a0738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2a073c:
    // 0x2a073c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A073Cu;
    {
        const bool branch_taken_0x2a073c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a073c) {
            ctx->pc = 0x2A074Cu;
            goto label_2a074c;
        }
    }
    ctx->pc = 0x2A0744u;
    // 0x2a0744: 0xc0a1d56  jal         func_287558
    ctx->pc = 0x2A0744u;
    SET_GPR_U32(ctx, 31, 0x2A074Cu);
    ctx->pc = 0x287558u;
    if (runtime->hasFunction(0x287558u)) {
        auto targetFn = runtime->lookupFunction(0x287558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A074Cu; }
        if (ctx->pc != 0x2A074Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287558_0x287558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A074Cu; }
        if (ctx->pc != 0x2A074Cu) { return; }
    }
    ctx->pc = 0x2A074Cu;
label_2a074c:
    // 0x2a074c: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2A074Cu;
    SET_GPR_U32(ctx, 31, 0x2A0754u);
    ctx->pc = 0x2A0750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A074Cu;
            // 0x2a0750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0754u; }
        if (ctx->pc != 0x2A0754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0754u; }
        if (ctx->pc != 0x2A0754u) { return; }
    }
    ctx->pc = 0x2A0754u;
label_2a0754:
    // 0x2a0754: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a0754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0758:
    // 0x2a0758: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a0758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a075c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2a075cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a0760: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2a0760u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a0764: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a0764u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a0768: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a0768u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a076c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a076cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a0770: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0770u;
            // 0x2a0774: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A0778u;
label_2a0778:
    // 0x2a0778: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2a0778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2a077c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a077cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0780: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x2a0780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x2a0784: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x2a0784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x2a0788: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2a0788u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a078c: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2a078cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2a0790: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2a0790u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0794: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x2a0794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x2a0798: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x2a0798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x2a079c: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2a079cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2a07a0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2a07a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2a07a4: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2a07a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2a07a8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2a07a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2a07ac: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2a07acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2a07b0: 0x8ef40008  lw          $s4, 0x8($s7)
    ctx->pc = 0x2a07b0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x2a07b4: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x2a07b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x2a07b8: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A07B8u;
    {
        const bool branch_taken_0x2a07b8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A07BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A07B8u;
            // 0x2a07bc: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a07b8) {
            ctx->pc = 0x2A07C8u;
            goto label_2a07c8;
        }
    }
    ctx->pc = 0x2A07C0u;
    // 0x2a07c0: 0xc0a8198  jal         func_2A0660
    ctx->pc = 0x2A07C0u;
    SET_GPR_U32(ctx, 31, 0x2A07C8u);
    ctx->pc = 0x2A0660u;
    goto label_2a0660;
    ctx->pc = 0x2A07C8u;
label_2a07c8:
    // 0x2a07c8: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2A07C8u;
    SET_GPR_U32(ctx, 31, 0x2A07D0u);
    ctx->pc = 0x2A07CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A07C8u;
            // 0x2a07cc: 0x2404005c  addiu       $a0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A07D0u; }
        if (ctx->pc != 0x2A07D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A07D0u; }
        if (ctx->pc != 0x2A07D0u) { return; }
    }
    ctx->pc = 0x2A07D0u;
label_2a07d0:
    // 0x2a07d0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2a07d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a07d4: 0x56800003  bnel        $s4, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A07D4u;
    {
        const bool branch_taken_0x2a07d4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a07d4) {
            ctx->pc = 0x2A07D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A07D4u;
            // 0x2a07d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A07E4u;
            goto label_2a07e4;
        }
    }
    ctx->pc = 0x2A07DCu;
    // 0x2a07dc: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x2A07DCu;
    {
        const bool branch_taken_0x2a07dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A07E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A07DCu;
            // 0x2a07e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a07dc) {
            ctx->pc = 0x2A0C80u;
            goto label_2a0c80;
        }
    }
    ctx->pc = 0x2A07E4u;
label_2a07e4:
    // 0x2a07e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a07e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a07e8: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2A07E8u;
    SET_GPR_U32(ctx, 31, 0x2A07F0u);
    ctx->pc = 0x2A07ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A07E8u;
            // 0x2a07ec: 0x2406005c  addiu       $a2, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A07F0u; }
        if (ctx->pc != 0x2A07F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A07F0u; }
        if (ctx->pc != 0x2A07F0u) { return; }
    }
    ctx->pc = 0x2A07F0u;
label_2a07f0:
    // 0x2a07f0: 0x8ee3000c  lw          $v1, 0xC($s7)
    ctx->pc = 0x2a07f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x2a07f4: 0x2402fffa  addiu       $v0, $zero, -0x6
    ctx->pc = 0x2a07f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x2a07f8: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x2a07f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x2a07fc: 0xaef40008  sw          $s4, 0x8($s7)
    ctx->pc = 0x2a07fcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 20));
    // 0x2a0800: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2a0800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a0804: 0x24c66950  addiu       $a2, $a2, 0x6950
    ctx->pc = 0x2a0804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26960));
    // 0x2a0808: 0xaee3000c  sw          $v1, 0xC($s7)
    ctx->pc = 0x2a0808u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 3));
    // 0x2a080c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a080cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0810: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2a0810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2a0814: 0xc0a89ca  jal         func_2A2728
    ctx->pc = 0x2A0814u;
    SET_GPR_U32(ctx, 31, 0x2A081Cu);
    ctx->pc = 0x2A0818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0814u;
            // 0x2a0818: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2728u;
    if (runtime->hasFunction(0x2A2728u)) {
        auto targetFn = runtime->lookupFunction(0x2A2728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A081Cu; }
        if (ctx->pc != 0x2A081Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2728_0x2a2728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A081Cu; }
        if (ctx->pc != 0x2A081Cu) { return; }
    }
    ctx->pc = 0x2A081Cu;
label_2a081c:
    // 0x2a081c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A081Cu;
    {
        const bool branch_taken_0x2a081c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A081Cu;
            // 0x2a0820: 0x3c06003b  lui         $a2, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a081c) {
            ctx->pc = 0x2A0838u;
            goto label_2a0838;
        }
    }
    ctx->pc = 0x2A0824u;
    // 0x2a0824: 0x8ee2000c  lw          $v0, 0xC($s7)
    ctx->pc = 0x2a0824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x2a0828: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x2a0828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2a082c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2a082cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2a0830: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2a0830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2a0834: 0xaee2000c  sw          $v0, 0xC($s7)
    ctx->pc = 0x2a0834u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 2));
label_2a0838:
    // 0x2a0838: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a0838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a083c: 0x24c66970  addiu       $a2, $a2, 0x6970
    ctx->pc = 0x2a083cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26992));
    // 0x2a0840: 0xc0a89ca  jal         func_2A2728
    ctx->pc = 0x2A0840u;
    SET_GPR_U32(ctx, 31, 0x2A0848u);
    ctx->pc = 0x2A0844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0840u;
            // 0x2a0844: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2728u;
    if (runtime->hasFunction(0x2A2728u)) {
        auto targetFn = runtime->lookupFunction(0x2A2728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0848u; }
        if (ctx->pc != 0x2A0848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2728_0x2a2728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0848u; }
        if (ctx->pc != 0x2A0848u) { return; }
    }
    ctx->pc = 0x2A0848u;
label_2a0848:
    // 0x2a0848: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A0848u;
    {
        const bool branch_taken_0x2a0848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A084Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0848u;
            // 0x2a084c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0848) {
            ctx->pc = 0x2A0868u;
            goto label_2a0868;
        }
    }
    ctx->pc = 0x2A0850u;
    // 0x2a0850: 0x8ee2000c  lw          $v0, 0xC($s7)
    ctx->pc = 0x2a0850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x2a0854: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2a0854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2a0858: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2a0858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2a085c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2a085cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2a0860: 0xaee2000c  sw          $v0, 0xC($s7)
    ctx->pc = 0x2a0860u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 2));
    // 0x2a0864: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2a0864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2a0868:
    // 0x2a0868: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0868u;
    {
        const bool branch_taken_0x2a0868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0868) {
            ctx->pc = 0x2A086Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0868u;
            // 0x2a086c: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A0878u;
            goto label_2a0878;
        }
    }
    ctx->pc = 0x2A0870u;
    // 0x2a0870: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x2A0870u;
    {
        const bool branch_taken_0x2a0870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0870u;
            // 0x2a0874: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0870) {
            ctx->pc = 0x2A0C80u;
            goto label_2a0c80;
        }
    }
    ctx->pc = 0x2A0878u;
label_2a0878:
    // 0x2a0878: 0x27a30004  addiu       $v1, $sp, 0x4
    ctx->pc = 0x2a0878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2a087c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x2a087cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x2a0880: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a0880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0884: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x2a0884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2a0888: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a0888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a088c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2a088cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a0890: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2a0890u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0894: 0xae830058  sw          $v1, 0x58($s4)
    ctx->pc = 0x2a0894u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 3));
    // 0x2a0898: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x2a0898u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a089c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2a089cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2a08a0: 0xc0a898c  jal         func_2A2630
    ctx->pc = 0x2A08A0u;
    SET_GPR_U32(ctx, 31, 0x2A08A8u);
    ctx->pc = 0x2A08A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A08A0u;
            // 0x2a08a4: 0x8fa80010  lw          $t0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2630u;
    if (runtime->hasFunction(0x2A2630u)) {
        auto targetFn = runtime->lookupFunction(0x2A2630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A08A8u; }
        if (ctx->pc != 0x2A08A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2630_0x2a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A08A8u; }
        if (ctx->pc != 0x2A08A8u) { return; }
    }
    ctx->pc = 0x2A08A8u;
label_2a08a8:
    // 0x2a08a8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2a08a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2a08ac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A08ACu;
    {
        const bool branch_taken_0x2a08ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A08B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A08ACu;
            // 0x2a08b0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a08ac) {
            ctx->pc = 0x2A08B8u;
            goto label_2a08b8;
        }
    }
    ctx->pc = 0x2A08B4u;
    // 0x2a08b4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2a08b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2a08b8:
    // 0x2a08b8: 0xae830048  sw          $v1, 0x48($s4)
    ctx->pc = 0x2a08b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 3));
    // 0x2a08bc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a08bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a08c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a08c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a08c4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2a08c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a08c8: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x2a08c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a08cc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2a08ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a08d0: 0xc0a898c  jal         func_2A2630
    ctx->pc = 0x2A08D0u;
    SET_GPR_U32(ctx, 31, 0x2A08D8u);
    ctx->pc = 0x2A08D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A08D0u;
            // 0x2a08d4: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2630u;
    if (runtime->hasFunction(0x2A2630u)) {
        auto targetFn = runtime->lookupFunction(0x2A2630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A08D8u; }
        if (ctx->pc != 0x2A08D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2630_0x2a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A08D8u; }
        if (ctx->pc != 0x2A08D8u) { return; }
    }
    ctx->pc = 0x2A08D8u;
label_2a08d8:
    // 0x2a08d8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2a08d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2a08dc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A08DCu;
    {
        const bool branch_taken_0x2a08dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A08E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A08DCu;
            // 0x2a08e0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a08dc) {
            ctx->pc = 0x2A08E8u;
            goto label_2a08e8;
        }
    }
    ctx->pc = 0x2A08E4u;
    // 0x2a08e4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2a08e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2a08e8:
    // 0x2a08e8: 0xc0a1a9e  jal         func_286A78
    ctx->pc = 0x2A08E8u;
    SET_GPR_U32(ctx, 31, 0x2A08F0u);
    ctx->pc = 0x2A08ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A08E8u;
            // 0x2a08ec: 0xae83004c  sw          $v1, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286A78u;
    if (runtime->hasFunction(0x286A78u)) {
        auto targetFn = runtime->lookupFunction(0x286A78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A08F0u; }
        if (ctx->pc != 0x2A08F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286A78_0x286a78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A08F0u; }
        if (ctx->pc != 0x2A08F0u) { return; }
    }
    ctx->pc = 0x2A08F0u;
label_2a08f0:
    // 0x2a08f0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2a08f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a08f4: 0x13c000e2  beqz        $fp, . + 4 + (0xE2 << 2)
    ctx->pc = 0x2A08F4u;
    {
        const bool branch_taken_0x2a08f4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A08F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A08F4u;
            // 0x2a08f8: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a08f4) {
            ctx->pc = 0x2A0C80u;
            goto label_2a0c80;
        }
    }
    ctx->pc = 0x2A08FCu;
    // 0x2a08fc: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x2a08fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x2a0900: 0xafc3010c  sw          $v1, 0x10C($fp)
    ctx->pc = 0x2a0900u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 268), GPR_U32(ctx, 3));
    // 0x2a0904: 0x8ee2000c  lw          $v0, 0xC($s7)
    ctx->pc = 0x2a0904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x2a0908: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2a0908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2a090c: 0x104000a5  beqz        $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x2A090Cu;
    {
        const bool branch_taken_0x2a090c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A090Cu;
            // 0x2a0910: 0x8fa80010  lw          $t0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a090c) {
            ctx->pc = 0x2A0BA4u;
            goto label_2a0ba4;
        }
    }
    ctx->pc = 0x2A0914u;
    // 0x2a0914: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a0914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0918: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2a0918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2a091c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2a091cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2a0920: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a0920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0924: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2a0924u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0928: 0xc0a898c  jal         func_2A2630
    ctx->pc = 0x2A0928u;
    SET_GPR_U32(ctx, 31, 0x2A0930u);
    ctx->pc = 0x2A092Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0928u;
            // 0x2a092c: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2630u;
    if (runtime->hasFunction(0x2A2630u)) {
        auto targetFn = runtime->lookupFunction(0x2A2630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0930u; }
        if (ctx->pc != 0x2A0930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2630_0x2a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0930u; }
        if (ctx->pc != 0x2A0930u) { return; }
    }
    ctx->pc = 0x2A0930u;
label_2a0930:
    // 0x2a0930: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2a0930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2a0934: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0934u;
    {
        const bool branch_taken_0x2a0934 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0934) {
            ctx->pc = 0x2A0938u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0934u;
            // 0x2a0938: 0x8c920010  lw          $s2, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A0948u;
            goto label_2a0948;
        }
    }
    ctx->pc = 0x2A093Cu;
    // 0x2a093c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a093cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a0940: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x2A0940u;
    {
        const bool branch_taken_0x2a0940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0940u;
            // 0x2a0944: 0xafa4000c  sw          $a0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0940) {
            ctx->pc = 0x2A0C6Cu;
            goto label_2a0c6c;
        }
    }
    ctx->pc = 0x2A0948u;
label_2a0948:
    // 0x2a0948: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x2a0948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2a094c: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x2a094cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2a0950: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2A0950u;
    SET_GPR_U32(ctx, 31, 0x2A0958u);
    ctx->pc = 0x2A0954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0950u;
            // 0x2a0954: 0xae920040  sw          $s2, 0x40($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 64), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0958u; }
        if (ctx->pc != 0x2A0958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0958u; }
        if (ctx->pc != 0x2A0958u) { return; }
    }
    ctx->pc = 0x2A0958u;
label_2a0958:
    // 0x2a0958: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a0958u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a095c: 0x126000c3  beqz        $s3, . + 4 + (0xC3 << 2)
    ctx->pc = 0x2A095Cu;
    {
        const bool branch_taken_0x2a095c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A095Cu;
            // 0x2a0960: 0x128840  sll         $s1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a095c) {
            ctx->pc = 0x2A0C6Cu;
            goto label_2a0c6c;
        }
    }
    ctx->pc = 0x2A0964u;
    // 0x2a0964: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2a0964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2a0968: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x2a0968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x2a096c: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2A096Cu;
    {
        const bool branch_taken_0x2a096c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2A0970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A096Cu;
            // 0x2a0970: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a096c) {
            ctx->pc = 0x2A09ACu;
            goto label_2a09ac;
        }
    }
    ctx->pc = 0x2A0974u;
    // 0x2a0974: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x2a0974u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2a0978:
    // 0x2a0978: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2a0978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2a097c: 0xa41018  mult        $v0, $a1, $a0
    ctx->pc = 0x2a097cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a0980: 0xc0a1a88  jal         func_286A20
    ctx->pc = 0x2A0980u;
    SET_GPR_U32(ctx, 31, 0x2A0988u);
    ctx->pc = 0x2A0984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0980u;
            // 0x2a0984: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286A20u;
    if (runtime->hasFunction(0x286A20u)) {
        auto targetFn = runtime->lookupFunction(0x286A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0988u; }
        if (ctx->pc != 0x2A0988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286A20_0x286a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0988u; }
        if (ctx->pc != 0x2A0988u) { return; }
    }
    ctx->pc = 0x2A0988u;
label_2a0988:
    // 0x2a0988: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2a0988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a098c: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x2a098cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x2a0990: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a0990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a0994: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a0994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0998: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x2a0998u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a099c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2A099Cu;
    {
        const bool branch_taken_0x2a099c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A09A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A099Cu;
            // 0x2a09a0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a099c) {
            ctx->pc = 0x2A0978u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a0978;
        }
    }
    ctx->pc = 0x2A09A4u;
    // 0x2a09a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A09A4u;
    {
        const bool branch_taken_0x2a09a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a09a4) {
            ctx->pc = 0x2A09B0u;
            goto label_2a09b0;
        }
    }
    ctx->pc = 0x2A09ACu;
label_2a09ac:
    // 0x2a09ac: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x2a09acu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2a09b0:
    // 0x2a09b0: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2A09B0u;
    SET_GPR_U32(ctx, 31, 0x2A09B8u);
    ctx->pc = 0x2A09B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A09B0u;
            // 0x2a09b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A09B8u; }
        if (ctx->pc != 0x2A09B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A09B8u; }
        if (ctx->pc != 0x2A09B8u) { return; }
    }
    ctx->pc = 0x2A09B8u;
label_2a09b8:
    // 0x2a09b8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2a09b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a09bc: 0x12a000ab  beqz        $s5, . + 4 + (0xAB << 2)
    ctx->pc = 0x2A09BCu;
    {
        const bool branch_taken_0x2a09bc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A09C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A09BCu;
            // 0x2a09c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a09bc) {
            ctx->pc = 0x2A0C6Cu;
            goto label_2a0c6c;
        }
    }
    ctx->pc = 0x2A09C4u;
    // 0x2a09c4: 0xae950050  sw          $s5, 0x50($s4)
    ctx->pc = 0x2a09c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 21));
    // 0x2a09c8: 0x1a40000f  blez        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x2A09C8u;
    {
        const bool branch_taken_0x2a09c8 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2A09CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A09C8u;
            // 0x2a09cc: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a09c8) {
            ctx->pc = 0x2A0A08u;
            goto label_2a0a08;
        }
    }
    ctx->pc = 0x2A09D0u;
    // 0x2a09d0: 0x2690002c  addiu       $s0, $s4, 0x2C
    ctx->pc = 0x2a09d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 44));
    // 0x2a09d4: 0x0  nop
    ctx->pc = 0x2a09d4u;
    // NOP
label_2a09d8:
    // 0x2a09d8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2a09d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2a09dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a09dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a09e0: 0xc0a1d3c  jal         func_2874F0
    ctx->pc = 0x2A09E0u;
    SET_GPR_U32(ctx, 31, 0x2A09E8u);
    ctx->pc = 0x2A09E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A09E0u;
            // 0x2a09e4: 0x2a52821  addu        $a1, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2874F0u;
    if (runtime->hasFunction(0x2874F0u)) {
        auto targetFn = runtime->lookupFunction(0x2874F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A09E8u; }
        if (ctx->pc != 0x2A09E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002874F0_0x2874f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A09E8u; }
        if (ctx->pc != 0x2A09E8u) { return; }
    }
    ctx->pc = 0x2A09E8u;
label_2a09e8:
    // 0x2a09e8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2a09e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a09ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a09ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a09f0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2a09f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a09f4: 0xb2102a  slt         $v0, $a1, $s2
    ctx->pc = 0x2a09f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2a09f8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2A09F8u;
    {
        const bool branch_taken_0x2a09f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A09FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A09F8u;
            // 0x2a09fc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a09f8) {
            ctx->pc = 0x2A09D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a09d8;
        }
    }
    ctx->pc = 0x2A0A00u;
    // 0x2a0a00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0A00u;
    {
        const bool branch_taken_0x2a0a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0A00u;
            // 0x2a0a04: 0xae930044  sw          $s3, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0a00) {
            ctx->pc = 0x2A0A10u;
            goto label_2a0a10;
        }
    }
    ctx->pc = 0x2A0A08u;
label_2a0a08:
    // 0x2a0a08: 0x2690002c  addiu       $s0, $s4, 0x2C
    ctx->pc = 0x2a0a08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 44));
    // 0x2a0a0c: 0xae930044  sw          $s3, 0x44($s4)
    ctx->pc = 0x2a0a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 19));
label_2a0a10:
    // 0x2a0a10: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a0a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0a14: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2a0a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2a0a18: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x2a0a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a0a1c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2a0a1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0a20: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x2a0a20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2a0a24: 0xc0a898c  jal         func_2A2630
    ctx->pc = 0x2A0A24u;
    SET_GPR_U32(ctx, 31, 0x2A0A2Cu);
    ctx->pc = 0x2A0A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0A24u;
            // 0x2a0a28: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2630u;
    if (runtime->hasFunction(0x2A2630u)) {
        auto targetFn = runtime->lookupFunction(0x2A2630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0A2Cu; }
        if (ctx->pc != 0x2A0A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2630_0x2a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0A2Cu; }
        if (ctx->pc != 0x2A0A2Cu) { return; }
    }
    ctx->pc = 0x2A0A2Cu;
label_2a0a2c:
    // 0x2a0a2c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2a0a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2a0a30: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a0a30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0a34: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x2a0a34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a0a38: 0xc0a1b8c  jal         func_286E30
    ctx->pc = 0x2A0A38u;
    SET_GPR_U32(ctx, 31, 0x2A0A40u);
    ctx->pc = 0x2A0A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0A38u;
            // 0x2a0a3c: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286E30u;
    if (runtime->hasFunction(0x286E30u)) {
        auto targetFn = runtime->lookupFunction(0x286E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0A40u; }
        if (ctx->pc != 0x2A0A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286E30_0x286e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0A40u; }
        if (ctx->pc != 0x2A0A40u) { return; }
    }
    ctx->pc = 0x2A0A40u;
label_2a0a40:
    // 0x2a0a40: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2a0a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2a0a44: 0x1a400057  blez        $s2, . + 4 + (0x57 << 2)
    ctx->pc = 0x2A0A44u;
    {
        const bool branch_taken_0x2a0a44 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2A0A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0A44u;
            // 0x2a0a48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0a44) {
            ctx->pc = 0x2A0BA4u;
            goto label_2a0ba4;
        }
    }
    ctx->pc = 0x2A0A4Cu;
    // 0x2a0a4c: 0x27b10008  addiu       $s1, $sp, 0x8
    ctx->pc = 0x2a0a4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_2a0a50:
    // 0x2a0a50: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x2a0a50u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2a0a54: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a0a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0a58: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x2a0a58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2a0a5c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2a0a5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0a60: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2a0a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2a0a64: 0x24c60013  addiu       $a2, $a2, 0x13
    ctx->pc = 0x2a0a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19));
    // 0x2a0a68: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x2a0a68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2a0a6c: 0xc0a898c  jal         func_2A2630
    ctx->pc = 0x2A0A6Cu;
    SET_GPR_U32(ctx, 31, 0x2A0A74u);
    ctx->pc = 0x2A0A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0A6Cu;
            // 0x2a0a70: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2630u;
    if (runtime->hasFunction(0x2A2630u)) {
        auto targetFn = runtime->lookupFunction(0x2A2630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0A74u; }
        if (ctx->pc != 0x2A0A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2630_0x2a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0A74u; }
        if (ctx->pc != 0x2A0A74u) { return; }
    }
    ctx->pc = 0x2A0A74u;
label_2a0a74:
    // 0x2a0a74: 0x2410003c  addiu       $s0, $zero, 0x3C
    ctx->pc = 0x2a0a74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2a0a78: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2a0a78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a0a7c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2a0a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2a0a80: 0xd01818  mult        $v1, $a2, $s0
    ctx->pc = 0x2a0a80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2a0a84: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2a0a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2a0a88: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2a0a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a0a8c: 0xc0a1b8c  jal         func_286E30
    ctx->pc = 0x2A0A8Cu;
    SET_GPR_U32(ctx, 31, 0x2A0A94u);
    ctx->pc = 0x2A0A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0A8Cu;
            // 0x2a0a90: 0x733021  addu        $a2, $v1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286E30u;
    if (runtime->hasFunction(0x286E30u)) {
        auto targetFn = runtime->lookupFunction(0x286E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0A94u; }
        if (ctx->pc != 0x2A0A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286E30_0x286e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0A94u; }
        if (ctx->pc != 0x2A0A94u) { return; }
    }
    ctx->pc = 0x2A0A94u;
label_2a0a94:
    // 0x2a0a94: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2a0a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a0a98: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a0a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0a9c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2a0a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2a0aa0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2a0aa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0aa4: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x2a0aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2a0aa8: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x2a0aa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2a0aac: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2a0aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2a0ab0: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x2a0ab0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a0ab4: 0xc0a898c  jal         func_2A2630
    ctx->pc = 0x2A0AB4u;
    SET_GPR_U32(ctx, 31, 0x2A0ABCu);
    ctx->pc = 0x2A0AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0AB4u;
            // 0x2a0ab8: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2630u;
    if (runtime->hasFunction(0x2A2630u)) {
        auto targetFn = runtime->lookupFunction(0x2A2630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0ABCu; }
        if (ctx->pc != 0x2A0ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2630_0x2a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0ABCu; }
        if (ctx->pc != 0x2A0ABCu) { return; }
    }
    ctx->pc = 0x2A0ABCu;
label_2a0abc:
    // 0x2a0abc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2a0abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2a0ac0: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x2A0AC0u;
    {
        const bool branch_taken_0x2a0ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0AC0u;
            // 0x2a0ac4: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0ac0) {
            ctx->pc = 0x2A0C6Cu;
            goto label_2a0c6c;
        }
    }
    ctx->pc = 0x2A0AC8u;
    // 0x2a0ac8: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2a0ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2a0acc: 0xd03018  mult        $a2, $a2, $s0
    ctx->pc = 0x2a0accu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2a0ad0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2a0ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a0ad4: 0x24c60014  addiu       $a2, $a2, 0x14
    ctx->pc = 0x2a0ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x2a0ad8: 0xc0a1b8c  jal         func_286E30
    ctx->pc = 0x2A0AD8u;
    SET_GPR_U32(ctx, 31, 0x2A0AE0u);
    ctx->pc = 0x2A0ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0AD8u;
            // 0x2a0adc: 0x2663021  addu        $a2, $s3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286E30u;
    if (runtime->hasFunction(0x286E30u)) {
        auto targetFn = runtime->lookupFunction(0x286E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0AE0u; }
        if (ctx->pc != 0x2A0AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286E30_0x286e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0AE0u; }
        if (ctx->pc != 0x2A0AE0u) { return; }
    }
    ctx->pc = 0x2A0AE0u;
label_2a0ae0:
    // 0x2a0ae0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2a0ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a0ae4: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2A0AE4u;
    {
        const bool branch_taken_0x2a0ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0AE4u;
            // 0x2a0ae8: 0x33040  sll         $a2, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0ae4) {
            ctx->pc = 0x2A0B34u;
            goto label_2a0b34;
        }
    }
    ctx->pc = 0x2A0AECu;
    // 0x2a0aec: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x2a0aecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a0af0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2a0af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2a0af4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a0af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0af8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2a0af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2a0afc: 0x24c60015  addiu       $a2, $a2, 0x15
    ctx->pc = 0x2a0afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21));
    // 0x2a0b00: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2a0b00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0b04: 0xc0a898c  jal         func_2A2630
    ctx->pc = 0x2A0B04u;
    SET_GPR_U32(ctx, 31, 0x2A0B0Cu);
    ctx->pc = 0x2A0B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0B04u;
            // 0x2a0b08: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2630u;
    if (runtime->hasFunction(0x2A2630u)) {
        auto targetFn = runtime->lookupFunction(0x2A2630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0B0Cu; }
        if (ctx->pc != 0x2A0B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2630_0x2a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0B0Cu; }
        if (ctx->pc != 0x2A0B0Cu) { return; }
    }
    ctx->pc = 0x2A0B0Cu;
label_2a0b0c:
    // 0x2a0b0c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2a0b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2a0b10: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x2A0B10u;
    {
        const bool branch_taken_0x2a0b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0B10u;
            // 0x2a0b14: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0b10) {
            ctx->pc = 0x2A0C6Cu;
            goto label_2a0c6c;
        }
    }
    ctx->pc = 0x2A0B18u;
    // 0x2a0b18: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2a0b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2a0b1c: 0xd03018  mult        $a2, $a2, $s0
    ctx->pc = 0x2a0b1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2a0b20: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2a0b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a0b24: 0x24c60028  addiu       $a2, $a2, 0x28
    ctx->pc = 0x2a0b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
    // 0x2a0b28: 0xc0a1b8c  jal         func_286E30
    ctx->pc = 0x2A0B28u;
    SET_GPR_U32(ctx, 31, 0x2A0B30u);
    ctx->pc = 0x2A0B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0B28u;
            // 0x2a0b2c: 0x2663021  addu        $a2, $s3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286E30u;
    if (runtime->hasFunction(0x286E30u)) {
        auto targetFn = runtime->lookupFunction(0x286E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0B30u; }
        if (ctx->pc != 0x2A0B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286E30_0x286e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0B30u; }
        if (ctx->pc != 0x2A0B30u) { return; }
    }
    ctx->pc = 0x2A0B30u;
label_2a0b30:
    // 0x2a0b30: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2a0b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2a0b34:
    // 0x2a0b34: 0x702018  mult        $a0, $v1, $s0
    ctx->pc = 0x2a0b34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2a0b38: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2a0b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a0b3c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2a0b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2a0b40: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a0b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0b44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a0b44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0b48: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x2a0b48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0b4c: 0x932821  addu        $a1, $a0, $s3
    ctx->pc = 0x2a0b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2a0b50: 0xc0a1d60  jal         func_287580
    ctx->pc = 0x2A0B50u;
    SET_GPR_U32(ctx, 31, 0x2A0B58u);
    ctx->pc = 0x2A0B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0B50u;
            // 0x2a0b54: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287580u;
    if (runtime->hasFunction(0x287580u)) {
        auto targetFn = runtime->lookupFunction(0x287580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0B58u; }
        if (ctx->pc != 0x2A0B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287580_0x287580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0B58u; }
        if (ctx->pc != 0x2A0B58u) { return; }
    }
    ctx->pc = 0x2A0B58u;
label_2a0b58:
    // 0x2a0b58: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2A0B58u;
    {
        const bool branch_taken_0x2a0b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0B58u;
            // 0x2a0b5c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0b58) {
            ctx->pc = 0x2A0C6Cu;
            goto label_2a0c6c;
        }
    }
    ctx->pc = 0x2A0B60u;
    // 0x2a0b60: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2a0b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a0b64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a0b64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0b68: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x2a0b68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0b6c: 0x502818  mult        $a1, $v0, $s0
    ctx->pc = 0x2a0b6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2a0b70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a0b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a0b74: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2a0b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2a0b78: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a0b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a0b7c: 0x24a50014  addiu       $a1, $a1, 0x14
    ctx->pc = 0x2a0b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x2a0b80: 0xc0a1d60  jal         func_287580
    ctx->pc = 0x2A0B80u;
    SET_GPR_U32(ctx, 31, 0x2A0B88u);
    ctx->pc = 0x2A0B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0B80u;
            // 0x2a0b84: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287580u;
    if (runtime->hasFunction(0x287580u)) {
        auto targetFn = runtime->lookupFunction(0x287580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0B88u; }
        if (ctx->pc != 0x2A0B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287580_0x287580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0B88u; }
        if (ctx->pc != 0x2A0B88u) { return; }
    }
    ctx->pc = 0x2A0B88u;
label_2a0b88:
    // 0x2a0b88: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2A0B88u;
    {
        const bool branch_taken_0x2a0b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0B88u;
            // 0x2a0b8c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0b88) {
            ctx->pc = 0x2A0C6Cu;
            goto label_2a0c6c;
        }
    }
    ctx->pc = 0x2A0B90u;
    // 0x2a0b90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a0b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a0b94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a0b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0b98: 0xb2182a  slt         $v1, $a1, $s2
    ctx->pc = 0x2a0b98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2a0b9c: 0x1460ffac  bnez        $v1, . + 4 + (-0x54 << 2)
    ctx->pc = 0x2A0B9Cu;
    {
        const bool branch_taken_0x2a0b9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0B9Cu;
            // 0x2a0ba0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0b9c) {
            ctx->pc = 0x2A0A50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a0a50;
        }
    }
    ctx->pc = 0x2A0BA4u;
label_2a0ba4:
    // 0x2a0ba4: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x2a0ba4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2a0ba8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2a0ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2a0bac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a0bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0bb0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2a0bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2a0bb4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2a0bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2a0bb8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2a0bb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0bbc: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x2a0bbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a0bc0: 0xc0a898c  jal         func_2A2630
    ctx->pc = 0x2A0BC0u;
    SET_GPR_U32(ctx, 31, 0x2A0BC8u);
    ctx->pc = 0x2A0BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0BC0u;
            // 0x2a0bc4: 0x26910004  addiu       $s1, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2630u;
    if (runtime->hasFunction(0x2A2630u)) {
        auto targetFn = runtime->lookupFunction(0x2A2630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0BC8u; }
        if (ctx->pc != 0x2A0BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2630_0x2a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0BC8u; }
        if (ctx->pc != 0x2A0BC8u) { return; }
    }
    ctx->pc = 0x2A0BC8u;
label_2a0bc8:
    // 0x2a0bc8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2a0bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2a0bcc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a0bccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0bd0: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x2a0bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a0bd4: 0xc0a1b8c  jal         func_286E30
    ctx->pc = 0x2A0BD4u;
    SET_GPR_U32(ctx, 31, 0x2A0BDCu);
    ctx->pc = 0x2A0BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0BD4u;
            // 0x2a0bd8: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286E30u;
    if (runtime->hasFunction(0x286E30u)) {
        auto targetFn = runtime->lookupFunction(0x286E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0BDCu; }
        if (ctx->pc != 0x2A0BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286E30_0x286e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0BDCu; }
        if (ctx->pc != 0x2A0BDCu) { return; }
    }
    ctx->pc = 0x2A0BDCu;
label_2a0bdc:
    // 0x2a0bdc: 0x8ee3000c  lw          $v1, 0xC($s7)
    ctx->pc = 0x2a0bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x2a0be0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2a0be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2a0be4: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2A0BE4u;
    {
        const bool branch_taken_0x2a0be4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0BE4u;
            // 0x2a0be8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0be4) {
            ctx->pc = 0x2A0C68u;
            goto label_2a0c68;
        }
    }
    ctx->pc = 0x2A0BECu;
    // 0x2a0bec: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x2a0becu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a0bf0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2a0bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2a0bf4: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x2a0bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2a0bf8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2a0bf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0bfc: 0xc0a898c  jal         func_2A2630
    ctx->pc = 0x2A0BFCu;
    SET_GPR_U32(ctx, 31, 0x2A0C04u);
    ctx->pc = 0x2A0C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0BFCu;
            // 0x2a0c00: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2630u;
    if (runtime->hasFunction(0x2A2630u)) {
        auto targetFn = runtime->lookupFunction(0x2A2630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0C04u; }
        if (ctx->pc != 0x2A0C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2630_0x2a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0C04u; }
        if (ctx->pc != 0x2A0C04u) { return; }
    }
    ctx->pc = 0x2A0C04u;
label_2a0c04:
    // 0x2a0c04: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2a0c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2a0c08: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2A0C08u;
    {
        const bool branch_taken_0x2a0c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0C08u;
            // 0x2a0c0c: 0x26900018  addiu       $s0, $s4, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0c08) {
            ctx->pc = 0x2A0C6Cu;
            goto label_2a0c6c;
        }
    }
    ctx->pc = 0x2A0C10u;
    // 0x2a0c10: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2a0c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2a0c14: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2a0c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a0c18: 0xc0a1b8c  jal         func_286E30
    ctx->pc = 0x2A0C18u;
    SET_GPR_U32(ctx, 31, 0x2A0C20u);
    ctx->pc = 0x2A0C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0C18u;
            // 0x2a0c1c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286E30u;
    if (runtime->hasFunction(0x286E30u)) {
        auto targetFn = runtime->lookupFunction(0x286E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0C20u; }
        if (ctx->pc != 0x2A0C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286E30_0x286e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0C20u; }
        if (ctx->pc != 0x2A0C20u) { return; }
    }
    ctx->pc = 0x2A0C20u;
label_2a0c20:
    // 0x2a0c20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a0c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0c24: 0xc0a1d3c  jal         func_2874F0
    ctx->pc = 0x2A0C24u;
    SET_GPR_U32(ctx, 31, 0x2A0C2Cu);
    ctx->pc = 0x2A0C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0C24u;
            // 0x2a0c28: 0x26850054  addiu       $a1, $s4, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2874F0u;
    if (runtime->hasFunction(0x2874F0u)) {
        auto targetFn = runtime->lookupFunction(0x2874F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0C2Cu; }
        if (ctx->pc != 0x2A0C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002874F0_0x2874f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0C2Cu; }
        if (ctx->pc != 0x2A0C2Cu) { return; }
    }
    ctx->pc = 0x2A0C2Cu;
label_2a0c2c:
    // 0x2a0c2c: 0x8e840054  lw          $a0, 0x54($s4)
    ctx->pc = 0x2a0c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x2a0c30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a0c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0c34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a0c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0c38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a0c38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0c3c: 0xc0a1d60  jal         func_287580
    ctx->pc = 0x2A0C3Cu;
    SET_GPR_U32(ctx, 31, 0x2A0C44u);
    ctx->pc = 0x2A0C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0C3Cu;
            // 0x2a0c40: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287580u;
    if (runtime->hasFunction(0x287580u)) {
        auto targetFn = runtime->lookupFunction(0x287580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0C44u; }
        if (ctx->pc != 0x2A0C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287580_0x287580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0C44u; }
        if (ctx->pc != 0x2A0C44u) { return; }
    }
    ctx->pc = 0x2A0C44u;
label_2a0c44:
    // 0x2a0c44: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A0C44u;
    {
        const bool branch_taken_0x2a0c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0C44u;
            // 0x2a0c48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0c44) {
            ctx->pc = 0x2A0C6Cu;
            goto label_2a0c6c;
        }
    }
    ctx->pc = 0x2A0C4Cu;
    // 0x2a0c4c: 0x8e840054  lw          $a0, 0x54($s4)
    ctx->pc = 0x2a0c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x2a0c50: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2a0c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a0c54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a0c54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0c58: 0xc0a1d60  jal         func_287580
    ctx->pc = 0x2A0C58u;
    SET_GPR_U32(ctx, 31, 0x2A0C60u);
    ctx->pc = 0x2A0C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0C58u;
            // 0x2a0c5c: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287580u;
    if (runtime->hasFunction(0x287580u)) {
        auto targetFn = runtime->lookupFunction(0x287580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0C60u; }
        if (ctx->pc != 0x2A0C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287580_0x287580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0C60u; }
        if (ctx->pc != 0x2A0C60u) { return; }
    }
    ctx->pc = 0x2A0C60u;
label_2a0c60:
    // 0x2a0c60: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A0C60u;
    {
        const bool branch_taken_0x2a0c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0c60) {
            ctx->pc = 0x2A0C6Cu;
            goto label_2a0c6c;
        }
    }
    ctx->pc = 0x2A0C68u;
label_2a0c68:
    // 0x2a0c68: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2a0c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_2a0c6c:
    // 0x2a0c6c: 0x13c00004  beqz        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0C6Cu;
    {
        const bool branch_taken_0x2a0c6c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0C6Cu;
            // 0x2a0c70: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0c6c) {
            ctx->pc = 0x2A0C80u;
            goto label_2a0c80;
        }
    }
    ctx->pc = 0x2A0C74u;
    // 0x2a0c74: 0xc0a1abe  jal         func_286AF8
    ctx->pc = 0x2A0C74u;
    SET_GPR_U32(ctx, 31, 0x2A0C7Cu);
    ctx->pc = 0x2A0C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0C74u;
            // 0x2a0c78: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286AF8u;
    if (runtime->hasFunction(0x286AF8u)) {
        auto targetFn = runtime->lookupFunction(0x286AF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0C7Cu; }
        if (ctx->pc != 0x2A0C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286AF8_0x286af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0C7Cu; }
        if (ctx->pc != 0x2A0C7Cu) { return; }
    }
    ctx->pc = 0x2A0C7Cu;
label_2a0c7c:
    // 0x2a0c7c: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x2a0c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2a0c80:
    // 0x2a0c80: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2a0c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a0c84: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x2a0c84u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a0c88: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x2a0c88u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a0c8c: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x2a0c8cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a0c90: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x2a0c90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a0c94: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2a0c94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a0c98: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2a0c98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a0c9c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2a0c9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a0ca0: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2a0ca0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a0ca4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2a0ca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a0ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0CA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0CA8u;
            // 0x2a0cac: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A0CB0u;
label_2a0cb0:
    // 0x2a0cb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a0cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a0cb4: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x2a0cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2a0cb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a0cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a0cbc: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x2a0cbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2a0cc0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2A0CC0u;
    {
        const bool branch_taken_0x2a0cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0CC0u;
            // 0x2a0cc4: 0x80602d  daddu       $t4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0cc0) {
            ctx->pc = 0x2A0D34u;
            goto label_2a0d34;
        }
    }
    ctx->pc = 0x2A0CC8u;
    // 0x2a0cc8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2a0cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2a0ccc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a0cccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a0cd0: 0x2442c6d0  addiu       $v0, $v0, -0x3930
    ctx->pc = 0x2a0cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952656));
    // 0x2a0cd4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a0cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a0cd8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a0cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a0cdc: 0x800008  jr          $a0
    ctx->pc = 0x2A0CDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A0CE4u: goto label_2a0ce4;
            case 0x2A0CF4u: goto label_2a0cf4;
            case 0x2A0D04u: goto label_2a0d04;
            case 0x2A0D14u: goto label_2a0d14;
            case 0x2A0D24u: goto label_2a0d24;
            case 0x2A0D34u: goto label_2a0d34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A0CE4u;
label_2a0ce4:
    // 0x2a0ce4: 0xc0a8352  jal         func_2A0D48
    ctx->pc = 0x2A0CE4u;
    SET_GPR_U32(ctx, 31, 0x2A0CECu);
    ctx->pc = 0x2A0CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0CE4u;
            // 0x2a0ce8: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A0D48u;
    if (runtime->hasFunction(0x2A0D48u)) {
        auto targetFn = runtime->lookupFunction(0x2A0D48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0CECu; }
        if (ctx->pc != 0x2A0CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A0D48_0x2a0d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0CECu; }
        if (ctx->pc != 0x2A0CECu) { return; }
    }
    ctx->pc = 0x2A0CECu;
label_2a0cec:
    // 0x2a0cec: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2A0CECu;
    {
        const bool branch_taken_0x2a0cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0CECu;
            // 0x2a0cf0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0cec) {
            ctx->pc = 0x2A0D3Cu;
            goto label_2a0d3c;
        }
    }
    ctx->pc = 0x2A0CF4u;
label_2a0cf4:
    // 0x2a0cf4: 0xc0a8570  jal         func_2A15C0
    ctx->pc = 0x2A0CF4u;
    SET_GPR_U32(ctx, 31, 0x2A0CFCu);
    ctx->pc = 0x2A0CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0CF4u;
            // 0x2a0cf8: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A15C0u;
    if (runtime->hasFunction(0x2A15C0u)) {
        auto targetFn = runtime->lookupFunction(0x2A15C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0CFCu; }
        if (ctx->pc != 0x2A0CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A15C0_0x2a15c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0CFCu; }
        if (ctx->pc != 0x2A0CFCu) { return; }
    }
    ctx->pc = 0x2A0CFCu;
label_2a0cfc:
    // 0x2a0cfc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2A0CFCu;
    {
        const bool branch_taken_0x2a0cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0CFCu;
            // 0x2a0d00: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0cfc) {
            ctx->pc = 0x2A0D3Cu;
            goto label_2a0d3c;
        }
    }
    ctx->pc = 0x2A0D04u;
label_2a0d04:
    // 0x2a0d04: 0xc0a845a  jal         func_2A1168
    ctx->pc = 0x2A0D04u;
    SET_GPR_U32(ctx, 31, 0x2A0D0Cu);
    ctx->pc = 0x2A0D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0D04u;
            // 0x2a0d08: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1168u;
    if (runtime->hasFunction(0x2A1168u)) {
        auto targetFn = runtime->lookupFunction(0x2A1168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0D0Cu; }
        if (ctx->pc != 0x2A0D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1168_0x2a1168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0D0Cu; }
        if (ctx->pc != 0x2A0D0Cu) { return; }
    }
    ctx->pc = 0x2A0D0Cu;
label_2a0d0c:
    // 0x2a0d0c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2A0D0Cu;
    {
        const bool branch_taken_0x2a0d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0D0Cu;
            // 0x2a0d10: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0d0c) {
            ctx->pc = 0x2A0D3Cu;
            goto label_2a0d3c;
        }
    }
    ctx->pc = 0x2A0D14u;
label_2a0d14:
    // 0x2a0d14: 0xc0a84ae  jal         func_2A12B8
    ctx->pc = 0x2A0D14u;
    SET_GPR_U32(ctx, 31, 0x2A0D1Cu);
    ctx->pc = 0x2A0D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0D14u;
            // 0x2a0d18: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A12B8u;
    if (runtime->hasFunction(0x2A12B8u)) {
        auto targetFn = runtime->lookupFunction(0x2A12B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0D1Cu; }
        if (ctx->pc != 0x2A0D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A12B8_0x2a12b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0D1Cu; }
        if (ctx->pc != 0x2A0D1Cu) { return; }
    }
    ctx->pc = 0x2A0D1Cu;
label_2a0d1c:
    // 0x2a0d1c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A0D1Cu;
    {
        const bool branch_taken_0x2a0d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0D1Cu;
            // 0x2a0d20: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0d1c) {
            ctx->pc = 0x2A0D3Cu;
            goto label_2a0d3c;
        }
    }
    ctx->pc = 0x2A0D24u;
label_2a0d24:
    // 0x2a0d24: 0xc0a852e  jal         func_2A14B8
    ctx->pc = 0x2A0D24u;
    SET_GPR_U32(ctx, 31, 0x2A0D2Cu);
    ctx->pc = 0x2A0D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0D24u;
            // 0x2a0d28: 0x180202d  daddu       $a0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A14B8u;
    if (runtime->hasFunction(0x2A14B8u)) {
        auto targetFn = runtime->lookupFunction(0x2A14B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0D2Cu; }
        if (ctx->pc != 0x2A0D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A14B8_0x2a14b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0D2Cu; }
        if (ctx->pc != 0x2A0D2Cu) { return; }
    }
    ctx->pc = 0x2A0D2Cu;
label_2a0d2c:
    // 0x2a0d2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0D2Cu;
    {
        const bool branch_taken_0x2a0d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0D2Cu;
            // 0x2a0d30: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0d2c) {
            ctx->pc = 0x2A0D3Cu;
            goto label_2a0d3c;
        }
    }
    ctx->pc = 0x2A0D34u;
label_2a0d34:
    // 0x2a0d34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a0d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a0d38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a0d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a0d3c:
    // 0x2a0d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0D3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0D3Cu;
            // 0x2a0d40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A0D44u;
    // 0x2a0d44: 0x0  nop
    ctx->pc = 0x2a0d44u;
    // NOP
    ctx->pc = 0x2a0d48u;
}
