#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D3008
// Address: 0x2d3008 - 0x2d3768
void sub_002D3008_0x2d3008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3008_0x2d3008");
#endif

    switch (ctx->pc) {
        case 0x2d3074u: goto label_2d3074;
        case 0x2d308cu: goto label_2d308c;
        case 0x2d309cu: goto label_2d309c;
        case 0x2d30acu: goto label_2d30ac;
        case 0x2d30bcu: goto label_2d30bc;
        case 0x2d3118u: goto label_2d3118;
        case 0x2d31b8u: goto label_2d31b8;
        case 0x2d3244u: goto label_2d3244;
        case 0x2d3278u: goto label_2d3278;
        case 0x2d3288u: goto label_2d3288;
        case 0x2d329cu: goto label_2d329c;
        case 0x2d32c0u: goto label_2d32c0;
        case 0x2d32ecu: goto label_2d32ec;
        case 0x2d3300u: goto label_2d3300;
        case 0x2d3310u: goto label_2d3310;
        case 0x2d3324u: goto label_2d3324;
        case 0x2d3360u: goto label_2d3360;
        case 0x2d33a4u: goto label_2d33a4;
        case 0x2d33b0u: goto label_2d33b0;
        case 0x2d33bcu: goto label_2d33bc;
        case 0x2d33c8u: goto label_2d33c8;
        case 0x2d33e0u: goto label_2d33e0;
        case 0x2d33e8u: goto label_2d33e8;
        case 0x2d3414u: goto label_2d3414;
        case 0x2d3430u: goto label_2d3430;
        case 0x2d3438u: goto label_2d3438;
        case 0x2d3458u: goto label_2d3458;
        case 0x2d347cu: goto label_2d347c;
        case 0x2d34a4u: goto label_2d34a4;
        case 0x2d34c8u: goto label_2d34c8;
        case 0x2d34e8u: goto label_2d34e8;
        case 0x2d350cu: goto label_2d350c;
        case 0x2d3514u: goto label_2d3514;
        case 0x2d351cu: goto label_2d351c;
        case 0x2d3524u: goto label_2d3524;
        case 0x2d3558u: goto label_2d3558;
        case 0x2d3588u: goto label_2d3588;
        case 0x2d3594u: goto label_2d3594;
        case 0x2d35a0u: goto label_2d35a0;
        case 0x2d35a8u: goto label_2d35a8;
        case 0x2d35e4u: goto label_2d35e4;
        case 0x2d35f0u: goto label_2d35f0;
        case 0x2d361cu: goto label_2d361c;
        case 0x2d36c8u: goto label_2d36c8;
        case 0x2d36d8u: goto label_2d36d8;
        case 0x2d36e8u: goto label_2d36e8;
        case 0x2d370cu: goto label_2d370c;
        case 0x2d3724u: goto label_2d3724;
        case 0x2d3738u: goto label_2d3738;
        case 0x2d3740u: goto label_2d3740;
        default: break;
    }

    ctx->pc = 0x2d3008u;

    // 0x2d3008: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d3008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d300c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2d300cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3010: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2d3010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2d3014: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2d3014u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3018: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2d3018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2d301c: 0x16883e  dsrl32      $s1, $s6, 0
    ctx->pc = 0x2d301cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 22) >> (32 + 0));
    // 0x2d3020: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2d3020u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2d3024: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x2d3024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2d3028: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2d3028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d302c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2d302cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2d3030: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d3030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3034: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d3034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d3038: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2d3038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d303c: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x2d303cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x2d3040: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x2d3040u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x2d3044: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2d3044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2d3048: 0x2d09824  and         $s3, $s6, $s0
    ctx->pc = 0x2d3048u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 22) & GPR_U64(ctx, 16));
    // 0x2d304c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2d304cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2d3050: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2d3050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2d3054: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2d3054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x2d3058: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x2d3058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x2d305c: 0x3f03e  dsrl32      $fp, $v1, 0
    ctx->pc = 0x2d305cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2d3060: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2d3060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2d3064: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2d3064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2d3068: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x2d3068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x2d306c: 0xc04857a  jal         func_1215E8
    ctx->pc = 0x2D306Cu;
    SET_GPR_U32(ctx, 31, 0x2D3074u);
    ctx->pc = 0x2D3070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D306Cu;
            // 0x2d3070: 0xafa80004  sw          $t0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1215E8u;
    if (runtime->hasFunction(0x1215E8u)) {
        auto targetFn = runtime->lookupFunction(0x1215E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3074u; }
        if (ctx->pc != 0x2D3074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001215E8_0x1215e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3074u; }
        if (ctx->pc != 0x2D3074u) { return; }
    }
    ctx->pc = 0x2D3074u;
label_2d3074:
    // 0x2d3074: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2d3074u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3078: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d3078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d307c: 0x2f08024  and         $s0, $s7, $s0
    ctx->pc = 0x2d307cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 23) & GPR_U64(ctx, 16));
    // 0x2d3080: 0x17903e  dsrl32      $s2, $s7, 0
    ctx->pc = 0x2d3080u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 23) >> (32 + 0));
    // 0x2d3084: 0xc048082  jal         func_120208
    ctx->pc = 0x2D3084u;
    SET_GPR_U32(ctx, 31, 0x2D308Cu);
    ctx->pc = 0x2D3088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3084u;
            // 0x2d3088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (runtime->hasFunction(0x120208u)) {
        auto targetFn = runtime->lookupFunction(0x120208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D308Cu; }
        if (ctx->pc != 0x2D308Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120208_0x120208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D308Cu; }
        if (ctx->pc != 0x2D308Cu) { return; }
    }
    ctx->pc = 0x2D308Cu;
label_2d308c:
    // 0x2d308c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d308cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3090: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d3090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3094: 0xc048082  jal         func_120208
    ctx->pc = 0x2D3094u;
    SET_GPR_U32(ctx, 31, 0x2D309Cu);
    ctx->pc = 0x2D3098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3094u;
            // 0x2d3098: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (runtime->hasFunction(0x120208u)) {
        auto targetFn = runtime->lookupFunction(0x120208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D309Cu; }
        if (ctx->pc != 0x2D309Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120208_0x120208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D309Cu; }
        if (ctx->pc != 0x2D309Cu) { return; }
    }
    ctx->pc = 0x2D309Cu;
label_2d309c:
    // 0x2d309c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d309cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d30a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d30a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d30a4: 0xc048082  jal         func_120208
    ctx->pc = 0x2D30A4u;
    SET_GPR_U32(ctx, 31, 0x2D30ACu);
    ctx->pc = 0x2D30A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D30A4u;
            // 0x2d30a8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (runtime->hasFunction(0x120208u)) {
        auto targetFn = runtime->lookupFunction(0x120208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D30ACu; }
        if (ctx->pc != 0x2D30ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120208_0x120208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D30ACu; }
        if (ctx->pc != 0x2D30ACu) { return; }
    }
    ctx->pc = 0x2D30ACu;
label_2d30ac:
    // 0x2d30ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d30acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d30b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d30b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d30b4: 0xc048082  jal         func_120208
    ctx->pc = 0x2D30B4u;
    SET_GPR_U32(ctx, 31, 0x2D30BCu);
    ctx->pc = 0x2D30B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D30B4u;
            // 0x2d30b8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (runtime->hasFunction(0x120208u)) {
        auto targetFn = runtime->lookupFunction(0x120208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D30BCu; }
        if (ctx->pc != 0x2D30BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120208_0x120208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D30BCu; }
        if (ctx->pc != 0x2D30BCu) { return; }
    }
    ctx->pc = 0x2D30BCu;
label_2d30bc:
    // 0x2d30bc: 0x202202d  daddu       $a0, $s0, $v0
    ctx->pc = 0x2d30bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2d30c0: 0x90802b  sltu        $s0, $a0, $s0
    ctx->pc = 0x2d30c0u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2d30c4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D30C4u;
    {
        const bool branch_taken_0x2d30c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D30C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D30C4u;
            // 0x2d30c8: 0x4183e  dsrl32      $v1, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d30c4) {
            ctx->pc = 0x2D30D8u;
            goto label_2d30d8;
        }
    }
    ctx->pc = 0x2D30CCu;
    // 0x2d30cc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2d30ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2d30d0: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x2d30d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x2d30d4: 0x2a2a82d  daddu       $s5, $s5, $v0
    ctx->pc = 0x2d30d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 2));
label_2d30d8:
    // 0x2d30d8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2d30d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2d30dc: 0x284a02d  daddu       $s4, $s4, $a0
    ctx->pc = 0x2d30dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 4));
    // 0x2d30e0: 0x2a3a82d  daddu       $s5, $s5, $v1
    ctx->pc = 0x2d30e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2d30e4: 0x284102b  sltu        $v0, $s4, $a0
    ctx->pc = 0x2d30e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2d30e8: 0x2a2a82d  daddu       $s5, $s5, $v0
    ctx->pc = 0x2d30e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2d30ec: 0x3d5202b  sltu        $a0, $fp, $s5
    ctx->pc = 0x2d30ecu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x2d30f0: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D30F0u;
    {
        const bool branch_taken_0x2d30f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D30F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D30F0u;
            // 0x2d30f4: 0x296102b  sltu        $v0, $s4, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d30f0) {
            ctx->pc = 0x2D3118u;
            goto label_2d3118;
        }
    }
    ctx->pc = 0x2D30F8u;
    // 0x2d30f8: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x2d30f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d30fc: 0x16be0016  bne         $s5, $fp, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D30FCu;
    {
        const bool branch_taken_0x2d30fc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 30));
        ctx->pc = 0x2D3100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D30FCu;
            // 0x2d3100: 0x54182b  sltu        $v1, $v0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d30fc) {
            ctx->pc = 0x2D3158u;
            goto label_2d3158;
        }
    }
    ctx->pc = 0x2D3104u;
    // 0x2d3104: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2d3104u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3108: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2D3108u;
    {
        const bool branch_taken_0x2d3108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D310Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3108u;
            // 0x2d310c: 0xdfa30008  ld          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3108) {
            ctx->pc = 0x2D3170u;
            goto label_2d3170;
        }
    }
    ctx->pc = 0x2D3110u;
    // 0x2d3110: 0x296102b  sltu        $v0, $s4, $s6
    ctx->pc = 0x2d3110u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x2d3114: 0x0  nop
    ctx->pc = 0x2d3114u;
    // NOP
label_2d3118:
    // 0x2d3118: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3118u;
    {
        const bool branch_taken_0x2d3118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D311Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3118u;
            // 0x2d311c: 0x66f7ffff  daddiu      $s7, $s7, -0x1 (Delay Slot)
        SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 23) + (int64_t)(int32_t)4294967295);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3118) {
            ctx->pc = 0x2D3128u;
            goto label_2d3128;
        }
    }
    ctx->pc = 0x2D3120u;
    // 0x2d3120: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D3120u;
    {
        const bool branch_taken_0x2d3120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3120u;
            // 0x2d3124: 0x296a02f  dsubu       $s4, $s4, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) - GPR_U64(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3120) {
            ctx->pc = 0x2D313Cu;
            goto label_2d313c;
        }
    }
    ctx->pc = 0x2D3128u;
label_2d3128:
    // 0x2d3128: 0x2d4102f  dsubu       $v0, $s6, $s4
    ctx->pc = 0x2d3128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) - GPR_U64(ctx, 20));
    // 0x2d312c: 0x66b5ffff  daddiu      $s5, $s5, -0x1
    ctx->pc = 0x2d312cu;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 21) + (int64_t)(int32_t)4294967295);
    // 0x2d3130: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2d3130u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2d3134: 0x3d5202b  sltu        $a0, $fp, $s5
    ctx->pc = 0x2d3134u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x2d3138: 0x64540001  daddiu      $s4, $v0, 0x1
    ctx->pc = 0x2d3138u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_2d313c:
    // 0x2d313c: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2D313Cu;
    {
        const bool branch_taken_0x2d313c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D313Cu;
            // 0x2d3140: 0x296102b  sltu        $v0, $s4, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d313c) {
            ctx->pc = 0x2D3118u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d3118;
        }
    }
    ctx->pc = 0x2D3144u;
    // 0x2d3144: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x2d3144u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d3148: 0x16be0003  bne         $s5, $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3148u;
    {
        const bool branch_taken_0x2d3148 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 30));
        ctx->pc = 0x2D314Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3148u;
            // 0x2d314c: 0x54182b  sltu        $v1, $v0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3148) {
            ctx->pc = 0x2D3158u;
            goto label_2d3158;
        }
    }
    ctx->pc = 0x2D3150u;
    // 0x2d3150: 0x5460fff1  bnel        $v1, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x2D3150u;
    {
        const bool branch_taken_0x2d3150 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3150) {
            ctx->pc = 0x2D3154u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3150u;
            // 0x2d3154: 0x296102b  sltu        $v0, $s4, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D3118u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d3118;
        }
    }
    ctx->pc = 0x2D3158u;
label_2d3158:
    // 0x2d3158: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x2d3158u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d315c: 0x284102f  dsubu       $v0, $s4, $a0
    ctx->pc = 0x2d315cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) - GPR_U64(ctx, 4));
    // 0x2d3160: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2d3160u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2d3164: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3164u;
    {
        const bool branch_taken_0x2d3164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3164u;
            // 0x2d3168: 0x64420001  daddiu      $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3164) {
            ctx->pc = 0x2D3174u;
            goto label_2d3174;
        }
    }
    ctx->pc = 0x2D316Cu;
    // 0x2d316c: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x2d316cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2d3170:
    // 0x2d3170: 0x74102f  dsubu       $v0, $v1, $s4
    ctx->pc = 0x2d3170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 20));
label_2d3174:
    // 0x2d3174: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2d3174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d3178: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d3178u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d317c: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x2d317cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x2d3180: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2d3180u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3184: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d3184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3188: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2d3188u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d318c: 0xfc570000  sd          $s7, 0x0($v0)
    ctx->pc = 0x2d318cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 23));
    // 0x2d3190: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2d3190u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d3194: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2d3194u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d3198: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2d3198u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d319c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2d319cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d31a0: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2d31a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d31a4: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2d31a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d31a8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2d31a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d31ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2D31ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D31B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D31ACu;
            // 0x2d31b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D31B4u;
    // 0x2d31b4: 0x0  nop
    ctx->pc = 0x2d31b4u;
    // NOP
label_2d31b8:
    // 0x2d31b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d31b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d31bc: 0x24020107  addiu       $v0, $zero, 0x107
    ctx->pc = 0x2d31bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 263));
    // 0x2d31c0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d31c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2d31c4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2d31c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d31c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d31c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d31cc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2d31ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d31d0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2d31d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2d31d4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2d31d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d31d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d31d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d31dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d31dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d31e0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d31e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d31e4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d31e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2d31e8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2d31e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2d31ec: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2d31ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x2d31f0: 0x1280004f  beqz        $s4, . + 4 + (0x4F << 2)
    ctx->pc = 0x2D31F0u;
    {
        const bool branch_taken_0x2d31f0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D31F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D31F0u;
            // 0x2d31f4: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d31f0) {
            ctx->pc = 0x2D3330u;
            goto label_2d3330;
        }
    }
    ctx->pc = 0x2D31F8u;
    // 0x2d31f8: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x2d31f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d31fc: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x2d31fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2d3200: 0x2901024  and         $v0, $s4, $s0
    ctx->pc = 0x2d3200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 16));
    // 0x2d3204: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D3204u;
    {
        const bool branch_taken_0x2d3204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3204u;
            // 0x2d3208: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3204) {
            ctx->pc = 0x2D3238u;
            goto label_2d3238;
        }
    }
    ctx->pc = 0x2D320Cu;
    // 0x2d320c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d320cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3210: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d3210u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3214: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d3214u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3218: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d3218u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d321c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d321cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d3220: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2d3220u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d3224: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2d3224u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d3228: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2d3228u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d322c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2d322cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d3230: 0x80b4cd8  j           func_2D3360
    ctx->pc = 0x2D3230u;
    ctx->pc = 0x2D3234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3230u;
            // 0x2d3234: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D3360u;
    goto label_2d3360;
    ctx->pc = 0x2D3238u;
label_2d3238:
    // 0x2d3238: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x2d3238u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2d323c: 0xc04872c  jal         func_121CB0
    ctx->pc = 0x2D323Cu;
    SET_GPR_U32(ctx, 31, 0x2D3244u);
    ctx->pc = 0x2D3240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D323Cu;
            // 0x2d3240: 0x42478  dsll        $a0, $a0, 17 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
        ctx->in_delay_slot = false;
    ctx->pc = 0x121CB0u;
    if (runtime->hasFunction(0x121CB0u)) {
        auto targetFn = runtime->lookupFunction(0x121CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3244u; }
        if (ctx->pc != 0x2D3244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00121CB0_0x121cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3244u; }
        if (ctx->pc != 0x2D3244u) { return; }
    }
    ctx->pc = 0x2D3244u;
label_2d3244:
    // 0x2d3244: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x2d3244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x2d3248: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2d3248u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d324c: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x2d324cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2d3250: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2d3250u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x2d3254: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2d3254u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2d3258: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2d3258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d325c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2d325cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d3260: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d3260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d3264: 0xdc62fff8  ld          $v0, -0x8($v1)
    ctx->pc = 0x2d3264u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x2d3268: 0x502024  and         $a0, $v0, $s0
    ctx->pc = 0x2d3268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x2d326c: 0x469824  and         $s3, $v0, $a2
    ctx->pc = 0x2d326cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2d3270: 0xc04872c  jal         func_121CB0
    ctx->pc = 0x2D3270u;
    SET_GPR_U32(ctx, 31, 0x2D3278u);
    ctx->pc = 0x2D3274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3270u;
            // 0x2d3274: 0x4203e  dsrl32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121CB0u;
    if (runtime->hasFunction(0x121CB0u)) {
        auto targetFn = runtime->lookupFunction(0x121CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3278u; }
        if (ctx->pc != 0x2D3278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00121CB0_0x121cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3278u; }
        if (ctx->pc != 0x2D3278u) { return; }
    }
    ctx->pc = 0x2D3278u;
label_2d3278:
    // 0x2d3278: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d3278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d327c: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x2d327cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x2d3280: 0xc048082  jal         func_120208
    ctx->pc = 0x2D3280u;
    SET_GPR_U32(ctx, 31, 0x2D3288u);
    ctx->pc = 0x2D3284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3280u;
            // 0x2d3284: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (runtime->hasFunction(0x120208u)) {
        auto targetFn = runtime->lookupFunction(0x120208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3288u; }
        if (ctx->pc != 0x2D3288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120208_0x120208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3288u; }
        if (ctx->pc != 0x2D3288u) { return; }
    }
    ctx->pc = 0x2D3288u;
label_2d3288:
    // 0x2d3288: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2d3288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d328c: 0x53102d  daddu       $v0, $v0, $s3
    ctx->pc = 0x2d328cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 19));
    // 0x2d3290: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x2d3290u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x2d3294: 0xc04872c  jal         func_121CB0
    ctx->pc = 0x2D3294u;
    SET_GPR_U32(ctx, 31, 0x2D329Cu);
    ctx->pc = 0x2D3298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3294u;
            // 0x2d3298: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121CB0u;
    if (runtime->hasFunction(0x121CB0u)) {
        auto targetFn = runtime->lookupFunction(0x121CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D329Cu; }
        if (ctx->pc != 0x2D329Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00121CB0_0x121cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D329Cu; }
        if (ctx->pc != 0x2D329Cu) { return; }
    }
    ctx->pc = 0x2D329Cu;
label_2d329c:
    // 0x2d329c: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x2d329cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x2d32a0: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x2d32a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2d32a4: 0x2451fffe  addiu       $s1, $v0, -0x2
    ctx->pc = 0x2d32a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x2d32a8: 0x6200021  bltz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2D32A8u;
    {
        const bool branch_taken_0x2d32a8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2D32ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D32A8u;
            // 0x2d32ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d32a8) {
            ctx->pc = 0x2D3330u;
            goto label_2d3330;
        }
    }
    ctx->pc = 0x2D32B0u;
    // 0x2d32b0: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x2d32b0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d32b4: 0x1ef03c  dsll32      $fp, $fp, 0
    ctx->pc = 0x2d32b4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) << (32 + 0));
    // 0x2d32b8: 0x3c17ffff  lui         $s7, 0xFFFF
    ctx->pc = 0x2d32b8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65535 << 16));
    // 0x2d32bc: 0x17b83e  dsrl32      $s7, $s7, 0
    ctx->pc = 0x2d32bcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) >> (32 + 0));
label_2d32c0:
    // 0x2d32c0: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x2d32c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x2d32c4: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x2d32c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2d32c8: 0xde440000  ld          $a0, 0x0($s2)
    ctx->pc = 0x2d32c8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d32cc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d32ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d32d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d32d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d32d4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2d32d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2d32d8: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x2d32d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d32dc: 0x5e8024  and         $s0, $v0, $fp
    ctx->pc = 0x2d32dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x2d32e0: 0x579824  and         $s3, $v0, $s7
    ctx->pc = 0x2d32e0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x2d32e4: 0xc048082  jal         func_120208
    ctx->pc = 0x2D32E4u;
    SET_GPR_U32(ctx, 31, 0x2D32ECu);
    ctx->pc = 0x2D32E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D32E4u;
            // 0x2d32e8: 0x10803e  dsrl32      $s0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (runtime->hasFunction(0x120208u)) {
        auto targetFn = runtime->lookupFunction(0x120208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D32ECu; }
        if (ctx->pc != 0x2D32ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120208_0x120208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D32ECu; }
        if (ctx->pc != 0x2D32ECu) { return; }
    }
    ctx->pc = 0x2D32ECu;
label_2d32ec:
    // 0x2d32ec: 0x50102d  daddu       $v0, $v0, $s0
    ctx->pc = 0x2d32ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2d32f0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2d32f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d32f4: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x2d32f4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x2d32f8: 0xc04872c  jal         func_121CB0
    ctx->pc = 0x2D32F8u;
    SET_GPR_U32(ctx, 31, 0x2D3300u);
    ctx->pc = 0x2D32FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D32F8u;
            // 0x2d32fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121CB0u;
    if (runtime->hasFunction(0x121CB0u)) {
        auto targetFn = runtime->lookupFunction(0x121CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3300u; }
        if (ctx->pc != 0x2D3300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00121CB0_0x121cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3300u; }
        if (ctx->pc != 0x2D3300u) { return; }
    }
    ctx->pc = 0x2D3300u;
label_2d3300:
    // 0x2d3300: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d3300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3304: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x2d3304u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x2d3308: 0xc048082  jal         func_120208
    ctx->pc = 0x2D3308u;
    SET_GPR_U32(ctx, 31, 0x2D3310u);
    ctx->pc = 0x2D330Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3308u;
            // 0x2d330c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (runtime->hasFunction(0x120208u)) {
        auto targetFn = runtime->lookupFunction(0x120208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3310u; }
        if (ctx->pc != 0x2D3310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120208_0x120208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3310u; }
        if (ctx->pc != 0x2D3310u) { return; }
    }
    ctx->pc = 0x2D3310u;
label_2d3310:
    // 0x2d3310: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2d3310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3314: 0x53102d  daddu       $v0, $v0, $s3
    ctx->pc = 0x2d3314u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 19));
    // 0x2d3318: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x2d3318u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x2d331c: 0xc04872c  jal         func_121CB0
    ctx->pc = 0x2D331Cu;
    SET_GPR_U32(ctx, 31, 0x2D3324u);
    ctx->pc = 0x2D3320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D331Cu;
            // 0x2d3320: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121CB0u;
    if (runtime->hasFunction(0x121CB0u)) {
        auto targetFn = runtime->lookupFunction(0x121CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3324u; }
        if (ctx->pc != 0x2D3324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00121CB0_0x121cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3324u; }
        if (ctx->pc != 0x2D3324u) { return; }
    }
    ctx->pc = 0x2D3324u;
label_2d3324:
    // 0x2d3324: 0x621ffe6  bgez        $s1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2D3324u;
    {
        const bool branch_taken_0x2d3324 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2D3328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3324u;
            // 0x2d3328: 0xfe420000  sd          $v0, 0x0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3324) {
            ctx->pc = 0x2D32C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d32c0;
        }
    }
    ctx->pc = 0x2D332Cu;
    // 0x2d332c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d332cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d3330:
    // 0x2d3330: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d3330u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3334: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d3334u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d3338: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d3338u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d333c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d333cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d3340: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d3340u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d3344: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d3344u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d3348: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2d3348u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d334c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2d334cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d3350: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2d3350u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d3354: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2d3354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d3358: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D335Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3358u;
            // 0x2d335c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D3360u;
label_2d3360:
    // 0x2d3360: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2d3360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2d3364: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x2d3364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x2d3368: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2d3368u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d336c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d336cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3370: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2d3370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2d3374: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2d3374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2d3378: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d3378u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d337c: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2d337cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2d3380: 0x11902f  dsubu       $s2, $zero, $s1
    ctx->pc = 0x2d3380u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) - GPR_U64(ctx, 17));
    // 0x2d3384: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2d3384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2d3388: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x2d3388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x2d338c: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2d338cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2d3390: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2d3390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2d3394: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2d3394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2d3398: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x2d3398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x2d339c: 0xc0b4614  jal         func_2D1850
    ctx->pc = 0x2D339Cu;
    SET_GPR_U32(ctx, 31, 0x2D33A4u);
    ctx->pc = 0x2D33A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D339Cu;
            // 0x2d33a0: 0xc0f02d  daddu       $fp, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1850u;
    if (runtime->hasFunction(0x2D1850u)) {
        auto targetFn = runtime->lookupFunction(0x2D1850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D33A4u; }
        if (ctx->pc != 0x2D33A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1850_0x2d1850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D33A4u; }
        if (ctx->pc != 0x2D33A4u) { return; }
    }
    ctx->pc = 0x2D33A4u;
label_2d33a4:
    // 0x2d33a4: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x2d33a4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d33a8: 0xc0b4614  jal         func_2D1850
    ctx->pc = 0x2D33A8u;
    SET_GPR_U32(ctx, 31, 0x2D33B0u);
    ctx->pc = 0x2D33ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D33A8u;
            // 0x2d33ac: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1850u;
    if (runtime->hasFunction(0x2D1850u)) {
        auto targetFn = runtime->lookupFunction(0x2D1850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D33B0u; }
        if (ctx->pc != 0x2D33B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1850_0x2d1850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D33B0u; }
        if (ctx->pc != 0x2D33B0u) { return; }
    }
    ctx->pc = 0x2D33B0u;
label_2d33b0:
    // 0x2d33b0: 0x27b60020  addiu       $s6, $sp, 0x20
    ctx->pc = 0x2d33b0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d33b4: 0xc0b4614  jal         func_2D1850
    ctx->pc = 0x2D33B4u;
    SET_GPR_U32(ctx, 31, 0x2D33BCu);
    ctx->pc = 0x2D33B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D33B4u;
            // 0x2d33b8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1850u;
    if (runtime->hasFunction(0x2D1850u)) {
        auto targetFn = runtime->lookupFunction(0x2D1850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D33BCu; }
        if (ctx->pc != 0x2D33BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1850_0x2d1850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D33BCu; }
        if (ctx->pc != 0x2D33BCu) { return; }
    }
    ctx->pc = 0x2D33BCu;
label_2d33bc:
    // 0x2d33bc: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x2d33bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d33c0: 0xc0b4614  jal         func_2D1850
    ctx->pc = 0x2D33C0u;
    SET_GPR_U32(ctx, 31, 0x2D33C8u);
    ctx->pc = 0x2D33C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D33C0u;
            // 0x2d33c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1850u;
    if (runtime->hasFunction(0x2D1850u)) {
        auto targetFn = runtime->lookupFunction(0x2D1850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D33C8u; }
        if (ctx->pc != 0x2D33C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1850_0x2d1850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D33C8u; }
        if (ctx->pc != 0x2D33C8u) { return; }
    }
    ctx->pc = 0x2D33C8u;
label_2d33c8:
    // 0x2d33c8: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x2d33c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2d33cc: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2D33CCu;
    {
        const bool branch_taken_0x2d33cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D33D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D33CCu;
            // 0x2d33d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d33cc) {
            ctx->pc = 0x2D349Cu;
            goto label_2d349c;
        }
    }
    ctx->pc = 0x2D33D4u;
    // 0x2d33d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d33d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d33d8: 0xc04872c  jal         func_121CB0
    ctx->pc = 0x2D33D8u;
    SET_GPR_U32(ctx, 31, 0x2D33E0u);
    ctx->pc = 0x2D33DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D33D8u;
            // 0x2d33dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121CB0u;
    if (runtime->hasFunction(0x121CB0u)) {
        auto targetFn = runtime->lookupFunction(0x121CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D33E0u; }
        if (ctx->pc != 0x2D33E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00121CB0_0x121cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D33E0u; }
        if (ctx->pc != 0x2D33E0u) { return; }
    }
    ctx->pc = 0x2D33E0u;
label_2d33e0:
    // 0x2d33e0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2D33E0u;
    {
        const bool branch_taken_0x2d33e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D33E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D33E0u;
            // 0x2d33e4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d33e0) {
            ctx->pc = 0x2D3498u;
            goto label_2d3498;
        }
    }
    ctx->pc = 0x2D33E8u;
label_2d33e8:
    // 0x2d33e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d33e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d33ec: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x2d33ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2d33f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d33f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d33f4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2d33f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d33f8: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x2d33f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d33fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d33fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d3400: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2d3400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3404: 0xdc62fff8  ld          $v0, -0x8($v1)
    ctx->pc = 0x2d3404u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x2d3408: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x2d3408u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x2d340c: 0xc0b4a88  jal         func_2D2A20
    ctx->pc = 0x2D340Cu;
    SET_GPR_U32(ctx, 31, 0x2D3414u);
    ctx->pc = 0x2D3410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D340Cu;
            // 0x2d3410: 0xafb40034  sw          $s4, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2A20u;
    if (runtime->hasFunction(0x2D2A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D2A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3414u; }
        if (ctx->pc != 0x2D3414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2A20_0x2d2a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3414u; }
        if (ctx->pc != 0x2D3414u) { return; }
    }
    ctx->pc = 0x2D3414u;
label_2d3414:
    // 0x2d3414: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d3414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3418: 0x1600003a  bnez        $s0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2D3418u;
    {
        const bool branch_taken_0x2d3418 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3418) {
            ctx->pc = 0x2D3504u;
            goto label_2d3504;
        }
    }
    ctx->pc = 0x2D3420u;
    // 0x2d3420: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2d3420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2d3424: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D3424u;
    {
        const bool branch_taken_0x2d3424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3424u;
            // 0x2d3428: 0x2451fffe  addiu       $s1, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3424) {
            ctx->pc = 0x2D3444u;
            goto label_2d3444;
        }
    }
    ctx->pc = 0x2D342Cu;
    // 0x2d342c: 0x0  nop
    ctx->pc = 0x2d342cu;
    // NOP
label_2d3430:
    // 0x2d3430: 0xc0b4a88  jal         func_2D2A20
    ctx->pc = 0x2D3430u;
    SET_GPR_U32(ctx, 31, 0x2D3438u);
    ctx->pc = 0x2D2A20u;
    if (runtime->hasFunction(0x2D2A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D2A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3438u; }
        if (ctx->pc != 0x2D3438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2A20_0x2d2a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3438u; }
        if (ctx->pc != 0x2D3438u) { return; }
    }
    ctx->pc = 0x2D3438u;
label_2d3438:
    // 0x2d3438: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d3438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d343c: 0x16000031  bnez        $s0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2D343Cu;
    {
        const bool branch_taken_0x2d343c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d343c) {
            ctx->pc = 0x2D3504u;
            goto label_2d3504;
        }
    }
    ctx->pc = 0x2D3444u;
label_2d3444:
    // 0x2d3444: 0x620002b  bltz        $s1, . + 4 + (0x2B << 2)
    ctx->pc = 0x2D3444u;
    {
        const bool branch_taken_0x2d3444 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2D3448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3444u;
            // 0x2d3448: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3444) {
            ctx->pc = 0x2D34F4u;
            goto label_2d34f4;
        }
    }
    ctx->pc = 0x2D344Cu;
    // 0x2d344c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d344cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3450: 0xc0b495a  jal         func_2D2568
    ctx->pc = 0x2D3450u;
    SET_GPR_U32(ctx, 31, 0x2D3458u);
    ctx->pc = 0x2D3454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3450u;
            // 0x2d3454: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2568u;
    if (runtime->hasFunction(0x2D2568u)) {
        auto targetFn = runtime->lookupFunction(0x2D2568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3458u; }
        if (ctx->pc != 0x2D3458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2568_0x2d2568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3458u; }
        if (ctx->pc != 0x2D3458u) { return; }
    }
    ctx->pc = 0x2D3458u;
label_2d3458:
    // 0x2d3458: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x2d3458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2d345c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d345cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3460: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d3460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3464: 0x16000027  bnez        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2D3464u;
    {
        const bool branch_taken_0x2d3464 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3464u;
            // 0x2d3468: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3464) {
            ctx->pc = 0x2D3504u;
            goto label_2d3504;
        }
    }
    ctx->pc = 0x2D346Cu;
    // 0x2d346c: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x2d346cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2d3470: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2d3470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d3474: 0xc0b3fa4  jal         func_2CFE90
    ctx->pc = 0x2D3474u;
    SET_GPR_U32(ctx, 31, 0x2D347Cu);
    ctx->pc = 0x2D3478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3474u;
            // 0x2d3478: 0xdc440000  ld          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFE90u;
    if (runtime->hasFunction(0x2CFE90u)) {
        auto targetFn = runtime->lookupFunction(0x2CFE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D347Cu; }
        if (ctx->pc != 0x2D347Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CFE90_0x2cfe90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D347Cu; }
        if (ctx->pc != 0x2D347Cu) { return; }
    }
    ctx->pc = 0x2D347Cu;
label_2d347c:
    // 0x2d347c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d347cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3480: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d3480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3484: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d3484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3488: 0x1200ffe9  beqz        $s0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2D3488u;
    {
        const bool branch_taken_0x2d3488 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D348Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3488u;
            // 0x2d348c: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3488) {
            ctx->pc = 0x2D3430u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d3430;
        }
    }
    ctx->pc = 0x2D3490u;
    // 0x2d3490: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2D3490u;
    {
        const bool branch_taken_0x2d3490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3490) {
            ctx->pc = 0x2D34F4u;
            goto label_2d34f4;
        }
    }
    ctx->pc = 0x2D3498u;
label_2d3498:
    // 0x2d3498: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d3498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d349c:
    // 0x2d349c: 0xc0b466a  jal         func_2D19A8
    ctx->pc = 0x2D349Cu;
    SET_GPR_U32(ctx, 31, 0x2D34A4u);
    ctx->pc = 0x2D34A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D349Cu;
            // 0x2d34a0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D19A8u;
    if (runtime->hasFunction(0x2D19A8u)) {
        auto targetFn = runtime->lookupFunction(0x2D19A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D34A4u; }
        if (ctx->pc != 0x2D34A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D19A8_0x2d19a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D34A4u; }
        if (ctx->pc != 0x2D34A4u) { return; }
    }
    ctx->pc = 0x2D34A4u;
label_2d34a4:
    // 0x2d34a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d34a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d34a8: 0x16000016  bnez        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D34A8u;
    {
        const bool branch_taken_0x2d34a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D34ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D34A8u;
            // 0x2d34ac: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d34a8) {
            ctx->pc = 0x2D3504u;
            goto label_2d3504;
        }
    }
    ctx->pc = 0x2D34B0u;
    // 0x2d34b0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2d34b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d34b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d34b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d34b8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2d34b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d34bc: 0xfc510000  sd          $s1, 0x0($v0)
    ctx->pc = 0x2d34bcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 17));
    // 0x2d34c0: 0xc0b466a  jal         func_2D19A8
    ctx->pc = 0x2D34C0u;
    SET_GPR_U32(ctx, 31, 0x2D34C8u);
    ctx->pc = 0x2D34C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D34C0u;
            // 0x2d34c4: 0xafb40004  sw          $s4, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D19A8u;
    if (runtime->hasFunction(0x2D19A8u)) {
        auto targetFn = runtime->lookupFunction(0x2D19A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D34C8u; }
        if (ctx->pc != 0x2D34C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D19A8_0x2d19a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D34C8u; }
        if (ctx->pc != 0x2D34C8u) { return; }
    }
    ctx->pc = 0x2D34C8u;
label_2d34c8:
    // 0x2d34c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d34c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d34cc: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D34CCu;
    {
        const bool branch_taken_0x2d34cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D34D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D34CCu;
            // 0x2d34d0: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d34cc) {
            ctx->pc = 0x2D3504u;
            goto label_2d3504;
        }
    }
    ctx->pc = 0x2D34D4u;
    // 0x2d34d4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d34d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d34d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d34d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d34dc: 0xfc520000  sd          $s2, 0x0($v0)
    ctx->pc = 0x2d34dcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 18));
    // 0x2d34e0: 0xc0b466a  jal         func_2D19A8
    ctx->pc = 0x2D34E0u;
    SET_GPR_U32(ctx, 31, 0x2D34E8u);
    ctx->pc = 0x2D34E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D34E0u;
            // 0x2d34e4: 0xafb40014  sw          $s4, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D19A8u;
    if (runtime->hasFunction(0x2D19A8u)) {
        auto targetFn = runtime->lookupFunction(0x2D19A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D34E8u; }
        if (ctx->pc != 0x2D34E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D19A8_0x2d19a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D34E8u; }
        if (ctx->pc != 0x2D34E8u) { return; }
    }
    ctx->pc = 0x2D34E8u;
label_2d34e8:
    // 0x2d34e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d34e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d34ec: 0x5200ffbe  beql        $s0, $zero, . + 4 + (-0x42 << 2)
    ctx->pc = 0x2D34ECu;
    {
        const bool branch_taken_0x2d34ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d34ec) {
            ctx->pc = 0x2D34F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D34ECu;
            // 0x2d34f0: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D33E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d33e8;
        }
    }
    ctx->pc = 0x2D34F4u;
label_2d34f4:
    // 0x2d34f4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D34F4u;
    {
        const bool branch_taken_0x2d34f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D34F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D34F4u;
            // 0x2d34f8: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d34f4) {
            ctx->pc = 0x2D3504u;
            goto label_2d3504;
        }
    }
    ctx->pc = 0x2D34FCu;
    // 0x2d34fc: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x2d34fcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d3500: 0xffc30000  sd          $v1, 0x0($fp)
    ctx->pc = 0x2d3500u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 3));
label_2d3504:
    // 0x2d3504: 0xc0b4618  jal         func_2D1860
    ctx->pc = 0x2D3504u;
    SET_GPR_U32(ctx, 31, 0x2D350Cu);
    ctx->pc = 0x2D3508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3504u;
            // 0x2d3508: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1860u;
    if (runtime->hasFunction(0x2D1860u)) {
        auto targetFn = runtime->lookupFunction(0x2D1860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D350Cu; }
        if (ctx->pc != 0x2D350Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1860_0x2d1860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D350Cu; }
        if (ctx->pc != 0x2D350Cu) { return; }
    }
    ctx->pc = 0x2D350Cu;
label_2d350c:
    // 0x2d350c: 0xc0b4618  jal         func_2D1860
    ctx->pc = 0x2D350Cu;
    SET_GPR_U32(ctx, 31, 0x2D3514u);
    ctx->pc = 0x2D3510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D350Cu;
            // 0x2d3510: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1860u;
    if (runtime->hasFunction(0x2D1860u)) {
        auto targetFn = runtime->lookupFunction(0x2D1860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3514u; }
        if (ctx->pc != 0x2D3514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1860_0x2d1860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3514u; }
        if (ctx->pc != 0x2D3514u) { return; }
    }
    ctx->pc = 0x2D3514u;
label_2d3514:
    // 0x2d3514: 0xc0b4618  jal         func_2D1860
    ctx->pc = 0x2D3514u;
    SET_GPR_U32(ctx, 31, 0x2D351Cu);
    ctx->pc = 0x2D3518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3514u;
            // 0x2d3518: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1860u;
    if (runtime->hasFunction(0x2D1860u)) {
        auto targetFn = runtime->lookupFunction(0x2D1860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D351Cu; }
        if (ctx->pc != 0x2D351Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1860_0x2d1860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D351Cu; }
        if (ctx->pc != 0x2D351Cu) { return; }
    }
    ctx->pc = 0x2D351Cu;
label_2d351c:
    // 0x2d351c: 0xc0b4618  jal         func_2D1860
    ctx->pc = 0x2D351Cu;
    SET_GPR_U32(ctx, 31, 0x2D3524u);
    ctx->pc = 0x2D3520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D351Cu;
            // 0x2d3520: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1860u;
    if (runtime->hasFunction(0x2D1860u)) {
        auto targetFn = runtime->lookupFunction(0x2D1860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3524u; }
        if (ctx->pc != 0x2D3524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1860_0x2d1860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3524u; }
        if (ctx->pc != 0x2D3524u) { return; }
    }
    ctx->pc = 0x2D3524u;
label_2d3524:
    // 0x2d3524: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d3524u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3528: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2d3528u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d352c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2d352cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d3530: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2d3530u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d3534: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2d3534u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d3538: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2d3538u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d353c: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x2d353cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d3540: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2d3540u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d3544: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x2d3544u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2d3548: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2d3548u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d354c: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x2d354cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2d3550: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3550u;
            // 0x2d3554: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D3558u;
label_2d3558:
    // 0x2d3558: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d3558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d355c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2d355cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2d3560: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d3560u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3564: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d3564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3568: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2d3568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2d356c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2d356cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2d3570: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d3570u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3574: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2d3574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2d3578: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2d3578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2d357c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2d357cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2d3580: 0xc0b4614  jal         func_2D1850
    ctx->pc = 0x2D3580u;
    SET_GPR_U32(ctx, 31, 0x2D3588u);
    ctx->pc = 0x2D3584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3580u;
            // 0x2d3584: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1850u;
    if (runtime->hasFunction(0x2D1850u)) {
        auto targetFn = runtime->lookupFunction(0x2D1850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3588u; }
        if (ctx->pc != 0x2D3588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1850_0x2d1850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3588u; }
        if (ctx->pc != 0x2D3588u) { return; }
    }
    ctx->pc = 0x2D3588u;
label_2d3588:
    // 0x2d3588: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x2d3588u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d358c: 0xc0b4614  jal         func_2D1850
    ctx->pc = 0x2D358Cu;
    SET_GPR_U32(ctx, 31, 0x2D3594u);
    ctx->pc = 0x2D3590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D358Cu;
            // 0x2d3590: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1850u;
    if (runtime->hasFunction(0x2D1850u)) {
        auto targetFn = runtime->lookupFunction(0x2D1850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3594u; }
        if (ctx->pc != 0x2D3594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1850_0x2d1850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3594u; }
        if (ctx->pc != 0x2D3594u) { return; }
    }
    ctx->pc = 0x2D3594u;
label_2d3594:
    // 0x2d3594: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2D3594u;
    {
        const bool branch_taken_0x2d3594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3594u;
            // 0x2d3598: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3594) {
            ctx->pc = 0x2D36D0u;
            goto label_2d36d0;
        }
    }
    ctx->pc = 0x2D359Cu;
    // 0x2d359c: 0x0  nop
    ctx->pc = 0x2d359cu;
    // NOP
label_2d35a0:
    // 0x2d35a0: 0xc0b4a88  jal         func_2D2A20
    ctx->pc = 0x2D35A0u;
    SET_GPR_U32(ctx, 31, 0x2D35A8u);
    ctx->pc = 0x2D2A20u;
    if (runtime->hasFunction(0x2D2A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D2A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D35A8u; }
        if (ctx->pc != 0x2D35A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2A20_0x2d2a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D35A8u; }
        if (ctx->pc != 0x2D35A8u) { return; }
    }
    ctx->pc = 0x2D35A8u;
label_2d35a8:
    // 0x2d35a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d35a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d35ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d35acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d35b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d35b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d35b4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2d35b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d35b8: 0x1600005d  bnez        $s0, . + 4 + (0x5D << 2)
    ctx->pc = 0x2D35B8u;
    {
        const bool branch_taken_0x2d35b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D35BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D35B8u;
            // 0x2d35bc: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d35b8) {
            ctx->pc = 0x2D3730u;
            goto label_2d3730;
        }
    }
    ctx->pc = 0x2D35C0u;
    // 0x2d35c0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2d35c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d35c4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d35c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d35c8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2d35c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d35cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d35ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d35d0: 0xdc67fff8  ld          $a3, -0x8($v1)
    ctx->pc = 0x2d35d0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x2d35d4: 0x10e0001e  beqz        $a3, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D35D4u;
    {
        const bool branch_taken_0x2d35d4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d35d4) {
            ctx->pc = 0x2D3650u;
            goto label_2d3650;
        }
    }
    ctx->pc = 0x2D35DCu;
    // 0x2d35dc: 0xc0b4a88  jal         func_2D2A20
    ctx->pc = 0x2D35DCu;
    SET_GPR_U32(ctx, 31, 0x2D35E4u);
    ctx->pc = 0x2D2A20u;
    if (runtime->hasFunction(0x2D2A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D2A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D35E4u; }
        if (ctx->pc != 0x2D35E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2A20_0x2d2a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D35E4u; }
        if (ctx->pc != 0x2D35E4u) { return; }
    }
    ctx->pc = 0x2D35E4u;
label_2d35e4:
    // 0x2d35e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d35e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d35e8: 0x16000051  bnez        $s0, . + 4 + (0x51 << 2)
    ctx->pc = 0x2D35E8u;
    {
        const bool branch_taken_0x2d35e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D35ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D35E8u;
            // 0x2d35ec: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d35e8) {
            ctx->pc = 0x2D3730u;
            goto label_2d3730;
        }
    }
    ctx->pc = 0x2D35F0u;
label_2d35f0:
    // 0x2d35f0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2d35f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d35f4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2d35f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2d35f8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2d35f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d35fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d35fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d3600: 0xdc64fff8  ld          $a0, -0x8($v1)
    ctx->pc = 0x2d3600u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x2d3604: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D3604u;
    {
        const bool branch_taken_0x2d3604 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3604) {
            ctx->pc = 0x2D3650u;
            goto label_2d3650;
        }
    }
    ctx->pc = 0x2D360Cu;
    // 0x2d360c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d360cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3610: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d3610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3614: 0xc0b4a88  jal         func_2D2A20
    ctx->pc = 0x2D3614u;
    SET_GPR_U32(ctx, 31, 0x2D361Cu);
    ctx->pc = 0x2D3618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3614u;
            // 0x2d3618: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2A20u;
    if (runtime->hasFunction(0x2D2A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D2A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D361Cu; }
        if (ctx->pc != 0x2D361Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2A20_0x2d2a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D361Cu; }
        if (ctx->pc != 0x2D361Cu) { return; }
    }
    ctx->pc = 0x2D361Cu;
label_2d361c:
    // 0x2d361c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d361cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3620: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d3620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3624: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2d3624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3628: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d3628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d362c: 0x16000040  bnez        $s0, . + 4 + (0x40 << 2)
    ctx->pc = 0x2D362Cu;
    {
        const bool branch_taken_0x2d362c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D362Cu;
            // 0x2d3630: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d362c) {
            ctx->pc = 0x2D3730u;
            goto label_2d3730;
        }
    }
    ctx->pc = 0x2D3634u;
    // 0x2d3634: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2d3634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2d3638: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2d3638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d363c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2d363cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d3640: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d3640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d3644: 0xdc67fff8  ld          $a3, -0x8($v1)
    ctx->pc = 0x2d3644u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x2d3648: 0x14e0ffd5  bnez        $a3, . + 4 + (-0x2B << 2)
    ctx->pc = 0x2D3648u;
    {
        const bool branch_taken_0x2d3648 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3648) {
            ctx->pc = 0x2D35A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d35a0;
        }
    }
    ctx->pc = 0x2D3650u;
label_2d3650:
    // 0x2d3650: 0x16000037  bnez        $s0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2D3650u;
    {
        const bool branch_taken_0x2d3650 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3650u;
            // 0x2d3654: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3650) {
            ctx->pc = 0x2D3730u;
            goto label_2d3730;
        }
    }
    ctx->pc = 0x2D3658u;
    // 0x2d3658: 0x1102000d  beq         $t0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D3658u;
    {
        const bool branch_taken_0x2d3658 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D365Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3658u;
            // 0x2d365c: 0x29020003  slti        $v0, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3658) {
            ctx->pc = 0x2D3690u;
            goto label_2d3690;
        }
    }
    ctx->pc = 0x2D3660u;
    // 0x2d3660: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D3660u;
    {
        const bool branch_taken_0x2d3660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3660u;
            // 0x2d3664: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3660) {
            ctx->pc = 0x2D3680u;
            goto label_2d3680;
        }
    }
    ctx->pc = 0x2D3668u;
    // 0x2d3668: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d3668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d366c: 0x51020013  beql        $t0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D366Cu;
    {
        const bool branch_taken_0x2d366c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d366c) {
            ctx->pc = 0x2D3670u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D366Cu;
            // 0x2d3670: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D36BCu;
            goto label_2d36bc;
        }
    }
    ctx->pc = 0x2D3674u;
    // 0x2d3674: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2D3674u;
    {
        const bool branch_taken_0x2d3674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3674) {
            ctx->pc = 0x2D3730u;
            goto label_2d3730;
        }
    }
    ctx->pc = 0x2D367Cu;
    // 0x2d367c: 0x0  nop
    ctx->pc = 0x2d367cu;
    // NOP
label_2d3680:
    // 0x2d3680: 0x11020007  beq         $t0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D3680u;
    {
        const bool branch_taken_0x2d3680 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D3684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3680u;
            // 0x2d3684: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3680) {
            ctx->pc = 0x2D36A0u;
            goto label_2d36a0;
        }
    }
    ctx->pc = 0x2D3688u;
    // 0x2d3688: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2D3688u;
    {
        const bool branch_taken_0x2d3688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3688) {
            ctx->pc = 0x2D3730u;
            goto label_2d3730;
        }
    }
    ctx->pc = 0x2D3690u;
label_2d3690:
    // 0x2d3690: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d3690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3694: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D3694u;
    {
        const bool branch_taken_0x2d3694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3694u;
            // 0x2d3698: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3694) {
            ctx->pc = 0x2D36C0u;
            goto label_2d36c0;
        }
    }
    ctx->pc = 0x2D369Cu;
    // 0x2d369c: 0x0  nop
    ctx->pc = 0x2d369cu;
    // NOP
label_2d36a0:
    // 0x2d36a0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d36a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d36a4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2d36a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d36a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d36a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d36ac: 0xdc64fff8  ld          $a0, -0x8($v1)
    ctx->pc = 0x2d36acu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x2d36b0: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2D36B0u;
    {
        const bool branch_taken_0x2d36b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D36B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D36B0u;
            // 0x2d36b4: 0x2410010a  addiu       $s0, $zero, 0x10A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 266));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d36b0) {
            ctx->pc = 0x2D3730u;
            goto label_2d3730;
        }
    }
    ctx->pc = 0x2D36B8u;
    // 0x2d36b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d36b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d36bc:
    // 0x2d36bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d36bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d36c0:
    // 0x2d36c0: 0xc0b3efe  jal         func_2CFBF8
    ctx->pc = 0x2D36C0u;
    SET_GPR_U32(ctx, 31, 0x2D36C8u);
    ctx->pc = 0x2CFBF8u;
    if (runtime->hasFunction(0x2CFBF8u)) {
        auto targetFn = runtime->lookupFunction(0x2CFBF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D36C8u; }
        if (ctx->pc != 0x2D36C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CFBF8_0x2cfbf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D36C8u; }
        if (ctx->pc != 0x2D36C8u) { return; }
    }
    ctx->pc = 0x2D36C8u;
label_2d36c8:
    // 0x2d36c8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2D36C8u;
    {
        const bool branch_taken_0x2d36c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D36CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D36C8u;
            // 0x2d36cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d36c8) {
            ctx->pc = 0x2D3730u;
            goto label_2d3730;
        }
    }
    ctx->pc = 0x2D36D0u;
label_2d36d0:
    // 0x2d36d0: 0xc0b3f1a  jal         func_2CFC68
    ctx->pc = 0x2D36D0u;
    SET_GPR_U32(ctx, 31, 0x2D36D8u);
    ctx->pc = 0x2D36D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D36D0u;
            // 0x2d36d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC68u;
    if (runtime->hasFunction(0x2CFC68u)) {
        auto targetFn = runtime->lookupFunction(0x2CFC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D36D8u; }
        if (ctx->pc != 0x2D36D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CFC68_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D36D8u; }
        if (ctx->pc != 0x2D36D8u) { return; }
    }
    ctx->pc = 0x2D36D8u;
label_2d36d8:
    // 0x2d36d8: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D36D8u;
    {
        const bool branch_taken_0x2d36d8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2D36DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D36D8u;
            // 0x2d36dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d36d8) {
            ctx->pc = 0x2D3700u;
            goto label_2d3700;
        }
    }
    ctx->pc = 0x2D36E0u;
    // 0x2d36e0: 0xc0b3efe  jal         func_2CFBF8
    ctx->pc = 0x2D36E0u;
    SET_GPR_U32(ctx, 31, 0x2D36E8u);
    ctx->pc = 0x2D36E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D36E0u;
            // 0x2d36e4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFBF8u;
    if (runtime->hasFunction(0x2CFBF8u)) {
        auto targetFn = runtime->lookupFunction(0x2CFBF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D36E8u; }
        if (ctx->pc != 0x2D36E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CFBF8_0x2cfbf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D36E8u; }
        if (ctx->pc != 0x2D36E8u) { return; }
    }
    ctx->pc = 0x2D36E8u;
label_2d36e8:
    // 0x2d36e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d36e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d36ec: 0x16000010  bnez        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D36ECu;
    {
        const bool branch_taken_0x2d36ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d36ec) {
            ctx->pc = 0x2D3730u;
            goto label_2d3730;
        }
    }
    ctx->pc = 0x2D36F4u;
    // 0x2d36f4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D36F4u;
    {
        const bool branch_taken_0x2d36f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D36F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D36F4u;
            // 0x2d36f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d36f4) {
            ctx->pc = 0x2D371Cu;
            goto label_2d371c;
        }
    }
    ctx->pc = 0x2D36FCu;
    // 0x2d36fc: 0x0  nop
    ctx->pc = 0x2d36fcu;
    // NOP
label_2d3700:
    // 0x2d3700: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d3700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3704: 0xc0b3efe  jal         func_2CFBF8
    ctx->pc = 0x2D3704u;
    SET_GPR_U32(ctx, 31, 0x2D370Cu);
    ctx->pc = 0x2D3708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3704u;
            // 0x2d3708: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFBF8u;
    if (runtime->hasFunction(0x2CFBF8u)) {
        auto targetFn = runtime->lookupFunction(0x2CFBF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D370Cu; }
        if (ctx->pc != 0x2D370Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CFBF8_0x2cfbf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D370Cu; }
        if (ctx->pc != 0x2D370Cu) { return; }
    }
    ctx->pc = 0x2D370Cu;
label_2d370c:
    // 0x2d370c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d370cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3710: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D3710u;
    {
        const bool branch_taken_0x2d3710 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3710) {
            ctx->pc = 0x2D3730u;
            goto label_2d3730;
        }
    }
    ctx->pc = 0x2D3718u;
    // 0x2d3718: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d3718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d371c:
    // 0x2d371c: 0xc0b3efe  jal         func_2CFBF8
    ctx->pc = 0x2D371Cu;
    SET_GPR_U32(ctx, 31, 0x2D3724u);
    ctx->pc = 0x2D3720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D371Cu;
            // 0x2d3720: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFBF8u;
    if (runtime->hasFunction(0x2CFBF8u)) {
        auto targetFn = runtime->lookupFunction(0x2CFBF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3724u; }
        if (ctx->pc != 0x2D3724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CFBF8_0x2cfbf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3724u; }
        if (ctx->pc != 0x2D3724u) { return; }
    }
    ctx->pc = 0x2D3724u;
label_2d3724:
    // 0x2d3724: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d3724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3728: 0x1200ffb1  beqz        $s0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x2D3728u;
    {
        const bool branch_taken_0x2d3728 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D372Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3728u;
            // 0x2d372c: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3728) {
            ctx->pc = 0x2D35F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d35f0;
        }
    }
    ctx->pc = 0x2D3730u;
label_2d3730:
    // 0x2d3730: 0xc0b4618  jal         func_2D1860
    ctx->pc = 0x2D3730u;
    SET_GPR_U32(ctx, 31, 0x2D3738u);
    ctx->pc = 0x2D3734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3730u;
            // 0x2d3734: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1860u;
    if (runtime->hasFunction(0x2D1860u)) {
        auto targetFn = runtime->lookupFunction(0x2D1860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3738u; }
        if (ctx->pc != 0x2D3738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1860_0x2d1860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3738u; }
        if (ctx->pc != 0x2D3738u) { return; }
    }
    ctx->pc = 0x2D3738u;
label_2d3738:
    // 0x2d3738: 0xc0b4618  jal         func_2D1860
    ctx->pc = 0x2D3738u;
    SET_GPR_U32(ctx, 31, 0x2D3740u);
    ctx->pc = 0x2D373Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D3738u;
            // 0x2d373c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1860u;
    if (runtime->hasFunction(0x2D1860u)) {
        auto targetFn = runtime->lookupFunction(0x2D1860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3740u; }
        if (ctx->pc != 0x2D3740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1860_0x2d1860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3740u; }
        if (ctx->pc != 0x2D3740u) { return; }
    }
    ctx->pc = 0x2D3740u;
label_2d3740:
    // 0x2d3740: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d3740u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3744: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2d3744u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d3748: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2d3748u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d374c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2d374cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d3750: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2d3750u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d3754: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2d3754u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d3758: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2d3758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d375c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D375Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D375Cu;
            // 0x2d3760: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D3764u;
    // 0x2d3764: 0x0  nop
    ctx->pc = 0x2d3764u;
    // NOP
    ctx->pc = 0x2d3768u;
}
