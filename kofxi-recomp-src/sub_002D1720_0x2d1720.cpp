#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D1720
// Address: 0x2d1720 - 0x2d1850
void sub_002D1720_0x2d1720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1720_0x2d1720");
#endif

    switch (ctx->pc) {
        case 0x2d1780u: goto label_2d1780;
        case 0x2d17f8u: goto label_2d17f8;
        case 0x2d1818u: goto label_2d1818;
        default: break;
    }

    ctx->pc = 0x2d1720u;

    // 0x2d1720: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2d1720u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1724: 0x8c8b0008  lw          $t3, 0x8($a0)
    ctx->pc = 0x2d1724u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d1728: 0x2545003f  addiu       $a1, $t2, 0x3F
    ctx->pc = 0x2d1728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 63));
    // 0x2d172c: 0x29430000  slti        $v1, $t2, 0x0
    ctx->pc = 0x2d172cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2d1730: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x2d1730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1734: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x2d1734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2d1738: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x2d1738u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x2d173c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2d173cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1740: 0x24983  sra         $t1, $v0, 6
    ctx->pc = 0x2d1740u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2d1744: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x2d1744u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x2d1748: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x2d1748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x2d174c: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x2d174cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2d1750: 0x1431823  subu        $v1, $t2, $v1
    ctx->pc = 0x2d1750u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x2d1754: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x2d1754u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d1758: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x2d1758u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d175c: 0x852814  dsllv       $a1, $a1, $a0
    ctx->pc = 0x2d175cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x2d1760: 0x4a00013  bltz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D1760u;
    {
        const bool branch_taken_0x2d1760 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2D1764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1760u;
            // 0x2d1764: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1760) {
            ctx->pc = 0x2D17B0u;
            goto label_2d17b0;
        }
    }
    ctx->pc = 0x2D1768u;
    // 0x2d1768: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x2d1768u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x2d176c: 0x340d8000  ori         $t5, $zero, 0x8000
    ctx->pc = 0x2d176cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2d1770: 0xd6c3c  dsll32      $t5, $t5, 16
    ctx->pc = 0x2d1770u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 16));
    // 0x2d1774: 0x4b2021  addu        $a0, $v0, $t3
    ctx->pc = 0x2d1774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2d1778: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x2d1778u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x2d177c: 0x0  nop
    ctx->pc = 0x2d177cu;
    // NOP
label_2d1780:
    // 0x2d1780: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d1780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d1784: 0x5400016  bltz        $t2, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D1784u;
    {
        const bool branch_taken_0x2d1784 = (GPR_S32(ctx, 10) < 0);
        ctx->pc = 0x2D1788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1784u;
            // 0x2d1788: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1784) {
            ctx->pc = 0x2D17E0u;
            goto label_2d17e0;
        }
    }
    ctx->pc = 0x2D178Cu;
    // 0x2d178c: 0x4630005  bgezl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D178Cu;
    {
        const bool branch_taken_0x2d178c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2d178c) {
            ctx->pc = 0x2D1790u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D178Cu;
            // 0x2d1790: 0x52878  dsll        $a1, $a1, 1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D17A4u;
            goto label_2d17a4;
        }
    }
    ctx->pc = 0x2D1794u;
    // 0x2d1794: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x2d1794u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d1798: 0x2484fff8  addiu       $a0, $a0, -0x8
    ctx->pc = 0x2d1798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x2d179c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x2d179cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x2d17a0: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x2d17a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_2d17a4:
    // 0x2d17a4: 0xad1024  and         $v0, $a1, $t5
    ctx->pc = 0x2d17a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 13));
    // 0x2d17a8: 0x5040fff5  beql        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x2D17A8u;
    {
        const bool branch_taken_0x2d17a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d17a8) {
            ctx->pc = 0x2D17ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D17A8u;
            // 0x2d17ac: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D1780u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d1780;
        }
    }
    ctx->pc = 0x2D17B0u;
label_2d17b0:
    // 0x2d17b0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x2d17b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d17b4: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x2d17b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2d17b8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D17B8u;
    {
        const bool branch_taken_0x2d17b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D17BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D17B8u;
            // 0x2d17bc: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d17b8) {
            ctx->pc = 0x2D1800u;
            goto label_2d1800;
        }
    }
    ctx->pc = 0x2D17C0u;
    // 0x2d17c0: 0x520000d  bltz        $t1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D17C0u;
    {
        const bool branch_taken_0x2d17c0 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x2D17C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D17C0u;
            // 0x2d17c4: 0x910c0  sll         $v0, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d17c0) {
            ctx->pc = 0x2D17F8u;
            goto label_2d17f8;
        }
    }
    ctx->pc = 0x2D17C8u;
    // 0x2d17c8: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x2d17c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2d17cc: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x2d17ccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d17d0: 0x831816  dsrlv       $v1, $v1, $a0
    ctx->pc = 0x2d17d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (GPR_U32(ctx, 4) & 0x3F));
    // 0x2d17d4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D17D4u;
    {
        const bool branch_taken_0x2d17d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D17D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D17D4u;
            // 0x2d17d8: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d17d4) {
            ctx->pc = 0x2D17FCu;
            goto label_2d17fc;
        }
    }
    ctx->pc = 0x2D17DCu;
    // 0x2d17dc: 0x0  nop
    ctx->pc = 0x2d17dcu;
    // NOP
label_2d17e0:
    // 0x2d17e0: 0x517fe  dsrl32      $v0, $a1, 31
    ctx->pc = 0x2d17e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> (32 + 31));
    // 0x2d17e4: 0xacec0000  sw          $t4, 0x0($a3)
    ctx->pc = 0x2d17e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 12));
    // 0x2d17e8: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x2d17e8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x2d17ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2D17ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D17F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D17ECu;
            // 0x2d17f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D17F4u;
    // 0x2d17f4: 0x0  nop
    ctx->pc = 0x2d17f4u;
    // NOP
label_2d17f8:
    // 0x2d17f8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2d17f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d17fc:
    // 0x2d17fc: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2d17fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2d1800:
    // 0x2d1800: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2d1800u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2d1804: 0x452816  dsrlv       $a1, $a1, $v0
    ctx->pc = 0x2d1804u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (GPR_U32(ctx, 2) & 0x3F));
    // 0x2d1808: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x2d1808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2d180c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2D180Cu;
    {
        const bool branch_taken_0x2d180c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D180Cu;
            // 0x2d1810: 0x1861021  addu        $v0, $t4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d180c) {
            ctx->pc = 0x2D1838u;
            goto label_2d1838;
        }
    }
    ctx->pc = 0x2D1814u;
    // 0x2d1814: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d1814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d1818:
    // 0x2d1818: 0x5287a  dsrl        $a1, $a1, 1
    ctx->pc = 0x2d1818u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 1);
    // 0x2d181c: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x2d181cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2d1820: 0x0  nop
    ctx->pc = 0x2d1820u;
    // NOP
    // 0x2d1824: 0x0  nop
    ctx->pc = 0x2d1824u;
    // NOP
    // 0x2d1828: 0x0  nop
    ctx->pc = 0x2d1828u;
    // NOP
    // 0x2d182c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D182Cu;
    {
        const bool branch_taken_0x2d182c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D182Cu;
            // 0x2d1830: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d182c) {
            ctx->pc = 0x2D1818u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d1818;
        }
    }
    ctx->pc = 0x2D1834u;
    // 0x2d1834: 0x1861021  addu        $v0, $t4, $a2
    ctx->pc = 0x2d1834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
label_2d1838:
    // 0x2d1838: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x2d1838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2d183c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2d183cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2d1840: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x2d1840u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x2d1844: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d1844u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1848: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D184Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1848u;
            // 0x2d184c: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D1850u;
    ctx->pc = 0x2d1850u;
}
