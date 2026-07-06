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

// Function: sub_0011C3A8
// Address: 0x11c3a8 - 0x11c588
void sub_0011C3A8_0x11c3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C3A8_0x11c3a8");
#endif

    switch (ctx->pc) {
        case 0x11c3f8u: goto label_11c3f8;
        case 0x11c40cu: goto label_11c40c;
        case 0x11c4a4u: goto label_11c4a4;
        case 0x11c4b8u: goto label_11c4b8;
        case 0x11c4c4u: goto label_11c4c4;
        case 0x11c4d0u: goto label_11c4d0;
        case 0x11c4e4u: goto label_11c4e4;
        case 0x11c528u: goto label_11c528;
        case 0x11c544u: goto label_11c544;
        case 0x11c560u: goto label_11c560;
        default: break;
    }

    ctx->pc = 0x11c3a8u;

    // 0x11c3a8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x11c3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11c3ac: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11c3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11c3b0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x11c3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x11c3b4: 0x3c150036  lui         $s5, 0x36
    ctx->pc = 0x11c3b4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)54 << 16));
    // 0x11c3b8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x11c3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x11c3bc: 0x8ea29df8  lw          $v0, -0x6208($s5)
    ctx->pc = 0x11c3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294942200)));
    // 0x11c3c0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x11c3c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c3c4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x11c3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x11c3c8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11c3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11c3cc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x11c3ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c3d0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11c3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11c3d4: 0x24729ec0  addiu       $s2, $v1, -0x6140
    ctx->pc = 0x11c3d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942400));
    // 0x11c3d8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11c3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11c3dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11c3dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c3e0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x11c3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x11c3e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11c3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11c3e8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C3E8u;
    {
        const bool branch_taken_0x11c3e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C3E8u;
        // 0x11c3ec: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c3e8) {
            ctx->pc = 0x11C404u;
            goto label_11c404;
        }
    }
    ctx->pc = 0x11C3F0u;
    // 0x11c3f0: 0xc046e36  jal         func_11B8D8
    ctx->pc = 0x11C3F0u;
    SET_GPR_U32(ctx, 31, 0x11C3F8u);
    ctx->pc = 0x11B8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B8D8u, 0x11C3F0u, 0x11C3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C3F8u;
label_11c3f8:
    // 0x11c3f8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x11c3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x11c3fc: 0x10430059  beq         $v0, $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x11C3FCu;
    {
        const bool branch_taken_0x11c3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11C400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C3FCu;
        // 0x11c400: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c3fc) {
            ctx->pc = 0x11C564u;
            goto label_11c564;
        }
    }
    ctx->pc = 0x11C404u;
label_11c404:
    // 0x11c404: 0xc046de0  jal         func_11B780
    ctx->pc = 0x11C404u;
    SET_GPR_U32(ctx, 31, 0x11C40Cu);
    ctx->pc = 0x11C408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C404u;
    // 0x11c408: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B780u, 0x11C404u, 0x11C40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C40Cu;
label_11c40c:
    // 0x11c40c: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x11C40Cu;
    {
        const bool branch_taken_0x11c40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C40Cu;
        // 0x11c410: 0x3c080036  lui         $t0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c40c) {
            ctx->pc = 0x11C544u;
            goto label_11c544;
        }
    }
    ctx->pc = 0x11C414u;
    // 0x11c414: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x11c414u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
    // 0x11c418: 0xae510004  sw          $s1, 0x4($s2)
    ctx->pc = 0x11c418u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
    // 0x11c41c: 0x3c130036  lui         $s3, 0x36
    ctx->pc = 0x11c41cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)54 << 16));
    // 0x11c420: 0xae540008  sw          $s4, 0x8($s2)
    ctx->pc = 0x11c420u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 20));
    // 0x11c424: 0x2664aec0  addiu       $a0, $s3, -0x5140
    ctx->pc = 0x11c424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946496));
    // 0x11c428: 0x2505af80  addiu       $a1, $t0, -0x5080
    ctx->pc = 0x11c428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4294946688));
    // 0x11c42c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11c42cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c430: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x11c430u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11c434: 0xa242000c  sb          $v0, 0xC($s2)
    ctx->pc = 0x11c434u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x11c438: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x11c438u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x11c43c: 0xa243000d  sb          $v1, 0xD($s2)
    ctx->pc = 0x11c43cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x11c440: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x11c440u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x11c444: 0xae440010  sw          $a0, 0x10($s2)
    ctx->pc = 0x11c444u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 4));
    // 0x11c448: 0xa242000e  sb          $v0, 0xE($s2)
    ctx->pc = 0x11c448u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 14), (uint8_t)GPR_U32(ctx, 2));
    // 0x11c44c: 0xae450014  sw          $a1, 0x14($s2)
    ctx->pc = 0x11c44cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 5));
    // 0x11c450: 0x92070002  lbu         $a3, 0x2($s0)
    ctx->pc = 0x11c450u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x11c454: 0x10e60008  beq         $a3, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x11C454u;
    {
        const bool branch_taken_0x11c454 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x11C458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C454u;
        // 0x11c458: 0x28e20002  slti        $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c454) {
            ctx->pc = 0x11C478u;
            goto label_11c478;
        }
    }
    ctx->pc = 0x11C45Cu;
    // 0x11c45c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11C45Cu;
    {
        const bool branch_taken_0x11c45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C45Cu;
        // 0x11c460: 0x112ac0  sll         $a1, $s1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c45c) {
            ctx->pc = 0x11C488u;
            goto label_11c488;
        }
    }
    ctx->pc = 0x11C464u;
    // 0x11c464: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11c464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11c468: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C468u;
    {
        const bool branch_taken_0x11c468 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x11C46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C468u;
        // 0x11c46c: 0x24020924  addiu       $v0, $zero, 0x924 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c468) {
            ctx->pc = 0x11C484u;
            goto label_11c484;
        }
    }
    ctx->pc = 0x11C470u;
    // 0x11c470: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11C470u;
    {
        const bool branch_taken_0x11c470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c470) {
            ctx->pc = 0x11C488u;
            goto label_11c488;
        }
    }
    ctx->pc = 0x11C478u;
label_11c478:
    // 0x11c478: 0x24020918  addiu       $v0, $zero, 0x918
    ctx->pc = 0x11c478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2328));
    // 0x11c47c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11C47Cu;
    {
        const bool branch_taken_0x11c47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C47Cu;
        // 0x11c480: 0x2222818  mult        $a1, $s1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c47c) {
            ctx->pc = 0x11C488u;
            goto label_11c488;
        }
    }
    ctx->pc = 0x11C484u;
label_11c484:
    // 0x11c484: 0x2222818  mult        $a1, $s1, $v0
    ctx->pc = 0x11c484u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_11c488:
    // 0x11c488: 0x8ea29df8  lw          $v0, -0x6208($s5)
    ctx->pc = 0x11c488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294942200)));
    // 0x11c48c: 0x2510af80  addiu       $s0, $t0, -0x5080
    ctx->pc = 0x11c48cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 4294946688));
    // 0x11c490: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x11c490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x11c494: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C494u;
    {
        const bool branch_taken_0x11c494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C494u;
        // 0x11c498: 0xad00af80  sw          $zero, -0x5080($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294946688), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c494) {
            ctx->pc = 0x11C4A4u;
            goto label_11c4a4;
        }
    }
    ctx->pc = 0x11C49Cu;
    // 0x11c49c: 0xc0440be  jal         func_1102F8
    ctx->pc = 0x11C49Cu;
    SET_GPR_U32(ctx, 31, 0x11C4A4u);
    ctx->pc = 0x11C4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C49Cu;
    // 0x11c4a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1102F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1102F8u, 0x11C49Cu, 0x11C4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C4A4u;
label_11c4a4:
    // 0x11c4a4: 0x2673aec0  addiu       $s3, $s3, -0x5140
    ctx->pc = 0x11c4a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946496));
    // 0x11c4a8: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x11c4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x11c4ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11c4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c4b0: 0xc0440be  jal         func_1102F8
    ctx->pc = 0x11C4B0u;
    SET_GPR_U32(ctx, 31, 0x11C4B8u);
    ctx->pc = 0x11C4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C4B0u;
    // 0x11c4b4: 0x3c140036  lui         $s4, 0x36 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)54 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1102F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1102F8u, 0x11C4B0u, 0x11C4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C4B8u;
label_11c4b8:
    // 0x11c4b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11c4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c4bc: 0xc0440be  jal         func_1102F8
    ctx->pc = 0x11C4BCu;
    SET_GPR_U32(ctx, 31, 0x11C4C4u);
    ctx->pc = 0x11C4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C4BCu;
    // 0x11c4c0: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1102F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1102F8u, 0x11C4BCu, 0x11C4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C4C4u;
label_11c4c4:
    // 0x11c4c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c4c8: 0xc0440be  jal         func_1102F8
    ctx->pc = 0x11C4C8u;
    SET_GPR_U32(ctx, 31, 0x11C4D0u);
    ctx->pc = 0x11C4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C4C8u;
    // 0x11c4cc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1102F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1102F8u, 0x11C4C8u, 0x11C4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C4D0u;
label_11c4d0:
    // 0x11c4d0: 0x8e829dd0  lw          $v0, -0x6230($s4)
    ctx->pc = 0x11c4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294942160)));
    // 0x11c4d4: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C4D4u;
    {
        const bool branch_taken_0x11c4d4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11C4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C4D4u;
        // 0x11c4d8: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c4d4) {
            ctx->pc = 0x11C4E4u;
            goto label_11c4e4;
        }
    }
    ctx->pc = 0x11C4DCu;
    // 0x11c4dc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x11C4DCu;
    SET_GPR_U32(ctx, 31, 0x11C4E4u);
    ctx->pc = 0x11C4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C4DCu;
    // 0x11c4e0: 0x2484b3b8  addiu       $a0, $a0, -0x4C48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x11C4DCu, 0x11C4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C4E4u;
label_11c4e4:
    // 0x11c4e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11c4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c4e8: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x11c4e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
    // 0x11c4ec: 0xae029e20  sw          $v0, -0x61E0($s0)
    ctx->pc = 0x11c4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294942240), GPR_U32(ctx, 2));
    // 0x11c4f0: 0x3c110036  lui         $s1, 0x36
    ctx->pc = 0x11c4f0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)54 << 16));
    // 0x11c4f4: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x11c4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x11c4f8: 0x3c0b0012  lui         $t3, 0x12
    ctx->pc = 0x11c4f8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)18 << 16));
    // 0x11c4fc: 0xae229df4  sw          $v0, -0x620C($s1)
    ctx->pc = 0x11c4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294942196), GPR_U32(ctx, 2));
    // 0x11c500: 0x2484af90  addiu       $a0, $a0, -0x5070
    ctx->pc = 0x11c500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946704));
    // 0x11c504: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x11c504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    // 0x11c508: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x11c508u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c50c: 0x256bb0d0  addiu       $t3, $t3, -0x4F30
    ctx->pc = 0x11c50cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294947024));
    // 0x11c510: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11c510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c514: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11c514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c518: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x11c518u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x11c51c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11c51cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c520: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11C520u;
    SET_GPR_U32(ctx, 31, 0x11C528u);
    ctx->pc = 0x11C524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C520u;
    // 0x11c524: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x11C520u, 0x11C528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C528u;
label_11c528:
    // 0x11c528: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11C528u;
    {
        const bool branch_taken_0x11c528 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11c528) {
            ctx->pc = 0x11C52Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C528u;
            // 0x11c52c: 0x8e829dd0  lw          $v0, -0x6230($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294942160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C54Cu;
            goto label_11c54c;
        }
    }
    ctx->pc = 0x11C530u;
    // 0x11c530: 0xae009e20  sw          $zero, -0x61E0($s0)
    ctx->pc = 0x11c530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294942240), GPR_U32(ctx, 0));
    // 0x11c534: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11c534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11c538: 0xae209df4  sw          $zero, -0x620C($s1)
    ctx->pc = 0x11c538u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294942196), GPR_U32(ctx, 0));
    // 0x11c53c: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11C53Cu;
    SET_GPR_U32(ctx, 31, 0x11C544u);
    ctx->pc = 0x11C540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C53Cu;
    // 0x11c540: 0x8c449de8  lw          $a0, -0x6218($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x11C53Cu, 0x11C544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C544u;
label_11c544:
    // 0x11c544: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11C544u;
    {
        const bool branch_taken_0x11c544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C544u;
        // 0x11c548: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c544) {
            ctx->pc = 0x11C564u;
            goto label_11c564;
        }
    }
    ctx->pc = 0x11C54Cu;
label_11c54c:
    // 0x11c54c: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11C54Cu;
    {
        const bool branch_taken_0x11c54c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11C550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C54Cu;
        // 0x11c550: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c54c) {
            ctx->pc = 0x11C564u;
            goto label_11c564;
        }
    }
    ctx->pc = 0x11C554u;
    // 0x11c554: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x11c554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x11c558: 0xc043e52  jal         func_10F948
    ctx->pc = 0x11C558u;
    SET_GPR_U32(ctx, 31, 0x11C560u);
    ctx->pc = 0x11C55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C558u;
    // 0x11c55c: 0x2484b3d0  addiu       $a0, $a0, -0x4C30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x11C558u, 0x11C560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C560u;
label_11c560:
    // 0x11c560: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11c560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11c564:
    // 0x11c564: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x11c564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11c568: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x11c568u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11c56c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x11c56cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11c570: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x11c570u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11c574: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11c574u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c578: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11c578u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c57c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11c57cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c580: 0x3e00008  jr          $ra
    ctx->pc = 0x11C580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C580u;
        // 0x11c584: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C588u;
}
