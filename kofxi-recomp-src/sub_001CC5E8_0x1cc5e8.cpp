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

// Function: sub_001CC5E8
// Address: 0x1cc5e8 - 0x1cc700
void sub_001CC5E8_0x1cc5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC5E8_0x1cc5e8");
#endif

    switch (ctx->pc) {
        case 0x1cc5e8u: goto label_1cc5e8;
        case 0x1cc5ecu: goto label_1cc5ec;
        case 0x1cc5f0u: goto label_1cc5f0;
        case 0x1cc5f4u: goto label_1cc5f4;
        case 0x1cc5f8u: goto label_1cc5f8;
        case 0x1cc5fcu: goto label_1cc5fc;
        case 0x1cc600u: goto label_1cc600;
        case 0x1cc604u: goto label_1cc604;
        case 0x1cc608u: goto label_1cc608;
        case 0x1cc60cu: goto label_1cc60c;
        case 0x1cc610u: goto label_1cc610;
        case 0x1cc614u: goto label_1cc614;
        case 0x1cc618u: goto label_1cc618;
        case 0x1cc61cu: goto label_1cc61c;
        case 0x1cc620u: goto label_1cc620;
        case 0x1cc624u: goto label_1cc624;
        case 0x1cc628u: goto label_1cc628;
        case 0x1cc62cu: goto label_1cc62c;
        case 0x1cc630u: goto label_1cc630;
        case 0x1cc634u: goto label_1cc634;
        case 0x1cc638u: goto label_1cc638;
        case 0x1cc63cu: goto label_1cc63c;
        case 0x1cc640u: goto label_1cc640;
        case 0x1cc644u: goto label_1cc644;
        case 0x1cc648u: goto label_1cc648;
        case 0x1cc64cu: goto label_1cc64c;
        case 0x1cc650u: goto label_1cc650;
        case 0x1cc654u: goto label_1cc654;
        case 0x1cc658u: goto label_1cc658;
        case 0x1cc65cu: goto label_1cc65c;
        case 0x1cc660u: goto label_1cc660;
        case 0x1cc664u: goto label_1cc664;
        case 0x1cc668u: goto label_1cc668;
        case 0x1cc66cu: goto label_1cc66c;
        case 0x1cc670u: goto label_1cc670;
        case 0x1cc674u: goto label_1cc674;
        case 0x1cc678u: goto label_1cc678;
        case 0x1cc67cu: goto label_1cc67c;
        case 0x1cc680u: goto label_1cc680;
        case 0x1cc684u: goto label_1cc684;
        case 0x1cc688u: goto label_1cc688;
        case 0x1cc68cu: goto label_1cc68c;
        case 0x1cc690u: goto label_1cc690;
        case 0x1cc694u: goto label_1cc694;
        case 0x1cc698u: goto label_1cc698;
        case 0x1cc69cu: goto label_1cc69c;
        case 0x1cc6a0u: goto label_1cc6a0;
        case 0x1cc6a4u: goto label_1cc6a4;
        case 0x1cc6a8u: goto label_1cc6a8;
        case 0x1cc6acu: goto label_1cc6ac;
        case 0x1cc6b0u: goto label_1cc6b0;
        case 0x1cc6b4u: goto label_1cc6b4;
        case 0x1cc6b8u: goto label_1cc6b8;
        case 0x1cc6bcu: goto label_1cc6bc;
        case 0x1cc6c0u: goto label_1cc6c0;
        case 0x1cc6c4u: goto label_1cc6c4;
        case 0x1cc6c8u: goto label_1cc6c8;
        case 0x1cc6ccu: goto label_1cc6cc;
        case 0x1cc6d0u: goto label_1cc6d0;
        case 0x1cc6d4u: goto label_1cc6d4;
        case 0x1cc6d8u: goto label_1cc6d8;
        case 0x1cc6dcu: goto label_1cc6dc;
        case 0x1cc6e0u: goto label_1cc6e0;
        case 0x1cc6e4u: goto label_1cc6e4;
        case 0x1cc6e8u: goto label_1cc6e8;
        case 0x1cc6ecu: goto label_1cc6ec;
        case 0x1cc6f0u: goto label_1cc6f0;
        case 0x1cc6f4u: goto label_1cc6f4;
        case 0x1cc6f8u: goto label_1cc6f8;
        case 0x1cc6fcu: goto label_1cc6fc;
        default: break;
    }

    ctx->pc = 0x1cc5e8u;

label_1cc5e8:
    // 0x1cc5e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1cc5ec:
    // 0x1cc5ec: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_1cc5f0:
    if (ctx->pc == 0x1CC5F0u) {
        ctx->pc = 0x1CC5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC5ECu;
        // 0x1cc5f0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC5F4u;
        goto label_1cc5f4;
    }
    ctx->pc = 0x1CC5ECu;
    {
        const bool branch_taken_0x1cc5ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC5ECu;
        // 0x1cc5f0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc5ec) {
            ctx->pc = 0x1CC608u;
            goto label_1cc608;
        }
    }
    ctx->pc = 0x1CC5F4u;
label_1cc5f4:
    // 0x1cc5f4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cc5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1cc5f8:
    // 0x1cc5f8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cc5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_1cc5fc:
    // 0x1cc5fc: 0x2484bc20  addiu       $a0, $a0, -0x43E0
    ctx->pc = 0x1cc5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949920));
label_1cc600:
    // 0x1cc600: 0x10000008  b           . + 4 + (0x8 << 2)
label_1cc604:
    if (ctx->pc == 0x1CC604u) {
        ctx->pc = 0x1CC604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC600u;
        // 0x1cc604: 0x24a5bb70  addiu       $a1, $a1, -0x4490 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC608u;
        goto label_1cc608;
    }
    ctx->pc = 0x1CC600u;
    {
        const bool branch_taken_0x1cc600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC600u;
        // 0x1cc604: 0x24a5bb70  addiu       $a1, $a1, -0x4490 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc600) {
            ctx->pc = 0x1CC624u;
            goto label_1cc624;
        }
    }
    ctx->pc = 0x1CC608u;
label_1cc608:
    // 0x1cc608: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x1cc608u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_1cc60c:
    // 0x1cc60c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_1cc610:
    if (ctx->pc == 0x1CC610u) {
        ctx->pc = 0x1CC610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC60Cu;
        // 0x1cc610: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC614u;
        goto label_1cc614;
    }
    ctx->pc = 0x1CC60Cu;
    {
        const bool branch_taken_0x1cc60c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc60c) {
            ctx->pc = 0x1CC610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC60Cu;
            // 0x1cc610: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC638u;
            goto label_1cc638;
        }
    }
    ctx->pc = 0x1CC614u;
label_1cc614:
    // 0x1cc614: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cc614u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1cc618:
    // 0x1cc618: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cc618u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_1cc61c:
    // 0x1cc61c: 0x2484bc30  addiu       $a0, $a0, -0x43D0
    ctx->pc = 0x1cc61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949936));
label_1cc620:
    // 0x1cc620: 0x24a5bba0  addiu       $a1, $a1, -0x4460
    ctx->pc = 0x1cc620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949792));
label_1cc624:
    // 0x1cc624: 0xc073006  jal         func_1CC018
label_1cc628:
    if (ctx->pc == 0x1CC628u) {
        ctx->pc = 0x1CC62Cu;
        goto label_1cc62c;
    }
    ctx->pc = 0x1CC624u;
    SET_GPR_U32(ctx, 31, 0x1CC62Cu);
    ctx->pc = 0x1CC018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC018u, 0x1CC624u, 0x1CC62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC62Cu;
label_1cc62c:
    // 0x1cc62c: 0x10000018  b           . + 4 + (0x18 << 2)
label_1cc630:
    if (ctx->pc == 0x1CC630u) {
        ctx->pc = 0x1CC630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC62Cu;
        // 0x1cc630: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC634u;
        goto label_1cc634;
    }
    ctx->pc = 0x1CC62Cu;
    {
        const bool branch_taken_0x1cc62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC62Cu;
        // 0x1cc630: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc62c) {
            ctx->pc = 0x1CC690u;
            goto label_1cc690;
        }
    }
    ctx->pc = 0x1CC634u;
label_1cc634:
    // 0x1cc634: 0x0  nop
    ctx->pc = 0x1cc634u;
    // NOP
label_1cc638:
    // 0x1cc638: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1cc63c:
    if (ctx->pc == 0x1CC63Cu) {
        ctx->pc = 0x1CC63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC638u;
        // 0x1cc63c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC640u;
        goto label_1cc640;
    }
    ctx->pc = 0x1CC638u;
    {
        const bool branch_taken_0x1cc638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC638u;
        // 0x1cc63c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc638) {
            ctx->pc = 0x1CC660u;
            goto label_1cc660;
        }
    }
    ctx->pc = 0x1CC640u;
label_1cc640:
    // 0x1cc640: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x1cc640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_1cc644:
    // 0x1cc644: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_1cc648:
    if (ctx->pc == 0x1CC648u) {
        ctx->pc = 0x1CC648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC644u;
        // 0x1cc648: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC64Cu;
        goto label_1cc64c;
    }
    ctx->pc = 0x1CC644u;
    {
        const bool branch_taken_0x1cc644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc644) {
            ctx->pc = 0x1CC648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC644u;
            // 0x1cc648: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC690u;
            goto label_1cc690;
        }
    }
    ctx->pc = 0x1CC64Cu;
label_1cc64c:
    // 0x1cc64c: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x1cc64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_1cc650:
    // 0x1cc650: 0x40f809  jalr        $v0
label_1cc654:
    if (ctx->pc == 0x1CC654u) {
        ctx->pc = 0x1CC654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC650u;
        // 0x1cc654: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC658u;
        goto label_1cc658;
    }
    ctx->pc = 0x1CC650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CC658u);
        ctx->pc = 0x1CC654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC650u;
        // 0x1cc654: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC650u, 0x1CC658u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CC658u;
label_1cc658:
    // 0x1cc658: 0x1000000d  b           . + 4 + (0xD << 2)
label_1cc65c:
    if (ctx->pc == 0x1CC65Cu) {
        ctx->pc = 0x1CC65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC658u;
        // 0x1cc65c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC660u;
        goto label_1cc660;
    }
    ctx->pc = 0x1CC658u;
    {
        const bool branch_taken_0x1cc658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC658u;
        // 0x1cc65c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc658) {
            ctx->pc = 0x1CC690u;
            goto label_1cc690;
        }
    }
    ctx->pc = 0x1CC660u;
label_1cc660:
    // 0x1cc660: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1cc660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1cc664:
    // 0x1cc664: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x1cc664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1cc668:
    // 0x1cc668: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_1cc66c:
    if (ctx->pc == 0x1CC66Cu) {
        ctx->pc = 0x1CC66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC668u;
        // 0x1cc66c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC670u;
        goto label_1cc670;
    }
    ctx->pc = 0x1CC668u;
    {
        const bool branch_taken_0x1cc668 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC668u;
        // 0x1cc66c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc668) {
            ctx->pc = 0x1CC68Cu;
            goto label_1cc68c;
        }
    }
    ctx->pc = 0x1CC670u;
label_1cc670:
    // 0x1cc670: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1cc670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1cc674:
    // 0x1cc674: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1cc674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cc678:
    // 0x1cc678: 0x0  nop
    ctx->pc = 0x1cc678u;
    // NOP
label_1cc67c:
    // 0x1cc67c: 0x0  nop
    ctx->pc = 0x1cc67cu;
    // NOP
label_1cc680:
    // 0x1cc680: 0x0  nop
    ctx->pc = 0x1cc680u;
    // NOP
label_1cc684:
    // 0x1cc684: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_1cc688:
    if (ctx->pc == 0x1CC688u) {
        ctx->pc = 0x1CC688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC684u;
        // 0x1cc688: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC68Cu;
        goto label_1cc68c;
    }
    ctx->pc = 0x1CC684u;
    {
        const bool branch_taken_0x1cc684 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC684u;
        // 0x1cc688: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc684) {
            ctx->pc = 0x1CC670u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cc670;
        }
    }
    ctx->pc = 0x1CC68Cu;
label_1cc68c:
    // 0x1cc68c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1cc68cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1cc690:
    // 0x1cc690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cc694:
    // 0x1cc694: 0x3e00008  jr          $ra
label_1cc698:
    if (ctx->pc == 0x1CC698u) {
        ctx->pc = 0x1CC698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC694u;
        // 0x1cc698: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC69Cu;
        goto label_1cc69c;
    }
    ctx->pc = 0x1CC694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC694u;
        // 0x1cc698: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC69Cu;
label_1cc69c:
    // 0x1cc69c: 0x0  nop
    ctx->pc = 0x1cc69cu;
    // NOP
label_1cc6a0:
    // 0x1cc6a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cc6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1cc6a4:
    // 0x1cc6a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1cc6a8:
    // 0x1cc6a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cc6a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cc6ac:
    // 0x1cc6ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cc6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1cc6b0:
    // 0x1cc6b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cc6b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cc6b4:
    // 0x1cc6b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cc6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1cc6b8:
    // 0x1cc6b8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1cc6b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1cc6bc:
    // 0x1cc6bc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cc6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1cc6c0:
    // 0x1cc6c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cc6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1cc6c4:
    // 0x1cc6c4: 0xc0729fa  jal         func_1CA7E8
label_1cc6c8:
    if (ctx->pc == 0x1CC6C8u) {
        ctx->pc = 0x1CC6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6C4u;
        // 0x1cc6c8: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC6CCu;
        goto label_1cc6cc;
    }
    ctx->pc = 0x1CC6C4u;
    SET_GPR_U32(ctx, 31, 0x1CC6CCu);
    ctx->pc = 0x1CC6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC6C4u;
    // 0x1cc6c8: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA7E8u, 0x1CC6C4u, 0x1CC6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC6CCu;
label_1cc6cc:
    // 0x1cc6cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cc6d0:
    // 0x1cc6d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cc6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cc6d4:
    // 0x1cc6d4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1cc6d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cc6d8:
    // 0x1cc6d8: 0xc0731c0  jal         func_1CC700
label_1cc6dc:
    if (ctx->pc == 0x1CC6DCu) {
        ctx->pc = 0x1CC6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6D8u;
        // 0x1cc6dc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC6E0u;
        goto label_1cc6e0;
    }
    ctx->pc = 0x1CC6D8u;
    SET_GPR_U32(ctx, 31, 0x1CC6E0u);
    ctx->pc = 0x1CC6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC6D8u;
    // 0x1cc6dc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC700u, 0x1CC6D8u, 0x1CC6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC6E0u;
label_1cc6e0:
    // 0x1cc6e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc6e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cc6e4:
    // 0x1cc6e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cc6e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1cc6e8:
    // 0x1cc6e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cc6e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cc6ec:
    // 0x1cc6ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cc6ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1cc6f0:
    // 0x1cc6f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cc6f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc6f4:
    // 0x1cc6f4: 0x8072a00  j           func_1CA800
label_1cc6f8:
    if (ctx->pc == 0x1CC6F8u) {
        ctx->pc = 0x1CC6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC6F4u;
        // 0x1cc6f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CC6FCu;
        goto label_1cc6fc;
    }
    ctx->pc = 0x1CC6F4u;
    ctx->pc = 0x1CC6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC6F4u;
    // 0x1cc6f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA800u;
    sub_001CA800_0x1ca800(rdram, ctx, runtime); return;
    ctx->pc = 0x1CC6FCu;
label_1cc6fc:
    // 0x1cc6fc: 0x0  nop
    ctx->pc = 0x1cc6fcu;
    // NOP
    if (ctx->pc == 0x1cc6fcu) { ctx->pc = 0x1cc700u; }
}
