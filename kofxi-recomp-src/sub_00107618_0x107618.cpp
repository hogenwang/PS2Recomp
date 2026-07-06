#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00107618
// Address: 0x107618 - 0x108488
void sub_00107618_0x107618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107618_0x107618");
#endif

    switch (ctx->pc) {
        case 0x107688u: goto label_107688;
        case 0x107714u: goto label_107714;
        case 0x107780u: goto label_107780;
        case 0x107798u: goto label_107798;
        case 0x1077bcu: goto label_1077bc;
        case 0x107810u: goto label_107810;
        case 0x107830u: goto label_107830;
        case 0x107838u: goto label_107838;
        case 0x1078a8u: goto label_1078a8;
        case 0x1078ecu: goto label_1078ec;
        case 0x107960u: goto label_107960;
        case 0x107988u: goto label_107988;
        case 0x1079a8u: goto label_1079a8;
        case 0x107a30u: goto label_107a30;
        case 0x107a5cu: goto label_107a5c;
        case 0x107ae0u: goto label_107ae0;
        case 0x107b08u: goto label_107b08;
        case 0x107b10u: goto label_107b10;
        case 0x107b98u: goto label_107b98;
        case 0x107bfcu: goto label_107bfc;
        case 0x107c90u: goto label_107c90;
        case 0x107cb8u: goto label_107cb8;
        case 0x107cf0u: goto label_107cf0;
        case 0x107d90u: goto label_107d90;
        case 0x107db4u: goto label_107db4;
        case 0x107e30u: goto label_107e30;
        case 0x107e50u: goto label_107e50;
        case 0x107e58u: goto label_107e58;
        case 0x107ee0u: goto label_107ee0;
        case 0x107f24u: goto label_107f24;
        case 0x107fc0u: goto label_107fc0;
        case 0x107fe8u: goto label_107fe8;
        case 0x108008u: goto label_108008;
        case 0x1080a8u: goto label_1080a8;
        case 0x1080d4u: goto label_1080d4;
        case 0x108180u: goto label_108180;
        case 0x1081a8u: goto label_1081a8;
        case 0x1081b0u: goto label_1081b0;
        case 0x108250u: goto label_108250;
        case 0x1082b4u: goto label_1082b4;
        case 0x108370u: goto label_108370;
        case 0x108398u: goto label_108398;
        case 0x1083d0u: goto label_1083d0;
        default: break;
    }

    ctx->pc = 0x107618u;

    // 0x107618: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x107618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10761c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10761cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x107620: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x107620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x107624: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x107624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107628: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x107628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10762c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10762cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x107630: 0x8e02087c  lw          $v0, 0x87C($s0)
    ctx->pc = 0x107630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2172)));
    // 0x107634: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x107634u;
    {
        const bool branch_taken_0x107634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x107638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107634u;
            // 0x107638: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107634) {
            ctx->pc = 0x107780u;
            goto label_107780;
        }
    }
    ctx->pc = 0x10763Cu;
    // 0x10763c: 0x8e180820  lw          $t8, 0x820($s0)
    ctx->pc = 0x10763cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x107640: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x107640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x107644: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x107644u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x107648: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x107648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x10764c: 0x3041818  mult        $v1, $t8, $a0
    ctx->pc = 0x10764cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x107650: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x107650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x107654: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x107654u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x107658: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x107658u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10765c: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x10765cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x107660: 0x26435880  addiu       $v1, $s2, 0x5880
    ctx->pc = 0x107660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 22656));
    // 0x107664: 0x8c8c06cc  lw          $t4, 0x6CC($a0)
    ctx->pc = 0x107664u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x107668: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x107668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x10766c: 0x19800026  blez        $t4, . + 4 + (0x26 << 2)
    ctx->pc = 0x10766Cu;
    {
        const bool branch_taken_0x10766c = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x107670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10766Cu;
            // 0x107670: 0x655825  or          $t3, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10766c) {
            ctx->pc = 0x107708u;
            goto label_107708;
        }
    }
    ctx->pc = 0x107674u;
    // 0x107674: 0x260f05a8  addiu       $t7, $s0, 0x5A8
    ctx->pc = 0x107674u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 1448));
    // 0x107678: 0x260e05b8  addiu       $t6, $s0, 0x5B8
    ctx->pc = 0x107678u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 1464));
    // 0x10767c: 0x258dffff  addiu       $t5, $t4, -0x1
    ctx->pc = 0x10767cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x107680: 0x261105a0  addiu       $s1, $s0, 0x5A0
    ctx->pc = 0x107680u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1440));
    // 0x107684: 0x0  nop
    ctx->pc = 0x107684u;
    // NOP
label_107688:
    // 0x107688: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x107688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x10768c: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x10768cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x107690: 0x3042018  mult        $a0, $t8, $a0
    ctx->pc = 0x107690u;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x107694: 0x14d1826  xor         $v1, $t2, $t5
    ctx->pc = 0x107694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 13));
    // 0x107698: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x107698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10769c: 0x3c060fff  lui         $a2, 0xFFF
    ctx->pc = 0x10769cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4095 << 16));
    // 0x1076a0: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x1076a0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x1076a4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1076a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1076a8: 0x3c093000  lui         $t1, 0x3000
    ctx->pc = 0x1076a8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)12288 << 16));
    // 0x1076ac: 0x52f38  dsll        $a1, $a1, 28
    ctx->pc = 0x1076acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 28);
    // 0x1076b0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1076b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1076b4: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x1076b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1076b8: 0x1c22021  addu        $a0, $t6, $v0
    ctx->pc = 0x1076b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x1076bc: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1076bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1076c0: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x1076c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x1076c4: 0x14c402a  slt         $t0, $t2, $t4
    ctx->pc = 0x1076c4u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x1076c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1076c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1076cc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1076ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1076d0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1076d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1076d4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1076d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1076d8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1076d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1076dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1076dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1076e0: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x1076e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x1076e4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1076e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1076e8: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x1076e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x1076ec: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1076ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1076f0: 0xfd630000  sd          $v1, 0x0($t3)
    ctx->pc = 0x1076f0u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 3));
    // 0x1076f4: 0xfd620010  sd          $v0, 0x10($t3)
    ctx->pc = 0x1076f4u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 16), GPR_U64(ctx, 2));
    // 0x1076f8: 0x1500ffe3  bnez        $t0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1076F8u;
    {
        const bool branch_taken_0x1076f8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1076FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1076F8u;
            // 0x1076fc: 0x256b0020  addiu       $t3, $t3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1076f8) {
            ctx->pc = 0x107688u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107688;
        }
    }
    ctx->pc = 0x107700u;
    // 0x107700: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x107700u;
    {
        const bool branch_taken_0x107700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x107700) {
            ctx->pc = 0x10770Cu;
            goto label_10770c;
        }
    }
    ctx->pc = 0x107708u;
label_107708:
    // 0x107708: 0x261105a0  addiu       $s1, $s0, 0x5A0
    ctx->pc = 0x107708u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1440));
label_10770c:
    // 0x10770c: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x10770Cu;
    SET_GPR_U32(ctx, 31, 0x107714u);
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107714u; }
        if (ctx->pc != 0x107714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107714u; }
        if (ctx->pc != 0x107714u) { return; }
    }
    ctx->pc = 0x107714u;
label_107714:
    // 0x107714: 0xf  sync
    ctx->pc = 0x107714u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x107718: 0x8e060820  lw          $a2, 0x820($s0)
    ctx->pc = 0x107718u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x10771c: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x10771cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x107720: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x107720u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x107724: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x107724u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x107728: 0xc32018  mult        $a0, $a2, $v1
    ctx->pc = 0x107728u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x10772c: 0x34e7d480  ori         $a3, $a3, 0xD480
    ctx->pc = 0x10772cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)54400);
    // 0x107730: 0x264a5880  addiu       $t2, $s2, 0x5880
    ctx->pc = 0x107730u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 22656));
    // 0x107734: 0x3508d430  ori         $t0, $t0, 0xD430
    ctx->pc = 0x107734u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)54320);
    // 0x107738: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x107738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10773c: 0x24090105  addiu       $t1, $zero, 0x105
    ctx->pc = 0x10773cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x107740: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x107740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x107744: 0x913021  addu        $a2, $a0, $s1
    ctx->pc = 0x107744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x107748: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x107748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10774c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10774cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x107750: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x107750u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x107754: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x107754u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x107758: 0xad0a0000  sw          $t2, 0x0($t0)
    ctx->pc = 0x107758u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 10));
    // 0x10775c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x10775cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x107760: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x107760u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9)); // MMIO: 0x10000000
    // 0x107764: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x107764u;
    {
        const bool branch_taken_0x107764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107764u;
            // 0x107768: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107764) {
            ctx->pc = 0x107780u;
            goto label_107780;
        }
    }
    ctx->pc = 0x10776Cu;
    // 0x10776c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10776cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107770: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x107770u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107774: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x107774u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107778: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x107778u;
    ctx->pc = 0x10777Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x107778u;
            // 0x10777c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x107780u;
label_107780:
    // 0x107780: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x107780u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107784: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x107784u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107788: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x107788u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10778c: 0x3e00008  jr          $ra
    ctx->pc = 0x10778Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10778Cu;
            // 0x107790: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x107794u;
    // 0x107794: 0x0  nop
    ctx->pc = 0x107794u;
    // NOP
label_107798:
    // 0x107798: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x107798u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10779c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x10779cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1077a0: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1077a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1077a4: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x1077a4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1077a8: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x1077a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1077ac: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1077acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1077b0: 0x5180000  mtsab       $t0, 0x0
    ctx->pc = 0x1077b0u;
    ctx->sa = ((GPR_U32(ctx, 8) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1077b4: 0xc5840  sll         $t3, $t4, 1
    ctx->pc = 0x1077b4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x1077b8: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x1077b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1077bc:
    // 0x1077bc: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x1077bcu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1077c0: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x1077c0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1077c4: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x1077c4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x1077c8: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x1077c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1077cc: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x1077ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x1077d0: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x1077d0u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1077d4: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x1077d4u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x1077d8: 0x700a4ea8  pextub      $t1, $zero, $t2
    ctx->pc = 0x1077d8u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x1077dc: 0x7dc80000  sq          $t0, 0x0($t6)
    ctx->pc = 0x1077dcu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 8));
    // 0x1077e0: 0x7dc90010  sq          $t1, 0x10($t6)
    ctx->pc = 0x1077e0u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 9));
    // 0x1077e4: 0x1ce0fff5  bgtz        $a3, . + 4 + (-0xB << 2)
    ctx->pc = 0x1077E4u;
    {
        const bool branch_taken_0x1077e4 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x1077E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1077E4u;
            // 0x1077e8: 0x1cb7021  addu        $t6, $t6, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1077e4) {
            ctx->pc = 0x1077BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1077bc;
        }
    }
    ctx->pc = 0x1077ECu;
    // 0x1077ec: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1077ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1077f0: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1077f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1077f4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1077f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1077f8: 0x1e75024  and         $t2, $t7, $a3
    ctx->pc = 0x1077f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 15) & GPR_U64(ctx, 7));
    // 0x1077fc: 0x1540ffef  bnez        $t2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1077FCu;
    {
        const bool branch_taken_0x1077fc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x107800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1077FCu;
            // 0x107800: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1077fc) {
            ctx->pc = 0x1077BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1077bc;
        }
    }
    ctx->pc = 0x107804u;
    // 0x107804: 0x3e00008  jr          $ra
    ctx->pc = 0x107804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10780Cu;
    // 0x10780c: 0x0  nop
    ctx->pc = 0x10780cu;
    // NOP
label_107810:
    // 0x107810: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x107810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x107814: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x107814u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x107818: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x107818u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x10781c: 0x8c8d0010  lw          $t5, 0x10($a0)
    ctx->pc = 0x10781cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x107820: 0x8c8c0004  lw          $t4, 0x4($a0)
    ctx->pc = 0x107820u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x107824: 0xd5840  sll         $t3, $t5, 1
    ctx->pc = 0x107824u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x107828: 0x5980000  mtsab       $t4, 0x0
    ctx->pc = 0x107828u;
    ctx->sa = ((GPR_U32(ctx, 12) ^ (uint32_t)0) & 0xF) << 3;
    // 0x10782c: 0x2418ffff  addiu       $t8, $zero, -0x1
    ctx->pc = 0x10782cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_107830:
    // 0x107830: 0x8c8f0008  lw          $t7, 0x8($a0)
    ctx->pc = 0x107830u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x107834: 0x2419ffff  addiu       $t9, $zero, -0x1
    ctx->pc = 0x107834u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_107838:
    // 0x107838: 0xdcc80000  ld          $t0, 0x0($a2)
    ctx->pc = 0x107838u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10783c: 0xdce90000  ld          $t1, 0x0($a3)
    ctx->pc = 0x10783cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x107840: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x107840u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x107844: 0x71084ee8  qfsrv       $t1, $t0, $t0
    ctx->pc = 0x107844u;
    SET_GPR_VEC(ctx, 9, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x107848: 0x70094688  pextlb      $t0, $zero, $t1
    ctx->pc = 0x107848u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x10784c: 0x7ca80000  sq          $t0, 0x0($a1)
    ctx->pc = 0x10784cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 8));
    // 0x107850: 0x21efffff  addi        $t7, $t7, -0x1
    ctx->pc = 0x107850u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 15), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
    // 0x107854: 0xcd3021  addu        $a2, $a2, $t5
    ctx->pc = 0x107854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x107858: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x107858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x10785c: 0x1de0fff6  bgtz        $t7, . + 4 + (-0xA << 2)
    ctx->pc = 0x10785Cu;
    {
        const bool branch_taken_0x10785c = (GPR_S32(ctx, 15) > 0);
        ctx->pc = 0x107860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10785Cu;
            // 0x107860: 0xed3821  addu        $a3, $a3, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10785c) {
            ctx->pc = 0x107838u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107838;
        }
    }
    ctx->pc = 0x107864u;
    // 0x107864: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x107864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x107868: 0x24e70140  addiu       $a3, $a3, 0x140
    ctx->pc = 0x107868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 320));
    // 0x10786c: 0x8c8f000c  lw          $t7, 0xC($a0)
    ctx->pc = 0x10786cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x107870: 0x32f5024  and         $t2, $t9, $t7
    ctx->pc = 0x107870u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 25) & GPR_U64(ctx, 15));
    // 0x107874: 0x1540fff0  bnez        $t2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x107874u;
    {
        const bool branch_taken_0x107874 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x107878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107874u;
            // 0x107878: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107874) {
            ctx->pc = 0x107838u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107838;
        }
    }
    ctx->pc = 0x10787Cu;
    // 0x10787c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x10787cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x107880: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x107880u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x107884: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x107884u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x107888: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x107888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x10788c: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x10788cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x107890: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x107890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x107894: 0x1700ffe6  bnez        $t8, . + 4 + (-0x1A << 2)
    ctx->pc = 0x107894u;
    {
        const bool branch_taken_0x107894 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        ctx->pc = 0x107898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107894u;
            // 0x107898: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107894) {
            ctx->pc = 0x107830u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107830;
        }
    }
    ctx->pc = 0x10789Cu;
    // 0x10789c: 0x3e00008  jr          $ra
    ctx->pc = 0x10789Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1078A4u;
    // 0x1078a4: 0x0  nop
    ctx->pc = 0x1078a4u;
    // NOP
label_1078a8:
    // 0x1078a8: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1078a8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1078ac: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1078acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1078b0: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1078b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1078b4: 0x8c980010  lw          $t8, 0x10($a0)
    ctx->pc = 0x1078b4u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1078b8: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x1078b8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1078bc: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1078bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1078c0: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x1078c0u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1078c4: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x1078c4u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x1078c8: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x1078c8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1078cc: 0x186040  sll         $t4, $t8, 1
    ctx->pc = 0x1078ccu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x1078d0: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x1078d0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1078d4: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1078d4u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1078d8: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x1078d8u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1078dc: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x1078dcu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x1078e0: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x1078e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1078e4: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x1078E4u;
    {
        const bool branch_taken_0x1078e4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1078E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1078E4u;
            // 0x1078e8: 0x700a4ea8  pextub      $t1, $zero, $t2 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1078e4) {
            ctx->pc = 0x10793Cu;
            goto label_10793c;
        }
    }
    ctx->pc = 0x1078ECu;
label_1078ec:
    // 0x1078ec: 0xb82821  addu        $a1, $a1, $t8
    ctx->pc = 0x1078ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x1078f0: 0xd83021  addu        $a2, $a2, $t8
    ctx->pc = 0x1078f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
    // 0x1078f4: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x1078f4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1078f8: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x1078f8u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1078fc: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x1078fcu;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x107900: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x107900u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x107904: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x107904u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x107908: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x107908u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x10790c: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x10790cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x107910: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x107910u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x107914: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x107914u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x107918: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x107918u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x10791c: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x10791cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x107920: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x107920u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x107924: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x107924u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x107928: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x107928u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x10792c: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x10792cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x107930: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x107930u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x107934: 0x1ce0ffed  bgtz        $a3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x107934u;
    {
        const bool branch_taken_0x107934 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x107938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107934u;
            // 0x107938: 0x1cc7021  addu        $t6, $t6, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107934) {
            ctx->pc = 0x1078ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1078ec;
        }
    }
    ctx->pc = 0x10793Cu;
label_10793c:
    // 0x10793c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x10793cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x107940: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x107940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x107944: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x107944u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x107948: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x107948u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x10794c: 0x1540ffe7  bnez        $t2, . + 4 + (-0x19 << 2)
    ctx->pc = 0x10794Cu;
    {
        const bool branch_taken_0x10794c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x107950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10794Cu;
            // 0x107950: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10794c) {
            ctx->pc = 0x1078ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1078ec;
        }
    }
    ctx->pc = 0x107954u;
    // 0x107954: 0x3e00008  jr          $ra
    ctx->pc = 0x107954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10795Cu;
    // 0x10795c: 0x0  nop
    ctx->pc = 0x10795cu;
    // NOP
label_107960:
    // 0x107960: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x107960u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x107964: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x107964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x107968: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x107968u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x10796c: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x10796cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x107970: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x107970u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x107974: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x107974u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x107978: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x107978u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x10797c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x10797cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107980: 0xcc040  sll         $t8, $t4, 1
    ctx->pc = 0x107980u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x107984: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x107984u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_107988:
    // 0x107988: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x107988u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x10798c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x10798cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x107990: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x107990u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x107994: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x107994u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x107998: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x107998u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x10799c: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x10799cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x1079a0: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x1079A0u;
    {
        const bool branch_taken_0x1079a0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1079A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1079A0u;
            // 0x1079a4: 0x70087e88  pextlb      $t7, $zero, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1079a0) {
            ctx->pc = 0x1079E4u;
            goto label_1079e4;
        }
    }
    ctx->pc = 0x1079A8u;
label_1079a8:
    // 0x1079a8: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x1079a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1079ac: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x1079acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x1079b0: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x1079b0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1079b4: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x1079b4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1079b8: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x1079b8u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1079bc: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x1079bcu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1079c0: 0x70085688  pextlb      $t2, $zero, $t0
    ctx->pc = 0x1079c0u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x1079c4: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x1079c4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x1079c8: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x1079c8u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x1079cc: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x1079ccu;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x1079d0: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x1079d0u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x1079d4: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x1079d4u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1079d8: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x1079d8u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x1079dc: 0x1ce0fff2  bgtz        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x1079DCu;
    {
        const bool branch_taken_0x1079dc = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x1079E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1079DCu;
            // 0x1079e0: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1079dc) {
            ctx->pc = 0x1079A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1079a8;
        }
    }
    ctx->pc = 0x1079E4u;
label_1079e4:
    // 0x1079e4: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x1079e4u;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x1079e8: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x1079e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x1079ec: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1079ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1079f0: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x1079f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x1079f4: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x1079f4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x1079f8: 0x1540ffeb  bnez        $t2, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1079F8u;
    {
        const bool branch_taken_0x1079f8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1079FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1079F8u;
            // 0x1079fc: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1079f8) {
            ctx->pc = 0x1079A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1079a8;
        }
    }
    ctx->pc = 0x107A00u;
    // 0x107a00: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x107a00u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x107a04: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x107a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x107a08: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x107a08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x107a0c: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x107a0cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x107a10: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x107a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x107a14: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x107a14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x107a18: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x107a18u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x107a1c: 0x1540ffda  bnez        $t2, . + 4 + (-0x26 << 2)
    ctx->pc = 0x107A1Cu;
    {
        const bool branch_taken_0x107a1c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x107A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107A1Cu;
            // 0x107a20: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107a1c) {
            ctx->pc = 0x107988u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107988;
        }
    }
    ctx->pc = 0x107A24u;
    // 0x107a24: 0x3e00008  jr          $ra
    ctx->pc = 0x107A24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x107A2Cu;
    // 0x107a2c: 0x0  nop
    ctx->pc = 0x107a2cu;
    // NOP
label_107a30:
    // 0x107a30: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x107a30u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x107a34: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x107a34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x107a38: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x107a38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x107a3c: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x107a3cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x107a40: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x107a40u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x107a44: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x107a44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x107a48: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x107a48u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x107a4c: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x107a4cu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x107a50: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x107a50u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107a54: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x107a54u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x107a58: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x107a58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_107a5c:
    // 0x107a5c: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x107a5cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x107a60: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x107a60u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x107a64: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x107a64u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x107a68: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x107a68u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x107a6c: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x107a6cu;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x107a70: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x107a70u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x107a74: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x107a74u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x107a78: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x107a78u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x107a7c: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x107a7cu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x107a80: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x107a80u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x107a84: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x107a84u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x107a88: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x107a88u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x107a8c: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x107a8cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x107a90: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x107a90u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x107a94: 0x71591108  paddh       $v0, $t2, $t9
    ctx->pc = 0x107a94u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x107a98: 0x71f91908  paddh       $v1, $t7, $t9
    ctx->pc = 0x107a98u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x107a9c: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x107a9cu;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x107aa0: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x107aa0u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x107aa4: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x107aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x107aa8: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x107aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x107aac: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x107aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x107ab0: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x107ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x107ab4: 0x1ce0ffe9  bgtz        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x107AB4u;
    {
        const bool branch_taken_0x107ab4 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x107AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107AB4u;
            // 0x107ab8: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ab4) {
            ctx->pc = 0x107A5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107a5c;
        }
    }
    ctx->pc = 0x107ABCu;
    // 0x107abc: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x107abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x107ac0: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x107ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x107ac4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x107ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x107ac8: 0x1676024  and         $t4, $t3, $a3
    ctx->pc = 0x107ac8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x107acc: 0x1580ffe3  bnez        $t4, . + 4 + (-0x1D << 2)
    ctx->pc = 0x107ACCu;
    {
        const bool branch_taken_0x107acc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x107AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107ACCu;
            // 0x107ad0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107acc) {
            ctx->pc = 0x107A5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107a5c;
        }
    }
    ctx->pc = 0x107AD4u;
    // 0x107ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x107AD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x107ADCu;
    // 0x107adc: 0x0  nop
    ctx->pc = 0x107adcu;
    // NOP
label_107ae0:
    // 0x107ae0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x107ae0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x107ae4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x107ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x107ae8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x107ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x107aec: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x107aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x107af0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x107af0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x107af4: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x107af4u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x107af8: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x107af8u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x107afc: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x107afcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107b00: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x107b00u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x107b04: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x107b04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_107b08:
    // 0x107b08: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x107b08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x107b0c: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x107b0cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_107b10:
    // 0x107b10: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x107b10u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x107b14: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x107b14u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x107b18: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x107b18u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x107b1c: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x107b1cu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x107b20: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x107b20u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x107b24: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x107b24u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x107b28: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x107b28u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x107b2c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x107b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x107b30: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x107b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x107b34: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x107b34u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x107b38: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x107b38u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x107b3c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x107b3cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x107b40: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x107b40u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x107b44: 0x71595108  paddh       $t2, $t2, $t9
    ctx->pc = 0x107b44u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x107b48: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x107b48u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x107b4c: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x107b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x107b50: 0x1ce0ffef  bgtz        $a3, . + 4 + (-0x11 << 2)
    ctx->pc = 0x107B50u;
    {
        const bool branch_taken_0x107b50 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x107B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107B50u;
            // 0x107b54: 0x1c27021  addu        $t6, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107b50) {
            ctx->pc = 0x107B10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107b10;
        }
    }
    ctx->pc = 0x107B58u;
    // 0x107b58: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x107b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x107b5c: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x107b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x107b60: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x107b60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x107b64: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x107b64u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x107b68: 0x1540ffe9  bnez        $t2, . + 4 + (-0x17 << 2)
    ctx->pc = 0x107B68u;
    {
        const bool branch_taken_0x107b68 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x107B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107B68u;
            // 0x107b6c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107b68) {
            ctx->pc = 0x107B10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107b10;
        }
    }
    ctx->pc = 0x107B70u;
    // 0x107b70: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x107b70u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x107b74: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x107b74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x107b78: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x107b78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x107b7c: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x107b7cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x107b80: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x107b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x107b84: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x107b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x107b88: 0x1580ffdf  bnez        $t4, . + 4 + (-0x21 << 2)
    ctx->pc = 0x107B88u;
    {
        const bool branch_taken_0x107b88 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x107B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107B88u;
            // 0x107b8c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107b88) {
            ctx->pc = 0x107B08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107b08;
        }
    }
    ctx->pc = 0x107B90u;
    // 0x107b90: 0x3e00008  jr          $ra
    ctx->pc = 0x107B90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x107B98u;
label_107b98:
    // 0x107b98: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x107b98u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x107b9c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x107b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x107ba0: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x107ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x107ba4: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x107ba4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x107ba8: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x107ba8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x107bac: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x107bacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x107bb0: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x107bb0u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x107bb4: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x107bb4u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x107bb8: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x107bb8u;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x107bbc: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x107bbcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107bc0: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x107bc0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x107bc4: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x107bc4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x107bc8: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x107bc8u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x107bcc: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x107bccu;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x107bd0: 0x71097ee8  qfsrv       $t7, $t0, $t1
    ctx->pc = 0x107bd0u;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9), ctx->sa & 0x7F));
    // 0x107bd4: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x107bd4u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x107bd8: 0x700a4ea8  pextub      $t1, $zero, $t2
    ctx->pc = 0x107bd8u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x107bdc: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x107bdcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x107be0: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x107be0u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x107be4: 0x71ea7ee8  qfsrv       $t7, $t7, $t2
    ctx->pc = 0x107be4u;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x107be8: 0x700f5688  pextlb      $t2, $zero, $t7
    ctx->pc = 0x107be8u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x107bec: 0x700f7ea8  pextub      $t7, $zero, $t7
    ctx->pc = 0x107becu;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x107bf0: 0x710a4108  paddh       $t0, $t0, $t2
    ctx->pc = 0x107bf0u;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x107bf4: 0x10e0001e  beqz        $a3, . + 4 + (0x1E << 2)
    ctx->pc = 0x107BF4u;
    {
        const bool branch_taken_0x107bf4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x107BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107BF4u;
            // 0x107bf8: 0x712f4908  paddh       $t1, $t1, $t7 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107bf4) {
            ctx->pc = 0x107C70u;
            goto label_107c70;
        }
    }
    ctx->pc = 0x107BFCu;
label_107bfc:
    // 0x107bfc: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x107bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x107c00: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x107c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x107c04: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x107c04u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x107c08: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x107c08u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x107c0c: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x107c0cu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x107c10: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x107c10u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x107c14: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x107c14u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x107c18: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x107c18u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x107c1c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x107c1cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x107c20: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x107c20u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x107c24: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x107c24u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x107c28: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x107c28u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x107c2c: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x107c2cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x107c30: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x107c30u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x107c34: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x107c34u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x107c38: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x107c38u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x107c3c: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x107c3cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x107c40: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x107c40u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x107c44: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x107c44u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x107c48: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x107c48u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x107c4c: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x107c4cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x107c50: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x107c50u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x107c54: 0x700210b6  psrlh       $v0, $v0, 2
    ctx->pc = 0x107c54u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 2));
    // 0x107c58: 0x700318b6  psrlh       $v1, $v1, 2
    ctx->pc = 0x107c58u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 2));
    // 0x107c5c: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x107c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x107c60: 0xc5040  sll         $t2, $t4, 1
    ctx->pc = 0x107c60u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x107c64: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x107c64u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x107c68: 0x1ce0ffe4  bgtz        $a3, . + 4 + (-0x1C << 2)
    ctx->pc = 0x107C68u;
    {
        const bool branch_taken_0x107c68 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x107C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107C68u;
            // 0x107c6c: 0x1ca7021  addu        $t6, $t6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107c68) {
            ctx->pc = 0x107BFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107bfc;
        }
    }
    ctx->pc = 0x107C70u;
label_107c70:
    // 0x107c70: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x107c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x107c74: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x107c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x107c78: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x107c78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x107c7c: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x107c7cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x107c80: 0x1540ffde  bnez        $t2, . + 4 + (-0x22 << 2)
    ctx->pc = 0x107C80u;
    {
        const bool branch_taken_0x107c80 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x107C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107C80u;
            // 0x107c84: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107c80) {
            ctx->pc = 0x107BFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107bfc;
        }
    }
    ctx->pc = 0x107C88u;
    // 0x107c88: 0x3e00008  jr          $ra
    ctx->pc = 0x107C88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x107C90u;
label_107c90:
    // 0x107c90: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x107c90u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x107c94: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x107c94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x107c98: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x107c98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x107c9c: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x107c9cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x107ca0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x107ca0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x107ca4: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x107ca4u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x107ca8: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x107ca8u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x107cac: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x107cacu;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x107cb0: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x107cb0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107cb4: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x107cb4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_107cb8:
    // 0x107cb8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x107cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x107cbc: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x107cbcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x107cc0: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x107cc0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x107cc4: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x107cc4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x107cc8: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x107cc8u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x107ccc: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x107cccu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x107cd0: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x107cd0u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x107cd4: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x107cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x107cd8: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x107cd8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x107cdc: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x107cdcu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x107ce0: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x107ce0u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x107ce4: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x107ce4u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x107ce8: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x107CE8u;
    {
        const bool branch_taken_0x107ce8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x107CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107CE8u;
            // 0x107cec: 0x71287908  paddh       $t7, $t1, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ce8) {
            ctx->pc = 0x107D44u;
            goto label_107d44;
        }
    }
    ctx->pc = 0x107CF0u;
label_107cf0:
    // 0x107cf0: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x107cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x107cf4: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x107cf4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x107cf8: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x107cf8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x107cfc: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x107cfcu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x107d00: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x107d00u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x107d04: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x107d04u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x107d08: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x107d08u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x107d0c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x107d0cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x107d10: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x107d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x107d14: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x107d14u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x107d18: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x107d18u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x107d1c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x107d1cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x107d20: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x107d20u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x107d24: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x107d24u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x107d28: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x107d28u;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x107d2c: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x107d2cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x107d30: 0xc4040  sll         $t0, $t4, 1
    ctx->pc = 0x107d30u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x107d34: 0x700a50b6  psrlh       $t2, $t2, 2
    ctx->pc = 0x107d34u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 2));
    // 0x107d38: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x107d38u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x107d3c: 0x1ce0ffec  bgtz        $a3, . + 4 + (-0x14 << 2)
    ctx->pc = 0x107D3Cu;
    {
        const bool branch_taken_0x107d3c = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x107D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107D3Cu;
            // 0x107d40: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d3c) {
            ctx->pc = 0x107CF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107cf0;
        }
    }
    ctx->pc = 0x107D44u;
label_107d44:
    // 0x107d44: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x107d44u;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x107d48: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x107d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x107d4c: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x107d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x107d50: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x107d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x107d54: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x107d54u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x107d58: 0x1540ffe5  bnez        $t2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x107D58u;
    {
        const bool branch_taken_0x107d58 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x107D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107D58u;
            // 0x107d5c: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d58) {
            ctx->pc = 0x107CF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107cf0;
        }
    }
    ctx->pc = 0x107D60u;
    // 0x107d60: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x107d60u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x107d64: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x107d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x107d68: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x107d68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x107d6c: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x107d6cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x107d70: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x107d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x107d74: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x107d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x107d78: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x107d78u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x107d7c: 0x1540ffce  bnez        $t2, . + 4 + (-0x32 << 2)
    ctx->pc = 0x107D7Cu;
    {
        const bool branch_taken_0x107d7c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x107D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107D7Cu;
            // 0x107d80: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d7c) {
            ctx->pc = 0x107CB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107cb8;
        }
    }
    ctx->pc = 0x107D84u;
    // 0x107d84: 0x3e00008  jr          $ra
    ctx->pc = 0x107D84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x107D8Cu;
    // 0x107d8c: 0x0  nop
    ctx->pc = 0x107d8cu;
    // NOP
label_107d90:
    // 0x107d90: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x107d90u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x107d94: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x107d94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x107d98: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x107d98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x107d9c: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x107d9cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x107da0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x107da0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x107da4: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x107da4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x107da8: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x107da8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x107dac: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x107dacu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x107db0: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x107db0u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_107db4:
    // 0x107db4: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x107db4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x107db8: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x107db8u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x107dbc: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x107dbcu;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x107dc0: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x107dc0u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x107dc4: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x107dc4u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x107dc8: 0x79c20000  lq          $v0, 0x0($t6)
    ctx->pc = 0x107dc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x107dcc: 0x79c30010  lq          $v1, 0x10($t6)
    ctx->pc = 0x107dccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x107dd0: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x107dd0u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x107dd4: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x107dd4u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x107dd8: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x107dd8u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x107ddc: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x107ddcu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x107de0: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x107de0u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x107de4: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x107de4u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x107de8: 0x70795108  paddh       $t2, $v1, $t9
    ctx->pc = 0x107de8u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x107dec: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x107decu;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x107df0: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x107df0u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x107df4: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x107df4u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x107df8: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x107df8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x107dfc: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x107dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x107e00: 0x1c87021  addu        $t6, $t6, $t0
    ctx->pc = 0x107e00u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x107e04: 0x1ce0ffeb  bgtz        $a3, . + 4 + (-0x15 << 2)
    ctx->pc = 0x107E04u;
    {
        const bool branch_taken_0x107e04 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x107E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107E04u;
            // 0x107e08: 0xc93021  addu        $a2, $a2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e04) {
            ctx->pc = 0x107DB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107db4;
        }
    }
    ctx->pc = 0x107E0Cu;
    // 0x107e0c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x107e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x107e10: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x107e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x107e14: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x107e14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x107e18: 0x1676024  and         $t4, $t3, $a3
    ctx->pc = 0x107e18u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x107e1c: 0x1580ffe5  bnez        $t4, . + 4 + (-0x1B << 2)
    ctx->pc = 0x107E1Cu;
    {
        const bool branch_taken_0x107e1c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x107E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107E1Cu;
            // 0x107e20: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e1c) {
            ctx->pc = 0x107DB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107db4;
        }
    }
    ctx->pc = 0x107E24u;
    // 0x107e24: 0x3e00008  jr          $ra
    ctx->pc = 0x107E24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x107E2Cu;
    // 0x107e2c: 0x0  nop
    ctx->pc = 0x107e2cu;
    // NOP
label_107e30:
    // 0x107e30: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x107e30u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x107e34: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x107e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x107e38: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x107e38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x107e3c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x107e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x107e40: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x107e40u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x107e44: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x107e44u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x107e48: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x107e48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x107e4c: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x107e4cu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_107e50:
    // 0x107e50: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x107e50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x107e54: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x107e54u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_107e58:
    // 0x107e58: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x107e58u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x107e5c: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x107e5cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x107e60: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x107e60u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x107e64: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x107e64u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x107e68: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x107e68u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x107e6c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x107e6cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x107e70: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x107e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x107e74: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x107e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x107e78: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x107e78u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x107e7c: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x107e7cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x107e80: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x107e80u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x107e84: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x107e84u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x107e88: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x107e88u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x107e8c: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x107e8cu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x107e90: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x107e90u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x107e94: 0x1ce0fff0  bgtz        $a3, . + 4 + (-0x10 << 2)
    ctx->pc = 0x107E94u;
    {
        const bool branch_taken_0x107e94 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x107E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107E94u;
            // 0x107e98: 0x1c27021  addu        $t6, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e94) {
            ctx->pc = 0x107E58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107e58;
        }
    }
    ctx->pc = 0x107E9Cu;
    // 0x107e9c: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x107e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x107ea0: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x107ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x107ea4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x107ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x107ea8: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x107ea8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x107eac: 0x1540ffea  bnez        $t2, . + 4 + (-0x16 << 2)
    ctx->pc = 0x107EACu;
    {
        const bool branch_taken_0x107eac = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x107EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107EACu;
            // 0x107eb0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107eac) {
            ctx->pc = 0x107E58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107e58;
        }
    }
    ctx->pc = 0x107EB4u;
    // 0x107eb4: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x107eb4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x107eb8: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x107eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x107ebc: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x107ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x107ec0: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x107ec0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x107ec4: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x107ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x107ec8: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x107ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x107ecc: 0x1580ffe0  bnez        $t4, . + 4 + (-0x20 << 2)
    ctx->pc = 0x107ECCu;
    {
        const bool branch_taken_0x107ecc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x107ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107ECCu;
            // 0x107ed0: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ecc) {
            ctx->pc = 0x107E50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107e50;
        }
    }
    ctx->pc = 0x107ED4u;
    // 0x107ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x107ED4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x107EDCu;
    // 0x107edc: 0x0  nop
    ctx->pc = 0x107edcu;
    // NOP
label_107ee0:
    // 0x107ee0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x107ee0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x107ee4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x107ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x107ee8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x107ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x107eec: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x107eecu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x107ef0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x107ef0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x107ef4: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x107ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x107ef8: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x107ef8u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x107efc: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x107efcu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x107f00: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x107f00u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x107f04: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x107f04u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x107f08: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x107f08u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x107f0c: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x107f0cu;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x107f10: 0xcc040  sll         $t8, $t4, 1
    ctx->pc = 0x107f10u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x107f14: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x107f14u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x107f18: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x107f18u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x107f1c: 0x10e0001f  beqz        $a3, . + 4 + (0x1F << 2)
    ctx->pc = 0x107F1Cu;
    {
        const bool branch_taken_0x107f1c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x107F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107F1Cu;
            // 0x107f20: 0x700a4ea8  pextub      $t1, $zero, $t2 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f1c) {
            ctx->pc = 0x107F9Cu;
            goto label_107f9c;
        }
    }
    ctx->pc = 0x107F24u;
label_107f24:
    // 0x107f24: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x107f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x107f28: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x107f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x107f2c: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x107f2cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x107f30: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x107f30u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x107f34: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x107f34u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x107f38: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x107f38u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x107f3c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x107f3cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x107f40: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x107f40u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x107f44: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x107f44u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x107f48: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x107f48u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x107f4c: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x107f4cu;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x107f50: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x107f50u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x107f54: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x107f54u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x107f58: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x107f58u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x107f5c: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x107f5cu;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x107f60: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x107f60u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x107f64: 0x79ca0000  lq          $t2, 0x0($t6)
    ctx->pc = 0x107f64u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x107f68: 0x79cf0010  lq          $t7, 0x10($t6)
    ctx->pc = 0x107f68u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x107f6c: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x107f6cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x107f70: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x107f70u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x107f74: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x107f74u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x107f78: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x107f78u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x107f7c: 0x70605188  pcgth       $t2, $v1, $zero
    ctx->pc = 0x107f7cu;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x107f80: 0x700a53f6  psrlh       $t2, $t2, 15
    ctx->pc = 0x107f80u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
    // 0x107f84: 0x706a5108  paddh       $t2, $v1, $t2
    ctx->pc = 0x107f84u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
    // 0x107f88: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x107f88u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x107f8c: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x107f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x107f90: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x107f90u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x107f94: 0x1ce0ffe3  bgtz        $a3, . + 4 + (-0x1D << 2)
    ctx->pc = 0x107F94u;
    {
        const bool branch_taken_0x107f94 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x107F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107F94u;
            // 0x107f98: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f94) {
            ctx->pc = 0x107F24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107f24;
        }
    }
    ctx->pc = 0x107F9Cu;
label_107f9c:
    // 0x107f9c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x107f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x107fa0: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x107fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x107fa4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x107fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x107fa8: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x107fa8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x107fac: 0x1540ffdd  bnez        $t2, . + 4 + (-0x23 << 2)
    ctx->pc = 0x107FACu;
    {
        const bool branch_taken_0x107fac = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x107FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107FACu;
            // 0x107fb0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107fac) {
            ctx->pc = 0x107F24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107f24;
        }
    }
    ctx->pc = 0x107FB4u;
    // 0x107fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x107FB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x107FBCu;
    // 0x107fbc: 0x0  nop
    ctx->pc = 0x107fbcu;
    // NOP
label_107fc0:
    // 0x107fc0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x107fc0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x107fc4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x107fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x107fc8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x107fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x107fcc: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x107fccu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x107fd0: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x107fd0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x107fd4: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x107fd4u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x107fd8: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x107fd8u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x107fdc: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x107fdcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107fe0: 0xcc040  sll         $t8, $t4, 1
    ctx->pc = 0x107fe0u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x107fe4: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x107fe4u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
label_107fe8:
    // 0x107fe8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x107fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x107fec: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x107fecu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x107ff0: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x107ff0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x107ff4: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x107ff4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x107ff8: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x107ff8u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x107ffc: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x107ffcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x108000: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x108000u;
    {
        const bool branch_taken_0x108000 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x108004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108000u;
            // 0x108004: 0x70087e88  pextlb      $t7, $zero, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108000) {
            ctx->pc = 0x10805Cu;
            goto label_10805c;
        }
    }
    ctx->pc = 0x108008u;
label_108008:
    // 0x108008: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x108008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x10800c: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x10800cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x108010: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x108010u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x108014: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x108014u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x108018: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x108018u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x10801c: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x10801cu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x108020: 0x70085688  pextlb      $t2, $zero, $t0
    ctx->pc = 0x108020u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x108024: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x108024u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x108028: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x108028u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x10802c: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x10802cu;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x108030: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x108030u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x108034: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x108034u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x108038: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x108038u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x10803c: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x10803cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x108040: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x108040u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x108044: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x108044u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x108048: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x108048u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x10804c: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x10804cu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x108050: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x108050u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x108054: 0x1ce0ffec  bgtz        $a3, . + 4 + (-0x14 << 2)
    ctx->pc = 0x108054u;
    {
        const bool branch_taken_0x108054 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x108058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108054u;
            // 0x108058: 0x1d87021  addu        $t6, $t6, $t8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108054) {
            ctx->pc = 0x108008u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_108008;
        }
    }
    ctx->pc = 0x10805Cu;
label_10805c:
    // 0x10805c: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x10805cu;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x108060: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x108060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x108064: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x108064u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x108068: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x108068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x10806c: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x10806cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x108070: 0x1540ffe5  bnez        $t2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x108070u;
    {
        const bool branch_taken_0x108070 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x108074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108070u;
            // 0x108074: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x108070) {
            ctx->pc = 0x108008u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_108008;
        }
    }
    ctx->pc = 0x108078u;
    // 0x108078: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x108078u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10807c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x10807cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x108080: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x108080u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x108084: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x108084u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x108088: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x108088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x10808c: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x10808cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x108090: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x108090u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x108094: 0x1540ffd4  bnez        $t2, . + 4 + (-0x2C << 2)
    ctx->pc = 0x108094u;
    {
        const bool branch_taken_0x108094 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x108098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108094u;
            // 0x108098: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x108094) {
            ctx->pc = 0x107FE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_107fe8;
        }
    }
    ctx->pc = 0x10809Cu;
    // 0x10809c: 0x3e00008  jr          $ra
    ctx->pc = 0x10809Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1080A4u;
    // 0x1080a4: 0x0  nop
    ctx->pc = 0x1080a4u;
    // NOP
label_1080a8:
    // 0x1080a8: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1080a8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1080ac: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1080acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1080b0: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1080b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1080b4: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x1080b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1080b8: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x1080b8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1080bc: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1080bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1080c0: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x1080c0u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1080c4: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x1080c4u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x1080c8: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x1080c8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1080cc: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x1080ccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x1080d0: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x1080d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1080d4:
    // 0x1080d4: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x1080d4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1080d8: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x1080d8u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1080dc: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1080dcu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1080e0: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x1080e0u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x1080e4: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x1080e4u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x1080e8: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x1080e8u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1080ec: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x1080ecu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x1080f0: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x1080f0u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1080f4: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x1080f4u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1080f8: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x1080f8u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x1080fc: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x1080fcu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x108100: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x108100u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x108104: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x108104u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x108108: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x108108u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x10810c: 0x71591108  paddh       $v0, $t2, $t9
    ctx->pc = 0x10810cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x108110: 0x71f91908  paddh       $v1, $t7, $t9
    ctx->pc = 0x108110u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x108114: 0x70021076  psrlh       $v0, $v0, 1
    ctx->pc = 0x108114u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 1));
    // 0x108118: 0x70031876  psrlh       $v1, $v1, 1
    ctx->pc = 0x108118u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 1));
    // 0x10811c: 0x79ca0000  lq          $t2, 0x0($t6)
    ctx->pc = 0x10811cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x108120: 0x79cf0010  lq          $t7, 0x10($t6)
    ctx->pc = 0x108120u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x108124: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x108124u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x108128: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x108128u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x10812c: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x10812cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x108130: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x108130u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x108134: 0x70605188  pcgth       $t2, $v1, $zero
    ctx->pc = 0x108134u;
    SET_GPR_VEC(ctx, 10, PS2_PCGTH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x108138: 0x700a53f6  psrlh       $t2, $t2, 15
    ctx->pc = 0x108138u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 15));
    // 0x10813c: 0x706a5108  paddh       $t2, $v1, $t2
    ctx->pc = 0x10813cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
    // 0x108140: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x108140u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x108144: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x108144u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x108148: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x108148u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x10814c: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x10814cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x108150: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x108150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x108154: 0x1ce0ffdf  bgtz        $a3, . + 4 + (-0x21 << 2)
    ctx->pc = 0x108154u;
    {
        const bool branch_taken_0x108154 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x108158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108154u;
            // 0x108158: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108154) {
            ctx->pc = 0x1080D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1080d4;
        }
    }
    ctx->pc = 0x10815Cu;
    // 0x10815c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x10815cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x108160: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x108160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x108164: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x108164u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x108168: 0x1676024  and         $t4, $t3, $a3
    ctx->pc = 0x108168u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x10816c: 0x1580ffd9  bnez        $t4, . + 4 + (-0x27 << 2)
    ctx->pc = 0x10816Cu;
    {
        const bool branch_taken_0x10816c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x108170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10816Cu;
            // 0x108170: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10816c) {
            ctx->pc = 0x1080D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1080d4;
        }
    }
    ctx->pc = 0x108174u;
    // 0x108174: 0x3e00008  jr          $ra
    ctx->pc = 0x108174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10817Cu;
    // 0x10817c: 0x0  nop
    ctx->pc = 0x10817cu;
    // NOP
label_108180:
    // 0x108180: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x108180u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x108184: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x108184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x108188: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x108188u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x10818c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x10818cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x108190: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x108190u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x108194: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x108194u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x108198: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x108198u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x10819c: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x10819cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1081a0: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x1081a0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1081a4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1081a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1081a8:
    // 0x1081a8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1081a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1081ac: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x1081acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1081b0:
    // 0x1081b0: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x1081b0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1081b4: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x1081b4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1081b8: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x1081b8u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1081bc: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1081bcu;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1081c0: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x1081c0u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1081c4: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x1081c4u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x1081c8: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x1081c8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x1081cc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1081ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1081d0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1081d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1081d4: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x1081d4u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1081d8: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x1081d8u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1081dc: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x1081dcu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x1081e0: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x1081e0u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1081e4: 0x71595108  paddh       $t2, $t2, $t9
    ctx->pc = 0x1081e4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x1081e8: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x1081e8u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x1081ec: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x1081ecu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1081f0: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x1081f0u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x1081f4: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x1081f4u;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x1081f8: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x1081f8u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x1081fc: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x1081fcu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x108200: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x108200u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x108204: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x108204u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x108208: 0x1ce0ffe9  bgtz        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x108208u;
    {
        const bool branch_taken_0x108208 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x10820Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108208u;
            // 0x10820c: 0x1c27021  addu        $t6, $t6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108208) {
            ctx->pc = 0x1081B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1081b0;
        }
    }
    ctx->pc = 0x108210u;
    // 0x108210: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x108210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x108214: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x108214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x108218: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x108218u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x10821c: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x10821cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x108220: 0x1540ffe3  bnez        $t2, . + 4 + (-0x1D << 2)
    ctx->pc = 0x108220u;
    {
        const bool branch_taken_0x108220 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x108224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108220u;
            // 0x108224: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108220) {
            ctx->pc = 0x1081B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1081b0;
        }
    }
    ctx->pc = 0x108228u;
    // 0x108228: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x108228u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10822c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x10822cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x108230: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x108230u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x108234: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x108234u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x108238: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x108238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x10823c: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x10823cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x108240: 0x1580ffd9  bnez        $t4, . + 4 + (-0x27 << 2)
    ctx->pc = 0x108240u;
    {
        const bool branch_taken_0x108240 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x108244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108240u;
            // 0x108244: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108240) {
            ctx->pc = 0x1081A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1081a8;
        }
    }
    ctx->pc = 0x108248u;
    // 0x108248: 0x3e00008  jr          $ra
    ctx->pc = 0x108248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x108250u;
label_108250:
    // 0x108250: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x108250u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x108254: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x108254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x108258: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x108258u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x10825c: 0x8c980010  lw          $t8, 0x10($a0)
    ctx->pc = 0x10825cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x108260: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x108260u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x108264: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x108264u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x108268: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x108268u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x10826c: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x10826cu;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x108270: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x108270u;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x108274: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x108274u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108278: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x108278u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10827c: 0x78c90000  lq          $t1, 0x0($a2)
    ctx->pc = 0x10827cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x108280: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x108280u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x108284: 0x712856e8  qfsrv       $t2, $t1, $t0
    ctx->pc = 0x108284u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x108288: 0x71097ee8  qfsrv       $t7, $t0, $t1
    ctx->pc = 0x108288u;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9), ctx->sa & 0x7F));
    // 0x10828c: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x10828cu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x108290: 0x700a4ea8  pextub      $t1, $zero, $t2
    ctx->pc = 0x108290u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x108294: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x108294u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x108298: 0x5980000  mtsab       $t4, 0x0
    ctx->pc = 0x108298u;
    ctx->sa = ((GPR_U32(ctx, 12) ^ (uint32_t)0) & 0xF) << 3;
    // 0x10829c: 0x71ea7ee8  qfsrv       $t7, $t7, $t2
    ctx->pc = 0x10829cu;
    SET_GPR_VEC(ctx, 15, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x1082a0: 0x700f5688  pextlb      $t2, $zero, $t7
    ctx->pc = 0x1082a0u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x1082a4: 0x700f7ea8  pextub      $t7, $zero, $t7
    ctx->pc = 0x1082a4u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 15)));
    // 0x1082a8: 0x710a4108  paddh       $t0, $t0, $t2
    ctx->pc = 0x1082a8u;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x1082ac: 0x10e00028  beqz        $a3, . + 4 + (0x28 << 2)
    ctx->pc = 0x1082ACu;
    {
        const bool branch_taken_0x1082ac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1082B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1082ACu;
            // 0x1082b0: 0x712f4908  paddh       $t1, $t1, $t7 (Delay Slot)
        SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1082ac) {
            ctx->pc = 0x108350u;
            goto label_108350;
        }
    }
    ctx->pc = 0x1082B4u;
label_1082b4:
    // 0x1082b4: 0xb82821  addu        $a1, $a1, $t8
    ctx->pc = 0x1082b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 24)));
    // 0x1082b8: 0xd83021  addu        $a2, $a2, $t8
    ctx->pc = 0x1082b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
    // 0x1082bc: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x1082bcu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1082c0: 0x78cf0000  lq          $t7, 0x0($a2)
    ctx->pc = 0x1082c0u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1082c4: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1082c4u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1082c8: 0x71ea16e8  qfsrv       $v0, $t7, $t2
    ctx->pc = 0x1082c8u;
    SET_GPR_VEC(ctx, 2, PS2_QFSRV(GPR_VEC(ctx, 15), GPR_VEC(ctx, 10), ctx->sa & 0x7F));
    // 0x1082cc: 0x714f1ee8  qfsrv       $v1, $t2, $t7
    ctx->pc = 0x1082ccu;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15), ctx->sa & 0x7F));
    // 0x1082d0: 0x70025688  pextlb      $t2, $zero, $v0
    ctx->pc = 0x1082d0u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1082d4: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x1082d4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x1082d8: 0x70027ea8  pextub      $t7, $zero, $v0
    ctx->pc = 0x1082d8u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1082dc: 0x5980000  mtsab       $t4, 0x0
    ctx->pc = 0x1082dcu;
    ctx->sa = ((GPR_U32(ctx, 12) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1082e0: 0x70621ee8  qfsrv       $v1, $v1, $v0
    ctx->pc = 0x1082e0u;
    SET_GPR_VEC(ctx, 3, PS2_QFSRV(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2), ctx->sa & 0x7F));
    // 0x1082e4: 0x70031688  pextlb      $v0, $zero, $v1
    ctx->pc = 0x1082e4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1082e8: 0x70031ea8  pextub      $v1, $zero, $v1
    ctx->pc = 0x1082e8u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTUB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x1082ec: 0x71425108  paddh       $t2, $t2, $v0
    ctx->pc = 0x1082ecu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
    // 0x1082f0: 0x71e37908  paddh       $t7, $t7, $v1
    ctx->pc = 0x1082f0u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x1082f4: 0x710a1108  paddh       $v0, $t0, $t2
    ctx->pc = 0x1082f4u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 10)));
    // 0x1082f8: 0x712f1908  paddh       $v1, $t1, $t7
    ctx->pc = 0x1082f8u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 15)));
    // 0x1082fc: 0x714044a9  por         $t0, $t2, $zero
    ctx->pc = 0x1082fcu;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x108300: 0x71e04ca9  por         $t1, $t7, $zero
    ctx->pc = 0x108300u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x108304: 0x70591108  paddh       $v0, $v0, $t9
    ctx->pc = 0x108304u;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x108308: 0x70791908  paddh       $v1, $v1, $t9
    ctx->pc = 0x108308u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x10830c: 0x700210b6  psrlh       $v0, $v0, 2
    ctx->pc = 0x10830cu;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 2), 2));
    // 0x108310: 0x700318b6  psrlh       $v1, $v1, 2
    ctx->pc = 0x108310u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 3), 2));
    // 0x108314: 0x79ca0000  lq          $t2, 0x0($t6)
    ctx->pc = 0x108314u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x108318: 0x79cf0010  lq          $t7, 0x10($t6)
    ctx->pc = 0x108318u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x10831c: 0x704a1108  paddh       $v0, $v0, $t2
    ctx->pc = 0x10831cu;
    SET_GPR_VEC(ctx, 2, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x108320: 0x706f1908  paddh       $v1, $v1, $t7
    ctx->pc = 0x108320u;
    SET_GPR_VEC(ctx, 3, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 15)));
    // 0x108324: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x108324u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x108328: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x108328u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x10832c: 0x70595108  paddh       $t2, $v0, $t9
    ctx->pc = 0x10832cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 25)));
    // 0x108330: 0x700a1076  psrlh       $v0, $t2, 1
    ctx->pc = 0x108330u;
    SET_GPR_VEC(ctx, 2, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x108334: 0x70795108  paddh       $t2, $v1, $t9
    ctx->pc = 0x108334u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 3), GPR_VEC(ctx, 25)));
    // 0x108338: 0x700a1876  psrlh       $v1, $t2, 1
    ctx->pc = 0x108338u;
    SET_GPR_VEC(ctx, 3, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x10833c: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x10833cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
    // 0x108340: 0x185040  sll         $t2, $t8, 1
    ctx->pc = 0x108340u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x108344: 0x7dc30010  sq          $v1, 0x10($t6)
    ctx->pc = 0x108344u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 16), GPR_VEC(ctx, 3));
    // 0x108348: 0x1ce0ffda  bgtz        $a3, . + 4 + (-0x26 << 2)
    ctx->pc = 0x108348u;
    {
        const bool branch_taken_0x108348 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x10834Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108348u;
            // 0x10834c: 0x1ca7021  addu        $t6, $t6, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108348) {
            ctx->pc = 0x1082B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1082b4;
        }
    }
    ctx->pc = 0x108350u;
label_108350:
    // 0x108350: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x108350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x108354: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x108354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x108358: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x108358u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x10835c: 0x1675024  and         $t2, $t3, $a3
    ctx->pc = 0x10835cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x108360: 0x1540ffd4  bnez        $t2, . + 4 + (-0x2C << 2)
    ctx->pc = 0x108360u;
    {
        const bool branch_taken_0x108360 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x108364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108360u;
            // 0x108364: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108360) {
            ctx->pc = 0x1082B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1082b4;
        }
    }
    ctx->pc = 0x108368u;
    // 0x108368: 0x3e00008  jr          $ra
    ctx->pc = 0x108368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x108370u;
label_108370:
    // 0x108370: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x108370u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x108374: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x108374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x108378: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x108378u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x10837c: 0x8c8c0010  lw          $t4, 0x10($a0)
    ctx->pc = 0x10837cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x108380: 0x8c8d0004  lw          $t5, 0x4($a0)
    ctx->pc = 0x108380u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x108384: 0x7000cce9  pnor        $t9, $zero, $zero
    ctx->pc = 0x108384u;
    SET_GPR_VEC(ctx, 25, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x108388: 0x7019cbf6  psrlh       $t9, $t9, 15
    ctx->pc = 0x108388u;
    SET_GPR_VEC(ctx, 25, _mm_srli_epi16(GPR_VEC(ctx, 25), 15));
    // 0x10838c: 0x7019c874  psllh       $t9, $t9, 1
    ctx->pc = 0x10838cu;
    SET_GPR_VEC(ctx, 25, _mm_slli_epi16(GPR_VEC(ctx, 25), 1));
    // 0x108390: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x108390u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108394: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x108394u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_108398:
    // 0x108398: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x108398u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x10839c: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x10839cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1083a0: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x1083a0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1083a4: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x1083a4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1083a8: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1083a8u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1083ac: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x1083acu;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1083b0: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x1083b0u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x1083b4: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x1083b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1083b8: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x1083b8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x1083bc: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x1083bcu;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1083c0: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x1083c0u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1083c4: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x1083c4u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x1083c8: 0x10e0001c  beqz        $a3, . + 4 + (0x1C << 2)
    ctx->pc = 0x1083C8u;
    {
        const bool branch_taken_0x1083c8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1083CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1083C8u;
            // 0x1083cc: 0x71287908  paddh       $t7, $t1, $t0 (Delay Slot)
        SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1083c8) {
            ctx->pc = 0x10843Cu;
            goto label_10843c;
        }
    }
    ctx->pc = 0x1083D0u;
label_1083d0:
    // 0x1083d0: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x1083d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x1083d4: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x1083d4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1083d8: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x1083d8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1083dc: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x1083dcu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1083e0: 0x5b80000  mtsab       $t5, 0x0
    ctx->pc = 0x1083e0u;
    ctx->sa = ((GPR_U32(ctx, 13) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1083e4: 0x710846e8  qfsrv       $t0, $t0, $t0
    ctx->pc = 0x1083e4u;
    SET_GPR_VEC(ctx, 8, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1083e8: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x1083e8u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x1083ec: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x1083ecu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x1083f0: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x1083f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1083f4: 0x7180000  mtsab       $t8, 0x0
    ctx->pc = 0x1083f4u;
    ctx->sa = ((GPR_U32(ctx, 24) ^ (uint32_t)0) & 0xF) << 3;
    // 0x1083f8: 0x700856e8  qfsrv       $t2, $zero, $t0
    ctx->pc = 0x1083f8u;
    SET_GPR_VEC(ctx, 10, PS2_QFSRV(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x1083fc: 0x700a4688  pextlb      $t0, $zero, $t2
    ctx->pc = 0x1083fcu;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 10)));
    // 0x108400: 0x71285108  paddh       $t2, $t1, $t0
    ctx->pc = 0x108400u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x108404: 0x714f4908  paddh       $t1, $t2, $t7
    ctx->pc = 0x108404u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 15)));
    // 0x108408: 0x71407ca9  por         $t7, $t2, $zero
    ctx->pc = 0x108408u;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x10840c: 0x71395108  paddh       $t2, $t1, $t9
    ctx->pc = 0x10840cu;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x108410: 0x700a50b6  psrlh       $t2, $t2, 2
    ctx->pc = 0x108410u;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 2));
    // 0x108414: 0x79c80000  lq          $t0, 0x0($t6)
    ctx->pc = 0x108414u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x108418: 0x71485108  paddh       $t2, $t2, $t0
    ctx->pc = 0x108418u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 8)));
    // 0x10841c: 0x71404988  pcgth       $t1, $t2, $zero
    ctx->pc = 0x10841cu;
    SET_GPR_VEC(ctx, 9, PS2_PCGTH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x108420: 0x70094bf6  psrlh       $t1, $t1, 15
    ctx->pc = 0x108420u;
    SET_GPR_VEC(ctx, 9, _mm_srli_epi16(GPR_VEC(ctx, 9), 15));
    // 0x108424: 0x71495108  paddh       $t2, $t2, $t1
    ctx->pc = 0x108424u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x108428: 0xc4040  sll         $t0, $t4, 1
    ctx->pc = 0x108428u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x10842c: 0x700a5076  psrlh       $t2, $t2, 1
    ctx->pc = 0x10842cu;
    SET_GPR_VEC(ctx, 10, _mm_srli_epi16(GPR_VEC(ctx, 10), 1));
    // 0x108430: 0x7dca0000  sq          $t2, 0x0($t6)
    ctx->pc = 0x108430u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 10));
    // 0x108434: 0x1ce0ffe6  bgtz        $a3, . + 4 + (-0x1A << 2)
    ctx->pc = 0x108434u;
    {
        const bool branch_taken_0x108434 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x108438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108434u;
            // 0x108438: 0x1c87021  addu        $t6, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108434) {
            ctx->pc = 0x1083D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1083d0;
        }
    }
    ctx->pc = 0x10843Cu;
label_10843c:
    // 0x10843c: 0x700b53f7  psrah       $t2, $t3, 15
    ctx->pc = 0x10843cu;
    SET_GPR_VEC(ctx, 10, _mm_srai_epi16(GPR_VEC(ctx, 11), 15));
    // 0x108440: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x108440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x108444: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x108444u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x108448: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x108448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x10844c: 0x1475024  and         $t2, $t2, $a3
    ctx->pc = 0x10844cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
    // 0x108450: 0x1540ffdf  bnez        $t2, . + 4 + (-0x21 << 2)
    ctx->pc = 0x108450u;
    {
        const bool branch_taken_0x108450 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x108454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108450u;
            // 0x108454: 0x316b7fff  andi        $t3, $t3, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x108450) {
            ctx->pc = 0x1083D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1083d0;
        }
    }
    ctx->pc = 0x108458u;
    // 0x108458: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x108458u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10845c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x10845cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x108460: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x108460u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x108464: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x108464u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x108468: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x108468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x10846c: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x10846cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x108470: 0x316a0001  andi        $t2, $t3, 0x1
    ctx->pc = 0x108470u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x108474: 0x1540ffc8  bnez        $t2, . + 4 + (-0x38 << 2)
    ctx->pc = 0x108474u;
    {
        const bool branch_taken_0x108474 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x108478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108474u;
            // 0x108478: 0x316bfffe  andi        $t3, $t3, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x108474) {
            ctx->pc = 0x108398u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_108398;
        }
    }
    ctx->pc = 0x10847Cu;
    // 0x10847c: 0x3e00008  jr          $ra
    ctx->pc = 0x10847Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x108484u;
    // 0x108484: 0x0  nop
    ctx->pc = 0x108484u;
    // NOP
    ctx->pc = 0x108488u;
}
