#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FEE00
// Address: 0x1fee00 - 0x1feec8
void sub_001FEE00_0x1fee00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEE00_0x1fee00");
#endif

    switch (ctx->pc) {
        case 0x1fee58u: goto label_1fee58;
        case 0x1fee74u: goto label_1fee74;
        case 0x1fee8cu: goto label_1fee8c;
        default: break;
    }

    ctx->pc = 0x1fee00u;

    // 0x1fee00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fee00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fee04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fee04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fee08: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fee08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fee0c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1fee0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fee10: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1fee10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1fee14: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1fee14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fee18: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1fee18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1fee1c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1fee1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fee20: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1fee20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1fee24: 0x3c1601c1  lui         $s6, 0x1C1
    ctx->pc = 0x1fee24u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)449 << 16));
    // 0x1fee28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fee28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fee2c: 0x26c49b98  addiu       $a0, $s6, -0x6468
    ctx->pc = 0x1fee2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941592));
    // 0x1fee30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fee30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fee34: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fee34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1fee38: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1fee38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1fee3c: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x1fee3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fee40: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1fee40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1fee44: 0x71182a  slt         $v1, $v1, $s1
    ctx->pc = 0x1fee44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1fee48: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FEE48u;
    {
        const bool branch_taken_0x1fee48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEE48u;
            // 0x1fee4c: 0x8c930008  lw          $s3, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fee48) {
            ctx->pc = 0x1FEEA0u;
            goto label_1feea0;
        }
    }
    ctx->pc = 0x1FEE50u;
    // 0x1fee50: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1fee50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fee54: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x1fee54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1fee58:
    // 0x1fee58: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FEE58u;
    {
        const bool branch_taken_0x1fee58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fee58) {
            ctx->pc = 0x1FEE5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEE58u;
            // 0x1fee5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FEE80u;
            goto label_1fee80;
        }
    }
    ctx->pc = 0x1FEE60u;
    // 0x1fee60: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1fee60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fee64: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fee64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fee68: 0x2629021  addu        $s2, $s3, $v0
    ctx->pc = 0x1fee68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1fee6c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1FEE6Cu;
    SET_GPR_U32(ctx, 31, 0x1FEE74u);
    ctx->pc = 0x1FEE70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEE6Cu;
            // 0x1fee70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (runtime->hasFunction(0x1FEF98u)) {
        auto targetFn = runtime->lookupFunction(0x1FEF98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEE74u; }
        if (ctx->pc != 0x1FEE74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FEF98_0x1fef98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEE74u; }
        if (ctx->pc != 0x1FEE74u) { return; }
    }
    ctx->pc = 0x1FEE74u;
label_1fee74:
    // 0x1fee74: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1FEE74u;
    {
        const bool branch_taken_0x1fee74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEE74u;
            // 0x1fee78: 0x211102a  slt         $v0, $s0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fee74) {
            ctx->pc = 0x1FEE58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fee58;
        }
    }
    ctx->pc = 0x1FEE7Cu;
    // 0x1fee7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fee7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fee80:
    // 0x1fee80: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1fee80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fee84: 0xc07fbcc  jal         func_1FEF30
    ctx->pc = 0x1FEE84u;
    SET_GPR_U32(ctx, 31, 0x1FEE8Cu);
    ctx->pc = 0x1FEE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEE84u;
            // 0x1fee88: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF30u;
    if (runtime->hasFunction(0x1FEF30u)) {
        auto targetFn = runtime->lookupFunction(0x1FEF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEE8Cu; }
        if (ctx->pc != 0x1FEE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FEF30_0x1fef30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEE8Cu; }
        if (ctx->pc != 0x1FEE8Cu) { return; }
    }
    ctx->pc = 0x1FEE8Cu;
label_1fee8c:
    // 0x1fee8c: 0x26c49b98  addiu       $a0, $s6, -0x6468
    ctx->pc = 0x1fee8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941592));
    // 0x1fee90: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1fee90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1fee94: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1fee94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fee98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fee98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fee9c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1fee9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1feea0:
    // 0x1feea0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1feea0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1feea4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1feea4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1feea8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1feea8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1feeac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1feeacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1feeb0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1feeb0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1feeb4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1feeb4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1feeb8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1feeb8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1feebc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1feebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1feec0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEEC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEEC0u;
            // 0x1feec4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FEEC8u;
    ctx->pc = 0x1feec8u;
}
