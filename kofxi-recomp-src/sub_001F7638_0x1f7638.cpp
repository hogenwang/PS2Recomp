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

// Function: sub_001F7638
// Address: 0x1f7638 - 0x1f7750
void sub_001F7638_0x1f7638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7638_0x1f7638");
#endif

    switch (ctx->pc) {
        case 0x1f767cu: goto label_1f767c;
        case 0x1f7698u: goto label_1f7698;
        case 0x1f76c8u: goto label_1f76c8;
        case 0x1f76d8u: goto label_1f76d8;
        case 0x1f76e8u: goto label_1f76e8;
        case 0x1f76f8u: goto label_1f76f8;
        case 0x1f7708u: goto label_1f7708;
        case 0x1f7718u: goto label_1f7718;
        default: break;
    }

    ctx->pc = 0x1f7638u;

    // 0x1f7638: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f7638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f763c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f763cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f7640: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f7640u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7644: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f7644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f7648: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f7648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f764c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f764cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f7650: 0x8e300048  lw          $s0, 0x48($s1)
    ctx->pc = 0x1f7650u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1f7654: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1f7654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1f7658: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x1f7658u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1f765c: 0x50400036  beql        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x1F765Cu;
    {
        const bool branch_taken_0x1f765c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f765c) {
            ctx->pc = 0x1F7660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F765Cu;
            // 0x1f7660: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7738u;
            goto label_1f7738;
        }
    }
    ctx->pc = 0x1F7664u;
    // 0x1f7664: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x1f7664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1f7668: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x1F7668u;
    {
        const bool branch_taken_0x1f7668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7668) {
            ctx->pc = 0x1F766Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7668u;
            // 0x1f766c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7738u;
            goto label_1f7738;
        }
    }
    ctx->pc = 0x1F7670u;
    // 0x1f7670: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x1f7670u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
    // 0x1f7674: 0xc07f446  jal         func_1FD118
    ctx->pc = 0x1F7674u;
    SET_GPR_U32(ctx, 31, 0x1F767Cu);
    ctx->pc = 0x1FD118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD118u, 0x1F7674u, 0x1F767Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F767Cu;
label_1f767c:
    // 0x1f767c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f767cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7680: 0x2602fffe  addiu       $v0, $s0, -0x2
    ctx->pc = 0x1f7680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
    // 0x1f7684: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1f7684u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1f7688: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7688u;
    {
        const bool branch_taken_0x1f7688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7688) {
            ctx->pc = 0x1F768Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7688u;
            // 0x1f768c: 0x8e300048  lw          $s0, 0x48($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F769Cu;
            goto label_1f769c;
        }
    }
    ctx->pc = 0x1F7690u;
    // 0x1f7690: 0xc07ddd4  jal         func_1F7750
    ctx->pc = 0x1F7690u;
    SET_GPR_U32(ctx, 31, 0x1F7698u);
    ctx->pc = 0x1F7694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7690u;
    // 0x1f7694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7750u, 0x1F7690u, 0x1F7698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7698u;
label_1f7698:
    // 0x1f7698: 0x8e300048  lw          $s0, 0x48($s1)
    ctx->pc = 0x1f7698u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_1f769c:
    // 0x1f769c: 0x2e020007  sltiu       $v0, $s0, 0x7
    ctx->pc = 0x1f769cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1f76a0: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1F76A0u;
    {
        const bool branch_taken_0x1f76a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f76a0) {
            ctx->pc = 0x1F76A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F76A0u;
            // 0x1f76a4: 0xae300048  sw          $s0, 0x48($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7710u;
            goto label_1f7710;
        }
    }
    ctx->pc = 0x1F76A8u;
    // 0x1f76a8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1f76a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1f76ac: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1f76acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1f76b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f76b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f76b4: 0x8c63eb20  lw          $v1, -0x14E0($v1)
    ctx->pc = 0x1f76b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961952)));
    // 0x1f76b8: 0x600008  jr          $v1
    ctx->pc = 0x1F76B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F76C0u: goto label_1f76c0;
            case 0x1F76D0u: goto label_1f76d0;
            case 0x1F76E0u: goto label_1f76e0;
            case 0x1F76F0u: goto label_1f76f0;
            case 0x1F7700u: goto label_1f7700;
            case 0x1F770Cu: goto label_1f770c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F76B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1F76C0u;
label_1f76c0:
    // 0x1f76c0: 0xc07dde4  jal         func_1F7790
    ctx->pc = 0x1F76C0u;
    SET_GPR_U32(ctx, 31, 0x1F76C8u);
    ctx->pc = 0x1F76C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F76C0u;
    // 0x1f76c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7790u, 0x1F76C0u, 0x1F76C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F76C8u;
label_1f76c8:
    // 0x1f76c8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1F76C8u;
    {
        const bool branch_taken_0x1f76c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F76CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F76C8u;
        // 0x1f76cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f76c8) {
            ctx->pc = 0x1F770Cu;
            goto label_1f770c;
        }
    }
    ctx->pc = 0x1F76D0u;
label_1f76d0:
    // 0x1f76d0: 0xc07ddf0  jal         func_1F77C0
    ctx->pc = 0x1F76D0u;
    SET_GPR_U32(ctx, 31, 0x1F76D8u);
    ctx->pc = 0x1F76D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F76D0u;
    // 0x1f76d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F77C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F77C0u, 0x1F76D0u, 0x1F76D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F76D8u;
label_1f76d8:
    // 0x1f76d8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F76D8u;
    {
        const bool branch_taken_0x1f76d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F76DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F76D8u;
        // 0x1f76dc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f76d8) {
            ctx->pc = 0x1F770Cu;
            goto label_1f770c;
        }
    }
    ctx->pc = 0x1F76E0u;
label_1f76e0:
    // 0x1f76e0: 0xc07ded0  jal         func_1F7B40
    ctx->pc = 0x1F76E0u;
    SET_GPR_U32(ctx, 31, 0x1F76E8u);
    ctx->pc = 0x1F76E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F76E0u;
    // 0x1f76e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7B40u, 0x1F76E0u, 0x1F76E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F76E8u;
label_1f76e8:
    // 0x1f76e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F76E8u;
    {
        const bool branch_taken_0x1f76e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F76ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F76E8u;
        // 0x1f76ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f76e8) {
            ctx->pc = 0x1F770Cu;
            goto label_1f770c;
        }
    }
    ctx->pc = 0x1F76F0u;
label_1f76f0:
    // 0x1f76f0: 0xc07def8  jal         func_1F7BE0
    ctx->pc = 0x1F76F0u;
    SET_GPR_U32(ctx, 31, 0x1F76F8u);
    ctx->pc = 0x1F76F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F76F0u;
    // 0x1f76f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7BE0u, 0x1F76F0u, 0x1F76F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F76F8u;
label_1f76f8:
    // 0x1f76f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F76F8u;
    {
        const bool branch_taken_0x1f76f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F76FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F76F8u;
        // 0x1f76fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f76f8) {
            ctx->pc = 0x1F770Cu;
            goto label_1f770c;
        }
    }
    ctx->pc = 0x1F7700u;
label_1f7700:
    // 0x1f7700: 0xc07df14  jal         func_1F7C50
    ctx->pc = 0x1F7700u;
    SET_GPR_U32(ctx, 31, 0x1F7708u);
    ctx->pc = 0x1F7704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7700u;
    // 0x1f7704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7C50u, 0x1F7700u, 0x1F7708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7708u;
label_1f7708:
    // 0x1f7708: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f7708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f770c:
    // 0x1f770c: 0xae300048  sw          $s0, 0x48($s1)
    ctx->pc = 0x1f770cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 16));
label_1f7710:
    // 0x1f7710: 0xc07f446  jal         func_1FD118
    ctx->pc = 0x1F7710u;
    SET_GPR_U32(ctx, 31, 0x1F7718u);
    ctx->pc = 0x1F7714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7710u;
    // 0x1f7714: 0x263037b8  addiu       $s0, $s1, 0x37B8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 14264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD118u, 0x1F7710u, 0x1F7718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7718u;
label_1f7718:
    // 0x1f7718: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f771c: 0x52282f  dsubu       $a1, $v0, $s2
    ctx->pc = 0x1f771cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) - GPR_U64(ctx, 18));
    // 0x1f7720: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f7720u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7724: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f7724u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7728: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f7728u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f772c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f772cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f7730: 0x807f486  j           func_1FD218
    ctx->pc = 0x1F7730u;
    ctx->pc = 0x1F7734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7730u;
    // 0x1f7734: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD218u;
    sub_001FD218_0x1fd218(rdram, ctx, runtime); return;
    ctx->pc = 0x1F7738u;
label_1f7738:
    // 0x1f7738: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f7738u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f773c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f773cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7740: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f7740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f7744: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7744u;
        // 0x1f7748: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F774Cu;
    // 0x1f774c: 0x0  nop
    ctx->pc = 0x1f774cu;
    // NOP
    if (ctx->pc == 0x1f774cu) { ctx->pc = 0x1f7750u; }
}
