#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014BA80
// Address: 0x14ba80 - 0x14bb50
void sub_0014BA80_0x14ba80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014BA80_0x14ba80");
#endif

    switch (ctx->pc) {
        case 0x14bac4u: goto label_14bac4;
        case 0x14bae8u: goto label_14bae8;
        case 0x14bb14u: goto label_14bb14;
        case 0x14bb30u: goto label_14bb30;
        default: break;
    }

    ctx->pc = 0x14ba80u;

    // 0x14ba80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14ba80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14ba84: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14ba84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14ba88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14ba88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14ba8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14ba8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14ba90: 0x8c425d08  lw          $v0, 0x5D08($v0)
    ctx->pc = 0x14ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23816)));
    // 0x14ba94: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x14BA94u;
    {
        const bool branch_taken_0x14ba94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ba94) {
            ctx->pc = 0x14BA98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14BA94u;
            // 0x14ba98: 0x41e3c  dsll32      $v1, $a0, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14BAF0u;
            goto label_14baf0;
        }
    }
    ctx->pc = 0x14BA9Cu;
    // 0x14ba9c: 0x4863c  dsll32      $s0, $a0, 24
    ctx->pc = 0x14ba9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) << (32 + 24));
    // 0x14baa0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x14baa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x14baa4: 0x10863f  dsra32      $s0, $s0, 24
    ctx->pc = 0x14baa4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
    // 0x14baa8: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x14baa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x14baac: 0x244221f0  addiu       $v0, $v0, 0x21F0
    ctx->pc = 0x14baacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8688));
    // 0x14bab0: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x14bab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x14bab4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14bab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14bab8: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x14bab8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14babc: 0xc052b2c  jal         func_14ACB0
    ctx->pc = 0x14BABCu;
    SET_GPR_U32(ctx, 31, 0x14BAC4u);
    ctx->pc = 0x14BAC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BABCu;
            // 0x14bac0: 0x24a5f2c0  addiu       $a1, $a1, -0xD40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14ACB0u;
    if (runtime->hasFunction(0x14ACB0u)) {
        auto targetFn = runtime->lookupFunction(0x14ACB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BAC4u; }
        if (ctx->pc != 0x14BAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014ACB0_0x14acb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BAC4u; }
        if (ctx->pc != 0x14BAC4u) { return; }
    }
    ctx->pc = 0x14BAC4u;
label_14bac4:
    // 0x14bac4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x14bac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x14bac8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x14bac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x14bacc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x14baccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14bad0: 0x24422150  addiu       $v0, $v0, 0x2150
    ctx->pc = 0x14bad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8528));
    // 0x14bad4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14bad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14bad8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14bad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14badc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x14badcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14bae0: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x14BAE0u;
    SET_GPR_U32(ctx, 31, 0x14BAE8u);
    ctx->pc = 0x14BAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BAE0u;
            // 0x14bae4: 0x2484ceb0  addiu       $a0, $a0, -0x3150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (runtime->hasFunction(0x1284A8u)) {
        auto targetFn = runtime->lookupFunction(0x1284A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BAE8u; }
        if (ctx->pc != 0x14BAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001284A8_0x1284a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BAE8u; }
        if (ctx->pc != 0x14BAE8u) { return; }
    }
    ctx->pc = 0x14BAE8u;
label_14bae8:
    // 0x14bae8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x14BAE8u;
    {
        const bool branch_taken_0x14bae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BAE8u;
            // 0x14baec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bae8) {
            ctx->pc = 0x14BB34u;
            goto label_14bb34;
        }
    }
    ctx->pc = 0x14BAF0u;
label_14baf0:
    // 0x14baf0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x14baf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x14baf4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x14baf4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x14baf8: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x14baf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x14bafc: 0x244221f0  addiu       $v0, $v0, 0x21F0
    ctx->pc = 0x14bafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8688));
    // 0x14bb00: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x14bb00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x14bb04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14bb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14bb08: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x14bb08u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14bb0c: 0xc052b48  jal         func_14AD20
    ctx->pc = 0x14BB0Cu;
    SET_GPR_U32(ctx, 31, 0x14BB14u);
    ctx->pc = 0x14BB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BB0Cu;
            // 0x14bb10: 0x24a5f2c0  addiu       $a1, $a1, -0xD40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14AD20u;
    if (runtime->hasFunction(0x14AD20u)) {
        auto targetFn = runtime->lookupFunction(0x14AD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BB14u; }
        if (ctx->pc != 0x14BB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014AD20_0x14ad20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BB14u; }
        if (ctx->pc != 0x14BB14u) { return; }
    }
    ctx->pc = 0x14BB14u;
label_14bb14:
    // 0x14bb14: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14BB14u;
    {
        const bool branch_taken_0x14bb14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14bb14) {
            ctx->pc = 0x14BB24u;
            goto label_14bb24;
        }
    }
    ctx->pc = 0x14BB1Cu;
    // 0x14bb1c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14BB1Cu;
    {
        const bool branch_taken_0x14bb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BB20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BB1Cu;
            // 0x14bb20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bb1c) {
            ctx->pc = 0x14BB34u;
            goto label_14bb34;
        }
    }
    ctx->pc = 0x14BB24u;
label_14bb24:
    // 0x14bb24: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x14bb24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x14bb28: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x14BB28u;
    SET_GPR_U32(ctx, 31, 0x14BB30u);
    ctx->pc = 0x14BB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BB28u;
            // 0x14bb2c: 0x2484ce38  addiu       $a0, $a0, -0x31C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (runtime->hasFunction(0x1284A8u)) {
        auto targetFn = runtime->lookupFunction(0x1284A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BB30u; }
        if (ctx->pc != 0x14BB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001284A8_0x1284a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BB30u; }
        if (ctx->pc != 0x14BB30u) { return; }
    }
    ctx->pc = 0x14BB30u;
label_14bb30:
    // 0x14bb30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14bb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14bb34:
    // 0x14bb34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14bb34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14bb38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14bb38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14bb3c: 0x3e00008  jr          $ra
    ctx->pc = 0x14BB3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BB3Cu;
            // 0x14bb40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14BB44u;
    // 0x14bb44: 0x0  nop
    ctx->pc = 0x14bb44u;
    // NOP
    // 0x14bb48: 0x0  nop
    ctx->pc = 0x14bb48u;
    // NOP
    // 0x14bb4c: 0x0  nop
    ctx->pc = 0x14bb4cu;
    // NOP
    ctx->pc = 0x14bb50u;
}
