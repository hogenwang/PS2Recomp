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

// Function: sub_001BDD10
// Address: 0x1bdd10 - 0x1bdf00
void sub_001BDD10_0x1bdd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDD10_0x1bdd10");
#endif

    switch (ctx->pc) {
        case 0x1bdd80u: goto label_1bdd80;
        case 0x1bddc0u: goto label_1bddc0;
        case 0x1bdde8u: goto label_1bdde8;
        case 0x1bde30u: goto label_1bde30;
        case 0x1bde44u: goto label_1bde44;
        case 0x1bdea0u: goto label_1bdea0;
        default: break;
    }

    ctx->pc = 0x1bdd10u;

label_1bdd10:
    // 0x1bdd10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bdd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bdd14: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1bdd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1bdd18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bdd18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdd1c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1bdd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1bdd20: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1bdd20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdd24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1bdd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1bdd28: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1bdd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1bdd2c: 0x14710004  bne         $v1, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BDD2Cu;
    {
        const bool branch_taken_0x1bdd2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x1BDD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD2Cu;
        // 0x1bdd30: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdd2c) {
            ctx->pc = 0x1BDD40u;
            goto label_1bdd40;
        }
    }
    ctx->pc = 0x1BDD34u;
    // 0x1bdd34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bdd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bdd38: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1bdd38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1bdd3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bdd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bdd40:
    // 0x1bdd40: 0x5462002c  bnel        $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1BDD40u;
    {
        const bool branch_taken_0x1bdd40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bdd40) {
            ctx->pc = 0x1BDD44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BDD40u;
            // 0x1bdd44: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BDDF4u;
            goto label_1bddf4;
        }
    }
    ctx->pc = 0x1BDD48u;
    // 0x1bdd48: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1bdd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1bdd4c: 0x5451000e  bnel        $v0, $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x1BDD4Cu;
    {
        const bool branch_taken_0x1bdd4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1bdd4c) {
            ctx->pc = 0x1BDD50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BDD4Cu;
            // 0x1bdd50: 0x86030036  lh          $v1, 0x36($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BDD88u;
            goto label_1bdd88;
        }
    }
    ctx->pc = 0x1BDD54u;
    // 0x1bdd54: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1bdd54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1bdd58: 0x26070028  addiu       $a3, $s0, 0x28
    ctx->pc = 0x1bdd58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x1bdd5c: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1bdd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1bdd60: 0x260a0034  addiu       $t2, $s0, 0x34
    ctx->pc = 0x1bdd60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x1bdd64: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x1bdd64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1bdd68: 0x86080030  lh          $t0, 0x30($s0)
    ctx->pc = 0x1bdd68u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1bdd6c: 0x86090032  lh          $t1, 0x32($s0)
    ctx->pc = 0x1bdd6cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x1bdd70: 0x860b0036  lh          $t3, 0x36($s0)
    ctx->pc = 0x1bdd70u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x1bdd74: 0x86020038  lh          $v0, 0x38($s0)
    ctx->pc = 0x1bdd74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1bdd78: 0xc06b78c  jal         func_1ADE30
    ctx->pc = 0x1BDD78u;
    SET_GPR_U32(ctx, 31, 0x1BDD80u);
    ctx->pc = 0x1BDD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDD78u;
    // 0x1bdd7c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADE30u, 0x1BDD78u, 0x1BDD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDD80u;
label_1bdd80:
    // 0x1bdd80: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1BDD80u;
    {
        const bool branch_taken_0x1bdd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDD80u;
        // 0x1bdd84: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdd80) {
            ctx->pc = 0x1BDDE8u;
            goto label_1bdde8;
        }
    }
    ctx->pc = 0x1BDD88u;
label_1bdd88:
    // 0x1bdd88: 0x260c0034  addiu       $t4, $s0, 0x34
    ctx->pc = 0x1bdd88u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x1bdd8c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1bdd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1bdd90: 0x26070028  addiu       $a3, $s0, 0x28
    ctx->pc = 0x1bdd90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x1bdd94: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1bdd94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1bdd98: 0x2609002c  addiu       $t1, $s0, 0x2C
    ctx->pc = 0x1bdd98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x1bdd9c: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x1bdd9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1bdda0: 0x8e080024  lw          $t0, 0x24($s0)
    ctx->pc = 0x1bdda0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1bdda4: 0x860a0030  lh          $t2, 0x30($s0)
    ctx->pc = 0x1bdda4u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1bdda8: 0x860b0032  lh          $t3, 0x32($s0)
    ctx->pc = 0x1bdda8u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x1bddac: 0x86020038  lh          $v0, 0x38($s0)
    ctx->pc = 0x1bddacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1bddb0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1bddb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1bddb4: 0xafac0000  sw          $t4, 0x0($sp)
    ctx->pc = 0x1bddb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    // 0x1bddb8: 0xc06b9c8  jal         func_1AE720
    ctx->pc = 0x1BDDB8u;
    SET_GPR_U32(ctx, 31, 0x1BDDC0u);
    ctx->pc = 0x1BDDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDDB8u;
    // 0x1bddbc: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE720u, 0x1BDDB8u, 0x1BDDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDDC0u;
label_1bddc0:
    // 0x1bddc0: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x1bddc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1bddc4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1bddc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1bddc8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1bddc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bddcc: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1bddccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1bddd0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1bddd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1bddd4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1bddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bddd8: 0x14510004  bne         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BDDD8u;
    {
        const bool branch_taken_0x1bddd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1BDDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDDD8u;
        // 0x1bdddc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bddd8) {
            ctx->pc = 0x1BDDECu;
            goto label_1bddec;
        }
    }
    ctx->pc = 0x1BDDE0u;
    // 0x1bdde0: 0xc06f740  jal         func_1BDD00
    ctx->pc = 0x1BDDE0u;
    SET_GPR_U32(ctx, 31, 0x1BDDE8u);
    ctx->pc = 0x1BDD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDD00u, 0x1BDDE0u, 0x1BDDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDDE8u;
label_1bdde8:
    // 0x1bdde8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1bdde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bddec:
    // 0x1bddec: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1bddecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1bddf0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1bddf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1bddf4:
    // 0x1bddf4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1bddf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bddf8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1bddf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bddfc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDDFCu;
        // 0x1bde00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDDFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDE04u;
    // 0x1bde04: 0x0  nop
    ctx->pc = 0x1bde04u;
    // NOP
    // 0x1bde08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bde08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bde0c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1bde0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1bde10: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1bde10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1bde14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bde14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bde18: 0x2450c3d0  addiu       $s0, $v0, -0x3C30
    ctx->pc = 0x1bde18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951888));
    // 0x1bde1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bde1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bde20: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x1bde20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1bde24: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1bde24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1bde28: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1bde28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bde2c: 0x0  nop
    ctx->pc = 0x1bde2cu;
    // NOP
label_1bde30:
    // 0x1bde30: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bde30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bde34: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BDE34u;
    {
        const bool branch_taken_0x1bde34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1bde34) {
            ctx->pc = 0x1BDE38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BDE34u;
            // 0x1bde38: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BDE48u;
            goto label_1bde48;
        }
    }
    ctx->pc = 0x1BDE3Cu;
    // 0x1bde3c: 0xc06f744  jal         func_1BDD10
    ctx->pc = 0x1BDE3Cu;
    SET_GPR_U32(ctx, 31, 0x1BDE44u);
    ctx->pc = 0x1BDE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDE3Cu;
    // 0x1bde40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDD10u;
    goto label_1bdd10;
    ctx->pc = 0x1BDE44u;
label_1bde44:
    // 0x1bde44: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1bde44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1bde48:
    // 0x1bde48: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1BDE48u;
    {
        const bool branch_taken_0x1bde48 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1BDE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE48u;
        // 0x1bde4c: 0x2610003c  addiu       $s0, $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bde48) {
            ctx->pc = 0x1BDE30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bde30;
        }
    }
    ctx->pc = 0x1BDE50u;
    // 0x1bde50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bde50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bde54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bde54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bde58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bde58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bde5c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1bde5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bde60: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE60u;
        // 0x1bde64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDE68u;
    // 0x1bde68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bde68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bde6c: 0x3c0301bf  lui         $v1, 0x1BF
    ctx->pc = 0x1bde6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)447 << 16));
    // 0x1bde70: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1bde70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1bde74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bde74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bde78: 0x24635340  addiu       $v1, $v1, 0x5340
    ctx->pc = 0x1bde78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21312));
    // 0x1bde7c: 0x244289b8  addiu       $v0, $v0, -0x7648
    ctx->pc = 0x1bde7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937016));
    // 0x1bde80: 0x3c1001bf  lui         $s0, 0x1BF
    ctx->pc = 0x1bde80u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)447 << 16));
    // 0x1bde84: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bde84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bde88: 0x26105350  addiu       $s0, $s0, 0x5350
    ctx->pc = 0x1bde88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21328));
    // 0x1bde8c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1bde8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1bde90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bde90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bde94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bde98: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1BDE98u;
    SET_GPR_U32(ctx, 31, 0x1BDEA0u);
    ctx->pc = 0x1BDE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDE98u;
    // 0x1bde9c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1BDE98u, 0x1BDEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDEA0u;
label_1bdea0:
    // 0x1bdea0: 0x3c0701bf  lui         $a3, 0x1BF
    ctx->pc = 0x1bdea0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)447 << 16));
    // 0x1bdea4: 0x26040003  addiu       $a0, $s0, 0x3
    ctx->pc = 0x1bdea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x1bdea8: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x1bdea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1bdeac: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1bdeacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bdeb0: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1bdeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bdeb4: 0x908023  subu        $s0, $a0, $s0
    ctx->pc = 0x1bdeb4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1bdeb8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bdeb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bdebc: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1bdebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1bdec0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bdec0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bdec4: 0x2445000f  addiu       $a1, $v0, 0xF
    ctx->pc = 0x1bdec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1bdec8: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1bdec8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1bdecc: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x1bdeccu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1bded0: 0x3c0601bf  lui         $a2, 0x1BF
    ctx->pc = 0x1bded0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)447 << 16));
    // 0x1bded4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1bded4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1bded8: 0xace45344  sw          $a0, 0x5344($a3)
    ctx->pc = 0x1bded8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 21316), GPR_U32(ctx, 4));
    // 0x1bdedc: 0xacc25348  sw          $v0, 0x5348($a2)
    ctx->pc = 0x1bdedcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 21320), GPR_U32(ctx, 2));
    // 0x1bdee0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDEE0u;
        // 0x1bdee4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDEE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDEE8u;
    // 0x1bdee8: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1bdee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1bdeec: 0x3c0301bf  lui         $v1, 0x1BF
    ctx->pc = 0x1bdeecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)447 << 16));
    // 0x1bdef0: 0xac405344  sw          $zero, 0x5344($v0)
    ctx->pc = 0x1bdef0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 21316), GPR_U32(ctx, 0));
    // 0x1bdef4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDEF4u;
        // 0x1bdef8: 0xac605348  sw          $zero, 0x5348($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 21320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDEF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDEFCu;
    // 0x1bdefc: 0x0  nop
    ctx->pc = 0x1bdefcu;
    // NOP
    if (ctx->pc == 0x1bdefcu) { ctx->pc = 0x1bdf00u; }
}
