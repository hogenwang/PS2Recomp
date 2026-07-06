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

// Function: sub_002F1718
// Address: 0x2f1718 - 0x2f1890
void sub_002F1718_0x2f1718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1718_0x2f1718");
#endif

    switch (ctx->pc) {
        case 0x2f17b0u: goto label_2f17b0;
        case 0x2f17c0u: goto label_2f17c0;
        case 0x2f1878u: goto label_2f1878;
        default: break;
    }

    ctx->pc = 0x2f1718u;

    // 0x2f1718: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f1718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f171c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2f171cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1720: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f1720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f1724: 0x94ad0006  lhu         $t5, 0x6($a1)
    ctx->pc = 0x2f1724u;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x2f1728: 0x90a90008  lbu         $t1, 0x8($a1)
    ctx->pc = 0x2f1728u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2f172c: 0xd6202  srl         $t4, $t5, 8
    ctx->pc = 0x2f172cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 13), 8));
    // 0x2f1730: 0x94af0002  lhu         $t7, 0x2($a1)
    ctx->pc = 0x2f1730u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2f1734: 0xd6a00  sll         $t5, $t5, 8
    ctx->pc = 0x2f1734u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 8));
    // 0x2f1738: 0x94ae0004  lhu         $t6, 0x4($a1)
    ctx->pc = 0x2f1738u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f173c: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x2f173cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f1740: 0x1ac6825  or          $t5, $t5, $t4
    ctx->pc = 0x2f1740u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 12));
    // 0x2f1744: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x2f1744u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2f1748: 0x31acffff  andi        $t4, $t5, 0xFFFF
    ctx->pc = 0x2f1748u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
    // 0x2f174c: 0xa0890008  sb          $t1, 0x8($a0)
    ctx->pc = 0x2f174cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 9));
    // 0x2f1750: 0xf5a02  srl         $t3, $t7, 8
    ctx->pc = 0x2f1750u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 15), 8));
    // 0x2f1754: 0xe5202  srl         $t2, $t6, 8
    ctx->pc = 0x2f1754u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 14), 8));
    // 0x2f1758: 0xf7a00  sll         $t7, $t7, 8
    ctx->pc = 0x2f1758u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 8));
    // 0x2f175c: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x2f175cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x2f1760: 0xe7200  sll         $t6, $t6, 8
    ctx->pc = 0x2f1760u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 8));
    // 0x2f1764: 0xafac0000  sw          $t4, 0x0($sp)
    ctx->pc = 0x2f1764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    // 0x2f1768: 0x1eb7825  or          $t7, $t7, $t3
    ctx->pc = 0x2f1768u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 11));
    // 0x2f176c: 0x1ca7025  or          $t6, $t6, $t2
    ctx->pc = 0x2f176cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 10));
    // 0x2f1770: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2f1770u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1774: 0xa0870000  sb          $a3, 0x0($a0)
    ctx->pc = 0x2f1774u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x2f1778: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x2f1778u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f177c: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x2f177cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f1780: 0x31eaffff  andi        $t2, $t7, 0xFFFF
    ctx->pc = 0x2f1780u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65535);
    // 0x2f1784: 0xa4cf0002  sh          $t7, 0x2($a2)
    ctx->pc = 0x2f1784u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 15));
    // 0x2f1788: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2f1788u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2f178c: 0xa4ce0004  sh          $t6, 0x4($a2)
    ctx->pc = 0x2f178cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 14));
    // 0x2f1790: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2f1790u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2f1794: 0xa4cd0006  sh          $t5, 0x6($a2)
    ctx->pc = 0x2f1794u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 13));
    // 0x2f1798: 0x31cbffff  andi        $t3, $t6, 0xFFFF
    ctx->pc = 0x2f1798u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)65535);
    // 0x2f179c: 0x248419a8  addiu       $a0, $a0, 0x19A8
    ctx->pc = 0x2f179cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6568));
    // 0x2f17a0: 0x24e719c0  addiu       $a3, $a3, 0x19C0
    ctx->pc = 0x2f17a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6592));
    // 0x2f17a4: 0x24051053  addiu       $a1, $zero, 0x1053
    ctx->pc = 0x2f17a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4179));
    // 0x2f17a8: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2F17A8u;
    SET_GPR_U32(ctx, 31, 0x2F17B0u);
    ctx->pc = 0x2F17ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F17A8u;
    // 0x2f17ac: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2F17A8u, 0x2F17B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F17B0u;
label_2f17b0:
    // 0x2f17b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f17b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f17b4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2f17b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f17b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F17B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F17BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F17B8u;
        // 0x2f17bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F17B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F17C0u;
label_2f17c0:
    // 0x2f17c0: 0x30cfffff  andi        $t7, $a2, 0xFFFF
    ctx->pc = 0x2f17c0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x2f17c4: 0xa0800008  sb          $zero, 0x8($a0)
    ctx->pc = 0x2f17c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f17c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f17c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f17cc: 0xf5a00  sll         $t3, $t7, 8
    ctx->pc = 0x2f17ccu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 15), 8));
    // 0x2f17d0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f17d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f17d4: 0x1e0502d  daddu       $t2, $t7, $zero
    ctx->pc = 0x2f17d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f17d8: 0x310effff  andi        $t6, $t0, 0xFFFF
    ctx->pc = 0x2f17d8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x2f17dc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2f17dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2f17e0: 0xf7a02  srl         $t7, $t7, 8
    ctx->pc = 0x2f17e0u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 8));
    // 0x2f17e4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2f17e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f17e8: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x2f17e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x2f17ec: 0xe7202  srl         $t6, $t6, 8
    ctx->pc = 0x2f17ecu;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), 8));
    // 0x2f17f0: 0x86a00  sll         $t5, $t0, 8
    ctx->pc = 0x2f17f0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x2f17f4: 0x16f5825  or          $t3, $t3, $t7
    ctx->pc = 0x2f17f4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 15));
    // 0x2f17f8: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2f17f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f17fc: 0xa48b0002  sh          $t3, 0x2($a0)
    ctx->pc = 0x2f17fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 11));
    // 0x2f1800: 0x74202  srl         $t0, $a3, 8
    ctx->pc = 0x2f1800u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x2f1804: 0x1ae6825  or          $t5, $t5, $t6
    ctx->pc = 0x2f1804u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x2f1808: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x2f1808u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f180c: 0xa48d0004  sh          $t5, 0x4($a0)
    ctx->pc = 0x2f180cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 13));
    // 0x2f1810: 0x76200  sll         $t4, $a3, 8
    ctx->pc = 0x2f1810u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x2f1814: 0xa08f0001  sb          $t7, 0x1($a0)
    ctx->pc = 0x2f1814u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 15));
    // 0x2f1818: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x2f1818u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f181c: 0x1886025  or          $t4, $t4, $t0
    ctx->pc = 0x2f181cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 8));
    // 0x2f1820: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x2f1820u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x2f1824: 0xa48c0006  sh          $t4, 0x6($a0)
    ctx->pc = 0x2f1824u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 12));
    // 0x2f1828: 0xa08e000b  sb          $t6, 0xB($a0)
    ctx->pc = 0x2f1828u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 14));
    // 0x2f182c: 0x2405106b  addiu       $a1, $zero, 0x106B
    ctx->pc = 0x2f182cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4203));
    // 0x2f1830: 0xa0890000  sb          $t1, 0x0($a0)
    ctx->pc = 0x2f1830u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x2f1834: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x2f1834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2f1838: 0xa08e0009  sb          $t6, 0x9($a0)
    ctx->pc = 0x2f1838u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 14));
    // 0x2f183c: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x2f183cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1840: 0xa08e000a  sb          $t6, 0xA($a0)
    ctx->pc = 0x2f1840u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 14));
    // 0x2f1844: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1844u;
    {
        const bool branch_taken_0x2f1844 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1844u;
        // 0x2f1848: 0x907821  addu        $t7, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1844) {
            ctx->pc = 0x2F1854u;
            goto label_2f1854;
        }
    }
    ctx->pc = 0x2F184Cu;
    // 0x2f184c: 0xa1e0000c  sb          $zero, 0xC($t7)
    ctx->pc = 0x2f184cu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1850: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f1850u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2f1854:
    // 0x2f1854: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x2f1854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x2f1858: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2f1858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2f185c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2f185cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2f1860: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x2f1860u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1864: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2f1864u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2f1868: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x2f1868u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f186c: 0x24e719c0  addiu       $a3, $a3, 0x19C0
    ctx->pc = 0x2f186cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6592));
    // 0x2f1870: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2F1870u;
    SET_GPR_U32(ctx, 31, 0x2F1878u);
    ctx->pc = 0x2F1874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1870u;
    // 0x2f1874: 0x24841a08  addiu       $a0, $a0, 0x1A08 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2F1870u, 0x2F1878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1878u;
label_2f1878:
    // 0x2f1878: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x2f1878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2f187c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2f187cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f1880: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f1880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1884: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1884u;
        // 0x2f1888: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F188Cu;
    // 0x2f188c: 0x0  nop
    ctx->pc = 0x2f188cu;
    // NOP
}
