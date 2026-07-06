#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015C5C0
// Address: 0x15c5c0 - 0x15c7c0
void sub_0015C5C0_0x15c5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C5C0_0x15c5c0");
#endif

    switch (ctx->pc) {
        case 0x15c5c0u: goto label_15c5c0;
        case 0x15c5c4u: goto label_15c5c4;
        case 0x15c5c8u: goto label_15c5c8;
        case 0x15c5ccu: goto label_15c5cc;
        case 0x15c5d0u: goto label_15c5d0;
        case 0x15c5d4u: goto label_15c5d4;
        case 0x15c5d8u: goto label_15c5d8;
        case 0x15c5dcu: goto label_15c5dc;
        case 0x15c5e0u: goto label_15c5e0;
        case 0x15c5e4u: goto label_15c5e4;
        case 0x15c5e8u: goto label_15c5e8;
        case 0x15c5ecu: goto label_15c5ec;
        case 0x15c5f0u: goto label_15c5f0;
        case 0x15c5f4u: goto label_15c5f4;
        case 0x15c5f8u: goto label_15c5f8;
        case 0x15c5fcu: goto label_15c5fc;
        case 0x15c600u: goto label_15c600;
        case 0x15c604u: goto label_15c604;
        case 0x15c608u: goto label_15c608;
        case 0x15c60cu: goto label_15c60c;
        case 0x15c610u: goto label_15c610;
        case 0x15c614u: goto label_15c614;
        case 0x15c618u: goto label_15c618;
        case 0x15c61cu: goto label_15c61c;
        case 0x15c620u: goto label_15c620;
        case 0x15c624u: goto label_15c624;
        case 0x15c628u: goto label_15c628;
        case 0x15c62cu: goto label_15c62c;
        case 0x15c630u: goto label_15c630;
        case 0x15c634u: goto label_15c634;
        case 0x15c638u: goto label_15c638;
        case 0x15c63cu: goto label_15c63c;
        case 0x15c640u: goto label_15c640;
        case 0x15c644u: goto label_15c644;
        case 0x15c648u: goto label_15c648;
        case 0x15c64cu: goto label_15c64c;
        case 0x15c650u: goto label_15c650;
        case 0x15c654u: goto label_15c654;
        case 0x15c658u: goto label_15c658;
        case 0x15c65cu: goto label_15c65c;
        case 0x15c660u: goto label_15c660;
        case 0x15c664u: goto label_15c664;
        case 0x15c668u: goto label_15c668;
        case 0x15c66cu: goto label_15c66c;
        case 0x15c670u: goto label_15c670;
        case 0x15c674u: goto label_15c674;
        case 0x15c678u: goto label_15c678;
        case 0x15c67cu: goto label_15c67c;
        case 0x15c680u: goto label_15c680;
        case 0x15c684u: goto label_15c684;
        case 0x15c688u: goto label_15c688;
        case 0x15c68cu: goto label_15c68c;
        case 0x15c690u: goto label_15c690;
        case 0x15c694u: goto label_15c694;
        case 0x15c698u: goto label_15c698;
        case 0x15c69cu: goto label_15c69c;
        case 0x15c6a0u: goto label_15c6a0;
        case 0x15c6a4u: goto label_15c6a4;
        case 0x15c6a8u: goto label_15c6a8;
        case 0x15c6acu: goto label_15c6ac;
        case 0x15c6b0u: goto label_15c6b0;
        case 0x15c6b4u: goto label_15c6b4;
        case 0x15c6b8u: goto label_15c6b8;
        case 0x15c6bcu: goto label_15c6bc;
        case 0x15c6c0u: goto label_15c6c0;
        case 0x15c6c4u: goto label_15c6c4;
        case 0x15c6c8u: goto label_15c6c8;
        case 0x15c6ccu: goto label_15c6cc;
        case 0x15c6d0u: goto label_15c6d0;
        case 0x15c6d4u: goto label_15c6d4;
        case 0x15c6d8u: goto label_15c6d8;
        case 0x15c6dcu: goto label_15c6dc;
        case 0x15c6e0u: goto label_15c6e0;
        case 0x15c6e4u: goto label_15c6e4;
        case 0x15c6e8u: goto label_15c6e8;
        case 0x15c6ecu: goto label_15c6ec;
        case 0x15c6f0u: goto label_15c6f0;
        case 0x15c6f4u: goto label_15c6f4;
        case 0x15c6f8u: goto label_15c6f8;
        case 0x15c6fcu: goto label_15c6fc;
        case 0x15c700u: goto label_15c700;
        case 0x15c704u: goto label_15c704;
        case 0x15c708u: goto label_15c708;
        case 0x15c70cu: goto label_15c70c;
        case 0x15c710u: goto label_15c710;
        case 0x15c714u: goto label_15c714;
        case 0x15c718u: goto label_15c718;
        case 0x15c71cu: goto label_15c71c;
        case 0x15c720u: goto label_15c720;
        case 0x15c724u: goto label_15c724;
        case 0x15c728u: goto label_15c728;
        case 0x15c72cu: goto label_15c72c;
        case 0x15c730u: goto label_15c730;
        case 0x15c734u: goto label_15c734;
        case 0x15c738u: goto label_15c738;
        case 0x15c73cu: goto label_15c73c;
        case 0x15c740u: goto label_15c740;
        case 0x15c744u: goto label_15c744;
        case 0x15c748u: goto label_15c748;
        case 0x15c74cu: goto label_15c74c;
        case 0x15c750u: goto label_15c750;
        case 0x15c754u: goto label_15c754;
        case 0x15c758u: goto label_15c758;
        case 0x15c75cu: goto label_15c75c;
        case 0x15c760u: goto label_15c760;
        case 0x15c764u: goto label_15c764;
        case 0x15c768u: goto label_15c768;
        case 0x15c76cu: goto label_15c76c;
        case 0x15c770u: goto label_15c770;
        case 0x15c774u: goto label_15c774;
        case 0x15c778u: goto label_15c778;
        case 0x15c77cu: goto label_15c77c;
        case 0x15c780u: goto label_15c780;
        case 0x15c784u: goto label_15c784;
        case 0x15c788u: goto label_15c788;
        case 0x15c78cu: goto label_15c78c;
        case 0x15c790u: goto label_15c790;
        case 0x15c794u: goto label_15c794;
        case 0x15c798u: goto label_15c798;
        case 0x15c79cu: goto label_15c79c;
        case 0x15c7a0u: goto label_15c7a0;
        case 0x15c7a4u: goto label_15c7a4;
        case 0x15c7a8u: goto label_15c7a8;
        case 0x15c7acu: goto label_15c7ac;
        case 0x15c7b0u: goto label_15c7b0;
        case 0x15c7b4u: goto label_15c7b4;
        case 0x15c7b8u: goto label_15c7b8;
        case 0x15c7bcu: goto label_15c7bc;
        default: break;
    }

    ctx->pc = 0x15c5c0u;

label_15c5c0:
    // 0x15c5c0: 0x9086059c  lbu         $a2, 0x59C($a0)
    ctx->pc = 0x15c5c0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1436)));
label_15c5c4:
    // 0x15c5c4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x15c5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_15c5c8:
    // 0x15c5c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15c5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15c5cc:
    // 0x15c5cc: 0x30c60018  andi        $a2, $a2, 0x18
    ctx->pc = 0x15c5ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)24);
label_15c5d0:
    // 0x15c5d0: 0xa086059c  sb          $a2, 0x59C($a0)
    ctx->pc = 0x15c5d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1436), (uint8_t)GPR_U32(ctx, 6));
label_15c5d4:
    // 0x15c5d4: 0xa08005a8  sb          $zero, 0x5A8($a0)
    ctx->pc = 0x15c5d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1448), (uint8_t)GPR_U32(ctx, 0));
label_15c5d8:
    // 0x15c5d8: 0xa48505ac  sh          $a1, 0x5AC($a0)
    ctx->pc = 0x15c5d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1452), (uint16_t)GPR_U32(ctx, 5));
label_15c5dc:
    // 0x15c5dc: 0xa48505b8  sh          $a1, 0x5B8($a0)
    ctx->pc = 0x15c5dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1464), (uint16_t)GPR_U32(ctx, 5));
label_15c5e0:
    // 0x15c5e0: 0xa48505c4  sh          $a1, 0x5C4($a0)
    ctx->pc = 0x15c5e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1476), (uint16_t)GPR_U32(ctx, 5));
label_15c5e4:
    // 0x15c5e4: 0xa48505d0  sh          $a1, 0x5D0($a0)
    ctx->pc = 0x15c5e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1488), (uint16_t)GPR_U32(ctx, 5));
label_15c5e8:
    // 0x15c5e8: 0xac8305a0  sw          $v1, 0x5A0($a0)
    ctx->pc = 0x15c5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1440), GPR_U32(ctx, 3));
label_15c5ec:
    // 0x15c5ec: 0x9083059c  lbu         $v1, 0x59C($a0)
    ctx->pc = 0x15c5ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1436)));
label_15c5f0:
    // 0x15c5f0: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x15c5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
label_15c5f4:
    // 0x15c5f4: 0xa083059c  sb          $v1, 0x59C($a0)
    ctx->pc = 0x15c5f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1436), (uint8_t)GPR_U32(ctx, 3));
label_15c5f8:
    // 0x15c5f8: 0x3e00008  jr          $ra
label_15c5fc:
    if (ctx->pc == 0x15C5FCu) {
        ctx->pc = 0x15C5FCu;
            // 0x15c5fc: 0xac8005a4  sw          $zero, 0x5A4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1444), GPR_U32(ctx, 0));
        ctx->pc = 0x15C600u;
        goto label_15c600;
    }
    ctx->pc = 0x15C5F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C5F8u;
            // 0x15c5fc: 0xac8005a4  sw          $zero, 0x5A4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1444), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15C600u;
label_15c600:
    // 0x15c600: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15c600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_15c604:
    // 0x15c604: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15c604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_15c608:
    // 0x15c608: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15c608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15c60c:
    // 0x15c60c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15c60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15c610:
    // 0x15c610: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15c610u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15c614:
    // 0x15c614: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15c614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15c618:
    // 0x15c618: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15c618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15c61c:
    // 0x15c61c: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x15c61cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_15c620:
    // 0x15c620: 0x8e1105e8  lw          $s1, 0x5E8($s0)
    ctx->pc = 0x15c620u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1512)));
label_15c624:
    // 0x15c624: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15c624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15c628:
    // 0x15c628: 0xc055948  jal         func_156520
label_15c62c:
    if (ctx->pc == 0x15C62Cu) {
        ctx->pc = 0x15C62Cu;
            // 0x15c62c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15C630u;
        goto label_15c630;
    }
    ctx->pc = 0x15C628u;
    SET_GPR_U32(ctx, 31, 0x15C630u);
    ctx->pc = 0x15C62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C628u;
            // 0x15c62c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156520u;
    if (runtime->hasFunction(0x156520u)) {
        auto targetFn = runtime->lookupFunction(0x156520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C630u; }
        if (ctx->pc != 0x15C630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156520_0x156520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C630u; }
        if (ctx->pc != 0x15C630u) { return; }
    }
    ctx->pc = 0x15C630u;
label_15c630:
    // 0x15c630: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x15c630u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_15c634:
    // 0x15c634: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x15c634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_15c638:
    // 0x15c638: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_15c63c:
    if (ctx->pc == 0x15C63Cu) {
        ctx->pc = 0x15C640u;
        goto label_15c640;
    }
    ctx->pc = 0x15C638u;
    {
        const bool branch_taken_0x15c638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15c638) {
            ctx->pc = 0x15C650u;
            goto label_15c650;
        }
    }
    ctx->pc = 0x15C640u;
label_15c640:
    // 0x15c640: 0x960205e0  lhu         $v0, 0x5E0($s0)
    ctx->pc = 0x15c640u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1504)));
label_15c644:
    // 0x15c644: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x15c644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_15c648:
    // 0x15c648: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_15c64c:
    if (ctx->pc == 0x15C64Cu) {
        ctx->pc = 0x15C650u;
        goto label_15c650;
    }
    ctx->pc = 0x15C648u;
    {
        const bool branch_taken_0x15c648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c648) {
            ctx->pc = 0x15C688u;
            goto label_15c688;
        }
    }
    ctx->pc = 0x15C650u;
label_15c650:
    // 0x15c650: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x15c650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_15c654:
    // 0x15c654: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x15c654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_15c658:
    // 0x15c658: 0x34423000  ori         $v0, $v0, 0x3000
    ctx->pc = 0x15c658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12288);
label_15c65c:
    // 0x15c65c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15c65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_15c660:
    // 0x15c660: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_15c664:
    if (ctx->pc == 0x15C664u) {
        ctx->pc = 0x15C664u;
            // 0x15c664: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15C668u;
        goto label_15c668;
    }
    ctx->pc = 0x15C660u;
    {
        const bool branch_taken_0x15c660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c660) {
            ctx->pc = 0x15C664u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15C660u;
            // 0x15c664: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15C678u;
            goto label_15c678;
        }
    }
    ctx->pc = 0x15C668u;
label_15c668:
    // 0x15c668: 0xc0592e0  jal         func_164B80
label_15c66c:
    if (ctx->pc == 0x15C66Cu) {
        ctx->pc = 0x15C66Cu;
            // 0x15c66c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15C670u;
        goto label_15c670;
    }
    ctx->pc = 0x15C668u;
    SET_GPR_U32(ctx, 31, 0x15C670u);
    ctx->pc = 0x15C66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C668u;
            // 0x15c66c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164B80u;
    if (runtime->hasFunction(0x164B80u)) {
        auto targetFn = runtime->lookupFunction(0x164B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C670u; }
        if (ctx->pc != 0x15C670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164B80_0x164b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C670u; }
        if (ctx->pc != 0x15C670u) { return; }
    }
    ctx->pc = 0x15C670u;
label_15c670:
    // 0x15c670: 0x10000003  b           . + 4 + (0x3 << 2)
label_15c674:
    if (ctx->pc == 0x15C674u) {
        ctx->pc = 0x15C678u;
        goto label_15c678;
    }
    ctx->pc = 0x15C670u;
    {
        const bool branch_taken_0x15c670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c670) {
            ctx->pc = 0x15C680u;
            goto label_15c680;
        }
    }
    ctx->pc = 0x15C678u;
label_15c678:
    // 0x15c678: 0xc059288  jal         func_164A20
label_15c67c:
    if (ctx->pc == 0x15C67Cu) {
        ctx->pc = 0x15C680u;
        goto label_15c680;
    }
    ctx->pc = 0x15C678u;
    SET_GPR_U32(ctx, 31, 0x15C680u);
    ctx->pc = 0x164A20u;
    if (runtime->hasFunction(0x164A20u)) {
        auto targetFn = runtime->lookupFunction(0x164A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C680u; }
        if (ctx->pc != 0x15C680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164A20_0x164a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C680u; }
        if (ctx->pc != 0x15C680u) { return; }
    }
    ctx->pc = 0x15C680u;
label_15c680:
    // 0x15c680: 0x10000016  b           . + 4 + (0x16 << 2)
label_15c684:
    if (ctx->pc == 0x15C684u) {
        ctx->pc = 0x15C684u;
            // 0x15c684: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x15C688u;
        goto label_15c688;
    }
    ctx->pc = 0x15C680u;
    {
        const bool branch_taken_0x15c680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C680u;
            // 0x15c684: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c680) {
            ctx->pc = 0x15C6DCu;
            goto label_15c6dc;
        }
    }
    ctx->pc = 0x15C688u;
label_15c688:
    // 0x15c688: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x15c688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_15c68c:
    // 0x15c68c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15c68cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15c690:
    // 0x15c690: 0x2442e8d0  addiu       $v0, $v0, -0x1730
    ctx->pc = 0x15c690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961360));
label_15c694:
    // 0x15c694: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x15c694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15c698:
    // 0x15c698: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15c698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15c69c:
    // 0x15c69c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15c69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15c6a0:
    // 0x15c6a0: 0x40f809  jalr        $v0
label_15c6a4:
    if (ctx->pc == 0x15C6A4u) {
        ctx->pc = 0x15C6A4u;
            // 0x15c6a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15C6A8u;
        goto label_15c6a8;
    }
    ctx->pc = 0x15C6A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15C6A8u);
        ctx->pc = 0x15C6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C6A0u;
            // 0x15c6a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15C6A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15C6A8u; }
            if (ctx->pc != 0x15C6A8u) { return; }
        }
        }
    }
    ctx->pc = 0x15C6A8u;
label_15c6a8:
    // 0x15c6a8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x15c6a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15c6ac:
    // 0x15c6ac: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x15c6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
label_15c6b0:
    // 0x15c6b0: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x15c6b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_15c6b4:
    // 0x15c6b4: 0x30820080  andi        $v0, $a0, 0x80
    ctx->pc = 0x15c6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
label_15c6b8:
    // 0x15c6b8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x15c6b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_15c6bc:
    // 0x15c6bc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x15c6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_15c6c0:
    // 0x15c6c0: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
label_15c6c4:
    if (ctx->pc == 0x15C6C4u) {
        ctx->pc = 0x15C6C4u;
            // 0x15c6c4: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->pc = 0x15C6C8u;
        goto label_15c6c8;
    }
    ctx->pc = 0x15C6C0u;
    {
        const bool branch_taken_0x15c6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C6C0u;
            // 0x15c6c4: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c6c0) {
            ctx->pc = 0x15C630u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15c630;
        }
    }
    ctx->pc = 0x15C6C8u;
label_15c6c8:
    // 0x15c6c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15c6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15c6cc:
    // 0x15c6cc: 0xc055964  jal         func_156590
label_15c6d0:
    if (ctx->pc == 0x15C6D0u) {
        ctx->pc = 0x15C6D0u;
            // 0x15c6d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15C6D4u;
        goto label_15c6d4;
    }
    ctx->pc = 0x15C6CCu;
    SET_GPR_U32(ctx, 31, 0x15C6D4u);
    ctx->pc = 0x15C6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C6CCu;
            // 0x15c6d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156590u;
    if (runtime->hasFunction(0x156590u)) {
        auto targetFn = runtime->lookupFunction(0x156590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C6D4u; }
        if (ctx->pc != 0x15C6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156590_0x156590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C6D4u; }
        if (ctx->pc != 0x15C6D4u) { return; }
    }
    ctx->pc = 0x15C6D4u;
label_15c6d4:
    // 0x15c6d4: 0xae1105e8  sw          $s1, 0x5E8($s0)
    ctx->pc = 0x15c6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 17));
label_15c6d8:
    // 0x15c6d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15c6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15c6dc:
    // 0x15c6dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15c6dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15c6e0:
    // 0x15c6e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15c6e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15c6e4:
    // 0x15c6e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15c6e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15c6e8:
    // 0x15c6e8: 0x3e00008  jr          $ra
label_15c6ec:
    if (ctx->pc == 0x15C6ECu) {
        ctx->pc = 0x15C6ECu;
            // 0x15c6ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x15C6F0u;
        goto label_15c6f0;
    }
    ctx->pc = 0x15C6E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C6E8u;
            // 0x15c6ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15C6F0u;
label_15c6f0:
    // 0x15c6f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15c6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_15c6f4:
    // 0x15c6f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15c6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_15c6f8:
    // 0x15c6f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15c6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15c6fc:
    // 0x15c6fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15c6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15c700:
    // 0x15c700: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15c700u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15c704:
    // 0x15c704: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15c704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15c708:
    // 0x15c708: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15c708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15c70c:
    // 0x15c70c: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x15c70cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_15c710:
    // 0x15c710: 0x8e1105e8  lw          $s1, 0x5E8($s0)
    ctx->pc = 0x15c710u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1512)));
label_15c714:
    // 0x15c714: 0xc057c28  jal         func_15F0A0
label_15c718:
    if (ctx->pc == 0x15C718u) {
        ctx->pc = 0x15C718u;
            // 0x15c718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15C71Cu;
        goto label_15c71c;
    }
    ctx->pc = 0x15C714u;
    SET_GPR_U32(ctx, 31, 0x15C71Cu);
    ctx->pc = 0x15C718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C714u;
            // 0x15c718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F0A0u;
    if (runtime->hasFunction(0x15F0A0u)) {
        auto targetFn = runtime->lookupFunction(0x15F0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C71Cu; }
        if (ctx->pc != 0x15C71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F0A0_0x15f0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C71Cu; }
        if (ctx->pc != 0x15C71Cu) { return; }
    }
    ctx->pc = 0x15C71Cu;
label_15c71c:
    // 0x15c71c: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x15c71cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_15c720:
    // 0x15c720: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x15c720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_15c724:
    // 0x15c724: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_15c728:
    if (ctx->pc == 0x15C728u) {
        ctx->pc = 0x15C72Cu;
        goto label_15c72c;
    }
    ctx->pc = 0x15C724u;
    {
        const bool branch_taken_0x15c724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15c724) {
            ctx->pc = 0x15C764u;
            goto label_15c764;
        }
    }
    ctx->pc = 0x15C72Cu;
label_15c72c:
    // 0x15c72c: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x15c72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_15c730:
    // 0x15c730: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x15c730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_15c734:
    // 0x15c734: 0x34423000  ori         $v0, $v0, 0x3000
    ctx->pc = 0x15c734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12288);
label_15c738:
    // 0x15c738: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15c738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_15c73c:
    // 0x15c73c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_15c740:
    if (ctx->pc == 0x15C740u) {
        ctx->pc = 0x15C740u;
            // 0x15c740: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15C744u;
        goto label_15c744;
    }
    ctx->pc = 0x15C73Cu;
    {
        const bool branch_taken_0x15c73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c73c) {
            ctx->pc = 0x15C740u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15C73Cu;
            // 0x15c740: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15C754u;
            goto label_15c754;
        }
    }
    ctx->pc = 0x15C744u;
label_15c744:
    // 0x15c744: 0xc0592e0  jal         func_164B80
label_15c748:
    if (ctx->pc == 0x15C748u) {
        ctx->pc = 0x15C748u;
            // 0x15c748: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15C74Cu;
        goto label_15c74c;
    }
    ctx->pc = 0x15C744u;
    SET_GPR_U32(ctx, 31, 0x15C74Cu);
    ctx->pc = 0x15C748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C744u;
            // 0x15c748: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164B80u;
    if (runtime->hasFunction(0x164B80u)) {
        auto targetFn = runtime->lookupFunction(0x164B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C74Cu; }
        if (ctx->pc != 0x15C74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164B80_0x164b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C74Cu; }
        if (ctx->pc != 0x15C74Cu) { return; }
    }
    ctx->pc = 0x15C74Cu;
label_15c74c:
    // 0x15c74c: 0x10000003  b           . + 4 + (0x3 << 2)
label_15c750:
    if (ctx->pc == 0x15C750u) {
        ctx->pc = 0x15C754u;
        goto label_15c754;
    }
    ctx->pc = 0x15C74Cu;
    {
        const bool branch_taken_0x15c74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c74c) {
            ctx->pc = 0x15C75Cu;
            goto label_15c75c;
        }
    }
    ctx->pc = 0x15C754u;
label_15c754:
    // 0x15c754: 0xc059288  jal         func_164A20
label_15c758:
    if (ctx->pc == 0x15C758u) {
        ctx->pc = 0x15C75Cu;
        goto label_15c75c;
    }
    ctx->pc = 0x15C754u;
    SET_GPR_U32(ctx, 31, 0x15C75Cu);
    ctx->pc = 0x164A20u;
    if (runtime->hasFunction(0x164A20u)) {
        auto targetFn = runtime->lookupFunction(0x164A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C75Cu; }
        if (ctx->pc != 0x15C75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00164A20_0x164a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15C75Cu; }
        if (ctx->pc != 0x15C75Cu) { return; }
    }
    ctx->pc = 0x15C75Cu;
label_15c75c:
    // 0x15c75c: 0x10000011  b           . + 4 + (0x11 << 2)
label_15c760:
    if (ctx->pc == 0x15C760u) {
        ctx->pc = 0x15C760u;
            // 0x15c760: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x15C764u;
        goto label_15c764;
    }
    ctx->pc = 0x15C75Cu;
    {
        const bool branch_taken_0x15c75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C75Cu;
            // 0x15c760: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c75c) {
            ctx->pc = 0x15C7A4u;
            goto label_15c7a4;
        }
    }
    ctx->pc = 0x15C764u;
label_15c764:
    // 0x15c764: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x15c764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_15c768:
    // 0x15c768: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15c768u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15c76c:
    // 0x15c76c: 0x2442e8d0  addiu       $v0, $v0, -0x1730
    ctx->pc = 0x15c76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961360));
label_15c770:
    // 0x15c770: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x15c770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15c774:
    // 0x15c774: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15c774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15c778:
    // 0x15c778: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15c778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15c77c:
    // 0x15c77c: 0x40f809  jalr        $v0
label_15c780:
    if (ctx->pc == 0x15C780u) {
        ctx->pc = 0x15C780u;
            // 0x15c780: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15C784u;
        goto label_15c784;
    }
    ctx->pc = 0x15C77Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15C784u);
        ctx->pc = 0x15C780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C77Cu;
            // 0x15c780: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15C784u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15C784u; }
            if (ctx->pc != 0x15C784u) { return; }
        }
        }
    }
    ctx->pc = 0x15C784u;
label_15c784:
    // 0x15c784: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x15c784u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15c788:
    // 0x15c788: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x15c788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
label_15c78c:
    // 0x15c78c: 0xa32024  and         $a0, $a1, $v1
    ctx->pc = 0x15c78cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_15c790:
    // 0x15c790: 0x30a30080  andi        $v1, $a1, 0x80
    ctx->pc = 0x15c790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
label_15c794:
    // 0x15c794: 0x1060ffe1  beqz        $v1, . + 4 + (-0x1F << 2)
label_15c798:
    if (ctx->pc == 0x15C798u) {
        ctx->pc = 0x15C798u;
            // 0x15c798: 0x2248821  addu        $s1, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->pc = 0x15C79Cu;
        goto label_15c79c;
    }
    ctx->pc = 0x15C794u;
    {
        const bool branch_taken_0x15c794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C794u;
            // 0x15c798: 0x2248821  addu        $s1, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c794) {
            ctx->pc = 0x15C71Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15c71c;
        }
    }
    ctx->pc = 0x15C79Cu;
label_15c79c:
    // 0x15c79c: 0xae1105e8  sw          $s1, 0x5E8($s0)
    ctx->pc = 0x15c79cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1512), GPR_U32(ctx, 17));
label_15c7a0:
    // 0x15c7a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15c7a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15c7a4:
    // 0x15c7a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15c7a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15c7a8:
    // 0x15c7a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15c7a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15c7ac:
    // 0x15c7ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15c7acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15c7b0:
    // 0x15c7b0: 0x3e00008  jr          $ra
label_15c7b4:
    if (ctx->pc == 0x15C7B4u) {
        ctx->pc = 0x15C7B4u;
            // 0x15c7b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x15C7B8u;
        goto label_15c7b8;
    }
    ctx->pc = 0x15C7B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C7B0u;
            // 0x15c7b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15C7B8u;
label_15c7b8:
    // 0x15c7b8: 0x0  nop
    ctx->pc = 0x15c7b8u;
    // NOP
label_15c7bc:
    // 0x15c7bc: 0x0  nop
    ctx->pc = 0x15c7bcu;
    // NOP
    ctx->pc = 0x15c7c0u;
}
