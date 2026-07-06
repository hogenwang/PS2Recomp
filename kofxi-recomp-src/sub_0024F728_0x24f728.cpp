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

// Function: sub_0024F728
// Address: 0x24f728 - 0x24f9c0
void sub_0024F728_0x24f728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F728_0x24f728");
#endif

    switch (ctx->pc) {
        case 0x24f758u: goto label_24f758;
        case 0x24f760u: goto label_24f760;
        case 0x24f784u: goto label_24f784;
        case 0x24f7c0u: goto label_24f7c0;
        case 0x24f808u: goto label_24f808;
        case 0x24f810u: goto label_24f810;
        case 0x24f82cu: goto label_24f82c;
        case 0x24f83cu: goto label_24f83c;
        case 0x24f850u: goto label_24f850;
        case 0x24f87cu: goto label_24f87c;
        case 0x24f8b8u: goto label_24f8b8;
        case 0x24f8c0u: goto label_24f8c0;
        case 0x24f8e4u: goto label_24f8e4;
        case 0x24f920u: goto label_24f920;
        case 0x24f93cu: goto label_24f93c;
        case 0x24f94cu: goto label_24f94c;
        case 0x24f968u: goto label_24f968;
        case 0x24f980u: goto label_24f980;
        default: break;
    }

    ctx->pc = 0x24f728u;

label_24f728:
    // 0x24f728: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x24f728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x24f72c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24f72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24f730: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x24f730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x24f734: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24f734u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f738: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x24f738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x24f73c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24f73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24f740: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24f740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24f744: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x24f744u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x24f748: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x24F748u;
    {
        const bool branch_taken_0x24f748 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F748u;
        // 0x24f74c: 0x3c13003a  lui         $s3, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f748) {
            ctx->pc = 0x24F798u;
            goto label_24f798;
        }
    }
    ctx->pc = 0x24F750u;
    // 0x24f750: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x24f750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x24f754: 0x0  nop
    ctx->pc = 0x24f754u;
    // NOP
label_24f758:
    // 0x24f758: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x24F758u;
    SET_GPR_U32(ctx, 31, 0x24F760u);
    ctx->pc = 0x24F75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F758u;
    // 0x24f75c: 0x8e120000  lw          $s2, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x24F758u, 0x24F760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F760u;
label_24f760:
    // 0x24f760: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x24f760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24f764: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24F764u;
    {
        const bool branch_taken_0x24f764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F764u;
        // 0x24f768: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f764) {
            ctx->pc = 0x24F778u;
            goto label_24f778;
        }
    }
    ctx->pc = 0x24F76Cu;
    // 0x24f76c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x24f76cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x24f770: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x24f770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24f774: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x24f774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_24f778:
    // 0x24f778: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x24f778u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x24f77c: 0xc098560  jal         func_261580
    ctx->pc = 0x24F77Cu;
    SET_GPR_U32(ctx, 31, 0x24F784u);
    ctx->pc = 0x24F780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F77Cu;
    // 0x24f780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x24F77Cu, 0x24F784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F784u;
label_24f784:
    // 0x24f784: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x24f784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f788: 0x5600fff3  bnel        $s0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x24F788u;
    {
        const bool branch_taken_0x24f788 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x24f788) {
            ctx->pc = 0x24F78Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F788u;
            // 0x24f78c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F758u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24f758;
        }
    }
    ctx->pc = 0x24F790u;
    // 0x24f790: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24F790u;
    {
        const bool branch_taken_0x24f790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F790u;
        // 0x24f794: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f790) {
            ctx->pc = 0x24F7A0u;
            goto label_24f7a0;
        }
    }
    ctx->pc = 0x24F798u;
label_24f798:
    // 0x24f798: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x24f798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24f79c: 0x0  nop
    ctx->pc = 0x24f79cu;
    // NOP
label_24f7a0:
    // 0x24f7a0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24F7A0u;
    {
        const bool branch_taken_0x24f7a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F7A0u;
        // 0x24f7a4: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f7a0) {
            ctx->pc = 0x24F7B4u;
            goto label_24f7b4;
        }
    }
    ctx->pc = 0x24F7A8u;
    // 0x24f7a8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x24f7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x24f7ac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x24f7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24f7b0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x24f7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_24f7b4:
    // 0x24f7b4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x24f7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x24f7b8: 0xc098560  jal         func_261580
    ctx->pc = 0x24F7B8u;
    SET_GPR_U32(ctx, 31, 0x24F7C0u);
    ctx->pc = 0x24F7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F7B8u;
    // 0x24f7bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x24F7B8u, 0x24F7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F7C0u;
label_24f7c0:
    // 0x24f7c0: 0x8e621030  lw          $v0, 0x1030($s3)
    ctx->pc = 0x24f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4144)));
    // 0x24f7c4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x24f7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24f7c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24f7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24f7cc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24f7ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24f7d0: 0xae621030  sw          $v0, 0x1030($s3)
    ctx->pc = 0x24f7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4144), GPR_U32(ctx, 2));
    // 0x24f7d4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x24f7d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24f7d8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24f7d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f7dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24f7dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f7e0: 0x3e00008  jr          $ra
    ctx->pc = 0x24F7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F7E0u;
        // 0x24f7e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F7E8u;
    // 0x24f7e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x24f7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x24f7ec: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x24f7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x24f7f0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x24f7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x24f7f4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x24f7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x24f7f8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24f7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24f7fc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24f7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24f800: 0xc08c682  jal         func_231A08
    ctx->pc = 0x24F800u;
    SET_GPR_U32(ctx, 31, 0x24F808u);
    ctx->pc = 0x24F804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F800u;
    // 0x24f804: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x24F800u, 0x24F808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F808u;
label_24f808:
    // 0x24f808: 0xc08c682  jal         func_231A08
    ctx->pc = 0x24F808u;
    SET_GPR_U32(ctx, 31, 0x24F810u);
    ctx->pc = 0x24F80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F808u;
    // 0x24f80c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x24F808u, 0x24F810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F810u;
label_24f810:
    // 0x24f810: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24f810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f814: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x24f814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x24f818: 0x8c6211d4  lw          $v0, 0x11D4($v1)
    ctx->pc = 0x24f818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4564)));
    // 0x24f81c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F81Cu;
    {
        const bool branch_taken_0x24f81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F81Cu;
        // 0x24f820: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f81c) {
            ctx->pc = 0x24F834u;
            goto label_24f834;
        }
    }
    ctx->pc = 0x24F824u;
    // 0x24f824: 0xc08c698  jal         func_231A60
    ctx->pc = 0x24F824u;
    SET_GPR_U32(ctx, 31, 0x24F82Cu);
    ctx->pc = 0x24F828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F824u;
    // 0x24f828: 0x3c12003a  lui         $s2, 0x3A (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x24F824u, 0x24F82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F82Cu;
label_24f82c:
    // 0x24f82c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24F82Cu;
    {
        const bool branch_taken_0x24f82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F82Cu;
        // 0x24f830: 0x8e441190  lw          $a0, 0x1190($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f82c) {
            ctx->pc = 0x24F844u;
            goto label_24f844;
        }
    }
    ctx->pc = 0x24F834u;
label_24f834:
    // 0x24f834: 0xc08c698  jal         func_231A60
    ctx->pc = 0x24F834u;
    SET_GPR_U32(ctx, 31, 0x24F83Cu);
    ctx->pc = 0x24F838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F834u;
    // 0x24f838: 0xac6211d4  sw          $v0, 0x11D4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4564), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x24F834u, 0x24F83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F83Cu;
label_24f83c:
    // 0x24f83c: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x24f83cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
    // 0x24f840: 0x8e441190  lw          $a0, 0x1190($s2)
    ctx->pc = 0x24f840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4496)));
label_24f844:
    // 0x24f844: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x24F844u;
    {
        const bool branch_taken_0x24f844 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F844u;
        // 0x24f848: 0x3c13003a  lui         $s3, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f844) {
            ctx->pc = 0x24F890u;
            goto label_24f890;
        }
    }
    ctx->pc = 0x24F84Cu;
    // 0x24f84c: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x24f84cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
label_24f850:
    // 0x24f850: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x24f850u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24f854: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24f854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x24f858: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x24f858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24f85c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x24F85Cu;
    {
        const bool branch_taken_0x24f85c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F85Cu;
        // 0x24f860: 0xa0820008  sb          $v0, 0x8($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f85c) {
            ctx->pc = 0x24F87Cu;
            goto label_24f87c;
        }
    }
    ctx->pc = 0x24F864u;
    // 0x24f864: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x24f864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x24f868: 0x246310a8  addiu       $v1, $v1, 0x10A8
    ctx->pc = 0x24f868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4264));
    // 0x24f86c: 0xdc620040  ld          $v0, 0x40($v1)
    ctx->pc = 0x24f86cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x24f870: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x24f870u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x24f874: 0xc093dca  jal         func_24F728
    ctx->pc = 0x24F874u;
    SET_GPR_U32(ctx, 31, 0x24F87Cu);
    ctx->pc = 0x24F878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F874u;
    // 0x24f878: 0xfc620040  sd          $v0, 0x40($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 64), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F728u;
    goto label_24f728;
    ctx->pc = 0x24F87Cu;
label_24f87c:
    // 0x24f87c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24f87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f880: 0x5480fff3  bnel        $a0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x24F880u;
    {
        const bool branch_taken_0x24f880 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x24f880) {
            ctx->pc = 0x24F884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F880u;
            // 0x24f884: 0x90820008  lbu         $v0, 0x8($a0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24f850;
        }
    }
    ctx->pc = 0x24F888u;
    // 0x24f888: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24F888u;
    {
        const bool branch_taken_0x24f888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F888u;
        // 0x24f88c: 0x8e631034  lw          $v1, 0x1034($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f888) {
            ctx->pc = 0x24F894u;
            goto label_24f894;
        }
    }
    ctx->pc = 0x24F890u;
label_24f890:
    // 0x24f890: 0x8e631034  lw          $v1, 0x1034($s3)
    ctx->pc = 0x24f890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4148)));
label_24f894:
    // 0x24f894: 0x4600011  bltz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x24F894u;
    {
        const bool branch_taken_0x24f894 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x24F898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F894u;
        // 0x24f898: 0x3c11003a  lui         $s1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f894) {
            ctx->pc = 0x24F8DCu;
            goto label_24f8dc;
        }
    }
    ctx->pc = 0x24F89Cu;
    // 0x24f89c: 0x8e221030  lw          $v0, 0x1030($s1)
    ctx->pc = 0x24f89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4144)));
    // 0x24f8a0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x24f8a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24f8a4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x24F8A4u;
    {
        const bool branch_taken_0x24f8a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F8A4u;
        // 0x24f8a8: 0x8e421190  lw          $v0, 0x1190($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f8a4) {
            ctx->pc = 0x24F8DCu;
            goto label_24f8dc;
        }
    }
    ctx->pc = 0x24F8ACu;
    // 0x24f8ac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24F8ACu;
    {
        const bool branch_taken_0x24f8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F8ACu;
        // 0x24f8b0: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f8ac) {
            ctx->pc = 0x24F8DCu;
            goto label_24f8dc;
        }
    }
    ctx->pc = 0x24F8B4u;
    // 0x24f8b4: 0x0  nop
    ctx->pc = 0x24f8b4u;
    // NOP
label_24f8b8:
    // 0x24f8b8: 0xc093dca  jal         func_24F728
    ctx->pc = 0x24F8B8u;
    SET_GPR_U32(ctx, 31, 0x24F8C0u);
    ctx->pc = 0x24F8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F8B8u;
    // 0x24f8bc: 0x8e041190  lw          $a0, 0x1190($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4496)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F728u;
    goto label_24f728;
    ctx->pc = 0x24F8C0u;
label_24f8c0:
    // 0x24f8c0: 0x8e231030  lw          $v1, 0x1030($s1)
    ctx->pc = 0x24f8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4144)));
    // 0x24f8c4: 0x8e621034  lw          $v0, 0x1034($s3)
    ctx->pc = 0x24f8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4148)));
    // 0x24f8c8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x24f8c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x24f8cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24F8CCu;
    {
        const bool branch_taken_0x24f8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F8CCu;
        // 0x24f8d0: 0x8e021190  lw          $v0, 0x1190($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f8cc) {
            ctx->pc = 0x24F8DCu;
            goto label_24f8dc;
        }
    }
    ctx->pc = 0x24F8D4u;
    // 0x24f8d4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x24F8D4u;
    {
        const bool branch_taken_0x24f8d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24f8d4) {
            ctx->pc = 0x24F8B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24f8b8;
        }
    }
    ctx->pc = 0x24F8DCu;
label_24f8dc:
    // 0x24f8dc: 0xc0942ca  jal         func_250B28
    ctx->pc = 0x24F8DCu;
    SET_GPR_U32(ctx, 31, 0x24F8E4u);
    ctx->pc = 0x250B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250B28u, 0x24F8DCu, 0x24F8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F8E4u;
label_24f8e4:
    // 0x24f8e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24f8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f8e8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x24f8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24f8ec: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x24f8ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24f8f0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x24f8f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24f8f4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24f8f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24f8f8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24f8f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f8fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24f8fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f900: 0x808c698  j           func_231A60
    ctx->pc = 0x24F900u;
    ctx->pc = 0x24F904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F900u;
    // 0x24f904: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    sub_00231A60_0x231a60(rdram, ctx, runtime); return;
    ctx->pc = 0x24F908u;
    // 0x24f908: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24f908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24f90c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x24f90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x24f910: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24f910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24f914: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24f914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24f918: 0xc08c682  jal         func_231A08
    ctx->pc = 0x24F918u;
    SET_GPR_U32(ctx, 31, 0x24F920u);
    ctx->pc = 0x24F91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F918u;
    // 0x24f91c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x24F918u, 0x24F920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F920u;
label_24f920:
    // 0x24f920: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24f920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f924: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x24f924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x24f928: 0x8c6211d4  lw          $v0, 0x11D4($v1)
    ctx->pc = 0x24f928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4564)));
    // 0x24f92c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F92Cu;
    {
        const bool branch_taken_0x24f92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F92Cu;
        // 0x24f930: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f92c) {
            ctx->pc = 0x24F944u;
            goto label_24f944;
        }
    }
    ctx->pc = 0x24F934u;
    // 0x24f934: 0xc08c698  jal         func_231A60
    ctx->pc = 0x24F934u;
    SET_GPR_U32(ctx, 31, 0x24F93Cu);
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x24F934u, 0x24F93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F93Cu;
label_24f93c:
    // 0x24f93c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24F93Cu;
    {
        const bool branch_taken_0x24f93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F93Cu;
        // 0x24f940: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f93c) {
            ctx->pc = 0x24F950u;
            goto label_24f950;
        }
    }
    ctx->pc = 0x24F944u;
label_24f944:
    // 0x24f944: 0xc08c698  jal         func_231A60
    ctx->pc = 0x24F944u;
    SET_GPR_U32(ctx, 31, 0x24F94Cu);
    ctx->pc = 0x24F948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F944u;
    // 0x24f948: 0xac6211d4  sw          $v0, 0x11D4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4564), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x24F944u, 0x24F94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F94Cu;
label_24f94c:
    // 0x24f94c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24f94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24f950:
    // 0x24f950: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x24F950u;
    {
        const bool branch_taken_0x24f950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F950u;
        // 0x24f954: 0x3c11003a  lui         $s1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f950) {
            ctx->pc = 0x24F9A4u;
            goto label_24f9a4;
        }
    }
    ctx->pc = 0x24F958u;
    // 0x24f958: 0x8e221190  lw          $v0, 0x1190($s1)
    ctx->pc = 0x24f958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4496)));
    // 0x24f95c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24F95Cu;
    {
        const bool branch_taken_0x24f95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F95Cu;
        // 0x24f960: 0x3c12003a  lui         $s2, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f95c) {
            ctx->pc = 0x24F98Cu;
            goto label_24f98c;
        }
    }
    ctx->pc = 0x24F964u;
    // 0x24f964: 0x264310a8  addiu       $v1, $s2, 0x10A8
    ctx->pc = 0x24f964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4264));
label_24f968:
    // 0x24f968: 0x8e241190  lw          $a0, 0x1190($s1)
    ctx->pc = 0x24f968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4496)));
    // 0x24f96c: 0xdc620038  ld          $v0, 0x38($v1)
    ctx->pc = 0x24f96cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x24f970: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x24f970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f974: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x24f974u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x24f978: 0xc093dca  jal         func_24F728
    ctx->pc = 0x24F978u;
    SET_GPR_U32(ctx, 31, 0x24F980u);
    ctx->pc = 0x24F97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F978u;
    // 0x24f97c: 0xfc620038  sd          $v0, 0x38($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F728u;
    goto label_24f728;
    ctx->pc = 0x24F980u;
label_24f980:
    // 0x24f980: 0x8e021190  lw          $v0, 0x1190($s0)
    ctx->pc = 0x24f980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4496)));
    // 0x24f984: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x24F984u;
    {
        const bool branch_taken_0x24f984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F984u;
        // 0x24f988: 0x264310a8  addiu       $v1, $s2, 0x10A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f984) {
            ctx->pc = 0x24F968u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24f968;
        }
    }
    ctx->pc = 0x24F98Cu;
label_24f98c:
    // 0x24f98c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24f98cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24f990: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24f990u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24f994: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24f994u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f998: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24f998u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f99c: 0x80942ca  j           func_250B28
    ctx->pc = 0x24F99Cu;
    ctx->pc = 0x24F9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F99Cu;
    // 0x24f9a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250B28u;
    sub_00250B28_0x250b28(rdram, ctx, runtime); return;
    ctx->pc = 0x24F9A4u;
label_24f9a4:
    // 0x24f9a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24f9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24f9a8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24f9a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24f9ac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24f9acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f9b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24f9b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f9b4: 0x3e00008  jr          $ra
    ctx->pc = 0x24F9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F9B4u;
        // 0x24f9b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F9B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F9BCu;
    // 0x24f9bc: 0x0  nop
    ctx->pc = 0x24f9bcu;
    // NOP
    if (ctx->pc == 0x24f9bcu) { ctx->pc = 0x24f9c0u; }
}
