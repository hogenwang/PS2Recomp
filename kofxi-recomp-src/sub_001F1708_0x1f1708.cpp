#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F1708
// Address: 0x1f1708 - 0x1f17c8
void sub_001F1708_0x1f1708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1708_0x1f1708");
#endif

    switch (ctx->pc) {
        case 0x1f1708u: goto label_1f1708;
        case 0x1f170cu: goto label_1f170c;
        case 0x1f1710u: goto label_1f1710;
        case 0x1f1714u: goto label_1f1714;
        case 0x1f1718u: goto label_1f1718;
        case 0x1f171cu: goto label_1f171c;
        case 0x1f1720u: goto label_1f1720;
        case 0x1f1724u: goto label_1f1724;
        case 0x1f1728u: goto label_1f1728;
        case 0x1f172cu: goto label_1f172c;
        case 0x1f1730u: goto label_1f1730;
        case 0x1f1734u: goto label_1f1734;
        case 0x1f1738u: goto label_1f1738;
        case 0x1f173cu: goto label_1f173c;
        case 0x1f1740u: goto label_1f1740;
        case 0x1f1744u: goto label_1f1744;
        case 0x1f1748u: goto label_1f1748;
        case 0x1f174cu: goto label_1f174c;
        case 0x1f1750u: goto label_1f1750;
        case 0x1f1754u: goto label_1f1754;
        case 0x1f1758u: goto label_1f1758;
        case 0x1f175cu: goto label_1f175c;
        case 0x1f1760u: goto label_1f1760;
        case 0x1f1764u: goto label_1f1764;
        case 0x1f1768u: goto label_1f1768;
        case 0x1f176cu: goto label_1f176c;
        case 0x1f1770u: goto label_1f1770;
        case 0x1f1774u: goto label_1f1774;
        case 0x1f1778u: goto label_1f1778;
        case 0x1f177cu: goto label_1f177c;
        case 0x1f1780u: goto label_1f1780;
        case 0x1f1784u: goto label_1f1784;
        case 0x1f1788u: goto label_1f1788;
        case 0x1f178cu: goto label_1f178c;
        case 0x1f1790u: goto label_1f1790;
        case 0x1f1794u: goto label_1f1794;
        case 0x1f1798u: goto label_1f1798;
        case 0x1f179cu: goto label_1f179c;
        case 0x1f17a0u: goto label_1f17a0;
        case 0x1f17a4u: goto label_1f17a4;
        case 0x1f17a8u: goto label_1f17a8;
        case 0x1f17acu: goto label_1f17ac;
        case 0x1f17b0u: goto label_1f17b0;
        case 0x1f17b4u: goto label_1f17b4;
        case 0x1f17b8u: goto label_1f17b8;
        case 0x1f17bcu: goto label_1f17bc;
        case 0x1f17c0u: goto label_1f17c0;
        case 0x1f17c4u: goto label_1f17c4;
        default: break;
    }

    ctx->pc = 0x1f1708u;

label_1f1708:
    // 0x1f1708: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f1708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1f170c:
    // 0x1f170c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f170cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1f1710:
    // 0x1f1710: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f1710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f1714:
    // 0x1f1714: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1f1714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1f1718:
    // 0x1f1718: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f1718u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f171c:
    // 0x1f171c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f171cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1f1720:
    // 0x1f1720: 0x24120080  addiu       $s2, $zero, 0x80
    ctx->pc = 0x1f1720u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1f1724:
    // 0x1f1724: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1f1724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1f1728:
    // 0x1f1728: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x1f1728u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f172c:
    // 0x1f172c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1f1730:
    if (ctx->pc == 0x1F1730u) {
        ctx->pc = 0x1F1730u;
            // 0x1f1730: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->pc = 0x1F1734u;
        goto label_1f1734;
    }
    ctx->pc = 0x1F172Cu;
    {
        const bool branch_taken_0x1f172c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F172Cu;
            // 0x1f1730: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f172c) {
            ctx->pc = 0x1F1758u;
            goto label_1f1758;
        }
    }
    ctx->pc = 0x1F1734u;
label_1f1734:
    // 0x1f1734: 0x0  nop
    ctx->pc = 0x1f1734u;
    // NOP
label_1f1738:
    // 0x1f1738: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f1738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f173c:
    // 0x1f173c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f173cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1740:
    // 0x1f1740: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1f1740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1f1744:
    // 0x1f1744: 0x40f809  jalr        $v0
label_1f1748:
    if (ctx->pc == 0x1F1748u) {
        ctx->pc = 0x1F1748u;
            // 0x1f1748: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F174Cu;
        goto label_1f174c;
    }
    ctx->pc = 0x1F1744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F174Cu);
        ctx->pc = 0x1F1748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1744u;
            // 0x1f1748: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F174Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F174Cu; }
            if (ctx->pc != 0x1F174Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1F174Cu;
label_1f174c:
    // 0x1f174c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f174cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f1750:
    // 0x1f1750: 0xc07c5f2  jal         func_1F17C8
label_1f1754:
    if (ctx->pc == 0x1F1754u) {
        ctx->pc = 0x1F1754u;
            // 0x1f1754: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1F1758u;
        goto label_1f1758;
    }
    ctx->pc = 0x1F1750u;
    SET_GPR_U32(ctx, 31, 0x1F1758u);
    ctx->pc = 0x1F1754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1750u;
            // 0x1f1754: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F17C8u;
    if (runtime->hasFunction(0x1F17C8u)) {
        auto targetFn = runtime->lookupFunction(0x1F17C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1758u; }
        if (ctx->pc != 0x1F1758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F17C8_0x1f17c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1758u; }
        if (ctx->pc != 0x1F1758u) { return; }
    }
    ctx->pc = 0x1F1758u;
label_1f1758:
    // 0x1f1758: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1f1758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f175c:
    // 0x1f175c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f175cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f1760:
    // 0x1f1760: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f1760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f1764:
    // 0x1f1764: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1f1764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f1768:
    // 0x1f1768: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x1f1768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1f176c:
    // 0x1f176c: 0x60f809  jalr        $v1
label_1f1770:
    if (ctx->pc == 0x1F1770u) {
        ctx->pc = 0x1F1770u;
            // 0x1f1770: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F1774u;
        goto label_1f1774;
    }
    ctx->pc = 0x1F176Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F1774u);
        ctx->pc = 0x1F1770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F176Cu;
            // 0x1f1770: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F1774u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F1774u; }
            if (ctx->pc != 0x1F1774u) { return; }
        }
        }
    }
    ctx->pc = 0x1F1774u;
label_1f1774:
    // 0x1f1774: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1f1774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1f1778:
    // 0x1f1778: 0x54530006  bnel        $v0, $s3, . + 4 + (0x6 << 2)
label_1f177c:
    if (ctx->pc == 0x1F177Cu) {
        ctx->pc = 0x1F177Cu;
            // 0x1f177c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1F1780u;
        goto label_1f1780;
    }
    ctx->pc = 0x1F1778u;
    {
        const bool branch_taken_0x1f1778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1f1778) {
            ctx->pc = 0x1F177Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1778u;
            // 0x1f177c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1794u;
            goto label_1f1794;
        }
    }
    ctx->pc = 0x1F1780u;
label_1f1780:
    // 0x1f1780: 0xc0762c0  jal         func_1D8B00
label_1f1784:
    if (ctx->pc == 0x1F1784u) {
        ctx->pc = 0x1F1784u;
            // 0x1f1784: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1F1788u;
        goto label_1f1788;
    }
    ctx->pc = 0x1F1780u;
    SET_GPR_U32(ctx, 31, 0x1F1788u);
    ctx->pc = 0x1F1784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1780u;
            // 0x1f1784: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8B00u;
    if (runtime->hasFunction(0x1D8B00u)) {
        auto targetFn = runtime->lookupFunction(0x1D8B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1788u; }
        if (ctx->pc != 0x1F1788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8B00_0x1d8b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1788u; }
        if (ctx->pc != 0x1F1788u) { return; }
    }
    ctx->pc = 0x1F1788u;
label_1f1788:
    // 0x1f1788: 0x1052ffeb  beq         $v0, $s2, . + 4 + (-0x15 << 2)
label_1f178c:
    if (ctx->pc == 0x1F178Cu) {
        ctx->pc = 0x1F178Cu;
            // 0x1f178c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F1790u;
        goto label_1f1790;
    }
    ctx->pc = 0x1F1788u;
    {
        const bool branch_taken_0x1f1788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1F178Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1788u;
            // 0x1f178c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1788) {
            ctx->pc = 0x1F1738u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f1738;
        }
    }
    ctx->pc = 0x1F1790u;
label_1f1790:
    // 0x1f1790: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f1790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f1794:
    // 0x1f1794: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f1794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f1798:
    // 0x1f1798: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f1798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f179c:
    // 0x1f179c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1f179cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1f17a0:
    // 0x1f17a0: 0x40f809  jalr        $v0
label_1f17a4:
    if (ctx->pc == 0x1F17A4u) {
        ctx->pc = 0x1F17A4u;
            // 0x1f17a4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F17A8u;
        goto label_1f17a8;
    }
    ctx->pc = 0x1F17A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F17A8u);
        ctx->pc = 0x1F17A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F17A0u;
            // 0x1f17a4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F17A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F17A8u; }
            if (ctx->pc != 0x1F17A8u) { return; }
        }
        }
    }
    ctx->pc = 0x1F17A8u;
label_1f17a8:
    // 0x1f17a8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f17a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f17ac:
    // 0x1f17ac: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1f17acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1f17b0:
    // 0x1f17b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f17b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f17b4:
    // 0x1f17b4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1f17b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1f17b8:
    // 0x1f17b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f17b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1f17bc:
    // 0x1f17bc: 0x3e00008  jr          $ra
label_1f17c0:
    if (ctx->pc == 0x1F17C0u) {
        ctx->pc = 0x1F17C0u;
            // 0x1f17c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1F17C4u;
        goto label_1f17c4;
    }
    ctx->pc = 0x1F17BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F17C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F17BCu;
            // 0x1f17c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F17C4u;
label_1f17c4:
    // 0x1f17c4: 0x0  nop
    ctx->pc = 0x1f17c4u;
    // NOP
    ctx->pc = 0x1f17c8u;
}
