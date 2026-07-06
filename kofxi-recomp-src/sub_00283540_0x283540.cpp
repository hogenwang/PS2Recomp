#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00283540
// Address: 0x283540 - 0x283670
void sub_00283540_0x283540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283540_0x283540");
#endif

    ctx->pc = 0x283540u;

    // 0x283540: 0x8ca70010  lw          $a3, 0x10($a1)
    ctx->pc = 0x283540u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x283544: 0x90a20014  lbu         $v0, 0x14($a1)
    ctx->pc = 0x283544u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x283548: 0x2ce3001f  sltiu       $v1, $a3, 0x1F
    ctx->pc = 0x283548u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x28354c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28354Cu;
    {
        const bool branch_taken_0x28354c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x283550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28354Cu;
            // 0x283550: 0x304200e0  andi        $v0, $v0, 0xE0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)224);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28354c) {
            ctx->pc = 0x283564u;
            goto label_283564;
        }
    }
    ctx->pc = 0x283554u;
    // 0x283554: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x283554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x283558: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x283558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x28355c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x28355Cu;
    {
        const bool branch_taken_0x28355c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28355Cu;
            // 0x283560: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28355c) {
            ctx->pc = 0x2835B0u;
            goto label_2835b0;
        }
    }
    ctx->pc = 0x283564u;
label_283564:
    // 0x283564: 0x3442001f  ori         $v0, $v0, 0x1F
    ctx->pc = 0x283564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
    // 0x283568: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x283568u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x28356c: 0x2ce24000  sltiu       $v0, $a3, 0x4000
    ctx->pc = 0x28356cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)16384) ? 1 : 0);
    // 0x283570: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x283570u;
    {
        const bool branch_taken_0x283570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283570u;
            // 0x283574: 0x24860001  addiu       $a2, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283570) {
            ctx->pc = 0x283588u;
            goto label_283588;
        }
    }
    ctx->pc = 0x283578u;
    // 0x283578: 0x71382  srl         $v0, $a3, 14
    ctx->pc = 0x283578u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 14));
    // 0x28357c: 0x24860002  addiu       $a2, $a0, 0x2
    ctx->pc = 0x28357cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x283580: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x283580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x283584: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x283584u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
label_283588:
    // 0x283588: 0x2ce20080  sltiu       $v0, $a3, 0x80
    ctx->pc = 0x283588u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x28358c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28358Cu;
    {
        const bool branch_taken_0x28358c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28358Cu;
            // 0x283590: 0x30e2007f  andi        $v0, $a3, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28358c) {
            ctx->pc = 0x2835A8u;
            goto label_2835a8;
        }
    }
    ctx->pc = 0x283594u;
    // 0x283594: 0x711c2  srl         $v0, $a3, 7
    ctx->pc = 0x283594u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 7));
    // 0x283598: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x283598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x28359c: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x28359cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2835a0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2835a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2835a4: 0x30e2007f  andi        $v0, $a3, 0x7F
    ctx->pc = 0x2835a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)127);
label_2835a8:
    // 0x2835a8: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x2835a8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2835ac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2835acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2835b0:
    // 0x2835b0: 0x90a20014  lbu         $v0, 0x14($a1)
    ctx->pc = 0x2835b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2835b4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2835b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2835b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2835B8u;
    {
        const bool branch_taken_0x2835b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2835BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2835B8u;
            // 0x2835bc: 0xdca50000  ld          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2835b8) {
            ctx->pc = 0x2835CCu;
            goto label_2835cc;
        }
    }
    ctx->pc = 0x2835C0u;
    // 0x2835c0: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x2835c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2835c4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2835C4u;
    {
        const bool branch_taken_0x2835c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2835C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2835C4u;
            // 0x2835c8: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2835c4) {
            ctx->pc = 0x283660u;
            goto label_283660;
        }
    }
    ctx->pc = 0x2835CCu;
label_2835cc:
    // 0x2835cc: 0x2ca20080  sltiu       $v0, $a1, 0x80
    ctx->pc = 0x2835ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x2835d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2835D0u;
    {
        const bool branch_taken_0x2835d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2835D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2835D0u;
            // 0x2835d4: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2835d0) {
            ctx->pc = 0x2835E0u;
            goto label_2835e0;
        }
    }
    ctx->pc = 0x2835D8u;
    // 0x2835d8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2835D8u;
    {
        const bool branch_taken_0x2835d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2835DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2835D8u;
            // 0x2835dc: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2835d8) {
            ctx->pc = 0x283660u;
            goto label_283660;
        }
    }
    ctx->pc = 0x2835E0u;
label_2835e0:
    // 0x2835e0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2835e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2835e4: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x2835e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x2835e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2835e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2835ec: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2835ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2835f0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2835f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2835f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2835F4u;
    {
        const bool branch_taken_0x2835f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2835F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2835F4u;
            // 0x2835f8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2835f4) {
            ctx->pc = 0x283610u;
            goto label_283610;
        }
    }
    ctx->pc = 0x2835FCu;
    // 0x2835fc: 0x5163a  dsrl        $v0, $a1, 24
    ctx->pc = 0x2835fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> 24);
    // 0x283600: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x283600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x283604: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x283604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x283608: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x283608u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x28360c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x28360cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_283610:
    // 0x283610: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x283610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x283614: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x283614u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x283618: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x283618u;
    {
        const bool branch_taken_0x283618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28361Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283618u;
            // 0x28361c: 0x5143a  dsrl        $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> 16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x283618) {
            ctx->pc = 0x283630u;
            goto label_283630;
        }
    }
    ctx->pc = 0x283620u;
    // 0x283620: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x283620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x283624: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x283624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x283628: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x283628u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x28362c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x28362cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_283630:
    // 0x283630: 0x2ca20100  sltiu       $v0, $a1, 0x100
    ctx->pc = 0x283630u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x283634: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x283634u;
    {
        const bool branch_taken_0x283634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283634) {
            ctx->pc = 0x283638u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x283634u;
            // 0x283638: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x283654u;
            goto label_283654;
        }
    }
    ctx->pc = 0x28363Cu;
    // 0x28363c: 0x5123a  dsrl        $v0, $a1, 8
    ctx->pc = 0x28363cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> 8);
    // 0x283640: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x283640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x283644: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x283644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x283648: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x283648u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x28364c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x28364cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x283650: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x283650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_283654:
    // 0x283654: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x283654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x283658: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x283658u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x28365c: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x28365cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
label_283660:
    // 0x283660: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x283660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x283664: 0x3e00008  jr          $ra
    ctx->pc = 0x283664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283664u;
            // 0x283668: 0xc41023  subu        $v0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28366Cu;
    // 0x28366c: 0x0  nop
    ctx->pc = 0x28366cu;
    // NOP
    ctx->pc = 0x283670u;
}
