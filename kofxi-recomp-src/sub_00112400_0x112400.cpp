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

// Function: sub_00112400
// Address: 0x112400 - 0x112578
void sub_00112400_0x112400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112400_0x112400");
#endif

    switch (ctx->pc) {
        case 0x112428u: goto label_112428;
        case 0x112434u: goto label_112434;
        case 0x112460u: goto label_112460;
        case 0x1124a0u: goto label_1124a0;
        case 0x1124f0u: goto label_1124f0;
        case 0x112500u: goto label_112500;
        case 0x112508u: goto label_112508;
        case 0x112520u: goto label_112520;
        case 0x112530u: goto label_112530;
        case 0x112540u: goto label_112540;
        case 0x112548u: goto label_112548;
        default: break;
    }

    ctx->pc = 0x112400u;

    // 0x112400: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x112400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x112404: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x112404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x112408: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x112408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x11240c: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x11240cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x112410: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x112410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x112414: 0x26928280  addiu       $s2, $s4, -0x7D80
    ctx->pc = 0x112414u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294935168));
    // 0x112418: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x112418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x11241c: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x11241cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x112420: 0xc0445b2  jal         func_1116C8
    ctx->pc = 0x112420u;
    SET_GPR_U32(ctx, 31, 0x112428u);
    ctx->pc = 0x112424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112420u;
    // 0x112424: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1116C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1116C8u, 0x112420u, 0x112428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112428u;
label_112428:
    // 0x112428: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x112428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11242c: 0xc0446d2  jal         func_111B48
    ctx->pc = 0x11242Cu;
    SET_GPR_U32(ctx, 31, 0x112434u);
    ctx->pc = 0x112430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11242Cu;
    // 0x112430: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B48u, 0x11242Cu, 0x112434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112434u;
label_112434:
    // 0x112434: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x112434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x112438: 0x8c62873c  lw          $v0, -0x78C4($v1)
    ctx->pc = 0x112438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936380)));
    // 0x11243c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11243Cu;
    {
        const bool branch_taken_0x11243c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11243c) {
            ctx->pc = 0x112458u;
            goto label_112458;
        }
    }
    ctx->pc = 0x112444u;
    // 0x112444: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x112444u;
    {
        const bool branch_taken_0x112444 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x112444) {
            ctx->pc = 0x112458u;
            goto label_112458;
        }
    }
    ctx->pc = 0x11244Cu;
    // 0x11244c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x11244cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x112450: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x112450u;
    {
        const bool branch_taken_0x112450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112450u;
        // 0x112454: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112450) {
            ctx->pc = 0x112468u;
            goto label_112468;
        }
    }
    ctx->pc = 0x112458u;
label_112458:
    // 0x112458: 0xc0446de  jal         func_111B78
    ctx->pc = 0x112458u;
    SET_GPR_U32(ctx, 31, 0x112460u);
    ctx->pc = 0x111B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B78u, 0x112458u, 0x112460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112460u;
label_112460:
    // 0x112460: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x112460u;
    {
        const bool branch_taken_0x112460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112460u;
        // 0x112464: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112460) {
            ctx->pc = 0x112558u;
            goto label_112558;
        }
    }
    ctx->pc = 0x112468u;
label_112468:
    // 0x112468: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x112468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11246c: 0x24429780  addiu       $v0, $v0, -0x6880
    ctx->pc = 0x11246cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940544));
    // 0x112470: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x112470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x112474: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x112474u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x112478: 0xae44000c  sw          $a0, 0xC($s2)
    ctx->pc = 0x112478u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 4));
    // 0x11247c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x11247cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x112480: 0x2463a878  addiu       $v1, $v1, -0x5788
    ctx->pc = 0x112480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944888));
    // 0x112484: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x112484u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x112488: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x112488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11248c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x11248cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x112490: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x112490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x112494: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x112494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x112498: 0xc043318  jal         func_10CC60
    ctx->pc = 0x112498u;
    SET_GPR_U32(ctx, 31, 0x1124A0u);
    ctx->pc = 0x11249Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112498u;
    // 0x11249c: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC60u, 0x112498u, 0x1124A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1124A0u;
label_1124a0:
    // 0x1124a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1124a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1124a4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1124a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1124a8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1124a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1124ac: 0xae918280  sw          $s1, -0x7D80($s4)
    ctx->pc = 0x1124acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294935168), GPR_U32(ctx, 17));
    // 0x1124b0: 0x24538ec0  addiu       $s3, $v0, -0x7140
    ctx->pc = 0x1124b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938304));
    // 0x1124b4: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1124b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x1124b8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1124b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1124bc: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1124bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1124c0: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1124c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1124c4: 0x24849980  addiu       $a0, $a0, -0x6680
    ctx->pc = 0x1124c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941056));
    // 0x1124c8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1124c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1124cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1124ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1124d0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1124d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1124d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1124d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1124d8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1124d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1124dc: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x1124dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1124e0: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1124e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1124e4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1124e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1124e8: 0xc044576  jal         func_1115D8
    ctx->pc = 0x1124E8u;
    SET_GPR_U32(ctx, 31, 0x1124F0u);
    ctx->pc = 0x1124ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1124E8u;
    // 0x1124ec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1115D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1115D8u, 0x1124E8u, 0x1124F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1124F0u;
label_1124f0:
    // 0x1124f0: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1124F0u;
    {
        const bool branch_taken_0x1124f0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1124f0) {
            ctx->pc = 0x1124F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1124F0u;
            // 0x1124f4: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112510u;
            goto label_112510;
        }
    }
    ctx->pc = 0x1124F8u;
    // 0x1124f8: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x1124F8u;
    SET_GPR_U32(ctx, 31, 0x112500u);
    ctx->pc = 0x1124FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1124F8u;
    // 0x1124fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x1124F8u, 0x112500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112500u;
label_112500:
    // 0x112500: 0xc0446de  jal         func_111B78
    ctx->pc = 0x112500u;
    SET_GPR_U32(ctx, 31, 0x112508u);
    ctx->pc = 0x111B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B78u, 0x112500u, 0x112508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112508u;
label_112508:
    // 0x112508: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x112508u;
    {
        const bool branch_taken_0x112508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112508u;
        // 0x11250c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112508) {
            ctx->pc = 0x112558u;
            goto label_112558;
        }
    }
    ctx->pc = 0x112510u;
label_112510:
    // 0x112510: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x112510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x112514: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x112514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x112518: 0xc0446de  jal         func_111B78
    ctx->pc = 0x112518u;
    SET_GPR_U32(ctx, 31, 0x112520u);
    ctx->pc = 0x11251Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112518u;
    // 0x11251c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B78u, 0x112518u, 0x112520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112520u;
label_112520:
    // 0x112520: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x112520u;
    {
        const bool branch_taken_0x112520 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x112520) {
            ctx->pc = 0x112538u;
            goto label_112538;
        }
    }
    ctx->pc = 0x112528u;
    // 0x112528: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x112528u;
    SET_GPR_U32(ctx, 31, 0x112530u);
    ctx->pc = 0x11252Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112528u;
    // 0x11252c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x112528u, 0x112530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112530u;
label_112530:
    // 0x112530: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x112530u;
    {
        const bool branch_taken_0x112530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112530u;
        // 0x112534: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112530) {
            ctx->pc = 0x112558u;
            goto label_112558;
        }
    }
    ctx->pc = 0x112538u;
label_112538:
    // 0x112538: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x112538u;
    SET_GPR_U32(ctx, 31, 0x112540u);
    ctx->pc = 0x11253Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112538u;
    // 0x11253c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x112538u, 0x112540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112540u;
label_112540:
    // 0x112540: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x112540u;
    SET_GPR_U32(ctx, 31, 0x112548u);
    ctx->pc = 0x112544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112540u;
    // 0x112544: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x112540u, 0x112548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112548u;
label_112548:
    // 0x112548: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x112548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11254c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11254cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x112550: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x112550u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x112554: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x112554u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_112558:
    // 0x112558: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x112558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11255c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x11255cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x112560: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x112560u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x112564: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x112564u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x112568: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x112568u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11256c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x11256cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x112570: 0x3e00008  jr          $ra
    ctx->pc = 0x112570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112570u;
        // 0x112574: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112578u;
}
