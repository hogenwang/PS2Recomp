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

// Function: sub_002F4868
// Address: 0x2f4868 - 0x2f49e0
void sub_002F4868_0x2f4868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4868_0x2f4868");
#endif

    switch (ctx->pc) {
        case 0x2f4868u: goto label_2f4868;
        case 0x2f486cu: goto label_2f486c;
        case 0x2f4870u: goto label_2f4870;
        case 0x2f4874u: goto label_2f4874;
        case 0x2f4878u: goto label_2f4878;
        case 0x2f487cu: goto label_2f487c;
        case 0x2f4880u: goto label_2f4880;
        case 0x2f4884u: goto label_2f4884;
        case 0x2f4888u: goto label_2f4888;
        case 0x2f488cu: goto label_2f488c;
        case 0x2f4890u: goto label_2f4890;
        case 0x2f4894u: goto label_2f4894;
        case 0x2f4898u: goto label_2f4898;
        case 0x2f489cu: goto label_2f489c;
        case 0x2f48a0u: goto label_2f48a0;
        case 0x2f48a4u: goto label_2f48a4;
        case 0x2f48a8u: goto label_2f48a8;
        case 0x2f48acu: goto label_2f48ac;
        case 0x2f48b0u: goto label_2f48b0;
        case 0x2f48b4u: goto label_2f48b4;
        case 0x2f48b8u: goto label_2f48b8;
        case 0x2f48bcu: goto label_2f48bc;
        case 0x2f48c0u: goto label_2f48c0;
        case 0x2f48c4u: goto label_2f48c4;
        case 0x2f48c8u: goto label_2f48c8;
        case 0x2f48ccu: goto label_2f48cc;
        case 0x2f48d0u: goto label_2f48d0;
        case 0x2f48d4u: goto label_2f48d4;
        case 0x2f48d8u: goto label_2f48d8;
        case 0x2f48dcu: goto label_2f48dc;
        case 0x2f48e0u: goto label_2f48e0;
        case 0x2f48e4u: goto label_2f48e4;
        case 0x2f48e8u: goto label_2f48e8;
        case 0x2f48ecu: goto label_2f48ec;
        case 0x2f48f0u: goto label_2f48f0;
        case 0x2f48f4u: goto label_2f48f4;
        case 0x2f48f8u: goto label_2f48f8;
        case 0x2f48fcu: goto label_2f48fc;
        case 0x2f4900u: goto label_2f4900;
        case 0x2f4904u: goto label_2f4904;
        case 0x2f4908u: goto label_2f4908;
        case 0x2f490cu: goto label_2f490c;
        case 0x2f4910u: goto label_2f4910;
        case 0x2f4914u: goto label_2f4914;
        case 0x2f4918u: goto label_2f4918;
        case 0x2f491cu: goto label_2f491c;
        case 0x2f4920u: goto label_2f4920;
        case 0x2f4924u: goto label_2f4924;
        case 0x2f4928u: goto label_2f4928;
        case 0x2f492cu: goto label_2f492c;
        case 0x2f4930u: goto label_2f4930;
        case 0x2f4934u: goto label_2f4934;
        case 0x2f4938u: goto label_2f4938;
        case 0x2f493cu: goto label_2f493c;
        case 0x2f4940u: goto label_2f4940;
        case 0x2f4944u: goto label_2f4944;
        case 0x2f4948u: goto label_2f4948;
        case 0x2f494cu: goto label_2f494c;
        case 0x2f4950u: goto label_2f4950;
        case 0x2f4954u: goto label_2f4954;
        case 0x2f4958u: goto label_2f4958;
        case 0x2f495cu: goto label_2f495c;
        case 0x2f4960u: goto label_2f4960;
        case 0x2f4964u: goto label_2f4964;
        case 0x2f4968u: goto label_2f4968;
        case 0x2f496cu: goto label_2f496c;
        case 0x2f4970u: goto label_2f4970;
        case 0x2f4974u: goto label_2f4974;
        case 0x2f4978u: goto label_2f4978;
        case 0x2f497cu: goto label_2f497c;
        case 0x2f4980u: goto label_2f4980;
        case 0x2f4984u: goto label_2f4984;
        case 0x2f4988u: goto label_2f4988;
        case 0x2f498cu: goto label_2f498c;
        case 0x2f4990u: goto label_2f4990;
        case 0x2f4994u: goto label_2f4994;
        case 0x2f4998u: goto label_2f4998;
        case 0x2f499cu: goto label_2f499c;
        case 0x2f49a0u: goto label_2f49a0;
        case 0x2f49a4u: goto label_2f49a4;
        case 0x2f49a8u: goto label_2f49a8;
        case 0x2f49acu: goto label_2f49ac;
        case 0x2f49b0u: goto label_2f49b0;
        case 0x2f49b4u: goto label_2f49b4;
        case 0x2f49b8u: goto label_2f49b8;
        case 0x2f49bcu: goto label_2f49bc;
        case 0x2f49c0u: goto label_2f49c0;
        case 0x2f49c4u: goto label_2f49c4;
        case 0x2f49c8u: goto label_2f49c8;
        case 0x2f49ccu: goto label_2f49cc;
        case 0x2f49d0u: goto label_2f49d0;
        case 0x2f49d4u: goto label_2f49d4;
        case 0x2f49d8u: goto label_2f49d8;
        case 0x2f49dcu: goto label_2f49dc;
        default: break;
    }

    ctx->pc = 0x2f4868u;

label_2f4868:
    // 0x2f4868: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f4868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2f486c:
    // 0x2f486c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f486cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4870:
    // 0x2f4870: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2f4870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_2f4874:
    // 0x2f4874: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f4874u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f4878:
    // 0x2f4878: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f4878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2f487c:
    // 0x2f487c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f487cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2f4880:
    // 0x2f4880: 0xc0bc812  jal         func_2F2048
label_2f4884:
    if (ctx->pc == 0x2F4884u) {
        ctx->pc = 0x2F4884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4880u;
        // 0x2f4884: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4888u;
        goto label_2f4888;
    }
    ctx->pc = 0x2F4880u;
    SET_GPR_U32(ctx, 31, 0x2F4888u);
    ctx->pc = 0x2F4884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4880u;
    // 0x2f4884: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2048u, 0x2F4880u, 0x2F4888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4888u;
label_2f4888:
    // 0x2f4888: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x2f4888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_2f488c:
    // 0x2f488c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_2f4890:
    if (ctx->pc == 0x2F4890u) {
        ctx->pc = 0x2F4890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F488Cu;
        // 0x2f4890: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4894u;
        goto label_2f4894;
    }
    ctx->pc = 0x2F488Cu;
    {
        const bool branch_taken_0x2f488c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F488Cu;
        // 0x2f4890: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f488c) {
            ctx->pc = 0x2F48B4u;
            goto label_2f48b4;
        }
    }
    ctx->pc = 0x2F4894u;
label_2f4894:
    // 0x2f4894: 0xc0bf146  jal         func_2FC518
label_2f4898:
    if (ctx->pc == 0x2F4898u) {
        ctx->pc = 0x2F4898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4894u;
        // 0x2f4898: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F489Cu;
        goto label_2f489c;
    }
    ctx->pc = 0x2F4894u;
    SET_GPR_U32(ctx, 31, 0x2F489Cu);
    ctx->pc = 0x2F4898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4894u;
    // 0x2f4898: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC518u, 0x2F4894u, 0x2F489Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F489Cu;
label_2f489c:
    // 0x2f489c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2f48a0:
    if (ctx->pc == 0x2F48A0u) {
        ctx->pc = 0x2F48A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F489Cu;
        // 0x2f48a0: 0x2402fc08  addiu       $v0, $zero, -0x3F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F48A4u;
        goto label_2f48a4;
    }
    ctx->pc = 0x2F489Cu;
    {
        const bool branch_taken_0x2f489c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F48A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F489Cu;
        // 0x2f48a0: 0x2402fc08  addiu       $v0, $zero, -0x3F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f489c) {
            ctx->pc = 0x2F48B0u;
            goto label_2f48b0;
        }
    }
    ctx->pc = 0x2F48A4u;
label_2f48a4:
    // 0x2f48a4: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x2f48a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_2f48a8:
    // 0x2f48a8: 0x10000047  b           . + 4 + (0x47 << 2)
label_2f48ac:
    if (ctx->pc == 0x2F48ACu) {
        ctx->pc = 0x2F48ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F48A8u;
        // 0x2f48ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F48B0u;
        goto label_2f48b0;
    }
    ctx->pc = 0x2F48A8u;
    {
        const bool branch_taken_0x2f48a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F48ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F48A8u;
        // 0x2f48ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f48a8) {
            ctx->pc = 0x2F49C8u;
            goto label_2f49c8;
        }
    }
    ctx->pc = 0x2F48B0u;
label_2f48b0:
    // 0x2f48b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f48b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f48b4:
    // 0x2f48b4: 0xc0bc85e  jal         func_2F2178
label_2f48b8:
    if (ctx->pc == 0x2F48B8u) {
        ctx->pc = 0x2F48B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F48B4u;
        // 0x2f48b8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F48BCu;
        goto label_2f48bc;
    }
    ctx->pc = 0x2F48B4u;
    SET_GPR_U32(ctx, 31, 0x2F48BCu);
    ctx->pc = 0x2F48B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F48B4u;
    // 0x2f48b8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2178u, 0x2F48B4u, 0x2F48BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F48BCu;
label_2f48bc:
    // 0x2f48bc: 0xc0bc77c  jal         func_2F1DF0
label_2f48c0:
    if (ctx->pc == 0x2F48C0u) {
        ctx->pc = 0x2F48C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F48BCu;
        // 0x2f48c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F48C4u;
        goto label_2f48c4;
    }
    ctx->pc = 0x2F48BCu;
    SET_GPR_U32(ctx, 31, 0x2F48C4u);
    ctx->pc = 0x2F48C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F48BCu;
    // 0x2f48c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF0u, 0x2F48BCu, 0x2F48C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F48C4u;
label_2f48c4:
    // 0x2f48c4: 0xc0bc9da  jal         func_2F2768
label_2f48c8:
    if (ctx->pc == 0x2F48C8u) {
        ctx->pc = 0x2F48C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F48C4u;
        // 0x2f48c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F48CCu;
        goto label_2f48cc;
    }
    ctx->pc = 0x2F48C4u;
    SET_GPR_U32(ctx, 31, 0x2F48CCu);
    ctx->pc = 0x2F48C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F48C4u;
    // 0x2f48c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2768u, 0x2F48C4u, 0x2F48CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F48CCu;
label_2f48cc:
    // 0x2f48cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f48ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f48d0:
    // 0x2f48d0: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_2f48d4:
    if (ctx->pc == 0x2F48D4u) {
        ctx->pc = 0x2F48D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F48D0u;
        // 0x2f48d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F48D8u;
        goto label_2f48d8;
    }
    ctx->pc = 0x2F48D0u;
    {
        const bool branch_taken_0x2f48d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F48D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F48D0u;
        // 0x2f48d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f48d0) {
            ctx->pc = 0x2F496Cu;
            goto label_2f496c;
        }
    }
    ctx->pc = 0x2F48D8u;
label_2f48d8:
    // 0x2f48d8: 0xc0bca5a  jal         func_2F2968
label_2f48dc:
    if (ctx->pc == 0x2F48DCu) {
        ctx->pc = 0x2F48DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F48D8u;
        // 0x2f48dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F48E0u;
        goto label_2f48e0;
    }
    ctx->pc = 0x2F48D8u;
    SET_GPR_U32(ctx, 31, 0x2F48E0u);
    ctx->pc = 0x2F48DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F48D8u;
    // 0x2f48dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2968u, 0x2F48D8u, 0x2F48E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F48E0u;
label_2f48e0:
    // 0x2f48e0: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_2f48e4:
    if (ctx->pc == 0x2F48E4u) {
        ctx->pc = 0x2F48E8u;
        goto label_2f48e8;
    }
    ctx->pc = 0x2F48E0u;
    {
        const bool branch_taken_0x2f48e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f48e0) {
            ctx->pc = 0x2F495Cu;
            goto label_2f495c;
        }
    }
    ctx->pc = 0x2F48E8u;
label_2f48e8:
    // 0x2f48e8: 0xc0be45e  jal         func_2F9178
label_2f48ec:
    if (ctx->pc == 0x2F48ECu) {
        ctx->pc = 0x2F48ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F48E8u;
        // 0x2f48ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F48F0u;
        goto label_2f48f0;
    }
    ctx->pc = 0x2F48E8u;
    SET_GPR_U32(ctx, 31, 0x2F48F0u);
    ctx->pc = 0x2F48ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F48E8u;
    // 0x2f48ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F48E8u, 0x2F48F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F48F0u;
label_2f48f0:
    // 0x2f48f0: 0x8e2200b4  lw          $v0, 0xB4($s1)
    ctx->pc = 0x2f48f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_2f48f4:
    // 0x2f48f4: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x2f48f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
label_2f48f8:
    // 0x2f48f8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2f48f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2f48fc:
    // 0x2f48fc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2f4900:
    if (ctx->pc == 0x2F4900u) {
        ctx->pc = 0x2F4900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F48FCu;
        // 0x2f4900: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4904u;
        goto label_2f4904;
    }
    ctx->pc = 0x2F48FCu;
    {
        const bool branch_taken_0x2f48fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F48FCu;
        // 0x2f4900: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f48fc) {
            ctx->pc = 0x2F492Cu;
            goto label_2f492c;
        }
    }
    ctx->pc = 0x2F4904u;
label_2f4904:
    // 0x2f4904: 0x8e2600c4  lw          $a2, 0xC4($s1)
    ctx->pc = 0x2f4904u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_2f4908:
    // 0x2f4908: 0x18c00008  blez        $a2, . + 4 + (0x8 << 2)
label_2f490c:
    if (ctx->pc == 0x2F490Cu) {
        ctx->pc = 0x2F4910u;
        goto label_2f4910;
    }
    ctx->pc = 0x2F4908u;
    {
        const bool branch_taken_0x2f4908 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x2f4908) {
            ctx->pc = 0x2F492Cu;
            goto label_2f492c;
        }
    }
    ctx->pc = 0x2F4910u;
label_2f4910:
    // 0x2f4910: 0x8e2500c0  lw          $a1, 0xC0($s1)
    ctx->pc = 0x2f4910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_2f4914:
    // 0x2f4914: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_2f4918:
    if (ctx->pc == 0x2F4918u) {
        ctx->pc = 0x2F491Cu;
        goto label_2f491c;
    }
    ctx->pc = 0x2F4914u;
    {
        const bool branch_taken_0x2f4914 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4914) {
            ctx->pc = 0x2F492Cu;
            goto label_2f492c;
        }
    }
    ctx->pc = 0x2F491Cu;
label_2f491c:
    // 0x2f491c: 0xc0bcae6  jal         func_2F2B98
label_2f4920:
    if (ctx->pc == 0x2F4920u) {
        ctx->pc = 0x2F4920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F491Cu;
        // 0x2f4920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4924u;
        goto label_2f4924;
    }
    ctx->pc = 0x2F491Cu;
    SET_GPR_U32(ctx, 31, 0x2F4924u);
    ctx->pc = 0x2F4920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F491Cu;
    // 0x2f4920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2B98u, 0x2F491Cu, 0x2F4924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4924u;
label_2f4924:
    // 0x2f4924: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_2f4928:
    if (ctx->pc == 0x2F4928u) {
        ctx->pc = 0x2F492Cu;
        goto label_2f492c;
    }
    ctx->pc = 0x2F4924u;
    {
        const bool branch_taken_0x2f4924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f4924) {
            ctx->pc = 0x2F495Cu;
            goto label_2f495c;
        }
    }
    ctx->pc = 0x2F492Cu;
label_2f492c:
    // 0x2f492c: 0xc0bce28  jal         func_2F38A0
label_2f4930:
    if (ctx->pc == 0x2F4930u) {
        ctx->pc = 0x2F4930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F492Cu;
        // 0x2f4930: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4934u;
        goto label_2f4934;
    }
    ctx->pc = 0x2F492Cu;
    SET_GPR_U32(ctx, 31, 0x2F4934u);
    ctx->pc = 0x2F4930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F492Cu;
    // 0x2f4930: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F38A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F38A0u, 0x2F492Cu, 0x2F4934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4934u;
label_2f4934:
    // 0x2f4934: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2f4938:
    if (ctx->pc == 0x2F4938u) {
        ctx->pc = 0x2F493Cu;
        goto label_2f493c;
    }
    ctx->pc = 0x2F4934u;
    {
        const bool branch_taken_0x2f4934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f4934) {
            ctx->pc = 0x2F495Cu;
            goto label_2f495c;
        }
    }
    ctx->pc = 0x2F493Cu;
label_2f493c:
    // 0x2f493c: 0xc0bd206  jal         func_2F4818
label_2f4940:
    if (ctx->pc == 0x2F4940u) {
        ctx->pc = 0x2F4940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F493Cu;
        // 0x2f4940: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4944u;
        goto label_2f4944;
    }
    ctx->pc = 0x2F493Cu;
    SET_GPR_U32(ctx, 31, 0x2F4944u);
    ctx->pc = 0x2F4940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F493Cu;
    // 0x2f4940: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4818u, 0x2F493Cu, 0x2F4944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4944u;
label_2f4944:
    // 0x2f4944: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f4944u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f4948:
    // 0x2f4948: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f4948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f494c:
    // 0x2f494c: 0x1242ffdb  beq         $s2, $v0, . + 4 + (-0x25 << 2)
label_2f4950:
    if (ctx->pc == 0x2F4950u) {
        ctx->pc = 0x2F4950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F494Cu;
        // 0x2f4950: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4954u;
        goto label_2f4954;
    }
    ctx->pc = 0x2F494Cu;
    {
        const bool branch_taken_0x2f494c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F4950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F494Cu;
        // 0x2f4950: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f494c) {
            ctx->pc = 0x2F48BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f48bc;
        }
    }
    ctx->pc = 0x2F4954u;
label_2f4954:
    // 0x2f4954: 0x10000007  b           . + 4 + (0x7 << 2)
label_2f4958:
    if (ctx->pc == 0x2F4958u) {
        ctx->pc = 0x2F495Cu;
        goto label_2f495c;
    }
    ctx->pc = 0x2F4954u;
    {
        const bool branch_taken_0x2f4954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4954) {
            ctx->pc = 0x2F4974u;
            goto label_2f4974;
        }
    }
    ctx->pc = 0x2F495Cu;
label_2f495c:
    // 0x2f495c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_2f4960:
    if (ctx->pc == 0x2F4960u) {
        ctx->pc = 0x2F4960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F495Cu;
        // 0x2f4960: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4964u;
        goto label_2f4964;
    }
    ctx->pc = 0x2F495Cu;
    {
        const bool branch_taken_0x2f495c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F495Cu;
        // 0x2f4960: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f495c) {
            ctx->pc = 0x2F4970u;
            goto label_2f4970;
        }
    }
    ctx->pc = 0x2F4964u;
label_2f4964:
    // 0x2f4964: 0xc0be45e  jal         func_2F9178
label_2f4968:
    if (ctx->pc == 0x2F4968u) {
        ctx->pc = 0x2F4968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4964u;
        // 0x2f4968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F496Cu;
        goto label_2f496c;
    }
    ctx->pc = 0x2F4964u;
    SET_GPR_U32(ctx, 31, 0x2F496Cu);
    ctx->pc = 0x2F4968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4964u;
    // 0x2f4968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F4964u, 0x2F496Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F496Cu;
label_2f496c:
    // 0x2f496c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2f496cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f4970:
    // 0x2f4970: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2f4970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f4974:
    // 0x2f4974: 0xc0bc98c  jal         func_2F2630
label_2f4978:
    if (ctx->pc == 0x2F4978u) {
        ctx->pc = 0x2F4978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4974u;
        // 0x2f4978: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F497Cu;
        goto label_2f497c;
    }
    ctx->pc = 0x2F4974u;
    SET_GPR_U32(ctx, 31, 0x2F497Cu);
    ctx->pc = 0x2F4978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4974u;
    // 0x2f4978: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2630u, 0x2F4974u, 0x2F497Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F497Cu;
label_2f497c:
    // 0x2f497c: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x2f497cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_2f4980:
    // 0x2f4980: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2f4984:
    if (ctx->pc == 0x2F4984u) {
        ctx->pc = 0x2F4984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4980u;
        // 0x2f4984: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4988u;
        goto label_2f4988;
    }
    ctx->pc = 0x2F4980u;
    {
        const bool branch_taken_0x2f4980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4980u;
        // 0x2f4984: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4980) {
            ctx->pc = 0x2F49C8u;
            goto label_2f49c8;
        }
    }
    ctx->pc = 0x2F4988u;
label_2f4988:
    // 0x2f4988: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x2f4988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2f498c:
    // 0x2f498c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2f4990:
    if (ctx->pc == 0x2F4990u) {
        ctx->pc = 0x2F4990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F498Cu;
        // 0x2f4990: 0xae320064  sw          $s2, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4994u;
        goto label_2f4994;
    }
    ctx->pc = 0x2F498Cu;
    {
        const bool branch_taken_0x2f498c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F498Cu;
        // 0x2f4990: 0xae320064  sw          $s2, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f498c) {
            ctx->pc = 0x2F49B8u;
            goto label_2f49b8;
        }
    }
    ctx->pc = 0x2F4994u;
label_2f4994:
    // 0x2f4994: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x2f4994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_2f4998:
    // 0x2f4998: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x2f4998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_2f499c:
    // 0x2f499c: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x2f499cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f49a0:
    // 0x2f49a0: 0x8e230068  lw          $v1, 0x68($s1)
    ctx->pc = 0x2f49a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2f49a4:
    // 0x2f49a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f49a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f49a8:
    // 0x2f49a8: 0x8e26006c  lw          $a2, 0x6C($s1)
    ctx->pc = 0x2f49a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_2f49ac:
    // 0x2f49ac: 0x60f809  jalr        $v1
label_2f49b0:
    if (ctx->pc == 0x2F49B0u) {
        ctx->pc = 0x2F49B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F49ACu;
        // 0x2f49b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F49B4u;
        goto label_2f49b4;
    }
    ctx->pc = 0x2F49ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F49B4u);
        ctx->pc = 0x2F49B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F49ACu;
        // 0x2f49b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F49ACu, 0x2F49B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F49B4u;
label_2f49b4:
    // 0x2f49b4: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x2f49b4u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f49b8:
    // 0x2f49b8: 0xae200074  sw          $zero, 0x74($s1)
    ctx->pc = 0x2f49b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
label_2f49bc:
    // 0x2f49bc: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x2f49bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_2f49c0:
    // 0x2f49c0: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x2f49c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
label_2f49c4:
    // 0x2f49c4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2f49c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f49c8:
    // 0x2f49c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f49c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2f49cc:
    // 0x2f49cc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f49ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f49d0:
    // 0x2f49d0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2f49d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f49d4:
    // 0x2f49d4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f49d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f49d8:
    // 0x2f49d8: 0x3e00008  jr          $ra
label_2f49dc:
    if (ctx->pc == 0x2F49DCu) {
        ctx->pc = 0x2F49DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F49D8u;
        // 0x2f49dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F49E0u;
        goto label_fallthrough_0x2f49d8;
    }
    ctx->pc = 0x2F49D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F49DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F49D8u;
        // 0x2f49dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F49D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f49d8:
    ctx->pc = 0x2F49E0u;
}
