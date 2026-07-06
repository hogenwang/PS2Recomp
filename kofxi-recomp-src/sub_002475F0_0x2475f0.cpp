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

// Function: sub_002475F0
// Address: 0x2475f0 - 0x247750
void sub_002475F0_0x2475f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002475F0_0x2475f0");
#endif

    switch (ctx->pc) {
        case 0x247640u: goto label_247640;
        case 0x247648u: goto label_247648;
        case 0x24767cu: goto label_24767c;
        case 0x24769cu: goto label_24769c;
        case 0x2476f0u: goto label_2476f0;
        case 0x247708u: goto label_247708;
        case 0x247718u: goto label_247718;
        default: break;
    }

    ctx->pc = 0x2475f0u;

    // 0x2475f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2475f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2475f4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2475f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2475f8: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x2475f8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
    // 0x2475fc: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2475fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x247600: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x247600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x247604: 0x240b82d  daddu       $s7, $s2, $zero
    ctx->pc = 0x247604u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247608: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x247608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x24760c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x24760cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x247610: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x247610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x247614: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x247614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x247618: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x247618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x24761c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24761cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x247620: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x247620u;
    {
        const bool branch_taken_0x247620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247620u;
        // 0x247624: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247620) {
            ctx->pc = 0x247724u;
            goto label_247724;
        }
    }
    ctx->pc = 0x247628u;
    // 0x247628: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x247628u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24762c: 0x26510060  addiu       $s1, $s2, 0x60
    ctx->pc = 0x24762cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x247630: 0x3c15003f  lui         $s5, 0x3F
    ctx->pc = 0x247630u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)63 << 16));
    // 0x247634: 0x24140800  addiu       $s4, $zero, 0x800
    ctx->pc = 0x247634u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x247638: 0x24131000  addiu       $s3, $zero, 0x1000
    ctx->pc = 0x247638u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x24763c: 0x0  nop
    ctx->pc = 0x24763cu;
    // NOP
label_247640:
    // 0x247640: 0xc08c682  jal         func_231A08
    ctx->pc = 0x247640u;
    SET_GPR_U32(ctx, 31, 0x247648u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x247640u, 0x247648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247648u;
label_247648:
    // 0x247648: 0x8ed00060  lw          $s0, 0x60($s6)
    ctx->pc = 0x247648u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 96)));
    // 0x24764c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24764Cu;
    {
        const bool branch_taken_0x24764c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x247650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24764Cu;
        // 0x247650: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24764c) {
            ctx->pc = 0x247674u;
            goto label_247674;
        }
    }
    ctx->pc = 0x247654u;
    // 0x247654: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x247654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x247658: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x247658u;
    {
        const bool branch_taken_0x247658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24765Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247658u;
        // 0x24765c: 0xaee20060  sw          $v0, 0x60($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247658) {
            ctx->pc = 0x247664u;
            goto label_247664;
        }
    }
    ctx->pc = 0x247660u;
    // 0x247660: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x247660u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_247664:
    // 0x247664: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x247664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x247668: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x247668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x24766c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24766cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x247670: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x247670u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_247674:
    // 0x247674: 0xc08c698  jal         func_231A60
    ctx->pc = 0x247674u;
    SET_GPR_U32(ctx, 31, 0x24767Cu);
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x247674u, 0x24767Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24767Cu;
label_24767c:
    // 0x24767c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24767Cu;
    {
        const bool branch_taken_0x24767c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24767c) {
            ctx->pc = 0x247694u;
            goto label_247694;
        }
    }
    ctx->pc = 0x247684u;
    // 0x247684: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x247684u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x247688: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x247688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x24768c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24768Cu;
    {
        const bool branch_taken_0x24768c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24768c) {
            ctx->pc = 0x247690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24768Cu;
            // 0x247690: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2476A0u;
            goto label_2476a0;
        }
    }
    ctx->pc = 0x247694u;
label_247694:
    // 0x247694: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x247694u;
    SET_GPR_U32(ctx, 31, 0x24769Cu);
    ctx->pc = 0x247698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247694u;
    // 0x247698: 0x26a46898  addiu       $a0, $s5, 0x6898 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 26776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D780u, 0x247694u, 0x24769Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24769Cu;
label_24769c:
    // 0x24769c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x24769cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2476a0:
    // 0x2476a0: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x2476a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2476a4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2476A4u;
    {
        const bool branch_taken_0x2476a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2476a4) {
            ctx->pc = 0x247710u;
            goto label_247710;
        }
    }
    ctx->pc = 0x2476ACu;
    // 0x2476ac: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2476acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2476b0: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2476B0u;
    {
        const bool branch_taken_0x2476b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2476b0) {
            ctx->pc = 0x247710u;
            goto label_247710;
        }
    }
    ctx->pc = 0x2476B8u;
    // 0x2476b8: 0x90a20004  lbu         $v0, 0x4($a1)
    ctx->pc = 0x2476b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2476bc: 0x90a30005  lbu         $v1, 0x5($a1)
    ctx->pc = 0x2476bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x2476c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2476c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2476c4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2476c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2476c8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2476c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2476cc: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2476ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2476d0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2476D0u;
    {
        const bool branch_taken_0x2476d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2476d0) {
            ctx->pc = 0x247710u;
            goto label_247710;
        }
    }
    ctx->pc = 0x2476D8u;
    // 0x2476d8: 0x90a40003  lbu         $a0, 0x3($a1)
    ctx->pc = 0x2476d8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x2476dc: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x2476dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2476e0: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x2476e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x2476e4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2476e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2476e8: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x2476E8u;
    SET_GPR_U32(ctx, 31, 0x2476F0u);
    ctx->pc = 0x2476ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2476E8u;
    // 0x2476ec: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x2476E8u, 0x2476F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2476F0u;
label_2476f0:
    // 0x2476f0: 0x10540003  beq         $v0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2476F0u;
    {
        const bool branch_taken_0x2476f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x2476f0) {
            ctx->pc = 0x247700u;
            goto label_247700;
        }
    }
    ctx->pc = 0x2476F8u;
    // 0x2476f8: 0x14530005  bne         $v0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2476F8u;
    {
        const bool branch_taken_0x2476f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2476f8) {
            ctx->pc = 0x247710u;
            goto label_247710;
        }
    }
    ctx->pc = 0x247700u;
label_247700:
    // 0x247700: 0xc091dd4  jal         func_247750
    ctx->pc = 0x247700u;
    SET_GPR_U32(ctx, 31, 0x247708u);
    ctx->pc = 0x247704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247700u;
    // 0x247704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247750u, 0x247700u, 0x247708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247708u;
label_247708:
    // 0x247708: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x247708u;
    {
        const bool branch_taken_0x247708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247708u;
        // 0x24770c: 0x8e420060  lw          $v0, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247708) {
            ctx->pc = 0x24771Cu;
            goto label_24771c;
        }
    }
    ctx->pc = 0x247710u;
label_247710:
    // 0x247710: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x247710u;
    SET_GPR_U32(ctx, 31, 0x247718u);
    ctx->pc = 0x247714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247710u;
    // 0x247714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x247710u, 0x247718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247718u;
label_247718:
    // 0x247718: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x247718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_24771c:
    // 0x24771c: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x24771Cu;
    {
        const bool branch_taken_0x24771c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24771c) {
            ctx->pc = 0x247640u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_247640;
        }
    }
    ctx->pc = 0x247724u;
label_247724:
    // 0x247724: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x247724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x247728: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x247728u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24772c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x24772cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x247730: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x247730u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x247734: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x247734u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x247738: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x247738u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24773c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24773cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247740: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x247740u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247744: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x247744u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247748: 0x3e00008  jr          $ra
    ctx->pc = 0x247748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247748u;
        // 0x24774c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247750u;
}
