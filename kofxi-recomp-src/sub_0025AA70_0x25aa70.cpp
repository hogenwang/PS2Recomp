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

// Function: sub_0025AA70
// Address: 0x25aa70 - 0x25aef8
void sub_0025AA70_0x25aa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025AA70_0x25aa70");
#endif

    switch (ctx->pc) {
        case 0x25ab00u: goto label_25ab00;
        case 0x25ac60u: goto label_25ac60;
        case 0x25acfcu: goto label_25acfc;
        case 0x25ad9cu: goto label_25ad9c;
        case 0x25adacu: goto label_25adac;
        case 0x25ae60u: goto label_25ae60;
        case 0x25ae8cu: goto label_25ae8c;
        case 0x25aedcu: goto label_25aedc;
        default: break;
    }

    ctx->pc = 0x25aa70u;

    // 0x25aa70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25aa70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25aa74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25aa74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25aa78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25aa78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25aa7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25aa7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25aa80: 0x10a200a0  beq         $a1, $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x25AA80u;
    {
        const bool branch_taken_0x25aa80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x25AA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA80u;
        // 0x25aa84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aa80) {
            ctx->pc = 0x25AD04u;
            goto label_25ad04;
        }
    }
    ctx->pc = 0x25AA88u;
    // 0x25aa88: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x25aa88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x25aa8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25AA8Cu;
    {
        const bool branch_taken_0x25aa8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA8Cu;
        // 0x25aa90: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aa8c) {
            ctx->pc = 0x25AAA4u;
            goto label_25aaa4;
        }
    }
    ctx->pc = 0x25AA94u;
    // 0x25aa94: 0x10a0001c  beqz        $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x25AA94u;
    {
        const bool branch_taken_0x25aa94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA94u;
        // 0x25aa98: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aa94) {
            ctx->pc = 0x25AB08u;
            goto label_25ab08;
        }
    }
    ctx->pc = 0x25AA9Cu;
    // 0x25aa9c: 0x10000112  b           . + 4 + (0x112 << 2)
    ctx->pc = 0x25AA9Cu;
    {
        const bool branch_taken_0x25aa9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA9Cu;
        // 0x25aaa0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aa9c) {
            ctx->pc = 0x25AEE8u;
            goto label_25aee8;
        }
    }
    ctx->pc = 0x25AAA4u;
label_25aaa4:
    // 0x25aaa4: 0x10a200c3  beq         $a1, $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x25AAA4u;
    {
        const bool branch_taken_0x25aaa4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x25AAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AAA4u;
        // 0x25aaa8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aaa4) {
            ctx->pc = 0x25ADB4u;
            goto label_25adb4;
        }
    }
    ctx->pc = 0x25AAACu;
    // 0x25aaac: 0x14a2010d  bne         $a1, $v0, . + 4 + (0x10D << 2)
    ctx->pc = 0x25AAACu;
    {
        const bool branch_taken_0x25aaac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x25AAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AAACu;
        // 0x25aab0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aaac) {
            ctx->pc = 0x25AEE4u;
            goto label_25aee4;
        }
    }
    ctx->pc = 0x25AAB4u;
    // 0x25aab4: 0x86030018  lh          $v1, 0x18($s0)
    ctx->pc = 0x25aab4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x25aab8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x25aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x25aabc: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x25AABCu;
    {
        const bool branch_taken_0x25aabc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25AAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AABCu;
        // 0x25aac0: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aabc) {
            ctx->pc = 0x25AAF8u;
            goto label_25aaf8;
        }
    }
    ctx->pc = 0x25AAC4u;
    // 0x25aac4: 0x8c431580  lw          $v1, 0x1580($v0)
    ctx->pc = 0x25aac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5504)));
    // 0x25aac8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25AAC8u;
    {
        const bool branch_taken_0x25aac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AAC8u;
        // 0x25aacc: 0x3c04003a  lui         $a0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aac8) {
            ctx->pc = 0x25AAE0u;
            goto label_25aae0;
        }
    }
    ctx->pc = 0x25AAD0u;
    // 0x25aad0: 0x86020098  lh          $v0, 0x98($s0)
    ctx->pc = 0x25aad0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x25aad4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x25aad4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25aad8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25AAD8u;
    {
        const bool branch_taken_0x25aad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25aad8) {
            ctx->pc = 0x25AAF8u;
            goto label_25aaf8;
        }
    }
    ctx->pc = 0x25AAE0u;
label_25aae0:
    // 0x25aae0: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x25aae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x25aae4: 0x8c82f990  lw          $v0, -0x670($a0)
    ctx->pc = 0x25aae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294965648)));
    // 0x25aae8: 0x8ca31534  lw          $v1, 0x1534($a1)
    ctx->pc = 0x25aae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5428)));
    // 0x25aaec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25aaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25aaf0: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x25AAF0u;
    {
        const bool branch_taken_0x25aaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AAF0u;
        // 0x25aaf4: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aaf0) {
            ctx->pc = 0x25AEE0u;
            goto label_25aee0;
        }
    }
    ctx->pc = 0x25AAF8u;
label_25aaf8:
    // 0x25aaf8: 0xc0966a2  jal         func_259A88
    ctx->pc = 0x25AAF8u;
    SET_GPR_U32(ctx, 31, 0x25AB00u);
    ctx->pc = 0x25AAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AAF8u;
    // 0x25aafc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259A88u, 0x25AAF8u, 0x25AB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AB00u;
label_25ab00:
    // 0x25ab00: 0x100000f7  b           . + 4 + (0xF7 << 2)
    ctx->pc = 0x25AB00u;
    {
        const bool branch_taken_0x25ab00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AB00u;
        // 0x25ab04: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ab00) {
            ctx->pc = 0x25AEE0u;
            goto label_25aee0;
        }
    }
    ctx->pc = 0x25AB08u;
label_25ab08:
    // 0x25ab08: 0x9602001a  lhu         $v0, 0x1A($s0)
    ctx->pc = 0x25ab08u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x25ab0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25ab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25ab10: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x25ab10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x25ab14: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x25ab14u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x25ab18: 0x2863000d  slti        $v1, $v1, 0xD
    ctx->pc = 0x25ab18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x25ab1c: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x25AB1Cu;
    {
        const bool branch_taken_0x25ab1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25AB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AB1Cu;
        // 0x25ab20: 0xa602001a  sh          $v0, 0x1A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ab1c) {
            ctx->pc = 0x25AB54u;
            goto label_25ab54;
        }
    }
    ctx->pc = 0x25AB24u;
    // 0x25ab24: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x25ab24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x25ab28: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x25ab28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x25ab2c: 0xa602001a  sh          $v0, 0x1A($s0)
    ctx->pc = 0x25ab2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x25ab30: 0x24631308  addiu       $v1, $v1, 0x1308
    ctx->pc = 0x25ab30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4872));
    // 0x25ab34: 0x24060074  addiu       $a2, $zero, 0x74
    ctx->pc = 0x25ab34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x25ab38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ab38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ab3c: 0xdc620048  ld          $v0, 0x48($v1)
    ctx->pc = 0x25ab3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x25ab40: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x25ab40u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x25ab44: 0xfc620048  sd          $v0, 0x48($v1)
    ctx->pc = 0x25ab44u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 72), GPR_U64(ctx, 2));
    // 0x25ab48: 0x860500b2  lh          $a1, 0xB2($s0)
    ctx->pc = 0x25ab48u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 178)));
    // 0x25ab4c: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x25AB4Cu;
    {
        const bool branch_taken_0x25ab4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AB4Cu;
        // 0x25ab50: 0xc5280a  movz        $a1, $a2, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ab4c) {
            ctx->pc = 0x25AED4u;
            goto label_25aed4;
        }
    }
    ctx->pc = 0x25AB54u;
label_25ab54:
    // 0x25ab54: 0x3c0b003a  lui         $t3, 0x3A
    ctx->pc = 0x25ab54u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)58 << 16));
    // 0x25ab58: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x25ab58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x25ab5c: 0x25631308  addiu       $v1, $t3, 0x1308
    ctx->pc = 0x25ab5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 4872));
    // 0x25ab60: 0x24c61548  addiu       $a2, $a2, 0x1548
    ctx->pc = 0x25ab60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5448));
    // 0x25ab64: 0xdc620050  ld          $v0, 0x50($v1)
    ctx->pc = 0x25ab64u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x25ab68: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x25ab68u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x25ab6c: 0xfc620050  sd          $v0, 0x50($v1)
    ctx->pc = 0x25ab6cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 80), GPR_U64(ctx, 2));
    // 0x25ab70: 0x960200a0  lhu         $v0, 0xA0($s0)
    ctx->pc = 0x25ab70u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x25ab74: 0x9608001a  lhu         $t0, 0x1A($s0)
    ctx->pc = 0x25ab74u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x25ab78: 0x860400a2  lh          $a0, 0xA2($s0)
    ctx->pc = 0x25ab78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 162)));
    // 0x25ab7c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x25ab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x25ab80: 0x214c3  sra         $v0, $v0, 19
    ctx->pc = 0x25ab80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 19));
    // 0x25ab84: 0x81c00  sll         $v1, $t0, 16
    ctx->pc = 0x25ab84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x25ab88: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x25ab88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x25ab8c: 0x860500a4  lh          $a1, 0xA4($s0)
    ctx->pc = 0x25ab8cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x25ab90: 0x31b83  sra         $v1, $v1, 14
    ctx->pc = 0x25ab90u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 14));
    // 0x25ab94: 0x23883  sra         $a3, $v0, 2
    ctx->pc = 0x25ab94u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 2));
    // 0x25ab98: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x25ab98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x25ab9c: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x25ab9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x25aba0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25aba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25aba4: 0xa2380b  movn        $a3, $a1, $v0
    ctx->pc = 0x25aba4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
    // 0x25aba8: 0x960900a4  lhu         $t1, 0xA4($s0)
    ctx->pc = 0x25aba8u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x25abac: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x25abacu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25abb0: 0xe42018  mult        $a0, $a3, $a0
    ctx->pc = 0x25abb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x25abb4: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x25abb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x25abb8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x25abb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x25abbc: 0x45282a  slt         $a1, $v0, $a1
    ctx->pc = 0x25abbcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x25abc0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25ABC0u;
    {
        const bool branch_taken_0x25abc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ABC0u;
        // 0x25abc4: 0xa604001c  sh          $a0, 0x1C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25abc0) {
            ctx->pc = 0x25ABD0u;
            goto label_25abd0;
        }
    }
    ctx->pc = 0x25ABC8u;
    // 0x25abc8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25ABC8u;
    {
        const bool branch_taken_0x25abc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ABCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ABC8u;
        // 0x25abcc: 0xa609001c  sh          $t1, 0x1C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25abc8) {
            ctx->pc = 0x25ABE4u;
            goto label_25abe4;
        }
    }
    ctx->pc = 0x25ABD0u;
label_25abd0:
    // 0x25abd0: 0x28420081  slti        $v0, $v0, 0x81
    ctx->pc = 0x25abd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x25abd4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25ABD4u;
    {
        const bool branch_taken_0x25abd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25ABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ABD4u;
        // 0x25abd8: 0x3c04003a  lui         $a0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25abd4) {
            ctx->pc = 0x25ABE8u;
            goto label_25abe8;
        }
    }
    ctx->pc = 0x25ABDCu;
    // 0x25abdc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x25abdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x25abe0: 0xa602001c  sh          $v0, 0x1C($s0)
    ctx->pc = 0x25abe0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 2));
label_25abe4:
    // 0x25abe4: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x25abe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
label_25abe8:
    // 0x25abe8: 0x8605001c  lh          $a1, 0x1C($s0)
    ctx->pc = 0x25abe8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x25abec: 0x8c82f990  lw          $v0, -0x670($a0)
    ctx->pc = 0x25abecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294965648)));
    // 0x25abf0: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x25abf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x25abf4: 0x8c641020  lw          $a0, 0x1020($v1)
    ctx->pc = 0x25abf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4128)));
    // 0x25abf8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x25abf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x25abfc: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x25ABFCu;
    {
        const bool branch_taken_0x25abfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ABFCu;
        // 0x25ac00: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25abfc) {
            ctx->pc = 0x25AC38u;
            goto label_25ac38;
        }
    }
    ctx->pc = 0x25AC04u;
    // 0x25ac04: 0xa1400  sll         $v0, $t2, 16
    ctx->pc = 0x25ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x25ac08: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x25ac08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x25ac0c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x25ac0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x25ac10: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25AC10u;
    {
        const bool branch_taken_0x25ac10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AC10u;
        // 0x25ac14: 0x81400  sll         $v0, $t0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ac10) {
            ctx->pc = 0x25AC3Cu;
            goto label_25ac3c;
        }
    }
    ctx->pc = 0x25AC18u;
    // 0x25ac18: 0x25621308  addiu       $v0, $t3, 0x1308
    ctx->pc = 0x25ac18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4872));
    // 0x25ac1c: 0xdc430088  ld          $v1, 0x88($v0)
    ctx->pc = 0x25ac1cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x25ac20: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x25ac20u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x25ac24: 0xfc430088  sd          $v1, 0x88($v0)
    ctx->pc = 0x25ac24u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 136), GPR_U64(ctx, 3));
    // 0x25ac28: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x25ac28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x25ac2c: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x25AC2Cu;
    {
        const bool branch_taken_0x25ac2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ac2c) {
            ctx->pc = 0x25AC30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25AC2Cu;
            // 0x25ac30: 0xae0000c8  sw          $zero, 0xC8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25AC34u;
            goto label_25ac34;
        }
    }
    ctx->pc = 0x25AC34u;
label_25ac34:
    // 0x25ac34: 0x9608001a  lhu         $t0, 0x1A($s0)
    ctx->pc = 0x25ac34u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
label_25ac38:
    // 0x25ac38: 0x81400  sll         $v0, $t0, 16
    ctx->pc = 0x25ac38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
label_25ac3c:
    // 0x25ac3c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x25ac3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x25ac40: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x25ac40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x25ac44: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x25AC44u;
    {
        const bool branch_taken_0x25ac44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ac44) {
            ctx->pc = 0x25AC48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25AC44u;
            // 0x25ac48: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25AC80u;
            goto label_25ac80;
        }
    }
    ctx->pc = 0x25AC4Cu;
    // 0x25ac4c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x25ac4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x25ac50: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25AC50u;
    {
        const bool branch_taken_0x25ac50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ac50) {
            ctx->pc = 0x25AC54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25AC50u;
            // 0x25ac54: 0x960200a0  lhu         $v0, 0xA0($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25AC64u;
            goto label_25ac64;
        }
    }
    ctx->pc = 0x25AC58u;
    // 0x25ac58: 0xc093106  jal         func_24C418
    ctx->pc = 0x25AC58u;
    SET_GPR_U32(ctx, 31, 0x25AC60u);
    ctx->pc = 0x24C418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C418u, 0x25AC58u, 0x25AC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AC60u;
label_25ac60:
    // 0x25ac60: 0x960200a0  lhu         $v0, 0xA0($s0)
    ctx->pc = 0x25ac60u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 160)));
label_25ac64:
    // 0x25ac64: 0x960300a2  lhu         $v1, 0xA2($s0)
    ctx->pc = 0x25ac64u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 162)));
    // 0x25ac68: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x25ac68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x25ac6c: 0xa60000a0  sh          $zero, 0xA0($s0)
    ctx->pc = 0x25ac6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 160), (uint16_t)GPR_U32(ctx, 0));
    // 0x25ac70: 0x214c3  sra         $v0, $v0, 19
    ctx->pc = 0x25ac70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 19));
    // 0x25ac74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25ac74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25ac78: 0xa60300a2  sh          $v1, 0xA2($s0)
    ctx->pc = 0x25ac78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 162), (uint16_t)GPR_U32(ctx, 3));
    // 0x25ac7c: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x25ac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_25ac80:
    // 0x25ac80: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x25ac80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25ac84: 0x86030018  lh          $v1, 0x18($s0)
    ctx->pc = 0x25ac84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x25ac88: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x25ac88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x25ac8c: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25AC8Cu;
    {
        const bool branch_taken_0x25ac8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x25AC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AC8Cu;
        // 0x25ac90: 0xa600009a  sh          $zero, 0x9A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 154), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ac8c) {
            ctx->pc = 0x25ACA0u;
            goto label_25aca0;
        }
    }
    ctx->pc = 0x25AC94u;
    // 0x25ac94: 0x96020028  lhu         $v0, 0x28($s0)
    ctx->pc = 0x25ac94u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x25ac98: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x25ac98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x25ac9c: 0xa6020028  sh          $v0, 0x28($s0)
    ctx->pc = 0x25ac9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 2));
label_25aca0:
    // 0x25aca0: 0x8e080088  lw          $t0, 0x88($s0)
    ctx->pc = 0x25aca0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x25aca4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x25aca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25aca8: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x25aca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x25acac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25acacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25acb0: 0x96060024  lhu         $a2, 0x24($s0)
    ctx->pc = 0x25acb0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x25acb4: 0x48182b  sltu        $v1, $v0, $t0
    ctx->pc = 0x25acb4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x25acb8: 0x103100a  movz        $v0, $t0, $v1
    ctx->pc = 0x25acb8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 8));
    // 0x25acbc: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x25ACBCu;
    {
        const bool branch_taken_0x25acbc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x25acbc) {
            ctx->pc = 0x25ACC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25ACBCu;
            // 0x25acc0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25ACC4u;
            goto label_25acc4;
        }
    }
    ctx->pc = 0x25ACC4u;
label_25acc4:
    // 0x25acc4: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x25acc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x25acc8: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x25acc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25accc: 0x46001b  divu        $zero, $v0, $a2
    ctx->pc = 0x25acccu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x25acd0: 0x96030024  lhu         $v1, 0x24($s0)
    ctx->pc = 0x25acd0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x25acd4: 0xa600001e  sh          $zero, 0x1E($s0)
    ctx->pc = 0x25acd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 0));
    // 0x25acd8: 0xfe030088  sd          $v1, 0x88($s0)
    ctx->pc = 0x25acd8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 136), GPR_U64(ctx, 3));
    // 0x25acdc: 0x1012  mflo        $v0
    ctx->pc = 0x25acdcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x25ace0: 0xe2382b  sltu        $a3, $a3, $v0
    ctx->pc = 0x25ace0u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x25ace4: 0x47280b  movn        $a1, $v0, $a3
    ctx->pc = 0x25ace4u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x25ace8: 0xa82818  mult        $a1, $a1, $t0
    ctx->pc = 0x25ace8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x25acec: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x25acecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x25acf0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x25acf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x25acf4: 0xc095fb8  jal         func_257EE0
    ctx->pc = 0x25ACF4u;
    SET_GPR_U32(ctx, 31, 0x25ACFCu);
    ctx->pc = 0x25ACF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ACF4u;
    // 0x25acf8: 0xfe050090  sd          $a1, 0x90($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 144), GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EE0u, 0x25ACF4u, 0x25ACFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ACFCu;
label_25acfc:
    // 0x25acfc: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x25ACFCu;
    {
        const bool branch_taken_0x25acfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ACFCu;
        // 0x25ad00: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25acfc) {
            ctx->pc = 0x25AEE4u;
            goto label_25aee4;
        }
    }
    ctx->pc = 0x25AD04u;
label_25ad04:
    // 0x25ad04: 0x960200a0  lhu         $v0, 0xA0($s0)
    ctx->pc = 0x25ad04u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x25ad08: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x25ad08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x25ad0c: 0x860300a2  lh          $v1, 0xA2($s0)
    ctx->pc = 0x25ad0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 162)));
    // 0x25ad10: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x25ad10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x25ad14: 0x860400a4  lh          $a0, 0xA4($s0)
    ctx->pc = 0x25ad14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x25ad18: 0x214c3  sra         $v0, $v0, 19
    ctx->pc = 0x25ad18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 19));
    // 0x25ad1c: 0x8605001a  lh          $a1, 0x1A($s0)
    ctx->pc = 0x25ad1cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x25ad20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25ad20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25ad24: 0x23883  sra         $a3, $v0, 2
    ctx->pc = 0x25ad24u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 2));
    // 0x25ad28: 0xe4182a  slt         $v1, $a3, $a0
    ctx->pc = 0x25ad28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x25ad2c: 0x14a60014  bne         $a1, $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x25AD2Cu;
    {
        const bool branch_taken_0x25ad2c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x25AD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AD2Cu;
        // 0x25ad30: 0x83380b  movn        $a3, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ad2c) {
            ctx->pc = 0x25AD80u;
            goto label_25ad80;
        }
    }
    ctx->pc = 0x25AD34u;
    // 0x25ad34: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x25ad34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x25ad38: 0x86040098  lh          $a0, 0x98($s0)
    ctx->pc = 0x25ad38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x25ad3c: 0x8c62153c  lw          $v0, 0x153C($v1)
    ctx->pc = 0x25ad3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5436)));
    // 0x25ad40: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x25ad40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25ad44: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25AD44u;
    {
        const bool branch_taken_0x25ad44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AD44u;
        // 0x25ad48: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ad44) {
            ctx->pc = 0x25AD60u;
            goto label_25ad60;
        }
    }
    ctx->pc = 0x25AD4Cu;
    // 0x25ad4c: 0x8c62157c  lw          $v0, 0x157C($v1)
    ctx->pc = 0x25ad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5500)));
    // 0x25ad50: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x25ad50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25ad54: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x25ad54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25ad58: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25AD58u;
    {
        const bool branch_taken_0x25ad58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25AD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AD58u;
        // 0x25ad5c: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ad58) {
            ctx->pc = 0x25AD84u;
            goto label_25ad84;
        }
    }
    ctx->pc = 0x25AD60u;
label_25ad60:
    // 0x25ad60: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x25ad60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x25ad64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ad64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ad68: 0x24631308  addiu       $v1, $v1, 0x1308
    ctx->pc = 0x25ad68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4872));
    // 0x25ad6c: 0x24050074  addiu       $a1, $zero, 0x74
    ctx->pc = 0x25ad6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x25ad70: 0xdc620078  ld          $v0, 0x78($v1)
    ctx->pc = 0x25ad70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x25ad74: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x25ad74u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x25ad78: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x25AD78u;
    {
        const bool branch_taken_0x25ad78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AD78u;
        // 0x25ad7c: 0xfc620078  sd          $v0, 0x78($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 120), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ad78) {
            ctx->pc = 0x25AED4u;
            goto label_25aed4;
        }
    }
    ctx->pc = 0x25AD80u;
label_25ad80:
    // 0x25ad80: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x25ad80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_25ad84:
    // 0x25ad84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ad84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ad88: 0x24421308  addiu       $v0, $v0, 0x1308
    ctx->pc = 0x25ad88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4872));
    // 0x25ad8c: 0xdc430058  ld          $v1, 0x58($v0)
    ctx->pc = 0x25ad8cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x25ad90: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x25ad90u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x25ad94: 0xc096388  jal         func_258E20
    ctx->pc = 0x25AD94u;
    SET_GPR_U32(ctx, 31, 0x25AD9Cu);
    ctx->pc = 0x25AD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AD94u;
    // 0x25ad98: 0xfc430058  sd          $v1, 0x58($v0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 2), 88), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258E20u, 0x25AD94u, 0x25AD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AD9Cu;
label_25ad9c:
    // 0x25ad9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25ad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ada0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ada0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ada4: 0xc095fb8  jal         func_257EE0
    ctx->pc = 0x25ADA4u;
    SET_GPR_U32(ctx, 31, 0x25ADACu);
    ctx->pc = 0x25ADA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ADA4u;
    // 0x25ada8: 0xa2020026  sb          $v0, 0x26($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 38), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EE0u, 0x25ADA4u, 0x25ADACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ADACu;
label_25adac:
    // 0x25adac: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x25ADACu;
    {
        const bool branch_taken_0x25adac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ADACu;
        // 0x25adb0: 0xa2000026  sb          $zero, 0x26($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 38), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25adac) {
            ctx->pc = 0x25AEE0u;
            goto label_25aee0;
        }
    }
    ctx->pc = 0x25ADB4u;
label_25adb4:
    // 0x25adb4: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x25adb4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x25adb8: 0x24e61308  addiu       $a2, $a3, 0x1308
    ctx->pc = 0x25adb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4872));
    // 0x25adbc: 0xdcc20060  ld          $v0, 0x60($a2)
    ctx->pc = 0x25adbcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x25adc0: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x25adc0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x25adc4: 0xfcc20060  sd          $v0, 0x60($a2)
    ctx->pc = 0x25adc4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 96), GPR_U64(ctx, 2));
    // 0x25adc8: 0x86030018  lh          $v1, 0x18($s0)
    ctx->pc = 0x25adc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x25adcc: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x25adccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x25add0: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x25ADD0u;
    {
        const bool branch_taken_0x25add0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25ADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ADD0u;
        // 0x25add4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25add0) {
            ctx->pc = 0x25AEBCu;
            goto label_25aebc;
        }
    }
    ctx->pc = 0x25ADD8u;
    // 0x25add8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x25add8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x25addc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x25ADDCu;
    {
        const bool branch_taken_0x25addc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25addc) {
            ctx->pc = 0x25ADE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25ADDCu;
            // 0x25ade0: 0x8c44001c  lw          $a0, 0x1C($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25ADE4u;
            goto label_25ade4;
        }
    }
    ctx->pc = 0x25ADE4u;
label_25ade4:
    // 0x25ade4: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x25ade4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x25ade8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x25ade8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x25adec: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x25ADECu;
    {
        const bool branch_taken_0x25adec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ADECu;
        // 0x25adf0: 0x28620006  slti        $v0, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25adec) {
            ctx->pc = 0x25AEA0u;
            goto label_25aea0;
        }
    }
    ctx->pc = 0x25ADF4u;
    // 0x25adf4: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x25ADF4u;
    {
        const bool branch_taken_0x25adf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ADF4u;
        // 0x25adf8: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25adf4) {
            ctx->pc = 0x25AEA0u;
            goto label_25aea0;
        }
    }
    ctx->pc = 0x25ADFCu;
    // 0x25adfc: 0x8c451580  lw          $a1, 0x1580($v0)
    ctx->pc = 0x25adfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5504)));
    // 0x25ae00: 0x18a00007  blez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x25AE00u;
    {
        const bool branch_taken_0x25ae00 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x25AE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE00u;
        // 0x25ae04: 0x3c04003a  lui         $a0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ae00) {
            ctx->pc = 0x25AE20u;
            goto label_25ae20;
        }
    }
    ctx->pc = 0x25AE08u;
    // 0x25ae08: 0x86030098  lh          $v1, 0x98($s0)
    ctx->pc = 0x25ae08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x25ae0c: 0x8c821530  lw          $v0, 0x1530($a0)
    ctx->pc = 0x25ae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5424)));
    // 0x25ae10: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x25ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x25ae14: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x25ae14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25ae18: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x25AE18u;
    {
        const bool branch_taken_0x25ae18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE18u;
        // 0x25ae1c: 0x24e31308  addiu       $v1, $a3, 0x1308 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ae18) {
            ctx->pc = 0x25AEC0u;
            goto label_25aec0;
        }
    }
    ctx->pc = 0x25AE20u;
label_25ae20:
    // 0x25ae20: 0xdcc20068  ld          $v0, 0x68($a2)
    ctx->pc = 0x25ae20u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 104)));
    // 0x25ae24: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x25ae24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x25ae28: 0x8c6412d0  lw          $a0, 0x12D0($v1)
    ctx->pc = 0x25ae28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4816)));
    // 0x25ae2c: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x25ae2cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x25ae30: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x25AE30u;
    {
        const bool branch_taken_0x25ae30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE30u;
        // 0x25ae34: 0xfcc20068  sd          $v0, 0x68($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 104), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ae30) {
            ctx->pc = 0x25AE68u;
            goto label_25ae68;
        }
    }
    ctx->pc = 0x25AE38u;
    // 0x25ae38: 0x8e080070  lw          $t0, 0x70($s0)
    ctx->pc = 0x25ae38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x25ae3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ae3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ae40: 0x8e090040  lw          $t1, 0x40($s0)
    ctx->pc = 0x25ae40u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x25ae44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25ae44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ae48: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x25ae48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x25ae4c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x25ae4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x25ae50: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x25ae50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x25ae54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25ae54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ae58: 0xc09648a  jal         func_259228
    ctx->pc = 0x25AE58u;
    SET_GPR_U32(ctx, 31, 0x25AE60u);
    ctx->pc = 0x25AE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AE58u;
    // 0x25ae5c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259228u, 0x25AE58u, 0x25AE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AE60u;
label_25ae60:
    // 0x25ae60: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x25AE60u;
    {
        const bool branch_taken_0x25ae60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE60u;
        // 0x25ae64: 0x3c04003a  lui         $a0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ae60) {
            ctx->pc = 0x25AE90u;
            goto label_25ae90;
        }
    }
    ctx->pc = 0x25AE68u;
label_25ae68:
    // 0x25ae68: 0x8e090040  lw          $t1, 0x40($s0)
    ctx->pc = 0x25ae68u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x25ae6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ae6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ae70: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x25ae70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x25ae74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25ae74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ae78: 0x8e080070  lw          $t0, 0x70($s0)
    ctx->pc = 0x25ae78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x25ae7c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x25ae7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x25ae80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25ae80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ae84: 0xc09648a  jal         func_259228
    ctx->pc = 0x25AE84u;
    SET_GPR_U32(ctx, 31, 0x25AE8Cu);
    ctx->pc = 0x25AE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AE84u;
    // 0x25ae88: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259228u, 0x25AE84u, 0x25AE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AE8Cu;
label_25ae8c:
    // 0x25ae8c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x25ae8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
label_25ae90:
    // 0x25ae90: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x25ae90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x25ae94: 0x8c82f990  lw          $v0, -0x670($a0)
    ctx->pc = 0x25ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294965648)));
    // 0x25ae98: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25AE98u;
    {
        const bool branch_taken_0x25ae98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE98u;
        // 0x25ae9c: 0x8ca31534  lw          $v1, 0x1534($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5428)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ae98) {
            ctx->pc = 0x25AEB0u;
            goto label_25aeb0;
        }
    }
    ctx->pc = 0x25AEA0u;
label_25aea0:
    // 0x25aea0: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x25aea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x25aea4: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x25aea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x25aea8: 0x8c82f990  lw          $v0, -0x670($a0)
    ctx->pc = 0x25aea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294965648)));
    // 0x25aeac: 0x8ca31530  lw          $v1, 0x1530($a1)
    ctx->pc = 0x25aeacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5424)));
label_25aeb0:
    // 0x25aeb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25aeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25aeb4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25AEB4u;
    {
        const bool branch_taken_0x25aeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AEB4u;
        // 0x25aeb8: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aeb4) {
            ctx->pc = 0x25AEE0u;
            goto label_25aee0;
        }
    }
    ctx->pc = 0x25AEBCu;
label_25aebc:
    // 0x25aebc: 0x24e31308  addiu       $v1, $a3, 0x1308
    ctx->pc = 0x25aebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4872));
label_25aec0:
    // 0x25aec0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25aec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aec4: 0xdc620070  ld          $v0, 0x70($v1)
    ctx->pc = 0x25aec4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x25aec8: 0x24050074  addiu       $a1, $zero, 0x74
    ctx->pc = 0x25aec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x25aecc: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x25aeccu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x25aed0: 0xfc620070  sd          $v0, 0x70($v1)
    ctx->pc = 0x25aed0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 112), GPR_U64(ctx, 2));
label_25aed4:
    // 0x25aed4: 0xc096678  jal         func_2599E0
    ctx->pc = 0x25AED4u;
    SET_GPR_U32(ctx, 31, 0x25AEDCu);
    ctx->pc = 0x2599E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2599E0u, 0x25AED4u, 0x25AEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AEDCu;
label_25aedc:
    // 0x25aedc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25aedcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25aee0:
    // 0x25aee0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25aee0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25aee4:
    // 0x25aee4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25aee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25aee8:
    // 0x25aee8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25aee8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25aeec: 0x3e00008  jr          $ra
    ctx->pc = 0x25AEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25AEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AEECu;
        // 0x25aef0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AEECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25AEF4u;
    // 0x25aef4: 0x0  nop
    ctx->pc = 0x25aef4u;
    // NOP
    if (ctx->pc == 0x25aef4u) { ctx->pc = 0x25aef8u; }
}
