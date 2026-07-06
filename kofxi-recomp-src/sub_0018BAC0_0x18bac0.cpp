#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018BAC0
// Address: 0x18bac0 - 0x18bc20
void sub_0018BAC0_0x18bac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018BAC0_0x18bac0");
#endif

    switch (ctx->pc) {
        case 0x18bae4u: goto label_18bae4;
        case 0x18bb9cu: goto label_18bb9c;
        case 0x18bba8u: goto label_18bba8;
        default: break;
    }

    ctx->pc = 0x18bac0u;

    // 0x18bac0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18bac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18bac4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x18bac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x18bac8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18bac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18bacc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18baccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18bad0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x18bad0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bad4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18bad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18bad8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18bad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18badc: 0xc0628bc  jal         func_18A2F0
    ctx->pc = 0x18BADCu;
    SET_GPR_U32(ctx, 31, 0x18BAE4u);
    ctx->pc = 0x18BAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BADCu;
    // 0x18bae0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A2F0u, 0x18BADCu, 0x18BAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BAE4u;
label_18bae4:
    // 0x18bae4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18bae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18bae8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x18bae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x18baec: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18BAECu;
    {
        const bool branch_taken_0x18baec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18baec) {
            ctx->pc = 0x18BAF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18BAECu;
            // 0x18baf0: 0x1410c0  sll         $v0, $s4, 3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18BAFCu;
            goto label_18bafc;
        }
    }
    ctx->pc = 0x18BAF4u;
    // 0x18baf4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x18baf4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18baf8: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x18baf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_18bafc:
    // 0x18bafc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18bafcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18bb00: 0x542021  addu        $a0, $v0, $s4
    ctx->pc = 0x18bb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x18bb04: 0x2463db55  addiu       $v1, $v1, -0x24AB
    ctx->pc = 0x18bb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957909));
    // 0x18bb08: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18bb08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18bb0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18bb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18bb10: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x18bb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x18bb14: 0x488c0  sll         $s1, $a0, 3
    ctx->pc = 0x18bb14u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18bb18: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x18bb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x18bb1c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x18bb1cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18bb20: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18BB20u;
    {
        const bool branch_taken_0x18bb20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18bb20) {
            ctx->pc = 0x18BB3Cu;
            goto label_18bb3c;
        }
    }
    ctx->pc = 0x18BB28u;
    // 0x18bb28: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18bb28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18bb2c: 0x2442db54  addiu       $v0, $v0, -0x24AC
    ctx->pc = 0x18bb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957908));
    // 0x18bb30: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x18bb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18bb34: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x18BB34u;
    {
        const bool branch_taken_0x18bb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BB34u;
        // 0x18bb38: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bb34) {
            ctx->pc = 0x18BBFCu;
            goto label_18bbfc;
        }
    }
    ctx->pc = 0x18BB3Cu;
label_18bb3c:
    // 0x18bb3c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x18bb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x18bb40: 0x9042f35a  lbu         $v0, -0xCA6($v0)
    ctx->pc = 0x18bb40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964058)));
    // 0x18bb44: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x18BB44u;
    {
        const bool branch_taken_0x18bb44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18bb44) {
            ctx->pc = 0x18BB7Cu;
            goto label_18bb7c;
        }
    }
    ctx->pc = 0x18BB4Cu;
    // 0x18bb4c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18bb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18bb50: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18bb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18bb54: 0x2463db51  addiu       $v1, $v1, -0x24AF
    ctx->pc = 0x18bb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957905));
    // 0x18bb58: 0x2442dc9d  addiu       $v0, $v0, -0x2363
    ctx->pc = 0x18bb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958237));
    // 0x18bb5c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x18bb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x18bb60: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x18bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18bb64: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x18bb64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18bb68: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x18bb68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x18bb6c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x18bb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x18bb70: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18bb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18bb74: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18BB74u;
    {
        const bool branch_taken_0x18bb74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BB74u;
        // 0x18bb78: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bb74) {
            ctx->pc = 0x18BB8Cu;
            goto label_18bb8c;
        }
    }
    ctx->pc = 0x18BB7Cu;
label_18bb7c:
    // 0x18bb7c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18bb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18bb80: 0x2442dc9d  addiu       $v0, $v0, -0x2363
    ctx->pc = 0x18bb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958237));
    // 0x18bb84: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x18bb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18bb88: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x18bb88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_18bb8c:
    // 0x18bb8c: 0x3c120036  lui         $s2, 0x36
    ctx->pc = 0x18bb8cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)54 << 16));
    // 0x18bb90: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x18bb90u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18bb94: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x18bb94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bb98: 0x265241e0  addiu       $s2, $s2, 0x41E0
    ctx->pc = 0x18bb98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16864));
label_18bb9c:
    // 0x18bb9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18bb9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bba0: 0xc062e84  jal         func_18BA10
    ctx->pc = 0x18BBA0u;
    SET_GPR_U32(ctx, 31, 0x18BBA8u);
    ctx->pc = 0x18BBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BBA0u;
    // 0x18bba4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BA10u, 0x18BBA0u, 0x18BBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BBA8u;
label_18bba8:
    // 0x18bba8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18bba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18bbac: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x18bbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x18bbb0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18BBB0u;
    {
        const bool branch_taken_0x18bbb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18bbb0) {
            ctx->pc = 0x18BBC8u;
            goto label_18bbc8;
        }
    }
    ctx->pc = 0x18BBB8u;
    // 0x18bbb8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x18bbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x18bbbc: 0x12030002  beq         $s0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x18BBBCu;
    {
        const bool branch_taken_0x18bbbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x18bbbc) {
            ctx->pc = 0x18BBC8u;
            goto label_18bbc8;
        }
    }
    ctx->pc = 0x18BBC4u;
    // 0x18bbc4: 0x640200ff  daddiu      $v0, $zero, 0xFF
    ctx->pc = 0x18bbc4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)255);
label_18bbc8:
    // 0x18bbc8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18bbc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18bbcc: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x18bbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x18bbd0: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18BBD0u;
    {
        const bool branch_taken_0x18bbd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18bbd0) {
            ctx->pc = 0x18BBD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18BBD0u;
            // 0x18bbd4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18BBE0u;
            goto label_18bbe0;
        }
    }
    ctx->pc = 0x18BBD8u;
    // 0x18bbd8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x18BBD8u;
    {
        const bool branch_taken_0x18bbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BBD8u;
        // 0x18bbdc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bbd8) {
            ctx->pc = 0x18BC00u;
            goto label_18bc00;
        }
    }
    ctx->pc = 0x18BBE0u;
label_18bbe0:
    // 0x18bbe0: 0x2a62000e  slti        $v0, $s3, 0xE
    ctx->pc = 0x18bbe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x18bbe4: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x18BBE4u;
    {
        const bool branch_taken_0x18bbe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18BBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BBE4u;
        // 0x18bbe8: 0x2652000a  addiu       $s2, $s2, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bbe4) {
            ctx->pc = 0x18BB9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18bb9c;
        }
    }
    ctx->pc = 0x18BBECu;
    // 0x18bbec: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18bbf0: 0x2442db54  addiu       $v0, $v0, -0x24AC
    ctx->pc = 0x18bbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957908));
    // 0x18bbf4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x18bbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18bbf8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x18bbf8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_18bbfc:
    // 0x18bbfc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x18bbfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_18bc00:
    // 0x18bc00: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18bc00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18bc04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18bc04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18bc08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18bc08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18bc0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18bc0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18bc10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18bc10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18bc14: 0x3e00008  jr          $ra
    ctx->pc = 0x18BC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BC14u;
        // 0x18bc18: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BC14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18BC1Cu;
    // 0x18bc1c: 0x0  nop
    ctx->pc = 0x18bc1cu;
    // NOP
    if (ctx->pc == 0x18bc1cu) { ctx->pc = 0x18bc20u; }
}
