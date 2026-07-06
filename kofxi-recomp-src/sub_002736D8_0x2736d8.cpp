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

// Function: sub_002736D8
// Address: 0x2736d8 - 0x273a80
void sub_002736D8_0x2736d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002736D8_0x2736d8");
#endif

    switch (ctx->pc) {
        case 0x273754u: goto label_273754;
        case 0x273764u: goto label_273764;
        case 0x273768u: goto label_273768;
        case 0x273798u: goto label_273798;
        case 0x2737d8u: goto label_2737d8;
        case 0x273870u: goto label_273870;
        case 0x27388cu: goto label_27388c;
        case 0x273894u: goto label_273894;
        case 0x273908u: goto label_273908;
        case 0x27391cu: goto label_27391c;
        case 0x273948u: goto label_273948;
        case 0x273994u: goto label_273994;
        case 0x273a30u: goto label_273a30;
        case 0x273a4cu: goto label_273a4c;
        case 0x273a54u: goto label_273a54;
        case 0x273a5cu: goto label_273a5c;
        default: break;
    }

    ctx->pc = 0x2736d8u;

    // 0x2736d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2736d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2736dc: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x2736dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2736e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2736e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2736e4: 0x2402fff5  addiu       $v0, $zero, -0xB
    ctx->pc = 0x2736e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
    // 0x2736e8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2736E8u;
    {
        const bool branch_taken_0x2736e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2736ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2736E8u;
        // 0x2736ec: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2736e8) {
            ctx->pc = 0x273700u;
            goto label_273700;
        }
    }
    ctx->pc = 0x2736F0u;
    // 0x2736f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2736f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2736f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2736f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2736f8: 0x809cbfc  j           func_272FF0
    ctx->pc = 0x2736F8u;
    ctx->pc = 0x2736FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2736F8u;
    // 0x2736fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272FF0u, 0x2736F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x273700u;
label_273700:
    // 0x273700: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x273700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273704: 0x3e00008  jr          $ra
    ctx->pc = 0x273704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273704u;
        // 0x273708: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27370Cu;
    // 0x27370c: 0x0  nop
    ctx->pc = 0x27370cu;
    // NOP
    // 0x273710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x273710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x273714: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x273714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x273718: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x273718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27371c: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x27371cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x273720: 0x8c432d74  lw          $v1, 0x2D74($v0)
    ctx->pc = 0x273720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11636)));
    // 0x273724: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x273724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x273728: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x273728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x27372c: 0x26122d78  addiu       $s2, $s0, 0x2D78
    ctx->pc = 0x27372cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 11640));
    // 0x273730: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x273730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x273734: 0x3c130001  lui         $s3, 0x1
    ctx->pc = 0x273734u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)1 << 16));
    // 0x273738: 0x36730700  ori         $s3, $s3, 0x700
    ctx->pc = 0x273738u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1792);
    // 0x27373c: 0x2729821  addu        $s3, $s3, $s2
    ctx->pc = 0x27373cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x273740: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x273740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x273744: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x273744u;
    {
        const bool branch_taken_0x273744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x273748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273744u;
        // 0x273748: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273744) {
            ctx->pc = 0x273898u;
            goto label_273898;
        }
    }
    ctx->pc = 0x27374Cu;
    // 0x27374c: 0xc0b6c32  jal         func_2DB0C8
    ctx->pc = 0x27374Cu;
    SET_GPR_U32(ctx, 31, 0x273754u);
    ctx->pc = 0x2DB0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB0C8u, 0x27374Cu, 0x273754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273754u;
label_273754:
    // 0x273754: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x273754u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273758: 0x1860000b  blez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x273758u;
    {
        const bool branch_taken_0x273758 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x273758) {
            ctx->pc = 0x273788u;
            goto label_273788;
        }
    }
    ctx->pc = 0x273760u;
    // 0x273760: 0xc0b6ce0  jal         func_2DB380
label_273764:
    if (ctx->pc == 0x273764u) {
        ctx->pc = 0x273768u;
        goto label_273768;
    }
    ctx->pc = 0x273760u;
    SET_GPR_U32(ctx, 31, 0x273768u);
    ctx->pc = 0x2DB380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB380u, 0x273760u, 0x273768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273768u;
label_273768:
    // 0x273768: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x273768u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27376c: 0x462004b  bltzl       $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x27376Cu;
    {
        const bool branch_taken_0x27376c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x27376c) {
            ctx->pc = 0x273770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27376Cu;
            // 0x273770: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27389Cu;
            goto label_27389c;
        }
    }
    ctx->pc = 0x273774u;
    // 0x273774: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x273774u;
    {
        const bool branch_taken_0x273774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x273774) {
            ctx->pc = 0x273790u;
            goto label_273790;
        }
    }
    ctx->pc = 0x27377Cu;
    // 0x27377c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x27377Cu;
    {
        const bool branch_taken_0x27377c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27377Cu;
        // 0x273780: 0x2402fe6c  addiu       $v0, $zero, -0x194 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966892));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27377c) {
            ctx->pc = 0x273898u;
            goto label_273898;
        }
    }
    ctx->pc = 0x273784u;
    // 0x273784: 0x0  nop
    ctx->pc = 0x273784u;
    // NOP
label_273788:
    // 0x273788: 0x4620044  bltzl       $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x273788u;
    {
        const bool branch_taken_0x273788 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x273788) {
            ctx->pc = 0x27378Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273788u;
            // 0x27378c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27389Cu;
            goto label_27389c;
        }
    }
    ctx->pc = 0x273790u;
label_273790:
    // 0x273790: 0xc09c8a8  jal         func_2722A0
    ctx->pc = 0x273790u;
    SET_GPR_U32(ctx, 31, 0x273798u);
    ctx->pc = 0x2722A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2722A0u, 0x273790u, 0x273798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273798u;
label_273798:
    // 0x273798: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x273798u;
    {
        const bool branch_taken_0x273798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27379Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273798u;
        // 0x27379c: 0x2403c7ff  addiu       $v1, $zero, -0x3801 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294952959));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273798) {
            ctx->pc = 0x2737A8u;
            goto label_2737a8;
        }
    }
    ctx->pc = 0x2737A0u;
    // 0x2737a0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2737A0u;
    {
        const bool branch_taken_0x2737a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2737A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2737A0u;
        // 0x2737a4: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2737a0) {
            ctx->pc = 0x273898u;
            goto label_273898;
        }
    }
    ctx->pc = 0x2737A8u;
label_2737a8:
    // 0x2737a8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2737a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2737ac: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2737acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2737b0: 0xdc420688  ld          $v0, 0x688($v0)
    ctx->pc = 0x2737b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 1672)));
    // 0x2737b4: 0x24041000  addiu       $a0, $zero, 0x1000
    ctx->pc = 0x2737b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x2737b8: 0x2405f8ff  addiu       $a1, $zero, -0x701
    ctx->pc = 0x2737b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965503));
    // 0x2737bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2737bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2737c0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2737c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2737c4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2737c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2737c8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2737c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2737cc: 0x320821  addu        $at, $at, $s2
    ctx->pc = 0x2737ccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 18)));
    // 0x2737d0: 0xc0b6c32  jal         func_2DB0C8
    ctx->pc = 0x2737D0u;
    SET_GPR_U32(ctx, 31, 0x2737D8u);
    ctx->pc = 0x2737D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2737D0u;
    // 0x2737d4: 0xfc220688  sd          $v0, 0x688($at) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 1), 1672), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB0C8u, 0x2737D0u, 0x2737D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2737D8u;
label_2737d8:
    // 0x2737d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2737d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2737dc: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2737DCu;
    {
        const bool branch_taken_0x2737dc = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2737dc) {
            ctx->pc = 0x273820u;
            goto label_273820;
        }
    }
    ctx->pc = 0x2737E4u;
    // 0x2737e4: 0x26032d78  addiu       $v1, $s0, 0x2D78
    ctx->pc = 0x2737e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 11640));
    // 0x2737e8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2737e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2737ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2737ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2737f0: 0x8c4206b8  lw          $v0, 0x6B8($v0)
    ctx->pc = 0x2737f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1720)));
    // 0x2737f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2737f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2737f8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2737F8u;
    {
        const bool branch_taken_0x2737f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2737FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2737F8u;
        // 0x2737fc: 0x34048000  ori         $a0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2737f8) {
            ctx->pc = 0x273828u;
            goto label_273828;
        }
    }
    ctx->pc = 0x273800u;
    // 0x273800: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x273800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x273804: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x273804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x273808: 0xdc420688  ld          $v0, 0x688($v0)
    ctx->pc = 0x273808u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 1672)));
    // 0x27380c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x27380cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x273810: 0x34633fff  ori         $v1, $v1, 0x3FFF
    ctx->pc = 0x273810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16383);
    // 0x273814: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x273814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x273818: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x273818u;
    {
        const bool branch_taken_0x273818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273818u;
        // 0x27381c: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273818) {
            ctx->pc = 0x273840u;
            goto label_273840;
        }
    }
    ctx->pc = 0x273820u;
label_273820:
    // 0x273820: 0x5460001e  bnel        $v1, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x273820u;
    {
        const bool branch_taken_0x273820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x273820) {
            ctx->pc = 0x273824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273820u;
            // 0x273824: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27389Cu;
            goto label_27389c;
        }
    }
    ctx->pc = 0x273828u;
label_273828:
    // 0x273828: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x273828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x27382c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x27382cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x273830: 0xdc420688  ld          $v0, 0x688($v0)
    ctx->pc = 0x273830u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 1672)));
    // 0x273834: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x273834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x273838: 0x34633fff  ori         $v1, $v1, 0x3FFF
    ctx->pc = 0x273838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16383);
    // 0x27383c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27383cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_273840:
    // 0x273840: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x273840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x273844: 0x320821  addu        $at, $at, $s2
    ctx->pc = 0x273844u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 18)));
    // 0x273848: 0xfc220688  sd          $v0, 0x688($at)
    ctx->pc = 0x273848u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 1672), GPR_U64(ctx, 2));
    // 0x27384c: 0x26102d78  addiu       $s0, $s0, 0x2D78
    ctx->pc = 0x27384cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11640));
    // 0x273850: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x273850u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273854: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x273854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x273858: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x273858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x27385c: 0x8c8406c8  lw          $a0, 0x6C8($a0)
    ctx->pc = 0x27385cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    // 0x273860: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x273860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x273864: 0x320821  addu        $at, $at, $s2
    ctx->pc = 0x273864u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 18)));
    // 0x273868: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x273868u;
    SET_GPR_U32(ctx, 31, 0x273870u);
    ctx->pc = 0x27386Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273868u;
    // 0x27386c: 0xac3106e0  sw          $s1, 0x6E0($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 1760), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x273868u, 0x273870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273870u;
label_273870:
    // 0x273870: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x273870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x273874: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x273874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x273878: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x273878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x27387c: 0x8c8406c8  lw          $a0, 0x6C8($a0)
    ctx->pc = 0x27387cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    // 0x273880: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x273880u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x273884: 0xc043320  jal         func_10CC80
    ctx->pc = 0x273884u;
    SET_GPR_U32(ctx, 31, 0x27388Cu);
    ctx->pc = 0x273888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273884u;
    // 0x273888: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x273884u, 0x27388Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27388Cu;
label_27388c:
    // 0x27388c: 0xc09c8b0  jal         func_2722C0
    ctx->pc = 0x27388Cu;
    SET_GPR_U32(ctx, 31, 0x273894u);
    ctx->pc = 0x2722C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2722C0u, 0x27388Cu, 0x273894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273894u;
label_273894:
    // 0x273894: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x273894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273898:
    // 0x273898: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x273898u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27389c:
    // 0x27389c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27389cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2738a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2738a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2738a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2738a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2738a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2738a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2738ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2738ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2738B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2738ACu;
        // 0x2738b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2738ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2738B4u;
    // 0x2738b4: 0x0  nop
    ctx->pc = 0x2738b4u;
    // NOP
    // 0x2738b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2738b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2738bc: 0x2402fff5  addiu       $v0, $zero, -0xB
    ctx->pc = 0x2738bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
    // 0x2738c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2738c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2738c4: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x2738c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x2738c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2738c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2738cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2738ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2738d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2738d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2738d4: 0x26122d78  addiu       $s2, $s0, 0x2D78
    ctx->pc = 0x2738d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 11640));
    // 0x2738d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2738d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2738dc: 0x3c130001  lui         $s3, 0x1
    ctx->pc = 0x2738dcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)1 << 16));
    // 0x2738e0: 0x36730700  ori         $s3, $s3, 0x700
    ctx->pc = 0x2738e0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1792);
    // 0x2738e4: 0x2729821  addu        $s3, $s3, $s2
    ctx->pc = 0x2738e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x2738e8: 0x1220005d  beqz        $s1, . + 4 + (0x5D << 2)
    ctx->pc = 0x2738E8u;
    {
        const bool branch_taken_0x2738e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2738ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2738E8u;
        // 0x2738ec: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2738e8) {
            ctx->pc = 0x273A60u;
            goto label_273a60;
        }
    }
    ctx->pc = 0x2738F0u;
    // 0x2738f0: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2738f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2738f4: 0x8c832d74  lw          $v1, 0x2D74($a0)
    ctx->pc = 0x2738f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11636)));
    // 0x2738f8: 0x10600059  beqz        $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x2738F8u;
    {
        const bool branch_taken_0x2738f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2738FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2738F8u;
        // 0x2738fc: 0x2402fff8  addiu       $v0, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2738f8) {
            ctx->pc = 0x273A60u;
            goto label_273a60;
        }
    }
    ctx->pc = 0x273900u;
    // 0x273900: 0xc0b6c32  jal         func_2DB0C8
    ctx->pc = 0x273900u;
    SET_GPR_U32(ctx, 31, 0x273908u);
    ctx->pc = 0x2DB0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB0C8u, 0x273900u, 0x273908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273908u;
label_273908:
    // 0x273908: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x273908u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27390c: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x27390Cu;
    {
        const bool branch_taken_0x27390c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x27390c) {
            ctx->pc = 0x273938u;
            goto label_273938;
        }
    }
    ctx->pc = 0x273914u;
    // 0x273914: 0xc0b6ce0  jal         func_2DB380
    ctx->pc = 0x273914u;
    SET_GPR_U32(ctx, 31, 0x27391Cu);
    ctx->pc = 0x2DB380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB380u, 0x273914u, 0x27391Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27391Cu;
label_27391c:
    // 0x27391c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x27391cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273920: 0x4620050  bltzl       $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x273920u;
    {
        const bool branch_taken_0x273920 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x273920) {
            ctx->pc = 0x273924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273920u;
            // 0x273924: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273A64u;
            goto label_273a64;
        }
    }
    ctx->pc = 0x273928u;
    // 0x273928: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x273928u;
    {
        const bool branch_taken_0x273928 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x273928) {
            ctx->pc = 0x273940u;
            goto label_273940;
        }
    }
    ctx->pc = 0x273930u;
    // 0x273930: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x273930u;
    {
        const bool branch_taken_0x273930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273930u;
        // 0x273934: 0x2402fe6c  addiu       $v0, $zero, -0x194 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966892));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273930) {
            ctx->pc = 0x273A60u;
            goto label_273a60;
        }
    }
    ctx->pc = 0x273938u;
label_273938:
    // 0x273938: 0x462004a  bltzl       $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x273938u;
    {
        const bool branch_taken_0x273938 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x273938) {
            ctx->pc = 0x27393Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273938u;
            // 0x27393c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273A64u;
            goto label_273a64;
        }
    }
    ctx->pc = 0x273940u;
label_273940:
    // 0x273940: 0xc09c8a8  jal         func_2722A0
    ctx->pc = 0x273940u;
    SET_GPR_U32(ctx, 31, 0x273948u);
    ctx->pc = 0x2722A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2722A0u, 0x273940u, 0x273948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273948u;
label_273948:
    // 0x273948: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x273948u;
    {
        const bool branch_taken_0x273948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27394Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273948u;
        // 0x27394c: 0x2403c7ff  addiu       $v1, $zero, -0x3801 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294952959));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273948) {
            ctx->pc = 0x273958u;
            goto label_273958;
        }
    }
    ctx->pc = 0x273950u;
    // 0x273950: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x273950u;
    {
        const bool branch_taken_0x273950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273950u;
        // 0x273954: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273950) {
            ctx->pc = 0x273A60u;
            goto label_273a60;
        }
    }
    ctx->pc = 0x273958u;
label_273958:
    // 0x273958: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x273958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x27395c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x27395cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x273960: 0xdc420688  ld          $v0, 0x688($v0)
    ctx->pc = 0x273960u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 1672)));
    // 0x273964: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x273964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x273968: 0x2405f8ff  addiu       $a1, $zero, -0x701
    ctx->pc = 0x273968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965503));
    // 0x27396c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27396cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x273970: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x273970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x273974: 0x320821  addu        $at, $at, $s2
    ctx->pc = 0x273974u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 18)));
    // 0x273978: 0xac310694  sw          $s1, 0x694($at)
    ctx->pc = 0x273978u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1684), GPR_U32(ctx, 17));
    // 0x27397c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x27397cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x273980: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x273980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x273984: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x273984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x273988: 0x320821  addu        $at, $at, $s2
    ctx->pc = 0x273988u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 18)));
    // 0x27398c: 0xc0b6c32  jal         func_2DB0C8
    ctx->pc = 0x27398Cu;
    SET_GPR_U32(ctx, 31, 0x273994u);
    ctx->pc = 0x273990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27398Cu;
    // 0x273990: 0xfc220688  sd          $v0, 0x688($at) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 1), 1672), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB0C8u, 0x27398Cu, 0x273994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273994u;
label_273994:
    // 0x273994: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x273994u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273998: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x273998u;
    {
        const bool branch_taken_0x273998 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x273998) {
            ctx->pc = 0x2739E0u;
            goto label_2739e0;
        }
    }
    ctx->pc = 0x2739A0u;
    // 0x2739a0: 0x26032d78  addiu       $v1, $s0, 0x2D78
    ctx->pc = 0x2739a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 11640));
    // 0x2739a4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2739a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2739a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2739a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2739ac: 0x8c4206b8  lw          $v0, 0x6B8($v0)
    ctx->pc = 0x2739acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1720)));
    // 0x2739b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2739b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2739b4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2739B4u;
    {
        const bool branch_taken_0x2739b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2739B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2739B4u;
        // 0x2739b8: 0x34048000  ori         $a0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2739b4) {
            ctx->pc = 0x2739E8u;
            goto label_2739e8;
        }
    }
    ctx->pc = 0x2739BCu;
    // 0x2739bc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2739bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2739c0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2739c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2739c4: 0xdc420688  ld          $v0, 0x688($v0)
    ctx->pc = 0x2739c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 1672)));
    // 0x2739c8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2739c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2739cc: 0x34633fff  ori         $v1, $v1, 0x3FFF
    ctx->pc = 0x2739ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16383);
    // 0x2739d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2739d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2739d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2739D4u;
    {
        const bool branch_taken_0x2739d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2739D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2739D4u;
        // 0x2739d8: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2739d4) {
            ctx->pc = 0x273A00u;
            goto label_273a00;
        }
    }
    ctx->pc = 0x2739DCu;
    // 0x2739dc: 0x0  nop
    ctx->pc = 0x2739dcu;
    // NOP
label_2739e0:
    // 0x2739e0: 0x54600020  bnel        $v1, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x2739E0u;
    {
        const bool branch_taken_0x2739e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2739e0) {
            ctx->pc = 0x2739E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2739E0u;
            // 0x2739e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273A64u;
            goto label_273a64;
        }
    }
    ctx->pc = 0x2739E8u;
label_2739e8:
    // 0x2739e8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2739e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2739ec: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2739ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2739f0: 0xdc420688  ld          $v0, 0x688($v0)
    ctx->pc = 0x2739f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 1672)));
    // 0x2739f4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2739f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2739f8: 0x34633fff  ori         $v1, $v1, 0x3FFF
    ctx->pc = 0x2739f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16383);
    // 0x2739fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2739fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_273a00:
    // 0x273a00: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x273a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x273a04: 0x320821  addu        $at, $at, $s2
    ctx->pc = 0x273a04u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 18)));
    // 0x273a08: 0xfc220688  sd          $v0, 0x688($at)
    ctx->pc = 0x273a08u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 1672), GPR_U64(ctx, 2));
    // 0x273a0c: 0x26102d78  addiu       $s0, $s0, 0x2D78
    ctx->pc = 0x273a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11640));
    // 0x273a10: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x273a10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273a14: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x273a14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x273a18: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x273a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x273a1c: 0x8c8406c8  lw          $a0, 0x6C8($a0)
    ctx->pc = 0x273a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    // 0x273a20: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x273a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x273a24: 0x320821  addu        $at, $at, $s2
    ctx->pc = 0x273a24u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 18)));
    // 0x273a28: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x273A28u;
    SET_GPR_U32(ctx, 31, 0x273A30u);
    ctx->pc = 0x273A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273A28u;
    // 0x273a2c: 0xac3106e0  sw          $s1, 0x6E0($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 1760), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x273A28u, 0x273A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273A30u;
label_273a30:
    // 0x273a30: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x273a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x273a34: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x273a34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x273a38: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x273a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x273a3c: 0x8c8406c8  lw          $a0, 0x6C8($a0)
    ctx->pc = 0x273a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    // 0x273a40: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x273a40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x273a44: 0xc043320  jal         func_10CC80
    ctx->pc = 0x273A44u;
    SET_GPR_U32(ctx, 31, 0x273A4Cu);
    ctx->pc = 0x273A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273A44u;
    // 0x273a48: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x273A44u, 0x273A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273A4Cu;
label_273a4c:
    // 0x273a4c: 0xc09c8b0  jal         func_2722C0
    ctx->pc = 0x273A4Cu;
    SET_GPR_U32(ctx, 31, 0x273A54u);
    ctx->pc = 0x2722C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2722C0u, 0x273A4Cu, 0x273A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273A54u;
label_273a54:
    // 0x273a54: 0xc09c8ba  jal         func_2722E8
    ctx->pc = 0x273A54u;
    SET_GPR_U32(ctx, 31, 0x273A5Cu);
    ctx->pc = 0x2722E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2722E8u, 0x273A54u, 0x273A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273A5Cu;
label_273a5c:
    // 0x273a5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x273a5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273a60:
    // 0x273a60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x273a60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_273a64:
    // 0x273a64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x273a64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x273a68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x273a68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273a6c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x273a6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x273a70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x273a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x273a74: 0x3e00008  jr          $ra
    ctx->pc = 0x273A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273A74u;
        // 0x273a78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273A7Cu;
    // 0x273a7c: 0x0  nop
    ctx->pc = 0x273a7cu;
    // NOP
}
