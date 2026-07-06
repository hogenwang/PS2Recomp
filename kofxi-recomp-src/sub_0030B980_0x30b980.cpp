#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030B980
// Address: 0x30b980 - 0x30ba50
void sub_0030B980_0x30b980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030B980_0x30b980");
#endif

    switch (ctx->pc) {
        case 0x30b9b0u: goto label_30b9b0;
        case 0x30b9e4u: goto label_30b9e4;
        case 0x30ba04u: goto label_30ba04;
        case 0x30ba18u: goto label_30ba18;
        default: break;
    }

    ctx->pc = 0x30b980u;

    // 0x30b980: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x30b980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x30b984: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x30b984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x30b988: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30b988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30b98c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30b98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30b990: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30b990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30b994: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30b994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30b998: 0x8cb00010  lw          $s0, 0x10($a1)
    ctx->pc = 0x30b998u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x30b99c: 0x9203012f  lbu         $v1, 0x12F($s0)
    ctx->pc = 0x30b99cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 303)));
    // 0x30b9a0: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x30B9A0u;
    {
        const bool branch_taken_0x30b9a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B9A0u;
            // 0x30b9a4: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b9a0) {
            ctx->pc = 0x30BA28u;
            goto label_30ba28;
        }
    }
    ctx->pc = 0x30B9A8u;
    // 0x30b9a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x30b9a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b9ac: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x30b9acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30b9b0:
    // 0x30b9b0: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x30b9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x30b9b4: 0x9063012c  lbu         $v1, 0x12C($v1)
    ctx->pc = 0x30b9b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 300)));
    // 0x30b9b8: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x30B9B8u;
    {
        const bool branch_taken_0x30b9b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b9b8) {
            ctx->pc = 0x30BA18u;
            goto label_30ba18;
        }
    }
    ctx->pc = 0x30B9C0u;
    // 0x30b9c0: 0x8e6400b0  lw          $a0, 0xB0($s3)
    ctx->pc = 0x30b9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x30b9c4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x30b9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30b9c8: 0x8e250140  lw          $a1, 0x140($s1)
    ctx->pc = 0x30b9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x30b9cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30b9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30b9d0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x30b9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x30b9d4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30B9D4u;
    {
        const bool branch_taken_0x30b9d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30B9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B9D4u;
            // 0x30b9d8: 0xa42821  addu        $a1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b9d4) {
            ctx->pc = 0x30B9F0u;
            goto label_30b9f0;
        }
    }
    ctx->pc = 0x30B9DCu;
    // 0x30b9dc: 0xc0c2e94  jal         func_30BA50
    ctx->pc = 0x30B9DCu;
    SET_GPR_U32(ctx, 31, 0x30B9E4u);
    ctx->pc = 0x30B9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B9DCu;
            // 0x30b9e0: 0x260400d0  addiu       $a0, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30BA50u;
    if (runtime->hasFunction(0x30BA50u)) {
        auto targetFn = runtime->lookupFunction(0x30BA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B9E4u; }
        if (ctx->pc != 0x30B9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030BA50_0x30ba50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B9E4u; }
        if (ctx->pc != 0x30B9E4u) { return; }
    }
    ctx->pc = 0x30B9E4u;
label_30b9e4:
    // 0x30b9e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x30B9E4u;
    {
        const bool branch_taken_0x30b9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b9e4) {
            ctx->pc = 0x30BA18u;
            goto label_30ba18;
        }
    }
    ctx->pc = 0x30B9ECu;
    // 0x30b9ec: 0x0  nop
    ctx->pc = 0x30b9ecu;
    // NOP
label_30b9f0:
    // 0x30b9f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30b9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30b9f4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30B9F4u;
    {
        const bool branch_taken_0x30b9f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30b9f4) {
            ctx->pc = 0x30BA10u;
            goto label_30ba10;
        }
    }
    ctx->pc = 0x30B9FCu;
    // 0x30b9fc: 0xc0c2e94  jal         func_30BA50
    ctx->pc = 0x30B9FCu;
    SET_GPR_U32(ctx, 31, 0x30BA04u);
    ctx->pc = 0x30BA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B9FCu;
            // 0x30ba00: 0x260400c0  addiu       $a0, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30BA50u;
    if (runtime->hasFunction(0x30BA50u)) {
        auto targetFn = runtime->lookupFunction(0x30BA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BA04u; }
        if (ctx->pc != 0x30BA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030BA50_0x30ba50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BA04u; }
        if (ctx->pc != 0x30BA04u) { return; }
    }
    ctx->pc = 0x30BA04u;
label_30ba04:
    // 0x30ba04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30BA04u;
    {
        const bool branch_taken_0x30ba04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ba04) {
            ctx->pc = 0x30BA18u;
            goto label_30ba18;
        }
    }
    ctx->pc = 0x30BA0Cu;
    // 0x30ba0c: 0x0  nop
    ctx->pc = 0x30ba0cu;
    // NOP
label_30ba10:
    // 0x30ba10: 0xc0c2e94  jal         func_30BA50
    ctx->pc = 0x30BA10u;
    SET_GPR_U32(ctx, 31, 0x30BA18u);
    ctx->pc = 0x30BA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30BA10u;
            // 0x30ba14: 0x260400b0  addiu       $a0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30BA50u;
    if (runtime->hasFunction(0x30BA50u)) {
        auto targetFn = runtime->lookupFunction(0x30BA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BA18u; }
        if (ctx->pc != 0x30BA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030BA50_0x30ba50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30BA18u; }
        if (ctx->pc != 0x30BA18u) { return; }
    }
    ctx->pc = 0x30BA18u;
label_30ba18:
    // 0x30ba18: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x30ba18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x30ba1c: 0x2e430003  sltiu       $v1, $s2, 0x3
    ctx->pc = 0x30ba1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x30ba20: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x30BA20u;
    {
        const bool branch_taken_0x30ba20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BA20u;
            // 0x30ba24: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ba20) {
            ctx->pc = 0x30B9B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30b9b0;
        }
    }
    ctx->pc = 0x30BA28u;
label_30ba28:
    // 0x30ba28: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x30ba28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30ba2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30ba2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30ba30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30ba30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30ba34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30ba34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30ba38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30ba38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30ba3c: 0x3e00008  jr          $ra
    ctx->pc = 0x30BA3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30BA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30BA3Cu;
            // 0x30ba40: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30BA44u;
    // 0x30ba44: 0x0  nop
    ctx->pc = 0x30ba44u;
    // NOP
    // 0x30ba48: 0x0  nop
    ctx->pc = 0x30ba48u;
    // NOP
    // 0x30ba4c: 0x0  nop
    ctx->pc = 0x30ba4cu;
    // NOP
    ctx->pc = 0x30ba50u;
}
