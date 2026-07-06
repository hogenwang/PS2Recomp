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

// Function: sub_0022A3B0
// Address: 0x22a3b0 - 0x22a488
void sub_0022A3B0_0x22a3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A3B0_0x22a3b0");
#endif

    switch (ctx->pc) {
        case 0x22a3b0u: goto label_22a3b0;
        case 0x22a3b4u: goto label_22a3b4;
        case 0x22a3b8u: goto label_22a3b8;
        case 0x22a3bcu: goto label_22a3bc;
        case 0x22a3c0u: goto label_22a3c0;
        case 0x22a3c4u: goto label_22a3c4;
        case 0x22a3c8u: goto label_22a3c8;
        case 0x22a3ccu: goto label_22a3cc;
        case 0x22a3d0u: goto label_22a3d0;
        case 0x22a3d4u: goto label_22a3d4;
        case 0x22a3d8u: goto label_22a3d8;
        case 0x22a3dcu: goto label_22a3dc;
        case 0x22a3e0u: goto label_22a3e0;
        case 0x22a3e4u: goto label_22a3e4;
        case 0x22a3e8u: goto label_22a3e8;
        case 0x22a3ecu: goto label_22a3ec;
        case 0x22a3f0u: goto label_22a3f0;
        case 0x22a3f4u: goto label_22a3f4;
        case 0x22a3f8u: goto label_22a3f8;
        case 0x22a3fcu: goto label_22a3fc;
        case 0x22a400u: goto label_22a400;
        case 0x22a404u: goto label_22a404;
        case 0x22a408u: goto label_22a408;
        case 0x22a40cu: goto label_22a40c;
        case 0x22a410u: goto label_22a410;
        case 0x22a414u: goto label_22a414;
        case 0x22a418u: goto label_22a418;
        case 0x22a41cu: goto label_22a41c;
        case 0x22a420u: goto label_22a420;
        case 0x22a424u: goto label_22a424;
        case 0x22a428u: goto label_22a428;
        case 0x22a42cu: goto label_22a42c;
        case 0x22a430u: goto label_22a430;
        case 0x22a434u: goto label_22a434;
        case 0x22a438u: goto label_22a438;
        case 0x22a43cu: goto label_22a43c;
        case 0x22a440u: goto label_22a440;
        case 0x22a444u: goto label_22a444;
        case 0x22a448u: goto label_22a448;
        case 0x22a44cu: goto label_22a44c;
        case 0x22a450u: goto label_22a450;
        case 0x22a454u: goto label_22a454;
        case 0x22a458u: goto label_22a458;
        case 0x22a45cu: goto label_22a45c;
        case 0x22a460u: goto label_22a460;
        case 0x22a464u: goto label_22a464;
        case 0x22a468u: goto label_22a468;
        case 0x22a46cu: goto label_22a46c;
        case 0x22a470u: goto label_22a470;
        case 0x22a474u: goto label_22a474;
        case 0x22a478u: goto label_22a478;
        case 0x22a47cu: goto label_22a47c;
        case 0x22a480u: goto label_22a480;
        case 0x22a484u: goto label_22a484;
        default: break;
    }

    ctx->pc = 0x22a3b0u;

label_22a3b0:
    // 0x22a3b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22a3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_22a3b4:
    // 0x22a3b4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x22a3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_22a3b8:
    // 0x22a3b8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22a3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_22a3bc:
    // 0x22a3bc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22a3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_22a3c0:
    // 0x22a3c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22a3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_22a3c4:
    // 0x22a3c4: 0xc08c682  jal         func_231A08
label_22a3c8:
    if (ctx->pc == 0x22A3C8u) {
        ctx->pc = 0x22A3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A3C4u;
        // 0x22a3c8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A3CCu;
        goto label_22a3cc;
    }
    ctx->pc = 0x22A3C4u;
    SET_GPR_U32(ctx, 31, 0x22A3CCu);
    ctx->pc = 0x22A3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A3C4u;
    // 0x22a3c8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x22A3C4u, 0x22A3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A3CCu;
label_22a3cc:
    // 0x22a3cc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x22a3ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22a3d0:
    // 0x22a3d0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x22a3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_22a3d4:
    // 0x22a3d4: 0x8c51f998  lw          $s1, -0x668($v0)
    ctx->pc = 0x22a3d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965656)));
label_22a3d8:
    // 0x22a3d8: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
label_22a3dc:
    if (ctx->pc == 0x22A3DCu) {
        ctx->pc = 0x22A3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A3D8u;
        // 0x22a3dc: 0x3c12003a  lui         $s2, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A3E0u;
        goto label_22a3e0;
    }
    ctx->pc = 0x22A3D8u;
    {
        const bool branch_taken_0x22a3d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A3D8u;
        // 0x22a3dc: 0x3c12003a  lui         $s2, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a3d8) {
            ctx->pc = 0x22A434u;
            goto label_22a434;
        }
    }
    ctx->pc = 0x22A3E0u;
label_22a3e0:
    // 0x22a3e0: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x22a3e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_22a3e4:
    // 0x22a3e4: 0x0  nop
    ctx->pc = 0x22a3e4u;
    // NOP
label_22a3e8:
    // 0x22a3e8: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x22a3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_22a3ec:
    // 0x22a3ec: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x22a3ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_22a3f0:
    // 0x22a3f0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_22a3f4:
    if (ctx->pc == 0x22A3F4u) {
        ctx->pc = 0x22A3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A3F0u;
        // 0x22a3f4: 0x8e31001c  lw          $s1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A3F8u;
        goto label_22a3f8;
    }
    ctx->pc = 0x22A3F0u;
    {
        const bool branch_taken_0x22a3f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a3f0) {
            ctx->pc = 0x22A3F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A3F0u;
            // 0x22a3f4: 0x8e31001c  lw          $s1, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A424u;
            goto label_22a424;
        }
    }
    ctx->pc = 0x22A3F8u;
label_22a3f8:
    // 0x22a3f8: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x22a3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_22a3fc:
    // 0x22a3fc: 0x0  nop
    ctx->pc = 0x22a3fcu;
    // NOP
label_22a400:
    // 0x22a400: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_22a404:
    if (ctx->pc == 0x22A404u) {
        ctx->pc = 0x22A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A400u;
        // 0x22a404: 0x26100034  addiu       $s0, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A408u;
        goto label_22a408;
    }
    ctx->pc = 0x22A400u;
    {
        const bool branch_taken_0x22a400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A400u;
        // 0x22a404: 0x26100034  addiu       $s0, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a400) {
            ctx->pc = 0x22A414u;
            goto label_22a414;
        }
    }
    ctx->pc = 0x22A408u;
label_22a408:
    // 0x22a408: 0x40f809  jalr        $v0
label_22a40c:
    if (ctx->pc == 0x22A40Cu) {
        ctx->pc = 0x22A410u;
        goto label_22a410;
    }
    ctx->pc = 0x22A408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22A410u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A408u, 0x22A410u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22A410u;
label_22a410:
    // 0x22a410: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x22a410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_22a414:
    // 0x22a414: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x22a414u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_22a418:
    // 0x22a418: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
label_22a41c:
    if (ctx->pc == 0x22A41Cu) {
        ctx->pc = 0x22A41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A418u;
        // 0x22a41c: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A420u;
        goto label_22a420;
    }
    ctx->pc = 0x22A418u;
    {
        const bool branch_taken_0x22a418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a418) {
            ctx->pc = 0x22A41Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A418u;
            // 0x22a41c: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A400u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22a400;
        }
    }
    ctx->pc = 0x22A420u;
label_22a420:
    // 0x22a420: 0x8e31001c  lw          $s1, 0x1C($s1)
    ctx->pc = 0x22a420u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_22a424:
    // 0x22a424: 0x5620fff0  bnel        $s1, $zero, . + 4 + (-0x10 << 2)
label_22a428:
    if (ctx->pc == 0x22A428u) {
        ctx->pc = 0x22A428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A424u;
        // 0x22a428: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A42Cu;
        goto label_22a42c;
    }
    ctx->pc = 0x22A424u;
    {
        const bool branch_taken_0x22a424 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a424) {
            ctx->pc = 0x22A428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A424u;
            // 0x22a428: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A3E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22a3e8;
        }
    }
    ctx->pc = 0x22A42Cu;
label_22a42c:
    // 0x22a42c: 0x10000002  b           . + 4 + (0x2 << 2)
label_22a430:
    if (ctx->pc == 0x22A430u) {
        ctx->pc = 0x22A430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A42Cu;
        // 0x22a430: 0x8e50fcd0  lw          $s0, -0x330($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294966480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A434u;
        goto label_22a434;
    }
    ctx->pc = 0x22A42Cu;
    {
        const bool branch_taken_0x22a42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A42Cu;
        // 0x22a430: 0x8e50fcd0  lw          $s0, -0x330($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294966480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a42c) {
            ctx->pc = 0x22A438u;
            goto label_22a438;
        }
    }
    ctx->pc = 0x22A434u;
label_22a434:
    // 0x22a434: 0x8e50fcd0  lw          $s0, -0x330($s2)
    ctx->pc = 0x22a434u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294966480)));
label_22a438:
    // 0x22a438: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_22a43c:
    if (ctx->pc == 0x22A43Cu) {
        ctx->pc = 0x22A43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A438u;
        // 0x22a43c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A440u;
        goto label_22a440;
    }
    ctx->pc = 0x22A438u;
    {
        const bool branch_taken_0x22a438 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A438u;
        // 0x22a43c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a438) {
            ctx->pc = 0x22A468u;
            goto label_22a468;
        }
    }
    ctx->pc = 0x22A440u;
label_22a440:
    // 0x22a440: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x22a440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_22a444:
    // 0x22a444: 0x0  nop
    ctx->pc = 0x22a444u;
    // NOP
label_22a448:
    // 0x22a448: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_22a44c:
    if (ctx->pc == 0x22A44Cu) {
        ctx->pc = 0x22A44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A448u;
        // 0x22a44c: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A450u;
        goto label_22a450;
    }
    ctx->pc = 0x22A448u;
    {
        const bool branch_taken_0x22a448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a448) {
            ctx->pc = 0x22A44Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A448u;
            // 0x22a44c: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A45Cu;
            goto label_22a45c;
        }
    }
    ctx->pc = 0x22A450u;
label_22a450:
    // 0x22a450: 0x40f809  jalr        $v0
label_22a454:
    if (ctx->pc == 0x22A454u) {
        ctx->pc = 0x22A454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A450u;
        // 0x22a454: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A458u;
        goto label_22a458;
    }
    ctx->pc = 0x22A450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22A458u);
        ctx->pc = 0x22A454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A450u;
        // 0x22a454: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A450u, 0x22A458u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22A458u;
label_22a458:
    // 0x22a458: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x22a458u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_22a45c:
    // 0x22a45c: 0x5600fffa  bnel        $s0, $zero, . + 4 + (-0x6 << 2)
label_22a460:
    if (ctx->pc == 0x22A460u) {
        ctx->pc = 0x22A460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A45Cu;
        // 0x22a460: 0x8e0200d8  lw          $v0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A464u;
        goto label_22a464;
    }
    ctx->pc = 0x22A45Cu;
    {
        const bool branch_taken_0x22a45c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a45c) {
            ctx->pc = 0x22A460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A45Cu;
            // 0x22a460: 0x8e0200d8  lw          $v0, 0xD8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A448u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22a448;
        }
    }
    ctx->pc = 0x22A464u;
label_22a464:
    // 0x22a464: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22a464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22a468:
    // 0x22a468: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22a468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22a46c:
    // 0x22a46c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22a46cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22a470:
    // 0x22a470: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22a470u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22a474:
    // 0x22a474: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22a474u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22a478:
    // 0x22a478: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22a478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22a47c:
    // 0x22a47c: 0x808c698  j           func_231A60
label_22a480:
    if (ctx->pc == 0x22A480u) {
        ctx->pc = 0x22A480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A47Cu;
        // 0x22a480: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A484u;
        goto label_22a484;
    }
    ctx->pc = 0x22A47Cu;
    ctx->pc = 0x22A480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A47Cu;
    // 0x22a480: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    sub_00231A60_0x231a60(rdram, ctx, runtime); return;
    ctx->pc = 0x22A484u;
label_22a484:
    // 0x22a484: 0x0  nop
    ctx->pc = 0x22a484u;
    // NOP
    if (ctx->pc == 0x22a484u) { ctx->pc = 0x22a488u; }
}
