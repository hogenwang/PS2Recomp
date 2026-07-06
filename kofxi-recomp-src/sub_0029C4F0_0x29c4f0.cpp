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

// Function: sub_0029C4F0
// Address: 0x29c4f0 - 0x29c640
void sub_0029C4F0_0x29c4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C4F0_0x29c4f0");
#endif

    switch (ctx->pc) {
        case 0x29c4f0u: goto label_29c4f0;
        case 0x29c4f4u: goto label_29c4f4;
        case 0x29c4f8u: goto label_29c4f8;
        case 0x29c4fcu: goto label_29c4fc;
        case 0x29c500u: goto label_29c500;
        case 0x29c504u: goto label_29c504;
        case 0x29c508u: goto label_29c508;
        case 0x29c50cu: goto label_29c50c;
        case 0x29c510u: goto label_29c510;
        case 0x29c514u: goto label_29c514;
        case 0x29c518u: goto label_29c518;
        case 0x29c51cu: goto label_29c51c;
        case 0x29c520u: goto label_29c520;
        case 0x29c524u: goto label_29c524;
        case 0x29c528u: goto label_29c528;
        case 0x29c52cu: goto label_29c52c;
        case 0x29c530u: goto label_29c530;
        case 0x29c534u: goto label_29c534;
        case 0x29c538u: goto label_29c538;
        case 0x29c53cu: goto label_29c53c;
        case 0x29c540u: goto label_29c540;
        case 0x29c544u: goto label_29c544;
        case 0x29c548u: goto label_29c548;
        case 0x29c54cu: goto label_29c54c;
        case 0x29c550u: goto label_29c550;
        case 0x29c554u: goto label_29c554;
        case 0x29c558u: goto label_29c558;
        case 0x29c55cu: goto label_29c55c;
        case 0x29c560u: goto label_29c560;
        case 0x29c564u: goto label_29c564;
        case 0x29c568u: goto label_29c568;
        case 0x29c56cu: goto label_29c56c;
        case 0x29c570u: goto label_29c570;
        case 0x29c574u: goto label_29c574;
        case 0x29c578u: goto label_29c578;
        case 0x29c57cu: goto label_29c57c;
        case 0x29c580u: goto label_29c580;
        case 0x29c584u: goto label_29c584;
        case 0x29c588u: goto label_29c588;
        case 0x29c58cu: goto label_29c58c;
        case 0x29c590u: goto label_29c590;
        case 0x29c594u: goto label_29c594;
        case 0x29c598u: goto label_29c598;
        case 0x29c59cu: goto label_29c59c;
        case 0x29c5a0u: goto label_29c5a0;
        case 0x29c5a4u: goto label_29c5a4;
        case 0x29c5a8u: goto label_29c5a8;
        case 0x29c5acu: goto label_29c5ac;
        case 0x29c5b0u: goto label_29c5b0;
        case 0x29c5b4u: goto label_29c5b4;
        case 0x29c5b8u: goto label_29c5b8;
        case 0x29c5bcu: goto label_29c5bc;
        case 0x29c5c0u: goto label_29c5c0;
        case 0x29c5c4u: goto label_29c5c4;
        case 0x29c5c8u: goto label_29c5c8;
        case 0x29c5ccu: goto label_29c5cc;
        case 0x29c5d0u: goto label_29c5d0;
        case 0x29c5d4u: goto label_29c5d4;
        case 0x29c5d8u: goto label_29c5d8;
        case 0x29c5dcu: goto label_29c5dc;
        case 0x29c5e0u: goto label_29c5e0;
        case 0x29c5e4u: goto label_29c5e4;
        case 0x29c5e8u: goto label_29c5e8;
        case 0x29c5ecu: goto label_29c5ec;
        case 0x29c5f0u: goto label_29c5f0;
        case 0x29c5f4u: goto label_29c5f4;
        case 0x29c5f8u: goto label_29c5f8;
        case 0x29c5fcu: goto label_29c5fc;
        case 0x29c600u: goto label_29c600;
        case 0x29c604u: goto label_29c604;
        case 0x29c608u: goto label_29c608;
        case 0x29c60cu: goto label_29c60c;
        case 0x29c610u: goto label_29c610;
        case 0x29c614u: goto label_29c614;
        case 0x29c618u: goto label_29c618;
        case 0x29c61cu: goto label_29c61c;
        case 0x29c620u: goto label_29c620;
        case 0x29c624u: goto label_29c624;
        case 0x29c628u: goto label_29c628;
        case 0x29c62cu: goto label_29c62c;
        case 0x29c630u: goto label_29c630;
        case 0x29c634u: goto label_29c634;
        case 0x29c638u: goto label_29c638;
        case 0x29c63cu: goto label_29c63c;
        default: break;
    }

    ctx->pc = 0x29c4f0u;

label_29c4f0:
    // 0x29c4f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x29c4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_29c4f4:
    // 0x29c4f4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29c4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_29c4f8:
    // 0x29c4f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29c4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29c4fc:
    // 0x29c4fc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x29c4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_29c500:
    // 0x29c500: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29c500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29c504:
    // 0x29c504: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x29c504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_29c508:
    // 0x29c508: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x29c508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29c50c:
    // 0x29c50c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x29c50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_29c510:
    // 0x29c510: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29c510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_29c514:
    // 0x29c514: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x29c514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_29c518:
    // 0x29c518: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x29c518u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_29c51c:
    // 0x29c51c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x29c51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_29c520:
    // 0x29c520: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x29c520u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
label_29c524:
    // 0x29c524: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x29c524u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
label_29c528:
    // 0x29c528: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_29c52c:
    if (ctx->pc == 0x29C52Cu) {
        ctx->pc = 0x29C52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C528u;
        // 0x29c52c: 0x8e13001c  lw          $s3, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C530u;
        goto label_29c530;
    }
    ctx->pc = 0x29C528u;
    {
        const bool branch_taken_0x29c528 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C528u;
        // 0x29c52c: 0x8e13001c  lw          $s3, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c528) {
            ctx->pc = 0x29C538u;
            goto label_29c538;
        }
    }
    ctx->pc = 0x29C530u;
label_29c530:
    // 0x29c530: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x29c530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_29c534:
    // 0x29c534: 0x2900a  movz        $s2, $zero, $v0
    ctx->pc = 0x29c534u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_29c538:
    // 0x29c538: 0xae0500cc  sw          $a1, 0xCC($s0)
    ctx->pc = 0x29c538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 5));
label_29c53c:
    // 0x29c53c: 0x10000024  b           . + 4 + (0x24 << 2)
label_29c540:
    if (ctx->pc == 0x29C540u) {
        ctx->pc = 0x29C540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C53Cu;
        // 0x29c540: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C544u;
        goto label_29c544;
    }
    ctx->pc = 0x29C53Cu;
    {
        const bool branch_taken_0x29c53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C53Cu;
        // 0x29c540: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c53c) {
            ctx->pc = 0x29C5D0u;
            goto label_29c5d0;
        }
    }
    ctx->pc = 0x29C544u;
label_29c544:
    // 0x29c544: 0x0  nop
    ctx->pc = 0x29c544u;
    // NOP
label_29c548:
    // 0x29c548: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x29c548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_29c54c:
    // 0x29c54c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x29c54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_29c550:
    // 0x29c550: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x29c550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_29c554:
    // 0x29c554: 0xdc470000  ld          $a3, 0x0($v0)
    ctx->pc = 0x29c554u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_29c558:
    // 0x29c558: 0x10e0002f  beqz        $a3, . + 4 + (0x2F << 2)
label_29c55c:
    if (ctx->pc == 0x29C55Cu) {
        ctx->pc = 0x29C55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C558u;
        // 0x29c55c: 0xae030020  sw          $v1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C560u;
        goto label_29c560;
    }
    ctx->pc = 0x29C558u;
    {
        const bool branch_taken_0x29c558 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C558u;
        // 0x29c55c: 0xae030020  sw          $v1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c558) {
            ctx->pc = 0x29C618u;
            goto label_29c618;
        }
    }
    ctx->pc = 0x29C560u;
label_29c560:
    // 0x29c560: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x29c560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_29c564:
    // 0x29c564: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29c564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29c568:
    // 0x29c568: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x29c568u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
label_29c56c:
    // 0x29c56c: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x29c56cu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_29c570:
    // 0x29c570: 0x7463a  dsrl        $t0, $a3, 24
    ctx->pc = 0x29c570u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) >> 24);
label_29c574:
    // 0x29c574: 0x111902  srl         $v1, $s1, 4
    ctx->pc = 0x29c574u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
label_29c578:
    // 0x29c578: 0x7323a  dsrl        $a2, $a3, 8
    ctx->pc = 0x29c578u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) >> 8);
label_29c57c:
    // 0x29c57c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29c57cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_29c580:
    // 0x29c580: 0x73c3a  dsrl        $a3, $a3, 16
    ctx->pc = 0x29c580u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 16);
label_29c584:
    // 0x29c584: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x29c584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_29c588:
    // 0x29c588: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x29c588u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_29c58c:
    // 0x29c58c: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x29c58cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_29c590:
    // 0x29c590: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x29c590u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_29c594:
    // 0x29c594: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x29c594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29c598:
    // 0x29c598: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29c598u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
label_29c59c:
    // 0x29c59c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x29c59cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_29c5a0:
    // 0x29c5a0: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x29c5a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
label_29c5a4:
    // 0x29c5a4: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x29c5a4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
label_29c5a8:
    // 0x29c5a8: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x29c5a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
label_29c5ac:
    // 0x29c5ac: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x29c5acu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
label_29c5b0:
    // 0x29c5b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29c5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29c5b4:
    // 0x29c5b4: 0x40f809  jalr        $v0
label_29c5b8:
    if (ctx->pc == 0x29C5B8u) {
        ctx->pc = 0x29C5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C5B4u;
        // 0x29c5b8: 0x3225000f  andi        $a1, $s1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C5BCu;
        goto label_29c5bc;
    }
    ctx->pc = 0x29C5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29C5BCu);
        ctx->pc = 0x29C5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C5B4u;
        // 0x29c5b8: 0x3225000f  andi        $a1, $s1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C5B4u, 0x29C5BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29C5BCu;
label_29c5bc:
    // 0x29c5bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29c5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29c5c0:
    // 0x29c5c0: 0x14800016  bnez        $a0, . + 4 + (0x16 << 2)
label_29c5c4:
    if (ctx->pc == 0x29C5C4u) {
        ctx->pc = 0x29C5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C5C0u;
        // 0x29c5c4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C5C8u;
        goto label_29c5c8;
    }
    ctx->pc = 0x29C5C0u;
    {
        const bool branch_taken_0x29c5c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C5C0u;
        // 0x29c5c4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c5c0) {
            ctx->pc = 0x29C61Cu;
            goto label_29c61c;
        }
    }
    ctx->pc = 0x29C5C8u;
label_29c5c8:
    // 0x29c5c8: 0x12340015  beq         $s1, $s4, . + 4 + (0x15 << 2)
label_29c5cc:
    if (ctx->pc == 0x29C5CCu) {
        ctx->pc = 0x29C5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C5C8u;
        // 0x29c5cc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C5D0u;
        goto label_29c5d0;
    }
    ctx->pc = 0x29C5C8u;
    {
        const bool branch_taken_0x29c5c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        ctx->pc = 0x29C5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C5C8u;
        // 0x29c5cc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c5c8) {
            ctx->pc = 0x29C620u;
            goto label_29c620;
        }
    }
    ctx->pc = 0x29C5D0u;
label_29c5d0:
    // 0x29c5d0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x29c5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_29c5d4:
    // 0x29c5d4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x29c5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_29c5d8:
    // 0x29c5d8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x29c5d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_29c5dc:
    // 0x29c5dc: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_29c5e0:
    if (ctx->pc == 0x29C5E0u) {
        ctx->pc = 0x29C5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C5DCu;
        // 0x29c5e0: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C5E4u;
        goto label_29c5e4;
    }
    ctx->pc = 0x29C5DCu;
    {
        const bool branch_taken_0x29c5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C5DCu;
        // 0x29c5e0: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c5dc) {
            ctx->pc = 0x29C61Cu;
            goto label_29c61c;
        }
    }
    ctx->pc = 0x29C5E4u;
label_29c5e4:
    // 0x29c5e4: 0x1240ffd8  beqz        $s2, . + 4 + (-0x28 << 2)
label_29c5e8:
    if (ctx->pc == 0x29C5E8u) {
        ctx->pc = 0x29C5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C5E4u;
        // 0x29c5e8: 0x26060048  addiu       $a2, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C5ECu;
        goto label_29c5ec;
    }
    ctx->pc = 0x29C5E4u;
    {
        const bool branch_taken_0x29c5e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C5E4u;
        // 0x29c5e8: 0x26060048  addiu       $a2, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c5e4) {
            ctx->pc = 0x29C548u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29c548;
        }
    }
    ctx->pc = 0x29C5ECu;
label_29c5ec:
    // 0x29c5ec: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x29c5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_29c5f0:
    // 0x29c5f0: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x29c5f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_29c5f4:
    // 0x29c5f4: 0x8e0500cc  lw          $a1, 0xCC($s0)
    ctx->pc = 0x29c5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_29c5f8:
    // 0x29c5f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29c5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29c5fc:
    // 0x29c5fc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x29c5fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_29c600:
    // 0x29c600: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29c600u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29c604:
    // 0x29c604: 0x40f809  jalr        $v0
label_29c608:
    if (ctx->pc == 0x29C608u) {
        ctx->pc = 0x29C608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C604u;
        // 0x29c608: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C60Cu;
        goto label_29c60c;
    }
    ctx->pc = 0x29C604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29C60Cu);
        ctx->pc = 0x29C608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C604u;
        // 0x29c608: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C604u, 0x29C60Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29C60Cu;
label_29c60c:
    // 0x29c60c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29c60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29c610:
    // 0x29c610: 0x5080ffcd  beql        $a0, $zero, . + 4 + (-0x33 << 2)
label_29c614:
    if (ctx->pc == 0x29C614u) {
        ctx->pc = 0x29C614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C610u;
        // 0x29c614: 0x8e030020  lw          $v1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C618u;
        goto label_29c618;
    }
    ctx->pc = 0x29C610u;
    {
        const bool branch_taken_0x29c610 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c610) {
            ctx->pc = 0x29C614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C610u;
            // 0x29c614: 0x8e030020  lw          $v1, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C548u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29c548;
        }
    }
    ctx->pc = 0x29C618u;
label_29c618:
    // 0x29c618: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x29c618u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29c61c:
    // 0x29c61c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x29c61cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_29c620:
    // 0x29c620: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x29c620u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_29c624:
    // 0x29c624: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x29c624u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29c628:
    // 0x29c628: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29c628u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29c62c:
    // 0x29c62c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29c62cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29c630:
    // 0x29c630: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29c630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29c634:
    // 0x29c634: 0x3e00008  jr          $ra
label_29c638:
    if (ctx->pc == 0x29C638u) {
        ctx->pc = 0x29C638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C634u;
        // 0x29c638: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C63Cu;
        goto label_29c63c;
    }
    ctx->pc = 0x29C634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C634u;
        // 0x29c638: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C63Cu;
label_29c63c:
    // 0x29c63c: 0x0  nop
    ctx->pc = 0x29c63cu;
    // NOP
    if (ctx->pc == 0x29c63cu) { ctx->pc = 0x29c640u; }
}
