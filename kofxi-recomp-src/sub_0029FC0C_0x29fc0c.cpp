#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029FC0C
// Address: 0x29fc0c - 0x2a02c0
void sub_0029FC0C_0x29fc0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029FC0C_0x29fc0c");
#endif

    switch (ctx->pc) {
        case 0x29fc1cu: goto label_29fc1c;
        case 0x29fc34u: goto label_29fc34;
        case 0x29fc54u: goto label_29fc54;
        case 0x29fc5cu: goto label_29fc5c;
        case 0x29fca0u: goto label_29fca0;
        case 0x29fcbcu: goto label_29fcbc;
        case 0x29fce4u: goto label_29fce4;
        case 0x29fd00u: goto label_29fd00;
        case 0x29fd10u: goto label_29fd10;
        case 0x29fd20u: goto label_29fd20;
        case 0x29fd24u: goto label_29fd24;
        case 0x29fd58u: goto label_29fd58;
        case 0x29fd8cu: goto label_29fd8c;
        case 0x29fdf0u: goto label_29fdf0;
        case 0x29fe14u: goto label_29fe14;
        case 0x29fe3cu: goto label_29fe3c;
        case 0x29fe58u: goto label_29fe58;
        case 0x29feb8u: goto label_29feb8;
        case 0x29feccu: goto label_29fecc;
        case 0x29fed8u: goto label_29fed8;
        case 0x29ff00u: goto label_29ff00;
        case 0x29ff38u: goto label_29ff38;
        case 0x29ff84u: goto label_29ff84;
        case 0x29ff98u: goto label_29ff98;
        case 0x29ffc8u: goto label_29ffc8;
        case 0x29ffd4u: goto label_29ffd4;
        case 0x29fff0u: goto label_29fff0;
        case 0x29fff8u: goto label_29fff8;
        case 0x2a0000u: goto label_2a0000;
        case 0x2a0038u: goto label_2a0038;
        case 0x2a0090u: goto label_2a0090;
        case 0x2a00b4u: goto label_2a00b4;
        case 0x2a00e4u: goto label_2a00e4;
        case 0x2a00f0u: goto label_2a00f0;
        case 0x2a0120u: goto label_2a0120;
        case 0x2a01c4u: goto label_2a01c4;
        case 0x2a01e4u: goto label_2a01e4;
        case 0x2a0200u: goto label_2a0200;
        case 0x2a021cu: goto label_2a021c;
        case 0x2a0274u: goto label_2a0274;
        case 0x2a02b8u: goto label_2a02b8;
        default: break;
    }

    ctx->pc = 0x29fc0cu;

    // 0x29fc0c: 0x26050064  addiu       $a1, $s0, 0x64
    ctx->pc = 0x29fc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x29fc10: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x29fc10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x29fc14: 0xc0a1d3c  jal         func_2874F0
    ctx->pc = 0x29FC14u;
    SET_GPR_U32(ctx, 31, 0x29FC1Cu);
    ctx->pc = 0x29FC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FC14u;
            // 0x29fc18: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2874F0u;
    if (runtime->hasFunction(0x2874F0u)) {
        auto targetFn = runtime->lookupFunction(0x2874F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FC1Cu; }
        if (ctx->pc != 0x29FC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002874F0_0x2874f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FC1Cu; }
        if (ctx->pc != 0x29FC1Cu) { return; }
    }
    ctx->pc = 0x29FC1Cu;
label_29fc1c:
    // 0x29fc1c: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x29fc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x29fc20: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29fc20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fc24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29fc24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29fc28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29fc28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fc2c: 0xc0a1d60  jal         func_287580
    ctx->pc = 0x29FC2Cu;
    SET_GPR_U32(ctx, 31, 0x29FC34u);
    ctx->pc = 0x29FC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FC2Cu;
            // 0x29fc30: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287580u;
    if (runtime->hasFunction(0x287580u)) {
        auto targetFn = runtime->lookupFunction(0x287580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FC34u; }
        if (ctx->pc != 0x29FC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287580_0x287580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FC34u; }
        if (ctx->pc != 0x29FC34u) { return; }
    }
    ctx->pc = 0x29FC34u;
label_29fc34:
    // 0x29fc34: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x29FC34u;
    {
        const bool branch_taken_0x29fc34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29FC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FC34u;
            // 0x29fc38: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fc34) {
            ctx->pc = 0x29FD10u;
            goto label_29fd10;
        }
    }
    ctx->pc = 0x29FC3Cu;
    // 0x29fc3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29fc3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fc40: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x29fc40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29fc44: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x29fc44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fc48: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x29fc48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fc4c: 0xc0a898c  jal         func_2A2630
    ctx->pc = 0x29FC4Cu;
    SET_GPR_U32(ctx, 31, 0x29FC54u);
    ctx->pc = 0x29FC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FC4Cu;
            // 0x29fc50: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2630u;
    if (runtime->hasFunction(0x2A2630u)) {
        auto targetFn = runtime->lookupFunction(0x2A2630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FC54u; }
        if (ctx->pc != 0x29FC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2630_0x2a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FC54u; }
        if (ctx->pc != 0x29FC54u) { return; }
    }
    ctx->pc = 0x29FC54u;
label_29fc54:
    // 0x29fc54: 0xc0a1a02  jal         func_286808
    ctx->pc = 0x29FC54u;
    SET_GPR_U32(ctx, 31, 0x29FC5Cu);
    ctx->pc = 0x29FC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FC54u;
            // 0x29fc58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286808u;
    if (runtime->hasFunction(0x286808u)) {
        auto targetFn = runtime->lookupFunction(0x286808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FC5Cu; }
        if (ctx->pc != 0x29FC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286808_0x286808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FC5Cu; }
        if (ctx->pc != 0x29FC5Cu) { return; }
    }
    ctx->pc = 0x29FC5Cu;
label_29fc5c:
    // 0x29fc5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29fc5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fc60: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x29fc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x29fc64: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29FC64u;
    {
        const bool branch_taken_0x29fc64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29FC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FC64u;
            // 0x29fc68: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fc64) {
            ctx->pc = 0x29FC74u;
            goto label_29fc74;
        }
    }
    ctx->pc = 0x29FC6Cu;
    // 0x29fc6c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29FC6Cu;
    {
        const bool branch_taken_0x29fc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FC6Cu;
            // 0x29fc70: 0xae040008  sw          $a0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fc6c) {
            ctx->pc = 0x29FC84u;
            goto label_29fc84;
        }
    }
    ctx->pc = 0x29FC74u;
label_29fc74:
    // 0x29fc74: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x29fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x29fc78: 0x82182a  slt         $v1, $a0, $v0
    ctx->pc = 0x29fc78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29fc7c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29fc7cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29fc80: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x29fc80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_29fc84:
    // 0x29fc84: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x29fc84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x29fc88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29fc88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fc8c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x29fc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x29fc90: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x29fc90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29fc94: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x29fc94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fc98: 0xc0a898c  jal         func_2A2630
    ctx->pc = 0x29FC98u;
    SET_GPR_U32(ctx, 31, 0x29FCA0u);
    ctx->pc = 0x29FC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FC98u;
            // 0x29fc9c: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2630u;
    if (runtime->hasFunction(0x2A2630u)) {
        auto targetFn = runtime->lookupFunction(0x2A2630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FCA0u; }
        if (ctx->pc != 0x29FCA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2630_0x2a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FCA0u; }
        if (ctx->pc != 0x29FCA0u) { return; }
    }
    ctx->pc = 0x29FCA0u;
label_29fca0:
    // 0x29fca0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x29FCA0u;
    {
        const bool branch_taken_0x29fca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29FCA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FCA0u;
            // 0x29fca4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fca0) {
            ctx->pc = 0x29FCCCu;
            goto label_29fccc;
        }
    }
    ctx->pc = 0x29FCA8u;
    // 0x29fca8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x29fca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x29fcac: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x29fcacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fcb0: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x29fcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x29fcb4: 0xc0a1b8c  jal         func_286E30
    ctx->pc = 0x29FCB4u;
    SET_GPR_U32(ctx, 31, 0x29FCBCu);
    ctx->pc = 0x29FCB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FCB4u;
            // 0x29fcb8: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286E30u;
    if (runtime->hasFunction(0x286E30u)) {
        auto targetFn = runtime->lookupFunction(0x286E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FCBCu; }
        if (ctx->pc != 0x29FCBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286E30_0x286e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FCBCu; }
        if (ctx->pc != 0x29FCBCu) { return; }
    }
    ctx->pc = 0x29FCBCu;
label_29fcbc:
    // 0x29fcbc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x29fcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29fcc0: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x29fcc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x29fcc4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x29fcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x29fcc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29fcc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29fccc:
    // 0x29fccc: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x29fcccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fcd0: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x29fcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x29fcd4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x29fcd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29fcd8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x29fcd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fcdc: 0xc0a898c  jal         func_2A2630
    ctx->pc = 0x29FCDCu;
    SET_GPR_U32(ctx, 31, 0x29FCE4u);
    ctx->pc = 0x29FCE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FCDCu;
            // 0x29fce0: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2630u;
    if (runtime->hasFunction(0x2A2630u)) {
        auto targetFn = runtime->lookupFunction(0x2A2630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FCE4u; }
        if (ctx->pc != 0x29FCE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2630_0x2a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FCE4u; }
        if (ctx->pc != 0x29FCE4u) { return; }
    }
    ctx->pc = 0x29FCE4u;
label_29fce4:
    // 0x29fce4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x29FCE4u;
    {
        const bool branch_taken_0x29fce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29FCE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FCE4u;
            // 0x29fce8: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fce4) {
            ctx->pc = 0x29FD10u;
            goto label_29fd10;
        }
    }
    ctx->pc = 0x29FCECu;
    // 0x29fcec: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x29fcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x29fcf0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x29fcf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fcf4: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x29fcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x29fcf8: 0xc0a1b8c  jal         func_286E30
    ctx->pc = 0x29FCF8u;
    SET_GPR_U32(ctx, 31, 0x29FD00u);
    ctx->pc = 0x29FCFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FCF8u;
            // 0x29fcfc: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286E30u;
    if (runtime->hasFunction(0x286E30u)) {
        auto targetFn = runtime->lookupFunction(0x286E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FD00u; }
        if (ctx->pc != 0x29FD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286E30_0x286e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FD00u; }
        if (ctx->pc != 0x29FD00u) { return; }
    }
    ctx->pc = 0x29FD00u;
label_29fd00:
    // 0x29fd00: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x29fd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29fd04: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x29fd04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x29fd08: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x29fd08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x29fd0c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x29fd0cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29fd10:
    // 0x29fd10: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x29FD10u;
    {
        const bool branch_taken_0x29fd10 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FD10u;
            // 0x29fd14: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fd10) {
            ctx->pc = 0x29FD24u;
            goto label_29fd24;
        }
    }
    ctx->pc = 0x29FD18u;
    // 0x29fd18: 0xc0a1abe  jal         func_286AF8
    ctx->pc = 0x29FD18u;
    SET_GPR_U32(ctx, 31, 0x29FD20u);
    ctx->pc = 0x29FD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FD18u;
            // 0x29fd1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286AF8u;
    if (runtime->hasFunction(0x286AF8u)) {
        auto targetFn = runtime->lookupFunction(0x286AF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FD20u; }
        if (ctx->pc != 0x29FD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286AF8_0x286af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FD20u; }
        if (ctx->pc != 0x29FD20u) { return; }
    }
    ctx->pc = 0x29FD20u;
label_29fd20:
    // 0x29fd20: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x29fd20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_29fd24:
    // 0x29fd24: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x29fd24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29fd28: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x29fd28u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29fd2c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x29fd2cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29fd30: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x29fd30u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29fd34: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x29fd34u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29fd38: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x29fd38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29fd3c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x29fd3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29fd40: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x29fd40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29fd44: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x29fd44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29fd48: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29fd48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29fd4c: 0x3e00008  jr          $ra
    ctx->pc = 0x29FD4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FD4Cu;
            // 0x29fd50: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29FD54u;
    // 0x29fd54: 0x0  nop
    ctx->pc = 0x29fd54u;
    // NOP
label_29fd58:
    // 0x29fd58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29fd58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29fd5c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x29fd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29fd60: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29fd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29fd64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29fd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29fd68: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x29fd68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fd6c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29fd6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29fd70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29fd70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fd74: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29FD74u;
    {
        const bool branch_taken_0x29fd74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x29FD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FD74u;
            // 0x29fd78: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fd74) {
            ctx->pc = 0x29FD84u;
            goto label_29fd84;
        }
    }
    ctx->pc = 0x29FD7Cu;
    // 0x29fd7c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x29FD7Cu;
    {
        const bool branch_taken_0x29fd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FD7Cu;
            // 0x29fd80: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fd7c) {
            ctx->pc = 0x29FE40u;
            goto label_29fe40;
        }
    }
    ctx->pc = 0x29FD84u;
label_29fd84:
    // 0x29fd84: 0xc0a1a9e  jal         func_286A78
    ctx->pc = 0x29FD84u;
    SET_GPR_U32(ctx, 31, 0x29FD8Cu);
    ctx->pc = 0x286A78u;
    if (runtime->hasFunction(0x286A78u)) {
        auto targetFn = runtime->lookupFunction(0x286A78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FD8Cu; }
        if (ctx->pc != 0x29FD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286A78_0x286a78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FD8Cu; }
        if (ctx->pc != 0x29FD8Cu) { return; }
    }
    ctx->pc = 0x29FD8Cu;
label_29fd8c:
    // 0x29fd8c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x29fd8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fd90: 0x56400003  bnel        $s2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x29FD90u;
    {
        const bool branch_taken_0x29fd90 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x29fd90) {
            ctx->pc = 0x29FD94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29FD90u;
            // 0x29fd94: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29FDA0u;
            goto label_29fda0;
        }
    }
    ctx->pc = 0x29FD98u;
    // 0x29fd98: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x29FD98u;
    {
        const bool branch_taken_0x29fd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FD98u;
            // 0x29fd9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fd98) {
            ctx->pc = 0x29FE40u;
            goto label_29fe40;
        }
    }
    ctx->pc = 0x29FDA0u;
label_29fda0:
    // 0x29fda0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x29fda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29fda4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x29fda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x29fda8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x29FDA8u;
    {
        const bool branch_taken_0x29fda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29fda8) {
            ctx->pc = 0x29FDACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29FDA8u;
            // 0x29fdac: 0x8e05005c  lw          $a1, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29FDB8u;
            goto label_29fdb8;
        }
    }
    ctx->pc = 0x29FDB0u;
    // 0x29fdb0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x29FDB0u;
    {
        const bool branch_taken_0x29fdb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FDB0u;
            // 0x29fdb4: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fdb0) {
            ctx->pc = 0x29FE2Cu;
            goto label_29fe2c;
        }
    }
    ctx->pc = 0x29FDB8u;
label_29fdb8:
    // 0x29fdb8: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29FDB8u;
    {
        const bool branch_taken_0x29fdb8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x29FDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FDB8u;
            // 0x29fdbc: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fdb8) {
            ctx->pc = 0x29FDC8u;
            goto label_29fdc8;
        }
    }
    ctx->pc = 0x29FDC0u;
    // 0x29fdc0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x29FDC0u;
    {
        const bool branch_taken_0x29fdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FDC0u;
            // 0x29fdc4: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fdc0) {
            ctx->pc = 0x29FE2Cu;
            goto label_29fe2c;
        }
    }
    ctx->pc = 0x29FDC8u;
label_29fdc8:
    // 0x29fdc8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29FDC8u;
    {
        const bool branch_taken_0x29fdc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FDC8u;
            // 0x29fdcc: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fdc8) {
            ctx->pc = 0x29FDD8u;
            goto label_29fdd8;
        }
    }
    ctx->pc = 0x29FDD0u;
    // 0x29fdd0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29FDD0u;
    {
        const bool branch_taken_0x29fdd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29FDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FDD0u;
            // 0x29fdd4: 0x26110048  addiu       $s1, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fdd0) {
            ctx->pc = 0x29FDF8u;
            goto label_29fdf8;
        }
    }
    ctx->pc = 0x29FDD8u;
label_29fdd8:
    // 0x29fdd8: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x29fdd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x29fddc: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x29fddcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29fde0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29fde0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fde4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x29fde4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29fde8: 0xc0a2cec  jal         func_28B3B0
    ctx->pc = 0x29FDE8u;
    SET_GPR_U32(ctx, 31, 0x29FDF0u);
    ctx->pc = 0x29FDECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FDE8u;
            // 0x29fdec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B3B0u;
    if (runtime->hasFunction(0x28B3B0u)) {
        auto targetFn = runtime->lookupFunction(0x28B3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FDF0u; }
        if (ctx->pc != 0x29FDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B3B0_0x28b3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FDF0u; }
        if (ctx->pc != 0x29FDF0u) { return; }
    }
    ctx->pc = 0x29FDF0u;
label_29fdf0:
    // 0x29fdf0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29FDF0u;
    {
        const bool branch_taken_0x29fdf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FDF0u;
            // 0x29fdf4: 0x8e040064  lw          $a0, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fdf0) {
            ctx->pc = 0x29FDFCu;
            goto label_29fdfc;
        }
    }
    ctx->pc = 0x29FDF8u;
label_29fdf8:
    // 0x29fdf8: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x29fdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_29fdfc:
    // 0x29fdfc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x29fdfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fe00: 0x26050034  addiu       $a1, $s0, 0x34
    ctx->pc = 0x29fe00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x29fe04: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x29fe04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x29fe08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29fe08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fe0c: 0xc0a1d96  jal         func_287658
    ctx->pc = 0x29FE0Cu;
    SET_GPR_U32(ctx, 31, 0x29FE14u);
    ctx->pc = 0x29FE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FE0Cu;
            // 0x29fe10: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287658u;
    if (runtime->hasFunction(0x287658u)) {
        auto targetFn = runtime->lookupFunction(0x287658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FE14u; }
        if (ctx->pc != 0x29FE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287658_0x287658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FE14u; }
        if (ctx->pc != 0x29FE14u) { return; }
    }
    ctx->pc = 0x29FE14u;
label_29fe14:
    // 0x29fe14: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29fe14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fe18: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29FE18u;
    {
        const bool branch_taken_0x29fe18 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x29fe18) {
            ctx->pc = 0x29FE2Cu;
            goto label_29fe2c;
        }
    }
    ctx->pc = 0x29FE20u;
    // 0x29fe20: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x29fe20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29fe24: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x29fe24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x29fe28: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x29fe28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_29fe2c:
    // 0x29fe2c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x29FE2Cu;
    {
        const bool branch_taken_0x29fe2c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FE2Cu;
            // 0x29fe30: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fe2c) {
            ctx->pc = 0x29FE40u;
            goto label_29fe40;
        }
    }
    ctx->pc = 0x29FE34u;
    // 0x29fe34: 0xc0a1abe  jal         func_286AF8
    ctx->pc = 0x29FE34u;
    SET_GPR_U32(ctx, 31, 0x29FE3Cu);
    ctx->pc = 0x29FE38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FE34u;
            // 0x29fe38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286AF8u;
    if (runtime->hasFunction(0x286AF8u)) {
        auto targetFn = runtime->lookupFunction(0x286AF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FE3Cu; }
        if (ctx->pc != 0x29FE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286AF8_0x286af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FE3Cu; }
        if (ctx->pc != 0x29FE3Cu) { return; }
    }
    ctx->pc = 0x29FE3Cu;
label_29fe3c:
    // 0x29fe3c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x29fe3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29fe40:
    // 0x29fe40: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29fe40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29fe44: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29fe44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29fe48: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29fe48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29fe4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29fe4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29fe50: 0x3e00008  jr          $ra
    ctx->pc = 0x29FE50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FE50u;
            // 0x29fe54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29FE58u;
label_29fe58:
    // 0x29fe58: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x29fe58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x29fe5c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x29fe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x29fe60: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x29fe60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x29fe64: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x29fe64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
    // 0x29fe68: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x29fe68u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fe6c: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x29fe6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x29fe70: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x29fe70u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fe74: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x29fe74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x29fe78: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x29fe78u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fe7c: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x29fe7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x29fe80: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x29fe80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fe84: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x29fe84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x29fe88: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x29fe88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29fe8c: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x29fe8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x29fe90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29fe90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fe94: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x29fe94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x29fe98: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x29fe98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x29fe9c: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x29fe9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x29fea0: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29FEA0u;
    {
        const bool branch_taken_0x29fea0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x29FEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FEA0u;
            // 0x29fea4: 0xafa70040  sw          $a3, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fea0) {
            ctx->pc = 0x29FEB0u;
            goto label_29feb0;
        }
    }
    ctx->pc = 0x29FEA8u;
    // 0x29fea8: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x29FEA8u;
    {
        const bool branch_taken_0x29fea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FEA8u;
            // 0x29feac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fea8) {
            ctx->pc = 0x2A0004u;
            goto label_2a0004;
        }
    }
    ctx->pc = 0x29FEB0u;
label_29feb0:
    // 0x29feb0: 0xc0a1a9e  jal         func_286A78
    ctx->pc = 0x29FEB0u;
    SET_GPR_U32(ctx, 31, 0x29FEB8u);
    ctx->pc = 0x286A78u;
    if (runtime->hasFunction(0x286A78u)) {
        auto targetFn = runtime->lookupFunction(0x286A78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FEB8u; }
        if (ctx->pc != 0x29FEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286A78_0x286a78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FEB8u; }
        if (ctx->pc != 0x29FEB8u) { return; }
    }
    ctx->pc = 0x29FEB8u;
label_29feb8:
    // 0x29feb8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x29feb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29febc: 0x12600051  beqz        $s3, . + 4 + (0x51 << 2)
    ctx->pc = 0x29FEBCu;
    {
        const bool branch_taken_0x29febc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FEBCu;
            // 0x29fec0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29febc) {
            ctx->pc = 0x2A0004u;
            goto label_2a0004;
        }
    }
    ctx->pc = 0x29FEC4u;
    // 0x29fec4: 0xc0a1a88  jal         func_286A20
    ctx->pc = 0x29FEC4u;
    SET_GPR_U32(ctx, 31, 0x29FECCu);
    ctx->pc = 0x29FEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FEC4u;
            // 0x29fec8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286A20u;
    if (runtime->hasFunction(0x286A20u)) {
        auto targetFn = runtime->lookupFunction(0x286A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FECCu; }
        if (ctx->pc != 0x29FECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286A20_0x286a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FECCu; }
        if (ctx->pc != 0x29FECCu) { return; }
    }
    ctx->pc = 0x29FECCu;
label_29fecc:
    // 0x29fecc: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x29feccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29fed0: 0xc0a1a88  jal         func_286A20
    ctx->pc = 0x29FED0u;
    SET_GPR_U32(ctx, 31, 0x29FED8u);
    ctx->pc = 0x29FED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FED0u;
            // 0x29fed4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286A20u;
    if (runtime->hasFunction(0x286A20u)) {
        auto targetFn = runtime->lookupFunction(0x286A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FED8u; }
        if (ctx->pc != 0x29FED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286A20_0x286a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FED8u; }
        if (ctx->pc != 0x29FED8u) { return; }
    }
    ctx->pc = 0x29FED8u;
label_29fed8:
    // 0x29fed8: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x29fed8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29fedc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x29fedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29fee0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x29fee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29fee4: 0x30420005  andi        $v0, $v0, 0x5
    ctx->pc = 0x29fee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)5);
    // 0x29fee8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29FEE8u;
    {
        const bool branch_taken_0x29fee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x29fee8) {
            ctx->pc = 0x29FEF8u;
            goto label_29fef8;
        }
    }
    ctx->pc = 0x29FEF0u;
    // 0x29fef0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x29FEF0u;
    {
        const bool branch_taken_0x29fef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FEF0u;
            // 0x29fef4: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fef0) {
            ctx->pc = 0x29FFE0u;
            goto label_29ffe0;
        }
    }
    ctx->pc = 0x29FEF8u;
label_29fef8:
    // 0x29fef8: 0xc0a1a02  jal         func_286808
    ctx->pc = 0x29FEF8u;
    SET_GPR_U32(ctx, 31, 0x29FF00u);
    ctx->pc = 0x29FEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FEF8u;
            // 0x29fefc: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286808u;
    if (runtime->hasFunction(0x286808u)) {
        auto targetFn = runtime->lookupFunction(0x286808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FF00u; }
        if (ctx->pc != 0x29FF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286808_0x286808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FF00u; }
        if (ctx->pc != 0x29FF00u) { return; }
    }
    ctx->pc = 0x29FF00u;
label_29ff00:
    // 0x29ff00: 0x24440007  addiu       $a0, $v0, 0x7
    ctx->pc = 0x29ff00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x29ff04: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29ff04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29ff08: 0x2442000e  addiu       $v0, $v0, 0xE
    ctx->pc = 0x29ff08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
    // 0x29ff0c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x29ff0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29ff10: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29ff10u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29ff14: 0x2a0c3  sra         $s4, $v0, 3
    ctx->pc = 0x29ff14u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 3));
    // 0x29ff18: 0x2b4102b  sltu        $v0, $s5, $s4
    ctx->pc = 0x29ff18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x29ff1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29FF1Cu;
    {
        const bool branch_taken_0x29ff1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FF1Cu;
            // 0x29ff20: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ff1c) {
            ctx->pc = 0x29FF2Cu;
            goto label_29ff2c;
        }
    }
    ctx->pc = 0x29FF24u;
    // 0x29ff24: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x29FF24u;
    {
        const bool branch_taken_0x29ff24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FF24u;
            // 0x29ff28: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ff24) {
            ctx->pc = 0x29FFE0u;
            goto label_29ffe0;
        }
    }
    ctx->pc = 0x29FF2Cu;
label_29ff2c:
    // 0x29ff2c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x29ff2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ff30: 0xc0a1b8c  jal         func_286E30
    ctx->pc = 0x29FF30u;
    SET_GPR_U32(ctx, 31, 0x29FF38u);
    ctx->pc = 0x29FF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FF30u;
            // 0x29ff34: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286E30u;
    if (runtime->hasFunction(0x286E30u)) {
        auto targetFn = runtime->lookupFunction(0x286E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FF38u; }
        if (ctx->pc != 0x29FF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286E30_0x286e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FF38u; }
        if (ctx->pc != 0x29FF38u) { return; }
    }
    ctx->pc = 0x29FF38u;
label_29ff38:
    // 0x29ff38: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x29ff38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x29ff3c: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x29FF3Cu;
    {
        const bool branch_taken_0x29ff3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ff3c) {
            ctx->pc = 0x29FF40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29FF3Cu;
            // 0x29ff40: 0x24110005  addiu       $s1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29FFE0u;
            goto label_29ffe0;
        }
    }
    ctx->pc = 0x29FF44u;
    // 0x29ff44: 0x54510009  bnel        $v0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x29FF44u;
    {
        const bool branch_taken_0x29ff44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x29ff44) {
            ctx->pc = 0x29FF48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29FF44u;
            // 0x29ff48: 0x8e040064  lw          $a0, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29FF6Cu;
            goto label_29ff6c;
        }
    }
    ctx->pc = 0x29FF4Cu;
    // 0x29ff4c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x29ff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ff50: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x29ff50u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29ff54: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29FF54u;
    {
        const bool branch_taken_0x29ff54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FF54u;
            // 0x29ff58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ff54) {
            ctx->pc = 0x29FF64u;
            goto label_29ff64;
        }
    }
    ctx->pc = 0x29FF5Cu;
    // 0x29ff5c: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29FF5Cu;
    {
        const bool branch_taken_0x29ff5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29ff5c) {
            ctx->pc = 0x29FF60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29FF5Cu;
            // 0x29ff60: 0x8e040064  lw          $a0, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29FF6Cu;
            goto label_29ff6c;
        }
    }
    ctx->pc = 0x29FF64u;
label_29ff64:
    // 0x29ff64: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x29FF64u;
    {
        const bool branch_taken_0x29ff64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FF64u;
            // 0x29ff68: 0x24110005  addiu       $s1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ff64) {
            ctx->pc = 0x29FFE0u;
            goto label_29ffe0;
        }
    }
    ctx->pc = 0x29FF6Cu;
label_29ff6c:
    // 0x29ff6c: 0x26070048  addiu       $a3, $s0, 0x48
    ctx->pc = 0x29ff6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x29ff70: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29ff70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ff74: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x29ff74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ff78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29ff78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ff7c: 0xc0a1d96  jal         func_287658
    ctx->pc = 0x29FF7Cu;
    SET_GPR_U32(ctx, 31, 0x29FF84u);
    ctx->pc = 0x29FF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FF7Cu;
            // 0x29ff80: 0x260482d  daddu       $t1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287658u;
    if (runtime->hasFunction(0x287658u)) {
        auto targetFn = runtime->lookupFunction(0x287658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FF84u; }
        if (ctx->pc != 0x29FF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287658_0x287658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FF84u; }
        if (ctx->pc != 0x29FF84u) { return; }
    }
    ctx->pc = 0x29FF84u;
label_29ff84:
    // 0x29ff84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29ff84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ff88: 0x16200015  bnez        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x29FF88u;
    {
        const bool branch_taken_0x29ff88 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x29ff88) {
            ctx->pc = 0x29FFE0u;
            goto label_29ffe0;
        }
    }
    ctx->pc = 0x29FF90u;
    // 0x29ff90: 0xc0a1a02  jal         func_286808
    ctx->pc = 0x29FF90u;
    SET_GPR_U32(ctx, 31, 0x29FF98u);
    ctx->pc = 0x29FF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FF90u;
            // 0x29ff94: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286808u;
    if (runtime->hasFunction(0x286808u)) {
        auto targetFn = runtime->lookupFunction(0x286808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FF98u; }
        if (ctx->pc != 0x29FF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286808_0x286808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FF98u; }
        if (ctx->pc != 0x29FF98u) { return; }
    }
    ctx->pc = 0x29FF98u;
label_29ff98:
    // 0x29ff98: 0x24440007  addiu       $a0, $v0, 0x7
    ctx->pc = 0x29ff98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x29ff9c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29ff9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29ffa0: 0x2442000e  addiu       $v0, $v0, 0xE
    ctx->pc = 0x29ffa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
    // 0x29ffa4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x29ffa4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29ffa8: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29ffa8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29ffac: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x29ffacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x29ffb0: 0x2828023  subu        $s0, $s4, $v0
    ctx->pc = 0x29ffb0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x29ffb4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29FFB4u;
    {
        const bool branch_taken_0x29ffb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FFB4u;
            // 0x29ffb8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ffb4) {
            ctx->pc = 0x29FFC8u;
            goto label_29ffc8;
        }
    }
    ctx->pc = 0x29FFBCu;
    // 0x29ffbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29ffbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ffc0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x29FFC0u;
    SET_GPR_U32(ctx, 31, 0x29FFC8u);
    ctx->pc = 0x29FFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FFC0u;
            // 0x29ffc4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FFC8u; }
        if (ctx->pc != 0x29FFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FFC8u; }
        if (ctx->pc != 0x29FFC8u) { return; }
    }
    ctx->pc = 0x29FFC8u;
label_29ffc8:
    // 0x29ffc8: 0x3d02821  addu        $a1, $fp, $s0
    ctx->pc = 0x29ffc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
    // 0x29ffcc: 0xc0a1bdc  jal         func_286F70
    ctx->pc = 0x29FFCCu;
    SET_GPR_U32(ctx, 31, 0x29FFD4u);
    ctx->pc = 0x29FFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FFCCu;
            // 0x29ffd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286F70u;
    if (runtime->hasFunction(0x286F70u)) {
        auto targetFn = runtime->lookupFunction(0x286F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FFD4u; }
        if (ctx->pc != 0x29FFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286F70_0x286f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FFD4u; }
        if (ctx->pc != 0x29FFD4u) { return; }
    }
    ctx->pc = 0x29FFD4u;
label_29ffd4:
    // 0x29ffd4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x29ffd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29ffd8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x29ffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x29ffdc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x29ffdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_29ffe0:
    // 0x29ffe0: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x29FFE0u;
    {
        const bool branch_taken_0x29ffe0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ffe0) {
            ctx->pc = 0x29FFF0u;
            goto label_29fff0;
        }
    }
    ctx->pc = 0x29FFE8u;
    // 0x29ffe8: 0xc0a1abe  jal         func_286AF8
    ctx->pc = 0x29FFE8u;
    SET_GPR_U32(ctx, 31, 0x29FFF0u);
    ctx->pc = 0x29FFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FFE8u;
            // 0x29ffec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286AF8u;
    if (runtime->hasFunction(0x286AF8u)) {
        auto targetFn = runtime->lookupFunction(0x286AF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FFF0u; }
        if (ctx->pc != 0x29FFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286AF8_0x286af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FFF0u; }
        if (ctx->pc != 0x29FFF0u) { return; }
    }
    ctx->pc = 0x29FFF0u;
label_29fff0:
    // 0x29fff0: 0xc0a1a36  jal         func_2868D8
    ctx->pc = 0x29FFF0u;
    SET_GPR_U32(ctx, 31, 0x29FFF8u);
    ctx->pc = 0x29FFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FFF0u;
            // 0x29fff4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2868D8u;
    if (runtime->hasFunction(0x2868D8u)) {
        auto targetFn = runtime->lookupFunction(0x2868D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FFF8u; }
        if (ctx->pc != 0x29FFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002868D8_0x2868d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FFF8u; }
        if (ctx->pc != 0x29FFF8u) { return; }
    }
    ctx->pc = 0x29FFF8u;
label_29fff8:
    // 0x29fff8: 0xc0a1a36  jal         func_2868D8
    ctx->pc = 0x29FFF8u;
    SET_GPR_U32(ctx, 31, 0x2A0000u);
    ctx->pc = 0x29FFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FFF8u;
            // 0x29fffc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2868D8u;
    if (runtime->hasFunction(0x2868D8u)) {
        auto targetFn = runtime->lookupFunction(0x2868D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0000u; }
        if (ctx->pc != 0x2A0000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002868D8_0x2868d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0000u; }
        if (ctx->pc != 0x2A0000u) { return; }
    }
    ctx->pc = 0x2A0000u;
label_2a0000:
    // 0x2a0000: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a0000u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a0004:
    // 0x2a0004: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x2a0004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2a0008: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x2a0008u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a000c: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x2a000cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a0010: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x2a0010u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a0014: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x2a0014u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a0018: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x2a0018u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a001c: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x2a001cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a0020: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2a0020u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a0024: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x2a0024u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a0028: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2a0028u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a002c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A002Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A002Cu;
            // 0x2a0030: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A0034u;
    // 0x2a0034: 0x0  nop
    ctx->pc = 0x2a0034u;
    // NOP
label_2a0038:
    // 0x2a0038: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a0038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a003c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2a003cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a0040: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2a0040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2a0044: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a0044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2a0048: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2a0048u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a004c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a004cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2a0050: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2a0050u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0054: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2a0054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2a0058: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a0058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a005c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A005Cu;
    {
        const bool branch_taken_0x2a005c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A0060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A005Cu;
            // 0x2a0060: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a005c) {
            ctx->pc = 0x2A006Cu;
            goto label_2a006c;
        }
    }
    ctx->pc = 0x2A0064u;
    // 0x2a0064: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2A0064u;
    {
        const bool branch_taken_0x2a0064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0064u;
            // 0x2a0068: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0064) {
            ctx->pc = 0x2A00FCu;
            goto label_2a00fc;
        }
    }
    ctx->pc = 0x2A006Cu;
label_2a006c:
    // 0x2a006c: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x2a006cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a0070: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a0070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a0074: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2a0074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2a0078: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0078u;
    {
        const bool branch_taken_0x2a0078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A007Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0078u;
            // 0x2a007c: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0078) {
            ctx->pc = 0x2A0088u;
            goto label_2a0088;
        }
    }
    ctx->pc = 0x2A0080u;
    // 0x2a0080: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2A0080u;
    {
        const bool branch_taken_0x2a0080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0080u;
            // 0x2a0084: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0080) {
            ctx->pc = 0x2A00FCu;
            goto label_2a00fc;
        }
    }
    ctx->pc = 0x2A0088u;
label_2a0088:
    // 0x2a0088: 0xc0a1a02  jal         func_286808
    ctx->pc = 0x2A0088u;
    SET_GPR_U32(ctx, 31, 0x2A0090u);
    ctx->pc = 0x2A008Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0088u;
            // 0x2a008c: 0x26130034  addiu       $s3, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286808u;
    if (runtime->hasFunction(0x286808u)) {
        auto targetFn = runtime->lookupFunction(0x286808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0090u; }
        if (ctx->pc != 0x2A0090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286808_0x286808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0090u; }
        if (ctx->pc != 0x2A0090u) { return; }
    }
    ctx->pc = 0x2A0090u;
label_2a0090:
    // 0x2a0090: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x2a0090u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a0094: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a0094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0098: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a0098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a009c: 0x26030007  addiu       $v1, $s0, 0x7
    ctx->pc = 0x2a009cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 7));
    // 0x2a00a0: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x2a00a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a00a4: 0x2610000e  addiu       $s0, $s0, 0xE
    ctx->pc = 0x2a00a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
    // 0x2a00a8: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x2a00a8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x2a00ac: 0xc0a1a02  jal         func_286808
    ctx->pc = 0x2A00ACu;
    SET_GPR_U32(ctx, 31, 0x2A00B4u);
    ctx->pc = 0x2A00B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A00ACu;
            // 0x2a00b0: 0x1080c3  sra         $s0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286808u;
    if (runtime->hasFunction(0x286808u)) {
        auto targetFn = runtime->lookupFunction(0x286808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A00B4u; }
        if (ctx->pc != 0x2A00B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286808_0x286808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A00B4u; }
        if (ctx->pc != 0x2A00B4u) { return; }
    }
    ctx->pc = 0x2A00B4u;
label_2a00b4:
    // 0x2a00b4: 0x24430007  addiu       $v1, $v0, 0x7
    ctx->pc = 0x2a00b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x2a00b8: 0x2442000e  addiu       $v0, $v0, 0xE
    ctx->pc = 0x2a00b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
    // 0x2a00bc: 0x223882a  slt         $s1, $s1, $v1
    ctx->pc = 0x2a00bcu;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a00c0: 0x71100b  movn        $v0, $v1, $s1
    ctx->pc = 0x2a00c0u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2a00c4: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x2a00c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x2a00c8: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A00C8u;
    {
        const bool branch_taken_0x2a00c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A00CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A00C8u;
            // 0x2a00cc: 0x2028023  subu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a00c8) {
            ctx->pc = 0x2A00F0u;
            goto label_2a00f0;
        }
    }
    ctx->pc = 0x2A00D0u;
    // 0x2a00d0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A00D0u;
    {
        const bool branch_taken_0x2a00d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A00D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A00D0u;
            // 0x2a00d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a00d0) {
            ctx->pc = 0x2A00E4u;
            goto label_2a00e4;
        }
    }
    ctx->pc = 0x2A00D8u;
    // 0x2a00d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a00d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a00dc: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2A00DCu;
    SET_GPR_U32(ctx, 31, 0x2A00E4u);
    ctx->pc = 0x2A00E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A00DCu;
            // 0x2a00e0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A00E4u; }
        if (ctx->pc != 0x2A00E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A00E4u; }
        if (ctx->pc != 0x2A00E4u) { return; }
    }
    ctx->pc = 0x2A00E4u;
label_2a00e4:
    // 0x2a00e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a00e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a00e8: 0xc0a1bdc  jal         func_286F70
    ctx->pc = 0x2A00E8u;
    SET_GPR_U32(ctx, 31, 0x2A00F0u);
    ctx->pc = 0x2A00ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A00E8u;
            // 0x2a00ec: 0x2502821  addu        $a1, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286F70u;
    if (runtime->hasFunction(0x286F70u)) {
        auto targetFn = runtime->lookupFunction(0x286F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A00F0u; }
        if (ctx->pc != 0x2A00F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286F70_0x286f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A00F0u; }
        if (ctx->pc != 0x2A00F0u) { return; }
    }
    ctx->pc = 0x2A00F0u;
label_2a00f0:
    // 0x2a00f0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2a00f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2a00f4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2a00f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x2a00f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a00f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a00fc:
    // 0x2a00fc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a00fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a0100: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2a0100u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a0104: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2a0104u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a0108: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a0108u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a010c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a010cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a0110: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a0110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a0114: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0114u;
            // 0x2a0118: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A011Cu;
    // 0x2a011c: 0x0  nop
    ctx->pc = 0x2a011cu;
    // NOP
label_2a0120:
    // 0x2a0120: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a0120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a0124: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2a0124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2a0128: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a0128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2a012c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2a012cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0130: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a0130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2a0134: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2a0134u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0138: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2a0138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2a013c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a013cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a0140: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A0140u;
    {
        const bool branch_taken_0x2a0140 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0140u;
            // 0x2a0144: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0140) {
            ctx->pc = 0x2A0164u;
            goto label_2a0164;
        }
    }
    ctx->pc = 0x2A0148u;
    // 0x2a0148: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x2a0148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a014c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A014Cu;
    {
        const bool branch_taken_0x2a014c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A014Cu;
            // 0x2a0150: 0x24020101  addiu       $v0, $zero, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a014c) {
            ctx->pc = 0x2A0164u;
            goto label_2a0164;
        }
    }
    ctx->pc = 0x2A0154u;
    // 0x2a0154: 0x14a20038  bne         $a1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2A0154u;
    {
        const bool branch_taken_0x2a0154 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A0158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0154u;
            // 0x2a0158: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0154) {
            ctx->pc = 0x2A0238u;
            goto label_2a0238;
        }
    }
    ctx->pc = 0x2A015Cu;
    // 0x2a015c: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A015Cu;
    {
        const bool branch_taken_0x2a015c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A015Cu;
            // 0x2a0160: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a015c) {
            ctx->pc = 0x2A016Cu;
            goto label_2a016c;
        }
    }
    ctx->pc = 0x2A0164u;
label_2a0164:
    // 0x2a0164: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x2A0164u;
    {
        const bool branch_taken_0x2a0164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0164u;
            // 0x2a0168: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0164) {
            ctx->pc = 0x2A0294u;
            goto label_2a0294;
        }
    }
    ctx->pc = 0x2A016Cu;
label_2a016c:
    // 0x2a016c: 0x16620003  bne         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A016Cu;
    {
        const bool branch_taken_0x2a016c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A0170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A016Cu;
            // 0x2a0170: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a016c) {
            ctx->pc = 0x2A017Cu;
            goto label_2a017c;
        }
    }
    ctx->pc = 0x2A0174u;
    // 0x2a0174: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2A0174u;
    {
        const bool branch_taken_0x2a0174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0174u;
            // 0x2a0178: 0x24910048  addiu       $s1, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0174) {
            ctx->pc = 0x2A01B4u;
            goto label_2a01b4;
        }
    }
    ctx->pc = 0x2A017Cu;
label_2a017c:
    // 0x2a017c: 0x16620006  bne         $s3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A017Cu;
    {
        const bool branch_taken_0x2a017c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A0180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A017Cu;
            // 0x2a0180: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a017c) {
            ctx->pc = 0x2A0198u;
            goto label_2a0198;
        }
    }
    ctx->pc = 0x2A0184u;
    // 0x2a0184: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a0184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a0188: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2a0188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2a018c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A018Cu;
    {
        const bool branch_taken_0x2a018c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A018Cu;
            // 0x2a0190: 0x24910034  addiu       $s1, $a0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a018c) {
            ctx->pc = 0x2A01B4u;
            goto label_2a01b4;
        }
    }
    ctx->pc = 0x2A0194u;
    // 0x2a0194: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a0194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a0198:
    // 0x2a0198: 0x16620003  bne         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A0198u;
    {
        const bool branch_taken_0x2a0198 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A019Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0198u;
            // 0x2a019c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0198) {
            ctx->pc = 0x2A01A8u;
            goto label_2a01a8;
        }
    }
    ctx->pc = 0x2A01A0u;
    // 0x2a01a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A01A0u;
    {
        const bool branch_taken_0x2a01a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A01A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A01A0u;
            // 0x2a01a4: 0x2491000c  addiu       $s1, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a01a0) {
            ctx->pc = 0x2A01B4u;
            goto label_2a01b4;
        }
    }
    ctx->pc = 0x2A01A8u;
label_2a01a8:
    // 0x2a01a8: 0x1662003b  bne         $s3, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2A01A8u;
    {
        const bool branch_taken_0x2a01a8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A01ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A01A8u;
            // 0x2a01ac: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a01a8) {
            ctx->pc = 0x2A0298u;
            goto label_2a0298;
        }
    }
    ctx->pc = 0x2A01B0u;
    // 0x2a01b0: 0x24910020  addiu       $s1, $a0, 0x20
    ctx->pc = 0x2a01b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_2a01b4:
    // 0x2a01b4: 0x12200037  beqz        $s1, . + 4 + (0x37 << 2)
    ctx->pc = 0x2A01B4u;
    {
        const bool branch_taken_0x2a01b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A01B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A01B4u;
            // 0x2a01b8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a01b4) {
            ctx->pc = 0x2A0294u;
            goto label_2a0294;
        }
    }
    ctx->pc = 0x2A01BCu;
    // 0x2a01bc: 0xc0a1a02  jal         func_286808
    ctx->pc = 0x2A01BCu;
    SET_GPR_U32(ctx, 31, 0x2A01C4u);
    ctx->pc = 0x2A01C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A01BCu;
            // 0x2a01c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286808u;
    if (runtime->hasFunction(0x286808u)) {
        auto targetFn = runtime->lookupFunction(0x286808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A01C4u; }
        if (ctx->pc != 0x2A01C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286808_0x286808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A01C4u; }
        if (ctx->pc != 0x2A01C4u) { return; }
    }
    ctx->pc = 0x2A01C4u;
label_2a01c4:
    // 0x2a01c4: 0x24440007  addiu       $a0, $v0, 0x7
    ctx->pc = 0x2a01c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x2a01c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a01c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a01cc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2a01ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a01d0: 0x2442000e  addiu       $v0, $v0, 0xE
    ctx->pc = 0x2a01d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
    // 0x2a01d4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2a01d4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2a01d8: 0x2a0c3  sra         $s4, $v0, 3
    ctx->pc = 0x2a01d8u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 3));
    // 0x2a01dc: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2A01DCu;
    SET_GPR_U32(ctx, 31, 0x2A01E4u);
    ctx->pc = 0x2A01E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A01DCu;
            // 0x2a01e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A01E4u; }
        if (ctx->pc != 0x2A01E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A01E4u; }
        if (ctx->pc != 0x2A01E4u) { return; }
    }
    ctx->pc = 0x2A01E4u;
label_2a01e4:
    // 0x2a01e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a01e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a01e8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A01E8u;
    {
        const bool branch_taken_0x2a01e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A01ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A01E8u;
            // 0x2a01ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a01e8) {
            ctx->pc = 0x2A01F8u;
            goto label_2a01f8;
        }
    }
    ctx->pc = 0x2A01F0u;
    // 0x2a01f0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2A01F0u;
    {
        const bool branch_taken_0x2a01f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A01F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A01F0u;
            // 0x2a01f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a01f0) {
            ctx->pc = 0x2A0294u;
            goto label_2a0294;
        }
    }
    ctx->pc = 0x2A01F8u;
label_2a01f8:
    // 0x2a01f8: 0xc0a1bdc  jal         func_286F70
    ctx->pc = 0x2A01F8u;
    SET_GPR_U32(ctx, 31, 0x2A0200u);
    ctx->pc = 0x2A01FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A01F8u;
            // 0x2a01fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286F70u;
    if (runtime->hasFunction(0x286F70u)) {
        auto targetFn = runtime->lookupFunction(0x286F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0200u; }
        if (ctx->pc != 0x2A0200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286F70_0x286f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0200u; }
        if (ctx->pc != 0x2A0200u) { return; }
    }
    ctx->pc = 0x2A0200u;
label_2a0200:
    // 0x2a0200: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2a0200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0204: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2a0204u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0208: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2a0208u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a020c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a020cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0210: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a0210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a0214: 0xc0a8816  jal         func_2A2058
    ctx->pc = 0x2A0214u;
    SET_GPR_U32(ctx, 31, 0x2A021Cu);
    ctx->pc = 0x2A0218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0214u;
            // 0x2a0218: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2058u;
    if (runtime->hasFunction(0x2A2058u)) {
        auto targetFn = runtime->lookupFunction(0x2A2058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A021Cu; }
        if (ctx->pc != 0x2A021Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2058_0x2a2058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A021Cu; }
        if (ctx->pc != 0x2A021Cu) { return; }
    }
    ctx->pc = 0x2A021Cu;
label_2a021c:
    // 0x2a021c: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x2a021cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2a0220: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a0220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a0224: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x2a0224u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x2a0228: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2a0228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2a022c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a022cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0230: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2A0230u;
    {
        const bool branch_taken_0x2a0230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0230u;
            // 0x2a0234: 0xae430014  sw          $v1, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0230) {
            ctx->pc = 0x2A0294u;
            goto label_2a0294;
        }
    }
    ctx->pc = 0x2A0238u;
label_2a0238:
    // 0x2a0238: 0x54a2000a  bnel        $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A0238u;
    {
        const bool branch_taken_0x2a0238 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a0238) {
            ctx->pc = 0x2A023Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0238u;
            // 0x2a023c: 0x24020103  addiu       $v0, $zero, 0x103 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A0264u;
            goto label_2a0264;
        }
    }
    ctx->pc = 0x2A0240u;
    // 0x2a0240: 0x8c840064  lw          $a0, 0x64($a0)
    ctx->pc = 0x2a0240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x2a0244: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A0244u;
    {
        const bool branch_taken_0x2a0244 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0244) {
            ctx->pc = 0x2A0248u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0244u;
            // 0x2a0248: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A025Cu;
            goto label_2a025c;
        }
    }
    ctx->pc = 0x2A024Cu;
    // 0x2a024c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2a024cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a0250: 0x5480000e  bnel        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2A0250u;
    {
        const bool branch_taken_0x2a0250 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0250) {
            ctx->pc = 0x2A0254u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0250u;
            // 0x2a0254: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A028Cu;
            goto label_2a028c;
        }
    }
    ctx->pc = 0x2A0258u;
    // 0x2a0258: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2a0258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2a025c:
    // 0x2a025c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2A025Cu;
    {
        const bool branch_taken_0x2a025c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A025Cu;
            // 0x2a0260: 0x2442c6c8  addiu       $v0, $v0, -0x3938 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a025c) {
            ctx->pc = 0x2A028Cu;
            goto label_2a028c;
        }
    }
    ctx->pc = 0x2A0264u;
label_2a0264:
    // 0x2a0264: 0x14a2000b  bne         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A0264u;
    {
        const bool branch_taken_0x2a0264 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A0268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0264u;
            // 0x2a0268: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0264) {
            ctx->pc = 0x2A0294u;
            goto label_2a0294;
        }
    }
    ctx->pc = 0x2A026Cu;
    // 0x2a026c: 0xc0a1a02  jal         func_286808
    ctx->pc = 0x2A026Cu;
    SET_GPR_U32(ctx, 31, 0x2A0274u);
    ctx->pc = 0x2A0270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A026Cu;
            // 0x2a0270: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286808u;
    if (runtime->hasFunction(0x286808u)) {
        auto targetFn = runtime->lookupFunction(0x286808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0274u; }
        if (ctx->pc != 0x2A0274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286808_0x286808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0274u; }
        if (ctx->pc != 0x2A0274u) { return; }
    }
    ctx->pc = 0x2A0274u;
label_2a0274:
    // 0x2a0274: 0x24440007  addiu       $a0, $v0, 0x7
    ctx->pc = 0x2a0274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x2a0278: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a0278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a027c: 0x2442000e  addiu       $v0, $v0, 0xE
    ctx->pc = 0x2a027cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
    // 0x2a0280: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2a0280u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a0284: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2a0284u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2a0288: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x2a0288u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_2a028c:
    // 0x2a028c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2a028cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2a0290: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a0290u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0294:
    // 0x2a0294: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a0294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2a0298:
    // 0x2a0298: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2a0298u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a029c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2a029cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a02a0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a02a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a02a4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a02a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a02a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a02a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a02ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2A02ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A02B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A02ACu;
            // 0x2a02b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A02B4u;
    // 0x2a02b4: 0x0  nop
    ctx->pc = 0x2a02b4u;
    // NOP
label_2a02b8:
    // 0x2a02b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A02B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A02BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A02B8u;
            // 0x2a02bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A02C0u;
    ctx->pc = 0x2a02c0u;
}
