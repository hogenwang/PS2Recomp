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

// Function: sub_00163630
// Address: 0x163630 - 0x163c50
void sub_00163630_0x163630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163630_0x163630");
#endif

    switch (ctx->pc) {
        case 0x163658u: goto label_163658;
        case 0x163668u: goto label_163668;
        case 0x163688u: goto label_163688;
        case 0x1636a8u: goto label_1636a8;
        case 0x1636e0u: goto label_1636e0;
        case 0x16376cu: goto label_16376c;
        case 0x16377cu: goto label_16377c;
        case 0x16378cu: goto label_16378c;
        case 0x1637a0u: goto label_1637a0;
        case 0x1637acu: goto label_1637ac;
        case 0x1637bcu: goto label_1637bc;
        case 0x1637e0u: goto label_1637e0;
        case 0x163814u: goto label_163814;
        case 0x163820u: goto label_163820;
        case 0x163828u: goto label_163828;
        case 0x163838u: goto label_163838;
        case 0x163854u: goto label_163854;
        case 0x163880u: goto label_163880;
        case 0x163898u: goto label_163898;
        case 0x1638e0u: goto label_1638e0;
        case 0x1638e8u: goto label_1638e8;
        case 0x163908u: goto label_163908;
        case 0x163928u: goto label_163928;
        case 0x163968u: goto label_163968;
        case 0x163974u: goto label_163974;
        case 0x163980u: goto label_163980;
        case 0x16399cu: goto label_16399c;
        case 0x1639bcu: goto label_1639bc;
        case 0x1639dcu: goto label_1639dc;
        case 0x163a30u: goto label_163a30;
        case 0x163a6cu: goto label_163a6c;
        case 0x163a78u: goto label_163a78;
        case 0x163a80u: goto label_163a80;
        case 0x163aa0u: goto label_163aa0;
        case 0x163aa8u: goto label_163aa8;
        case 0x163ac8u: goto label_163ac8;
        case 0x163b70u: goto label_163b70;
        case 0x163b94u: goto label_163b94;
        case 0x163b9cu: goto label_163b9c;
        case 0x163ba4u: goto label_163ba4;
        case 0x163bb0u: goto label_163bb0;
        case 0x163bc0u: goto label_163bc0;
        case 0x163be4u: goto label_163be4;
        case 0x163bf4u: goto label_163bf4;
        case 0x163c30u: goto label_163c30;
        case 0x163c38u: goto label_163c38;
        case 0x163c40u: goto label_163c40;
        default: break;
    }

    ctx->pc = 0x163630u;

label_163630:
    // 0x163630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x163630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x163634: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x163634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163638: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x163638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16363c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16363cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x163640: 0xa7a0002e  sh          $zero, 0x2E($sp)
    ctx->pc = 0x163640u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 46), (uint16_t)GPR_U32(ctx, 0));
    // 0x163644: 0x9083036c  lbu         $v1, 0x36C($a0)
    ctx->pc = 0x163644u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 876)));
    // 0x163648: 0x14650012  bne         $v1, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x163648u;
    {
        const bool branch_taken_0x163648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x16364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163648u;
        // 0x16364c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163648) {
            ctx->pc = 0x163694u;
            goto label_163694;
        }
    }
    ctx->pc = 0x163650u;
    // 0x163650: 0xc06001c  jal         func_180070
    ctx->pc = 0x163650u;
    SET_GPR_U32(ctx, 31, 0x163658u);
    ctx->pc = 0x180070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180070u, 0x163650u, 0x163658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163658u;
label_163658:
    // 0x163658: 0x8e020374  lw          $v0, 0x374($s0)
    ctx->pc = 0x163658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 884)));
    // 0x16365c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16365cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163660: 0xc06004c  jal         func_180130
    ctx->pc = 0x163660u;
    SET_GPR_U32(ctx, 31, 0x163668u);
    ctx->pc = 0x163664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163660u;
    // 0x163664: 0xae020518  sw          $v0, 0x518($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180130u, 0x163660u, 0x163668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163668u;
label_163668:
    // 0x163668: 0x8e020494  lw          $v0, 0x494($s0)
    ctx->pc = 0x163668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
    // 0x16366c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16366cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163670: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x163670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x163674: 0xae020494  sw          $v0, 0x494($s0)
    ctx->pc = 0x163674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1172), GPR_U32(ctx, 2));
    // 0x163678: 0x8e020530  lw          $v0, 0x530($s0)
    ctx->pc = 0x163678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1328)));
    // 0x16367c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x16367cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x163680: 0xc06005c  jal         func_180170
    ctx->pc = 0x163680u;
    SET_GPR_U32(ctx, 31, 0x163688u);
    ctx->pc = 0x163684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163680u;
    // 0x163684: 0xae020530  sw          $v0, 0x530($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1328), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180170u, 0x163680u, 0x163688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163688u;
label_163688:
    // 0x163688: 0x97a3002e  lhu         $v1, 0x2E($sp)
    ctx->pc = 0x163688u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 46)));
    // 0x16368c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x16368Cu;
    {
        const bool branch_taken_0x16368c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16368Cu;
        // 0x163690: 0xa6030534  sh          $v1, 0x534($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1332), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16368c) {
            ctx->pc = 0x1637E0u;
            goto label_1637e0;
        }
    }
    ctx->pc = 0x163694u;
label_163694:
    // 0x163694: 0x9203035c  lbu         $v1, 0x35C($s0)
    ctx->pc = 0x163694u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 860)));
    // 0x163698: 0x54650052  bnel        $v1, $a1, . + 4 + (0x52 << 2)
    ctx->pc = 0x163698u;
    {
        const bool branch_taken_0x163698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x163698) {
            ctx->pc = 0x16369Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163698u;
            // 0x16369c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1637E4u;
            goto label_1637e4;
        }
    }
    ctx->pc = 0x1636A0u;
    // 0x1636a0: 0xc06001c  jal         func_180070
    ctx->pc = 0x1636A0u;
    SET_GPR_U32(ctx, 31, 0x1636A8u);
    ctx->pc = 0x180070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180070u, 0x1636A0u, 0x1636A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1636A8u;
label_1636a8:
    // 0x1636a8: 0x8e020364  lw          $v0, 0x364($s0)
    ctx->pc = 0x1636a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
    // 0x1636ac: 0xae020518  sw          $v0, 0x518($s0)
    ctx->pc = 0x1636acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 2));
    // 0x1636b0: 0x92020368  lbu         $v0, 0x368($s0)
    ctx->pc = 0x1636b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x1636b4: 0x28420070  slti        $v0, $v0, 0x70
    ctx->pc = 0x1636b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)112) ? 1 : 0);
    // 0x1636b8: 0x5440003a  bnel        $v0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x1636B8u;
    {
        const bool branch_taken_0x1636b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1636b8) {
            ctx->pc = 0x1636BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1636B8u;
            // 0x1636bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1637A4u;
            goto label_1637a4;
        }
    }
    ctx->pc = 0x1636C0u;
    // 0x1636c0: 0x8e020364  lw          $v0, 0x364($s0)
    ctx->pc = 0x1636c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
    // 0x1636c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1636c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1636c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1636c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1636cc: 0x27a7002e  addiu       $a3, $sp, 0x2E
    ctx->pc = 0x1636ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 46));
    // 0x1636d0: 0xae02051c  sw          $v0, 0x51C($s0)
    ctx->pc = 0x1636d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1308), GPR_U32(ctx, 2));
    // 0x1636d4: 0x92020368  lbu         $v0, 0x368($s0)
    ctx->pc = 0x1636d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x1636d8: 0xc05ff8c  jal         func_17FE30
    ctx->pc = 0x1636D8u;
    SET_GPR_U32(ctx, 31, 0x1636E0u);
    ctx->pc = 0x1636DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1636D8u;
    // 0x1636dc: 0x2446ff90  addiu       $a2, $v0, -0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FE30u, 0x1636D8u, 0x1636E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1636E0u;
label_1636e0:
    // 0x1636e0: 0x97a4002e  lhu         $a0, 0x2E($sp)
    ctx->pc = 0x1636e0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 46)));
    // 0x1636e4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1636e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1636e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1636e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1636ec: 0x3084c000  andi        $a0, $a0, 0xC000
    ctx->pc = 0x1636ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)49152);
    // 0x1636f0: 0x42383  sra         $a0, $a0, 14
    ctx->pc = 0x1636f0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 14));
    // 0x1636f4: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1636F4u;
    {
        const bool branch_taken_0x1636f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1636F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1636F4u;
        // 0x1636f8: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1636f4) {
            ctx->pc = 0x163794u;
            goto label_163794;
        }
    }
    ctx->pc = 0x1636FCu;
    // 0x1636fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1636fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x163700: 0x50830020  beql        $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x163700u;
    {
        const bool branch_taken_0x163700 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x163700) {
            ctx->pc = 0x163704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163700u;
            // 0x163704: 0xa60200f0  sh          $v0, 0xF0($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 240), (uint16_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163784u;
            goto label_163784;
        }
    }
    ctx->pc = 0x163708u;
    // 0x163708: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x163708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16370c: 0x50830019  beql        $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x16370Cu;
    {
        const bool branch_taken_0x16370c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16370c) {
            ctx->pc = 0x163710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16370Cu;
            // 0x163710: 0xa60200f0  sh          $v0, 0xF0($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 240), (uint16_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163774u;
            goto label_163774;
        }
    }
    ctx->pc = 0x163714u;
    // 0x163714: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x163714u;
    {
        const bool branch_taken_0x163714 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x163714) {
            ctx->pc = 0x163718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163714u;
            // 0x163718: 0x8e0300dc  lw          $v1, 0xDC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163724u;
            goto label_163724;
        }
    }
    ctx->pc = 0x16371Cu;
    // 0x16371c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x16371Cu;
    {
        const bool branch_taken_0x16371c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16371c) {
            ctx->pc = 0x1637A0u;
            goto label_1637a0;
        }
    }
    ctx->pc = 0x163724u;
label_163724:
    // 0x163724: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x163724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x163728: 0x2484dbc8  addiu       $a0, $a0, -0x2438
    ctx->pc = 0x163728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958024));
    // 0x16372c: 0x3065000c  andi        $a1, $v1, 0xC
    ctx->pc = 0x16372cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x163730: 0x53082  srl         $a2, $a1, 2
    ctx->pc = 0x163730u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x163734: 0x30630030  andi        $v1, $v1, 0x30
    ctx->pc = 0x163734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48);
    // 0x163738: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x163738u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x16373c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x16373cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x163740: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x163740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x163744: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x163744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x163748: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x163748u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x16374c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x16374cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x163750: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x163750u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x163754: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x163754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x163758: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x163758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16375c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16375cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x163760: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x163760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x163764: 0xc05aafc  jal         func_16ABF0
    ctx->pc = 0x163764u;
    SET_GPR_U32(ctx, 31, 0x16376Cu);
    ctx->pc = 0x163768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163764u;
    // 0x163768: 0xa48200f0  sh          $v0, 0xF0($a0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 4), 240), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16ABF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16ABF0u, 0x163764u, 0x16376Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16376Cu;
label_16376c:
    // 0x16376c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x16376Cu;
    {
        const bool branch_taken_0x16376c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16376c) {
            ctx->pc = 0x1637A0u;
            goto label_1637a0;
        }
    }
    ctx->pc = 0x163774u;
label_163774:
    // 0x163774: 0xc05ac88  jal         func_16B220
    ctx->pc = 0x163774u;
    SET_GPR_U32(ctx, 31, 0x16377Cu);
    ctx->pc = 0x163778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163774u;
    // 0x163778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B220u, 0x163774u, 0x16377Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16377Cu;
label_16377c:
    // 0x16377c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16377Cu;
    {
        const bool branch_taken_0x16377c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16377c) {
            ctx->pc = 0x1637A0u;
            goto label_1637a0;
        }
    }
    ctx->pc = 0x163784u;
label_163784:
    // 0x163784: 0xc05ac88  jal         func_16B220
    ctx->pc = 0x163784u;
    SET_GPR_U32(ctx, 31, 0x16378Cu);
    ctx->pc = 0x163788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163784u;
    // 0x163788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B220u, 0x163784u, 0x16378Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16378Cu;
label_16378c:
    // 0x16378c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16378Cu;
    {
        const bool branch_taken_0x16378c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16378c) {
            ctx->pc = 0x1637A0u;
            goto label_1637a0;
        }
    }
    ctx->pc = 0x163794u;
label_163794:
    // 0x163794: 0xa60200f0  sh          $v0, 0xF0($s0)
    ctx->pc = 0x163794u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 240), (uint16_t)GPR_U32(ctx, 2));
    // 0x163798: 0xc05abcc  jal         func_16AF30
    ctx->pc = 0x163798u;
    SET_GPR_U32(ctx, 31, 0x1637A0u);
    ctx->pc = 0x16379Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163798u;
    // 0x16379c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AF30u, 0x163798u, 0x1637A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1637A0u;
label_1637a0:
    // 0x1637a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1637a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1637a4:
    // 0x1637a4: 0xc06003c  jal         func_1800F0
    ctx->pc = 0x1637A4u;
    SET_GPR_U32(ctx, 31, 0x1637ACu);
    ctx->pc = 0x1800F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1800F0u, 0x1637A4u, 0x1637ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1637ACu;
label_1637ac:
    // 0x1637ac: 0x9206035d  lbu         $a2, 0x35D($s0)
    ctx->pc = 0x1637acu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 861)));
    // 0x1637b0: 0x8e040364  lw          $a0, 0x364($s0)
    ctx->pc = 0x1637b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
    // 0x1637b4: 0xc06008c  jal         func_180230
    ctx->pc = 0x1637B4u;
    SET_GPR_U32(ctx, 31, 0x1637BCu);
    ctx->pc = 0x1637B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1637B4u;
    // 0x1637b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180230u, 0x1637B4u, 0x1637BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1637BCu;
label_1637bc:
    // 0x1637bc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1637BCu;
    {
        const bool branch_taken_0x1637bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1637bc) {
            ctx->pc = 0x1637C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1637BCu;
            // 0x1637c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1637D8u;
            goto label_1637d8;
        }
    }
    ctx->pc = 0x1637C4u;
    // 0x1637c4: 0x8e030494  lw          $v1, 0x494($s0)
    ctx->pc = 0x1637c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
    // 0x1637c8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1637c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1637cc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1637ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1637d0: 0xae020494  sw          $v0, 0x494($s0)
    ctx->pc = 0x1637d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1172), GPR_U32(ctx, 2));
    // 0x1637d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1637d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1637d8:
    // 0x1637d8: 0xc06005c  jal         func_180170
    ctx->pc = 0x1637D8u;
    SET_GPR_U32(ctx, 31, 0x1637E0u);
    ctx->pc = 0x180170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180170u, 0x1637D8u, 0x1637E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1637E0u;
label_1637e0:
    // 0x1637e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1637e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1637e4:
    // 0x1637e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1637e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1637e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1637E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1637ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1637E8u;
        // 0x1637ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1637E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1637F0u;
    // 0x1637f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1637f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1637f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1637f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1637f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1637f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1637fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1637fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x163800: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x163800u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163804: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x163804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x163808: 0x904505f1  lbu         $a1, 0x5F1($v0)
    ctx->pc = 0x163808u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1521)));
    // 0x16380c: 0xc058d7c  jal         func_1635F0
    ctx->pc = 0x16380Cu;
    SET_GPR_U32(ctx, 31, 0x163814u);
    ctx->pc = 0x163810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16380Cu;
    // 0x163810: 0x8c4400dc  lw          $a0, 0xDC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1635F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1635F0u, 0x16380Cu, 0x163814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163814u;
label_163814:
    // 0x163814: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x163814u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x163818: 0xc0627c8  jal         func_189F20
    ctx->pc = 0x163818u;
    SET_GPR_U32(ctx, 31, 0x163820u);
    ctx->pc = 0x16381Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163818u;
    // 0x16381c: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189F20u, 0x163818u, 0x163820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163820u;
label_163820:
    // 0x163820: 0xc062d3c  jal         func_18B4F0
    ctx->pc = 0x163820u;
    SET_GPR_U32(ctx, 31, 0x163828u);
    ctx->pc = 0x163824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163820u;
    // 0x163824: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B4F0u, 0x163820u, 0x163828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163828u;
label_163828:
    // 0x163828: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x163828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x16382c: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x16382cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x163830: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x163830u;
    SET_GPR_U32(ctx, 31, 0x163838u);
    ctx->pc = 0x163834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163830u;
    // 0x163834: 0x22082  srl         $a0, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x163830u, 0x163838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163838u;
label_163838:
    // 0x163838: 0x8203057c  lb          $v1, 0x57C($s0)
    ctx->pc = 0x163838u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1404)));
    // 0x16383c: 0x4620007  bltzl       $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x16383Cu;
    {
        const bool branch_taken_0x16383c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x16383c) {
            ctx->pc = 0x163840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16383Cu;
            // 0x163840: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16385Cu;
            goto label_16385c;
        }
    }
    ctx->pc = 0x163844u;
    // 0x163844: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x163844u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x163848: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x163848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16384c: 0xc055768  jal         func_155DA0
    ctx->pc = 0x16384Cu;
    SET_GPR_U32(ctx, 31, 0x163854u);
    ctx->pc = 0x163850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16384Cu;
    // 0x163850: 0x24843a50  addiu       $a0, $a0, 0x3A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x16384Cu, 0x163854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163854u;
label_163854:
    // 0x163854: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x163854u;
    {
        const bool branch_taken_0x163854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163854u;
        // 0x163858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163854) {
            ctx->pc = 0x1638D8u;
            goto label_1638d8;
        }
    }
    ctx->pc = 0x16385Cu;
label_16385c:
    // 0x16385c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x16385cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x163860: 0x30840030  andi        $a0, $a0, 0x30
    ctx->pc = 0x163860u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)48);
    // 0x163864: 0x42102  srl         $a0, $a0, 4
    ctx->pc = 0x163864u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x163868: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x163868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16386c: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x16386cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x163870: 0x54430012  bnel        $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x163870u;
    {
        const bool branch_taken_0x163870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x163870) {
            ctx->pc = 0x163874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163870u;
            // 0x163874: 0x8e030270  lw          $v1, 0x270($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1638BCu;
            goto label_1638bc;
        }
    }
    ctx->pc = 0x163878u;
    // 0x163878: 0xc05087c  jal         func_1421F0
    ctx->pc = 0x163878u;
    SET_GPR_U32(ctx, 31, 0x163880u);
    ctx->pc = 0x16387Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163878u;
    // 0x16387c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1421F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1421F0u, 0x163878u, 0x163880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163880u;
label_163880:
    // 0x163880: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x163880u;
    {
        const bool branch_taken_0x163880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x163880) {
            ctx->pc = 0x1638D4u;
            goto label_1638d4;
        }
    }
    ctx->pc = 0x163888u;
    // 0x163888: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x163888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x16388c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16388cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163890: 0xc055768  jal         func_155DA0
    ctx->pc = 0x163890u;
    SET_GPR_U32(ctx, 31, 0x163898u);
    ctx->pc = 0x163894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163890u;
    // 0x163894: 0x24843940  addiu       $a0, $a0, 0x3940 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x163890u, 0x163898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163898u;
label_163898:
    // 0x163898: 0x8e030270  lw          $v1, 0x270($s0)
    ctx->pc = 0x163898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
    // 0x16389c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x16389cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1638a0: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x1638a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x1638a4: 0xae030270  sw          $v1, 0x270($s0)
    ctx->pc = 0x1638a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 3));
    // 0x1638a8: 0x960303a4  lhu         $v1, 0x3A4($s0)
    ctx->pc = 0x1638a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 932)));
    // 0x1638ac: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x1638acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x1638b0: 0xa60303a4  sh          $v1, 0x3A4($s0)
    ctx->pc = 0x1638b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 932), (uint16_t)GPR_U32(ctx, 3));
    // 0x1638b4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1638B4u;
    {
        const bool branch_taken_0x1638b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1638B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1638B4u;
        // 0x1638b8: 0xa60200f2  sh          $v0, 0xF2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1638b4) {
            ctx->pc = 0x1638D4u;
            goto label_1638d4;
        }
    }
    ctx->pc = 0x1638BCu;
label_1638bc:
    // 0x1638bc: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x1638bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1638c0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1638c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1638c4: 0xae020270  sw          $v0, 0x270($s0)
    ctx->pc = 0x1638c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 2));
    // 0x1638c8: 0x960203a4  lhu         $v0, 0x3A4($s0)
    ctx->pc = 0x1638c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 932)));
    // 0x1638cc: 0x3042ff7f  andi        $v0, $v0, 0xFF7F
    ctx->pc = 0x1638ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65407);
    // 0x1638d0: 0xa60203a4  sh          $v0, 0x3A4($s0)
    ctx->pc = 0x1638d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 932), (uint16_t)GPR_U32(ctx, 2));
label_1638d4:
    // 0x1638d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1638d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1638d8:
    // 0x1638d8: 0xc058d8c  jal         func_163630
    ctx->pc = 0x1638D8u;
    SET_GPR_U32(ctx, 31, 0x1638E0u);
    ctx->pc = 0x163630u;
    goto label_163630;
    ctx->pc = 0x1638E0u;
label_1638e0:
    // 0x1638e0: 0xc05277c  jal         func_149DF0
    ctx->pc = 0x1638E0u;
    SET_GPR_U32(ctx, 31, 0x1638E8u);
    ctx->pc = 0x1638E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1638E0u;
    // 0x1638e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149DF0u, 0x1638E0u, 0x1638E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1638E8u;
label_1638e8:
    // 0x1638e8: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x1638e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1638ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1638ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1638f0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1638f0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1638f4: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1638F4u;
    {
        const bool branch_taken_0x1638f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1638f4) {
            ctx->pc = 0x1638F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1638F4u;
            // 0x1638f8: 0x960400f2  lhu         $a0, 0xF2($s0) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 242)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163910u;
            goto label_163910;
        }
    }
    ctx->pc = 0x1638FCu;
    // 0x1638fc: 0xa60400f0  sh          $a0, 0xF0($s0)
    ctx->pc = 0x1638fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 240), (uint16_t)GPR_U32(ctx, 4));
    // 0x163900: 0xc05abcc  jal         func_16AF30
    ctx->pc = 0x163900u;
    SET_GPR_U32(ctx, 31, 0x163908u);
    ctx->pc = 0x163904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163900u;
    // 0x163904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AF30u, 0x163900u, 0x163908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163908u;
label_163908:
    // 0x163908: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x163908u;
    {
        const bool branch_taken_0x163908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163908u;
        // 0x16390c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163908) {
            ctx->pc = 0x16392Cu;
            goto label_16392c;
        }
    }
    ctx->pc = 0x163910u;
label_163910:
    // 0x163910: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x163910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x163914: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x163914u;
    {
        const bool branch_taken_0x163914 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x163914) {
            ctx->pc = 0x163928u;
            goto label_163928;
        }
    }
    ctx->pc = 0x16391Cu;
    // 0x16391c: 0xa60400f0  sh          $a0, 0xF0($s0)
    ctx->pc = 0x16391cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 240), (uint16_t)GPR_U32(ctx, 4));
    // 0x163920: 0xc05abcc  jal         func_16AF30
    ctx->pc = 0x163920u;
    SET_GPR_U32(ctx, 31, 0x163928u);
    ctx->pc = 0x163924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163920u;
    // 0x163924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AF30u, 0x163920u, 0x163928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163928u;
label_163928:
    // 0x163928: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x163928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16392c:
    // 0x16392c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16392cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163930: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x163930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163934: 0x3e00008  jr          $ra
    ctx->pc = 0x163934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163934u;
        // 0x163938: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16393Cu;
    // 0x16393c: 0x0  nop
    ctx->pc = 0x16393cu;
    // NOP
    // 0x163940: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x163940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x163944: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x163944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x163948: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x163948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16394c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16394cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x163950: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x163950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163954: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x163954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x163958: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x163958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x16395c: 0x904505f1  lbu         $a1, 0x5F1($v0)
    ctx->pc = 0x16395cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1521)));
    // 0x163960: 0xc058d7c  jal         func_1635F0
    ctx->pc = 0x163960u;
    SET_GPR_U32(ctx, 31, 0x163968u);
    ctx->pc = 0x163964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163960u;
    // 0x163964: 0x8c4400dc  lw          $a0, 0xDC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1635F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1635F0u, 0x163960u, 0x163968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163968u;
label_163968:
    // 0x163968: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x163968u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x16396c: 0xc0627f8  jal         func_189FE0
    ctx->pc = 0x16396Cu;
    SET_GPR_U32(ctx, 31, 0x163974u);
    ctx->pc = 0x163970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16396Cu;
    // 0x163970: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189FE0u, 0x16396Cu, 0x163974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163974u;
label_163974:
    // 0x163974: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x163974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163978: 0xc062d3c  jal         func_18B4F0
    ctx->pc = 0x163978u;
    SET_GPR_U32(ctx, 31, 0x163980u);
    ctx->pc = 0x16397Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163978u;
    // 0x16397c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B4F0u, 0x163978u, 0x163980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163980u;
label_163980:
    // 0x163980: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x163980u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x163984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x163984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163988: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x163988u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x16398c: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x16398cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x163990: 0x9222008c  lbu         $v0, 0x8C($s1)
    ctx->pc = 0x163990u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x163994: 0xc05277c  jal         func_149DF0
    ctx->pc = 0x163994u;
    SET_GPR_U32(ctx, 31, 0x16399Cu);
    ctx->pc = 0x163998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163994u;
    // 0x163998: 0xa202008c  sb          $v0, 0x8C($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149DF0u, 0x163994u, 0x16399Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16399Cu;
label_16399c:
    // 0x16399c: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x16399cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1639a0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1639a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1639a4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1639a4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1639a8: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1639A8u;
    {
        const bool branch_taken_0x1639a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1639a8) {
            ctx->pc = 0x1639ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1639A8u;
            // 0x1639ac: 0x960400f2  lhu         $a0, 0xF2($s0) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 242)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1639C4u;
            goto label_1639c4;
        }
    }
    ctx->pc = 0x1639B0u;
    // 0x1639b0: 0xa60400f0  sh          $a0, 0xF0($s0)
    ctx->pc = 0x1639b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 240), (uint16_t)GPR_U32(ctx, 4));
    // 0x1639b4: 0xc05abcc  jal         func_16AF30
    ctx->pc = 0x1639B4u;
    SET_GPR_U32(ctx, 31, 0x1639BCu);
    ctx->pc = 0x1639B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1639B4u;
    // 0x1639b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AF30u, 0x1639B4u, 0x1639BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1639BCu;
label_1639bc:
    // 0x1639bc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1639BCu;
    {
        const bool branch_taken_0x1639bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1639C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1639BCu;
        // 0x1639c0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1639bc) {
            ctx->pc = 0x163A34u;
            goto label_163a34;
        }
    }
    ctx->pc = 0x1639C4u;
label_1639c4:
    // 0x1639c4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1639c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1639c8: 0x50830005  beql        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1639C8u;
    {
        const bool branch_taken_0x1639c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1639c8) {
            ctx->pc = 0x1639CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1639C8u;
            // 0x1639cc: 0x8e23048c  lw          $v1, 0x48C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1639E0u;
            goto label_1639e0;
        }
    }
    ctx->pc = 0x1639D0u;
    // 0x1639d0: 0xa60400f0  sh          $a0, 0xF0($s0)
    ctx->pc = 0x1639d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 240), (uint16_t)GPR_U32(ctx, 4));
    // 0x1639d4: 0xc05abcc  jal         func_16AF30
    ctx->pc = 0x1639D4u;
    SET_GPR_U32(ctx, 31, 0x1639DCu);
    ctx->pc = 0x1639D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1639D4u;
    // 0x1639d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AF30u, 0x1639D4u, 0x1639DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1639DCu;
label_1639dc:
    // 0x1639dc: 0x8e23048c  lw          $v1, 0x48C($s1)
    ctx->pc = 0x1639dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1164)));
label_1639e0:
    // 0x1639e0: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x1639e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1639e4: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1639E4u;
    {
        const bool branch_taken_0x1639e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1639e4) {
            ctx->pc = 0x1639E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1639E4u;
            // 0x1639e8: 0x8e030270  lw          $v1, 0x270($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163A08u;
            goto label_163a08;
        }
    }
    ctx->pc = 0x1639ECu;
    // 0x1639ec: 0x8e030270  lw          $v1, 0x270($s0)
    ctx->pc = 0x1639ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
    // 0x1639f0: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x1639f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x1639f4: 0xae030270  sw          $v1, 0x270($s0)
    ctx->pc = 0x1639f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 3));
    // 0x1639f8: 0x960303a4  lhu         $v1, 0x3A4($s0)
    ctx->pc = 0x1639f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 932)));
    // 0x1639fc: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x1639fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x163a00: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x163A00u;
    {
        const bool branch_taken_0x163a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A00u;
        // 0x163a04: 0xa60303a4  sh          $v1, 0x3A4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 932), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163a00) {
            ctx->pc = 0x163A30u;
            goto label_163a30;
        }
    }
    ctx->pc = 0x163A08u;
label_163a08:
    // 0x163a08: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x163a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x163a0c: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x163a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x163a10: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x163a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163a14: 0x248437f0  addiu       $a0, $a0, 0x37F0
    ctx->pc = 0x163a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14320));
    // 0x163a18: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x163a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x163a1c: 0xae020270  sw          $v0, 0x270($s0)
    ctx->pc = 0x163a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 2));
    // 0x163a20: 0x960203a4  lhu         $v0, 0x3A4($s0)
    ctx->pc = 0x163a20u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 932)));
    // 0x163a24: 0x3042ff7f  andi        $v0, $v0, 0xFF7F
    ctx->pc = 0x163a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65407);
    // 0x163a28: 0xc055768  jal         func_155DA0
    ctx->pc = 0x163A28u;
    SET_GPR_U32(ctx, 31, 0x163A30u);
    ctx->pc = 0x163A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163A28u;
    // 0x163a2c: 0xa60203a4  sh          $v0, 0x3A4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 932), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x163A28u, 0x163A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163A30u;
label_163a30:
    // 0x163a30: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x163a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_163a34:
    // 0x163a34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x163a34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x163a38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x163a38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163a3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x163a3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163a40: 0x3e00008  jr          $ra
    ctx->pc = 0x163A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A40u;
        // 0x163a44: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163A48u;
    // 0x163a48: 0x0  nop
    ctx->pc = 0x163a48u;
    // NOP
    // 0x163a4c: 0x0  nop
    ctx->pc = 0x163a4cu;
    // NOP
    // 0x163a50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x163a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x163a54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x163a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x163a58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x163a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x163a5c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x163a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x163a60: 0x904505f1  lbu         $a1, 0x5F1($v0)
    ctx->pc = 0x163a60u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1521)));
    // 0x163a64: 0xc058d7c  jal         func_1635F0
    ctx->pc = 0x163A64u;
    SET_GPR_U32(ctx, 31, 0x163A6Cu);
    ctx->pc = 0x163A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163A64u;
    // 0x163a68: 0x8c4400dc  lw          $a0, 0xDC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1635F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1635F0u, 0x163A64u, 0x163A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163A6Cu;
label_163a6c:
    // 0x163a6c: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x163a6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x163a70: 0xc0627c8  jal         func_189F20
    ctx->pc = 0x163A70u;
    SET_GPR_U32(ctx, 31, 0x163A78u);
    ctx->pc = 0x163A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163A70u;
    // 0x163a74: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189F20u, 0x163A70u, 0x163A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163A78u;
label_163a78:
    // 0x163a78: 0xc062d3c  jal         func_18B4F0
    ctx->pc = 0x163A78u;
    SET_GPR_U32(ctx, 31, 0x163A80u);
    ctx->pc = 0x163A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163A78u;
    // 0x163a7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B4F0u, 0x163A78u, 0x163A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163A80u;
label_163a80:
    // 0x163a80: 0x8e020270  lw          $v0, 0x270($s0)
    ctx->pc = 0x163a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
    // 0x163a84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x163a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163a88: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x163a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x163a8c: 0xae020270  sw          $v0, 0x270($s0)
    ctx->pc = 0x163a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 2));
    // 0x163a90: 0x960203a4  lhu         $v0, 0x3A4($s0)
    ctx->pc = 0x163a90u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 932)));
    // 0x163a94: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x163a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x163a98: 0xc058d8c  jal         func_163630
    ctx->pc = 0x163A98u;
    SET_GPR_U32(ctx, 31, 0x163AA0u);
    ctx->pc = 0x163A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163A98u;
    // 0x163a9c: 0xa60203a4  sh          $v0, 0x3A4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 932), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163630u;
    goto label_163630;
    ctx->pc = 0x163AA0u;
label_163aa0:
    // 0x163aa0: 0xc05277c  jal         func_149DF0
    ctx->pc = 0x163AA0u;
    SET_GPR_U32(ctx, 31, 0x163AA8u);
    ctx->pc = 0x163AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163AA0u;
    // 0x163aa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149DF0u, 0x163AA0u, 0x163AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163AA8u;
label_163aa8:
    // 0x163aa8: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x163aa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x163aac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x163aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x163ab0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x163ab0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x163ab4: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x163AB4u;
    {
        const bool branch_taken_0x163ab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x163ab4) {
            ctx->pc = 0x163AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163AB4u;
            // 0x163ab8: 0x8203057c  lb          $v1, 0x57C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1404)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163AD0u;
            goto label_163ad0;
        }
    }
    ctx->pc = 0x163ABCu;
    // 0x163abc: 0xa60400f0  sh          $a0, 0xF0($s0)
    ctx->pc = 0x163abcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 240), (uint16_t)GPR_U32(ctx, 4));
    // 0x163ac0: 0xc05abcc  jal         func_16AF30
    ctx->pc = 0x163AC0u;
    SET_GPR_U32(ctx, 31, 0x163AC8u);
    ctx->pc = 0x163AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163AC0u;
    // 0x163ac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AF30u, 0x163AC0u, 0x163AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163AC8u;
label_163ac8:
    // 0x163ac8: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x163AC8u;
    {
        const bool branch_taken_0x163ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163AC8u;
        // 0x163acc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ac8) {
            ctx->pc = 0x163B74u;
            goto label_163b74;
        }
    }
    ctx->pc = 0x163AD0u;
label_163ad0:
    // 0x163ad0: 0x54600013  bnel        $v1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x163AD0u;
    {
        const bool branch_taken_0x163ad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x163ad0) {
            ctx->pc = 0x163AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163AD0u;
            // 0x163ad4: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163B20u;
            goto label_163b20;
        }
    }
    ctx->pc = 0x163AD8u;
    // 0x163ad8: 0x8e040270  lw          $a0, 0x270($s0)
    ctx->pc = 0x163ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
    // 0x163adc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x163adcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x163ae0: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x163ae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x163ae4: 0xae040270  sw          $a0, 0x270($s0)
    ctx->pc = 0x163ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 4));
    // 0x163ae8: 0x960403a4  lhu         $a0, 0x3A4($s0)
    ctx->pc = 0x163ae8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 932)));
    // 0x163aec: 0x34840080  ori         $a0, $a0, 0x80
    ctx->pc = 0x163aecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    // 0x163af0: 0xa60403a4  sh          $a0, 0x3A4($s0)
    ctx->pc = 0x163af0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 932), (uint16_t)GPR_U32(ctx, 4));
    // 0x163af4: 0x8e040494  lw          $a0, 0x494($s0)
    ctx->pc = 0x163af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
    // 0x163af8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x163af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x163afc: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x163AFCu;
    {
        const bool branch_taken_0x163afc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x163afc) {
            ctx->pc = 0x163B00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163AFCu;
            // 0x163b00: 0x8e040494  lw          $a0, 0x494($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163B10u;
            goto label_163b10;
        }
    }
    ctx->pc = 0x163B04u;
    // 0x163b04: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x163b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x163b08: 0xa60300f2  sh          $v1, 0xF2($s0)
    ctx->pc = 0x163b08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 3));
    // 0x163b0c: 0x8e040494  lw          $a0, 0x494($s0)
    ctx->pc = 0x163b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
label_163b10:
    // 0x163b10: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x163b10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x163b14: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x163b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x163b18: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x163B18u;
    {
        const bool branch_taken_0x163b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B18u;
        // 0x163b1c: 0xae030494  sw          $v1, 0x494($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163b18) {
            ctx->pc = 0x163B54u;
            goto label_163b54;
        }
    }
    ctx->pc = 0x163B20u;
label_163b20:
    // 0x163b20: 0xa203057c  sb          $v1, 0x57C($s0)
    ctx->pc = 0x163b20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1404), (uint8_t)GPR_U32(ctx, 3));
    // 0x163b24: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x163b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x163b28: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x163b28u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x163b2c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x163b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x163b30: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x163B30u;
    {
        const bool branch_taken_0x163b30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x163b30) {
            ctx->pc = 0x163B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163B30u;
            // 0x163b34: 0x8e030270  lw          $v1, 0x270($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163B4Cu;
            goto label_163b4c;
        }
    }
    ctx->pc = 0x163B38u;
    // 0x163b38: 0x8e040270  lw          $a0, 0x270($s0)
    ctx->pc = 0x163b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
    // 0x163b3c: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x163b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x163b40: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x163b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x163b44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x163B44u;
    {
        const bool branch_taken_0x163b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B44u;
        // 0x163b48: 0xae030270  sw          $v1, 0x270($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163b44) {
            ctx->pc = 0x163B54u;
            goto label_163b54;
        }
    }
    ctx->pc = 0x163B4Cu;
label_163b4c:
    // 0x163b4c: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x163b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x163b50: 0xae030270  sw          $v1, 0x270($s0)
    ctx->pc = 0x163b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 3));
label_163b54:
    // 0x163b54: 0x960400f2  lhu         $a0, 0xF2($s0)
    ctx->pc = 0x163b54u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 242)));
    // 0x163b58: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x163b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x163b5c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x163B5Cu;
    {
        const bool branch_taken_0x163b5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x163b5c) {
            ctx->pc = 0x163B70u;
            goto label_163b70;
        }
    }
    ctx->pc = 0x163B64u;
    // 0x163b64: 0xa60400f0  sh          $a0, 0xF0($s0)
    ctx->pc = 0x163b64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 240), (uint16_t)GPR_U32(ctx, 4));
    // 0x163b68: 0xc05abcc  jal         func_16AF30
    ctx->pc = 0x163B68u;
    SET_GPR_U32(ctx, 31, 0x163B70u);
    ctx->pc = 0x163B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163B68u;
    // 0x163b6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AF30u, 0x163B68u, 0x163B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163B70u;
label_163b70:
    // 0x163b70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x163b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_163b74:
    // 0x163b74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x163b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163b78: 0x3e00008  jr          $ra
    ctx->pc = 0x163B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B78u;
        // 0x163b7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163B80u;
    // 0x163b80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x163b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x163b84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x163b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x163b88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x163b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x163b8c: 0xc055684  jal         func_155A10
    ctx->pc = 0x163B8Cu;
    SET_GPR_U32(ctx, 31, 0x163B94u);
    ctx->pc = 0x163B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163B8Cu;
    // 0x163b90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x163B8Cu, 0x163B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163B94u;
label_163b94:
    // 0x163b94: 0xc05347c  jal         func_14D1F0
    ctx->pc = 0x163B94u;
    SET_GPR_U32(ctx, 31, 0x163B9Cu);
    ctx->pc = 0x14D1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D1F0u, 0x163B94u, 0x163B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163B9Cu;
label_163b9c:
    // 0x163b9c: 0xc06814c  jal         func_1A0530
    ctx->pc = 0x163B9Cu;
    SET_GPR_U32(ctx, 31, 0x163BA4u);
    ctx->pc = 0x163BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163B9Cu;
    // 0x163ba0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0530u, 0x163B9Cu, 0x163BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163BA4u;
label_163ba4:
    // 0x163ba4: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x163ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x163ba8: 0xc0558d0  jal         func_156340
    ctx->pc = 0x163BA8u;
    SET_GPR_U32(ctx, 31, 0x163BB0u);
    ctx->pc = 0x163BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163BA8u;
    // 0x163bac: 0x2484bb20  addiu       $a0, $a0, -0x44E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x163BA8u, 0x163BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163BB0u;
label_163bb0:
    // 0x163bb0: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x163bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x163bb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x163bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163bb8: 0xc055768  jal         func_155DA0
    ctx->pc = 0x163BB8u;
    SET_GPR_U32(ctx, 31, 0x163BC0u);
    ctx->pc = 0x163BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163BB8u;
    // 0x163bbc: 0x24843bd0  addiu       $a0, $a0, 0x3BD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x163BB8u, 0x163BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163BC0u;
label_163bc0:
    // 0x163bc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x163bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163bc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x163bc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x163BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163BC8u;
        // 0x163bcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163BD0u;
    // 0x163bd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x163bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x163bd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x163bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x163bd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x163bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x163bdc: 0xc068300  jal         func_1A0C00
    ctx->pc = 0x163BDCu;
    SET_GPR_U32(ctx, 31, 0x163BE4u);
    ctx->pc = 0x163BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163BDCu;
    // 0x163be0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0C00u, 0x163BDCu, 0x163BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163BE4u;
label_163be4:
    // 0x163be4: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x163be4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x163be8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x163be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163bec: 0xc055768  jal         func_155DA0
    ctx->pc = 0x163BECu;
    SET_GPR_U32(ctx, 31, 0x163BF4u);
    ctx->pc = 0x163BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163BECu;
    // 0x163bf0: 0x24843c10  addiu       $a0, $a0, 0x3C10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DA0u, 0x163BECu, 0x163BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163BF4u;
label_163bf4:
    // 0x163bf4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x163bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163bf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x163bf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x163BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163BFCu;
        // 0x163c00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163C04u;
    // 0x163c04: 0x0  nop
    ctx->pc = 0x163c04u;
    // NOP
    // 0x163c08: 0x0  nop
    ctx->pc = 0x163c08u;
    // NOP
    // 0x163c0c: 0x0  nop
    ctx->pc = 0x163c0cu;
    // NOP
    // 0x163c10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x163c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x163c14: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x163c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x163c18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x163c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x163c1c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x163c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x163c20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x163c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x163c24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x163c24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163c28: 0xc055684  jal         func_155A10
    ctx->pc = 0x163C28u;
    SET_GPR_U32(ctx, 31, 0x163C30u);
    ctx->pc = 0x163C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163C28u;
    // 0x163c2c: 0xa043d9d0  sb          $v1, -0x2630($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957520), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x163C28u, 0x163C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163C30u;
label_163c30:
    // 0x163c30: 0xc05347c  jal         func_14D1F0
    ctx->pc = 0x163C30u;
    SET_GPR_U32(ctx, 31, 0x163C38u);
    ctx->pc = 0x14D1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D1F0u, 0x163C30u, 0x163C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163C38u;
label_163c38:
    // 0x163c38: 0xc055770  jal         func_155DC0
    ctx->pc = 0x163C38u;
    SET_GPR_U32(ctx, 31, 0x163C40u);
    ctx->pc = 0x163C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163C38u;
    // 0x163c3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155DC0u, 0x163C38u, 0x163C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163C40u;
label_163c40:
    // 0x163c40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x163c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163c44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x163c44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163c48: 0x3e00008  jr          $ra
    ctx->pc = 0x163C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163C48u;
        // 0x163c4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163C50u;
}
