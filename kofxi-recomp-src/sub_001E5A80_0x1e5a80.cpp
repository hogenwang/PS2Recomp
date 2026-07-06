#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E5A80
// Address: 0x1e5a80 - 0x1e5b98
void sub_001E5A80_0x1e5a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5A80_0x1e5a80");
#endif

    switch (ctx->pc) {
        case 0x1e5a9cu: goto label_1e5a9c;
        case 0x1e5ac8u: goto label_1e5ac8;
        case 0x1e5afcu: goto label_1e5afc;
        case 0x1e5b10u: goto label_1e5b10;
        case 0x1e5b1cu: goto label_1e5b1c;
        case 0x1e5b28u: goto label_1e5b28;
        case 0x1e5b40u: goto label_1e5b40;
        case 0x1e5b70u: goto label_1e5b70;
        case 0x1e5b7cu: goto label_1e5b7c;
        case 0x1e5b90u: goto label_1e5b90;
        default: break;
    }

    ctx->pc = 0x1e5a80u;

    // 0x1e5a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e5a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e5a84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e5a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e5a88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e5a88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5a8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e5a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e5a90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e5a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e5a94: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E5A94u;
    SET_GPR_U32(ctx, 31, 0x1E5A9Cu);
    ctx->pc = 0x1E5A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5A94u;
            // 0x1e5a98: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (runtime->hasFunction(0x1E2960u)) {
        auto targetFn = runtime->lookupFunction(0x1E2960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5A9Cu; }
        if (ctx->pc != 0x1E5A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2960_0x1e2960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5A9Cu; }
        if (ctx->pc != 0x1E5A9Cu) { return; }
    }
    ctx->pc = 0x1E5A9Cu;
label_1e5a9c:
    // 0x1e5a9c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e5a9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5aa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5aa4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e5aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e5aa8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E5AA8u;
    {
        const bool branch_taken_0x1e5aa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E5AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5AA8u;
            // 0x1e5aac: 0x2484e3c8  addiu       $a0, $a0, -0x1C38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5aa8) {
            ctx->pc = 0x1E5AC8u;
            goto label_1e5ac8;
        }
    }
    ctx->pc = 0x1E5AB0u;
    // 0x1e5ab0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e5ab0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5ab4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e5ab4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e5ab8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e5ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5abc: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E5ABCu;
    ctx->pc = 0x1E5AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5ABCu;
            // 0x1e5ac0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E5AC4u;
    // 0x1e5ac4: 0x0  nop
    ctx->pc = 0x1e5ac4u;
    // NOP
label_1e5ac8:
    // 0x1e5ac8: 0x82020070  lb          $v0, 0x70($s0)
    ctx->pc = 0x1e5ac8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1e5acc: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E5ACCu;
    {
        const bool branch_taken_0x1e5acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E5AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5ACCu;
            // 0x1e5ad0: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5acc) {
            ctx->pc = 0x1E5AE0u;
            goto label_1e5ae0;
        }
    }
    ctx->pc = 0x1E5AD4u;
    // 0x1e5ad4: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E5AD4u;
    {
        const bool branch_taken_0x1e5ad4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5ad4) {
            ctx->pc = 0x1E5AD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5AD4u;
            // 0x1e5ad8: 0xa2020071  sb          $v0, 0x71($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E5ADCu;
            goto label_1e5adc;
        }
    }
    ctx->pc = 0x1E5ADCu;
label_1e5adc:
    // 0x1e5adc: 0x82020070  lb          $v0, 0x70($s0)
    ctx->pc = 0x1e5adcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
label_1e5ae0:
    // 0x1e5ae0: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1E5AE0u;
    {
        const bool branch_taken_0x1e5ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5ae0) {
            ctx->pc = 0x1E5AE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5AE0u;
            // 0x1e5ae4: 0x26040488  addiu       $a0, $s0, 0x488 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1160));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E5B14u;
            goto label_1e5b14;
        }
    }
    ctx->pc = 0x1E5AE8u;
    // 0x1e5ae8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5aec: 0x56220009  bnel        $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E5AECu;
    {
        const bool branch_taken_0x1e5aec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e5aec) {
            ctx->pc = 0x1E5AF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5AECu;
            // 0x1e5af0: 0x26040488  addiu       $a0, $s0, 0x488 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1160));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E5B14u;
            goto label_1e5b14;
        }
    }
    ctx->pc = 0x1E5AF4u;
    // 0x1e5af4: 0xc07ae14  jal         func_1EB850
    ctx->pc = 0x1E5AF4u;
    SET_GPR_U32(ctx, 31, 0x1E5AFCu);
    ctx->pc = 0x1EB850u;
    if (runtime->hasFunction(0x1EB850u)) {
        auto targetFn = runtime->lookupFunction(0x1EB850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5AFCu; }
        if (ctx->pc != 0x1E5AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EB850_0x1eb850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5AFCu; }
        if (ctx->pc != 0x1E5AFCu) { return; }
    }
    ctx->pc = 0x1E5AFCu;
label_1e5afc:
    // 0x1e5afc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e5afcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e5b00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E5B00u;
    {
        const bool branch_taken_0x1e5b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5B00u;
            // 0x1e5b04: 0x2484e3f8  addiu       $a0, $a0, -0x1C08 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5b00) {
            ctx->pc = 0x1E5B10u;
            goto label_1e5b10;
        }
    }
    ctx->pc = 0x1E5B08u;
    // 0x1e5b08: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E5B08u;
    SET_GPR_U32(ctx, 31, 0x1E5B10u);
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5B10u; }
        if (ctx->pc != 0x1E5B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5B10u; }
        if (ctx->pc != 0x1E5B10u) { return; }
    }
    ctx->pc = 0x1E5B10u;
label_1e5b10:
    // 0x1e5b10: 0x26040488  addiu       $a0, $s0, 0x488
    ctx->pc = 0x1e5b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1160));
label_1e5b14:
    // 0x1e5b14: 0xc079932  jal         func_1E64C8
    ctx->pc = 0x1E5B14u;
    SET_GPR_U32(ctx, 31, 0x1E5B1Cu);
    ctx->pc = 0x1E5B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5B14u;
            // 0x1e5b18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E64C8u;
    if (runtime->hasFunction(0x1E64C8u)) {
        auto targetFn = runtime->lookupFunction(0x1E64C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5B1Cu; }
        if (ctx->pc != 0x1E5B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E64C8_0x1e64c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5B1Cu; }
        if (ctx->pc != 0x1E5B1Cu) { return; }
    }
    ctx->pc = 0x1E5B1Cu;
label_1e5b1c:
    // 0x1e5b1c: 0x260404a8  addiu       $a0, $s0, 0x4A8
    ctx->pc = 0x1e5b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1192));
    // 0x1e5b20: 0xc079932  jal         func_1E64C8
    ctx->pc = 0x1E5B20u;
    SET_GPR_U32(ctx, 31, 0x1E5B28u);
    ctx->pc = 0x1E5B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5B20u;
            // 0x1e5b24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E64C8u;
    if (runtime->hasFunction(0x1E64C8u)) {
        auto targetFn = runtime->lookupFunction(0x1E64C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5B28u; }
        if (ctx->pc != 0x1E5B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E64C8_0x1e64c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5B28u; }
        if (ctx->pc != 0x1E5B28u) { return; }
    }
    ctx->pc = 0x1E5B28u;
label_1e5b28:
    // 0x1e5b28: 0xa2110070  sb          $s1, 0x70($s0)
    ctx->pc = 0x1e5b28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 112), (uint8_t)GPR_U32(ctx, 17));
    // 0x1e5b2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e5b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5b30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e5b30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5b34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e5b34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e5b38: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5B38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5B38u;
            // 0x1e5b3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E5B40u;
label_1e5b40:
    // 0x1e5b40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e5b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e5b44: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1e5b44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5b48: 0x24c707ff  addiu       $a3, $a2, 0x7FF
    ctx->pc = 0x1e5b48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 2047));
    // 0x1e5b4c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1e5b4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5b50: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1e5b50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1e5b54: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1e5b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1e5b58: 0x73ac2  srl         $a3, $a3, 11
    ctx->pc = 0x1e5b58u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 11));
    // 0x1e5b5c: 0x24a5e428  addiu       $a1, $a1, -0x1BD8
    ctx->pc = 0x1e5b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960168));
    // 0x1e5b60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e5b60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5b64: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1e5b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1e5b68: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x1E5B68u;
    SET_GPR_U32(ctx, 31, 0x1E5B70u);
    ctx->pc = 0x1E5B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5B68u;
            // 0x1e5b6c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5B70u; }
        if (ctx->pc != 0x1E5B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5B70u; }
        if (ctx->pc != 0x1E5B70u) { return; }
    }
    ctx->pc = 0x1E5B70u;
label_1e5b70:
    // 0x1e5b70: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e5b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5b74: 0xc079500  jal         func_1E5400
    ctx->pc = 0x1E5B74u;
    SET_GPR_U32(ctx, 31, 0x1E5B7Cu);
    ctx->pc = 0x1E5B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5B74u;
            // 0x1e5b78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5400u;
    if (runtime->hasFunction(0x1E5400u)) {
        auto targetFn = runtime->lookupFunction(0x1E5400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5B7Cu; }
        if (ctx->pc != 0x1E5B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5400_0x1e5400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5B7Cu; }
        if (ctx->pc != 0x1E5B7Cu) { return; }
    }
    ctx->pc = 0x1E5B7Cu;
label_1e5b7c:
    // 0x1e5b7c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1e5b7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5b80: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1e5b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e5b84: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5B84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5B84u;
            // 0x1e5b88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E5B8Cu;
    // 0x1e5b8c: 0x0  nop
    ctx->pc = 0x1e5b8cu;
    // NOP
label_1e5b90:
    // 0x1e5b90: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5B90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5B90u;
            // 0x1e5b94: 0xac8504dc  sw          $a1, 0x4DC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1244), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E5B98u;
    ctx->pc = 0x1e5b98u;
}
