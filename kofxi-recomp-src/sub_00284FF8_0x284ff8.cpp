#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00284FF8
// Address: 0x284ff8 - 0x2850c0
void sub_00284FF8_0x284ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284FF8_0x284ff8");
#endif

    switch (ctx->pc) {
        case 0x284ff8u: goto label_284ff8;
        case 0x284ffcu: goto label_284ffc;
        case 0x285000u: goto label_285000;
        case 0x285004u: goto label_285004;
        case 0x285008u: goto label_285008;
        case 0x28500cu: goto label_28500c;
        case 0x285010u: goto label_285010;
        case 0x285014u: goto label_285014;
        case 0x285018u: goto label_285018;
        case 0x28501cu: goto label_28501c;
        case 0x285020u: goto label_285020;
        case 0x285024u: goto label_285024;
        case 0x285028u: goto label_285028;
        case 0x28502cu: goto label_28502c;
        case 0x285030u: goto label_285030;
        case 0x285034u: goto label_285034;
        case 0x285038u: goto label_285038;
        case 0x28503cu: goto label_28503c;
        case 0x285040u: goto label_285040;
        case 0x285044u: goto label_285044;
        case 0x285048u: goto label_285048;
        case 0x28504cu: goto label_28504c;
        case 0x285050u: goto label_285050;
        case 0x285054u: goto label_285054;
        case 0x285058u: goto label_285058;
        case 0x28505cu: goto label_28505c;
        case 0x285060u: goto label_285060;
        case 0x285064u: goto label_285064;
        case 0x285068u: goto label_285068;
        case 0x28506cu: goto label_28506c;
        case 0x285070u: goto label_285070;
        case 0x285074u: goto label_285074;
        case 0x285078u: goto label_285078;
        case 0x28507cu: goto label_28507c;
        case 0x285080u: goto label_285080;
        case 0x285084u: goto label_285084;
        case 0x285088u: goto label_285088;
        case 0x28508cu: goto label_28508c;
        case 0x285090u: goto label_285090;
        case 0x285094u: goto label_285094;
        case 0x285098u: goto label_285098;
        case 0x28509cu: goto label_28509c;
        case 0x2850a0u: goto label_2850a0;
        case 0x2850a4u: goto label_2850a4;
        case 0x2850a8u: goto label_2850a8;
        case 0x2850acu: goto label_2850ac;
        case 0x2850b0u: goto label_2850b0;
        case 0x2850b4u: goto label_2850b4;
        case 0x2850b8u: goto label_2850b8;
        case 0x2850bcu: goto label_2850bc;
        default: break;
    }

    ctx->pc = 0x284ff8u;

label_284ff8:
    // 0x284ff8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x284ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_284ffc:
    // 0x284ffc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x284ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_285000:
    // 0x285000: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x285000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_285004:
    // 0x285004: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x285004u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_285008:
    // 0x285008: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x285008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_28500c:
    // 0x28500c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28500cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_285010:
    // 0x285010: 0xc0a3dd0  jal         func_28F740
label_285014:
    if (ctx->pc == 0x285014u) {
        ctx->pc = 0x285014u;
            // 0x285014: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285018u;
        goto label_285018;
    }
    ctx->pc = 0x285010u;
    SET_GPR_U32(ctx, 31, 0x285018u);
    ctx->pc = 0x285014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285010u;
            // 0x285014: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F740u;
    if (runtime->hasFunction(0x28F740u)) {
        auto targetFn = runtime->lookupFunction(0x28F740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285018u; }
        if (ctx->pc != 0x285018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F740_0x28f740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285018u; }
        if (ctx->pc != 0x285018u) { return; }
    }
    ctx->pc = 0x285018u;
label_285018:
    // 0x285018: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x285018u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28501c:
    // 0x28501c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x28501cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_285020:
    // 0x285020: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x285020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_285024:
    // 0x285024: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x285024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_285028:
    // 0x285028: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x285028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_28502c:
    // 0x28502c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x28502cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_285030:
    // 0x285030: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x285030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_285034:
    // 0x285034: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x285034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_285038:
    // 0x285038: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x285038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_28503c:
    // 0x28503c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x28503cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_285040:
    // 0x285040: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x285040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_285044:
    // 0x285044: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x285044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_285048:
    // 0x285048: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x285048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_28504c:
    // 0x28504c: 0xfe000030  sd          $zero, 0x30($s0)
    ctx->pc = 0x28504cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 0));
label_285050:
    // 0x285050: 0xfe000038  sd          $zero, 0x38($s0)
    ctx->pc = 0x285050u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 0));
label_285054:
    // 0x285054: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x285054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_285058:
    // 0x285058: 0xc0a8bf6  jal         func_2A2FD8
label_28505c:
    if (ctx->pc == 0x28505Cu) {
        ctx->pc = 0x28505Cu;
            // 0x28505c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x285060u;
        goto label_285060;
    }
    ctx->pc = 0x285058u;
    SET_GPR_U32(ctx, 31, 0x285060u);
    ctx->pc = 0x28505Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285058u;
            // 0x28505c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285060u; }
        if (ctx->pc != 0x285060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285060u; }
        if (ctx->pc != 0x285060u) { return; }
    }
    ctx->pc = 0x285060u;
label_285060:
    // 0x285060: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_285064:
    if (ctx->pc == 0x285064u) {
        ctx->pc = 0x285064u;
            // 0x285064: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->pc = 0x285068u;
        goto label_285068;
    }
    ctx->pc = 0x285060u;
    {
        const bool branch_taken_0x285060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285060u;
            // 0x285064: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285060) {
            ctx->pc = 0x285070u;
            goto label_285070;
        }
    }
    ctx->pc = 0x285068u;
label_285068:
    // 0x285068: 0x1000000e  b           . + 4 + (0xE << 2)
label_28506c:
    if (ctx->pc == 0x28506Cu) {
        ctx->pc = 0x28506Cu;
            // 0x28506c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285070u;
        goto label_285070;
    }
    ctx->pc = 0x285068u;
    {
        const bool branch_taken_0x285068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28506Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285068u;
            // 0x28506c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285068) {
            ctx->pc = 0x2850A4u;
            goto label_2850a4;
        }
    }
    ctx->pc = 0x285070u;
label_285070:
    // 0x285070: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x285070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_285074:
    // 0x285074: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x285074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_285078:
    // 0x285078: 0xc0a5d8e  jal         func_297638
label_28507c:
    if (ctx->pc == 0x28507Cu) {
        ctx->pc = 0x28507Cu;
            // 0x28507c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285080u;
        goto label_285080;
    }
    ctx->pc = 0x285078u;
    SET_GPR_U32(ctx, 31, 0x285080u);
    ctx->pc = 0x28507Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285078u;
            // 0x28507c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297638u;
    if (runtime->hasFunction(0x297638u)) {
        auto targetFn = runtime->lookupFunction(0x297638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285080u; }
        if (ctx->pc != 0x285080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297638_0x297638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285080u; }
        if (ctx->pc != 0x285080u) { return; }
    }
    ctx->pc = 0x285080u;
label_285080:
    // 0x285080: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x285080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_285084:
    // 0x285084: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_285088:
    if (ctx->pc == 0x285088u) {
        ctx->pc = 0x285088u;
            // 0x285088: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x28508Cu;
        goto label_28508c;
    }
    ctx->pc = 0x285084u;
    {
        const bool branch_taken_0x285084 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x285084) {
            ctx->pc = 0x285088u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x285084u;
            // 0x285088: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2850A4u;
            goto label_2850a4;
        }
    }
    ctx->pc = 0x28508Cu;
label_28508c:
    // 0x28508c: 0xa0f809  jalr        $a1
label_285090:
    if (ctx->pc == 0x285090u) {
        ctx->pc = 0x285090u;
            // 0x285090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285094u;
        goto label_285094;
    }
    ctx->pc = 0x28508Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x285094u);
        ctx->pc = 0x285090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28508Cu;
            // 0x285090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x285094u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x285094u; }
            if (ctx->pc != 0x285094u) { return; }
        }
        }
    }
    ctx->pc = 0x285094u;
label_285094:
    // 0x285094: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x285094u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_285098:
    // 0x285098: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_28509c:
    if (ctx->pc == 0x28509Cu) {
        ctx->pc = 0x28509Cu;
            // 0x28509c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2850A0u;
        goto label_2850a0;
    }
    ctx->pc = 0x285098u;
    {
        const bool branch_taken_0x285098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28509Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285098u;
            // 0x28509c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285098) {
            ctx->pc = 0x2850A4u;
            goto label_2850a4;
        }
    }
    ctx->pc = 0x2850A0u;
label_2850a0:
    // 0x2850a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2850a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2850a4:
    // 0x2850a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2850a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2850a8:
    // 0x2850a8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2850a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2850ac:
    // 0x2850ac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2850acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2850b0:
    // 0x2850b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2850b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2850b4:
    // 0x2850b4: 0x3e00008  jr          $ra
label_2850b8:
    if (ctx->pc == 0x2850B8u) {
        ctx->pc = 0x2850B8u;
            // 0x2850b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2850BCu;
        goto label_2850bc;
    }
    ctx->pc = 0x2850B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2850B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2850B4u;
            // 0x2850b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2850BCu;
label_2850bc:
    // 0x2850bc: 0x0  nop
    ctx->pc = 0x2850bcu;
    // NOP
    ctx->pc = 0x2850c0u;
}
