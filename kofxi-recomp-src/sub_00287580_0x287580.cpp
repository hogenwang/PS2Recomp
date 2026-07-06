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

// Function: sub_00287580
// Address: 0x287580 - 0x287658
void sub_00287580_0x287580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287580_0x287580");
#endif

    switch (ctx->pc) {
        case 0x287580u: goto label_287580;
        case 0x287584u: goto label_287584;
        case 0x287588u: goto label_287588;
        case 0x28758cu: goto label_28758c;
        case 0x287590u: goto label_287590;
        case 0x287594u: goto label_287594;
        case 0x287598u: goto label_287598;
        case 0x28759cu: goto label_28759c;
        case 0x2875a0u: goto label_2875a0;
        case 0x2875a4u: goto label_2875a4;
        case 0x2875a8u: goto label_2875a8;
        case 0x2875acu: goto label_2875ac;
        case 0x2875b0u: goto label_2875b0;
        case 0x2875b4u: goto label_2875b4;
        case 0x2875b8u: goto label_2875b8;
        case 0x2875bcu: goto label_2875bc;
        case 0x2875c0u: goto label_2875c0;
        case 0x2875c4u: goto label_2875c4;
        case 0x2875c8u: goto label_2875c8;
        case 0x2875ccu: goto label_2875cc;
        case 0x2875d0u: goto label_2875d0;
        case 0x2875d4u: goto label_2875d4;
        case 0x2875d8u: goto label_2875d8;
        case 0x2875dcu: goto label_2875dc;
        case 0x2875e0u: goto label_2875e0;
        case 0x2875e4u: goto label_2875e4;
        case 0x2875e8u: goto label_2875e8;
        case 0x2875ecu: goto label_2875ec;
        case 0x2875f0u: goto label_2875f0;
        case 0x2875f4u: goto label_2875f4;
        case 0x2875f8u: goto label_2875f8;
        case 0x2875fcu: goto label_2875fc;
        case 0x287600u: goto label_287600;
        case 0x287604u: goto label_287604;
        case 0x287608u: goto label_287608;
        case 0x28760cu: goto label_28760c;
        case 0x287610u: goto label_287610;
        case 0x287614u: goto label_287614;
        case 0x287618u: goto label_287618;
        case 0x28761cu: goto label_28761c;
        case 0x287620u: goto label_287620;
        case 0x287624u: goto label_287624;
        case 0x287628u: goto label_287628;
        case 0x28762cu: goto label_28762c;
        case 0x287630u: goto label_287630;
        case 0x287634u: goto label_287634;
        case 0x287638u: goto label_287638;
        case 0x28763cu: goto label_28763c;
        case 0x287640u: goto label_287640;
        case 0x287644u: goto label_287644;
        case 0x287648u: goto label_287648;
        case 0x28764cu: goto label_28764c;
        case 0x287650u: goto label_287650;
        case 0x287654u: goto label_287654;
        default: break;
    }

    ctx->pc = 0x287580u;

label_287580:
    // 0x287580: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x287580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_287584:
    // 0x287584: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x287584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_287588:
    // 0x287588: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x287588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_28758c:
    // 0x28758c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x28758cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_287590:
    // 0x287590: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x287590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_287594:
    // 0x287594: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x287594u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_287598:
    // 0x287598: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x287598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_28759c:
    // 0x28759c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x28759cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2875a0:
    // 0x2875a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2875a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2875a4:
    // 0x2875a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2875a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2875a8:
    // 0x2875a8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2875a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2875ac:
    // 0x2875ac: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2875acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2875b0:
    // 0x2875b0: 0xc0a3dd0  jal         func_28F740
label_2875b4:
    if (ctx->pc == 0x2875B4u) {
        ctx->pc = 0x2875B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2875B0u;
        // 0x2875b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2875B8u;
        goto label_2875b8;
    }
    ctx->pc = 0x2875B0u;
    SET_GPR_U32(ctx, 31, 0x2875B8u);
    ctx->pc = 0x2875B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2875B0u;
    // 0x2875b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F740u, 0x2875B0u, 0x2875B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2875B8u;
label_2875b8:
    // 0x2875b8: 0x8c51000c  lw          $s1, 0xC($v0)
    ctx->pc = 0x2875b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2875bc:
    // 0x2875bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2875bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2875c0:
    // 0x2875c0: 0x16620014  bne         $s3, $v0, . + 4 + (0x14 << 2)
label_2875c4:
    if (ctx->pc == 0x2875C4u) {
        ctx->pc = 0x2875C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2875C0u;
        // 0x2875c4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2875C8u;
        goto label_2875c8;
    }
    ctx->pc = 0x2875C0u;
    {
        const bool branch_taken_0x2875c0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2875C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2875C0u;
        // 0x2875c4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2875c0) {
            ctx->pc = 0x287614u;
            goto label_287614;
        }
    }
    ctx->pc = 0x2875C8u;
label_2875c8:
    // 0x2875c8: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_2875cc:
    if (ctx->pc == 0x2875CCu) {
        ctx->pc = 0x2875CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2875C8u;
        // 0x2875cc: 0x32820001  andi        $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2875D0u;
        goto label_2875d0;
    }
    ctx->pc = 0x2875C8u;
    {
        const bool branch_taken_0x2875c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2875CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2875C8u;
        // 0x2875cc: 0x32820001  andi        $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2875c8) {
            ctx->pc = 0x287614u;
            goto label_287614;
        }
    }
    ctx->pc = 0x2875D0u;
label_2875d0:
    // 0x2875d0: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_2875d4:
    if (ctx->pc == 0x2875D4u) {
        ctx->pc = 0x2875D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2875D0u;
        // 0x2875d4: 0x8c620018  lw          $v0, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2875D8u;
        goto label_2875d8;
    }
    ctx->pc = 0x2875D0u;
    {
        const bool branch_taken_0x2875d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2875d0) {
            ctx->pc = 0x2875D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2875D0u;
            // 0x2875d4: 0x8c620018  lw          $v0, 0x18($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287618u;
            goto label_287618;
        }
    }
    ctx->pc = 0x2875D8u;
label_2875d8:
    // 0x2875d8: 0xc0a1a02  jal         func_286808
label_2875dc:
    if (ctx->pc == 0x2875DCu) {
        ctx->pc = 0x2875DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2875D8u;
        // 0x2875dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2875E0u;
        goto label_2875e0;
    }
    ctx->pc = 0x2875D8u;
    SET_GPR_U32(ctx, 31, 0x2875E0u);
    ctx->pc = 0x2875DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2875D8u;
    // 0x2875dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286808u, 0x2875D8u, 0x2875E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2875E0u;
label_2875e0:
    // 0x2875e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2875e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2875e4:
    // 0x2875e4: 0xc0a25cc  jal         func_289730
label_2875e8:
    if (ctx->pc == 0x2875E8u) {
        ctx->pc = 0x2875E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2875E4u;
        // 0x2875e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2875ECu;
        goto label_2875ec;
    }
    ctx->pc = 0x2875E4u;
    SET_GPR_U32(ctx, 31, 0x2875ECu);
    ctx->pc = 0x2875E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2875E4u;
    // 0x2875e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289730u, 0x2875E4u, 0x2875ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2875ECu;
label_2875ec:
    // 0x2875ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2875f0:
    if (ctx->pc == 0x2875F0u) {
        ctx->pc = 0x2875F4u;
        goto label_2875f4;
    }
    ctx->pc = 0x2875ECu;
    {
        const bool branch_taken_0x2875ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2875ec) {
            ctx->pc = 0x287604u;
            goto label_287604;
        }
    }
    ctx->pc = 0x2875F4u;
label_2875f4:
    // 0x2875f4: 0x40f809  jalr        $v0
label_2875f8:
    if (ctx->pc == 0x2875F8u) {
        ctx->pc = 0x2875FCu;
        goto label_2875fc;
    }
    ctx->pc = 0x2875F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2875FCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2875F4u, 0x2875FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2875FCu;
label_2875fc:
    // 0x2875fc: 0x10000004  b           . + 4 + (0x4 << 2)
label_287600:
    if (ctx->pc == 0x287600u) {
        ctx->pc = 0x287600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2875FCu;
        // 0x287600: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287604u;
        goto label_287604;
    }
    ctx->pc = 0x2875FCu;
    {
        const bool branch_taken_0x2875fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2875FCu;
        // 0x287600: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2875fc) {
            ctx->pc = 0x287610u;
            goto label_287610;
        }
    }
    ctx->pc = 0x287604u;
label_287604:
    // 0x287604: 0x220f809  jalr        $s1
label_287608:
    if (ctx->pc == 0x287608u) {
        ctx->pc = 0x28760Cu;
        goto label_28760c;
    }
    ctx->pc = 0x287604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 17);
        SET_GPR_U32(ctx, 31, 0x28760Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287604u, 0x28760Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28760Cu;
label_28760c:
    // 0x28760c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28760cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_287610:
    // 0x287610: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x287610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_287614:
    // 0x287614: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x287614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_287618:
    // 0x287618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28761c:
    // 0x28761c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28761cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287620:
    // 0x287620: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x287620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_287624:
    // 0x287624: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x287624u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287628:
    // 0x287628: 0x40f809  jalr        $v0
label_28762c:
    if (ctx->pc == 0x28762Cu) {
        ctx->pc = 0x28762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287628u;
        // 0x28762c: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287630u;
        goto label_287630;
    }
    ctx->pc = 0x287628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x287630u);
        ctx->pc = 0x28762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287628u;
        // 0x28762c: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287628u, 0x287630u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x287630u;
label_287630:
    // 0x287630: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x287630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_287634:
    // 0x287634: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x287634u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_287638:
    // 0x287638: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x287638u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_28763c:
    // 0x28763c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x28763cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_287640:
    // 0x287640: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x287640u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_287644:
    // 0x287644: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x287644u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_287648:
    // 0x287648: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x287648u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28764c:
    // 0x28764c: 0x3e00008  jr          $ra
label_287650:
    if (ctx->pc == 0x287650u) {
        ctx->pc = 0x287650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28764Cu;
        // 0x287650: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287654u;
        goto label_287654;
    }
    ctx->pc = 0x28764Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28764Cu;
        // 0x287650: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28764Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287654u;
label_287654:
    // 0x287654: 0x0  nop
    ctx->pc = 0x287654u;
    // NOP
}
