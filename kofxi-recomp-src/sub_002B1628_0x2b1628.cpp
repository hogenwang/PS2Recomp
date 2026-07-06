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

// Function: sub_002B1628
// Address: 0x2b1628 - 0x2b1748
void sub_002B1628_0x2b1628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B1628_0x2b1628");
#endif

    switch (ctx->pc) {
        case 0x2b1654u: goto label_2b1654;
        case 0x2b165cu: goto label_2b165c;
        case 0x2b1688u: goto label_2b1688;
        case 0x2b16a0u: goto label_2b16a0;
        case 0x2b16b4u: goto label_2b16b4;
        case 0x2b16ccu: goto label_2b16cc;
        case 0x2b16e8u: goto label_2b16e8;
        case 0x2b170cu: goto label_2b170c;
        case 0x2b1724u: goto label_2b1724;
        default: break;
    }

    ctx->pc = 0x2b1628u;

    // 0x2b1628: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b1628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b162c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b162cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b1630: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b1630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b1634: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b1634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b1638: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b1638u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b163c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b163cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b1640: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x2b1640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2b1644: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B1644u;
    {
        const bool branch_taken_0x2b1644 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1644u;
        // 0x2b1648: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1644) {
            ctx->pc = 0x2B1670u;
            goto label_2b1670;
        }
    }
    ctx->pc = 0x2B164Cu;
    // 0x2b164c: 0xc0a10f0  jal         func_2843C0
    ctx->pc = 0x2B164Cu;
    SET_GPR_U32(ctx, 31, 0x2B1654u);
    ctx->pc = 0x2843C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2843C0u, 0x2B164Cu, 0x2B1654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1654u;
label_2b1654:
    // 0x2b1654: 0xc0a13de  jal         func_284F78
    ctx->pc = 0x2B1654u;
    SET_GPR_U32(ctx, 31, 0x2B165Cu);
    ctx->pc = 0x2B1658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1654u;
    // 0x2b1658: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284F78u, 0x2B1654u, 0x2B165Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B165Cu;
label_2b165c:
    // 0x2b165c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b165cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1660: 0x5600000a  bnel        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2B1660u;
    {
        const bool branch_taken_0x2b1660 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b1660) {
            ctx->pc = 0x2B1664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1660u;
            // 0x2b1664: 0xae300014  sw          $s0, 0x14($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B168Cu;
            goto label_2b168c;
        }
    }
    ctx->pc = 0x2B1668u;
    // 0x2b1668: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2B1668u;
    {
        const bool branch_taken_0x2b1668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B166Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1668u;
        // 0x2b166c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1668) {
            ctx->pc = 0x2B172Cu;
            goto label_2b172c;
        }
    }
    ctx->pc = 0x2B1670u;
label_2b1670:
    // 0x2b1670: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2b1670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2b1674: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b1674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1678: 0x56020005  bnel        $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B1678u;
    {
        const bool branch_taken_0x2b1678 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b1678) {
            ctx->pc = 0x2B167Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1678u;
            // 0x2b167c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1690u;
            goto label_2b1690;
        }
    }
    ctx->pc = 0x2B1680u;
    // 0x2b1680: 0xc0a15b6  jal         func_2856D8
    ctx->pc = 0x2B1680u;
    SET_GPR_U32(ctx, 31, 0x2B1688u);
    ctx->pc = 0x2856D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2856D8u, 0x2B1680u, 0x2B1688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1688u;
label_2b1688:
    // 0x2b1688: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2b1688u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_2b168c:
    // 0x2b168c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b168cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b1690:
    // 0x2b1690: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b1690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b1694: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b1694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1698: 0xc0a1558  jal         func_285560
    ctx->pc = 0x2B1698u;
    SET_GPR_U32(ctx, 31, 0x2B16A0u);
    ctx->pc = 0x2B169Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1698u;
    // 0x2b169c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285560u, 0x2B1698u, 0x2B16A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B16A0u;
label_2b16a0:
    // 0x2b16a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b16a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b16a4: 0x24050075  addiu       $a1, $zero, 0x75
    ctx->pc = 0x2b16a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x2b16a8: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x2b16a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2b16ac: 0xc0a1550  jal         func_285540
    ctx->pc = 0x2B16ACu;
    SET_GPR_U32(ctx, 31, 0x2B16B4u);
    ctx->pc = 0x2B16B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B16ACu;
    // 0x2b16b0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285540u, 0x2B16ACu, 0x2B16B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B16B4u;
label_2b16b4:
    // 0x2b16b4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B16B4u;
    {
        const bool branch_taken_0x2b16b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B16B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B16B4u;
        // 0x2b16b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b16b4) {
            ctx->pc = 0x2B16F0u;
            goto label_2b16f0;
        }
    }
    ctx->pc = 0x2B16BCu;
    // 0x2b16bc: 0x24050075  addiu       $a1, $zero, 0x75
    ctx->pc = 0x2b16bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x2b16c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b16c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b16c4: 0xc0a1550  jal         func_285540
    ctx->pc = 0x2B16C4u;
    SET_GPR_U32(ctx, 31, 0x2B16CCu);
    ctx->pc = 0x2B16C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B16C4u;
    // 0x2b16c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285540u, 0x2B16C4u, 0x2B16CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B16CCu;
label_2b16cc:
    // 0x2b16cc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B16CCu;
    {
        const bool branch_taken_0x2b16cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B16D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B16CCu;
        // 0x2b16d0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b16cc) {
            ctx->pc = 0x2B16F0u;
            goto label_2b16f0;
        }
    }
    ctx->pc = 0x2B16D4u;
    // 0x2b16d4: 0x240500b8  addiu       $a1, $zero, 0xB8
    ctx->pc = 0x2b16d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    // 0x2b16d8: 0x24060807  addiu       $a2, $zero, 0x807
    ctx->pc = 0x2b16d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2055));
    // 0x2b16dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b16dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b16e0: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2B16E0u;
    SET_GPR_U32(ctx, 31, 0x2B16E8u);
    ctx->pc = 0x2B16E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B16E0u;
    // 0x2b16e4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B16E0u, 0x2B16E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B16E8u;
label_2b16e8:
    // 0x2b16e8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2B16E8u;
    {
        const bool branch_taken_0x2b16e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B16ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B16E8u;
        // 0x2b16ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b16e8) {
            ctx->pc = 0x2B172Cu;
            goto label_2b172c;
        }
    }
    ctx->pc = 0x2B16F0u;
label_2b16f0:
    // 0x2b16f0: 0x52400008  beql        $s2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B16F0u;
    {
        const bool branch_taken_0x2b16f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b16f0) {
            ctx->pc = 0x2B16F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B16F0u;
            // 0x2b16f4: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1714u;
            goto label_2b1714;
        }
    }
    ctx->pc = 0x2B16F8u;
    // 0x2b16f8: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x2b16f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2b16fc: 0x10b0000b  beq         $a1, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B16FCu;
    {
        const bool branch_taken_0x2b16fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        ctx->pc = 0x2B1700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B16FCu;
        // 0x2b1700: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b16fc) {
            ctx->pc = 0x2B172Cu;
            goto label_2b172c;
        }
    }
    ctx->pc = 0x2B1704u;
    // 0x2b1704: 0xc0a1596  jal         func_285658
    ctx->pc = 0x2B1704u;
    SET_GPR_U32(ctx, 31, 0x2B170Cu);
    ctx->pc = 0x2B1708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1704u;
    // 0x2b1708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285658u, 0x2B1704u, 0x2B170Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B170Cu;
label_2b170c:
    // 0x2b170c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B170Cu;
    {
        const bool branch_taken_0x2b170c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B170Cu;
        // 0x2b1710: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b170c) {
            ctx->pc = 0x2B1728u;
            goto label_2b1728;
        }
    }
    ctx->pc = 0x2B1714u;
label_2b1714:
    // 0x2b1714: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B1714u;
    {
        const bool branch_taken_0x2b1714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2B1718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1714u;
        // 0x2b1718: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1714) {
            ctx->pc = 0x2B172Cu;
            goto label_2b172c;
        }
    }
    ctx->pc = 0x2B171Cu;
    // 0x2b171c: 0xc0a15b6  jal         func_2856D8
    ctx->pc = 0x2B171Cu;
    SET_GPR_U32(ctx, 31, 0x2B1724u);
    ctx->pc = 0x2B1720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B171Cu;
    // 0x2b1720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2856D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2856D8u, 0x2B171Cu, 0x2B1724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1724u;
label_2b1724:
    // 0x2b1724: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2b1724u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_2b1728:
    // 0x2b1728: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b1728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b172c:
    // 0x2b172c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b172cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b1730: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b1730u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b1734: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b1734u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1738: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b1738u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b173c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B173Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B173Cu;
        // 0x2b1740: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B173Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1744u;
    // 0x2b1744: 0x0  nop
    ctx->pc = 0x2b1744u;
    // NOP
}
