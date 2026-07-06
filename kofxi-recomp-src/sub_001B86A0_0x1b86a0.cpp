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

// Function: sub_001B86A0
// Address: 0x1b86a0 - 0x1b87b8
void sub_001B86A0_0x1b86a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B86A0_0x1b86a0");
#endif

    switch (ctx->pc) {
        case 0x1b86a0u: goto label_1b86a0;
        case 0x1b86a4u: goto label_1b86a4;
        case 0x1b86a8u: goto label_1b86a8;
        case 0x1b86acu: goto label_1b86ac;
        case 0x1b86b0u: goto label_1b86b0;
        case 0x1b86b4u: goto label_1b86b4;
        case 0x1b86b8u: goto label_1b86b8;
        case 0x1b86bcu: goto label_1b86bc;
        case 0x1b86c0u: goto label_1b86c0;
        case 0x1b86c4u: goto label_1b86c4;
        case 0x1b86c8u: goto label_1b86c8;
        case 0x1b86ccu: goto label_1b86cc;
        case 0x1b86d0u: goto label_1b86d0;
        case 0x1b86d4u: goto label_1b86d4;
        case 0x1b86d8u: goto label_1b86d8;
        case 0x1b86dcu: goto label_1b86dc;
        case 0x1b86e0u: goto label_1b86e0;
        case 0x1b86e4u: goto label_1b86e4;
        case 0x1b86e8u: goto label_1b86e8;
        case 0x1b86ecu: goto label_1b86ec;
        case 0x1b86f0u: goto label_1b86f0;
        case 0x1b86f4u: goto label_1b86f4;
        case 0x1b86f8u: goto label_1b86f8;
        case 0x1b86fcu: goto label_1b86fc;
        case 0x1b8700u: goto label_1b8700;
        case 0x1b8704u: goto label_1b8704;
        case 0x1b8708u: goto label_1b8708;
        case 0x1b870cu: goto label_1b870c;
        case 0x1b8710u: goto label_1b8710;
        case 0x1b8714u: goto label_1b8714;
        case 0x1b8718u: goto label_1b8718;
        case 0x1b871cu: goto label_1b871c;
        case 0x1b8720u: goto label_1b8720;
        case 0x1b8724u: goto label_1b8724;
        case 0x1b8728u: goto label_1b8728;
        case 0x1b872cu: goto label_1b872c;
        case 0x1b8730u: goto label_1b8730;
        case 0x1b8734u: goto label_1b8734;
        case 0x1b8738u: goto label_1b8738;
        case 0x1b873cu: goto label_1b873c;
        case 0x1b8740u: goto label_1b8740;
        case 0x1b8744u: goto label_1b8744;
        case 0x1b8748u: goto label_1b8748;
        case 0x1b874cu: goto label_1b874c;
        case 0x1b8750u: goto label_1b8750;
        case 0x1b8754u: goto label_1b8754;
        case 0x1b8758u: goto label_1b8758;
        case 0x1b875cu: goto label_1b875c;
        case 0x1b8760u: goto label_1b8760;
        case 0x1b8764u: goto label_1b8764;
        case 0x1b8768u: goto label_1b8768;
        case 0x1b876cu: goto label_1b876c;
        case 0x1b8770u: goto label_1b8770;
        case 0x1b8774u: goto label_1b8774;
        case 0x1b8778u: goto label_1b8778;
        case 0x1b877cu: goto label_1b877c;
        case 0x1b8780u: goto label_1b8780;
        case 0x1b8784u: goto label_1b8784;
        case 0x1b8788u: goto label_1b8788;
        case 0x1b878cu: goto label_1b878c;
        case 0x1b8790u: goto label_1b8790;
        case 0x1b8794u: goto label_1b8794;
        case 0x1b8798u: goto label_1b8798;
        case 0x1b879cu: goto label_1b879c;
        case 0x1b87a0u: goto label_1b87a0;
        case 0x1b87a4u: goto label_1b87a4;
        case 0x1b87a8u: goto label_1b87a8;
        case 0x1b87acu: goto label_1b87ac;
        case 0x1b87b0u: goto label_1b87b0;
        case 0x1b87b4u: goto label_1b87b4;
        default: break;
    }

    ctx->pc = 0x1b86a0u;

label_1b86a0:
    // 0x1b86a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b86a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b86a4:
    // 0x1b86a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b86a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b86a8:
    // 0x1b86a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b86a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b86ac:
    // 0x1b86ac: 0x806d394  j           func_1B4E50
label_1b86b0:
    if (ctx->pc == 0x1B86B0u) {
        ctx->pc = 0x1B86B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B86ACu;
        // 0x1b86b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B86B4u;
        goto label_1b86b4;
    }
    ctx->pc = 0x1B86ACu;
    ctx->pc = 0x1B86B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B86ACu;
    // 0x1b86b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4E50u, 0x1B86ACu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B86B4u;
label_1b86b4:
    // 0x1b86b4: 0x0  nop
    ctx->pc = 0x1b86b4u;
    // NOP
label_1b86b8:
    // 0x1b86b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b86b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b86bc:
    // 0x1b86bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b86bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b86c0:
    // 0x1b86c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b86c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1b86c4:
    // 0x1b86c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b86c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1b86c8:
    // 0x1b86c8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b86c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1b86cc:
    // 0x1b86cc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b86ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1b86d0:
    // 0x1b86d0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1b86d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b86d4:
    // 0x1b86d4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1b86d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_1b86d8:
    // 0x1b86d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b86d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b86dc:
    // 0x1b86dc: 0x8e90000c  lw          $s0, 0xC($s4)
    ctx->pc = 0x1b86dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1b86e0:
    // 0x1b86e0: 0xc0729bc  jal         func_1CA6F0
label_1b86e4:
    if (ctx->pc == 0x1B86E4u) {
        ctx->pc = 0x1B86E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B86E0u;
        // 0x1b86e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B86E8u;
        goto label_1b86e8;
    }
    ctx->pc = 0x1B86E0u;
    SET_GPR_U32(ctx, 31, 0x1B86E8u);
    ctx->pc = 0x1B86E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B86E0u;
    // 0x1b86e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA6F0u, 0x1B86E0u, 0x1B86E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B86E8u;
label_1b86e8:
    // 0x1b86e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b86e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b86ec:
    // 0x1b86ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b86ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b86f0:
    // 0x1b86f0: 0xc0729ac  jal         func_1CA6B0
label_1b86f4:
    if (ctx->pc == 0x1B86F4u) {
        ctx->pc = 0x1B86F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B86F0u;
        // 0x1b86f4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B86F8u;
        goto label_1b86f8;
    }
    ctx->pc = 0x1B86F0u;
    SET_GPR_U32(ctx, 31, 0x1B86F8u);
    ctx->pc = 0x1B86F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B86F0u;
    // 0x1b86f4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA6B0u, 0x1B86F0u, 0x1B86F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B86F8u;
label_1b86f8:
    // 0x1b86f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b86f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b86fc:
    // 0x1b86fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b86fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b8700:
    // 0x1b8700: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b8700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b8704:
    // 0x1b8704: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1b8704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1b8708:
    // 0x1b8708: 0x40f809  jalr        $v0
label_1b870c:
    if (ctx->pc == 0x1B870Cu) {
        ctx->pc = 0x1B870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8708u;
        // 0x1b870c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8710u;
        goto label_1b8710;
    }
    ctx->pc = 0x1B8708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B8710u);
        ctx->pc = 0x1B870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8708u;
        // 0x1b870c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8708u, 0x1B8710u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B8710u;
label_1b8710:
    // 0x1b8710: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b8710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b8714:
    // 0x1b8714: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b8714u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b8718:
    // 0x1b8718: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b871c:
    // 0x1b871c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1b871cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1b8720:
    // 0x1b8720: 0x40f809  jalr        $v0
label_1b8724:
    if (ctx->pc == 0x1B8724u) {
        ctx->pc = 0x1B8724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8720u;
        // 0x1b8724: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8728u;
        goto label_1b8728;
    }
    ctx->pc = 0x1B8720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B8728u);
        ctx->pc = 0x1B8724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8720u;
        // 0x1b8724: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8720u, 0x1B8728u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B8728u;
label_1b8728:
    // 0x1b8728: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b872c:
    // 0x1b872c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b872cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8730:
    // 0x1b8730: 0xc0734fa  jal         func_1CD3E8
label_1b8734:
    if (ctx->pc == 0x1B8734u) {
        ctx->pc = 0x1B8734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8730u;
        // 0x1b8734: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8738u;
        goto label_1b8738;
    }
    ctx->pc = 0x1B8730u;
    SET_GPR_U32(ctx, 31, 0x1B8738u);
    ctx->pc = 0x1B8734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8730u;
    // 0x1b8734: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD3E8u, 0x1B8730u, 0x1B8738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8738u;
label_1b8738:
    // 0x1b8738: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b873c:
    // 0x1b873c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b873cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8740:
    // 0x1b8740: 0xc0734fa  jal         func_1CD3E8
label_1b8744:
    if (ctx->pc == 0x1B8744u) {
        ctx->pc = 0x1B8744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8740u;
        // 0x1b8744: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8748u;
        goto label_1b8748;
    }
    ctx->pc = 0x1B8740u;
    SET_GPR_U32(ctx, 31, 0x1B8748u);
    ctx->pc = 0x1B8744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8740u;
    // 0x1b8744: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD3E8u, 0x1B8740u, 0x1B8748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8748u;
label_1b8748:
    // 0x1b8748: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b8748u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_1b874c:
    // 0x1b874c: 0x2533821  addu        $a3, $s2, $s3
    ctx->pc = 0x1b874cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_1b8750:
    // 0x1b8750: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b8750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b8754:
    // 0x1b8754: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1b8754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b8758:
    // 0x1b8758: 0x24847fd0  addiu       $a0, $a0, 0x7FD0
    ctx->pc = 0x1b8758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32720));
label_1b875c:
    // 0x1b875c: 0xc043e52  jal         func_10F948
label_1b8760:
    if (ctx->pc == 0x1B8760u) {
        ctx->pc = 0x1B8760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B875Cu;
        // 0x1b8760: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8764u;
        goto label_1b8764;
    }
    ctx->pc = 0x1B875Cu;
    SET_GPR_U32(ctx, 31, 0x1B8764u);
    ctx->pc = 0x1B8760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B875Cu;
    // 0x1b8760: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x1B875Cu, 0x1B8764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8764u;
label_1b8764:
    // 0x1b8764: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b8764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_1b8768:
    // 0x1b8768: 0x2113821  addu        $a3, $s0, $s1
    ctx->pc = 0x1b8768u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1b876c:
    // 0x1b876c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b876cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b8770:
    // 0x1b8770: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x1b8770u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_1b8774:
    // 0x1b8774: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b8774u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b8778:
    // 0x1b8778: 0xc043e52  jal         func_10F948
label_1b877c:
    if (ctx->pc == 0x1B877Cu) {
        ctx->pc = 0x1B877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8778u;
        // 0x1b877c: 0x24847ff0  addiu       $a0, $a0, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8780u;
        goto label_1b8780;
    }
    ctx->pc = 0x1B8778u;
    SET_GPR_U32(ctx, 31, 0x1B8780u);
    ctx->pc = 0x1B877Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8778u;
    // 0x1b877c: 0x24847ff0  addiu       $a0, $a0, 0x7FF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x1B8778u, 0x1B8780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8780u;
label_1b8780:
    // 0x1b8780: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1b8780u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1b8784:
    // 0x1b8784: 0x2519021  addu        $s2, $s2, $s1
    ctx->pc = 0x1b8784u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_1b8788:
    // 0x1b8788: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b8788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b878c:
    // 0x1b878c: 0x2503021  addu        $a2, $s2, $s0
    ctx->pc = 0x1b878cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_1b8790:
    // 0x1b8790: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b8790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b8794:
    // 0x1b8794: 0x82850001  lb          $a1, 0x1($s4)
    ctx->pc = 0x1b8794u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
label_1b8798:
    // 0x1b8798: 0x24848010  addiu       $a0, $a0, -0x7FF0
    ctx->pc = 0x1b8798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934544));
label_1b879c:
    // 0x1b879c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b879cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b87a0:
    // 0x1b87a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b87a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1b87a4:
    // 0x1b87a4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b87a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b87a8:
    // 0x1b87a8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1b87a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1b87ac:
    // 0x1b87ac: 0x8043e52  j           func_10F948
label_1b87b0:
    if (ctx->pc == 0x1B87B0u) {
        ctx->pc = 0x1B87B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B87ACu;
        // 0x1b87b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B87B4u;
        goto label_1b87b4;
    }
    ctx->pc = 0x1B87ACu;
    ctx->pc = 0x1B87B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B87ACu;
    // 0x1b87b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    ctx->pc = 0x1B87B4u;
label_1b87b4:
    // 0x1b87b4: 0x0  nop
    ctx->pc = 0x1b87b4u;
    // NOP
}
