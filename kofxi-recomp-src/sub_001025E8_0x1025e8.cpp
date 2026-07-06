#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001025E8
// Address: 0x1025e8 - 0x102810
void sub_001025E8_0x1025e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001025E8_0x1025e8");
#endif

    switch (ctx->pc) {
        case 0x102640u: goto label_102640;
        case 0x102654u: goto label_102654;
        case 0x102668u: goto label_102668;
        case 0x10267cu: goto label_10267c;
        case 0x1027c0u: goto label_1027c0;
        case 0x1027f8u: goto label_1027f8;
        default: break;
    }

    ctx->pc = 0x1025e8u;

    // 0x1025e8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1025e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1025ec: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1025ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1025f0: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x1025f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x1025f4: 0x3463e020  ori         $v1, $v1, 0xE020
    ctx->pc = 0x1025f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57376);
    // 0x1025f8: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x1025f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1025fc: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1025fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x102600: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x102600u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x102604: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x102604u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102608: 0x34a5e030  ori         $a1, $a1, 0xE030
    ctx->pc = 0x102608u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)57392);
    // 0x10260c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10260cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x102610: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x102610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x102614: 0x3463e050  ori         $v1, $v1, 0xE050
    ctx->pc = 0x102614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57424);
    // 0x102618: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x102618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10261c: 0x91240000  lbu         $a0, 0x0($t1)
    ctx->pc = 0x10261cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x102620: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x102620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x102624: 0x3442e040  ori         $v0, $v0, 0xE040
    ctx->pc = 0x102624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57408);
    // 0x102628: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x102628u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10262c: 0x2c84000a  sltiu       $a0, $a0, 0xA
    ctx->pc = 0x10262cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x102630: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x102630u;
    {
        const bool branch_taken_0x102630 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x102630) {
            ctx->pc = 0x102634u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x102630u;
            // 0x102634: 0x91220001  lbu         $v0, 0x1($t1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x102640u;
            goto label_102640;
        }
    }
    ctx->pc = 0x102638u;
    // 0x102638: 0x3e00008  jr          $ra
    ctx->pc = 0x102638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10263Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102638u;
            // 0x10263c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x102640u;
label_102640:
    // 0x102640: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x102640u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x102644: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x102644u;
    {
        const bool branch_taken_0x102644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102644) {
            ctx->pc = 0x102648u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x102644u;
            // 0x102648: 0x91220002  lbu         $v0, 0x2($t1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x102654u;
            goto label_102654;
        }
    }
    ctx->pc = 0x10264Cu;
    // 0x10264c: 0x3e00008  jr          $ra
    ctx->pc = 0x10264Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10264Cu;
            // 0x102650: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x102654u;
label_102654:
    // 0x102654: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x102654u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x102658: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x102658u;
    {
        const bool branch_taken_0x102658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102658) {
            ctx->pc = 0x10265Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x102658u;
            // 0x10265c: 0x912b0003  lbu         $t3, 0x3($t1) (Delay Slot)
        SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x102668u;
            goto label_102668;
        }
    }
    ctx->pc = 0x102660u;
    // 0x102660: 0x3e00008  jr          $ra
    ctx->pc = 0x102660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102660u;
            // 0x102664: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x102668u;
label_102668:
    // 0x102668: 0x2d620007  sltiu       $v0, $t3, 0x7
    ctx->pc = 0x102668u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x10266c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10266Cu;
    {
        const bool branch_taken_0x10266c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10266Cu;
            // 0x102670: 0x3c02003e  lui         $v0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10266c) {
            ctx->pc = 0x10267Cu;
            goto label_10267c;
        }
    }
    ctx->pc = 0x102674u;
    // 0x102674: 0x3e00008  jr          $ra
    ctx->pc = 0x102674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102674u;
            // 0x102678: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10267Cu;
label_10267c:
    // 0x10267c: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x10267cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x102680: 0x24429f00  addiu       $v0, $v0, -0x6100
    ctx->pc = 0x102680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942464));
    // 0x102684: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x102684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x102688: 0x91250001  lbu         $a1, 0x1($t1)
    ctx->pc = 0x102688u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x10268c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10268cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x102690: 0x24849f10  addiu       $a0, $a0, -0x60F0
    ctx->pc = 0x102690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942480));
    // 0x102694: 0x90680000  lbu         $t0, 0x0($v1)
    ctx->pc = 0x102694u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x102698: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x102698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x10269c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x10269cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1026a0: 0x3442ffcf  ori         $v0, $v0, 0xFFCF
    ctx->pc = 0x1026a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65487);
    // 0x1026a4: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1026a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1026a8: 0x91270002  lbu         $a3, 0x2($t1)
    ctx->pc = 0x1026a8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x1026ac: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x1026acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x1026b0: 0x24849f20  addiu       $a0, $a0, -0x60E0
    ctx->pc = 0x1026b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942496));
    // 0x1026b4: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x1026b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1026b8: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x1026b8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1026bc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1026bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1026c0: 0x485025  or          $t2, $v0, $t0
    ctx->pc = 0x1026c0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x1026c4: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x1026c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1026c8: 0x3463ff3f  ori         $v1, $v1, 0xFF3F
    ctx->pc = 0x1026c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65343);
    // 0x1026cc: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x1026ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x1026d0: 0x1431824  and         $v1, $t2, $v1
    ctx->pc = 0x1026d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1026d4: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x1026d4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1026d8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1026d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1026dc: 0x665025  or          $t2, $v1, $a2
    ctx->pc = 0x1026dcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1026e0: 0x3442fff3  ori         $v0, $v0, 0xFFF3
    ctx->pc = 0x1026e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65523);
    // 0x1026e4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1026e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1026e8: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x1026e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x1026ec: 0x1160000a  beqz        $t3, . + 4 + (0xA << 2)
    ctx->pc = 0x1026ECu;
    {
        const bool branch_taken_0x1026ec = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x1026F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1026ECu;
            // 0x1026f0: 0x445025  or          $t2, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1026ec) {
            ctx->pc = 0x102718u;
            goto label_102718;
        }
    }
    ctx->pc = 0x1026F4u;
    // 0x1026f4: 0x91230003  lbu         $v1, 0x3($t1)
    ctx->pc = 0x1026f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
    // 0x1026f8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1026f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1026fc: 0x354a0002  ori         $t2, $t2, 0x2
    ctx->pc = 0x1026fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)2);
    // 0x102700: 0x3442fcff  ori         $v0, $v0, 0xFCFF
    ctx->pc = 0x102700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64767);
    // 0x102704: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x102704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x102708: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x102708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x10270c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x10270cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x102710: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x102710u;
    {
        const bool branch_taken_0x102710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102710u;
            // 0x102714: 0x435025  or          $t2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102710) {
            ctx->pc = 0x102724u;
            goto label_102724;
        }
    }
    ctx->pc = 0x102718u;
label_102718:
    // 0x102718: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x102718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x10271c: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x10271cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x102720: 0x1425024  and         $t2, $t2, $v0
    ctx->pc = 0x102720u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
label_102724:
    // 0x102724: 0x95220004  lhu         $v0, 0x4($t1)
    ctx->pc = 0x102724u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x102728: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x102728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10272c: 0x95260006  lhu         $a2, 0x6($t1)
    ctx->pc = 0x10272cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x102730: 0x3484e000  ori         $a0, $a0, 0xE000
    ctx->pc = 0x102730u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)57344);
    // 0x102734: 0x9525000a  lhu         $a1, 0xA($t1)
    ctx->pc = 0x102734u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 10)));
    // 0x102738: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x102738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x10273c: 0x8d280010  lw          $t0, 0x10($t1)
    ctx->pc = 0x10273cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x102740: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x102740u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x102744: 0x95270008  lhu         $a3, 0x8($t1)
    ctx->pc = 0x102744u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x102748: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x102748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10274c: 0xac8a0000  sw          $t2, 0x0($a0)
    ctx->pc = 0x10274cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 10));
    // 0x102750: 0x3463e020  ori         $v1, $v1, 0xE020
    ctx->pc = 0x102750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57376);
    // 0x102754: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x102754u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x102758: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x102758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10275c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x10275cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x102760: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x102760u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x102764: 0x3442e030  ori         $v0, $v0, 0xE030
    ctx->pc = 0x102764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57392);
    // 0x102768: 0x8d26000c  lw          $a2, 0xC($t1)
    ctx->pc = 0x102768u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x10276c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x10276cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x102770: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x102770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x102774: 0x3463e050  ori         $v1, $v1, 0xE050
    ctx->pc = 0x102774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57424);
    // 0x102778: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x102778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10277c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x10277cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x102780: 0x3442e040  ori         $v0, $v0, 0xE040
    ctx->pc = 0x102780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57408);
    // 0x102784: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x102784u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x102788: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x102788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x10278c: 0x24665848  addiu       $a2, $v1, 0x5848
    ctx->pc = 0x10278cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 22600));
    // 0x102790: 0x69220007  ldl         $v0, 0x7($t1)
    ctx->pc = 0x102790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x102794: 0x6d220000  ldr         $v0, 0x0($t1)
    ctx->pc = 0x102794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x102798: 0x6924000f  ldl         $a0, 0xF($t1)
    ctx->pc = 0x102798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x10279c: 0x6d240008  ldr         $a0, 0x8($t1)
    ctx->pc = 0x10279cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1027a0: 0x8d250010  lw          $a1, 0x10($t1)
    ctx->pc = 0x1027a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x1027a4: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x1027a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1027a8: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x1027a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1027ac: 0xb0c4000f  sdl         $a0, 0xF($a2)
    ctx->pc = 0x1027acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1027b0: 0xb4c40008  sdr         $a0, 0x8($a2)
    ctx->pc = 0x1027b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1027b4: 0xacc50010  sw          $a1, 0x10($a2)
    ctx->pc = 0x1027b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 5));
    // 0x1027b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1027B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1027BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1027B8u;
            // 0x1027bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1027C0u;
label_1027c0:
    // 0x1027c0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1027c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1027c4: 0x24685848  addiu       $t0, $v1, 0x5848
    ctx->pc = 0x1027c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 22600));
    // 0x1027c8: 0x69050007  ldl         $a1, 0x7($t0)
    ctx->pc = 0x1027c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1027cc: 0x6d050000  ldr         $a1, 0x0($t0)
    ctx->pc = 0x1027ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1027d0: 0x6906000f  ldl         $a2, 0xF($t0)
    ctx->pc = 0x1027d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1027d4: 0x6d060008  ldr         $a2, 0x8($t0)
    ctx->pc = 0x1027d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1027d8: 0x8d070010  lw          $a3, 0x10($t0)
    ctx->pc = 0x1027d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x1027dc: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x1027dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1027e0: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x1027e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1027e4: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x1027e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1027e8: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x1027e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1027ec: 0xac870010  sw          $a3, 0x10($a0)
    ctx->pc = 0x1027ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
    // 0x1027f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1027F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1027F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1027F0u;
            // 0x1027f4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1027F8u;
label_1027f8:
    // 0x1027f8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1027f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1027fc: 0x3463e060  ori         $v1, $v1, 0xE060
    ctx->pc = 0x1027fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57440);
    // 0x102800: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x102800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x102804: 0x3e00008  jr          $ra
    ctx->pc = 0x102804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102804u;
            // 0x102808: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10280Cu;
    // 0x10280c: 0x0  nop
    ctx->pc = 0x10280cu;
    // NOP
    ctx->pc = 0x102810u;
}
