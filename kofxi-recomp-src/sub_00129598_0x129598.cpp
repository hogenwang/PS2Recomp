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

// Function: sub_00129598
// Address: 0x129598 - 0x129708
void sub_00129598_0x129598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129598_0x129598");
#endif

    switch (ctx->pc) {
        case 0x129598u: goto label_129598;
        case 0x12959cu: goto label_12959c;
        case 0x1295a0u: goto label_1295a0;
        case 0x1295a4u: goto label_1295a4;
        case 0x1295a8u: goto label_1295a8;
        case 0x1295acu: goto label_1295ac;
        case 0x1295b0u: goto label_1295b0;
        case 0x1295b4u: goto label_1295b4;
        case 0x1295b8u: goto label_1295b8;
        case 0x1295bcu: goto label_1295bc;
        case 0x1295c0u: goto label_1295c0;
        case 0x1295c4u: goto label_1295c4;
        case 0x1295c8u: goto label_1295c8;
        case 0x1295ccu: goto label_1295cc;
        case 0x1295d0u: goto label_1295d0;
        case 0x1295d4u: goto label_1295d4;
        case 0x1295d8u: goto label_1295d8;
        case 0x1295dcu: goto label_1295dc;
        case 0x1295e0u: goto label_1295e0;
        case 0x1295e4u: goto label_1295e4;
        case 0x1295e8u: goto label_1295e8;
        case 0x1295ecu: goto label_1295ec;
        case 0x1295f0u: goto label_1295f0;
        case 0x1295f4u: goto label_1295f4;
        case 0x1295f8u: goto label_1295f8;
        case 0x1295fcu: goto label_1295fc;
        case 0x129600u: goto label_129600;
        case 0x129604u: goto label_129604;
        case 0x129608u: goto label_129608;
        case 0x12960cu: goto label_12960c;
        case 0x129610u: goto label_129610;
        case 0x129614u: goto label_129614;
        case 0x129618u: goto label_129618;
        case 0x12961cu: goto label_12961c;
        case 0x129620u: goto label_129620;
        case 0x129624u: goto label_129624;
        case 0x129628u: goto label_129628;
        case 0x12962cu: goto label_12962c;
        case 0x129630u: goto label_129630;
        case 0x129634u: goto label_129634;
        case 0x129638u: goto label_129638;
        case 0x12963cu: goto label_12963c;
        case 0x129640u: goto label_129640;
        case 0x129644u: goto label_129644;
        case 0x129648u: goto label_129648;
        case 0x12964cu: goto label_12964c;
        case 0x129650u: goto label_129650;
        case 0x129654u: goto label_129654;
        case 0x129658u: goto label_129658;
        case 0x12965cu: goto label_12965c;
        case 0x129660u: goto label_129660;
        case 0x129664u: goto label_129664;
        case 0x129668u: goto label_129668;
        case 0x12966cu: goto label_12966c;
        case 0x129670u: goto label_129670;
        case 0x129674u: goto label_129674;
        case 0x129678u: goto label_129678;
        case 0x12967cu: goto label_12967c;
        case 0x129680u: goto label_129680;
        case 0x129684u: goto label_129684;
        case 0x129688u: goto label_129688;
        case 0x12968cu: goto label_12968c;
        case 0x129690u: goto label_129690;
        case 0x129694u: goto label_129694;
        case 0x129698u: goto label_129698;
        case 0x12969cu: goto label_12969c;
        case 0x1296a0u: goto label_1296a0;
        case 0x1296a4u: goto label_1296a4;
        case 0x1296a8u: goto label_1296a8;
        case 0x1296acu: goto label_1296ac;
        case 0x1296b0u: goto label_1296b0;
        case 0x1296b4u: goto label_1296b4;
        case 0x1296b8u: goto label_1296b8;
        case 0x1296bcu: goto label_1296bc;
        case 0x1296c0u: goto label_1296c0;
        case 0x1296c4u: goto label_1296c4;
        case 0x1296c8u: goto label_1296c8;
        case 0x1296ccu: goto label_1296cc;
        case 0x1296d0u: goto label_1296d0;
        case 0x1296d4u: goto label_1296d4;
        case 0x1296d8u: goto label_1296d8;
        case 0x1296dcu: goto label_1296dc;
        case 0x1296e0u: goto label_1296e0;
        case 0x1296e4u: goto label_1296e4;
        case 0x1296e8u: goto label_1296e8;
        case 0x1296ecu: goto label_1296ec;
        case 0x1296f0u: goto label_1296f0;
        case 0x1296f4u: goto label_1296f4;
        case 0x1296f8u: goto label_1296f8;
        case 0x1296fcu: goto label_1296fc;
        case 0x129700u: goto label_129700;
        case 0x129704u: goto label_129704;
        default: break;
    }

    ctx->pc = 0x129598u;

label_129598:
    // 0x129598: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x129598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_12959c:
    // 0x12959c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12959cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1295a0:
    // 0x1295a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1295a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1295a4:
    // 0x1295a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1295a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1295a8:
    // 0x1295a8: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x1295a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_1295ac:
    // 0x1295ac: 0x54800006  bnel        $a0, $zero, . + 4 + (0x6 << 2)
label_1295b0:
    if (ctx->pc == 0x1295B0u) {
        ctx->pc = 0x1295B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1295ACu;
        // 0x1295b0: 0x8c8f0038  lw          $t7, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1295B4u;
        goto label_1295b4;
    }
    ctx->pc = 0x1295ACu;
    {
        const bool branch_taken_0x1295ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1295ac) {
            ctx->pc = 0x1295B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1295ACu;
            // 0x1295b0: 0x8c8f0038  lw          $t7, 0x38($a0) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1295C8u;
            goto label_1295c8;
        }
    }
    ctx->pc = 0x1295B4u;
label_1295b4:
    // 0x1295b4: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x1295b4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
label_1295b8:
    // 0x1295b8: 0x8deebde8  lw          $t6, -0x4218($t7)
    ctx->pc = 0x1295b8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294950376)));
label_1295bc:
    // 0x1295bc: 0xae0e0054  sw          $t6, 0x54($s0)
    ctx->pc = 0x1295bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 14));
label_1295c0:
    // 0x1295c0: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x1295c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_1295c4:
    // 0x1295c4: 0x8c8f0038  lw          $t7, 0x38($a0)
    ctx->pc = 0x1295c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_1295c8:
    // 0x1295c8: 0x55e00004  bnel        $t7, $zero, . + 4 + (0x4 << 2)
label_1295cc:
    if (ctx->pc == 0x1295CCu) {
        ctx->pc = 0x1295CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1295C8u;
        // 0x1295cc: 0x960e000c  lhu         $t6, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1295D0u;
        goto label_1295d0;
    }
    ctx->pc = 0x1295C8u;
    {
        const bool branch_taken_0x1295c8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1295c8) {
            ctx->pc = 0x1295CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1295C8u;
            // 0x1295cc: 0x960e000c  lhu         $t6, 0xC($s0) (Delay Slot)
            SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1295DCu;
            goto label_1295dc;
        }
    }
    ctx->pc = 0x1295D0u;
label_1295d0:
    // 0x1295d0: 0xc049360  jal         func_124D80
label_1295d4:
    if (ctx->pc == 0x1295D4u) {
        ctx->pc = 0x1295D8u;
        goto label_1295d8;
    }
    ctx->pc = 0x1295D0u;
    SET_GPR_U32(ctx, 31, 0x1295D8u);
    ctx->pc = 0x124D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124D80u, 0x1295D0u, 0x1295D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1295D8u;
label_1295d8:
    // 0x1295d8: 0x960e000c  lhu         $t6, 0xC($s0)
    ctx->pc = 0x1295d8u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_1295dc:
    // 0x1295dc: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x1295dcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1295e0:
    // 0x1295e0: 0x31cf0020  andi        $t7, $t6, 0x20
    ctx->pc = 0x1295e0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)32);
label_1295e4:
    // 0x1295e4: 0x15e00032  bnez        $t7, . + 4 + (0x32 << 2)
label_1295e8:
    if (ctx->pc == 0x1295E8u) {
        ctx->pc = 0x1295E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1295E4u;
        // 0x1295e8: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1295ECu;
        goto label_1295ec;
    }
    ctx->pc = 0x1295E4u;
    {
        const bool branch_taken_0x1295e4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1295E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1295E4u;
        // 0x1295e8: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1295e4) {
            ctx->pc = 0x1296B0u;
            goto label_1296b0;
        }
    }
    ctx->pc = 0x1295ECu;
label_1295ec:
    // 0x1295ec: 0x31cf0004  andi        $t7, $t6, 0x4
    ctx->pc = 0x1295ecu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)4);
label_1295f0:
    // 0x1295f0: 0x55e00036  bnel        $t7, $zero, . + 4 + (0x36 << 2)
label_1295f4:
    if (ctx->pc == 0x1295F4u) {
        ctx->pc = 0x1295F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1295F0u;
        // 0x1295f4: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1295F8u;
        goto label_1295f8;
    }
    ctx->pc = 0x1295F0u;
    {
        const bool branch_taken_0x1295f0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1295f0) {
            ctx->pc = 0x1295F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1295F0u;
            // 0x1295f4: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1296CCu;
            goto label_1296cc;
        }
    }
    ctx->pc = 0x1295F8u;
label_1295f8:
    // 0x1295f8: 0x31cf0010  andi        $t7, $t6, 0x10
    ctx->pc = 0x1295f8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)16);
label_1295fc:
    // 0x1295fc: 0x11e0002c  beqz        $t7, . + 4 + (0x2C << 2)
label_129600:
    if (ctx->pc == 0x129600u) {
        ctx->pc = 0x129600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1295FCu;
        // 0x129600: 0x31cf0008  andi        $t7, $t6, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x129604u;
        goto label_129604;
    }
    ctx->pc = 0x1295FCu;
    {
        const bool branch_taken_0x1295fc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x129600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1295FCu;
        // 0x129600: 0x31cf0008  andi        $t7, $t6, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1295fc) {
            ctx->pc = 0x1296B0u;
            goto label_1296b0;
        }
    }
    ctx->pc = 0x129604u;
label_129604:
    // 0x129604: 0x11e0000c  beqz        $t7, . + 4 + (0xC << 2)
label_129608:
    if (ctx->pc == 0x129608u) {
        ctx->pc = 0x129608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129604u;
        // 0x129608: 0x35cf0004  ori         $t7, $t6, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12960Cu;
        goto label_12960c;
    }
    ctx->pc = 0x129604u;
    {
        const bool branch_taken_0x129604 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x129608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129604u;
        // 0x129608: 0x35cf0004  ori         $t7, $t6, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129604) {
            ctx->pc = 0x129638u;
            goto label_129638;
        }
    }
    ctx->pc = 0x12960Cu;
label_12960c:
    // 0x12960c: 0xc049258  jal         func_124960
label_129610:
    if (ctx->pc == 0x129610u) {
        ctx->pc = 0x129610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12960Cu;
        // 0x129610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129614u;
        goto label_129614;
    }
    ctx->pc = 0x12960Cu;
    SET_GPR_U32(ctx, 31, 0x129614u);
    ctx->pc = 0x129610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12960Cu;
    // 0x129610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124960u, 0x12960Cu, 0x129614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129614u;
label_129614:
    // 0x129614: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_129618:
    if (ctx->pc == 0x129618u) {
        ctx->pc = 0x129618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129614u;
        // 0x129618: 0x240dffff  addiu       $t5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12961Cu;
        goto label_12961c;
    }
    ctx->pc = 0x129614u;
    {
        const bool branch_taken_0x129614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129614u;
        // 0x129618: 0x240dffff  addiu       $t5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129614) {
            ctx->pc = 0x1296B0u;
            goto label_1296b0;
        }
    }
    ctx->pc = 0x12961Cu;
label_12961c:
    // 0x12961c: 0x960f000c  lhu         $t7, 0xC($s0)
    ctx->pc = 0x12961cu;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_129620:
    // 0x129620: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x129620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_129624:
    // 0x129624: 0x31effff7  andi        $t7, $t7, 0xFFF7
    ctx->pc = 0x129624u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65527);
label_129628:
    // 0x129628: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x129628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_12962c:
    // 0x12962c: 0xa60f000c  sh          $t7, 0xC($s0)
    ctx->pc = 0x12962cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
label_129630:
    // 0x129630: 0x1e0702d  daddu       $t6, $t7, $zero
    ctx->pc = 0x129630u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_129634:
    // 0x129634: 0x35cf0004  ori         $t7, $t6, 0x4
    ctx->pc = 0x129634u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)4);
label_129638:
    // 0x129638: 0xa60f000c  sh          $t7, 0xC($s0)
    ctx->pc = 0x129638u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
label_12963c:
    // 0x12963c: 0x8e0f0010  lw          $t7, 0x10($s0)
    ctx->pc = 0x12963cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_129640:
    // 0x129640: 0x55e00004  bnel        $t7, $zero, . + 4 + (0x4 << 2)
label_129644:
    if (ctx->pc == 0x129644u) {
        ctx->pc = 0x129644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129640u;
        // 0x129644: 0x960f000c  lhu         $t7, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129648u;
        goto label_129648;
    }
    ctx->pc = 0x129640u;
    {
        const bool branch_taken_0x129640 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x129640) {
            ctx->pc = 0x129644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129640u;
            // 0x129644: 0x960f000c  lhu         $t7, 0xC($s0) (Delay Slot)
            SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129654u;
            goto label_129654;
        }
    }
    ctx->pc = 0x129648u;
label_129648:
    // 0x129648: 0xc0498ae  jal         func_1262B8
label_12964c:
    if (ctx->pc == 0x12964Cu) {
        ctx->pc = 0x12964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129648u;
        // 0x12964c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129650u;
        goto label_129650;
    }
    ctx->pc = 0x129648u;
    SET_GPR_U32(ctx, 31, 0x129650u);
    ctx->pc = 0x12964Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129648u;
    // 0x12964c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1262B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1262B8u, 0x129648u, 0x129650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129650u;
label_129650:
    // 0x129650: 0x960f000c  lhu         $t7, 0xC($s0)
    ctx->pc = 0x129650u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_129654:
    // 0x129654: 0x31ef0003  andi        $t7, $t7, 0x3
    ctx->pc = 0x129654u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)3);
label_129658:
    // 0x129658: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
label_12965c:
    if (ctx->pc == 0x12965Cu) {
        ctx->pc = 0x12965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129658u;
        // 0x12965c: 0x3c050013  lui         $a1, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129660u;
        goto label_129660;
    }
    ctx->pc = 0x129658u;
    {
        const bool branch_taken_0x129658 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129658u;
        // 0x12965c: 0x3c050013  lui         $a1, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129658) {
            ctx->pc = 0x12966Cu;
            goto label_12966c;
        }
    }
    ctx->pc = 0x129660u;
label_129660:
    // 0x129660: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x129660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_129664:
    // 0x129664: 0xc0497b2  jal         func_125EC8
label_129668:
    if (ctx->pc == 0x129668u) {
        ctx->pc = 0x129668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129664u;
        // 0x129668: 0x24a59568  addiu       $a1, $a1, -0x6A98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12966Cu;
        goto label_12966c;
    }
    ctx->pc = 0x129664u;
    SET_GPR_U32(ctx, 31, 0x12966Cu);
    ctx->pc = 0x129668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129664u;
    // 0x129668: 0x24a59568  addiu       $a1, $a1, -0x6A98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125EC8u, 0x129664u, 0x12966Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12966Cu;
label_12966c:
    // 0x12966c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x12966cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_129670:
    // 0x129670: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x129670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_129674:
    // 0x129674: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x129674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_129678:
    // 0x129678: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x129678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_12967c:
    // 0x12967c: 0x40f809  jalr        $v0
label_129680:
    if (ctx->pc == 0x129680u) {
        ctx->pc = 0x129680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12967Cu;
        // 0x129680: 0x8e060014  lw          $a2, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129684u;
        goto label_129684;
    }
    ctx->pc = 0x12967Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x129684u);
        ctx->pc = 0x129680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12967Cu;
        // 0x129680: 0x8e060014  lw          $a2, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12967Cu, 0x129684u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x129684u;
label_129684:
    // 0x129684: 0x960f000c  lhu         $t7, 0xC($s0)
    ctx->pc = 0x129684u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_129688:
    // 0x129688: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x129688u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12968c:
    // 0x12968c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x12968cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_129690:
    // 0x129690: 0x31efdfff  andi        $t7, $t7, 0xDFFF
    ctx->pc = 0x129690u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)57343);
label_129694:
    // 0x129694: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
label_129698:
    if (ctx->pc == 0x129698u) {
        ctx->pc = 0x129698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129694u;
        // 0x129698: 0xa60f000c  sh          $t7, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12969Cu;
        goto label_12969c;
    }
    ctx->pc = 0x129694u;
    {
        const bool branch_taken_0x129694 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x129698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129694u;
        // 0x129698: 0xa60f000c  sh          $t7, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129694) {
            ctx->pc = 0x1296B0u;
            goto label_1296b0;
        }
    }
    ctx->pc = 0x12969Cu;
label_12969c:
    // 0x12969c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_1296a0:
    if (ctx->pc == 0x1296A0u) {
        ctx->pc = 0x1296A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12969Cu;
        // 0x1296a0: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1296A4u;
        goto label_1296a4;
    }
    ctx->pc = 0x12969Cu;
    {
        const bool branch_taken_0x12969c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12969c) {
            ctx->pc = 0x1296A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12969Cu;
            // 0x1296a0: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1296C4u;
            goto label_1296c4;
        }
    }
    ctx->pc = 0x1296A4u;
label_1296a4:
    // 0x1296a4: 0x35ef0020  ori         $t7, $t7, 0x20
    ctx->pc = 0x1296a4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)32);
label_1296a8:
    // 0x1296a8: 0xa60f000c  sh          $t7, 0xC($s0)
    ctx->pc = 0x1296a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
label_1296ac:
    // 0x1296ac: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x1296acu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1296b0:
    // 0x1296b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1296b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1296b4:
    // 0x1296b4: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x1296b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_1296b8:
    // 0x1296b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1296b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1296bc:
    // 0x1296bc: 0x3e00008  jr          $ra
label_1296c0:
    if (ctx->pc == 0x1296C0u) {
        ctx->pc = 0x1296C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1296BCu;
        // 0x1296c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1296C4u;
        goto label_1296c4;
    }
    ctx->pc = 0x1296BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1296C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1296BCu;
        // 0x1296c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1296BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1296C4u;
label_1296c4:
    // 0x1296c4: 0x1000fff8  b           . + 4 + (-0x8 << 2)
label_1296c8:
    if (ctx->pc == 0x1296C8u) {
        ctx->pc = 0x1296C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1296C4u;
        // 0x1296c8: 0x35ef0040  ori         $t7, $t7, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1296CCu;
        goto label_1296cc;
    }
    ctx->pc = 0x1296C4u;
    {
        const bool branch_taken_0x1296c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1296C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1296C4u;
        // 0x1296c8: 0x35ef0040  ori         $t7, $t7, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1296c4) {
            ctx->pc = 0x1296A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1296a8;
        }
    }
    ctx->pc = 0x1296CCu;
label_1296cc:
    // 0x1296cc: 0x10a0ffdb  beqz        $a1, . + 4 + (-0x25 << 2)
label_1296d0:
    if (ctx->pc == 0x1296D0u) {
        ctx->pc = 0x1296D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1296CCu;
        // 0x1296d0: 0x260f0040  addiu       $t7, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1296D4u;
        goto label_1296d4;
    }
    ctx->pc = 0x1296CCu;
    {
        const bool branch_taken_0x1296cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1296D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1296CCu;
        // 0x1296d0: 0x260f0040  addiu       $t7, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1296cc) {
            ctx->pc = 0x12963Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12963c;
        }
    }
    ctx->pc = 0x1296D4u;
label_1296d4:
    // 0x1296d4: 0x50af0004  beql        $a1, $t7, . + 4 + (0x4 << 2)
label_1296d8:
    if (ctx->pc == 0x1296D8u) {
        ctx->pc = 0x1296D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1296D4u;
        // 0x1296d8: 0x8e0f003c  lw          $t7, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1296DCu;
        goto label_1296dc;
    }
    ctx->pc = 0x1296D4u;
    {
        const bool branch_taken_0x1296d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 15));
        if (branch_taken_0x1296d4) {
            ctx->pc = 0x1296D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1296D4u;
            // 0x1296d8: 0x8e0f003c  lw          $t7, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1296E8u;
            goto label_1296e8;
        }
    }
    ctx->pc = 0x1296DCu;
label_1296dc:
    // 0x1296dc: 0xc04943c  jal         func_1250F0
label_1296e0:
    if (ctx->pc == 0x1296E0u) {
        ctx->pc = 0x1296E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1296DCu;
        // 0x1296e0: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1296E4u;
        goto label_1296e4;
    }
    ctx->pc = 0x1296DCu;
    SET_GPR_U32(ctx, 31, 0x1296E4u);
    ctx->pc = 0x1296E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1296DCu;
    // 0x1296e0: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1250F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1250F0u, 0x1296DCu, 0x1296E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1296E4u;
label_1296e4:
    // 0x1296e4: 0x8e0f003c  lw          $t7, 0x3C($s0)
    ctx->pc = 0x1296e4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_1296e8:
    // 0x1296e8: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1296e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_1296ec:
    // 0x1296ec: 0x11e0ffd3  beqz        $t7, . + 4 + (-0x2D << 2)
label_1296f0:
    if (ctx->pc == 0x1296F0u) {
        ctx->pc = 0x1296F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1296ECu;
        // 0x1296f0: 0xae0f0004  sw          $t7, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1296F4u;
        goto label_1296f4;
    }
    ctx->pc = 0x1296ECu;
    {
        const bool branch_taken_0x1296ec = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1296F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1296ECu;
        // 0x1296f0: 0xae0f0004  sw          $t7, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1296ec) {
            ctx->pc = 0x12963Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12963c;
        }
    }
    ctx->pc = 0x1296F4u;
label_1296f4:
    // 0x1296f4: 0x8e0f0038  lw          $t7, 0x38($s0)
    ctx->pc = 0x1296f4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1296f8:
    // 0x1296f8: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1296f8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1296fc:
    // 0x1296fc: 0x1000ffec  b           . + 4 + (-0x14 << 2)
label_129700:
    if (ctx->pc == 0x129700u) {
        ctx->pc = 0x129700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1296FCu;
        // 0x129700: 0xae0f0000  sw          $t7, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x129704u;
        goto label_129704;
    }
    ctx->pc = 0x1296FCu;
    {
        const bool branch_taken_0x1296fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1296FCu;
        // 0x129700: 0xae0f0000  sw          $t7, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1296fc) {
            ctx->pc = 0x1296B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1296b0;
        }
    }
    ctx->pc = 0x129704u;
label_129704:
    // 0x129704: 0x0  nop
    ctx->pc = 0x129704u;
    // NOP
}
