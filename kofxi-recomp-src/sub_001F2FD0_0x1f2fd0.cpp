#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F2FD0
// Address: 0x1f2fd0 - 0x1f30d8
void sub_001F2FD0_0x1f2fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2FD0_0x1f2fd0");
#endif

    switch (ctx->pc) {
        case 0x1f301cu: goto label_1f301c;
        case 0x1f304cu: goto label_1f304c;
        default: break;
    }

    ctx->pc = 0x1f2fd0u;

    // 0x1f2fd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f2fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f2fd4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1f2fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1f2fd8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f2fd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2fdc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1f2fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1f2fe0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1f2fe0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2fe4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1f2fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1f2fe8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1f2fe8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2fec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f2fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f2ff0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f2ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f2ff4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1f2ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1f2ff8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f2ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f2ffc: 0x8e332018  lw          $s3, 0x2018($s1)
    ctx->pc = 0x1f2ffcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8216)));
    // 0x1f3000: 0x8e620110  lw          $v0, 0x110($s3)
    ctx->pc = 0x1f3000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
    // 0x1f3004: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1f3004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f3008: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1F3008u;
    {
        const bool branch_taken_0x1f3008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F300Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3008u;
            // 0x1f300c: 0x8e700074  lw          $s0, 0x74($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3008) {
            ctx->pc = 0x1F306Cu;
            goto label_1f306c;
        }
    }
    ctx->pc = 0x1F3010u;
    // 0x1f3010: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f3010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3014: 0xc0767d8  jal         func_1D9F60
    ctx->pc = 0x1F3014u;
    SET_GPR_U32(ctx, 31, 0x1F301Cu);
    ctx->pc = 0x1F3018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3014u;
            // 0x1f3018: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F60u;
    if (runtime->hasFunction(0x1D9F60u)) {
        auto targetFn = runtime->lookupFunction(0x1D9F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F301Cu; }
        if (ctx->pc != 0x1F301Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9F60_0x1d9f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F301Cu; }
        if (ctx->pc != 0x1F301Cu) { return; }
    }
    ctx->pc = 0x1F301Cu;
label_1f301c:
    // 0x1f301c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1f301cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3020: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f3020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3024: 0x54720004  bnel        $v1, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3024u;
    {
        const bool branch_taken_0x1f3024 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x1f3024) {
            ctx->pc = 0x1F3028u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3024u;
            // 0x1f3028: 0x8e220ea0  lw          $v0, 0xEA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3744)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F3038u;
            goto label_1f3038;
        }
    }
    ctx->pc = 0x1F302Cu;
    // 0x1f302c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F302Cu;
    {
        const bool branch_taken_0x1f302c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F302Cu;
            // 0x1f3030: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f302c) {
            ctx->pc = 0x1F306Cu;
            goto label_1f306c;
        }
    }
    ctx->pc = 0x1F3034u;
    // 0x1f3034: 0x0  nop
    ctx->pc = 0x1f3034u;
    // NOP
label_1f3038:
    // 0x1f3038: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F3038u;
    {
        const bool branch_taken_0x1f3038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3038) {
            ctx->pc = 0x1F303Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3038u;
            // 0x1f303c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F3060u;
            goto label_1f3060;
        }
    }
    ctx->pc = 0x1F3040u;
    // 0x1f3040: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f3040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3044: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1F3044u;
    SET_GPR_U32(ctx, 31, 0x1F304Cu);
    ctx->pc = 0x1F3048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3044u;
            // 0x1f3048: 0x24050049  addiu       $a1, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F304Cu; }
        if (ctx->pc != 0x1F304Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F304Cu; }
        if (ctx->pc != 0x1F304Cu) { return; }
    }
    ctx->pc = 0x1F304Cu;
label_1f304c:
    // 0x1f304c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1f304cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1f3050: 0x522026  xor         $a0, $v0, $s2
    ctx->pc = 0x1f3050u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
    // 0x1f3054: 0x44180a  movz        $v1, $v0, $a0
    ctx->pc = 0x1f3054u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x1f3058: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1f3058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1f305c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1f305cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1f3060:
    // 0x1f3060: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f3060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f3064: 0x521026  xor         $v0, $v0, $s2
    ctx->pc = 0x1f3064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
    // 0x1f3068: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x1f3068u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_1f306c:
    // 0x1f306c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f306cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3070: 0x16820009  bne         $s4, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F3070u;
    {
        const bool branch_taken_0x1f3070 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F3074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3070u;
            // 0x1f3074: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3070) {
            ctx->pc = 0x1F3098u;
            goto label_1f3098;
        }
    }
    ctx->pc = 0x1F3078u;
    // 0x1f3078: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x1f3078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x1f307c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f307cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f3080: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1f3080u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f3084: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1F3084u;
    {
        const bool branch_taken_0x1f3084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3084) {
            ctx->pc = 0x1F3088u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3084u;
            // 0x1f3088: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F30B0u;
            goto label_1f30b0;
        }
    }
    ctx->pc = 0x1F308Cu;
    // 0x1f308c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F308Cu;
    {
        const bool branch_taken_0x1f308c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F308Cu;
            // 0x1f3090: 0xae700074  sw          $s0, 0x74($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f308c) {
            ctx->pc = 0x1F30B4u;
            goto label_1f30b4;
        }
    }
    ctx->pc = 0x1F3094u;
    // 0x1f3094: 0x0  nop
    ctx->pc = 0x1f3094u;
    // NOP
label_1f3098:
    // 0x1f3098: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F3098u;
    {
        const bool branch_taken_0x1f3098 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F309Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3098u;
            // 0x1f309c: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3098) {
            ctx->pc = 0x1F30A8u;
            goto label_1f30a8;
        }
    }
    ctx->pc = 0x1F30A0u;
    // 0x1f30a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F30A0u;
    {
        const bool branch_taken_0x1f30a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F30A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F30A0u;
            // 0x1f30a4: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f30a0) {
            ctx->pc = 0x1F30B0u;
            goto label_1f30b0;
        }
    }
    ctx->pc = 0x1F30A8u;
label_1f30a8:
    // 0x1f30a8: 0x3a020003  xori        $v0, $s0, 0x3
    ctx->pc = 0x1f30a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)3);
    // 0x1f30ac: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x1f30acu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_1f30b0:
    // 0x1f30b0: 0xae700074  sw          $s0, 0x74($s3)
    ctx->pc = 0x1f30b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 16));
label_1f30b4:
    // 0x1f30b4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1f30b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f30b8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f30b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f30bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f30bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f30c0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1f30c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f30c4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1f30c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f30c8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1f30c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f30cc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f30ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f30d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F30D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F30D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F30D0u;
            // 0x1f30d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F30D8u;
    ctx->pc = 0x1f30d8u;
}
