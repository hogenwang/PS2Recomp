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

// Function: sub_0012E718
// Address: 0x12e718 - 0x12e830
void sub_0012E718_0x12e718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E718_0x12e718");
#endif

    switch (ctx->pc) {
        case 0x12e758u: goto label_12e758;
        case 0x12e79cu: goto label_12e79c;
        case 0x12e7d8u: goto label_12e7d8;
        case 0x12e800u: goto label_12e800;
        default: break;
    }

    ctx->pc = 0x12e718u;

    // 0x12e718: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12e718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12e71c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12e71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12e720: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12e720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12e724: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12e724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e728: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x12e728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x12e72c: 0x54800006  bnel        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x12E72Cu;
    {
        const bool branch_taken_0x12e72c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e72c) {
            ctx->pc = 0x12E730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E72Cu;
            // 0x12e730: 0x8c8f0038  lw          $t7, 0x38($a0) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E748u;
            goto label_12e748;
        }
    }
    ctx->pc = 0x12E734u;
    // 0x12e734: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x12e734u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
    // 0x12e738: 0x8deebde8  lw          $t6, -0x4218($t7)
    ctx->pc = 0x12e738u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294950376)));
    // 0x12e73c: 0xae0e0054  sw          $t6, 0x54($s0)
    ctx->pc = 0x12e73cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 14));
    // 0x12e740: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x12e740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e744: 0x8c8f0038  lw          $t7, 0x38($a0)
    ctx->pc = 0x12e744u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_12e748:
    // 0x12e748: 0x55e00004  bnel        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E748u;
    {
        const bool branch_taken_0x12e748 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e748) {
            ctx->pc = 0x12E74Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E748u;
            // 0x12e74c: 0x960e000c  lhu         $t6, 0xC($s0) (Delay Slot)
            SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E75Cu;
            goto label_12e75c;
        }
    }
    ctx->pc = 0x12E750u;
    // 0x12e750: 0xc049360  jal         func_124D80
    ctx->pc = 0x12E750u;
    SET_GPR_U32(ctx, 31, 0x12E758u);
    ctx->pc = 0x124D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124D80u, 0x12E750u, 0x12E758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E758u;
label_12e758:
    // 0x12e758: 0x960e000c  lhu         $t6, 0xC($s0)
    ctx->pc = 0x12e758u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_12e75c:
    // 0x12e75c: 0x31cf0008  andi        $t7, $t6, 0x8
    ctx->pc = 0x12e75cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
    // 0x12e760: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x12E760u;
    {
        const bool branch_taken_0x12e760 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e760) {
            ctx->pc = 0x12E764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E760u;
            // 0x12e764: 0x8e0d0010  lw          $t5, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E7C8u;
            goto label_12e7c8;
        }
    }
    ctx->pc = 0x12E768u;
    // 0x12e768: 0x31cf0010  andi        $t7, $t6, 0x10
    ctx->pc = 0x12e768u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)16);
    // 0x12e76c: 0x11e00025  beqz        $t7, . + 4 + (0x25 << 2)
    ctx->pc = 0x12E76Cu;
    {
        const bool branch_taken_0x12e76c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E76Cu;
        // 0x12e770: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e76c) {
            ctx->pc = 0x12E804u;
            goto label_12e804;
        }
    }
    ctx->pc = 0x12E774u;
    // 0x12e774: 0x31cf0004  andi        $t7, $t6, 0x4
    ctx->pc = 0x12e774u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)4);
    // 0x12e778: 0x51e00011  beql        $t7, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x12E778u;
    {
        const bool branch_taken_0x12e778 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e778) {
            ctx->pc = 0x12E77Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E778u;
            // 0x12e77c: 0x8e0d0010  lw          $t5, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E7C0u;
            goto label_12e7c0;
        }
    }
    ctx->pc = 0x12E780u;
    // 0x12e780: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x12e780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x12e784: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12E784u;
    {
        const bool branch_taken_0x12e784 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E784u;
        // 0x12e788: 0x260f0040  addiu       $t7, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e784) {
            ctx->pc = 0x12E7A4u;
            goto label_12e7a4;
        }
    }
    ctx->pc = 0x12E78Cu;
    // 0x12e78c: 0x50af0005  beql        $a1, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12E78Cu;
    {
        const bool branch_taken_0x12e78c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 15));
        if (branch_taken_0x12e78c) {
            ctx->pc = 0x12E790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E78Cu;
            // 0x12e790: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E7A4u;
            goto label_12e7a4;
        }
    }
    ctx->pc = 0x12E794u;
    // 0x12e794: 0xc04943c  jal         func_1250F0
    ctx->pc = 0x12E794u;
    SET_GPR_U32(ctx, 31, 0x12E79Cu);
    ctx->pc = 0x12E798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E794u;
    // 0x12e798: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1250F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1250F0u, 0x12E794u, 0x12E79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E79Cu;
label_12e79c:
    // 0x12e79c: 0x960e000c  lhu         $t6, 0xC($s0)
    ctx->pc = 0x12e79cu;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12e7a0: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x12e7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_12e7a4:
    // 0x12e7a4: 0x8e0d0010  lw          $t5, 0x10($s0)
    ctx->pc = 0x12e7a4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x12e7a8: 0x240fffdb  addiu       $t7, $zero, -0x25
    ctx->pc = 0x12e7a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967259));
    // 0x12e7ac: 0x1cf7824  and         $t7, $t6, $t7
    ctx->pc = 0x12e7acu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
    // 0x12e7b0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x12e7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x12e7b4: 0xa60f000c  sh          $t7, 0xC($s0)
    ctx->pc = 0x12e7b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
    // 0x12e7b8: 0x1e0702d  daddu       $t6, $t7, $zero
    ctx->pc = 0x12e7b8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e7bc: 0xae0d0000  sw          $t5, 0x0($s0)
    ctx->pc = 0x12e7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 13));
label_12e7c0:
    // 0x12e7c0: 0x35cf0008  ori         $t7, $t6, 0x8
    ctx->pc = 0x12e7c0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)8);
    // 0x12e7c4: 0xa60f000c  sh          $t7, 0xC($s0)
    ctx->pc = 0x12e7c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
label_12e7c8:
    // 0x12e7c8: 0x55a00004  bnel        $t5, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E7C8u;
    {
        const bool branch_taken_0x12e7c8 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e7c8) {
            ctx->pc = 0x12E7CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E7C8u;
            // 0x12e7cc: 0x960e000c  lhu         $t6, 0xC($s0) (Delay Slot)
            SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E7DCu;
            goto label_12e7dc;
        }
    }
    ctx->pc = 0x12E7D0u;
    // 0x12e7d0: 0xc0498ae  jal         func_1262B8
    ctx->pc = 0x12E7D0u;
    SET_GPR_U32(ctx, 31, 0x12E7D8u);
    ctx->pc = 0x12E7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E7D0u;
    // 0x12e7d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1262B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1262B8u, 0x12E7D0u, 0x12E7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E7D8u;
label_12e7d8:
    // 0x12e7d8: 0x960e000c  lhu         $t6, 0xC($s0)
    ctx->pc = 0x12e7d8u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_12e7dc:
    // 0x12e7dc: 0x31cf0001  andi        $t7, $t6, 0x1
    ctx->pc = 0x12e7dcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x12e7e0: 0xf7c00  sll         $t7, $t7, 16
    ctx->pc = 0x12e7e0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 16));
    // 0x12e7e4: 0xf7c03  sra         $t7, $t7, 16
    ctx->pc = 0x12e7e4u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 16));
    // 0x12e7e8: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x12E7E8u;
    {
        const bool branch_taken_0x12e7e8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E7E8u;
        // 0x12e7ec: 0x31cf0002  andi        $t7, $t6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e7e8) {
            ctx->pc = 0x12E814u;
            goto label_12e814;
        }
    }
    ctx->pc = 0x12E7F0u;
    // 0x12e7f0: 0x8e0f0014  lw          $t7, 0x14($s0)
    ctx->pc = 0x12e7f0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x12e7f4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x12e7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x12e7f8: 0xf7823  negu        $t7, $t7
    ctx->pc = 0x12e7f8u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 15)));
    // 0x12e7fc: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x12e7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
label_12e800:
    // 0x12e800: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12e800u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12e804:
    // 0x12e804: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12e804u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e808: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12e808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12e80c: 0x3e00008  jr          $ra
    ctx->pc = 0x12E80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E80Cu;
        // 0x12e810: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E814u;
label_12e814:
    // 0x12e814: 0x15e00002  bnez        $t7, . + 4 + (0x2 << 2)
    ctx->pc = 0x12E814u;
    {
        const bool branch_taken_0x12e814 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E814u;
        // 0x12e818: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e814) {
            ctx->pc = 0x12E820u;
            goto label_12e820;
        }
    }
    ctx->pc = 0x12E81Cu;
    // 0x12e81c: 0x8e0e0014  lw          $t6, 0x14($s0)
    ctx->pc = 0x12e81cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_12e820:
    // 0x12e820: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x12E820u;
    {
        const bool branch_taken_0x12e820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E820u;
        // 0x12e824: 0xae0e0008  sw          $t6, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e820) {
            ctx->pc = 0x12E800u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e800;
        }
    }
    ctx->pc = 0x12E828u;
    // 0x12e828: 0x0  nop
    ctx->pc = 0x12e828u;
    // NOP
    // 0x12e82c: 0x0  nop
    ctx->pc = 0x12e82cu;
    // NOP
    if (ctx->pc == 0x12e82cu) { ctx->pc = 0x12e830u; }
}
