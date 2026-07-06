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

// Function: sub_002AF768
// Address: 0x2af768 - 0x2af868
void sub_002AF768_0x2af768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF768_0x2af768");
#endif

    switch (ctx->pc) {
        case 0x2af77cu: goto label_2af77c;
        case 0x2af784u: goto label_2af784;
        case 0x2af78cu: goto label_2af78c;
        case 0x2af794u: goto label_2af794;
        case 0x2af79cu: goto label_2af79c;
        case 0x2af7a4u: goto label_2af7a4;
        case 0x2af7acu: goto label_2af7ac;
        case 0x2af7b4u: goto label_2af7b4;
        case 0x2af7bcu: goto label_2af7bc;
        case 0x2af7c4u: goto label_2af7c4;
        case 0x2af7ccu: goto label_2af7cc;
        case 0x2af7d4u: goto label_2af7d4;
        case 0x2af7e4u: goto label_2af7e4;
        case 0x2af7f4u: goto label_2af7f4;
        case 0x2af7fcu: goto label_2af7fc;
        case 0x2af804u: goto label_2af804;
        case 0x2af818u: goto label_2af818;
        case 0x2af820u: goto label_2af820;
        case 0x2af828u: goto label_2af828;
        case 0x2af830u: goto label_2af830;
        case 0x2af838u: goto label_2af838;
        case 0x2af840u: goto label_2af840;
        case 0x2af848u: goto label_2af848;
        case 0x2af850u: goto label_2af850;
        default: break;
    }

    ctx->pc = 0x2af768u;

    // 0x2af768: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2af768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2af76c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2af76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2af770: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2af770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2af774: 0xc0a536a  jal         func_294DA8
    ctx->pc = 0x2AF774u;
    SET_GPR_U32(ctx, 31, 0x2AF77Cu);
    ctx->pc = 0x2AF778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF774u;
    // 0x2af778: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294DA8u, 0x2AF774u, 0x2AF77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF77Cu;
label_2af77c:
    // 0x2af77c: 0xc0a5bc8  jal         func_296F20
    ctx->pc = 0x2AF77Cu;
    SET_GPR_U32(ctx, 31, 0x2AF784u);
    ctx->pc = 0x2AF780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF77Cu;
    // 0x2af780: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296F20u, 0x2AF77Cu, 0x2AF784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF784u;
label_2af784:
    // 0x2af784: 0xc0a530c  jal         func_294C30
    ctx->pc = 0x2AF784u;
    SET_GPR_U32(ctx, 31, 0x2AF78Cu);
    ctx->pc = 0x2AF788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF784u;
    // 0x2af788: 0x2610d1d0  addiu       $s0, $s0, -0x2E30 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294C30u, 0x2AF784u, 0x2AF78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF78Cu;
label_2af78c:
    // 0x2af78c: 0xc0a5bc8  jal         func_296F20
    ctx->pc = 0x2AF78Cu;
    SET_GPR_U32(ctx, 31, 0x2AF794u);
    ctx->pc = 0x2AF790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF78Cu;
    // 0x2af790: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296F20u, 0x2AF78Cu, 0x2AF794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF794u;
label_2af794:
    // 0x2af794: 0xc0a5400  jal         func_295000
    ctx->pc = 0x2AF794u;
    SET_GPR_U32(ctx, 31, 0x2AF79Cu);
    ctx->pc = 0x295000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295000u, 0x2AF794u, 0x2AF79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF79Cu;
label_2af79c:
    // 0x2af79c: 0xc0a5bc8  jal         func_296F20
    ctx->pc = 0x2AF79Cu;
    SET_GPR_U32(ctx, 31, 0x2AF7A4u);
    ctx->pc = 0x2AF7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF79Cu;
    // 0x2af7a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296F20u, 0x2AF79Cu, 0x2AF7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF7A4u;
label_2af7a4:
    // 0x2af7a4: 0xc0a5386  jal         func_294E18
    ctx->pc = 0x2AF7A4u;
    SET_GPR_U32(ctx, 31, 0x2AF7ACu);
    ctx->pc = 0x294E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294E18u, 0x2AF7A4u, 0x2AF7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF7ACu;
label_2af7ac:
    // 0x2af7ac: 0xc0a5bc8  jal         func_296F20
    ctx->pc = 0x2AF7ACu;
    SET_GPR_U32(ctx, 31, 0x2AF7B4u);
    ctx->pc = 0x2AF7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF7ACu;
    // 0x2af7b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296F20u, 0x2AF7ACu, 0x2AF7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF7B4u;
label_2af7b4:
    // 0x2af7b4: 0xc0a63a6  jal         func_298E98
    ctx->pc = 0x2AF7B4u;
    SET_GPR_U32(ctx, 31, 0x2AF7BCu);
    ctx->pc = 0x298E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298E98u, 0x2AF7B4u, 0x2AF7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF7BCu;
label_2af7bc:
    // 0x2af7bc: 0xc0a5be2  jal         func_296F88
    ctx->pc = 0x2AF7BCu;
    SET_GPR_U32(ctx, 31, 0x2AF7C4u);
    ctx->pc = 0x2AF7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF7BCu;
    // 0x2af7c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296F88u, 0x2AF7BCu, 0x2AF7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF7C4u;
label_2af7c4:
    // 0x2af7c4: 0xc0a63aa  jal         func_298EA8
    ctx->pc = 0x2AF7C4u;
    SET_GPR_U32(ctx, 31, 0x2AF7CCu);
    ctx->pc = 0x298EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298EA8u, 0x2AF7C4u, 0x2AF7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF7CCu;
label_2af7cc:
    // 0x2af7cc: 0xc0a5be2  jal         func_296F88
    ctx->pc = 0x2AF7CCu;
    SET_GPR_U32(ctx, 31, 0x2AF7D4u);
    ctx->pc = 0x2AF7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF7CCu;
    // 0x2af7d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296F88u, 0x2AF7CCu, 0x2AF7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF7D4u;
label_2af7d4:
    // 0x2af7d4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2af7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2af7d8: 0x24a5d1d8  addiu       $a1, $a1, -0x2E28
    ctx->pc = 0x2af7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955480));
    // 0x2af7dc: 0xc0a5c3e  jal         func_2970F8
    ctx->pc = 0x2AF7DCu;
    SET_GPR_U32(ctx, 31, 0x2AF7E4u);
    ctx->pc = 0x2AF7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF7DCu;
    // 0x2af7e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2970F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2970F8u, 0x2AF7DCu, 0x2AF7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF7E4u;
label_2af7e4:
    // 0x2af7e4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2af7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2af7e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2af7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af7ec: 0xc0a5c3e  jal         func_2970F8
    ctx->pc = 0x2AF7ECu;
    SET_GPR_U32(ctx, 31, 0x2AF7F4u);
    ctx->pc = 0x2AF7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF7ECu;
    // 0x2af7f0: 0x24a5d1e8  addiu       $a1, $a1, -0x2E18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2970F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2970F8u, 0x2AF7ECu, 0x2AF7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF7F4u;
label_2af7f4:
    // 0x2af7f4: 0xc0a63b6  jal         func_298ED8
    ctx->pc = 0x2AF7F4u;
    SET_GPR_U32(ctx, 31, 0x2AF7FCu);
    ctx->pc = 0x298ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298ED8u, 0x2AF7F4u, 0x2AF7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF7FCu;
label_2af7fc:
    // 0x2af7fc: 0xc0a5be2  jal         func_296F88
    ctx->pc = 0x2AF7FCu;
    SET_GPR_U32(ctx, 31, 0x2AF804u);
    ctx->pc = 0x2AF800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF7FCu;
    // 0x2af800: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296F88u, 0x2AF7FCu, 0x2AF804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF804u;
label_2af804:
    // 0x2af804: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2af804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2af808: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2af808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2af80c: 0x2484d1f8  addiu       $a0, $a0, -0x2E08
    ctx->pc = 0x2af80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955512));
    // 0x2af810: 0xc0a5c3e  jal         func_2970F8
    ctx->pc = 0x2AF810u;
    SET_GPR_U32(ctx, 31, 0x2AF818u);
    ctx->pc = 0x2AF814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF810u;
    // 0x2af814: 0x24a5d200  addiu       $a1, $a1, -0x2E00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2970F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2970F8u, 0x2AF810u, 0x2AF818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF818u;
label_2af818:
    // 0x2af818: 0xc0a63a2  jal         func_298E88
    ctx->pc = 0x2AF818u;
    SET_GPR_U32(ctx, 31, 0x2AF820u);
    ctx->pc = 0x298E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298E88u, 0x2AF818u, 0x2AF820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF820u;
label_2af820:
    // 0x2af820: 0xc0a5be2  jal         func_296F88
    ctx->pc = 0x2AF820u;
    SET_GPR_U32(ctx, 31, 0x2AF828u);
    ctx->pc = 0x2AF824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF820u;
    // 0x2af824: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296F88u, 0x2AF820u, 0x2AF828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF828u;
label_2af828:
    // 0x2af828: 0xc0a52c8  jal         func_294B20
    ctx->pc = 0x2AF828u;
    SET_GPR_U32(ctx, 31, 0x2AF830u);
    ctx->pc = 0x294B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294B20u, 0x2AF828u, 0x2AF830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF830u;
label_2af830:
    // 0x2af830: 0xc0ac614  jal         func_2B1850
    ctx->pc = 0x2AF830u;
    SET_GPR_U32(ctx, 31, 0x2AF838u);
    ctx->pc = 0x2AF834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF830u;
    // 0x2af834: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1850u, 0x2AF830u, 0x2AF838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF838u;
label_2af838:
    // 0x2af838: 0xc0a50f8  jal         func_2943E0
    ctx->pc = 0x2AF838u;
    SET_GPR_U32(ctx, 31, 0x2AF840u);
    ctx->pc = 0x2943E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2943E0u, 0x2AF838u, 0x2AF840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF840u;
label_2af840:
    // 0x2af840: 0xc0ac614  jal         func_2B1850
    ctx->pc = 0x2AF840u;
    SET_GPR_U32(ctx, 31, 0x2AF848u);
    ctx->pc = 0x2AF844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF840u;
    // 0x2af844: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1850u, 0x2AF840u, 0x2AF848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF848u;
label_2af848:
    // 0x2af848: 0xc0aa2d8  jal         func_2A8B60
    ctx->pc = 0x2AF848u;
    SET_GPR_U32(ctx, 31, 0x2AF850u);
    ctx->pc = 0x2A8B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8B60u, 0x2AF848u, 0x2AF850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF850u;
label_2af850:
    // 0x2af850: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2af850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2af854: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2af854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af858: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2af858u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af85c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF85Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF85Cu;
        // 0x2af860: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF85Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF864u;
    // 0x2af864: 0x0  nop
    ctx->pc = 0x2af864u;
    // NOP
}
