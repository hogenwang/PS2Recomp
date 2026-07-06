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

// Function: sub_003392E0
// Address: 0x3392e0 - 0x3394c0
void sub_003392E0_0x3392e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003392E0_0x3392e0");
#endif

    switch (ctx->pc) {
        case 0x33934cu: goto label_33934c;
        case 0x339370u: goto label_339370;
        case 0x339394u: goto label_339394;
        case 0x3393d0u: goto label_3393d0;
        case 0x3393f4u: goto label_3393f4;
        case 0x339418u: goto label_339418;
        case 0x339444u: goto label_339444;
        case 0x33944cu: goto label_33944c;
        case 0x339470u: goto label_339470;
        case 0x3394a4u: goto label_3394a4;
        default: break;
    }

    ctx->pc = 0x3392e0u;

    // 0x3392e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3392e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3392e4: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x3392e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x3392e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3392e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3392ec: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3392ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3392f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3392f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3392f4: 0x24632830  addiu       $v1, $v1, 0x2830
    ctx->pc = 0x3392f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10288));
    // 0x3392f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3392f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3392fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3392fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x339300: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x339300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x339304: 0x8c45e8f0  lw          $a1, -0x1710($v0)
    ctx->pc = 0x339304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961392)));
    // 0x339308: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x339308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x33930c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x33930cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x339310: 0x24422834  addiu       $v0, $v0, 0x2834
    ctx->pc = 0x339310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10292));
    // 0x339314: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x339314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x339318: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x339318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33931c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x33931cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x339320: 0x14a0001e  bnez        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x339320u;
    {
        const bool branch_taken_0x339320 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x339324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339320u;
        // 0x339324: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339320) {
            ctx->pc = 0x33939Cu;
            goto label_33939c;
        }
    }
    ctx->pc = 0x339328u;
    // 0x339328: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x339328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x33932c: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x33932cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x339330: 0x24842730  addiu       $a0, $a0, 0x2730
    ctx->pc = 0x339330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10032));
    // 0x339334: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x339334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339338: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x339338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33933c: 0x2407a829  addiu       $a3, $zero, -0x57D7
    ctx->pc = 0x33933cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
    // 0x339340: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x339340u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x339344: 0xc0c0ad0  jal         func_302B40
    ctx->pc = 0x339344u;
    SET_GPR_U32(ctx, 31, 0x33934Cu);
    ctx->pc = 0x339348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339344u;
    // 0x339348: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302B40u, 0x339344u, 0x33934Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33934Cu;
label_33934c:
    // 0x33934c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33934cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x339350: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x339350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x339354: 0x2484273c  addiu       $a0, $a0, 0x273C
    ctx->pc = 0x339354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10044));
    // 0x339358: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x339358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33935c: 0x2407a829  addiu       $a3, $zero, -0x57D7
    ctx->pc = 0x33935cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
    // 0x339360: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x339360u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x339364: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x339364u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x339368: 0xc0c0ad0  jal         func_302B40
    ctx->pc = 0x339368u;
    SET_GPR_U32(ctx, 31, 0x339370u);
    ctx->pc = 0x33936Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339368u;
    // 0x33936c: 0x240a00ff  addiu       $t2, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302B40u, 0x339368u, 0x339370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339370u;
label_339370:
    // 0x339370: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x339370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x339374: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x339374u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x339378: 0x260500a0  addiu       $a1, $s0, 0xA0
    ctx->pc = 0x339378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x33937c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33937cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339380: 0x24842748  addiu       $a0, $a0, 0x2748
    ctx->pc = 0x339380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10056));
    // 0x339384: 0x2407a829  addiu       $a3, $zero, -0x57D7
    ctx->pc = 0x339384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
    // 0x339388: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x339388u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33938c: 0xc0c0ad0  jal         func_302B40
    ctx->pc = 0x33938Cu;
    SET_GPR_U32(ctx, 31, 0x339394u);
    ctx->pc = 0x339390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33938Cu;
    // 0x339390: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302B40u, 0x33938Cu, 0x339394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339394u;
label_339394:
    // 0x339394: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x339394u;
    {
        const bool branch_taken_0x339394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339394u;
        // 0x339398: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339394) {
            ctx->pc = 0x3394A8u;
            goto label_3394a8;
        }
    }
    ctx->pc = 0x33939Cu;
label_33939c:
    // 0x33939c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x33939cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3393a0: 0x54a2001f  bnel        $a1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3393A0u;
    {
        const bool branch_taken_0x3393a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3393a0) {
            ctx->pc = 0x3393A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3393A0u;
            // 0x3393a4: 0x2631ffe8  addiu       $s1, $s1, -0x18 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967272));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339420u;
            goto label_339420;
        }
    }
    ctx->pc = 0x3393A8u;
    // 0x3393a8: 0x2631ffe8  addiu       $s1, $s1, -0x18
    ctx->pc = 0x3393a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967272));
    // 0x3393ac: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x3393acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x3393b0: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x3393b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3393b4: 0x24842730  addiu       $a0, $a0, 0x2730
    ctx->pc = 0x3393b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10032));
    // 0x3393b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3393b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3393bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3393bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3393c0: 0x2407a829  addiu       $a3, $zero, -0x57D7
    ctx->pc = 0x3393c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
    // 0x3393c4: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x3393c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3393c8: 0xc0c0ad0  jal         func_302B40
    ctx->pc = 0x3393C8u;
    SET_GPR_U32(ctx, 31, 0x3393D0u);
    ctx->pc = 0x3393CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3393C8u;
    // 0x3393cc: 0x240a00ff  addiu       $t2, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302B40u, 0x3393C8u, 0x3393D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3393D0u;
label_3393d0:
    // 0x3393d0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x3393d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x3393d4: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x3393d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3393d8: 0x2484273c  addiu       $a0, $a0, 0x273C
    ctx->pc = 0x3393d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10044));
    // 0x3393dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3393dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3393e0: 0x2407a829  addiu       $a3, $zero, -0x57D7
    ctx->pc = 0x3393e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
    // 0x3393e4: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3393e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3393e8: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x3393e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3393ec: 0xc0c0ad0  jal         func_302B40
    ctx->pc = 0x3393ECu;
    SET_GPR_U32(ctx, 31, 0x3393F4u);
    ctx->pc = 0x3393F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3393ECu;
    // 0x3393f0: 0x240a00ff  addiu       $t2, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302B40u, 0x3393ECu, 0x3393F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3393F4u;
label_3393f4:
    // 0x3393f4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x3393f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x3393f8: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x3393f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3393fc: 0x260500a0  addiu       $a1, $s0, 0xA0
    ctx->pc = 0x3393fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x339400: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x339400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339404: 0x24842748  addiu       $a0, $a0, 0x2748
    ctx->pc = 0x339404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10056));
    // 0x339408: 0x2407a829  addiu       $a3, $zero, -0x57D7
    ctx->pc = 0x339408u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
    // 0x33940c: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x33940cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x339410: 0xc0c0ad0  jal         func_302B40
    ctx->pc = 0x339410u;
    SET_GPR_U32(ctx, 31, 0x339418u);
    ctx->pc = 0x339414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339410u;
    // 0x339414: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302B40u, 0x339410u, 0x339418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339418u;
label_339418:
    // 0x339418: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x339418u;
    {
        const bool branch_taken_0x339418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339418) {
            ctx->pc = 0x3394A4u;
            goto label_3394a4;
        }
    }
    ctx->pc = 0x339420u;
label_339420:
    // 0x339420: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x339420u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x339424: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x339424u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x339428: 0x24842754  addiu       $a0, $a0, 0x2754
    ctx->pc = 0x339428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10068));
    // 0x33942c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33942cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339430: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x339430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339434: 0x2407a829  addiu       $a3, $zero, -0x57D7
    ctx->pc = 0x339434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
    // 0x339438: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x339438u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33943c: 0xc0c0ad0  jal         func_302B40
    ctx->pc = 0x33943Cu;
    SET_GPR_U32(ctx, 31, 0x339444u);
    ctx->pc = 0x339440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33943Cu;
    // 0x339440: 0x240a00ff  addiu       $t2, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302B40u, 0x33943Cu, 0x339444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339444u;
label_339444:
    // 0x339444: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x339444u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339448: 0x26120020  addiu       $s2, $s0, 0x20
    ctx->pc = 0x339448u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_33944c:
    // 0x33944c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33944cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x339450: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x339450u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x339454: 0x24842760  addiu       $a0, $a0, 0x2760
    ctx->pc = 0x339454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10080));
    // 0x339458: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x339458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33945c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33945cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339460: 0x2407a829  addiu       $a3, $zero, -0x57D7
    ctx->pc = 0x339460u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
    // 0x339464: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x339464u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x339468: 0xc0c0ad0  jal         func_302B40
    ctx->pc = 0x339468u;
    SET_GPR_U32(ctx, 31, 0x339470u);
    ctx->pc = 0x33946Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339468u;
    // 0x33946c: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302B40u, 0x339468u, 0x339470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339470u;
label_339470:
    // 0x339470: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x339470u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x339474: 0x2a620010  slti        $v0, $s3, 0x10
    ctx->pc = 0x339474u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x339478: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x339478u;
    {
        const bool branch_taken_0x339478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339478u;
        // 0x33947c: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339478) {
            ctx->pc = 0x33944Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33944c;
        }
    }
    ctx->pc = 0x339480u;
    // 0x339480: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x339480u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x339484: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x339484u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x339488: 0x26050220  addiu       $a1, $s0, 0x220
    ctx->pc = 0x339488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x33948c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33948cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339490: 0x2484276c  addiu       $a0, $a0, 0x276C
    ctx->pc = 0x339490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10092));
    // 0x339494: 0x2407a829  addiu       $a3, $zero, -0x57D7
    ctx->pc = 0x339494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
    // 0x339498: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x339498u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33949c: 0xc0c0ad0  jal         func_302B40
    ctx->pc = 0x33949Cu;
    SET_GPR_U32(ctx, 31, 0x3394A4u);
    ctx->pc = 0x3394A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33949Cu;
    // 0x3394a0: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302B40u, 0x33949Cu, 0x3394A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3394A4u;
label_3394a4:
    // 0x3394a4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3394a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3394a8:
    // 0x3394a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3394a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3394ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3394acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3394b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3394b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3394b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3394b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3394b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3394B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3394BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3394B8u;
        // 0x3394bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3394B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3394C0u;
}
