#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00160790
// Address: 0x160790 - 0x160f80
void sub_00160790_0x160790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160790_0x160790");
#endif

    switch (ctx->pc) {
        case 0x1609d0u: goto label_1609d0;
        case 0x1609e0u: goto label_1609e0;
        case 0x160a40u: goto label_160a40;
        case 0x160ac0u: goto label_160ac0;
        case 0x160b30u: goto label_160b30;
        case 0x160bb0u: goto label_160bb0;
        case 0x160c20u: goto label_160c20;
        case 0x160c80u: goto label_160c80;
        case 0x160cb8u: goto label_160cb8;
        case 0x160cd0u: goto label_160cd0;
        case 0x160d50u: goto label_160d50;
        case 0x160dd0u: goto label_160dd0;
        case 0x160e50u: goto label_160e50;
        case 0x160ee0u: goto label_160ee0;
        default: break;
    }

    ctx->pc = 0x160790u;

    // 0x160790: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x160790u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x160794: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x160794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x160798: 0x5062005c  beql        $v1, $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x160798u;
    {
        const bool branch_taken_0x160798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x160798) {
            ctx->pc = 0x16079Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160798u;
            // 0x16079c: 0x90850002  lbu         $a1, 0x2($a0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16090Cu;
            goto label_16090c;
        }
    }
    ctx->pc = 0x1607A0u;
    // 0x1607a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1607a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1607a4: 0x50620041  beql        $v1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x1607A4u;
    {
        const bool branch_taken_0x1607a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1607a4) {
            ctx->pc = 0x1607A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1607A4u;
            // 0x1607a8: 0x90830004  lbu         $v1, 0x4($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1608ACu;
            goto label_1608ac;
        }
    }
    ctx->pc = 0x1607ACu;
    // 0x1607ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1607acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1607b0: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1607B0u;
    {
        const bool branch_taken_0x1607b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1607b0) {
            ctx->pc = 0x1607B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1607B0u;
            // 0x1607b4: 0x90850002  lbu         $a1, 0x2($a0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1607D0u;
            goto label_1607d0;
        }
    }
    ctx->pc = 0x1607B8u;
    // 0x1607b8: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1607B8u;
    {
        const bool branch_taken_0x1607b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1607b8) {
            ctx->pc = 0x1607BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1607B8u;
            // 0x1607bc: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1607C8u;
            goto label_1607c8;
        }
    }
    ctx->pc = 0x1607C0u;
    // 0x1607c0: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x1607C0u;
    {
        const bool branch_taken_0x1607c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1607C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1607C0u;
            // 0x1607c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1607c0) {
            ctx->pc = 0x1609BCu;
            goto label_1609bc;
        }
    }
    ctx->pc = 0x1607C8u;
label_1607c8:
    // 0x1607c8: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x1607C8u;
    {
        const bool branch_taken_0x1607c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1607CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1607C8u;
            // 0x1607cc: 0xa0820004  sb          $v0, 0x4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1607c8) {
            ctx->pc = 0x1609B8u;
            goto label_1609b8;
        }
    }
    ctx->pc = 0x1607D0u;
label_1607d0:
    // 0x1607d0: 0x8483000e  lh          $v1, 0xE($a0)
    ctx->pc = 0x1607d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x1607d4: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x1607d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1607d8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1607D8u;
    {
        const bool branch_taken_0x1607d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1607d8) {
            ctx->pc = 0x1607DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1607D8u;
            // 0x1607dc: 0x90820003  lbu         $v0, 0x3($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1607ECu;
            goto label_1607ec;
        }
    }
    ctx->pc = 0x1607E0u;
    // 0x1607e0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1607e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1607e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1607E4u;
    {
        const bool branch_taken_0x1607e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1607E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1607E4u;
            // 0x1607e8: 0xa0820004  sb          $v0, 0x4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1607e4) {
            ctx->pc = 0x160800u;
            goto label_160800;
        }
    }
    ctx->pc = 0x1607ECu;
label_1607ec:
    // 0x1607ec: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1607ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1607f0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1607f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1607f4: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1607F4u;
    {
        const bool branch_taken_0x1607f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1607f4) {
            ctx->pc = 0x1607F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1607F4u;
            // 0x1607f8: 0x8482000e  lh          $v0, 0xE($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160804u;
            goto label_160804;
        }
    }
    ctx->pc = 0x1607FCu;
    // 0x1607fc: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x1607fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
label_160800:
    // 0x160800: 0x8482000e  lh          $v0, 0xE($a0)
    ctx->pc = 0x160800u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
label_160804:
    // 0x160804: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x160804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x160808: 0xa482000e  sh          $v0, 0xE($a0)
    ctx->pc = 0x160808u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x16080c: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x16080cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x160810: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x160810u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x160814: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x160814u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x160818: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x160818u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x16081c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16081cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x160820: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x160820u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x160824: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x160824u;
    {
        const bool branch_taken_0x160824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x160824) {
            ctx->pc = 0x160828u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160824u;
            // 0x160828: 0x8482000e  lh          $v0, 0xE($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160834u;
            goto label_160834;
        }
    }
    ctx->pc = 0x16082Cu;
    // 0x16082c: 0xa480000e  sh          $zero, 0xE($a0)
    ctx->pc = 0x16082cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x160830: 0x8482000e  lh          $v0, 0xE($a0)
    ctx->pc = 0x160830u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
label_160834:
    // 0x160834: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x160834u;
    {
        const bool branch_taken_0x160834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x160834) {
            ctx->pc = 0x160870u;
            goto label_160870;
        }
    }
    ctx->pc = 0x16083Cu;
    // 0x16083c: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x16083cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x160840: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x160840u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x160844: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x160844u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x160848: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x160848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x16084c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x16084cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x160850: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x160850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x160854: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x160854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x160858: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x160858u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x16085c: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x16085cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x160860: 0x8482000a  lh          $v0, 0xA($a0)
    ctx->pc = 0x160860u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x160864: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x160864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x160868: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x160868u;
    {
        const bool branch_taken_0x160868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16086Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160868u;
            // 0x16086c: 0xa4820006  sh          $v0, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160868) {
            ctx->pc = 0x1609B8u;
            goto label_1609b8;
        }
    }
    ctx->pc = 0x160870u;
label_160870:
    // 0x160870: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x160870u;
    {
        const bool branch_taken_0x160870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x160870) {
            ctx->pc = 0x1609B8u;
            goto label_1609b8;
        }
    }
    ctx->pc = 0x160878u;
    // 0x160878: 0x84830008  lh          $v1, 0x8($a0)
    ctx->pc = 0x160878u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x16087c: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x16087cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x160880: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x160880u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x160884: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x160884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x160888: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x160888u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x16088c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x16088cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x160890: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x160890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x160894: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x160894u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x160898: 0x84830008  lh          $v1, 0x8($a0)
    ctx->pc = 0x160898u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x16089c: 0x8482000c  lh          $v0, 0xC($a0)
    ctx->pc = 0x16089cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1608a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1608a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1608a4: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1608A4u;
    {
        const bool branch_taken_0x1608a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1608A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1608A4u;
            // 0x1608a8: 0xa4820008  sh          $v0, 0x8($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1608a4) {
            ctx->pc = 0x1609B8u;
            goto label_1609b8;
        }
    }
    ctx->pc = 0x1608ACu;
label_1608ac:
    // 0x1608ac: 0x84850006  lh          $a1, 0x6($a0)
    ctx->pc = 0x1608acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1608b0: 0x8482000a  lh          $v0, 0xA($a0)
    ctx->pc = 0x1608b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x1608b4: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x1608b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1608b8: 0x51a03  sra         $v1, $a1, 8
    ctx->pc = 0x1608b8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 8));
    // 0x1608bc: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1608bcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1608c0: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1608c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1608c4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1608c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1608c8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1608c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1608cc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1608ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1608d0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1608d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1608d4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1608d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1608d8: 0x28610100  slti        $at, $v1, 0x100
    ctx->pc = 0x1608d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1608dc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1608DCu;
    {
        const bool branch_taken_0x1608dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1608E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1608DCu;
            // 0x1608e0: 0xa4820006  sh          $v0, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1608dc) {
            ctx->pc = 0x1608E8u;
            goto label_1608e8;
        }
    }
    ctx->pc = 0x1608E4u;
    // 0x1608e4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1608e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1608e8:
    // 0x1608e8: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x1608e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1608ec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1608ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1608f0: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1608F0u;
    {
        const bool branch_taken_0x1608f0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1608f0) {
            ctx->pc = 0x1608F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1608F0u;
            // 0x1608f4: 0x3143c  dsll32      $v0, $v1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160900u;
            goto label_160900;
        }
    }
    ctx->pc = 0x1608F8u;
    // 0x1608f8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1608f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1608fc: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x1608fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
label_160900:
    // 0x160900: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x160900u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x160904: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x160904u;
    {
        const bool branch_taken_0x160904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160904u;
            // 0x160908: 0xa0820004  sb          $v0, 0x4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160904) {
            ctx->pc = 0x1609B8u;
            goto label_1609b8;
        }
    }
    ctx->pc = 0x16090Cu;
label_16090c:
    // 0x16090c: 0x90830004  lbu         $v1, 0x4($a0)
    ctx->pc = 0x16090cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x160910: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x160910u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x160914: 0x5443c  dsll32      $t0, $a1, 16
    ctx->pc = 0x160914u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) << (32 + 16));
    // 0x160918: 0x84850006  lh          $a1, 0x6($a0)
    ctx->pc = 0x160918u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x16091c: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x16091cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x160920: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x160920u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x160924: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x160924u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x160928: 0x8482000a  lh          $v0, 0xA($a0)
    ctx->pc = 0x160928u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x16092c: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x16092cu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x160930: 0x51a03  sra         $v1, $a1, 8
    ctx->pc = 0x160930u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 8));
    // 0x160934: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x160934u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x160938: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x160938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x16093c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x16093cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x160940: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x160940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x160944: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x160944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x160948: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x160948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x16094c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16094cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x160950: 0x68082a  slt         $at, $v1, $t0
    ctx->pc = 0x160950u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x160954: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x160954u;
    {
        const bool branch_taken_0x160954 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x160958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160954u;
            // 0x160958: 0xa4820006  sh          $v0, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160954) {
            ctx->pc = 0x16097Cu;
            goto label_16097c;
        }
    }
    ctx->pc = 0x16095Cu;
    // 0x16095c: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x16095cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x160960: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x160960u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160964: 0x21023  negu        $v0, $v0
    ctx->pc = 0x160964u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x160968: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x160968u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x16096c: 0x8482000a  lh          $v0, 0xA($a0)
    ctx->pc = 0x16096cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x160970: 0x21023  negu        $v0, $v0
    ctx->pc = 0x160970u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x160974: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x160974u;
    {
        const bool branch_taken_0x160974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160974u;
            // 0x160978: 0xa482000a  sh          $v0, 0xA($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160974) {
            ctx->pc = 0x1609ACu;
            goto label_1609ac;
        }
    }
    ctx->pc = 0x16097Cu;
label_16097c:
    // 0x16097c: 0x7143c  dsll32      $v0, $a3, 16
    ctx->pc = 0x16097cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
    // 0x160980: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x160980u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x160984: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x160984u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x160988: 0x50200009  beql        $at, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x160988u;
    {
        const bool branch_taken_0x160988 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x160988) {
            ctx->pc = 0x16098Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160988u;
            // 0x16098c: 0x3143c  dsll32      $v0, $v1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1609B0u;
            goto label_1609b0;
        }
    }
    ctx->pc = 0x160990u;
    // 0x160990: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x160990u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160994: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x160994u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x160998: 0x21023  negu        $v0, $v0
    ctx->pc = 0x160998u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x16099c: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x16099cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1609a0: 0x8482000a  lh          $v0, 0xA($a0)
    ctx->pc = 0x1609a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x1609a4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1609a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1609a8: 0xa482000a  sh          $v0, 0xA($a0)
    ctx->pc = 0x1609a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 2));
label_1609ac:
    // 0x1609ac: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x1609acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
label_1609b0:
    // 0x1609b0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1609b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1609b4: 0xa0820004  sb          $v0, 0x4($a0)
    ctx->pc = 0x1609b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 2));
label_1609b8:
    // 0x1609b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1609b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1609bc:
    // 0x1609bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1609BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1609C4u;
    // 0x1609c4: 0x0  nop
    ctx->pc = 0x1609c4u;
    // NOP
    // 0x1609c8: 0x0  nop
    ctx->pc = 0x1609c8u;
    // NOP
    // 0x1609cc: 0x0  nop
    ctx->pc = 0x1609ccu;
    // NOP
label_1609d0:
    // 0x1609d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1609D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1609D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1609D0u;
            // 0x1609d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1609D8u;
    // 0x1609d8: 0x0  nop
    ctx->pc = 0x1609d8u;
    // NOP
    // 0x1609dc: 0x0  nop
    ctx->pc = 0x1609dcu;
    // NOP
label_1609e0:
    // 0x1609e0: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x1609e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1609e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1609e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1609e8: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1609E8u;
    {
        const bool branch_taken_0x1609e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1609e8) {
            ctx->pc = 0x1609ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1609E8u;
            // 0x1609ec: 0xaca0002c  sw          $zero, 0x2C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160A1Cu;
            goto label_160a1c;
        }
    }
    ctx->pc = 0x1609F0u;
    // 0x1609f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1609f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1609f4: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1609F4u;
    {
        const bool branch_taken_0x1609f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1609f4) {
            ctx->pc = 0x1609F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1609F4u;
            // 0x1609f8: 0xaca00028  sw          $zero, 0x28($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160A04u;
            goto label_160a04;
        }
    }
    ctx->pc = 0x1609FCu;
    // 0x1609fc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1609FCu;
    {
        const bool branch_taken_0x1609fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1609FCu;
            // 0x160a00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1609fc) {
            ctx->pc = 0x160A38u;
            goto label_160a38;
        }
    }
    ctx->pc = 0x160A04u;
label_160a04:
    // 0x160a04: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x160a04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x160a08: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x160a08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x160a0c: 0xaca00040  sw          $zero, 0x40($a1)
    ctx->pc = 0x160a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 0));
    // 0x160a10: 0xaca00034  sw          $zero, 0x34($a1)
    ctx->pc = 0x160a10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
    // 0x160a14: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x160A14u;
    {
        const bool branch_taken_0x160a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160A14u;
            // 0x160a18: 0xa0a20030  sb          $v0, 0x30($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 48), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a14) {
            ctx->pc = 0x160A34u;
            goto label_160a34;
        }
    }
    ctx->pc = 0x160A1Cu;
label_160a1c:
    // 0x160a1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160a20: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x160a20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x160a24: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x160a24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x160a28: 0xaca00044  sw          $zero, 0x44($a1)
    ctx->pc = 0x160a28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 0));
    // 0x160a2c: 0xaca00038  sw          $zero, 0x38($a1)
    ctx->pc = 0x160a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 0));
    // 0x160a30: 0xa0a20031  sb          $v0, 0x31($a1)
    ctx->pc = 0x160a30u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 49), (uint8_t)GPR_U32(ctx, 2));
label_160a34:
    // 0x160a34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x160a34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160a38:
    // 0x160a38: 0x3e00008  jr          $ra
    ctx->pc = 0x160A38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x160A40u;
label_160a40:
    // 0x160a40: 0x84870000  lh          $a3, 0x0($a0)
    ctx->pc = 0x160a40u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x160a44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x160a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160a48: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x160a48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x160a4c: 0x5082000e  beql        $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x160A4Cu;
    {
        const bool branch_taken_0x160a4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x160a4c) {
            ctx->pc = 0x160A50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160A4Cu;
            // 0x160a50: 0x71c3c  dsll32      $v1, $a3, 16 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160A88u;
            goto label_160a88;
        }
    }
    ctx->pc = 0x160A54u;
    // 0x160a54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x160a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160a58: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x160A58u;
    {
        const bool branch_taken_0x160a58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x160a58) {
            ctx->pc = 0x160A5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160A58u;
            // 0x160a5c: 0x7143c  dsll32      $v0, $a3, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160A68u;
            goto label_160a68;
        }
    }
    ctx->pc = 0x160A60u;
    // 0x160a60: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x160A60u;
    {
        const bool branch_taken_0x160a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160A60u;
            // 0x160a64: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a60) {
            ctx->pc = 0x160AACu;
            goto label_160aac;
        }
    }
    ctx->pc = 0x160A68u;
label_160a68:
    // 0x160a68: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x160a68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x160a6c: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x160a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x160a70: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x160a70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x160a74: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x160a74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x160a78: 0xaca00040  sw          $zero, 0x40($a1)
    ctx->pc = 0x160a78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 0));
    // 0x160a7c: 0xaca00034  sw          $zero, 0x34($a1)
    ctx->pc = 0x160a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
    // 0x160a80: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x160A80u;
    {
        const bool branch_taken_0x160a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160A80u;
            // 0x160a84: 0xa0a30030  sb          $v1, 0x30($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 48), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a80) {
            ctx->pc = 0x160AA8u;
            goto label_160aa8;
        }
    }
    ctx->pc = 0x160A88u;
label_160a88:
    // 0x160a88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160a8c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x160a8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x160a90: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x160a90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x160a94: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x160a94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x160a98: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x160a98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x160a9c: 0xaca00044  sw          $zero, 0x44($a1)
    ctx->pc = 0x160a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 0));
    // 0x160aa0: 0xaca00038  sw          $zero, 0x38($a1)
    ctx->pc = 0x160aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 0));
    // 0x160aa4: 0xa0a20031  sb          $v0, 0x31($a1)
    ctx->pc = 0x160aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 49), (uint8_t)GPR_U32(ctx, 2));
label_160aa8:
    // 0x160aa8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x160aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_160aac:
    // 0x160aac: 0x3e00008  jr          $ra
    ctx->pc = 0x160AACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x160AB4u;
    // 0x160ab4: 0x0  nop
    ctx->pc = 0x160ab4u;
    // NOP
    // 0x160ab8: 0x0  nop
    ctx->pc = 0x160ab8u;
    // NOP
    // 0x160abc: 0x0  nop
    ctx->pc = 0x160abcu;
    // NOP
label_160ac0:
    // 0x160ac0: 0x84870000  lh          $a3, 0x0($a0)
    ctx->pc = 0x160ac0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x160ac4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x160ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160ac8: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x160ac8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x160acc: 0x5082000d  beql        $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x160ACCu;
    {
        const bool branch_taken_0x160acc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x160acc) {
            ctx->pc = 0x160AD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160ACCu;
            // 0x160ad0: 0x71200  sll         $v0, $a3, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160B04u;
            goto label_160b04;
        }
    }
    ctx->pc = 0x160AD4u;
    // 0x160ad4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x160ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160ad8: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x160AD8u;
    {
        const bool branch_taken_0x160ad8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x160ad8) {
            ctx->pc = 0x160ADCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160AD8u;
            // 0x160adc: 0x71200  sll         $v0, $a3, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160AE8u;
            goto label_160ae8;
        }
    }
    ctx->pc = 0x160AE0u;
    // 0x160ae0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x160AE0u;
    {
        const bool branch_taken_0x160ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160AE0u;
            // 0x160ae4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160ae0) {
            ctx->pc = 0x160B24u;
            goto label_160b24;
        }
    }
    ctx->pc = 0x160AE8u;
label_160ae8:
    // 0x160ae8: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x160ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x160aec: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x160aecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
    // 0x160af0: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x160af0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x160af4: 0xaca00040  sw          $zero, 0x40($a1)
    ctx->pc = 0x160af4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 0));
    // 0x160af8: 0xaca00034  sw          $zero, 0x34($a1)
    ctx->pc = 0x160af8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
    // 0x160afc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x160AFCu;
    {
        const bool branch_taken_0x160afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160AFCu;
            // 0x160b00: 0xa0a30030  sb          $v1, 0x30($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 48), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160afc) {
            ctx->pc = 0x160B20u;
            goto label_160b20;
        }
    }
    ctx->pc = 0x160B04u;
label_160b04:
    // 0x160b04: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x160b04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x160b08: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x160b08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x160b0c: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x160b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x160b10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160b14: 0xaca00044  sw          $zero, 0x44($a1)
    ctx->pc = 0x160b14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 0));
    // 0x160b18: 0xaca00038  sw          $zero, 0x38($a1)
    ctx->pc = 0x160b18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 0));
    // 0x160b1c: 0xa0a20031  sb          $v0, 0x31($a1)
    ctx->pc = 0x160b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 49), (uint8_t)GPR_U32(ctx, 2));
label_160b20:
    // 0x160b20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x160b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_160b24:
    // 0x160b24: 0x3e00008  jr          $ra
    ctx->pc = 0x160B24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x160B2Cu;
    // 0x160b2c: 0x0  nop
    ctx->pc = 0x160b2cu;
    // NOP
label_160b30:
    // 0x160b30: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x160b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x160b34: 0x84860002  lh          $a2, 0x2($a0)
    ctx->pc = 0x160b34u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x160b38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x160b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160b3c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x160B3Cu;
    {
        const bool branch_taken_0x160b3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x160B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160B3Cu;
            // 0x160b40: 0x84870000  lh          $a3, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160b3c) {
            ctx->pc = 0x160B78u;
            goto label_160b78;
        }
    }
    ctx->pc = 0x160B44u;
    // 0x160b44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x160b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160b48: 0x50640003  beql        $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x160B48u;
    {
        const bool branch_taken_0x160b48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x160b48) {
            ctx->pc = 0x160B4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160B48u;
            // 0x160b4c: 0x71a00  sll         $v1, $a3, 8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160B58u;
            goto label_160b58;
        }
    }
    ctx->pc = 0x160B50u;
    // 0x160b50: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x160B50u;
    {
        const bool branch_taken_0x160b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160B50u;
            // 0x160b54: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160b50) {
            ctx->pc = 0x160BA0u;
            goto label_160ba0;
        }
    }
    ctx->pc = 0x160B58u;
label_160b58:
    // 0x160b58: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x160b58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x160b5c: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x160b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x160b60: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x160b60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x160b64: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x160b64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x160b68: 0xaca00040  sw          $zero, 0x40($a1)
    ctx->pc = 0x160b68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 0));
    // 0x160b6c: 0xaca00034  sw          $zero, 0x34($a1)
    ctx->pc = 0x160b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
    // 0x160b70: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x160B70u;
    {
        const bool branch_taken_0x160b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160B70u;
            // 0x160b74: 0xa0a40030  sb          $a0, 0x30($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 48), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160b70) {
            ctx->pc = 0x160B9Cu;
            goto label_160b9c;
        }
    }
    ctx->pc = 0x160B78u;
label_160b78:
    // 0x160b78: 0x72200  sll         $a0, $a3, 8
    ctx->pc = 0x160b78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x160b7c: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x160b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x160b80: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x160b80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x160b84: 0xaca4001c  sw          $a0, 0x1C($a1)
    ctx->pc = 0x160b84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 4));
    // 0x160b88: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x160b88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
    // 0x160b8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160b90: 0xaca00044  sw          $zero, 0x44($a1)
    ctx->pc = 0x160b90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 0));
    // 0x160b94: 0xaca00038  sw          $zero, 0x38($a1)
    ctx->pc = 0x160b94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 0));
    // 0x160b98: 0xa0a20031  sb          $v0, 0x31($a1)
    ctx->pc = 0x160b98u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 49), (uint8_t)GPR_U32(ctx, 2));
label_160b9c:
    // 0x160b9c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x160b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_160ba0:
    // 0x160ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x160BA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x160BA8u;
    // 0x160ba8: 0x0  nop
    ctx->pc = 0x160ba8u;
    // NOP
    // 0x160bac: 0x0  nop
    ctx->pc = 0x160bacu;
    // NOP
label_160bb0:
    // 0x160bb0: 0x84870000  lh          $a3, 0x0($a0)
    ctx->pc = 0x160bb0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x160bb4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x160bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160bb8: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x160bb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x160bbc: 0x5082000c  beql        $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x160BBCu;
    {
        const bool branch_taken_0x160bbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x160bbc) {
            ctx->pc = 0x160BC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160BBCu;
            // 0x160bc0: 0x71100  sll         $v0, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160BF0u;
            goto label_160bf0;
        }
    }
    ctx->pc = 0x160BC4u;
    // 0x160bc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x160bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160bc8: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x160BC8u;
    {
        const bool branch_taken_0x160bc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x160bc8) {
            ctx->pc = 0x160BCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160BC8u;
            // 0x160bcc: 0x71100  sll         $v0, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160BD8u;
            goto label_160bd8;
        }
    }
    ctx->pc = 0x160BD0u;
    // 0x160bd0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x160BD0u;
    {
        const bool branch_taken_0x160bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160BD0u;
            // 0x160bd4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160bd0) {
            ctx->pc = 0x160C0Cu;
            goto label_160c0c;
        }
    }
    ctx->pc = 0x160BD8u;
label_160bd8:
    // 0x160bd8: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x160bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x160bdc: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x160bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x160be0: 0xaca00040  sw          $zero, 0x40($a1)
    ctx->pc = 0x160be0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 0));
    // 0x160be4: 0xaca00034  sw          $zero, 0x34($a1)
    ctx->pc = 0x160be4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
    // 0x160be8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x160BE8u;
    {
        const bool branch_taken_0x160be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160BE8u;
            // 0x160bec: 0xa0a30030  sb          $v1, 0x30($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 48), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160be8) {
            ctx->pc = 0x160C08u;
            goto label_160c08;
        }
    }
    ctx->pc = 0x160BF0u;
label_160bf0:
    // 0x160bf0: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x160bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x160bf4: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x160bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x160bf8: 0xaca00040  sw          $zero, 0x40($a1)
    ctx->pc = 0x160bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 0));
    // 0x160bfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160c00: 0xaca00038  sw          $zero, 0x38($a1)
    ctx->pc = 0x160c00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 0));
    // 0x160c04: 0xa0a20031  sb          $v0, 0x31($a1)
    ctx->pc = 0x160c04u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 49), (uint8_t)GPR_U32(ctx, 2));
label_160c08:
    // 0x160c08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x160c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_160c0c:
    // 0x160c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x160C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x160C14u;
    // 0x160c14: 0x0  nop
    ctx->pc = 0x160c14u;
    // NOP
    // 0x160c18: 0x0  nop
    ctx->pc = 0x160c18u;
    // NOP
    // 0x160c1c: 0x0  nop
    ctx->pc = 0x160c1cu;
    // NOP
label_160c20:
    // 0x160c20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x160c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x160c24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x160c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160c28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x160c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x160c2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x160c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x160c30: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x160c30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160c34: 0x30c500ff  andi        $a1, $a2, 0xFF
    ctx->pc = 0x160c34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x160c38: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x160C38u;
    {
        const bool branch_taken_0x160c38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x160C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160C38u;
            // 0x160c3c: 0x84860000  lh          $a2, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160c38) {
            ctx->pc = 0x160C88u;
            goto label_160c88;
        }
    }
    ctx->pc = 0x160C40u;
    // 0x160c40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160c44: 0x50a20003  beql        $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x160C44u;
    {
        const bool branch_taken_0x160c44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x160c44) {
            ctx->pc = 0x160C48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160C44u;
            // 0x160c48: 0x61200  sll         $v0, $a2, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160C54u;
            goto label_160c54;
        }
    }
    ctx->pc = 0x160C4Cu;
    // 0x160c4c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x160C4Cu;
    {
        const bool branch_taken_0x160c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160C4Cu;
            // 0x160c50: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160c4c) {
            ctx->pc = 0x160CC0u;
            goto label_160cc0;
        }
    }
    ctx->pc = 0x160C54u;
label_160c54:
    // 0x160c54: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x160c54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x160c58: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x160c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x160c5c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x160c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x160c60: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x160c60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x160c64: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x160c64u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x160c68: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x160c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x160c6c: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x160c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x160c70: 0xa2030030  sb          $v1, 0x30($s0)
    ctx->pc = 0x160c70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x160c74: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x160c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x160c78: 0xc058404  jal         func_161010
    ctx->pc = 0x160C78u;
    SET_GPR_U32(ctx, 31, 0x160C80u);
    ctx->pc = 0x160C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160C78u;
            // 0x160c7c: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161010u;
    if (runtime->hasFunction(0x161010u)) {
        auto targetFn = runtime->lookupFunction(0x161010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160C80u; }
        if (ctx->pc != 0x160C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00161010_0x161010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160C80u; }
        if (ctx->pc != 0x160C80u) { return; }
    }
    ctx->pc = 0x160C80u;
label_160c80:
    // 0x160c80: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x160C80u;
    {
        const bool branch_taken_0x160c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160C80u;
            // 0x160c84: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160c80) {
            ctx->pc = 0x160CBCu;
            goto label_160cbc;
        }
    }
    ctx->pc = 0x160C88u;
label_160c88:
    // 0x160c88: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x160c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x160c8c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x160c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x160c90: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x160c90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x160c94: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x160c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x160c98: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x160c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x160c9c: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x160c9cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x160ca0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x160ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x160ca4: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x160ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x160ca8: 0xa2030031  sb          $v1, 0x31($s0)
    ctx->pc = 0x160ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 49), (uint8_t)GPR_U32(ctx, 3));
    // 0x160cac: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x160cacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x160cb0: 0xc058404  jal         func_161010
    ctx->pc = 0x160CB0u;
    SET_GPR_U32(ctx, 31, 0x160CB8u);
    ctx->pc = 0x160CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160CB0u;
            // 0x160cb4: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161010u;
    if (runtime->hasFunction(0x161010u)) {
        auto targetFn = runtime->lookupFunction(0x161010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160CB8u; }
        if (ctx->pc != 0x160CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00161010_0x161010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160CB8u; }
        if (ctx->pc != 0x160CB8u) { return; }
    }
    ctx->pc = 0x160CB8u;
label_160cb8:
    // 0x160cb8: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x160cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_160cbc:
    // 0x160cbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x160cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_160cc0:
    // 0x160cc0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x160cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x160cc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x160cc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x160CC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160CC8u;
            // 0x160ccc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x160CD0u;
label_160cd0:
    // 0x160cd0: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x160cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x160cd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x160cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160cd8: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x160CD8u;
    {
        const bool branch_taken_0x160cd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x160CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160CD8u;
            // 0x160cdc: 0x84840000  lh          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160cd8) {
            ctx->pc = 0x160D18u;
            goto label_160d18;
        }
    }
    ctx->pc = 0x160CE0u;
    // 0x160ce0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160ce4: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x160CE4u;
    {
        const bool branch_taken_0x160ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x160ce4) {
            ctx->pc = 0x160CE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160CE4u;
            // 0x160ce8: 0xaca00028  sw          $zero, 0x28($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160CF4u;
            goto label_160cf4;
        }
    }
    ctx->pc = 0x160CECu;
    // 0x160cec: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x160CECu;
    {
        const bool branch_taken_0x160cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160CECu;
            // 0x160cf0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160cec) {
            ctx->pc = 0x160D40u;
            goto label_160d40;
        }
    }
    ctx->pc = 0x160CF4u;
label_160cf4:
    // 0x160cf4: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x160cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x160cf8: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x160cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x160cfc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x160cfcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x160d00: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x160d00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x160d04: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x160d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x160d08: 0xaca30040  sw          $v1, 0x40($a1)
    ctx->pc = 0x160d08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 3));
    // 0x160d0c: 0xaca00034  sw          $zero, 0x34($a1)
    ctx->pc = 0x160d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
    // 0x160d10: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x160D10u;
    {
        const bool branch_taken_0x160d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160D10u;
            // 0x160d14: 0xa0a20030  sb          $v0, 0x30($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 48), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160d10) {
            ctx->pc = 0x160D3Cu;
            goto label_160d3c;
        }
    }
    ctx->pc = 0x160D18u;
label_160d18:
    // 0x160d18: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x160d18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x160d1c: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x160d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x160d20: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x160d20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x160d24: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x160d24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x160d28: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x160d28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x160d2c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x160d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x160d30: 0xaca30044  sw          $v1, 0x44($a1)
    ctx->pc = 0x160d30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 3));
    // 0x160d34: 0xaca00038  sw          $zero, 0x38($a1)
    ctx->pc = 0x160d34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 0));
    // 0x160d38: 0xa0a20031  sb          $v0, 0x31($a1)
    ctx->pc = 0x160d38u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 49), (uint8_t)GPR_U32(ctx, 2));
label_160d3c:
    // 0x160d3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x160d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_160d40:
    // 0x160d40: 0x3e00008  jr          $ra
    ctx->pc = 0x160D40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x160D48u;
    // 0x160d48: 0x0  nop
    ctx->pc = 0x160d48u;
    // NOP
    // 0x160d4c: 0x0  nop
    ctx->pc = 0x160d4cu;
    // NOP
label_160d50:
    // 0x160d50: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x160d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x160d54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x160d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160d58: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x160D58u;
    {
        const bool branch_taken_0x160d58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x160D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160D58u;
            // 0x160d5c: 0x84840000  lh          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160d58) {
            ctx->pc = 0x160D98u;
            goto label_160d98;
        }
    }
    ctx->pc = 0x160D60u;
    // 0x160d60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160d64: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x160D64u;
    {
        const bool branch_taken_0x160d64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x160d64) {
            ctx->pc = 0x160D68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160D64u;
            // 0x160d68: 0xaca00028  sw          $zero, 0x28($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160D74u;
            goto label_160d74;
        }
    }
    ctx->pc = 0x160D6Cu;
    // 0x160d6c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x160D6Cu;
    {
        const bool branch_taken_0x160d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160D6Cu;
            // 0x160d70: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160d6c) {
            ctx->pc = 0x160DC0u;
            goto label_160dc0;
        }
    }
    ctx->pc = 0x160D74u;
label_160d74:
    // 0x160d74: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x160d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x160d78: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x160d78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x160d7c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x160d7cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x160d80: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x160d80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x160d84: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x160d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x160d88: 0xaca30040  sw          $v1, 0x40($a1)
    ctx->pc = 0x160d88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 3));
    // 0x160d8c: 0xaca00034  sw          $zero, 0x34($a1)
    ctx->pc = 0x160d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
    // 0x160d90: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x160D90u;
    {
        const bool branch_taken_0x160d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160D90u;
            // 0x160d94: 0xa0a20030  sb          $v0, 0x30($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 48), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160d90) {
            ctx->pc = 0x160DBCu;
            goto label_160dbc;
        }
    }
    ctx->pc = 0x160D98u;
label_160d98:
    // 0x160d98: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x160d98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x160d9c: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x160d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x160da0: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x160da0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x160da4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x160da4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x160da8: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x160da8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x160dac: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x160dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x160db0: 0xaca30044  sw          $v1, 0x44($a1)
    ctx->pc = 0x160db0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 3));
    // 0x160db4: 0xaca00038  sw          $zero, 0x38($a1)
    ctx->pc = 0x160db4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 0));
    // 0x160db8: 0xa0a20031  sb          $v0, 0x31($a1)
    ctx->pc = 0x160db8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 49), (uint8_t)GPR_U32(ctx, 2));
label_160dbc:
    // 0x160dbc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x160dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_160dc0:
    // 0x160dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x160DC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x160DC8u;
    // 0x160dc8: 0x0  nop
    ctx->pc = 0x160dc8u;
    // NOP
    // 0x160dcc: 0x0  nop
    ctx->pc = 0x160dccu;
    // NOP
label_160dd0:
    // 0x160dd0: 0x84870000  lh          $a3, 0x0($a0)
    ctx->pc = 0x160dd0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x160dd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x160dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160dd8: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x160dd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x160ddc: 0x5082000f  beql        $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x160DDCu;
    {
        const bool branch_taken_0x160ddc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x160ddc) {
            ctx->pc = 0x160DE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160DDCu;
            // 0x160de0: 0x71c3c  dsll32      $v1, $a3, 16 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160E1Cu;
            goto label_160e1c;
        }
    }
    ctx->pc = 0x160DE4u;
    // 0x160de4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x160de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160de8: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x160DE8u;
    {
        const bool branch_taken_0x160de8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x160de8) {
            ctx->pc = 0x160DECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160DE8u;
            // 0x160dec: 0x7143c  dsll32      $v0, $a3, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160DF8u;
            goto label_160df8;
        }
    }
    ctx->pc = 0x160DF0u;
    // 0x160df0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x160DF0u;
    {
        const bool branch_taken_0x160df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160DF0u;
            // 0x160df4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160df0) {
            ctx->pc = 0x160E44u;
            goto label_160e44;
        }
    }
    ctx->pc = 0x160DF8u;
label_160df8:
    // 0x160df8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x160df8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x160dfc: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x160dfcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x160e00: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x160e00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x160e04: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x160e04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x160e08: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x160e08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x160e0c: 0xaca00040  sw          $zero, 0x40($a1)
    ctx->pc = 0x160e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 0));
    // 0x160e10: 0xaca00034  sw          $zero, 0x34($a1)
    ctx->pc = 0x160e10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
    // 0x160e14: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x160E14u;
    {
        const bool branch_taken_0x160e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160E14u;
            // 0x160e18: 0xa0a30030  sb          $v1, 0x30($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 48), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160e14) {
            ctx->pc = 0x160E40u;
            goto label_160e40;
        }
    }
    ctx->pc = 0x160E1Cu;
label_160e1c:
    // 0x160e1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160e20: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x160e20u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x160e24: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x160e24u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x160e28: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x160e28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x160e2c: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x160e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x160e30: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x160e30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x160e34: 0xaca00044  sw          $zero, 0x44($a1)
    ctx->pc = 0x160e34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 0));
    // 0x160e38: 0xaca00038  sw          $zero, 0x38($a1)
    ctx->pc = 0x160e38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 0));
    // 0x160e3c: 0xa0a20031  sb          $v0, 0x31($a1)
    ctx->pc = 0x160e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 49), (uint8_t)GPR_U32(ctx, 2));
label_160e40:
    // 0x160e40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x160e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_160e44:
    // 0x160e44: 0x3e00008  jr          $ra
    ctx->pc = 0x160E44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x160E4Cu;
    // 0x160e4c: 0x0  nop
    ctx->pc = 0x160e4cu;
    // NOP
label_160e50:
    // 0x160e50: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x160e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x160e54: 0x84860002  lh          $a2, 0x2($a0)
    ctx->pc = 0x160e54u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x160e58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x160e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160e5c: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x160E5Cu;
    {
        const bool branch_taken_0x160e5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x160E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160E5Cu;
            // 0x160e60: 0x84870000  lh          $a3, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160e5c) {
            ctx->pc = 0x160EA4u;
            goto label_160ea4;
        }
    }
    ctx->pc = 0x160E64u;
    // 0x160e64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160e68: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x160E68u;
    {
        const bool branch_taken_0x160e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x160e68) {
            ctx->pc = 0x160E6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160E68u;
            // 0x160e6c: 0x72200  sll         $a0, $a3, 8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160E78u;
            goto label_160e78;
        }
    }
    ctx->pc = 0x160E70u;
    // 0x160e70: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x160E70u;
    {
        const bool branch_taken_0x160e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160E70u;
            // 0x160e74: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160e70) {
            ctx->pc = 0x160ED4u;
            goto label_160ed4;
        }
    }
    ctx->pc = 0x160E78u;
label_160e78:
    // 0x160e78: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x160e78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x160e7c: 0xaca40018  sw          $a0, 0x18($a1)
    ctx->pc = 0x160e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 4));
    // 0x160e80: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x160e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x160e84: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x160e84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x160e88: 0x61203  sra         $v0, $a2, 8
    ctx->pc = 0x160e88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 8));
    // 0x160e8c: 0xaca00040  sw          $zero, 0x40($a1)
    ctx->pc = 0x160e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 0));
    // 0x160e90: 0xaca00034  sw          $zero, 0x34($a1)
    ctx->pc = 0x160e90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
    // 0x160e94: 0xa0a30030  sb          $v1, 0x30($a1)
    ctx->pc = 0x160e94u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x160e98: 0xa4a20058  sh          $v0, 0x58($a1)
    ctx->pc = 0x160e98u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 88), (uint16_t)GPR_U32(ctx, 2));
    // 0x160e9c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x160E9Cu;
    {
        const bool branch_taken_0x160e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160E9Cu;
            // 0x160ea0: 0xaca0005c  sw          $zero, 0x5C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160e9c) {
            ctx->pc = 0x160ED0u;
            goto label_160ed0;
        }
    }
    ctx->pc = 0x160EA4u;
label_160ea4:
    // 0x160ea4: 0x72200  sll         $a0, $a3, 8
    ctx->pc = 0x160ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x160ea8: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x160ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x160eac: 0xaca4001c  sw          $a0, 0x1C($a1)
    ctx->pc = 0x160eacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 4));
    // 0x160eb0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x160eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x160eb4: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x160eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x160eb8: 0x61203  sra         $v0, $a2, 8
    ctx->pc = 0x160eb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 8));
    // 0x160ebc: 0xaca00044  sw          $zero, 0x44($a1)
    ctx->pc = 0x160ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 0));
    // 0x160ec0: 0xaca00038  sw          $zero, 0x38($a1)
    ctx->pc = 0x160ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 0));
    // 0x160ec4: 0xa0a30031  sb          $v1, 0x31($a1)
    ctx->pc = 0x160ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 49), (uint8_t)GPR_U32(ctx, 3));
    // 0x160ec8: 0xa4a2005a  sh          $v0, 0x5A($a1)
    ctx->pc = 0x160ec8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 90), (uint16_t)GPR_U32(ctx, 2));
    // 0x160ecc: 0xaca00060  sw          $zero, 0x60($a1)
    ctx->pc = 0x160eccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 0));
label_160ed0:
    // 0x160ed0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x160ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_160ed4:
    // 0x160ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x160ED4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x160EDCu;
    // 0x160edc: 0x0  nop
    ctx->pc = 0x160edcu;
    // NOP
label_160ee0:
    // 0x160ee0: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x160ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x160ee4: 0x84870002  lh          $a3, 0x2($a0)
    ctx->pc = 0x160ee4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x160ee8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x160ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160eec: 0x84860004  lh          $a2, 0x4($a0)
    ctx->pc = 0x160eecu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x160ef0: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x160EF0u;
    {
        const bool branch_taken_0x160ef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x160EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160EF0u;
            // 0x160ef4: 0x84880000  lh          $t0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160ef0) {
            ctx->pc = 0x160F3Cu;
            goto label_160f3c;
        }
    }
    ctx->pc = 0x160EF8u;
    // 0x160ef8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160efc: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x160EFCu;
    {
        const bool branch_taken_0x160efc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x160efc) {
            ctx->pc = 0x160F00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x160EFCu;
            // 0x160f00: 0x81a00  sll         $v1, $t0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x160F0Cu;
            goto label_160f0c;
        }
    }
    ctx->pc = 0x160F04u;
    // 0x160f04: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x160F04u;
    {
        const bool branch_taken_0x160f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160F04u;
            // 0x160f08: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160f04) {
            ctx->pc = 0x160F70u;
            goto label_160f70;
        }
    }
    ctx->pc = 0x160F0Cu;
label_160f0c:
    // 0x160f0c: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x160f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x160f10: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x160f10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x160f14: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x160f14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x160f18: 0xaca40020  sw          $a0, 0x20($a1)
    ctx->pc = 0x160f18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 4));
    // 0x160f1c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x160f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x160f20: 0xaca00040  sw          $zero, 0x40($a1)
    ctx->pc = 0x160f20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 0));
    // 0x160f24: 0x61203  sra         $v0, $a2, 8
    ctx->pc = 0x160f24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 8));
    // 0x160f28: 0xaca00034  sw          $zero, 0x34($a1)
    ctx->pc = 0x160f28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
    // 0x160f2c: 0xa0a30030  sb          $v1, 0x30($a1)
    ctx->pc = 0x160f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x160f30: 0xa4a20058  sh          $v0, 0x58($a1)
    ctx->pc = 0x160f30u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 88), (uint16_t)GPR_U32(ctx, 2));
    // 0x160f34: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x160F34u;
    {
        const bool branch_taken_0x160f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160F34u;
            // 0x160f38: 0xaca0005c  sw          $zero, 0x5C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160f34) {
            ctx->pc = 0x160F6Cu;
            goto label_160f6c;
        }
    }
    ctx->pc = 0x160F3Cu;
label_160f3c:
    // 0x160f3c: 0x81a00  sll         $v1, $t0, 8
    ctx->pc = 0x160f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x160f40: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x160f40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x160f44: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x160f44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x160f48: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x160f48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x160f4c: 0xaca40024  sw          $a0, 0x24($a1)
    ctx->pc = 0x160f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 4));
    // 0x160f50: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x160f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x160f54: 0xaca00044  sw          $zero, 0x44($a1)
    ctx->pc = 0x160f54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 0));
    // 0x160f58: 0x61203  sra         $v0, $a2, 8
    ctx->pc = 0x160f58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 8));
    // 0x160f5c: 0xaca00038  sw          $zero, 0x38($a1)
    ctx->pc = 0x160f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 0));
    // 0x160f60: 0xa0a30031  sb          $v1, 0x31($a1)
    ctx->pc = 0x160f60u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 49), (uint8_t)GPR_U32(ctx, 3));
    // 0x160f64: 0xa4a2005a  sh          $v0, 0x5A($a1)
    ctx->pc = 0x160f64u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 90), (uint16_t)GPR_U32(ctx, 2));
    // 0x160f68: 0xaca00060  sw          $zero, 0x60($a1)
    ctx->pc = 0x160f68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 0));
label_160f6c:
    // 0x160f6c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x160f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_160f70:
    // 0x160f70: 0x3e00008  jr          $ra
    ctx->pc = 0x160F70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x160F78u;
    // 0x160f78: 0x0  nop
    ctx->pc = 0x160f78u;
    // NOP
    // 0x160f7c: 0x0  nop
    ctx->pc = 0x160f7cu;
    // NOP
    ctx->pc = 0x160f80u;
}
