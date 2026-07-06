#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ECBB0
// Address: 0x1ecbb0 - 0x1ecc58
void sub_001ECBB0_0x1ecbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ECBB0_0x1ecbb0");
#endif

    switch (ctx->pc) {
        case 0x1ecbb0u: goto label_1ecbb0;
        case 0x1ecbb4u: goto label_1ecbb4;
        case 0x1ecbb8u: goto label_1ecbb8;
        case 0x1ecbbcu: goto label_1ecbbc;
        case 0x1ecbc0u: goto label_1ecbc0;
        case 0x1ecbc4u: goto label_1ecbc4;
        case 0x1ecbc8u: goto label_1ecbc8;
        case 0x1ecbccu: goto label_1ecbcc;
        case 0x1ecbd0u: goto label_1ecbd0;
        case 0x1ecbd4u: goto label_1ecbd4;
        case 0x1ecbd8u: goto label_1ecbd8;
        case 0x1ecbdcu: goto label_1ecbdc;
        case 0x1ecbe0u: goto label_1ecbe0;
        case 0x1ecbe4u: goto label_1ecbe4;
        case 0x1ecbe8u: goto label_1ecbe8;
        case 0x1ecbecu: goto label_1ecbec;
        case 0x1ecbf0u: goto label_1ecbf0;
        case 0x1ecbf4u: goto label_1ecbf4;
        case 0x1ecbf8u: goto label_1ecbf8;
        case 0x1ecbfcu: goto label_1ecbfc;
        case 0x1ecc00u: goto label_1ecc00;
        case 0x1ecc04u: goto label_1ecc04;
        case 0x1ecc08u: goto label_1ecc08;
        case 0x1ecc0cu: goto label_1ecc0c;
        case 0x1ecc10u: goto label_1ecc10;
        case 0x1ecc14u: goto label_1ecc14;
        case 0x1ecc18u: goto label_1ecc18;
        case 0x1ecc1cu: goto label_1ecc1c;
        case 0x1ecc20u: goto label_1ecc20;
        case 0x1ecc24u: goto label_1ecc24;
        case 0x1ecc28u: goto label_1ecc28;
        case 0x1ecc2cu: goto label_1ecc2c;
        case 0x1ecc30u: goto label_1ecc30;
        case 0x1ecc34u: goto label_1ecc34;
        case 0x1ecc38u: goto label_1ecc38;
        case 0x1ecc3cu: goto label_1ecc3c;
        case 0x1ecc40u: goto label_1ecc40;
        case 0x1ecc44u: goto label_1ecc44;
        case 0x1ecc48u: goto label_1ecc48;
        case 0x1ecc4cu: goto label_1ecc4c;
        case 0x1ecc50u: goto label_1ecc50;
        case 0x1ecc54u: goto label_1ecc54;
        default: break;
    }

    ctx->pc = 0x1ecbb0u;

label_1ecbb0:
    // 0x1ecbb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ecbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ecbb4:
    // 0x1ecbb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ecbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1ecbb8:
    // 0x1ecbb8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ecbb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ecbbc:
    // 0x1ecbbc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ecbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1ecbc0:
    // 0x1ecbc0: 0x26320078  addiu       $s2, $s1, 0x78
    ctx->pc = 0x1ecbc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_1ecbc4:
    // 0x1ecbc4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ecbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1ecbc8:
    // 0x1ecbc8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1ecbc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ecbcc:
    // 0x1ecbcc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1ecbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1ecbd0:
    // 0x1ecbd0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1ecbd0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ecbd4:
    // 0x1ecbd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ecbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ecbd8:
    // 0x1ecbd8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1ecbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_1ecbdc:
    // 0x1ecbdc: 0x8e220d2c  lw          $v0, 0xD2C($s1)
    ctx->pc = 0x1ecbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3372)));
label_1ecbe0:
    // 0x1ecbe0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1ecbe4:
    if (ctx->pc == 0x1ECBE4u) {
        ctx->pc = 0x1ECBE4u;
            // 0x1ecbe4: 0x8e240d30  lw          $a0, 0xD30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3376)));
        ctx->pc = 0x1ECBE8u;
        goto label_1ecbe8;
    }
    ctx->pc = 0x1ECBE0u;
    {
        const bool branch_taken_0x1ecbe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECBE0u;
            // 0x1ecbe4: 0x8e240d30  lw          $a0, 0xD30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecbe0) {
            ctx->pc = 0x1ECBF0u;
            goto label_1ecbf0;
        }
    }
    ctx->pc = 0x1ECBE8u;
label_1ecbe8:
    // 0x1ecbe8: 0x40f809  jalr        $v0
label_1ecbec:
    if (ctx->pc == 0x1ECBECu) {
        ctx->pc = 0x1ECBF0u;
        goto label_1ecbf0;
    }
    ctx->pc = 0x1ECBE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ECBF0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1ECBF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ECBF0u; }
            if (ctx->pc != 0x1ECBF0u) { return; }
        }
        }
    }
    ctx->pc = 0x1ECBF0u;
label_1ecbf0:
    // 0x1ecbf0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1ecbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ecbf4:
    // 0x1ecbf4: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_1ecbf8:
    if (ctx->pc == 0x1ECBF8u) {
        ctx->pc = 0x1ECBF8u;
            // 0x1ecbf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ECBFCu;
        goto label_1ecbfc;
    }
    ctx->pc = 0x1ECBF4u;
    {
        const bool branch_taken_0x1ecbf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECBF4u;
            // 0x1ecbf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecbf4) {
            ctx->pc = 0x1ECC38u;
            goto label_1ecc38;
        }
    }
    ctx->pc = 0x1ECBFCu;
label_1ecbfc:
    // 0x1ecbfc: 0x2a620801  slti        $v0, $s3, 0x801
    ctx->pc = 0x1ecbfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2049) ? 1 : 0);
label_1ecc00:
    // 0x1ecc00: 0x24100800  addiu       $s0, $zero, 0x800
    ctx->pc = 0x1ecc00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_1ecc04:
    // 0x1ecc04: 0x262800b  movn        $s0, $s3, $v0
    ctx->pc = 0x1ecc04u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 19));
label_1ecc08:
    // 0x1ecc08: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ecc08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ecc0c:
    // 0x1ecc0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ecc0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ecc10:
    // 0x1ecc10: 0xc0757de  jal         func_1D5F78
label_1ecc14:
    if (ctx->pc == 0x1ECC14u) {
        ctx->pc = 0x1ECC14u;
            // 0x1ecc14: 0x2624010c  addiu       $a0, $s1, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 268));
        ctx->pc = 0x1ECC18u;
        goto label_1ecc18;
    }
    ctx->pc = 0x1ECC10u;
    SET_GPR_U32(ctx, 31, 0x1ECC18u);
    ctx->pc = 0x1ECC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECC10u;
            // 0x1ecc14: 0x2624010c  addiu       $a0, $s1, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 268));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F78u;
    if (runtime->hasFunction(0x1D5F78u)) {
        auto targetFn = runtime->lookupFunction(0x1D5F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECC18u; }
        if (ctx->pc != 0x1ECC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5F78_0x1d5f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECC18u; }
        if (ctx->pc != 0x1ECC18u) { return; }
    }
    ctx->pc = 0x1ECC18u;
label_1ecc18:
    // 0x1ecc18: 0xae500090  sw          $s0, 0x90($s2)
    ctx->pc = 0x1ecc18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 16));
label_1ecc1c:
    // 0x1ecc1c: 0xc07b388  jal         func_1ECE20
label_1ecc20:
    if (ctx->pc == 0x1ECC20u) {
        ctx->pc = 0x1ECC20u;
            // 0x1ecc20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ECC24u;
        goto label_1ecc24;
    }
    ctx->pc = 0x1ECC1Cu;
    SET_GPR_U32(ctx, 31, 0x1ECC24u);
    ctx->pc = 0x1ECC20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECC1Cu;
            // 0x1ecc20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE20u;
    if (runtime->hasFunction(0x1ECE20u)) {
        auto targetFn = runtime->lookupFunction(0x1ECE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECC24u; }
        if (ctx->pc != 0x1ECC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ECE20_0x1ece20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECC24u; }
        if (ctx->pc != 0x1ECC24u) { return; }
    }
    ctx->pc = 0x1ECC24u;
label_1ecc24:
    // 0x1ecc24: 0xc07b510  jal         func_1ED440
label_1ecc28:
    if (ctx->pc == 0x1ECC28u) {
        ctx->pc = 0x1ECC28u;
            // 0x1ecc28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ECC2Cu;
        goto label_1ecc2c;
    }
    ctx->pc = 0x1ECC24u;
    SET_GPR_U32(ctx, 31, 0x1ECC2Cu);
    ctx->pc = 0x1ECC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECC24u;
            // 0x1ecc28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED440u;
    if (runtime->hasFunction(0x1ED440u)) {
        auto targetFn = runtime->lookupFunction(0x1ED440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECC2Cu; }
        if (ctx->pc != 0x1ECC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED440_0x1ed440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECC2Cu; }
        if (ctx->pc != 0x1ECC2Cu) { return; }
    }
    ctx->pc = 0x1ECC2Cu;
label_1ecc2c:
    // 0x1ecc2c: 0xc07b316  jal         func_1ECC58
label_1ecc30:
    if (ctx->pc == 0x1ECC30u) {
        ctx->pc = 0x1ECC30u;
            // 0x1ecc30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ECC34u;
        goto label_1ecc34;
    }
    ctx->pc = 0x1ECC2Cu;
    SET_GPR_U32(ctx, 31, 0x1ECC34u);
    ctx->pc = 0x1ECC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECC2Cu;
            // 0x1ecc30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECC58u;
    if (runtime->hasFunction(0x1ECC58u)) {
        auto targetFn = runtime->lookupFunction(0x1ECC58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECC34u; }
        if (ctx->pc != 0x1ECC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ECC58_0x1ecc58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECC34u; }
        if (ctx->pc != 0x1ECC34u) { return; }
    }
    ctx->pc = 0x1ECC34u;
label_1ecc34:
    // 0x1ecc34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ecc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ecc38:
    // 0x1ecc38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ecc38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ecc3c:
    // 0x1ecc3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ecc3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1ecc40:
    // 0x1ecc40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ecc40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ecc44:
    // 0x1ecc44: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ecc44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1ecc48:
    // 0x1ecc48: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ecc48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ecc4c:
    // 0x1ecc4c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1ecc4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1ecc50:
    // 0x1ecc50: 0x3e00008  jr          $ra
label_1ecc54:
    if (ctx->pc == 0x1ECC54u) {
        ctx->pc = 0x1ECC54u;
            // 0x1ecc54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1ECC58u;
        goto label_fallthrough_0x1ecc50;
    }
    ctx->pc = 0x1ECC50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECC50u;
            // 0x1ecc54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1ecc50:
    ctx->pc = 0x1ECC58u;
    ctx->pc = 0x1ecc58u;
}
