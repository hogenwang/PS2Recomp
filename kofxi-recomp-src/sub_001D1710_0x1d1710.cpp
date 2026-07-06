#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D1710
// Address: 0x1d1710 - 0x1d1830
void sub_001D1710_0x1d1710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1710_0x1d1710");
#endif

    ctx->pc = 0x1d1710u;

    // 0x1d1710: 0x248b0180  addiu       $t3, $a0, 0x180
    ctx->pc = 0x1d1710u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x1d1714: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d1714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1718: 0x8d620430  lw          $v0, 0x430($t3)
    ctx->pc = 0x1d1718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1072)));
    // 0x1d171c: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x1d171cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1720: 0x8d640308  lw          $a0, 0x308($t3)
    ctx->pc = 0x1d1720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 776)));
    // 0x1d1724: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d1724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d1728: 0xad630420  sw          $v1, 0x420($t3)
    ctx->pc = 0x1d1728u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1056), GPR_U32(ctx, 3));
    // 0x1d172c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D172Cu;
    {
        const bool branch_taken_0x1d172c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D172Cu;
            // 0x1d1730: 0xad620430  sw          $v0, 0x430($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 1072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d172c) {
            ctx->pc = 0x1D1740u;
            goto label_1d1740;
        }
    }
    ctx->pc = 0x1D1734u;
    // 0x1d1734: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1d1734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d1738: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1738u;
    {
        const bool branch_taken_0x1d1738 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d1738) {
            ctx->pc = 0x1D173Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1738u;
            // 0x1d173c: 0x8d620494  lw          $v0, 0x494($t3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D1750u;
            goto label_1d1750;
        }
    }
    ctx->pc = 0x1D1740u;
label_1d1740:
    // 0x1d1740: 0x8d62030c  lw          $v0, 0x30C($t3)
    ctx->pc = 0x1d1740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 780)));
    // 0x1d1744: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1744u;
    {
        const bool branch_taken_0x1d1744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1744u;
            // 0x1d1748: 0x2403fffc  addiu       $v1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1744) {
            ctx->pc = 0x1D175Cu;
            goto label_1d175c;
        }
    }
    ctx->pc = 0x1D174Cu;
    // 0x1d174c: 0x8d620494  lw          $v0, 0x494($t3)
    ctx->pc = 0x1d174cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 1172)));
label_1d1750:
    // 0x1d1750: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d1750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d1754: 0xad620494  sw          $v0, 0x494($t3)
    ctx->pc = 0x1d1754u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1172), GPR_U32(ctx, 2));
    // 0x1d1758: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x1d1758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1d175c:
    // 0x1d175c: 0x1831824  and         $v1, $t4, $v1
    ctx->pc = 0x1d175cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & GPR_U64(ctx, 3));
    // 0x1d1760: 0x1833023  subu        $a2, $t4, $v1
    ctx->pc = 0x1d1760u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x1d1764: 0x806a0000  lb          $t2, 0x0($v1)
    ctx->pc = 0x1d1764u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d1768: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d1768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d176c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x1d176cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1d1770: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x1d1770u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d1774: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d1774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d1778: 0x90670000  lbu         $a3, 0x0($v1)
    ctx->pc = 0x1d1778u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d177c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d177cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d1780: 0x90680000  lbu         $t0, 0x0($v1)
    ctx->pc = 0x1d1780u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d1784: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d1784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d1788: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x1d1788u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d178c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d178cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d1790: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1d1790u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d1794: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d1794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d1798: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x1d1798u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1d179c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1d179cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1d17a0: 0x1455025  or          $t2, $t2, $a1
    ctx->pc = 0x1d17a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 5));
    // 0x1d17a4: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x1d17a4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d17a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d17a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d17ac: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1d17acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1d17b0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1d17b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d17b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d17b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d17b8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1d17b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1d17bc: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1d17bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1d17c0: 0x6c1823  subu        $v1, $v1, $t4
    ctx->pc = 0x1d17c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1d17c4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1d17c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1d17c8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1d17c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d17cc: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x1d17ccu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1d17d0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1d17d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1d17d4: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1d17d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1d17d8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1d17d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1d17dc: 0x2462ffc7  addiu       $v0, $v1, -0x39
    ctx->pc = 0x1d17dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967239));
    // 0x1d17e0: 0x1475025  or          $t2, $t2, $a3
    ctx->pc = 0x1d17e0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 7));
    // 0x1d17e4: 0x28450000  slti        $a1, $v0, 0x0
    ctx->pc = 0x1d17e4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1d17e8: 0x2463ffce  addiu       $v1, $v1, -0x32
    ctx->pc = 0x1d17e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967246));
    // 0x1d17ec: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x1d17ecu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1d17f0: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x1d17f0u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1d17f4: 0x64823  negu        $t1, $a2
    ctx->pc = 0x1d17f4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x1d17f8: 0x1485025  or          $t2, $t2, $t0
    ctx->pc = 0x1d17f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 8));
    // 0x1d17fc: 0x1242006  srlv        $a0, $a0, $t1
    ctx->pc = 0x1d17fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 9) & 0x1F));
    // 0x1d1800: 0xca5004  sllv        $t2, $t2, $a2
    ctx->pc = 0x1d1800u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x1d1804: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1d1804u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1d1808: 0x1441825  or          $v1, $t2, $a0
    ctx->pc = 0x1d1808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 4));
    // 0x1d180c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D180Cu;
    {
        const bool branch_taken_0x1d180c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D180Cu;
            // 0x1d1810: 0x1821021  addu        $v0, $t4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d180c) {
            ctx->pc = 0x1D1820u;
            goto label_1d1820;
        }
    }
    ctx->pc = 0x1D1814u;
    // 0x1d1814: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1814u;
    {
        const bool branch_taken_0x1d1814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1814u;
            // 0x1d1818: 0xad63002c  sw          $v1, 0x2C($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1814) {
            ctx->pc = 0x1D1824u;
            goto label_1d1824;
        }
    }
    ctx->pc = 0x1D181Cu;
    // 0x1d181c: 0x0  nop
    ctx->pc = 0x1d181cu;
    // NOP
label_1d1820:
    // 0x1d1820: 0xad6a002c  sw          $t2, 0x2C($t3)
    ctx->pc = 0x1d1820u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 44), GPR_U32(ctx, 10));
label_1d1824:
    // 0x1d1824: 0xad60030c  sw          $zero, 0x30C($t3)
    ctx->pc = 0x1d1824u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 780), GPR_U32(ctx, 0));
    // 0x1d1828: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D182Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1828u;
            // 0x1d182c: 0xad600308  sw          $zero, 0x308($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 776), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D1830u;
    ctx->pc = 0x1d1830u;
}
