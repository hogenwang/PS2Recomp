#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014BC30
// Address: 0x14bc30 - 0x14bd10
void sub_0014BC30_0x14bc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014BC30_0x14bc30");
#endif

    switch (ctx->pc) {
        case 0x14bc78u: goto label_14bc78;
        case 0x14bca4u: goto label_14bca4;
        case 0x14bcb0u: goto label_14bcb0;
        case 0x14bcd8u: goto label_14bcd8;
        case 0x14bcf0u: goto label_14bcf0;
        default: break;
    }

    ctx->pc = 0x14bc30u;

    // 0x14bc30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14bc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14bc34: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x14bc34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x14bc38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14bc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14bc3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14bc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14bc40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14bc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14bc44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14bc44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bc48: 0x9063e078  lbu         $v1, -0x1F88($v1)
    ctx->pc = 0x14bc48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294959224)));
    // 0x14bc4c: 0x323000ff  andi        $s0, $s1, 0xFF
    ctx->pc = 0x14bc4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x14bc50: 0x50700028  beql        $v1, $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x14BC50u;
    {
        const bool branch_taken_0x14bc50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x14bc50) {
            ctx->pc = 0x14BC54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14BC50u;
            // 0x14bc54: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14BCF4u;
            goto label_14bcf4;
        }
    }
    ctx->pc = 0x14BC58u;
    // 0x14bc58: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x14bc58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x14bc5c: 0x3c050088  lui         $a1, 0x88
    ctx->pc = 0x14bc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)136 << 16));
    // 0x14bc60: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x14bc60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x14bc64: 0x2442e1f0  addiu       $v0, $v0, -0x1E10
    ctx->pc = 0x14bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959600));
    // 0x14bc68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14bc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14bc6c: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x14bc6cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14bc70: 0xc052b7c  jal         func_14ADF0
    ctx->pc = 0x14BC70u;
    SET_GPR_U32(ctx, 31, 0x14BC78u);
    ctx->pc = 0x14BC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BC70u;
            // 0x14bc74: 0x24a56cc0  addiu       $a1, $a1, 0x6CC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14ADF0u;
    if (runtime->hasFunction(0x14ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x14ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BC78u; }
        if (ctx->pc != 0x14BC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014ADF0_0x14adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BC78u; }
        if (ctx->pc != 0x14BC78u) { return; }
    }
    ctx->pc = 0x14BC78u;
label_14bc78:
    // 0x14bc78: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x14bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x14bc7c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x14bc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x14bc80: 0xa051e078  sb          $s1, -0x1F88($v0)
    ctx->pc = 0x14bc80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294959224), (uint8_t)GPR_U32(ctx, 17));
    // 0x14bc84: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x14bc84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14bc88: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x14bc88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x14bc8c: 0x2484ceb0  addiu       $a0, $a0, -0x3150
    ctx->pc = 0x14bc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954672));
    // 0x14bc90: 0x24422220  addiu       $v0, $v0, 0x2220
    ctx->pc = 0x14bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8736));
    // 0x14bc94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14bc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14bc98: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x14bc98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14bc9c: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x14BC9Cu;
    SET_GPR_U32(ctx, 31, 0x14BCA4u);
    ctx->pc = 0x14BCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BC9Cu;
            // 0x14bca0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (runtime->hasFunction(0x1284A8u)) {
        auto targetFn = runtime->lookupFunction(0x1284A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BCA4u; }
        if (ctx->pc != 0x14BCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001284A8_0x1284a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BCA4u; }
        if (ctx->pc != 0x14BCA4u) { return; }
    }
    ctx->pc = 0x14BCA4u;
label_14bca4:
    // 0x14bca4: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x14bca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x14bca8: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x14BCA8u;
    SET_GPR_U32(ctx, 31, 0x14BCB0u);
    ctx->pc = 0x14BCACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BCA8u;
            // 0x14bcac: 0x2484ce38  addiu       $a0, $a0, -0x31C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (runtime->hasFunction(0x1284A8u)) {
        auto targetFn = runtime->lookupFunction(0x1284A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BCB0u; }
        if (ctx->pc != 0x14BCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001284A8_0x1284a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BCB0u; }
        if (ctx->pc != 0x14BCB0u) { return; }
    }
    ctx->pc = 0x14BCB0u;
label_14bcb0:
    // 0x14bcb0: 0x1600000f  bnez        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x14BCB0u;
    {
        const bool branch_taken_0x14bcb0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x14bcb0) {
            ctx->pc = 0x14BCF0u;
            goto label_14bcf0;
        }
    }
    ctx->pc = 0x14BCB8u;
    // 0x14bcb8: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x14bcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x14bcbc: 0x9042b269  lbu         $v0, -0x4D97($v0)
    ctx->pc = 0x14bcbcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947433)));
    // 0x14bcc0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14BCC0u;
    {
        const bool branch_taken_0x14bcc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bcc0) {
            ctx->pc = 0x14BCE0u;
            goto label_14bce0;
        }
    }
    ctx->pc = 0x14BCC8u;
    // 0x14bcc8: 0x3c050050  lui         $a1, 0x50
    ctx->pc = 0x14bcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)80 << 16));
    // 0x14bccc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14bcccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14bcd0: 0xc052b7c  jal         func_14ADF0
    ctx->pc = 0x14BCD0u;
    SET_GPR_U32(ctx, 31, 0x14BCD8u);
    ctx->pc = 0x14BCD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BCD0u;
            // 0x14bcd4: 0x24a572c0  addiu       $a1, $a1, 0x72C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14ADF0u;
    if (runtime->hasFunction(0x14ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x14ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BCD8u; }
        if (ctx->pc != 0x14BCD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014ADF0_0x14adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BCD8u; }
        if (ctx->pc != 0x14BCD8u) { return; }
    }
    ctx->pc = 0x14BCD8u;
label_14bcd8:
    // 0x14bcd8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14BCD8u;
    {
        const bool branch_taken_0x14bcd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bcd8) {
            ctx->pc = 0x14BCF0u;
            goto label_14bcf0;
        }
    }
    ctx->pc = 0x14BCE0u;
label_14bce0:
    // 0x14bce0: 0x3c050050  lui         $a1, 0x50
    ctx->pc = 0x14bce0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)80 << 16));
    // 0x14bce4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x14bce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14bce8: 0xc052b7c  jal         func_14ADF0
    ctx->pc = 0x14BCE8u;
    SET_GPR_U32(ctx, 31, 0x14BCF0u);
    ctx->pc = 0x14BCECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BCE8u;
            // 0x14bcec: 0x24a572c0  addiu       $a1, $a1, 0x72C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14ADF0u;
    if (runtime->hasFunction(0x14ADF0u)) {
        auto targetFn = runtime->lookupFunction(0x14ADF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BCF0u; }
        if (ctx->pc != 0x14BCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014ADF0_0x14adf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BCF0u; }
        if (ctx->pc != 0x14BCF0u) { return; }
    }
    ctx->pc = 0x14BCF0u;
label_14bcf0:
    // 0x14bcf0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14bcf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_14bcf4:
    // 0x14bcf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14bcf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14bcf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14bcf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14bcfc: 0x3e00008  jr          $ra
    ctx->pc = 0x14BCFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BCFCu;
            // 0x14bd00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14BD04u;
    // 0x14bd04: 0x0  nop
    ctx->pc = 0x14bd04u;
    // NOP
    // 0x14bd08: 0x0  nop
    ctx->pc = 0x14bd08u;
    // NOP
    // 0x14bd0c: 0x0  nop
    ctx->pc = 0x14bd0cu;
    // NOP
    ctx->pc = 0x14bd10u;
}
