#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002ECCB0
// Address: 0x2eccb0 - 0x2ece10
void sub_002ECCB0_0x2eccb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ECCB0_0x2eccb0");
#endif

    switch (ctx->pc) {
        case 0x2ecce4u: goto label_2ecce4;
        case 0x2eccf8u: goto label_2eccf8;
        case 0x2ecd10u: goto label_2ecd10;
        case 0x2ecd28u: goto label_2ecd28;
        case 0x2ecd40u: goto label_2ecd40;
        case 0x2ecd58u: goto label_2ecd58;
        case 0x2ecd8cu: goto label_2ecd8c;
        case 0x2ecda0u: goto label_2ecda0;
        case 0x2ecdbcu: goto label_2ecdbc;
        case 0x2ecdd4u: goto label_2ecdd4;
        case 0x2ecdf4u: goto label_2ecdf4;
        default: break;
    }

    ctx->pc = 0x2eccb0u;

    // 0x2eccb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2eccb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2eccb4: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2eccb4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2eccb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2eccb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2eccbc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2eccbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2eccc0: 0x25f0eca8  addiu       $s0, $t7, -0x1358
    ctx->pc = 0x2eccc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2eccc4: 0x8e0e0014  lw          $t6, 0x14($s0)
    ctx->pc = 0x2eccc4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2eccc8: 0x15c0000c  bnez        $t6, . + 4 + (0xC << 2)
    ctx->pc = 0x2ECCC8u;
    {
        const bool branch_taken_0x2eccc8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ECCCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECCC8u;
            // 0x2ecccc: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eccc8) {
            ctx->pc = 0x2ECCFCu;
            goto label_2eccfc;
        }
    }
    ctx->pc = 0x2ECCD0u;
    // 0x2eccd0: 0x8e0f0010  lw          $t7, 0x10($s0)
    ctx->pc = 0x2eccd0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2eccd4: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ECCD4u;
    {
        const bool branch_taken_0x2eccd4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECCD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECCD4u;
            // 0x2eccd8: 0x1e0202d  daddu       $a0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eccd4) {
            ctx->pc = 0x2ECCF8u;
            goto label_2eccf8;
        }
    }
    ctx->pc = 0x2ECCDCu;
    // 0x2eccdc: 0xc08917a  jal         func_2245E8
    ctx->pc = 0x2ECCDCu;
    SET_GPR_U32(ctx, 31, 0x2ECCE4u);
    ctx->pc = 0x2245E8u;
    if (runtime->hasFunction(0x2245E8u)) {
        auto targetFn = runtime->lookupFunction(0x2245E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECCE4u; }
        if (ctx->pc != 0x2ECCE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002245E8_0x2245e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECCE4u; }
        if (ctx->pc != 0x2ECCE4u) { return; }
    }
    ctx->pc = 0x2ECCE4u;
label_2ecce4:
    // 0x2ecce4: 0x240f0005  addiu       $t7, $zero, 0x5
    ctx->pc = 0x2ecce4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ecce8: 0x144f0004  bne         $v0, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ECCE8u;
    {
        const bool branch_taken_0x2ecce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x2ECCECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECCE8u;
            // 0x2eccec: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecce8) {
            ctx->pc = 0x2ECCFCu;
            goto label_2eccfc;
        }
    }
    ctx->pc = 0x2ECCF0u;
    // 0x2eccf0: 0xc089014  jal         func_224050
    ctx->pc = 0x2ECCF0u;
    SET_GPR_U32(ctx, 31, 0x2ECCF8u);
    ctx->pc = 0x2ECCF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECCF0u;
            // 0x2eccf4: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224050u;
    if (runtime->hasFunction(0x224050u)) {
        auto targetFn = runtime->lookupFunction(0x224050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECCF8u; }
        if (ctx->pc != 0x2ECCF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224050_0x224050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECCF8u; }
        if (ctx->pc != 0x2ECCF8u) { return; }
    }
    ctx->pc = 0x2ECCF8u;
label_2eccf8:
    // 0x2eccf8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2eccf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_2eccfc:
    // 0x2eccfc: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2eccfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2ecd00: 0x248404b0  addiu       $a0, $a0, 0x4B0
    ctx->pc = 0x2ecd00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1200));
    // 0x2ecd04: 0x24a5ed50  addiu       $a1, $a1, -0x12B0
    ctx->pc = 0x2ecd04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962512));
    // 0x2ecd08: 0xc0bc1ca  jal         func_2F0728
    ctx->pc = 0x2ECD08u;
    SET_GPR_U32(ctx, 31, 0x2ECD10u);
    ctx->pc = 0x2ECD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECD08u;
            // 0x2ecd0c: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0728u;
    if (runtime->hasFunction(0x2F0728u)) {
        auto targetFn = runtime->lookupFunction(0x2F0728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECD10u; }
        if (ctx->pc != 0x2ECD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0728_0x2f0728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECD10u; }
        if (ctx->pc != 0x2ECD10u) { return; }
    }
    ctx->pc = 0x2ECD10u;
label_2ecd10:
    // 0x2ecd10: 0x26100938  addiu       $s0, $s0, 0x938
    ctx->pc = 0x2ecd10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2360));
    // 0x2ecd14: 0x240503a0  addiu       $a1, $zero, 0x3A0
    ctx->pc = 0x2ecd14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 928));
    // 0x2ecd18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ecd18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecd1c: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x2ecd1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2ecd20: 0xc0bc6f6  jal         func_2F1BD8
    ctx->pc = 0x2ECD20u;
    SET_GPR_U32(ctx, 31, 0x2ECD28u);
    ctx->pc = 0x2ECD24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECD20u;
            // 0x2ecd24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BD8u;
    if (runtime->hasFunction(0x2F1BD8u)) {
        auto targetFn = runtime->lookupFunction(0x2F1BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECD28u; }
        if (ctx->pc != 0x2ECD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1BD8_0x2f1bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECD28u; }
        if (ctx->pc != 0x2ECD28u) { return; }
    }
    ctx->pc = 0x2ECD28u;
label_2ecd28:
    // 0x2ecd28: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ecd28u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ecd2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ecd2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecd30: 0x240503a1  addiu       $a1, $zero, 0x3A1
    ctx->pc = 0x2ecd30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 929));
    // 0x2ecd34: 0x24e70948  addiu       $a3, $a3, 0x948
    ctx->pc = 0x2ecd34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2376));
    // 0x2ecd38: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2ECD38u;
    SET_GPR_U32(ctx, 31, 0x2ECD40u);
    ctx->pc = 0x2ECD3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECD38u;
            // 0x2ecd3c: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECD40u; }
        if (ctx->pc != 0x2ECD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECD40u; }
        if (ctx->pc != 0x2ECD40u) { return; }
    }
    ctx->pc = 0x2ECD40u;
label_2ecd40:
    // 0x2ecd40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ecd40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ecd44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ecd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ecd48: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ecd48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ecd4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2ECD4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECD4Cu;
            // 0x2ecd50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ECD54u;
    // 0x2ecd54: 0x0  nop
    ctx->pc = 0x2ecd54u;
    // NOP
label_2ecd58:
    // 0x2ecd58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ecd58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ecd5c: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2ecd5cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2ecd60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ecd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ecd64: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ecd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ecd68: 0x25f0eca8  addiu       $s0, $t7, -0x1358
    ctx->pc = 0x2ecd68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2ecd6c: 0x8e0e0014  lw          $t6, 0x14($s0)
    ctx->pc = 0x2ecd6cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2ecd70: 0x55c0000c  bnel        $t6, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2ECD70u;
    {
        const bool branch_taken_0x2ecd70 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ecd70) {
            ctx->pc = 0x2ECD74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECD70u;
            // 0x2ecd74: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ECDA4u;
            goto label_2ecda4;
        }
    }
    ctx->pc = 0x2ECD78u;
    // 0x2ecd78: 0x8e0f0010  lw          $t7, 0x10($s0)
    ctx->pc = 0x2ecd78u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2ecd7c: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ECD7Cu;
    {
        const bool branch_taken_0x2ecd7c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ecd7c) {
            ctx->pc = 0x2ECD98u;
            goto label_2ecd98;
        }
    }
    ctx->pc = 0x2ECD84u;
    // 0x2ecd84: 0xc08917a  jal         func_2245E8
    ctx->pc = 0x2ECD84u;
    SET_GPR_U32(ctx, 31, 0x2ECD8Cu);
    ctx->pc = 0x2ECD88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECD84u;
            // 0x2ecd88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2245E8u;
    if (runtime->hasFunction(0x2245E8u)) {
        auto targetFn = runtime->lookupFunction(0x2245E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECD8Cu; }
        if (ctx->pc != 0x2ECD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002245E8_0x2245e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECD8Cu; }
        if (ctx->pc != 0x2ECD8Cu) { return; }
    }
    ctx->pc = 0x2ECD8Cu;
label_2ecd8c:
    // 0x2ecd8c: 0x240f0005  addiu       $t7, $zero, 0x5
    ctx->pc = 0x2ecd8cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ecd90: 0x544f0004  bnel        $v0, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ECD90u;
    {
        const bool branch_taken_0x2ecd90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        if (branch_taken_0x2ecd90) {
            ctx->pc = 0x2ECD94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECD90u;
            // 0x2ecd94: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ECDA4u;
            goto label_2ecda4;
        }
    }
    ctx->pc = 0x2ECD98u;
label_2ecd98:
    // 0x2ecd98: 0xc089014  jal         func_224050
    ctx->pc = 0x2ECD98u;
    SET_GPR_U32(ctx, 31, 0x2ECDA0u);
    ctx->pc = 0x2ECD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECD98u;
            // 0x2ecd9c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224050u;
    if (runtime->hasFunction(0x224050u)) {
        auto targetFn = runtime->lookupFunction(0x224050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECDA0u; }
        if (ctx->pc != 0x2ECDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224050_0x224050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECDA0u; }
        if (ctx->pc != 0x2ECDA0u) { return; }
    }
    ctx->pc = 0x2ECDA0u;
label_2ecda0:
    // 0x2ecda0: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2ecda0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_2ecda4:
    // 0x2ecda4: 0x240503ba  addiu       $a1, $zero, 0x3BA
    ctx->pc = 0x2ecda4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 954));
    // 0x2ecda8: 0x26100960  addiu       $s0, $s0, 0x960
    ctx->pc = 0x2ecda8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2400));
    // 0x2ecdac: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2ecdacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ecdb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ecdb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecdb4: 0xc0bc6f6  jal         func_2F1BD8
    ctx->pc = 0x2ECDB4u;
    SET_GPR_U32(ctx, 31, 0x2ECDBCu);
    ctx->pc = 0x2ECDB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECDB4u;
            // 0x2ecdb8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BD8u;
    if (runtime->hasFunction(0x2F1BD8u)) {
        auto targetFn = runtime->lookupFunction(0x2F1BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECDBCu; }
        if (ctx->pc != 0x2ECDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1BD8_0x2f1bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECDBCu; }
        if (ctx->pc != 0x2ECDBCu) { return; }
    }
    ctx->pc = 0x2ECDBCu;
label_2ecdbc:
    // 0x2ecdbc: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ecdbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ecdc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ecdc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecdc4: 0x240503bb  addiu       $a1, $zero, 0x3BB
    ctx->pc = 0x2ecdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 955));
    // 0x2ecdc8: 0x24e70970  addiu       $a3, $a3, 0x970
    ctx->pc = 0x2ecdc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2416));
    // 0x2ecdcc: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2ECDCCu;
    SET_GPR_U32(ctx, 31, 0x2ECDD4u);
    ctx->pc = 0x2ECDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECDCCu;
            // 0x2ecdd0: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECDD4u; }
        if (ctx->pc != 0x2ECDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECDD4u; }
        if (ctx->pc != 0x2ECDD4u) { return; }
    }
    ctx->pc = 0x2ECDD4u;
label_2ecdd4:
    // 0x2ecdd4: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2ecdd4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2ecdd8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ecdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ecddc: 0x25f0eca8  addiu       $s0, $t7, -0x1358
    ctx->pc = 0x2ecddcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2ecde0: 0x8e0f006c  lw          $t7, 0x6C($s0)
    ctx->pc = 0x2ecde0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2ecde4: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ECDE4u;
    {
        const bool branch_taken_0x2ecde4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECDE4u;
            // 0x2ecde8: 0x24840988  addiu       $a0, $a0, 0x988 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecde4) {
            ctx->pc = 0x2ECDF8u;
            goto label_2ecdf8;
        }
    }
    ctx->pc = 0x2ECDECu;
    // 0x2ecdec: 0xc089e80  jal         func_227A00
    ctx->pc = 0x2ECDECu;
    SET_GPR_U32(ctx, 31, 0x2ECDF4u);
    ctx->pc = 0x2ECDF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECDECu;
            // 0x2ecdf0: 0x8e050068  lw          $a1, 0x68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x227A00u;
    if (runtime->hasFunction(0x227A00u)) {
        auto targetFn = runtime->lookupFunction(0x227A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECDF4u; }
        if (ctx->pc != 0x2ECDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00227A00_0x227a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECDF4u; }
        if (ctx->pc != 0x2ECDF4u) { return; }
    }
    ctx->pc = 0x2ECDF4u;
label_2ecdf4:
    // 0x2ecdf4: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x2ecdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
label_2ecdf8:
    // 0x2ecdf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ecdf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ecdfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ecdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ece00: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ece00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ece04: 0x3e00008  jr          $ra
    ctx->pc = 0x2ECE04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECE04u;
            // 0x2ece08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ECE0Cu;
    // 0x2ece0c: 0x0  nop
    ctx->pc = 0x2ece0cu;
    // NOP
    ctx->pc = 0x2ece10u;
}
