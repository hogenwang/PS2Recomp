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

// Function: sub_003212A0
// Address: 0x3212a0 - 0x321410
void sub_003212A0_0x3212a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003212A0_0x3212a0");
#endif

    switch (ctx->pc) {
        case 0x3212f4u: goto label_3212f4;
        case 0x321330u: goto label_321330;
        case 0x32135cu: goto label_32135c;
        case 0x321388u: goto label_321388;
        case 0x3213bcu: goto label_3213bc;
        case 0x3213e8u: goto label_3213e8;
        default: break;
    }

    ctx->pc = 0x3212a0u;

    // 0x3212a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3212a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3212a4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x3212a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3212a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3212a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3212ac: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x3212acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3212b0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3212B0u;
    {
        const bool branch_taken_0x3212b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3212b0) {
            ctx->pc = 0x3212BCu;
            goto label_3212bc;
        }
    }
    ctx->pc = 0x3212B8u;
    // 0x3212b8: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x3212b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
label_3212bc:
    // 0x3212bc: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x3212bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x3212c0: 0x904203d8  lbu         $v0, 0x3D8($v0)
    ctx->pc = 0x3212c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 984)));
    // 0x3212c4: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x3212c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3212c8: 0x1020004d  beqz        $at, . + 4 + (0x4D << 2)
    ctx->pc = 0x3212C8u;
    {
        const bool branch_taken_0x3212c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3212CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3212C8u;
        // 0x3212cc: 0x90860001  lbu         $a2, 0x1($a0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3212c8) {
            ctx->pc = 0x321400u;
            goto label_321400;
        }
    }
    ctx->pc = 0x3212D0u;
    // 0x3212d0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3212d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3212d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3212d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3212d8: 0x24633eb0  addiu       $v1, $v1, 0x3EB0
    ctx->pc = 0x3212d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16048));
    // 0x3212dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3212dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3212e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3212e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3212e4: 0x400008  jr          $v0
    ctx->pc = 0x3212E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3212ECu: goto label_3212ec;
            case 0x321314u: goto label_321314;
            case 0x321350u: goto label_321350;
            case 0x32137Cu: goto label_32137c;
            case 0x3213A8u: goto label_3213a8;
            case 0x3213D4u: goto label_3213d4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3212E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3212ECu;
label_3212ec:
    // 0x3212ec: 0xc063a04  jal         func_18E810
    ctx->pc = 0x3212ECu;
    SET_GPR_U32(ctx, 31, 0x3212F4u);
    ctx->pc = 0x3212F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3212ECu;
    // 0x3212f0: 0x30c4ffff  andi        $a0, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E810u, 0x3212ECu, 0x3212F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3212F4u;
label_3212f4:
    // 0x3212f4: 0x50400043  beql        $v0, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x3212F4u;
    {
        const bool branch_taken_0x3212f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3212f4) {
            ctx->pc = 0x3212F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3212F4u;
            // 0x3212f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321404u;
            goto label_321404;
        }
    }
    ctx->pc = 0x3212FCu;
    // 0x3212fc: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x3212fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x321300: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x321300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x321304: 0x906303d8  lbu         $v1, 0x3D8($v1)
    ctx->pc = 0x321304u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 984)));
    // 0x321308: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x321308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32130c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x32130Cu;
    {
        const bool branch_taken_0x32130c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32130Cu;
        // 0x321310: 0xa04303d8  sb          $v1, 0x3D8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 984), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32130c) {
            ctx->pc = 0x321400u;
            goto label_321400;
        }
    }
    ctx->pc = 0x321314u;
label_321314:
    // 0x321314: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x321314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x321318: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x321318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32131c: 0x8c4263c0  lw          $v0, 0x63C0($v0)
    ctx->pc = 0x32131cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25536)));
    // 0x321320: 0x14430037  bne         $v0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x321320u;
    {
        const bool branch_taken_0x321320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x321320) {
            ctx->pc = 0x321400u;
            goto label_321400;
        }
    }
    ctx->pc = 0x321328u;
    // 0x321328: 0xc04bb0c  jal         func_12EC30
    ctx->pc = 0x321328u;
    SET_GPR_U32(ctx, 31, 0x321330u);
    ctx->pc = 0x12EC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC30u, 0x321328u, 0x321330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321330u;
label_321330:
    // 0x321330: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x321330u;
    {
        const bool branch_taken_0x321330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x321330) {
            ctx->pc = 0x321400u;
            goto label_321400;
        }
    }
    ctx->pc = 0x321338u;
    // 0x321338: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x321338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x32133c: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x32133cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x321340: 0x906303d8  lbu         $v1, 0x3D8($v1)
    ctx->pc = 0x321340u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 984)));
    // 0x321344: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x321344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x321348: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x321348u;
    {
        const bool branch_taken_0x321348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321348u;
        // 0x32134c: 0xa04303d8  sb          $v1, 0x3D8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 984), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321348) {
            ctx->pc = 0x321400u;
            goto label_321400;
        }
    }
    ctx->pc = 0x321350u;
label_321350:
    // 0x321350: 0x30c4ffff  andi        $a0, $a2, 0xFFFF
    ctx->pc = 0x321350u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x321354: 0xc058c40  jal         func_163100
    ctx->pc = 0x321354u;
    SET_GPR_U32(ctx, 31, 0x32135Cu);
    ctx->pc = 0x321358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321354u;
    // 0x321358: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163100u, 0x321354u, 0x32135Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32135Cu;
label_32135c:
    // 0x32135c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x32135Cu;
    {
        const bool branch_taken_0x32135c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32135c) {
            ctx->pc = 0x321400u;
            goto label_321400;
        }
    }
    ctx->pc = 0x321364u;
    // 0x321364: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x321364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x321368: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x321368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x32136c: 0x906303d8  lbu         $v1, 0x3D8($v1)
    ctx->pc = 0x32136cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 984)));
    // 0x321370: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x321370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x321374: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x321374u;
    {
        const bool branch_taken_0x321374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321374u;
        // 0x321378: 0xa04303d8  sb          $v1, 0x3D8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 984), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321374) {
            ctx->pc = 0x321400u;
            goto label_321400;
        }
    }
    ctx->pc = 0x32137Cu;
label_32137c:
    // 0x32137c: 0x30c4ffff  andi        $a0, $a2, 0xFFFF
    ctx->pc = 0x32137cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x321380: 0xc058c40  jal         func_163100
    ctx->pc = 0x321380u;
    SET_GPR_U32(ctx, 31, 0x321388u);
    ctx->pc = 0x321384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321380u;
    // 0x321384: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163100u, 0x321380u, 0x321388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321388u;
label_321388:
    // 0x321388: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x321388u;
    {
        const bool branch_taken_0x321388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x321388) {
            ctx->pc = 0x321400u;
            goto label_321400;
        }
    }
    ctx->pc = 0x321390u;
    // 0x321390: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x321390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x321394: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x321394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x321398: 0x906303d8  lbu         $v1, 0x3D8($v1)
    ctx->pc = 0x321398u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 984)));
    // 0x32139c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32139cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3213a0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3213A0u;
    {
        const bool branch_taken_0x3213a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3213A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3213A0u;
        // 0x3213a4: 0xa04303d8  sb          $v1, 0x3D8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 984), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3213a0) {
            ctx->pc = 0x321400u;
            goto label_321400;
        }
    }
    ctx->pc = 0x3213A8u;
label_3213a8:
    // 0x3213a8: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x3213a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x3213ac: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3213acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3213b0: 0x90860010  lbu         $a2, 0x10($a0)
    ctx->pc = 0x3213b0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3213b4: 0xc052d50  jal         func_14B540
    ctx->pc = 0x3213B4u;
    SET_GPR_U32(ctx, 31, 0x3213BCu);
    ctx->pc = 0x3213B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3213B4u;
    // 0x3213b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B540u, 0x3213B4u, 0x3213BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3213BCu;
label_3213bc:
    // 0x3213bc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3213BCu;
    {
        const bool branch_taken_0x3213bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3213bc) {
            ctx->pc = 0x321400u;
            goto label_321400;
        }
    }
    ctx->pc = 0x3213C4u;
    // 0x3213c4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3213c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3213c8: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x3213c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x3213cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3213CCu;
    {
        const bool branch_taken_0x3213cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3213D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3213CCu;
        // 0x3213d0: 0xa04303d8  sb          $v1, 0x3D8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 984), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3213cc) {
            ctx->pc = 0x321400u;
            goto label_321400;
        }
    }
    ctx->pc = 0x3213D4u;
label_3213d4:
    // 0x3213d4: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x3213d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x3213d8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3213d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3213dc: 0x90860010  lbu         $a2, 0x10($a0)
    ctx->pc = 0x3213dcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3213e0: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x3213E0u;
    SET_GPR_U32(ctx, 31, 0x3213E8u);
    ctx->pc = 0x3213E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3213E0u;
    // 0x3213e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x3213E0u, 0x3213E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3213E8u;
label_3213e8:
    // 0x3213e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3213E8u;
    {
        const bool branch_taken_0x3213e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3213e8) {
            ctx->pc = 0x321400u;
            goto label_321400;
        }
    }
    ctx->pc = 0x3213F0u;
    // 0x3213f0: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x3213f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x3213f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3213f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3213f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3213F8u;
    {
        const bool branch_taken_0x3213f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3213FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3213F8u;
        // 0x3213fc: 0xa06003d8  sb          $zero, 0x3D8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 984), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3213f8) {
            ctx->pc = 0x321404u;
            goto label_321404;
        }
    }
    ctx->pc = 0x321400u;
label_321400:
    // 0x321400: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x321400u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321404:
    // 0x321404: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x321404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321408: 0x3e00008  jr          $ra
    ctx->pc = 0x321408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321408u;
        // 0x32140c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321410u;
}
