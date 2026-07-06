#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001877A0
// Address: 0x1877a0 - 0x1878b0
void sub_001877A0_0x1877a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001877A0_0x1877a0");
#endif

    ctx->pc = 0x1877a0u;

    // 0x1877a0: 0x8c8300dc  lw          $v1, 0xDC($a0)
    ctx->pc = 0x1877a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x1877a4: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x1877a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x1877a8: 0x24c6db50  addiu       $a2, $a2, -0x24B0
    ctx->pc = 0x1877a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957904));
    // 0x1877ac: 0x848904b0  lh          $t1, 0x4B0($a0)
    ctx->pc = 0x1877acu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1200)));
    // 0x1877b0: 0x30650030  andi        $a1, $v1, 0x30
    ctx->pc = 0x1877b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48);
    // 0x1877b4: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x1877b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x1877b8: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x1877b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x1877bc: 0x34082  srl         $t0, $v1, 2
    ctx->pc = 0x1877bcu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x1877c0: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x1877c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1877c4: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x1877c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1877c8: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1877c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1877cc: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x1877ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1877d0: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1877d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1877d4: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x1877d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1877d8: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x1877d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1877dc: 0x90ea0003  lbu         $t2, 0x3($a3)
    ctx->pc = 0x1877dcu;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x1877e0: 0xe33021  addu        $a2, $a3, $v1
    ctx->pc = 0x1877e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1877e4: 0xa48004b0  sh          $zero, 0x4B0($a0)
    ctx->pc = 0x1877e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1200), (uint16_t)GPR_U32(ctx, 0));
    // 0x1877e8: 0x84c80154  lh          $t0, 0x154($a2)
    ctx->pc = 0x1877e8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 340)));
    // 0x1877ec: 0x5010004  bgez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1877ECu;
    {
        const bool branch_taken_0x1877ec = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1877F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1877ECu;
            // 0x1877f0: 0x24c3014c  addiu       $v1, $a2, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1877ec) {
            ctx->pc = 0x187800u;
            goto label_187800;
        }
    }
    ctx->pc = 0x1877F4u;
    // 0x1877f4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1877f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1877f8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1877F8u;
    {
        const bool branch_taken_0x1877f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1877FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1877F8u;
            // 0x1877fc: 0xa464000a  sh          $a0, 0xA($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1877f8) {
            ctx->pc = 0x1878A8u;
            goto label_1878a8;
        }
    }
    ctx->pc = 0x187800u;
label_187800:
    // 0x187800: 0x908404f0  lbu         $a0, 0x4F0($a0)
    ctx->pc = 0x187800u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1264)));
    // 0x187804: 0x30840080  andi        $a0, $a0, 0x80
    ctx->pc = 0x187804u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x187808: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x187808u;
    {
        const bool branch_taken_0x187808 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x187808) {
            ctx->pc = 0x187818u;
            goto label_187818;
        }
    }
    ctx->pc = 0x187810u;
    // 0x187810: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x187810u;
    {
        const bool branch_taken_0x187810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187810u;
            // 0x187814: 0xa468000a  sh          $t0, 0xA($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187810) {
            ctx->pc = 0x1878A8u;
            goto label_1878a8;
        }
    }
    ctx->pc = 0x187818u;
label_187818:
    // 0x187818: 0x3c0401d5  lui         $a0, 0x1D5
    ctx->pc = 0x187818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)469 << 16));
    // 0x18781c: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x18781cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x187820: 0x8c87d918  lw          $a3, -0x26E8($a0)
    ctx->pc = 0x187820u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294957336)));
    // 0x187824: 0x34c40100  ori         $a0, $a2, 0x100
    ctx->pc = 0x187824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)256);
    // 0x187828: 0xe42024  and         $a0, $a3, $a0
    ctx->pc = 0x187828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x18782c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18782Cu;
    {
        const bool branch_taken_0x18782c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18782c) {
            ctx->pc = 0x18783Cu;
            goto label_18783c;
        }
    }
    ctx->pc = 0x187834u;
    // 0x187834: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x187834u;
    {
        const bool branch_taken_0x187834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187834u;
            // 0x187838: 0xa468000a  sh          $t0, 0xA($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187834) {
            ctx->pc = 0x1878A8u;
            goto label_1878a8;
        }
    }
    ctx->pc = 0x18783Cu;
label_18783c:
    // 0x18783c: 0x1545001a  bne         $t2, $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x18783Cu;
    {
        const bool branch_taken_0x18783c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 5));
        if (branch_taken_0x18783c) {
            ctx->pc = 0x1878A8u;
            goto label_1878a8;
        }
    }
    ctx->pc = 0x187844u;
    // 0x187844: 0x9243c  dsll32      $a0, $t1, 16
    ctx->pc = 0x187844u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) << (32 + 16));
    // 0x187848: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x187848u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x18784c: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x18784Cu;
    {
        const bool branch_taken_0x18784c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18784c) {
            ctx->pc = 0x1878A8u;
            goto label_1878a8;
        }
    }
    ctx->pc = 0x187854u;
    // 0x187854: 0x8464000a  lh          $a0, 0xA($v1)
    ctx->pc = 0x187854u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x187858: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x187858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x18785c: 0xa464000a  sh          $a0, 0xA($v1)
    ctx->pc = 0x18785cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 4));
    // 0x187860: 0x84650008  lh          $a1, 0x8($v1)
    ctx->pc = 0x187860u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x187864: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x187864u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x187868: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x187868u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x18786c: 0xa4082a  slt         $at, $a1, $a0
    ctx->pc = 0x18786cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x187870: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x187870u;
    {
        const bool branch_taken_0x187870 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x187870) {
            ctx->pc = 0x187874u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x187870u;
            // 0x187874: 0x8464000a  lh          $a0, 0xA($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x187880u;
            goto label_187880;
        }
    }
    ctx->pc = 0x187878u;
    // 0x187878: 0xa465000a  sh          $a1, 0xA($v1)
    ctx->pc = 0x187878u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 5));
    // 0x18787c: 0x8464000a  lh          $a0, 0xA($v1)
    ctx->pc = 0x18787cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_187880:
    // 0x187880: 0x28810071  slti        $at, $a0, 0x71
    ctx->pc = 0x187880u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)113) ? 1 : 0);
    // 0x187884: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x187884u;
    {
        const bool branch_taken_0x187884 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x187884) {
            ctx->pc = 0x187888u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x187884u;
            // 0x187888: 0x8464000a  lh          $a0, 0xA($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x187898u;
            goto label_187898;
        }
    }
    ctx->pc = 0x18788Cu;
    // 0x18788c: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x18788cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x187890: 0xa464000a  sh          $a0, 0xA($v1)
    ctx->pc = 0x187890u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 4));
    // 0x187894: 0x8464000a  lh          $a0, 0xA($v1)
    ctx->pc = 0x187894u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_187898:
    // 0x187898: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x187898u;
    {
        const bool branch_taken_0x187898 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x187898) {
            ctx->pc = 0x1878A8u;
            goto label_1878a8;
        }
    }
    ctx->pc = 0x1878A0u;
    // 0x1878a0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1878a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1878a4: 0xa464000a  sh          $a0, 0xA($v1)
    ctx->pc = 0x1878a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 4));
label_1878a8:
    // 0x1878a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1878A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1878B0u;
    ctx->pc = 0x1878b0u;
}
