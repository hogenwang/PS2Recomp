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

// Function: sub_0030A2B0
// Address: 0x30a2b0 - 0x30a3f0
void sub_0030A2B0_0x30a2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030A2B0_0x30a2b0");
#endif

    switch (ctx->pc) {
        case 0x30a2e8u: goto label_30a2e8;
        case 0x30a318u: goto label_30a318;
        case 0x30a32cu: goto label_30a32c;
        case 0x30a374u: goto label_30a374;
        case 0x30a37cu: goto label_30a37c;
        case 0x30a394u: goto label_30a394;
        case 0x30a3b4u: goto label_30a3b4;
        case 0x30a3c4u: goto label_30a3c4;
        default: break;
    }

    ctx->pc = 0x30a2b0u;

    // 0x30a2b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30a2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30a2b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30a2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30a2b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30a2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30a2bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30a2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30a2c0: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x30a2c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x30a2c4: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x30a2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x30a2c8: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x30A2C8u;
    {
        const bool branch_taken_0x30a2c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A2C8u;
        // 0x30a2cc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a2c8) {
            ctx->pc = 0x30A3D8u;
            goto label_30a3d8;
        }
    }
    ctx->pc = 0x30A2D0u;
    // 0x30a2d0: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x30a2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x30a2d4: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30a2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30a2d8: 0x8c4520c0  lw          $a1, 0x20C0($v0)
    ctx->pc = 0x30a2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8384)));
    // 0x30a2dc: 0x24841f00  addiu       $a0, $a0, 0x1F00
    ctx->pc = 0x30a2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7936));
    // 0x30a2e0: 0xc040d06  jal         func_103418
    ctx->pc = 0x30A2E0u;
    SET_GPR_U32(ctx, 31, 0x30A2E8u);
    ctx->pc = 0x30A2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A2E0u;
    // 0x30a2e4: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103418u, 0x30A2E0u, 0x30A2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A2E8u;
label_30a2e8:
    // 0x30a2e8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x30a2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x30a2ec: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x30a2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x30a2f0: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x30a2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x30a2f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x30a2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30a2f8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x30A2F8u;
    {
        const bool branch_taken_0x30a2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a2f8) {
            ctx->pc = 0x30A2FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A2F8u;
            // 0x30a2fc: 0x8e020118  lw          $v0, 0x118($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A31Cu;
            goto label_30a31c;
        }
    }
    ctx->pc = 0x30A300u;
    // 0x30a300: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x30a300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x30a304: 0x3c0601d3  lui         $a2, 0x1D3
    ctx->pc = 0x30a304u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)467 << 16));
    // 0x30a308: 0x24841f00  addiu       $a0, $a0, 0x1F00
    ctx->pc = 0x30a308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7936));
    // 0x30a30c: 0x24c61ec0  addiu       $a2, $a2, 0x1EC0
    ctx->pc = 0x30a30cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7872));
    // 0x30a310: 0xc040d06  jal         func_103418
    ctx->pc = 0x30A310u;
    SET_GPR_U32(ctx, 31, 0x30A318u);
    ctx->pc = 0x30A314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A310u;
    // 0x30a314: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103418u, 0x30A310u, 0x30A318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A318u;
label_30a318:
    // 0x30a318: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x30a318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_30a31c:
    // 0x30a31c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30A31Cu;
    {
        const bool branch_taken_0x30a31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a31c) {
            ctx->pc = 0x30A334u;
            goto label_30a334;
        }
    }
    ctx->pc = 0x30A324u;
    // 0x30a324: 0xc0c2688  jal         func_309A20
    ctx->pc = 0x30A324u;
    SET_GPR_U32(ctx, 31, 0x30A32Cu);
    ctx->pc = 0x30A328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A324u;
    // 0x30a328: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309A20u, 0x30A324u, 0x30A32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A32Cu;
label_30a32c:
    // 0x30a32c: 0x5440002b  bnel        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x30A32Cu;
    {
        const bool branch_taken_0x30a32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a32c) {
            ctx->pc = 0x30A330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A32Cu;
            // 0x30a330: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A3DCu;
            goto label_30a3dc;
        }
    }
    ctx->pc = 0x30A334u;
label_30a334:
    // 0x30a334: 0x3c0201d2  lui         $v0, 0x1D2
    ctx->pc = 0x30a334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)466 << 16));
    // 0x30a338: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x30a338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x30a33c: 0x8c441e18  lw          $a0, 0x1E18($v0)
    ctx->pc = 0x30a33cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7704)));
    // 0x30a340: 0x3c0201d2  lui         $v0, 0x1D2
    ctx->pc = 0x30a340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)466 << 16));
    // 0x30a344: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x30a344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30a348: 0xac431e18  sw          $v1, 0x1E18($v0)
    ctx->pc = 0x30a348u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7704), GPR_U32(ctx, 3));
    // 0x30a34c: 0x8e060118  lw          $a2, 0x118($s0)
    ctx->pc = 0x30a34cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x30a350: 0x54c00003  bnel        $a2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x30A350u;
    {
        const bool branch_taken_0x30a350 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a350) {
            ctx->pc = 0x30A354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A350u;
            // 0x30a354: 0x8e070110  lw          $a3, 0x110($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A360u;
            goto label_30a360;
        }
    }
    ctx->pc = 0x30A358u;
    // 0x30a358: 0x8e060114  lw          $a2, 0x114($s0)
    ctx->pc = 0x30a358u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x30a35c: 0x8e070110  lw          $a3, 0x110($s0)
    ctx->pc = 0x30a35cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_30a360:
    // 0x30a360: 0x3c0401d2  lui         $a0, 0x1D2
    ctx->pc = 0x30a360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)466 << 16));
    // 0x30a364: 0x3c0501d3  lui         $a1, 0x1D3
    ctx->pc = 0x30a364u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)467 << 16));
    // 0x30a368: 0x24841e50  addiu       $a0, $a0, 0x1E50
    ctx->pc = 0x30a368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7760));
    // 0x30a36c: 0xc0c2728  jal         func_309CA0
    ctx->pc = 0x30A36Cu;
    SET_GPR_U32(ctx, 31, 0x30A374u);
    ctx->pc = 0x30A370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A36Cu;
    // 0x30a370: 0x24a51f00  addiu       $a1, $a1, 0x1F00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309CA0u, 0x30A36Cu, 0x30A374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A374u;
label_30a374:
    // 0x30a374: 0xc0c25dc  jal         func_309770
    ctx->pc = 0x30A374u;
    SET_GPR_U32(ctx, 31, 0x30A37Cu);
    ctx->pc = 0x30A378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A374u;
    // 0x30a378: 0x8e04017c  lw          $a0, 0x17C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309770u, 0x30A374u, 0x30A37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A37Cu;
label_30a37c:
    // 0x30a37c: 0x8e07011c  lw          $a3, 0x11C($s0)
    ctx->pc = 0x30a37cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x30a380: 0x3c0501d2  lui         $a1, 0x1D2
    ctx->pc = 0x30a380u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)466 << 16));
    // 0x30a384: 0x8e2400b8  lw          $a0, 0xB8($s1)
    ctx->pc = 0x30a384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x30a388: 0x8e060120  lw          $a2, 0x120($s0)
    ctx->pc = 0x30a388u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x30a38c: 0xc0c2788  jal         func_309E20
    ctx->pc = 0x30A38Cu;
    SET_GPR_U32(ctx, 31, 0x30A394u);
    ctx->pc = 0x30A390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A38Cu;
    // 0x30a390: 0x24a51e50  addiu       $a1, $a1, 0x1E50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309E20u, 0x30A38Cu, 0x30A394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A394u;
label_30a394:
    // 0x30a394: 0x3c0201d2  lui         $v0, 0x1D2
    ctx->pc = 0x30a394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)466 << 16));
    // 0x30a398: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x30a398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x30a39c: 0x8c451e30  lw          $a1, 0x1E30($v0)
    ctx->pc = 0x30a39cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7728)));
    // 0x30a3a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30a3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a3a4: 0x3c0201d2  lui         $v0, 0x1D2
    ctx->pc = 0x30a3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)466 << 16));
    // 0x30a3a8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x30a3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x30a3ac: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x30A3ACu;
    SET_GPR_U32(ctx, 31, 0x30A3B4u);
    ctx->pc = 0x30A3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A3ACu;
    // 0x30a3b0: 0xac431e30  sw          $v1, 0x1E30($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 7728), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x30A3ACu, 0x30A3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A3B4u;
label_30a3b4:
    // 0x30a3b4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30a3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x30a3b8: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x30a3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
    // 0x30a3bc: 0xc040a04  jal         func_102810
    ctx->pc = 0x30A3BCu;
    SET_GPR_U32(ctx, 31, 0x30A3C4u);
    ctx->pc = 0x30A3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A3BCu;
    // 0x30a3c0: 0x8e2500b4  lw          $a1, 0xB4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102810u, 0x30A3BCu, 0x30A3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A3C4u;
label_30a3c4:
    // 0x30a3c4: 0x3c0401d2  lui         $a0, 0x1D2
    ctx->pc = 0x30a3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)466 << 16));
    // 0x30a3c8: 0x3c0301d2  lui         $v1, 0x1D2
    ctx->pc = 0x30a3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)466 << 16));
    // 0x30a3cc: 0x8c841e10  lw          $a0, 0x1E10($a0)
    ctx->pc = 0x30a3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7696)));
    // 0x30a3d0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x30a3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30a3d4: 0xac641e10  sw          $a0, 0x1E10($v1)
    ctx->pc = 0x30a3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7696), GPR_U32(ctx, 4));
label_30a3d8:
    // 0x30a3d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30a3d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_30a3dc:
    // 0x30a3dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30a3dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30a3e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30a3e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30a3e4: 0x3e00008  jr          $ra
    ctx->pc = 0x30A3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A3E4u;
        // 0x30a3e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A3E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A3ECu;
    // 0x30a3ec: 0x0  nop
    ctx->pc = 0x30a3ecu;
    // NOP
}
