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

// Function: sub_001A5710
// Address: 0x1a5710 - 0x1a57f0
void sub_001A5710_0x1a5710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5710_0x1a5710");
#endif

    switch (ctx->pc) {
        case 0x1a5750u: goto label_1a5750;
        case 0x1a5770u: goto label_1a5770;
        case 0x1a5790u: goto label_1a5790;
        case 0x1a57a8u: goto label_1a57a8;
        default: break;
    }

    ctx->pc = 0x1a5710u;

    // 0x1a5710: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a5710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a5714: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x1a5714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x1a5718: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a5718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1a571c: 0x2463b8a4  addiu       $v1, $v1, -0x475C
    ctx->pc = 0x1a571cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949028));
    // 0x1a5720: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a5720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a5724: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a5724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a5728: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a5728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a572c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a572cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a5730: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a5730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a5734: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1a5734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a5738: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1a5738u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a573c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a573cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a5740: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1a5740u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a5744: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1A5744u;
    {
        const bool branch_taken_0x1a5744 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5744u;
        // 0x1a5748: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5744) {
            ctx->pc = 0x1A57C8u;
            goto label_1a57c8;
        }
    }
    ctx->pc = 0x1A574Cu;
    // 0x1a574c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1a574cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1a5750:
    // 0x1a5750: 0x14740019  bne         $v1, $s4, . + 4 + (0x19 << 2)
    ctx->pc = 0x1A5750u;
    {
        const bool branch_taken_0x1a5750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x1a5750) {
            ctx->pc = 0x1A57B8u;
            goto label_1a57b8;
        }
    }
    ctx->pc = 0x1A5758u;
    // 0x1a5758: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x1a5758u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1a575c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a575cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5760: 0x26930004  addiu       $s3, $s4, 0x4
    ctx->pc = 0x1a5760u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x1a5764: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a5764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a5768: 0xc0695a8  jal         func_1A56A0
    ctx->pc = 0x1A5768u;
    SET_GPR_U32(ctx, 31, 0x1A5770u);
    ctx->pc = 0x1A576Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5768u;
    // 0x1a576c: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A56A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A56A0u, 0x1A5768u, 0x1A5770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5770u;
label_1a5770:
    // 0x1a5770: 0x2e010002  sltiu       $at, $s0, 0x2
    ctx->pc = 0x1a5770u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a5774: 0x14200010  bnez        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A5774u;
    {
        const bool branch_taken_0x1a5774 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5774) {
            ctx->pc = 0x1A57B8u;
            goto label_1a57b8;
        }
    }
    ctx->pc = 0x1A577Cu;
    // 0x1a577c: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x1a577cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a5780: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1a5780u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1a5784: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A5784u;
    {
        const bool branch_taken_0x1a5784 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5784u;
        // 0x1a5788: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5784) {
            ctx->pc = 0x1A57B8u;
            goto label_1a57b8;
        }
    }
    ctx->pc = 0x1A578Cu;
    // 0x1a578c: 0x0  nop
    ctx->pc = 0x1a578cu;
    // NOP
label_1a5790:
    // 0x1a5790: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1a5790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1a5794: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5798: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1a5798u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1a579c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1a579cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1a57a0: 0xc0695a8  jal         func_1A56A0
    ctx->pc = 0x1A57A0u;
    SET_GPR_U32(ctx, 31, 0x1A57A8u);
    ctx->pc = 0x1A57A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A57A0u;
    // 0x1a57a4: 0x432823  subu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A56A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A56A0u, 0x1A57A0u, 0x1A57A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A57A8u;
label_1a57a8:
    // 0x1a57a8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a57a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1a57ac: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x1a57acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1a57b0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1A57B0u;
    {
        const bool branch_taken_0x1a57b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A57B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A57B0u;
        // 0x1a57b4: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a57b0) {
            ctx->pc = 0x1A5790u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a5790;
        }
    }
    ctx->pc = 0x1A57B8u;
label_1a57b8:
    // 0x1a57b8: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x1a57b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a57bc: 0x5620ffe4  bnel        $s1, $zero, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1A57BCu;
    {
        const bool branch_taken_0x1a57bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a57bc) {
            ctx->pc = 0x1A57C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A57BCu;
            // 0x1a57c0: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5750u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a5750;
        }
    }
    ctx->pc = 0x1A57C4u;
    // 0x1a57c4: 0x0  nop
    ctx->pc = 0x1a57c4u;
    // NOP
label_1a57c8:
    // 0x1a57c8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a57c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a57cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a57ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a57d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a57d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a57d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a57d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a57d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a57d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a57dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a57dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a57e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A57E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A57E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A57E0u;
        // 0x1a57e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A57E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A57E8u;
    // 0x1a57e8: 0x0  nop
    ctx->pc = 0x1a57e8u;
    // NOP
    // 0x1a57ec: 0x0  nop
    ctx->pc = 0x1a57ecu;
    // NOP
    if (ctx->pc == 0x1a57ecu) { ctx->pc = 0x1a57f0u; }
}
