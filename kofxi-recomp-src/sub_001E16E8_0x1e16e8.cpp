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

// Function: sub_001E16E8
// Address: 0x1e16e8 - 0x1e17e0
void sub_001E16E8_0x1e16e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E16E8_0x1e16e8");
#endif

    switch (ctx->pc) {
        case 0x1e1710u: goto label_1e1710;
        case 0x1e1720u: goto label_1e1720;
        case 0x1e1730u: goto label_1e1730;
        case 0x1e173cu: goto label_1e173c;
        case 0x1e1748u: goto label_1e1748;
        case 0x1e1750u: goto label_1e1750;
        case 0x1e1768u: goto label_1e1768;
        case 0x1e177cu: goto label_1e177c;
        default: break;
    }

    ctx->pc = 0x1e16e8u;

    // 0x1e16e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e16e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e16ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e16ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e16f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e16f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e16f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e16f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e16f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e16f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e16fc: 0x8e11003c  lw          $s1, 0x3C($s0)
    ctx->pc = 0x1e16fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1e1700: 0x52200033  beql        $s1, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x1E1700u;
    {
        const bool branch_taken_0x1e1700 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1700) {
            ctx->pc = 0x1E1704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1700u;
            // 0x1e1704: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E17D0u;
            goto label_1e17d0;
        }
    }
    ctx->pc = 0x1E1708u;
    // 0x1e1708: 0xc079e64  jal         func_1E7990
    ctx->pc = 0x1E1708u;
    SET_GPR_U32(ctx, 31, 0x1E1710u);
    ctx->pc = 0x1E7990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7990u, 0x1E1708u, 0x1E1710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1710u;
label_1e1710:
    // 0x1e1710: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1e1710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1e1714: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1e1714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1e1718: 0xc07e334  jal         func_1F8CD0
    ctx->pc = 0x1E1718u;
    SET_GPR_U32(ctx, 31, 0x1E1720u);
    ctx->pc = 0x1E171Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1718u;
    // 0x1e171c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8CD0u, 0x1E1718u, 0x1E1720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1720u;
label_1e1720:
    // 0x1e1720: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E1720u;
    {
        const bool branch_taken_0x1e1720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1720) {
            ctx->pc = 0x1E1724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1720u;
            // 0x1e1724: 0xae11003c  sw          $s1, 0x3C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1740u;
            goto label_1e1740;
        }
    }
    ctx->pc = 0x1E1728u;
    // 0x1e1728: 0xc078328  jal         func_1E0CA0
    ctx->pc = 0x1E1728u;
    SET_GPR_U32(ctx, 31, 0x1E1730u);
    ctx->pc = 0x1E172Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1728u;
    // 0x1e172c: 0x2404fecc  addiu       $a0, $zero, -0x134 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966988));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0CA0u, 0x1E1728u, 0x1E1730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1730u;
label_1e1730:
    // 0x1e1730: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e1730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e1734: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E1734u;
    SET_GPR_U32(ctx, 31, 0x1E173Cu);
    ctx->pc = 0x1E1738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1734u;
    // 0x1e1738: 0x2484d2a8  addiu       $a0, $a0, -0x2D58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1E1734u, 0x1E173Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E173Cu;
label_1e173c:
    // 0x1e173c: 0xae11003c  sw          $s1, 0x3C($s0)
    ctx->pc = 0x1e173cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 17));
label_1e1740:
    // 0x1e1740: 0xc0798a2  jal         func_1E6288
    ctx->pc = 0x1E1740u;
    SET_GPR_U32(ctx, 31, 0x1E1748u);
    ctx->pc = 0x1E1744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1740u;
    // 0x1e1744: 0x26040488  addiu       $a0, $s0, 0x488 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6288u, 0x1E1740u, 0x1E1748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1748u;
label_1e1748:
    // 0x1e1748: 0xc0798a2  jal         func_1E6288
    ctx->pc = 0x1E1748u;
    SET_GPR_U32(ctx, 31, 0x1E1750u);
    ctx->pc = 0x1E174Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1748u;
    // 0x1e174c: 0x260404a8  addiu       $a0, $s0, 0x4A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6288u, 0x1E1748u, 0x1E1750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1750u;
label_1e1750:
    // 0x1e1750: 0xae0004d0  sw          $zero, 0x4D0($s0)
    ctx->pc = 0x1e1750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1232), GPR_U32(ctx, 0));
    // 0x1e1754: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x1e1754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1e1758: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E1758u;
    {
        const bool branch_taken_0x1e1758 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1758) {
            ctx->pc = 0x1E175Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1758u;
            // 0x1e175c: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E176Cu;
            goto label_1e176c;
        }
    }
    ctx->pc = 0x1E1760u;
    // 0x1e1760: 0xc079f9e  jal         func_1E7E78
    ctx->pc = 0x1E1760u;
    SET_GPR_U32(ctx, 31, 0x1E1768u);
    ctx->pc = 0x1E7E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7E78u, 0x1E1760u, 0x1E1768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1768u;
label_1e1768:
    // 0x1e1768: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x1e1768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1e176c:
    // 0x1e176c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E176Cu;
    {
        const bool branch_taken_0x1e176c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e176c) {
            ctx->pc = 0x1E1770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E176Cu;
            // 0x1e1770: 0x8e0204e4  lw          $v0, 0x4E4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1252)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1780u;
            goto label_1e1780;
        }
    }
    ctx->pc = 0x1E1774u;
    // 0x1e1774: 0xc0718ae  jal         func_1C62B8
    ctx->pc = 0x1E1774u;
    SET_GPR_U32(ctx, 31, 0x1E177Cu);
    ctx->pc = 0x1C62B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C62B8u, 0x1E1774u, 0x1E177Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E177Cu;
label_1e177c:
    // 0x1e177c: 0x8e0204e4  lw          $v0, 0x4E4($s0)
    ctx->pc = 0x1e177cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1252)));
label_1e1780:
    // 0x1e1780: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E1780u;
    {
        const bool branch_taken_0x1e1780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1780u;
        // 0x1e1784: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1780) {
            ctx->pc = 0x1E17A8u;
            goto label_1e17a8;
        }
    }
    ctx->pc = 0x1E1788u;
    // 0x1e1788: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e1788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e178c: 0xae0004ec  sw          $zero, 0x4EC($s0)
    ctx->pc = 0x1e178cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1260), GPR_U32(ctx, 0));
    // 0x1e1790: 0xae020500  sw          $v0, 0x500($s0)
    ctx->pc = 0x1e1790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1280), GPR_U32(ctx, 2));
    // 0x1e1794: 0xae0004e8  sw          $zero, 0x4E8($s0)
    ctx->pc = 0x1e1794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1256), GPR_U32(ctx, 0));
    // 0x1e1798: 0xae0004e0  sw          $zero, 0x4E0($s0)
    ctx->pc = 0x1e1798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1248), GPR_U32(ctx, 0));
    // 0x1e179c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E179Cu;
    {
        const bool branch_taken_0x1e179c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E17A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E179Cu;
        // 0x1e17a0: 0xae000504  sw          $zero, 0x504($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e179c) {
            ctx->pc = 0x1E17ACu;
            goto label_1e17ac;
        }
    }
    ctx->pc = 0x1E17A4u;
    // 0x1e17a4: 0x0  nop
    ctx->pc = 0x1e17a4u;
    // NOP
label_1e17a8:
    // 0x1e17a8: 0xae0204ec  sw          $v0, 0x4EC($s0)
    ctx->pc = 0x1e17a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1260), GPR_U32(ctx, 2));
label_1e17ac:
    // 0x1e17ac: 0xae000508  sw          $zero, 0x508($s0)
    ctx->pc = 0x1e17acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1288), GPR_U32(ctx, 0));
    // 0x1e17b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e17b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e17b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e17b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e17b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e17b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e17bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e17bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e17c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e17c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e17c4: 0x8079694  j           func_1E5A50
    ctx->pc = 0x1E17C4u;
    ctx->pc = 0x1E17C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E17C4u;
    // 0x1e17c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5A50u;
    sub_001E5A50_0x1e5a50(rdram, ctx, runtime); return;
    ctx->pc = 0x1E17CCu;
    // 0x1e17cc: 0x0  nop
    ctx->pc = 0x1e17ccu;
    // NOP
label_1e17d0:
    // 0x1e17d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e17d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e17d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e17d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e17d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E17D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E17DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E17D8u;
        // 0x1e17dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E17D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E17E0u;
}
