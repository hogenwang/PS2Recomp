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

// Function: sub_002BB2B0
// Address: 0x2bb2b0 - 0x2bb3f8
void sub_002BB2B0_0x2bb2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB2B0_0x2bb2b0");
#endif

    switch (ctx->pc) {
        case 0x2bb2f4u: goto label_2bb2f4;
        case 0x2bb30cu: goto label_2bb30c;
        case 0x2bb318u: goto label_2bb318;
        case 0x2bb328u: goto label_2bb328;
        case 0x2bb338u: goto label_2bb338;
        case 0x2bb350u: goto label_2bb350;
        case 0x2bb360u: goto label_2bb360;
        case 0x2bb36cu: goto label_2bb36c;
        case 0x2bb37cu: goto label_2bb37c;
        case 0x2bb394u: goto label_2bb394;
        case 0x2bb3b4u: goto label_2bb3b4;
        case 0x2bb3d0u: goto label_2bb3d0;
        default: break;
    }

    ctx->pc = 0x2bb2b0u;

    // 0x2bb2b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2bb2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2bb2b4: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x2bb2b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2bb2b8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2bb2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2bb2bc: 0x24080119  addiu       $t0, $zero, 0x119
    ctx->pc = 0x2bb2bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 281));
    // 0x2bb2c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2bb2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2bb2c4: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x2bb2c4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x2bb2c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2bb2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bb2cc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2bb2ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb2d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bb2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bb2d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bb2d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb2d8: 0x2690e848  addiu       $s0, $s4, -0x17B8
    ctx->pc = 0x2bb2d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961224));
    // 0x2bb2dc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2bb2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2bb2e0: 0x26440098  addiu       $a0, $s2, 0x98
    ctx->pc = 0x2bb2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 152));
    // 0x2bb2e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2bb2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bb2e8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2bb2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2bb2ec: 0xc0a8b46  jal         func_2A2D18
    ctx->pc = 0x2BB2ECu;
    SET_GPR_U32(ctx, 31, 0x2BB2F4u);
    ctx->pc = 0x2BB2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB2ECu;
    // 0x2bb2f0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2D18u, 0x2BB2ECu, 0x2BB2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB2F4u;
label_2bb2f4:
    // 0x2bb2f4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2bb2f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb2f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2bb2f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb2fc: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2bb2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2bb300: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2bb300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2bb304: 0xc0a8b3a  jal         func_2A2CE8
    ctx->pc = 0x2BB304u;
    SET_GPR_U32(ctx, 31, 0x2BB30Cu);
    ctx->pc = 0x2BB308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB304u;
    // 0x2bb308: 0x2407011b  addiu       $a3, $zero, 0x11B (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 283));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2CE8u, 0x2BB304u, 0x2BB30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB30Cu;
label_2bb30c:
    // 0x2bb30c: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x2bb30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2bb310: 0xc0a61dc  jal         func_298770
    ctx->pc = 0x2BB310u;
    SET_GPR_U32(ctx, 31, 0x2BB318u);
    ctx->pc = 0x2BB314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB310u;
    // 0x2bb314: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298770u, 0x2BB310u, 0x2BB318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB318u;
label_2bb318:
    // 0x2bb318: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BB318u;
    {
        const bool branch_taken_0x2bb318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB318u;
        // 0x2bb31c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb318) {
            ctx->pc = 0x2BB330u;
            goto label_2bb330;
        }
    }
    ctx->pc = 0x2BB320u;
    // 0x2bb320: 0xc0aed46  jal         func_2BB518
    ctx->pc = 0x2BB320u;
    SET_GPR_U32(ctx, 31, 0x2BB328u);
    ctx->pc = 0x2BB324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB320u;
    // 0x2bb324: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB518u, 0x2BB320u, 0x2BB328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB328u;
label_2bb328:
    // 0x2bb328: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2BB328u;
    {
        const bool branch_taken_0x2bb328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB328u;
        // 0x2bb32c: 0x2686e848  addiu       $a2, $s4, -0x17B8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb328) {
            ctx->pc = 0x2BB3C0u;
            goto label_2bb3c0;
        }
    }
    ctx->pc = 0x2BB330u;
label_2bb330:
    // 0x2bb330: 0xc0aeecc  jal         func_2BBB30
    ctx->pc = 0x2BB330u;
    SET_GPR_U32(ctx, 31, 0x2BB338u);
    ctx->pc = 0x2BB334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB330u;
    // 0x2bb334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBB30u, 0x2BB330u, 0x2BB338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB338u;
label_2bb338:
    // 0x2bb338: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2bb338u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bb33c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bb33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb340: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x2bb340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x2bb344: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bb344u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb348: 0xc0ac13a  jal         func_2B04E8
    ctx->pc = 0x2BB348u;
    SET_GPR_U32(ctx, 31, 0x2BB350u);
    ctx->pc = 0x2BB34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB348u;
    // 0x2bb34c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B04E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B04E8u, 0x2BB348u, 0x2BB350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB350u;
label_2bb350:
    // 0x2bb350: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2BB350u;
    {
        const bool branch_taken_0x2bb350 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2BB354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB350u;
        // 0x2bb354: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb350) {
            ctx->pc = 0x2BB3BCu;
            goto label_2bb3bc;
        }
    }
    ctx->pc = 0x2BB358u;
    // 0x2bb358: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2BB358u;
    {
        const bool branch_taken_0x2bb358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB358u;
        // 0x2bb35c: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb358) {
            ctx->pc = 0x2BB370u;
            goto label_2bb370;
        }
    }
    ctx->pc = 0x2BB360u;
label_2bb360:
    // 0x2bb360: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2bb360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2bb364: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x2bb364u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
    // 0x2bb368: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bb368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bb36c:
    // 0x2bb36c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2bb36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2bb370:
    // 0x2bb370: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bb370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb374: 0xc0ac13a  jal         func_2B04E8
    ctx->pc = 0x2BB374u;
    SET_GPR_U32(ctx, 31, 0x2BB37Cu);
    ctx->pc = 0x2BB378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB374u;
    // 0x2bb378: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B04E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B04E8u, 0x2BB374u, 0x2BB37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB37Cu;
label_2bb37c:
    // 0x2bb37c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2bb37cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb380: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bb380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb384: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x2bb384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x2bb388: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bb388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb38c: 0xc0ac13a  jal         func_2B04E8
    ctx->pc = 0x2BB38Cu;
    SET_GPR_U32(ctx, 31, 0x2BB394u);
    ctx->pc = 0x2BB390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB38Cu;
    // 0x2bb390: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B04E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B04E8u, 0x2BB38Cu, 0x2BB394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB394u;
label_2bb394:
    // 0x2bb394: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2bb394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2bb398: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BB398u;
    {
        const bool branch_taken_0x2bb398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB398u;
        // 0x2bb39c: 0x2686e848  addiu       $a2, $s4, -0x17B8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb398) {
            ctx->pc = 0x2BB3C0u;
            goto label_2bb3c0;
        }
    }
    ctx->pc = 0x2BB3A0u;
    // 0x2bb3a0: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x2bb3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2bb3a4: 0x10a0fff1  beqz        $a1, . + 4 + (-0xF << 2)
    ctx->pc = 0x2BB3A4u;
    {
        const bool branch_taken_0x2bb3a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB3A4u;
        // 0x2bb3a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb3a4) {
            ctx->pc = 0x2BB36Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bb36c;
        }
    }
    ctx->pc = 0x2BB3ACu;
    // 0x2bb3ac: 0xc0aed22  jal         func_2BB488
    ctx->pc = 0x2BB3ACu;
    SET_GPR_U32(ctx, 31, 0x2BB3B4u);
    ctx->pc = 0x2BB3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB3ACu;
    // 0x2bb3b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB488u, 0x2BB3ACu, 0x2BB3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB3B4u;
label_2bb3b4:
    // 0x2bb3b4: 0x5440ffea  bnel        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2BB3B4u;
    {
        const bool branch_taken_0x2bb3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb3b4) {
            ctx->pc = 0x2BB3B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB3B4u;
            // 0x2bb3b8: 0x8e22006c  lw          $v0, 0x6C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB360u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bb360;
        }
    }
    ctx->pc = 0x2BB3BCu;
label_2bb3bc:
    // 0x2bb3bc: 0x2686e848  addiu       $a2, $s4, -0x17B8
    ctx->pc = 0x2bb3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961224));
label_2bb3c0:
    // 0x2bb3c0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2bb3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2bb3c4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2bb3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2bb3c8: 0xc0a8b3a  jal         func_2A2CE8
    ctx->pc = 0x2BB3C8u;
    SET_GPR_U32(ctx, 31, 0x2BB3D0u);
    ctx->pc = 0x2BB3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB3C8u;
    // 0x2bb3cc: 0x2407013f  addiu       $a3, $zero, 0x13F (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 319));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2CE8u, 0x2BB3C8u, 0x2BB3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB3D0u;
label_2bb3d0:
    // 0x2bb3d0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2bb3d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb3d4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2bb3d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bb3d8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2bb3d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bb3dc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2bb3dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bb3e0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2bb3e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bb3e4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bb3e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb3e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bb3e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb3ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB3ECu;
        // 0x2bb3f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB3ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB3F4u;
    // 0x2bb3f4: 0x0  nop
    ctx->pc = 0x2bb3f4u;
    // NOP
}
