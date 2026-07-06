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

// Function: sub_001E7670
// Address: 0x1e7670 - 0x1e7830
void sub_001E7670_0x1e7670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7670_0x1e7670");
#endif

    switch (ctx->pc) {
        case 0x1e76c4u: goto label_1e76c4;
        case 0x1e76e4u: goto label_1e76e4;
        case 0x1e76f4u: goto label_1e76f4;
        case 0x1e775cu: goto label_1e775c;
        case 0x1e7778u: goto label_1e7778;
        case 0x1e778cu: goto label_1e778c;
        case 0x1e7794u: goto label_1e7794;
        case 0x1e77a0u: goto label_1e77a0;
        case 0x1e77c0u: goto label_1e77c0;
        case 0x1e77ccu: goto label_1e77cc;
        case 0x1e77d4u: goto label_1e77d4;
        case 0x1e7808u: goto label_1e7808;
        default: break;
    }

    ctx->pc = 0x1e7670u;

    // 0x1e7670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e7674: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e767c: 0x8079da2  j           func_1E7688
    ctx->pc = 0x1E767Cu;
    ctx->pc = 0x1E7680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E767Cu;
    // 0x1e7680: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7688u;
    goto label_1e7688;
    ctx->pc = 0x1E7684u;
    // 0x1e7684: 0x0  nop
    ctx->pc = 0x1e7684u;
    // NOP
label_1e7688:
    // 0x1e7688: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1e7688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1e768c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e768cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e7690: 0x8c45ec14  lw          $a1, -0x13EC($v0)
    ctx->pc = 0x1e7690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962196)));
    // 0x1e7694: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e7694u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7698: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e7698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e769c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e769cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e76a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e76a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e76a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e76a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e76a8: 0x14a3001d  bne         $a1, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1E76A8u;
    {
        const bool branch_taken_0x1e76a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E76ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E76A8u;
        // 0x1e76ac: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e76a8) {
            ctx->pc = 0x1E7720u;
            goto label_1e7720;
        }
    }
    ctx->pc = 0x1E76B0u;
    // 0x1e76b0: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E76B0u;
    {
        const bool branch_taken_0x1e76b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e76b0) {
            ctx->pc = 0x1E76D0u;
            goto label_1e76d0;
        }
    }
    ctx->pc = 0x1E76B8u;
    // 0x1e76b8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e76b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e76bc: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E76BCu;
    SET_GPR_U32(ctx, 31, 0x1E76C4u);
    ctx->pc = 0x1E76C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E76BCu;
    // 0x1e76c0: 0x2484e598  addiu       $a0, $a0, -0x1A68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1E76BCu, 0x1E76C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E76C4u;
label_1e76c4:
    // 0x1e76c4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1E76C4u;
    {
        const bool branch_taken_0x1e76c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E76C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E76C4u;
        // 0x1e76c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e76c4) {
            ctx->pc = 0x1E7720u;
            goto label_1e7720;
        }
    }
    ctx->pc = 0x1E76CCu;
    // 0x1e76cc: 0x0  nop
    ctx->pc = 0x1e76ccu;
    // NOP
label_1e76d0:
    // 0x1e76d0: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1e76d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e76d4: 0x16050012  bne         $s0, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E76D4u;
    {
        const bool branch_taken_0x1e76d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        ctx->pc = 0x1E76D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E76D4u;
        // 0x1e76d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e76d4) {
            ctx->pc = 0x1E7720u;
            goto label_1e7720;
        }
    }
    ctx->pc = 0x1E76DCu;
    // 0x1e76dc: 0xc079e20  jal         func_1E7880
    ctx->pc = 0x1E76DCu;
    SET_GPR_U32(ctx, 31, 0x1E76E4u);
    ctx->pc = 0x1E7880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7880u, 0x1E76DCu, 0x1E76E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E76E4u;
label_1e76e4:
    // 0x1e76e4: 0x5050000e  beql        $v0, $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E76E4u;
    {
        const bool branch_taken_0x1e76e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1e76e4) {
            ctx->pc = 0x1E76E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E76E4u;
            // 0x1e76e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E7720u;
            goto label_1e7720;
        }
    }
    ctx->pc = 0x1E76ECu;
    // 0x1e76ec: 0xc079e52  jal         func_1E7948
    ctx->pc = 0x1E76ECu;
    SET_GPR_U32(ctx, 31, 0x1E76F4u);
    ctx->pc = 0x1E7948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7948u, 0x1E76ECu, 0x1E76F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E76F4u;
label_1e76f4:
    // 0x1e76f4: 0x1050000a  beq         $v0, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E76F4u;
    {
        const bool branch_taken_0x1e76f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1E76F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E76F4u;
        // 0x1e76f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e76f4) {
            ctx->pc = 0x1E7720u;
            goto label_1e7720;
        }
    }
    ctx->pc = 0x1E76FCu;
    // 0x1e76fc: 0x8e230508  lw          $v1, 0x508($s1)
    ctx->pc = 0x1e76fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1288)));
    // 0x1e7700: 0x10700007  beq         $v1, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E7700u;
    {
        const bool branch_taken_0x1e7700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x1E7704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7700u;
        // 0x1e7704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7700) {
            ctx->pc = 0x1E7720u;
            goto label_1e7720;
        }
    }
    ctx->pc = 0x1E7708u;
    // 0x1e7708: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e7708u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e770c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e770cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7710: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e7710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7714: 0x8079dce  j           func_1E7738
    ctx->pc = 0x1E7714u;
    ctx->pc = 0x1E7718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7714u;
    // 0x1e7718: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7738u;
    goto label_1e7738;
    ctx->pc = 0x1E771Cu;
    // 0x1e771c: 0x0  nop
    ctx->pc = 0x1e771cu;
    // NOP
label_1e7720:
    // 0x1e7720: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e7720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7724: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e7724u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e7728: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e7728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e772c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E772Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E772Cu;
        // 0x1e7730: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E772Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7734u;
    // 0x1e7734: 0x0  nop
    ctx->pc = 0x1e7734u;
    // NOP
label_1e7738:
    // 0x1e7738: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e7738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e773c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e773cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7740: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e7740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e7744: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e7744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7748: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e7748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e774c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e774cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e7750: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e7750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e7754: 0xc079e1e  jal         func_1E7878
    ctx->pc = 0x1E7754u;
    SET_GPR_U32(ctx, 31, 0x1E775Cu);
    ctx->pc = 0x1E7758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7754u;
    // 0x1e7758: 0x8e12003c  lw          $s2, 0x3C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7878u, 0x1E7754u, 0x1E775Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E775Cu;
label_1e775c:
    // 0x1e775c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x1e775cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e7760: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e7760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7764: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e7764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7768: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E7768u;
    {
        const bool branch_taken_0x1e7768 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7768u;
        // 0x1e776c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7768) {
            ctx->pc = 0x1E7780u;
            goto label_1e7780;
        }
    }
    ctx->pc = 0x1E7770u;
    // 0x1e7770: 0xc079e1e  jal         func_1E7878
    ctx->pc = 0x1E7770u;
    SET_GPR_U32(ctx, 31, 0x1E7778u);
    ctx->pc = 0x1E7774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7770u;
    // 0x1e7774: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7878u, 0x1E7770u, 0x1E7778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7778u;
label_1e7778:
    // 0x1e7778: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1E7778u;
    {
        const bool branch_taken_0x1e7778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7778u;
        // 0x1e777c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7778) {
            ctx->pc = 0x1E77DCu;
            goto label_1e77dc;
        }
    }
    ctx->pc = 0x1E7780u;
label_1e7780:
    // 0x1e7780: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1e7780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1e7784: 0xc079e22  jal         func_1E7888
    ctx->pc = 0x1E7784u;
    SET_GPR_U32(ctx, 31, 0x1E778Cu);
    ctx->pc = 0x1E7888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7888u, 0x1E7784u, 0x1E778Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E778Cu;
label_1e778c:
    // 0x1e778c: 0xc07dd62  jal         func_1F7588
    ctx->pc = 0x1E778Cu;
    SET_GPR_U32(ctx, 31, 0x1E7794u);
    ctx->pc = 0x1E7790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E778Cu;
    // 0x1e7790: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7588u, 0x1E778Cu, 0x1E7794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7794u;
label_1e7794:
    // 0x1e7794: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7798: 0xc079e22  jal         func_1E7888
    ctx->pc = 0x1E7798u;
    SET_GPR_U32(ctx, 31, 0x1E77A0u);
    ctx->pc = 0x1E779Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7798u;
    // 0x1e779c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7888u, 0x1E7798u, 0x1E77A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E77A0u;
label_1e77a0:
    // 0x1e77a0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e77a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e77a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E77A4u;
    {
        const bool branch_taken_0x1e77a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E77A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E77A4u;
        // 0x1e77a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e77a4) {
            ctx->pc = 0x1E77B8u;
            goto label_1e77b8;
        }
    }
    ctx->pc = 0x1E77ACu;
    // 0x1e77ac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E77ACu;
    {
        const bool branch_taken_0x1e77ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E77B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E77ACu;
        // 0x1e77b0: 0xae000068  sw          $zero, 0x68($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e77ac) {
            ctx->pc = 0x1E77C4u;
            goto label_1e77c4;
        }
    }
    ctx->pc = 0x1E77B4u;
    // 0x1e77b4: 0x0  nop
    ctx->pc = 0x1e77b4u;
    // NOP
label_1e77b8:
    // 0x1e77b8: 0xc079c68  jal         func_1E71A0
    ctx->pc = 0x1E77B8u;
    SET_GPR_U32(ctx, 31, 0x1E77C0u);
    ctx->pc = 0x1E77BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E77B8u;
    // 0x1e77bc: 0xae110068  sw          $s1, 0x68($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E71A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E71A0u, 0x1E77B8u, 0x1E77C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E77C0u;
label_1e77c0:
    // 0x1e77c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e77c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e77c4:
    // 0x1e77c4: 0xc079e1e  jal         func_1E7878
    ctx->pc = 0x1E77C4u;
    SET_GPR_U32(ctx, 31, 0x1E77CCu);
    ctx->pc = 0x1E77C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E77C4u;
    // 0x1e77c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7878u, 0x1E77C4u, 0x1E77CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E77CCu;
label_1e77cc:
    // 0x1e77cc: 0xc07dd3a  jal         func_1F74E8
    ctx->pc = 0x1E77CCu;
    SET_GPR_U32(ctx, 31, 0x1E77D4u);
    ctx->pc = 0x1E77D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E77CCu;
    // 0x1e77d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F74E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F74E8u, 0x1E77CCu, 0x1E77D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E77D4u;
label_1e77d4:
    // 0x1e77d4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e77d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1e77d8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e77d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e77dc:
    // 0x1e77dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e77dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e77e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e77e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e77e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e77e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e77e8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e77e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e77ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1E77ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E77F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E77ECu;
        // 0x1e77f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E77ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E77F4u;
    // 0x1e77f4: 0x0  nop
    ctx->pc = 0x1e77f4u;
    // NOP
    // 0x1e77f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e77f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e77fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e77fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7800: 0xc079ce0  jal         func_1E7380
    ctx->pc = 0x1E7800u;
    SET_GPR_U32(ctx, 31, 0x1E7808u);
    ctx->pc = 0x1E7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7380u, 0x1E7800u, 0x1E7808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7808u;
label_1e7808:
    // 0x1e7808: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e780c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e780cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7810: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7810u;
        // 0x1e7814: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7818u;
    // 0x1e7818: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e781c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e781cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7820: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7824: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7828: 0x8079d58  j           func_1E7560
    ctx->pc = 0x1E7828u;
    ctx->pc = 0x1E782Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7828u;
    // 0x1e782c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7560u;
    sub_001E7560_0x1e7560(rdram, ctx, runtime); return;
    ctx->pc = 0x1E7830u;
}
