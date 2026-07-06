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

// Function: sub_00301600
// Address: 0x301600 - 0x301890
void sub_00301600_0x301600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301600_0x301600");
#endif

    switch (ctx->pc) {
        case 0x301654u: goto label_301654;
        case 0x30167cu: goto label_30167c;
        case 0x3016e0u: goto label_3016e0;
        case 0x301708u: goto label_301708;
        case 0x301730u: goto label_301730;
        case 0x3017a0u: goto label_3017a0;
        case 0x3017c8u: goto label_3017c8;
        case 0x30180cu: goto label_30180c;
        case 0x301834u: goto label_301834;
        case 0x301854u: goto label_301854;
        case 0x30185cu: goto label_30185c;
        default: break;
    }

    ctx->pc = 0x301600u;

    // 0x301600: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x301600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x301604: 0x24053480  addiu       $a1, $zero, 0x3480
    ctx->pc = 0x301604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13440));
    // 0x301608: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x301608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x30160c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30160cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x301610: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x301610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x301614: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x301614u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x301618: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x301618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x30161c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30161cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301620: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x301620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x301624: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x301624u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301628: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x301628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x30162c: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x30162cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x301630: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x301630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x301634: 0x240b0200  addiu       $t3, $zero, 0x200
    ctx->pc = 0x301634u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x301638: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x301638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30163c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30163cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x301640: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x301640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x301644: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x301644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301648: 0x3c0401cc  lui         $a0, 0x1CC
    ctx->pc = 0x301648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)460 << 16));
    // 0x30164c: 0xc040532  jal         func_1014C8
    ctx->pc = 0x30164Cu;
    SET_GPR_U32(ctx, 31, 0x301654u);
    ctx->pc = 0x301650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30164Cu;
    // 0x301650: 0x24842180  addiu       $a0, $a0, 0x2180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x30164Cu, 0x301654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301654u;
label_301654:
    // 0x301654: 0x3c0401cc  lui         $a0, 0x1CC
    ctx->pc = 0x301654u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)460 << 16));
    // 0x301658: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x301658u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30165c: 0x24841e80  addiu       $a0, $a0, 0x1E80
    ctx->pc = 0x30165cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7808));
    // 0x301660: 0x24053e80  addiu       $a1, $zero, 0x3E80
    ctx->pc = 0x301660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16000));
    // 0x301664: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x301664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301668: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x301668u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30166c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30166cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301670: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x301670u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301674: 0xc040532  jal         func_1014C8
    ctx->pc = 0x301674u;
    SET_GPR_U32(ctx, 31, 0x30167Cu);
    ctx->pc = 0x301678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301674u;
    // 0x301678: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x301674u, 0x30167Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30167Cu;
label_30167c:
    // 0x30167c: 0x3c0500e3  lui         $a1, 0xE3
    ctx->pc = 0x30167cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)227 << 16));
    // 0x301680: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x301680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x301684: 0x24a5d880  addiu       $a1, $a1, -0x2780
    ctx->pc = 0x301684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957184));
    // 0x301688: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x301688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x30168c: 0xac450ce0  sw          $a1, 0xCE0($v0)
    ctx->pc = 0x30168cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3296), GPR_U32(ctx, 5));
    // 0x301690: 0x24a40400  addiu       $a0, $a1, 0x400
    ctx->pc = 0x301690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1024));
    // 0x301694: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x301694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x301698: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x301698u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x30169c: 0xac440cb0  sw          $a0, 0xCB0($v0)
    ctx->pc = 0x30169cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3248), GPR_U32(ctx, 4));
    // 0x3016a0: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x3016a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x3016a4: 0xac430c58  sw          $v1, 0xC58($v0)
    ctx->pc = 0x3016a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3160), GPR_U32(ctx, 3));
    // 0x3016a8: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x3016a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x3016ac: 0x8c500c80  lw          $s0, 0xC80($v0)
    ctx->pc = 0x3016acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3200)));
    // 0x3016b0: 0x14200031  bnez        $at, . + 4 + (0x31 << 2)
    ctx->pc = 0x3016B0u;
    {
        const bool branch_taken_0x3016b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3016B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3016B0u;
        // 0x3016b4: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3016b0) {
            ctx->pc = 0x301778u;
            goto label_301778;
        }
    }
    ctx->pc = 0x3016B8u;
    // 0x3016b8: 0x3c1301cc  lui         $s3, 0x1CC
    ctx->pc = 0x3016b8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)460 << 16));
    // 0x3016bc: 0x3c1101cc  lui         $s1, 0x1CC
    ctx->pc = 0x3016bcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)460 << 16));
    // 0x3016c0: 0x3c1601cb  lui         $s6, 0x1CB
    ctx->pc = 0x3016c0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)459 << 16));
    // 0x3016c4: 0x3c1701cb  lui         $s7, 0x1CB
    ctx->pc = 0x3016c4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)459 << 16));
    // 0x3016c8: 0x24143680  addiu       $s4, $zero, 0x3680
    ctx->pc = 0x3016c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 13952));
    // 0x3016cc: 0x267321e0  addiu       $s3, $s3, 0x21E0
    ctx->pc = 0x3016ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8672));
    // 0x3016d0: 0x24123e84  addiu       $s2, $zero, 0x3E84
    ctx->pc = 0x3016d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16004));
    // 0x3016d4: 0x26311ee0  addiu       $s1, $s1, 0x1EE0
    ctx->pc = 0x3016d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7904));
    // 0x3016d8: 0x26d60ce4  addiu       $s6, $s6, 0xCE4
    ctx->pc = 0x3016d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 3300));
    // 0x3016dc: 0x26f70cb4  addiu       $s7, $s7, 0xCB4
    ctx->pc = 0x3016dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 3252));
label_3016e0:
    // 0x3016e0: 0x142c3c  dsll32      $a1, $s4, 16
    ctx->pc = 0x3016e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) << (32 + 16));
    // 0x3016e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3016e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3016e8: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x3016e8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x3016ec: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3016ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3016f0: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x3016f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3016f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3016f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3016f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3016f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3016fc: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x3016fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x301700: 0xc040532  jal         func_1014C8
    ctx->pc = 0x301700u;
    SET_GPR_U32(ctx, 31, 0x301708u);
    ctx->pc = 0x301704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301700u;
    // 0x301704: 0x240b0200  addiu       $t3, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x301700u, 0x301708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301708u;
label_301708:
    // 0x301708: 0x122c3c  dsll32      $a1, $s2, 16
    ctx->pc = 0x301708u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 16));
    // 0x30170c: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x30170cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x301710: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x301710u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x301714: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x301714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301718: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x301718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30171c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30171cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301720: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x301720u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301724: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x301724u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301728: 0xc040532  jal         func_1014C8
    ctx->pc = 0x301728u;
    SET_GPR_U32(ctx, 31, 0x301730u);
    ctx->pc = 0x30172Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301728u;
    // 0x30172c: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x301728u, 0x301730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301730u;
label_301730:
    // 0x301730: 0x26020400  addiu       $v0, $s0, 0x400
    ctx->pc = 0x301730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1024));
    // 0x301734: 0xaed00000  sw          $s0, 0x0($s6)
    ctx->pc = 0x301734u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
    // 0x301738: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x301738u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x30173c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x30173cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x301740: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x301740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x301744: 0x26940200  addiu       $s4, $s4, 0x200
    ctx->pc = 0x301744u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 512));
    // 0x301748: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x301748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x30174c: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x30174cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x301750: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x301750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x301754: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x301754u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x301758: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x301758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x30175c: 0x26310060  addiu       $s1, $s1, 0x60
    ctx->pc = 0x30175cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x301760: 0x8c420c58  lw          $v0, 0xC58($v0)
    ctx->pc = 0x301760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3160)));
    // 0x301764: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x301764u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x301768: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x301768u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30176c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x30176Cu;
    {
        const bool branch_taken_0x30176c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x301770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30176Cu;
        // 0x301770: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30176c) {
            ctx->pc = 0x3016E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3016e0;
        }
    }
    ctx->pc = 0x301774u;
    // 0x301774: 0x0  nop
    ctx->pc = 0x301774u;
    // NOP
label_301778:
    // 0x301778: 0x3c0401cc  lui         $a0, 0x1CC
    ctx->pc = 0x301778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)460 << 16));
    // 0x30177c: 0x24841e20  addiu       $a0, $a0, 0x1E20
    ctx->pc = 0x30177cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7712));
    // 0x301780: 0x24053480  addiu       $a1, $zero, 0x3480
    ctx->pc = 0x301780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13440));
    // 0x301784: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x301784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x301788: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x301788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x30178c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30178cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301790: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x301790u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301794: 0x240a0280  addiu       $t2, $zero, 0x280
    ctx->pc = 0x301794u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x301798: 0xc040532  jal         func_1014C8
    ctx->pc = 0x301798u;
    SET_GPR_U32(ctx, 31, 0x3017A0u);
    ctx->pc = 0x30179Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301798u;
    // 0x30179c: 0x240b01e0  addiu       $t3, $zero, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x301798u, 0x3017A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3017A0u;
label_3017a0:
    // 0x3017a0: 0x3c0401cc  lui         $a0, 0x1CC
    ctx->pc = 0x3017a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)460 << 16));
    // 0x3017a4: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x3017a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3017a8: 0x24841dc0  addiu       $a0, $a0, 0x1DC0
    ctx->pc = 0x3017a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7616));
    // 0x3017ac: 0x24053e80  addiu       $a1, $zero, 0x3E80
    ctx->pc = 0x3017acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16000));
    // 0x3017b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3017b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3017b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3017b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3017b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3017b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3017bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3017bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3017c0: 0xc040532  jal         func_1014C8
    ctx->pc = 0x3017C0u;
    SET_GPR_U32(ctx, 31, 0x3017C8u);
    ctx->pc = 0x3017C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3017C0u;
    // 0x3017c4: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x3017C0u, 0x3017C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3017C8u;
label_3017c8:
    // 0x3017c8: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x3017c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x3017cc: 0x3c0401cc  lui         $a0, 0x1CC
    ctx->pc = 0x3017ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)460 << 16));
    // 0x3017d0: 0x8c480c90  lw          $t0, 0xC90($v0)
    ctx->pc = 0x3017d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3216)));
    // 0x3017d4: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x3017d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x3017d8: 0x24841d60  addiu       $a0, $a0, 0x1D60
    ctx->pc = 0x3017d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7520));
    // 0x3017dc: 0x24053480  addiu       $a1, $zero, 0x3480
    ctx->pc = 0x3017dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13440));
    // 0x3017e0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x3017e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3017e4: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x3017e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3017e8: 0xac680cd8  sw          $t0, 0xCD8($v1)
    ctx->pc = 0x3017e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3288), GPR_U32(ctx, 8));
    // 0x3017ec: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x3017ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x3017f0: 0x25030400  addiu       $v1, $t0, 0x400
    ctx->pc = 0x3017f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1024));
    // 0x3017f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3017f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3017f8: 0xac430ca0  sw          $v1, 0xCA0($v0)
    ctx->pc = 0x3017f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3232), GPR_U32(ctx, 3));
    // 0x3017fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3017fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301800: 0x240a0280  addiu       $t2, $zero, 0x280
    ctx->pc = 0x301800u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x301804: 0xc040532  jal         func_1014C8
    ctx->pc = 0x301804u;
    SET_GPR_U32(ctx, 31, 0x30180Cu);
    ctx->pc = 0x301808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301804u;
    // 0x301808: 0x240b01e0  addiu       $t3, $zero, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x301804u, 0x30180Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30180Cu;
label_30180c:
    // 0x30180c: 0x3c0401cc  lui         $a0, 0x1CC
    ctx->pc = 0x30180cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)460 << 16));
    // 0x301810: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x301810u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x301814: 0x24841d00  addiu       $a0, $a0, 0x1D00
    ctx->pc = 0x301814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7424));
    // 0x301818: 0x24053e80  addiu       $a1, $zero, 0x3E80
    ctx->pc = 0x301818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16000));
    // 0x30181c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x30181cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301820: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x301820u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301824: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x301824u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301828: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x301828u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30182c: 0xc040532  jal         func_1014C8
    ctx->pc = 0x30182Cu;
    SET_GPR_U32(ctx, 31, 0x301834u);
    ctx->pc = 0x301830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30182Cu;
    // 0x301830: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x30182Cu, 0x301834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301834u;
label_301834:
    // 0x301834: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x301834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x301838: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x301838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x30183c: 0x8c440c88  lw          $a0, 0xC88($v0)
    ctx->pc = 0x30183cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3208)));
    // 0x301840: 0xac640cd0  sw          $a0, 0xCD0($v1)
    ctx->pc = 0x301840u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3280), GPR_U32(ctx, 4));
    // 0x301844: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x301844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x301848: 0x24830400  addiu       $v1, $a0, 0x400
    ctx->pc = 0x301848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
    // 0x30184c: 0xc0c06b0  jal         func_301AC0
    ctx->pc = 0x30184Cu;
    SET_GPR_U32(ctx, 31, 0x301854u);
    ctx->pc = 0x301850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30184Cu;
    // 0x301850: 0xac430c98  sw          $v1, 0xC98($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 3224), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AC0u, 0x30184Cu, 0x301854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301854u;
label_301854:
    // 0x301854: 0xc0c0808  jal         func_302020
    ctx->pc = 0x301854u;
    SET_GPR_U32(ctx, 31, 0x30185Cu);
    ctx->pc = 0x302020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302020u, 0x301854u, 0x30185Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30185Cu;
label_30185c:
    // 0x30185c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x30185cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x301860: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x301860u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x301864: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x301864u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x301868: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x301868u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30186c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x30186cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x301870: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x301870u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x301874: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x301874u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x301878: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x301878u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30187c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30187cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x301880: 0x3e00008  jr          $ra
    ctx->pc = 0x301880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x301884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301880u;
        // 0x301884: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x301888u;
    // 0x301888: 0x0  nop
    ctx->pc = 0x301888u;
    // NOP
    // 0x30188c: 0x0  nop
    ctx->pc = 0x30188cu;
    // NOP
    if (ctx->pc == 0x30188cu) { ctx->pc = 0x301890u; }
}
