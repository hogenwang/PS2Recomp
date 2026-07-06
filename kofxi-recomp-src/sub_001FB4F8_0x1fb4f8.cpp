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

// Function: sub_001FB4F8
// Address: 0x1fb4f8 - 0x1fb710
void sub_001FB4F8_0x1fb4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB4F8_0x1fb4f8");
#endif

    switch (ctx->pc) {
        case 0x1fb520u: goto label_1fb520;
        case 0x1fb534u: goto label_1fb534;
        case 0x1fb544u: goto label_1fb544;
        case 0x1fb558u: goto label_1fb558;
        case 0x1fb568u: goto label_1fb568;
        case 0x1fb57cu: goto label_1fb57c;
        case 0x1fb588u: goto label_1fb588;
        case 0x1fb594u: goto label_1fb594;
        case 0x1fb5a4u: goto label_1fb5a4;
        case 0x1fb5b0u: goto label_1fb5b0;
        case 0x1fb5bcu: goto label_1fb5bc;
        case 0x1fb5c8u: goto label_1fb5c8;
        case 0x1fb5d8u: goto label_1fb5d8;
        case 0x1fb608u: goto label_1fb608;
        case 0x1fb640u: goto label_1fb640;
        default: break;
    }

    ctx->pc = 0x1fb4f8u;

    // 0x1fb4f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fb4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fb4fc: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1fb4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1fb500: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fb500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fb504: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fb504u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb508: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fb508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb50c: 0x2445bf88  addiu       $a1, $v0, -0x4078
    ctx->pc = 0x1fb50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950792));
    // 0x1fb510: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fb510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fb514: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fb514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fb518: 0xc07f142  jal         func_1FC508
    ctx->pc = 0x1FB518u;
    SET_GPR_U32(ctx, 31, 0x1FB520u);
    ctx->pc = 0x1FB51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB518u;
    // 0x1fb51c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC508u, 0x1FB518u, 0x1FB520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB520u;
label_1fb520:
    // 0x1fb520: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x1fb520u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x1fb524: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fb524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb528: 0x24a5bfd0  addiu       $a1, $a1, -0x4030
    ctx->pc = 0x1fb528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950864));
    // 0x1fb52c: 0xc07f142  jal         func_1FC508
    ctx->pc = 0x1FB52Cu;
    SET_GPR_U32(ctx, 31, 0x1FB534u);
    ctx->pc = 0x1FB530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB52Cu;
    // 0x1fb530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC508u, 0x1FB52Cu, 0x1FB534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB534u;
label_1fb534:
    // 0x1fb534: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fb534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb538: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fb538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb53c: 0xc07f142  jal         func_1FC508
    ctx->pc = 0x1FB53Cu;
    SET_GPR_U32(ctx, 31, 0x1FB544u);
    ctx->pc = 0x1FB540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB53Cu;
    // 0x1fb540: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC508u, 0x1FB53Cu, 0x1FB544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB544u;
label_1fb544:
    // 0x1fb544: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x1fb544u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x1fb548: 0x24a5c030  addiu       $a1, $a1, -0x3FD0
    ctx->pc = 0x1fb548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950960));
    // 0x1fb54c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1fb54cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fb550: 0xc07f142  jal         func_1FC508
    ctx->pc = 0x1FB550u;
    SET_GPR_U32(ctx, 31, 0x1FB558u);
    ctx->pc = 0x1FB554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB550u;
    // 0x1fb554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC508u, 0x1FB550u, 0x1FB558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB558u;
label_1fb558:
    // 0x1fb558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fb558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb55c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fb55cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb560: 0xc07f142  jal         func_1FC508
    ctx->pc = 0x1FB560u;
    SET_GPR_U32(ctx, 31, 0x1FB568u);
    ctx->pc = 0x1FB564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB560u;
    // 0x1fb564: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC508u, 0x1FB560u, 0x1FB568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB568u;
label_1fb568:
    // 0x1fb568: 0x3c050020  lui         $a1, 0x20
    ctx->pc = 0x1fb568u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    // 0x1fb56c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1fb56cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1fb570: 0x24a5c050  addiu       $a1, $a1, -0x3FB0
    ctx->pc = 0x1fb570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950992));
    // 0x1fb574: 0xc07f142  jal         func_1FC508
    ctx->pc = 0x1FB574u;
    SET_GPR_U32(ctx, 31, 0x1FB57Cu);
    ctx->pc = 0x1FB578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB574u;
    // 0x1fb578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC508u, 0x1FB574u, 0x1FB57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB57Cu;
label_1fb57c:
    // 0x1fb57c: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x1fb57cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x1fb580: 0xc07edd6  jal         func_1FB758
    ctx->pc = 0x1FB580u;
    SET_GPR_U32(ctx, 31, 0x1FB588u);
    ctx->pc = 0x1FB584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB580u;
    // 0x1fb584: 0x2624001c  addiu       $a0, $s1, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB758u, 0x1FB580u, 0x1FB588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB588u;
label_1fb588:
    // 0x1fb588: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x1fb588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x1fb58c: 0xc07edc4  jal         func_1FB710
    ctx->pc = 0x1FB58Cu;
    SET_GPR_U32(ctx, 31, 0x1FB594u);
    ctx->pc = 0x1FB590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB58Cu;
    // 0x1fb590: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x1FB58Cu, 0x1FB594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB594u;
label_1fb594:
    // 0x1fb594: 0x2624003c  addiu       $a0, $s1, 0x3C
    ctx->pc = 0x1fb594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x1fb598: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x1fb598u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
    // 0x1fb59c: 0xc07edc4  jal         func_1FB710
    ctx->pc = 0x1FB59Cu;
    SET_GPR_U32(ctx, 31, 0x1FB5A4u);
    ctx->pc = 0x1FB5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB59Cu;
    // 0x1fb5a0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x1FB59Cu, 0x1FB5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB5A4u;
label_1fb5a4:
    // 0x1fb5a4: 0x26240068  addiu       $a0, $s1, 0x68
    ctx->pc = 0x1fb5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    // 0x1fb5a8: 0xc07edc4  jal         func_1FB710
    ctx->pc = 0x1FB5A8u;
    SET_GPR_U32(ctx, 31, 0x1FB5B0u);
    ctx->pc = 0x1FB5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB5A8u;
    // 0x1fb5ac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x1FB5A8u, 0x1FB5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB5B0u;
label_1fb5b0:
    // 0x1fb5b0: 0x26240094  addiu       $a0, $s1, 0x94
    ctx->pc = 0x1fb5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
    // 0x1fb5b4: 0xc07edc4  jal         func_1FB710
    ctx->pc = 0x1FB5B4u;
    SET_GPR_U32(ctx, 31, 0x1FB5BCu);
    ctx->pc = 0x1FB5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB5B4u;
    // 0x1fb5b8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x1FB5B4u, 0x1FB5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB5BCu;
label_1fb5bc:
    // 0x1fb5bc: 0x262400ec  addiu       $a0, $s1, 0xEC
    ctx->pc = 0x1fb5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 236));
    // 0x1fb5c0: 0xc07edc4  jal         func_1FB710
    ctx->pc = 0x1FB5C0u;
    SET_GPR_U32(ctx, 31, 0x1FB5C8u);
    ctx->pc = 0x1FB5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB5C0u;
    // 0x1fb5c4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x1FB5C0u, 0x1FB5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB5C8u;
label_1fb5c8:
    // 0x1fb5c8: 0x26240118  addiu       $a0, $s1, 0x118
    ctx->pc = 0x1fb5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 280));
    // 0x1fb5cc: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x1fb5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
    // 0x1fb5d0: 0xc07edc4  jal         func_1FB710
    ctx->pc = 0x1FB5D0u;
    SET_GPR_U32(ctx, 31, 0x1FB5D8u);
    ctx->pc = 0x1FB5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB5D0u;
    // 0x1fb5d4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x1FB5D0u, 0x1FB5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB5D8u;
label_1fb5d8:
    // 0x1fb5d8: 0xae200144  sw          $zero, 0x144($s1)
    ctx->pc = 0x1fb5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 0));
    // 0x1fb5dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fb5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fb5e0: 0xae200148  sw          $zero, 0x148($s1)
    ctx->pc = 0x1fb5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 0));
    // 0x1fb5e4: 0xae200160  sw          $zero, 0x160($s1)
    ctx->pc = 0x1fb5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 0));
    // 0x1fb5e8: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x1fb5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1fb5ec: 0xae200164  sw          $zero, 0x164($s1)
    ctx->pc = 0x1fb5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 356), GPR_U32(ctx, 0));
    // 0x1fb5f0: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1fb5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1fb5f4: 0xae200168  sw          $zero, 0x168($s1)
    ctx->pc = 0x1fb5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 360), GPR_U32(ctx, 0));
    // 0x1fb5f8: 0xfe220158  sd          $v0, 0x158($s1)
    ctx->pc = 0x1fb5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 344), GPR_U64(ctx, 2));
    // 0x1fb5fc: 0xfe220150  sd          $v0, 0x150($s1)
    ctx->pc = 0x1fb5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 336), GPR_U64(ctx, 2));
    // 0x1fb600: 0x262201e8  addiu       $v0, $s1, 0x1E8
    ctx->pc = 0x1fb600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 488));
    // 0x1fb604: 0x0  nop
    ctx->pc = 0x1fb604u;
    // NOP
label_1fb608:
    // 0x1fb608: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fb608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fb60c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1fb60cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1fb610: 0x0  nop
    ctx->pc = 0x1fb610u;
    // NOP
    // 0x1fb614: 0x0  nop
    ctx->pc = 0x1fb614u;
    // NOP
    // 0x1fb618: 0x0  nop
    ctx->pc = 0x1fb618u;
    // NOP
    // 0x1fb61c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FB61Cu;
    {
        const bool branch_taken_0x1fb61c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1FB620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB61Cu;
        // 0x1fb620: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb61c) {
            ctx->pc = 0x1FB608u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fb608;
        }
    }
    ctx->pc = 0x1FB624u;
    // 0x1fb624: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fb624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb628: 0xae2001f0  sw          $zero, 0x1F0($s1)
    ctx->pc = 0x1fb628u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 496), GPR_U32(ctx, 0));
    // 0x1fb62c: 0xae2001f4  sw          $zero, 0x1F4($s1)
    ctx->pc = 0x1fb62cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 500), GPR_U32(ctx, 0));
    // 0x1fb630: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1fb630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1fb634: 0xae2001f8  sw          $zero, 0x1F8($s1)
    ctx->pc = 0x1fb634u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 504), GPR_U32(ctx, 0));
    // 0x1fb638: 0xae2201ec  sw          $v0, 0x1EC($s1)
    ctx->pc = 0x1fb638u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 492), GPR_U32(ctx, 2));
    // 0x1fb63c: 0x2482026c  addiu       $v0, $a0, 0x26C
    ctx->pc = 0x1fb63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 620));
label_1fb640:
    // 0x1fb640: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fb640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fb644: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1fb644u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1fb648: 0x0  nop
    ctx->pc = 0x1fb648u;
    // NOP
    // 0x1fb64c: 0x0  nop
    ctx->pc = 0x1fb64cu;
    // NOP
    // 0x1fb650: 0x0  nop
    ctx->pc = 0x1fb650u;
    // NOP
    // 0x1fb654: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FB654u;
    {
        const bool branch_taken_0x1fb654 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1FB658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB654u;
        // 0x1fb658: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb654) {
            ctx->pc = 0x1FB640u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fb640;
        }
    }
    ctx->pc = 0x1FB65Cu;
    // 0x1fb65c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1fb65cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fb660: 0xae2002a8  sw          $zero, 0x2A8($s1)
    ctx->pc = 0x1fb660u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 680), GPR_U32(ctx, 0));
    // 0x1fb664: 0xae2702cc  sw          $a3, 0x2CC($s1)
    ctx->pc = 0x1fb664u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 716), GPR_U32(ctx, 7));
    // 0x1fb668: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1fb668u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
    // 0x1fb66c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fb66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb670: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x1fb670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1fb674: 0x8e2802a8  lw          $t0, 0x2A8($s1)
    ctx->pc = 0x1fb674u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
    // 0x1fb678: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1fb678u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1fb67c: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x1fb67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x1fb680: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1fb680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1fb684: 0xae2202d8  sw          $v0, 0x2D8($s1)
    ctx->pc = 0x1fb684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 728), GPR_U32(ctx, 2));
    // 0x1fb688: 0xae2602a0  sw          $a2, 0x2A0($s1)
    ctx->pc = 0x1fb688u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 672), GPR_U32(ctx, 6));
    // 0x1fb68c: 0xae2002dc  sw          $zero, 0x2DC($s1)
    ctx->pc = 0x1fb68cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 732), GPR_U32(ctx, 0));
    // 0x1fb690: 0xae2302ac  sw          $v1, 0x2AC($s1)
    ctx->pc = 0x1fb690u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 684), GPR_U32(ctx, 3));
    // 0x1fb694: 0xae2502e0  sw          $a1, 0x2E0($s1)
    ctx->pc = 0x1fb694u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 736), GPR_U32(ctx, 5));
    // 0x1fb698: 0xae2402bc  sw          $a0, 0x2BC($s1)
    ctx->pc = 0x1fb698u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 700), GPR_U32(ctx, 4));
    // 0x1fb69c: 0xae2802d0  sw          $t0, 0x2D0($s1)
    ctx->pc = 0x1fb69cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 720), GPR_U32(ctx, 8));
    // 0x1fb6a0: 0xae2005b8  sw          $zero, 0x5B8($s1)
    ctx->pc = 0x1fb6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1464), GPR_U32(ctx, 0));
    // 0x1fb6a4: 0xae2702e4  sw          $a3, 0x2E4($s1)
    ctx->pc = 0x1fb6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 740), GPR_U32(ctx, 7));
    // 0x1fb6a8: 0xae22027c  sw          $v0, 0x27C($s1)
    ctx->pc = 0x1fb6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 636), GPR_U32(ctx, 2));
    // 0x1fb6ac: 0xae250280  sw          $a1, 0x280($s1)
    ctx->pc = 0x1fb6acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 640), GPR_U32(ctx, 5));
    // 0x1fb6b0: 0xae220284  sw          $v0, 0x284($s1)
    ctx->pc = 0x1fb6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 644), GPR_U32(ctx, 2));
    // 0x1fb6b4: 0xae250288  sw          $a1, 0x288($s1)
    ctx->pc = 0x1fb6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 648), GPR_U32(ctx, 5));
    // 0x1fb6b8: 0xae27028c  sw          $a3, 0x28C($s1)
    ctx->pc = 0x1fb6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 652), GPR_U32(ctx, 7));
    // 0x1fb6bc: 0xae250290  sw          $a1, 0x290($s1)
    ctx->pc = 0x1fb6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 656), GPR_U32(ctx, 5));
    // 0x1fb6c0: 0xae220294  sw          $v0, 0x294($s1)
    ctx->pc = 0x1fb6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 660), GPR_U32(ctx, 2));
    // 0x1fb6c4: 0xae260298  sw          $a2, 0x298($s1)
    ctx->pc = 0x1fb6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 664), GPR_U32(ctx, 6));
    // 0x1fb6c8: 0xae20029c  sw          $zero, 0x29C($s1)
    ctx->pc = 0x1fb6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 668), GPR_U32(ctx, 0));
    // 0x1fb6cc: 0xae2002a4  sw          $zero, 0x2A4($s1)
    ctx->pc = 0x1fb6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 676), GPR_U32(ctx, 0));
    // 0x1fb6d0: 0xae2002b0  sw          $zero, 0x2B0($s1)
    ctx->pc = 0x1fb6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 688), GPR_U32(ctx, 0));
    // 0x1fb6d4: 0xae2002b4  sw          $zero, 0x2B4($s1)
    ctx->pc = 0x1fb6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 692), GPR_U32(ctx, 0));
    // 0x1fb6d8: 0xae2502b8  sw          $a1, 0x2B8($s1)
    ctx->pc = 0x1fb6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 696), GPR_U32(ctx, 5));
    // 0x1fb6dc: 0xae2702c0  sw          $a3, 0x2C0($s1)
    ctx->pc = 0x1fb6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 704), GPR_U32(ctx, 7));
    // 0x1fb6e0: 0xae2002c4  sw          $zero, 0x2C4($s1)
    ctx->pc = 0x1fb6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 708), GPR_U32(ctx, 0));
    // 0x1fb6e4: 0xae2702c8  sw          $a3, 0x2C8($s1)
    ctx->pc = 0x1fb6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 712), GPR_U32(ctx, 7));
    // 0x1fb6e8: 0xae2002d4  sw          $zero, 0x2D4($s1)
    ctx->pc = 0x1fb6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 724), GPR_U32(ctx, 0));
    // 0x1fb6ec: 0xae2002e8  sw          $zero, 0x2E8($s1)
    ctx->pc = 0x1fb6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 744), GPR_U32(ctx, 0));
    // 0x1fb6f0: 0xae2005b0  sw          $zero, 0x5B0($s1)
    ctx->pc = 0x1fb6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1456), GPR_U32(ctx, 0));
    // 0x1fb6f4: 0xae2005b4  sw          $zero, 0x5B4($s1)
    ctx->pc = 0x1fb6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1460), GPR_U32(ctx, 0));
    // 0x1fb6f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fb6f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb6fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fb6fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fb700: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fb700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fb704: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB704u;
        // 0x1fb708: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB70Cu;
    // 0x1fb70c: 0x0  nop
    ctx->pc = 0x1fb70cu;
    // NOP
}
