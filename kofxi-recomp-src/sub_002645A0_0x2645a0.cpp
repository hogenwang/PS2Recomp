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

// Function: sub_002645A0
// Address: 0x2645a0 - 0x264868
void sub_002645A0_0x2645a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002645A0_0x2645a0");
#endif

    switch (ctx->pc) {
        case 0x2645f8u: goto label_2645f8;
        case 0x264670u: goto label_264670;
        case 0x264684u: goto label_264684;
        case 0x264744u: goto label_264744;
        case 0x26482cu: goto label_26482c;
        case 0x264840u: goto label_264840;
        case 0x264860u: goto label_264860;
        default: break;
    }

    ctx->pc = 0x2645a0u;

    // 0x2645a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2645a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2645a4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2645a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2645a8: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2645a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2645ac: 0x3a0502d  daddu       $t2, $sp, $zero
    ctx->pc = 0x2645acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2645b0: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2645b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2645b4: 0x3c14003e  lui         $s4, 0x3E
    ctx->pc = 0x2645b4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)62 << 16));
    // 0x2645b8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2645b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2645bc: 0x268bb7c8  addiu       $t3, $s4, -0x4838
    ctx->pc = 0x2645bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 4294948808));
    // 0x2645c0: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2645c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2645c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2645c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2645c8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2645c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2645cc: 0x24120030  addiu       $s2, $zero, 0x30
    ctx->pc = 0x2645ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2645d0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2645d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2645d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2645d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2645d8: 0x24110078  addiu       $s1, $zero, 0x78
    ctx->pc = 0x2645d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2645dc: 0x24190058  addiu       $t9, $zero, 0x58
    ctx->pc = 0x2645dcu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2645e0: 0x91070000  lbu         $a3, 0x0($t0)
    ctx->pc = 0x2645e0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2645e4: 0x24180008  addiu       $t8, $zero, 0x8
    ctx->pc = 0x2645e4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2645e8: 0x240f000a  addiu       $t7, $zero, 0xA
    ctx->pc = 0x2645e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2645ec: 0x240c0010  addiu       $t4, $zero, 0x10
    ctx->pc = 0x2645ecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2645f0: 0x240e002e  addiu       $t6, $zero, 0x2E
    ctx->pc = 0x2645f0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x2645f4: 0x27ad000c  addiu       $t5, $sp, 0xC
    ctx->pc = 0x2645f4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_2645f8:
    // 0x2645f8: 0xeb1821  addu        $v1, $a3, $t3
    ctx->pc = 0x2645f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x2645fc: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2645fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264600: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x264600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x264604: 0x5040008f  beql        $v0, $zero, . + 4 + (0x8F << 2)
    ctx->pc = 0x264604u;
    {
        const bool branch_taken_0x264604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264604) {
            ctx->pc = 0x264608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264604u;
            // 0x264608: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264844u;
            goto label_264844;
        }
    }
    ctx->pc = 0x26460Cu;
    // 0x26460c: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x26460cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x264610: 0x14f20010  bne         $a3, $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x264610u;
    {
        const bool branch_taken_0x264610 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 18));
        ctx->pc = 0x264614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264610u;
        // 0x264614: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264610) {
            ctx->pc = 0x264654u;
            goto label_264654;
        }
    }
    ctx->pc = 0x264618u;
    // 0x264618: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x264618u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x26461c: 0x91070000  lbu         $a3, 0x0($t0)
    ctx->pc = 0x26461cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x264620: 0x50f10004  beql        $a3, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x264620u;
    {
        const bool branch_taken_0x264620 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 17));
        if (branch_taken_0x264620) {
            ctx->pc = 0x264624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264620u;
            // 0x264624: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264634u;
            goto label_264634;
        }
    }
    ctx->pc = 0x264628u;
    // 0x264628: 0x14f90005  bne         $a3, $t9, . + 4 + (0x5 << 2)
    ctx->pc = 0x264628u;
    {
        const bool branch_taken_0x264628 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 25));
        ctx->pc = 0x26462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264628u;
        // 0x26462c: 0xeb1821  addu        $v1, $a3, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264628) {
            ctx->pc = 0x264640u;
            goto label_264640;
        }
    }
    ctx->pc = 0x264630u;
    // 0x264630: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x264630u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_264634:
    // 0x264634: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x264634u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x264638: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x264638u;
    {
        const bool branch_taken_0x264638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264638u;
        // 0x26463c: 0x91070000  lbu         $a3, 0x0($t0) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264638) {
            ctx->pc = 0x264654u;
            goto label_264654;
        }
    }
    ctx->pc = 0x264640u;
label_264640:
    // 0x264640: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x264640u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264644: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x264644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x264648: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x264648u;
    {
        const bool branch_taken_0x264648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264648u;
        // 0x26464c: 0x38e20039  xori        $v0, $a3, 0x39 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)57);
        ctx->in_delay_slot = false;
        if (branch_taken_0x264648) {
            ctx->pc = 0x264654u;
            goto label_264654;
        }
    }
    ctx->pc = 0x264650u;
    // 0x264650: 0x302480b  movn        $t1, $t8, $v0
    ctx->pc = 0x264650u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 24));
label_264654:
    // 0x264654: 0x10c0001d  beqz        $a2, . + 4 + (0x1D << 2)
    ctx->pc = 0x264654u;
    {
        const bool branch_taken_0x264654 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x264658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264654u;
        // 0x264658: 0xeb1821  addu        $v1, $a3, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264654) {
            ctx->pc = 0x2646CCu;
            goto label_2646cc;
        }
    }
    ctx->pc = 0x26465Cu;
    // 0x26465c: 0x152f0079  bne         $t1, $t7, . + 4 + (0x79 << 2)
    ctx->pc = 0x26465Cu;
    {
        const bool branch_taken_0x26465c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 15));
        ctx->pc = 0x264660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26465Cu;
        // 0x264660: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26465c) {
            ctx->pc = 0x264844u;
            goto label_264844;
        }
    }
    ctx->pc = 0x264664u;
    // 0x264664: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x264664u;
    {
        const bool branch_taken_0x264664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264664u;
        // 0x264668: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264664) {
            ctx->pc = 0x2646D0u;
            goto label_2646d0;
        }
    }
    ctx->pc = 0x26466Cu;
    // 0x26466c: 0x0  nop
    ctx->pc = 0x26466cu;
    // NOP
label_264670:
    // 0x264670: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x264670u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x264674: 0x91070000  lbu         $a3, 0x0($t0)
    ctx->pc = 0x264674u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x264678: 0x491818  mult        $v1, $v0, $t1
    ctx->pc = 0x264678u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x26467c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x26467Cu;
    {
        const bool branch_taken_0x26467c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26467Cu;
        // 0x264680: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26467c) {
            ctx->pc = 0x2646C4u;
            goto label_2646c4;
        }
    }
    ctx->pc = 0x264684u;
label_264684:
    // 0x264684: 0x152c0018  bne         $t1, $t4, . + 4 + (0x18 << 2)
    ctx->pc = 0x264684u;
    {
        const bool branch_taken_0x264684 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 12));
        ctx->pc = 0x264688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264684u;
        // 0x264688: 0xeb1021  addu        $v0, $a3, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264684) {
            ctx->pc = 0x2646E8u;
            goto label_2646e8;
        }
    }
    ctx->pc = 0x26468Cu;
    // 0x26468c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x26468cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x264690: 0x30430044  andi        $v1, $v0, 0x44
    ctx->pc = 0x264690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)68);
    // 0x264694: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x264694u;
    {
        const bool branch_taken_0x264694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x264698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264694u;
        // 0x264698: 0x30420002  andi        $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x264694) {
            ctx->pc = 0x2646E8u;
            goto label_2646e8;
        }
    }
    ctx->pc = 0x26469Cu;
    // 0x26469c: 0x24e5ffc9  addiu       $a1, $a3, -0x37
    ctx->pc = 0x26469cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967241));
    // 0x2646a0: 0x24e3ffa9  addiu       $v1, $a3, -0x57
    ctx->pc = 0x2646a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967209));
    // 0x2646a4: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x2646a4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x2646a8: 0x2ca40010  sltiu       $a0, $a1, 0x10
    ctx->pc = 0x2646a8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2646ac: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2646ACu;
    {
        const bool branch_taken_0x2646ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2646B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2646ACu;
        // 0x2646b0: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2646ac) {
            ctx->pc = 0x2646E8u;
            goto label_2646e8;
        }
    }
    ctx->pc = 0x2646B4u;
    // 0x2646b4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2646b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2646b8: 0x91070000  lbu         $a3, 0x0($t0)
    ctx->pc = 0x2646b8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2646bc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2646bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2646c0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2646c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_2646c4:
    // 0x2646c4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2646c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2646c8: 0xeb1821  addu        $v1, $a3, $t3
    ctx->pc = 0x2646c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
label_2646cc:
    // 0x2646cc: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2646ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2646d0:
    // 0x2646d0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2646d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2646d4: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2646D4u;
    {
        const bool branch_taken_0x2646d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2646D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2646D4u;
        // 0x2646d8: 0x24e5ffd0  addiu       $a1, $a3, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2646d4) {
            ctx->pc = 0x264684u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_264684;
        }
    }
    ctx->pc = 0x2646DCu;
    // 0x2646dc: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x2646dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2646e0: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2646E0u;
    {
        const bool branch_taken_0x2646e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2646E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2646E0u;
        // 0x2646e4: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2646e0) {
            ctx->pc = 0x264670u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_264670;
        }
    }
    ctx->pc = 0x2646E8u;
label_2646e8:
    // 0x2646e8: 0x14ee0008  bne         $a3, $t6, . + 4 + (0x8 << 2)
    ctx->pc = 0x2646E8u;
    {
        const bool branch_taken_0x2646e8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 14));
        ctx->pc = 0x2646ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2646E8u;
        // 0x2646ec: 0x14d102b  sltu        $v0, $t2, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2646e8) {
            ctx->pc = 0x26470Cu;
            goto label_26470c;
        }
    }
    ctx->pc = 0x2646F0u;
    // 0x2646f0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2646F0u;
    {
        const bool branch_taken_0x2646f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2646F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2646F0u;
        // 0x2646f4: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2646f0) {
            ctx->pc = 0x264744u;
            goto label_264744;
        }
    }
    ctx->pc = 0x2646F8u;
    // 0x2646f8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2646f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2646fc: 0x91070000  lbu         $a3, 0x0($t0)
    ctx->pc = 0x2646fcu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x264700: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x264700u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x264704: 0x1000ffbc  b           . + 4 + (-0x44 << 2)
    ctx->pc = 0x264704u;
    {
        const bool branch_taken_0x264704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264704u;
        // 0x264708: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264704) {
            ctx->pc = 0x2645F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2645f8;
        }
    }
    ctx->pc = 0x26470Cu;
label_26470c:
    // 0x26470c: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x26470Cu;
    {
        const bool branch_taken_0x26470c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x264710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26470Cu;
        // 0x264710: 0x2682b7c8  addiu       $v0, $s4, -0x4838 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294948808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26470c) {
            ctx->pc = 0x264728u;
            goto label_264728;
        }
    }
    ctx->pc = 0x264714u;
    // 0x264714: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x264714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x264718: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x264718u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26471c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x26471cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x264720: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x264720u;
    {
        const bool branch_taken_0x264720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x264724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264720u;
        // 0x264724: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264720) {
            ctx->pc = 0x264844u;
            goto label_264844;
        }
    }
    ctx->pc = 0x264728u;
label_264728:
    // 0x264728: 0x15d1023  subu        $v0, $t2, $sp
    ctx->pc = 0x264728u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 29)));
    // 0x26472c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x26472cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x264730: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x264730u;
    {
        const bool branch_taken_0x264730 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x264734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264730u;
        // 0x264734: 0x24430001  addiu       $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264730) {
            ctx->pc = 0x26474Cu;
            goto label_26474c;
        }
    }
    ctx->pc = 0x264738u;
    // 0x264738: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x264738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26473c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26473Cu;
    {
        const bool branch_taken_0x26473c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x264740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26473Cu;
        // 0x264740: 0x2c620005  sltiu       $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26473c) {
            ctx->pc = 0x264750u;
            goto label_264750;
        }
    }
    ctx->pc = 0x264744u;
label_264744:
    // 0x264744: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x264744u;
    {
        const bool branch_taken_0x264744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264744u;
        // 0x264748: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264744) {
            ctx->pc = 0x264844u;
            goto label_264844;
        }
    }
    ctx->pc = 0x26474Cu;
label_26474c:
    // 0x26474c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x26474cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_264750:
    // 0x264750: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x264750u;
    {
        const bool branch_taken_0x264750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264750u;
        // 0x264754: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264750) {
            ctx->pc = 0x26481Cu;
            goto label_26481c;
        }
    }
    ctx->pc = 0x264758u;
    // 0x264758: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x264758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26475c: 0x244276e0  addiu       $v0, $v0, 0x76E0
    ctx->pc = 0x26475cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30432));
    // 0x264760: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x264760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x264764: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x264764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264768: 0x800008  jr          $a0
    ctx->pc = 0x264768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x264744u: goto label_264744;
            case 0x264770u: goto label_264770;
            case 0x2647A0u: goto label_2647a0;
            case 0x2647DCu: goto label_2647dc;
            case 0x26481Cu: goto label_26481c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264768u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x264770u;
label_264770:
    // 0x264770: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x264770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264774: 0x2c820100  sltiu       $v0, $a0, 0x100
    ctx->pc = 0x264774u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x264778: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x264778u;
    {
        const bool branch_taken_0x264778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264778u;
        // 0x26477c: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264778) {
            ctx->pc = 0x264744u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_264744;
        }
    }
    ctx->pc = 0x264780u;
    // 0x264780: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x264780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264784: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x264784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x264788: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x264788u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x26478c: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x26478Cu;
    {
        const bool branch_taken_0x26478c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26478c) {
            ctx->pc = 0x264790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26478Cu;
            // 0x264790: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264844u;
            goto label_264844;
        }
    }
    ctx->pc = 0x264794u;
    // 0x264794: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x264794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x264798: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x264798u;
    {
        const bool branch_taken_0x264798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26479Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264798u;
        // 0x26479c: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264798) {
            ctx->pc = 0x264818u;
            goto label_264818;
        }
    }
    ctx->pc = 0x2647A0u;
label_2647a0:
    // 0x2647a0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2647a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2647a4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2647a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2647a8: 0xa31025  or          $v0, $a1, $v1
    ctx->pc = 0x2647a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2647ac: 0x2c420100  sltiu       $v0, $v0, 0x100
    ctx->pc = 0x2647acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2647b0: 0x1040ffe4  beqz        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2647B0u;
    {
        const bool branch_taken_0x2647b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2647B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2647B0u;
        // 0x2647b4: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2647b0) {
            ctx->pc = 0x264744u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_264744;
        }
    }
    ctx->pc = 0x2647B8u;
    // 0x2647b8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2647b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2647bc: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2647bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2647c0: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x2647C0u;
    {
        const bool branch_taken_0x2647c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2647c0) {
            ctx->pc = 0x2647C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2647C0u;
            // 0x2647c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264844u;
            goto label_264844;
        }
    }
    ctx->pc = 0x2647C8u;
    // 0x2647c8: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x2647c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2647cc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2647ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2647d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2647d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2647d4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2647D4u;
    {
        const bool branch_taken_0x2647d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2647D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2647D4u;
        // 0x2647d8: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2647d4) {
            ctx->pc = 0x264818u;
            goto label_264818;
        }
    }
    ctx->pc = 0x2647DCu;
label_2647dc:
    // 0x2647dc: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2647dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2647e0: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x2647e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2647e4: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2647e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2647e8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2647e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2647ec: 0xc71025  or          $v0, $a2, $a3
    ctx->pc = 0x2647ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x2647f0: 0x851825  or          $v1, $a0, $a1
    ctx->pc = 0x2647f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2647f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2647f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2647f8: 0x2c420100  sltiu       $v0, $v0, 0x100
    ctx->pc = 0x2647f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2647fc: 0x1040ffd1  beqz        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x2647FCu;
    {
        const bool branch_taken_0x2647fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2647FCu;
        // 0x264800: 0x61600  sll         $v0, $a2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2647fc) {
            ctx->pc = 0x264744u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_264744;
        }
    }
    ctx->pc = 0x264804u;
    // 0x264804: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x264804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x264808: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x264808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26480c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x26480cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x264810: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x264810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x264814: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x264814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_264818:
    // 0x264818: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x264818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_26481c:
    // 0x26481c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26481Cu;
    {
        const bool branch_taken_0x26481c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x264820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26481Cu;
        // 0x264820: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26481c) {
            ctx->pc = 0x264844u;
            goto label_264844;
        }
    }
    ctx->pc = 0x264824u;
    // 0x264824: 0xc08a254  jal         func_228950
    ctx->pc = 0x264824u;
    SET_GPR_U32(ctx, 31, 0x26482Cu);
    ctx->pc = 0x264828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264824u;
    // 0x264828: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x264824u, 0x26482Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26482Cu;
label_26482c:
    // 0x26482c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x26482cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x264830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x264830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264834: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x264834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x264838: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x264838u;
    SET_GPR_U32(ctx, 31, 0x264840u);
    ctx->pc = 0x26483Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264838u;
    // 0x26483c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x264838u, 0x264840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264840u;
label_264840:
    // 0x264840: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x264840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_264844:
    // 0x264844: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x264844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x264848: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x264848u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26484c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x26484cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x264850: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x264850u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x264854: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x264854u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x264858: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x264858u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26485c: 0x3e00008  jr          $ra
label_264860:
    if (ctx->pc == 0x264860u) {
        ctx->pc = 0x264860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26485Cu;
        // 0x264860: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264864u;
        goto label_fallthrough_0x26485c;
    }
    ctx->pc = 0x26485Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26485Cu;
        // 0x264860: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26485Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x26485c:
    ctx->pc = 0x264864u;
    // 0x264864: 0x0  nop
    ctx->pc = 0x264864u;
    // NOP
}
