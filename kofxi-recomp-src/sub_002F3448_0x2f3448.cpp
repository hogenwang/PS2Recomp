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

// Function: sub_002F3448
// Address: 0x2f3448 - 0x2f3708
void sub_002F3448_0x2f3448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3448_0x2f3448");
#endif

    switch (ctx->pc) {
        case 0x2f3498u: goto label_2f3498;
        case 0x2f34c0u: goto label_2f34c0;
        case 0x2f34c8u: goto label_2f34c8;
        case 0x2f34d4u: goto label_2f34d4;
        case 0x2f34fcu: goto label_2f34fc;
        case 0x2f3510u: goto label_2f3510;
        case 0x2f352cu: goto label_2f352c;
        case 0x2f3544u: goto label_2f3544;
        case 0x2f3550u: goto label_2f3550;
        case 0x2f3590u: goto label_2f3590;
        case 0x2f35dcu: goto label_2f35dc;
        case 0x2f35f8u: goto label_2f35f8;
        case 0x2f3610u: goto label_2f3610;
        case 0x2f361cu: goto label_2f361c;
        case 0x2f3658u: goto label_2f3658;
        default: break;
    }

    ctx->pc = 0x2f3448u;

    // 0x2f3448: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2f3448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2f344c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f344cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f3450: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2f3450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2f3454: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f3454u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3458: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2f3458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2f345c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2f345cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2f3460: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2f3460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2f3464: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2f3464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2f3468: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2f3468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2f346c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2f346cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2f3470: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f3470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2f3474: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2f3474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2f3478: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2f3478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x2f347c: 0x12000094  beqz        $s0, . + 4 + (0x94 << 2)
    ctx->pc = 0x2F347Cu;
    {
        const bool branch_taken_0x2f347c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F347Cu;
        // 0x2f3480: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f347c) {
            ctx->pc = 0x2F36D0u;
            goto label_2f36d0;
        }
    }
    ctx->pc = 0x2F3484u;
    // 0x2f3484: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x2f3484u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f3488: 0x10400092  beqz        $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x2F3488u;
    {
        const bool branch_taken_0x2f3488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3488u;
        // 0x2f348c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3488) {
            ctx->pc = 0x2F36D4u;
            goto label_2f36d4;
        }
    }
    ctx->pc = 0x2F3490u;
    // 0x2f3490: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x2F3490u;
    SET_GPR_U32(ctx, 31, 0x2F3498u);
    ctx->pc = 0x2F3494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3490u;
    // 0x2f3494: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x2F3490u, 0x2F3498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3498u;
label_2f3498:
    // 0x2f3498: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2f3498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2f349c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2f349cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2f34a0: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x2f34a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f34a4: 0x10400084  beqz        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x2F34A4u;
    {
        const bool branch_taken_0x2f34a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F34A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F34A4u;
        // 0x2f34a8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f34a4) {
            ctx->pc = 0x2F36B8u;
            goto label_2f36b8;
        }
    }
    ctx->pc = 0x2F34ACu;
    // 0x2f34ac: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x2f34acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x2f34b0: 0x241e003d  addiu       $fp, $zero, 0x3D
    ctx->pc = 0x2f34b0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x2f34b4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2f34b4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f34b8: 0x2456b7c8  addiu       $s6, $v0, -0x4838
    ctx->pc = 0x2f34b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948808));
    // 0x2f34bc: 0x0  nop
    ctx->pc = 0x2f34bcu;
    // NOP
label_2f34c0:
    // 0x2f34c0: 0xc0bc7b2  jal         func_2F1EC8
    ctx->pc = 0x2F34C0u;
    SET_GPR_U32(ctx, 31, 0x2F34C8u);
    ctx->pc = 0x2F34C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F34C0u;
    // 0x2f34c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1EC8u, 0x2F34C0u, 0x2F34C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F34C8u;
label_2f34c8:
    // 0x2f34c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f34c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f34cc: 0xc0bc79c  jal         func_2F1E70
    ctx->pc = 0x2F34CCu;
    SET_GPR_U32(ctx, 31, 0x2F34D4u);
    ctx->pc = 0x2F34D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F34CCu;
    // 0x2f34d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1E70u, 0x2F34CCu, 0x2F34D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F34D4u;
label_2f34d4:
    // 0x2f34d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f34d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f34d8: 0x1230007e  beq         $s1, $s0, . + 4 + (0x7E << 2)
    ctx->pc = 0x2F34D8u;
    {
        const bool branch_taken_0x2f34d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x2F34DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F34D8u;
        // 0x2f34dc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f34d8) {
            ctx->pc = 0x2F36D4u;
            goto label_2f36d4;
        }
    }
    ctx->pc = 0x2F34E0u;
    // 0x2f34e0: 0x1220007c  beqz        $s1, . + 4 + (0x7C << 2)
    ctx->pc = 0x2F34E0u;
    {
        const bool branch_taken_0x2f34e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F34E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F34E0u;
        // 0x2f34e4: 0x26240001  addiu       $a0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f34e0) {
            ctx->pc = 0x2F36D4u;
            goto label_2f36d4;
        }
    }
    ctx->pc = 0x2F34E8u;
    // 0x2f34e8: 0x82320000  lb          $s2, 0x0($s1)
    ctx->pc = 0x2f34e8u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f34ec: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x2f34ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f34f0: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x2f34f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2f34f4: 0xc04a726  jal         func_129C98
    ctx->pc = 0x2F34F4u;
    SET_GPR_U32(ctx, 31, 0x2F34FCu);
    ctx->pc = 0x2F34F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F34F4u;
    // 0x2f34f8: 0x8fb30008  lw          $s3, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129C98u, 0x2F34F4u, 0x2F34FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F34FCu;
label_2f34fc:
    // 0x2f34fc: 0x42980b  movn        $s3, $v0, $v0
    ctx->pc = 0x2f34fcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
    // 0x2f3500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f3500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3504: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f3504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2f3508: 0xc0bd9e4  jal         func_2F6790
    ctx->pc = 0x2F3508u;
    SET_GPR_U32(ctx, 31, 0x2F3510u);
    ctx->pc = 0x2F350Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3508u;
    // 0x2f350c: 0x24451dd0  addiu       $a1, $v0, 0x1DD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6790u, 0x2F3508u, 0x2F3510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3510u;
label_2f3510:
    // 0x2f3510: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2F3510u;
    {
        const bool branch_taken_0x2f3510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3510u;
        // 0x2f3514: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3510) {
            ctx->pc = 0x2F35D0u;
            goto label_2f35d0;
        }
    }
    ctx->pc = 0x2F3518u;
    // 0x2f3518: 0x1680002e  bnez        $s4, . + 4 + (0x2E << 2)
    ctx->pc = 0x2F3518u;
    {
        const bool branch_taken_0x2f3518 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F351Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3518u;
        // 0x2f351c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3518) {
            ctx->pc = 0x2F35D4u;
            goto label_2f35d4;
        }
    }
    ctx->pc = 0x2F3520u;
    // 0x2f3520: 0xa2320000  sb          $s2, 0x0($s1)
    ctx->pc = 0x2f3520u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x2f3524: 0xc0bc7b2  jal         func_2F1EC8
    ctx->pc = 0x2F3524u;
    SET_GPR_U32(ctx, 31, 0x2F352Cu);
    ctx->pc = 0x2F3528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3524u;
    // 0x2f3528: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1EC8u, 0x2F3524u, 0x2F352Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F352Cu;
label_2f352c:
    // 0x2f352c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f352cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3530: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x2f3530u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f3534: 0x145e0067  bne         $v0, $fp, . + 4 + (0x67 << 2)
    ctx->pc = 0x2F3534u;
    {
        const bool branch_taken_0x2f3534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x2F3538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3534u;
        // 0x2f3538: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3534) {
            ctx->pc = 0x2F36D4u;
            goto label_2f36d4;
        }
    }
    ctx->pc = 0x2F353Cu;
    // 0x2f353c: 0xc0bc7b2  jal         func_2F1EC8
    ctx->pc = 0x2F353Cu;
    SET_GPR_U32(ctx, 31, 0x2F3544u);
    ctx->pc = 0x2F3540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F353Cu;
    // 0x2f3540: 0x26040001  addiu       $a0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1EC8u, 0x2F353Cu, 0x2F3544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3544u;
label_2f3544:
    // 0x2f3544: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f3544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3548: 0xc0bc79c  jal         func_2F1E70
    ctx->pc = 0x2F3548u;
    SET_GPR_U32(ctx, 31, 0x2F3550u);
    ctx->pc = 0x2F354Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3548u;
    // 0x2f354c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1E70u, 0x2F3548u, 0x2F3550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3550u;
label_2f3550:
    // 0x2f3550: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f3550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3554: 0x1220005f  beqz        $s1, . + 4 + (0x5F << 2)
    ctx->pc = 0x2F3554u;
    {
        const bool branch_taken_0x2f3554 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3554u;
        // 0x2f3558: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3554) {
            ctx->pc = 0x2F36D4u;
            goto label_2f36d4;
        }
    }
    ctx->pc = 0x2F355Cu;
    // 0x2f355c: 0x82320000  lb          $s2, 0x0($s1)
    ctx->pc = 0x2f355cu;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f3560: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x2f3560u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f3564: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x2f3564u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f3568: 0x51e00  sll         $v1, $a1, 24
    ctx->pc = 0x2f3568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2f356c: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x2f356cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x2f3570: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x2f3570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x2f3574: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2f3574u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f3578: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2f3578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2f357c: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2F357Cu;
    {
        const bool branch_taken_0x2f357c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F357Cu;
        // 0x2f3580: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f357c) {
            ctx->pc = 0x2F3690u;
            goto label_2f3690;
        }
    }
    ctx->pc = 0x2F3584u;
    // 0x2f3584: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x2f3584u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f3588: 0x26e7b7c8  addiu       $a3, $s7, -0x4838
    ctx->pc = 0x2f3588u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294948808));
    // 0x2f358c: 0x0  nop
    ctx->pc = 0x2f358cu;
    // NOP
label_2f3590:
    // 0x2f3590: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f3590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2f3594: 0x2882018  mult        $a0, $s4, $t0
    ctx->pc = 0x2f3594u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2f3598: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x2f3598u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f359c: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x2f359cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x2f35a0: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2f35a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2f35a4: 0x51e00  sll         $v1, $a1, 24
    ctx->pc = 0x2f35a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2f35a8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f35a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f35ac: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x2f35acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x2f35b0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2f35b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f35b4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2f35b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2f35b8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2f35b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f35bc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2f35bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2f35c0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2F35C0u;
    {
        const bool branch_taken_0x2f35c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F35C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F35C0u;
        // 0x2f35c4: 0x2494ffd0  addiu       $s4, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f35c0) {
            ctx->pc = 0x2F3590u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f3590;
        }
    }
    ctx->pc = 0x2F35C8u;
    // 0x2f35c8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2F35C8u;
    {
        const bool branch_taken_0x2f35c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f35c8) {
            ctx->pc = 0x2F3690u;
            goto label_2f3690;
        }
    }
    ctx->pc = 0x2F35D0u;
label_2f35d0:
    // 0x2f35d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f35d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f35d4:
    // 0x2f35d4: 0xc0bd9e4  jal         func_2F6790
    ctx->pc = 0x2F35D4u;
    SET_GPR_U32(ctx, 31, 0x2F35DCu);
    ctx->pc = 0x2F35D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F35D4u;
    // 0x2f35d8: 0x24651dd8  addiu       $a1, $v1, 0x1DD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 7640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6790u, 0x2F35D4u, 0x2F35DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F35DCu;
label_2f35dc:
    // 0x2f35dc: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x2F35DCu;
    {
        const bool branch_taken_0x2f35dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f35dc) {
            ctx->pc = 0x2F35E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F35DCu;
            // 0x2f35e0: 0x82620000  lb          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F36A0u;
            goto label_2f36a0;
        }
    }
    ctx->pc = 0x2F35E4u;
    // 0x2f35e4: 0x56a0002e  bnel        $s5, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x2F35E4u;
    {
        const bool branch_taken_0x2f35e4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f35e4) {
            ctx->pc = 0x2F35E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F35E4u;
            // 0x2f35e8: 0x82620000  lb          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F36A0u;
            goto label_2f36a0;
        }
    }
    ctx->pc = 0x2F35ECu;
    // 0x2f35ec: 0xa2320000  sb          $s2, 0x0($s1)
    ctx->pc = 0x2f35ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x2f35f0: 0xc0bc7b2  jal         func_2F1EC8
    ctx->pc = 0x2F35F0u;
    SET_GPR_U32(ctx, 31, 0x2F35F8u);
    ctx->pc = 0x2F35F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F35F0u;
    // 0x2f35f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1EC8u, 0x2F35F0u, 0x2F35F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F35F8u;
label_2f35f8:
    // 0x2f35f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f35f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f35fc: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x2f35fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f3600: 0x145e0034  bne         $v0, $fp, . + 4 + (0x34 << 2)
    ctx->pc = 0x2F3600u;
    {
        const bool branch_taken_0x2f3600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x2F3604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3600u;
        // 0x2f3604: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3600) {
            ctx->pc = 0x2F36D4u;
            goto label_2f36d4;
        }
    }
    ctx->pc = 0x2F3608u;
    // 0x2f3608: 0xc0bc7b2  jal         func_2F1EC8
    ctx->pc = 0x2F3608u;
    SET_GPR_U32(ctx, 31, 0x2F3610u);
    ctx->pc = 0x2F360Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3608u;
    // 0x2f360c: 0x26040001  addiu       $a0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1EC8u, 0x2F3608u, 0x2F3610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3610u;
label_2f3610:
    // 0x2f3610: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f3610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3614: 0xc0bc79c  jal         func_2F1E70
    ctx->pc = 0x2F3614u;
    SET_GPR_U32(ctx, 31, 0x2F361Cu);
    ctx->pc = 0x2F3618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3614u;
    // 0x2f3618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1E70u, 0x2F3614u, 0x2F361Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F361Cu;
label_2f361c:
    // 0x2f361c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f361cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3620: 0x1220002c  beqz        $s1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2F3620u;
    {
        const bool branch_taken_0x2f3620 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3620u;
        // 0x2f3624: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3620) {
            ctx->pc = 0x2F36D4u;
            goto label_2f36d4;
        }
    }
    ctx->pc = 0x2F3628u;
    // 0x2f3628: 0x82320000  lb          $s2, 0x0($s1)
    ctx->pc = 0x2f3628u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f362c: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x2f362cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f3630: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x2f3630u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f3634: 0x51e00  sll         $v1, $a1, 24
    ctx->pc = 0x2f3634u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2f3638: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x2f3638u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x2f363c: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x2f363cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x2f3640: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2f3640u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f3644: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2f3644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2f3648: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F3648u;
    {
        const bool branch_taken_0x2f3648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3648u;
        // 0x2f364c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3648) {
            ctx->pc = 0x2F3690u;
            goto label_2f3690;
        }
    }
    ctx->pc = 0x2F3650u;
    // 0x2f3650: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x2f3650u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f3654: 0x26e7b7c8  addiu       $a3, $s7, -0x4838
    ctx->pc = 0x2f3654u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294948808));
label_2f3658:
    // 0x2f3658: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f3658u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2f365c: 0x2a82018  mult        $a0, $s5, $t0
    ctx->pc = 0x2f365cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2f3660: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x2f3660u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f3664: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x2f3664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x2f3668: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2f3668u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2f366c: 0x51e00  sll         $v1, $a1, 24
    ctx->pc = 0x2f366cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2f3670: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f3670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3674: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x2f3674u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x2f3678: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2f3678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f367c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2f367cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2f3680: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2f3680u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f3684: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2f3684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2f3688: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2F3688u;
    {
        const bool branch_taken_0x2f3688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3688u;
        // 0x2f368c: 0x2495ffd0  addiu       $s5, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3688) {
            ctx->pc = 0x2F3658u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f3658;
        }
    }
    ctx->pc = 0x2F3690u;
label_2f3690:
    // 0x2f3690: 0x14a00010  bnez        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F3690u;
    {
        const bool branch_taken_0x2f3690 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3690u;
        // 0x2f3694: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3690) {
            ctx->pc = 0x2F36D4u;
            goto label_2f36d4;
        }
    }
    ctx->pc = 0x2F3698u;
    // 0x2f3698: 0xa2320000  sb          $s2, 0x0($s1)
    ctx->pc = 0x2f3698u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x2f369c: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x2f369cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_2f36a0:
    // 0x2f36a0: 0x3842002c  xori        $v0, $v0, 0x2C
    ctx->pc = 0x2f36a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)44);
    // 0x2f36a4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2f36a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2f36a8: 0x2628021  addu        $s0, $s3, $v0
    ctx->pc = 0x2f36a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2f36ac: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x2f36acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f36b0: 0x1460ff83  bnez        $v1, . + 4 + (-0x7D << 2)
    ctx->pc = 0x2F36B0u;
    {
        const bool branch_taken_0x2f36b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f36b0) {
            ctx->pc = 0x2F34C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f34c0;
        }
    }
    ctx->pc = 0x2F36B8u;
label_2f36b8:
    // 0x2f36b8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2f36b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f36bc: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x2f36bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x2f36c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f36c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f36c4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2f36c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2f36c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F36C8u;
    {
        const bool branch_taken_0x2f36c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F36CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F36C8u;
        // 0x2f36cc: 0xac750000  sw          $s5, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f36c8) {
            ctx->pc = 0x2F36D4u;
            goto label_2f36d4;
        }
    }
    ctx->pc = 0x2F36D0u;
label_2f36d0:
    // 0x2f36d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f36d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f36d4:
    // 0x2f36d4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2f36d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f36d8: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2f36d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f36dc: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2f36dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f36e0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2f36e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f36e4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2f36e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f36e8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2f36e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f36ec: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2f36ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f36f0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f36f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f36f4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2f36f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f36f8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f36f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f36fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F36FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F36FCu;
        // 0x2f3700: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F36FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3704u;
    // 0x2f3704: 0x0  nop
    ctx->pc = 0x2f3704u;
    // NOP
}
