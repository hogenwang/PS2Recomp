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

// Function: sub_00117380
// Address: 0x117380 - 0x117498
void sub_00117380_0x117380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117380_0x117380");
#endif

    switch (ctx->pc) {
        case 0x1173d4u: goto label_1173d4;
        case 0x1173f0u: goto label_1173f0;
        case 0x1173fcu: goto label_1173fc;
        case 0x117410u: goto label_117410;
        case 0x117428u: goto label_117428;
        case 0x11743cu: goto label_11743c;
        case 0x117448u: goto label_117448;
        case 0x117460u: goto label_117460;
        default: break;
    }

    ctx->pc = 0x117380u;

    // 0x117380: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x117380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x117384: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x117384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x117388: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x117388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x11738c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11738cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x117390: 0x8c538ae0  lw          $s3, -0x7520($v0)
    ctx->pc = 0x117390u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937312)));
    // 0x117394: 0x24679598  addiu       $a3, $v1, -0x6A68
    ctx->pc = 0x117394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940056));
    // 0x117398: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x117398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x11739c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x11739cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1173a0: 0x26620040  addiu       $v0, $s3, 0x40
    ctx->pc = 0x1173a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x1173a4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1173a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1173a8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1173a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1173ac: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1173acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1173b0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1173b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1173b4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1173b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1173b8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1173b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1173bc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1173bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1173c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1173c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1173c4: 0x8c649598  lw          $a0, -0x6A68($v1)
    ctx->pc = 0x1173c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940056)));
    // 0x1173c8: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x1173c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1173cc: 0xc045cdc  jal         func_117370
    ctx->pc = 0x1173CCu;
    SET_GPR_U32(ctx, 31, 0x1173D4u);
    ctx->pc = 0x1173D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1173CCu;
    // 0x1173d0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117370u, 0x1173CCu, 0x1173D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1173D4u;
label_1173d4:
    // 0x1173d4: 0x2a430010  slti        $v1, $s2, 0x10
    ctx->pc = 0x1173d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1173d8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1173d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1173dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1173dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1173e0: 0x43900a  movz        $s2, $v0, $v1
    ctx->pc = 0x1173e0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    // 0x1173e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1173e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1173e8: 0xc045ccc  jal         func_117330
    ctx->pc = 0x1173E8u;
    SET_GPR_U32(ctx, 31, 0x1173F0u);
    ctx->pc = 0x1173ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1173E8u;
    // 0x1173ec: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117330u, 0x1173E8u, 0x1173F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1173F0u;
label_1173f0:
    // 0x1173f0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1173f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1173f4: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x1173F4u;
    SET_GPR_U32(ctx, 31, 0x1173FCu);
    ctx->pc = 0x1173F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1173F4u;
    // 0x1173f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x1173F4u, 0x1173FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1173FCu;
label_1173fc:
    // 0x1173fc: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x1173fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x117400: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x117400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117404: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x117404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117408: 0xc045ccc  jal         func_117330
    ctx->pc = 0x117408u;
    SET_GPR_U32(ctx, 31, 0x117410u);
    ctx->pc = 0x11740Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117408u;
    // 0x11740c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117330u, 0x117408u, 0x117410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117410u;
label_117410:
    // 0x117410: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x117410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117414: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x117414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x117418: 0x1a400015  blez        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x117418u;
    {
        const bool branch_taken_0x117418 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x11741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117418u;
        // 0x11741c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117418) {
            ctx->pc = 0x117470u;
            goto label_117470;
        }
    }
    ctx->pc = 0x117420u;
    // 0x117420: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x117420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117424: 0x0  nop
    ctx->pc = 0x117424u;
    // NOP
label_117428:
    // 0x117428: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x117428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11742c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11742cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117430: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x117430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x117434: 0xc045ccc  jal         func_117330
    ctx->pc = 0x117434u;
    SET_GPR_U32(ctx, 31, 0x11743Cu);
    ctx->pc = 0x117438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117434u;
    // 0x117438: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117330u, 0x117434u, 0x11743Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11743Cu;
label_11743c:
    // 0x11743c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x11743cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x117440: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x117440u;
    SET_GPR_U32(ctx, 31, 0x117448u);
    ctx->pc = 0x117444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117440u;
    // 0x117444: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x117440u, 0x117448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117448u;
label_117448:
    // 0x117448: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x117448u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11744c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x11744cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x117450: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x117450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117454: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x117454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117458: 0xc045ccc  jal         func_117330
    ctx->pc = 0x117458u;
    SET_GPR_U32(ctx, 31, 0x117460u);
    ctx->pc = 0x11745Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117458u;
    // 0x11745c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117330u, 0x117458u, 0x117460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117460u;
label_117460:
    // 0x117460: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x117460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117464: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x117464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x117468: 0x1640ffef  bnez        $s2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x117468u;
    {
        const bool branch_taken_0x117468 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x11746Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117468u;
        // 0x11746c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117468) {
            ctx->pc = 0x117428u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_117428;
        }
    }
    ctx->pc = 0x117470u;
label_117470:
    // 0x117470: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x117470u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117474: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x117474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x117478: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x117478u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11747c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x11747cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x117480: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x117480u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x117484: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x117484u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117488: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x117488u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11748c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11748cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117490: 0x3e00008  jr          $ra
    ctx->pc = 0x117490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117490u;
        // 0x117494: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117498u;
}
