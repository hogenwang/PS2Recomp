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

// Function: sub_0010A358
// Address: 0x10a358 - 0x10a520
void sub_0010A358_0x10a358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A358_0x10a358");
#endif

    switch (ctx->pc) {
        case 0x10a358u: goto label_10a358;
        case 0x10a35cu: goto label_10a35c;
        case 0x10a360u: goto label_10a360;
        case 0x10a364u: goto label_10a364;
        case 0x10a368u: goto label_10a368;
        case 0x10a36cu: goto label_10a36c;
        case 0x10a370u: goto label_10a370;
        case 0x10a374u: goto label_10a374;
        case 0x10a378u: goto label_10a378;
        case 0x10a37cu: goto label_10a37c;
        case 0x10a380u: goto label_10a380;
        case 0x10a384u: goto label_10a384;
        case 0x10a388u: goto label_10a388;
        case 0x10a38cu: goto label_10a38c;
        case 0x10a390u: goto label_10a390;
        case 0x10a394u: goto label_10a394;
        case 0x10a398u: goto label_10a398;
        case 0x10a39cu: goto label_10a39c;
        case 0x10a3a0u: goto label_10a3a0;
        case 0x10a3a4u: goto label_10a3a4;
        case 0x10a3a8u: goto label_10a3a8;
        case 0x10a3acu: goto label_10a3ac;
        case 0x10a3b0u: goto label_10a3b0;
        case 0x10a3b4u: goto label_10a3b4;
        case 0x10a3b8u: goto label_10a3b8;
        case 0x10a3bcu: goto label_10a3bc;
        case 0x10a3c0u: goto label_10a3c0;
        case 0x10a3c4u: goto label_10a3c4;
        case 0x10a3c8u: goto label_10a3c8;
        case 0x10a3ccu: goto label_10a3cc;
        case 0x10a3d0u: goto label_10a3d0;
        case 0x10a3d4u: goto label_10a3d4;
        case 0x10a3d8u: goto label_10a3d8;
        case 0x10a3dcu: goto label_10a3dc;
        case 0x10a3e0u: goto label_10a3e0;
        case 0x10a3e4u: goto label_10a3e4;
        case 0x10a3e8u: goto label_10a3e8;
        case 0x10a3ecu: goto label_10a3ec;
        case 0x10a3f0u: goto label_10a3f0;
        case 0x10a3f4u: goto label_10a3f4;
        case 0x10a3f8u: goto label_10a3f8;
        case 0x10a3fcu: goto label_10a3fc;
        case 0x10a400u: goto label_10a400;
        case 0x10a404u: goto label_10a404;
        case 0x10a408u: goto label_10a408;
        case 0x10a40cu: goto label_10a40c;
        case 0x10a410u: goto label_10a410;
        case 0x10a414u: goto label_10a414;
        case 0x10a418u: goto label_10a418;
        case 0x10a41cu: goto label_10a41c;
        case 0x10a420u: goto label_10a420;
        case 0x10a424u: goto label_10a424;
        case 0x10a428u: goto label_10a428;
        case 0x10a42cu: goto label_10a42c;
        case 0x10a430u: goto label_10a430;
        case 0x10a434u: goto label_10a434;
        case 0x10a438u: goto label_10a438;
        case 0x10a43cu: goto label_10a43c;
        case 0x10a440u: goto label_10a440;
        case 0x10a444u: goto label_10a444;
        case 0x10a448u: goto label_10a448;
        case 0x10a44cu: goto label_10a44c;
        case 0x10a450u: goto label_10a450;
        case 0x10a454u: goto label_10a454;
        case 0x10a458u: goto label_10a458;
        case 0x10a45cu: goto label_10a45c;
        case 0x10a460u: goto label_10a460;
        case 0x10a464u: goto label_10a464;
        case 0x10a468u: goto label_10a468;
        case 0x10a46cu: goto label_10a46c;
        case 0x10a470u: goto label_10a470;
        case 0x10a474u: goto label_10a474;
        case 0x10a478u: goto label_10a478;
        case 0x10a47cu: goto label_10a47c;
        case 0x10a480u: goto label_10a480;
        case 0x10a484u: goto label_10a484;
        case 0x10a488u: goto label_10a488;
        case 0x10a48cu: goto label_10a48c;
        case 0x10a490u: goto label_10a490;
        case 0x10a494u: goto label_10a494;
        case 0x10a498u: goto label_10a498;
        case 0x10a49cu: goto label_10a49c;
        case 0x10a4a0u: goto label_10a4a0;
        case 0x10a4a4u: goto label_10a4a4;
        case 0x10a4a8u: goto label_10a4a8;
        case 0x10a4acu: goto label_10a4ac;
        case 0x10a4b0u: goto label_10a4b0;
        case 0x10a4b4u: goto label_10a4b4;
        case 0x10a4b8u: goto label_10a4b8;
        case 0x10a4bcu: goto label_10a4bc;
        case 0x10a4c0u: goto label_10a4c0;
        case 0x10a4c4u: goto label_10a4c4;
        case 0x10a4c8u: goto label_10a4c8;
        case 0x10a4ccu: goto label_10a4cc;
        case 0x10a4d0u: goto label_10a4d0;
        case 0x10a4d4u: goto label_10a4d4;
        case 0x10a4d8u: goto label_10a4d8;
        case 0x10a4dcu: goto label_10a4dc;
        case 0x10a4e0u: goto label_10a4e0;
        case 0x10a4e4u: goto label_10a4e4;
        case 0x10a4e8u: goto label_10a4e8;
        case 0x10a4ecu: goto label_10a4ec;
        case 0x10a4f0u: goto label_10a4f0;
        case 0x10a4f4u: goto label_10a4f4;
        case 0x10a4f8u: goto label_10a4f8;
        case 0x10a4fcu: goto label_10a4fc;
        case 0x10a500u: goto label_10a500;
        case 0x10a504u: goto label_10a504;
        case 0x10a508u: goto label_10a508;
        case 0x10a50cu: goto label_10a50c;
        case 0x10a510u: goto label_10a510;
        case 0x10a514u: goto label_10a514;
        case 0x10a518u: goto label_10a518;
        case 0x10a51cu: goto label_10a51c;
        default: break;
    }

    ctx->pc = 0x10a358u;

label_10a358:
    // 0x10a358: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x10a358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_10a35c:
    // 0x10a35c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10a35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10a360:
    // 0x10a360: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x10a360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_10a364:
    // 0x10a364: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x10a364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_10a368:
    // 0x10a368: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x10a368u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10a36c:
    // 0x10a36c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x10a36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_10a370:
    // 0x10a370: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10a370u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10a374:
    // 0x10a374: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x10a374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_10a378:
    // 0x10a378: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x10a378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_10a37c:
    // 0x10a37c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x10a37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_10a380:
    // 0x10a380: 0x8e300040  lw          $s0, 0x40($s1)
    ctx->pc = 0x10a380u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_10a384:
    // 0x10a384: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
label_10a388:
    if (ctx->pc == 0x10A388u) {
        ctx->pc = 0x10A388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A384u;
        // 0x10a388: 0xae000130  sw          $zero, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A38Cu;
        goto label_10a38c;
    }
    ctx->pc = 0x10A384u;
    {
        const bool branch_taken_0x10a384 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x10A388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A384u;
        // 0x10a388: 0xae000130  sw          $zero, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a384) {
            ctx->pc = 0x10A398u;
            goto label_10a398;
        }
    }
    ctx->pc = 0x10A38Cu;
label_10a38c:
    // 0x10a38c: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x10a38cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_10a390:
    // 0x10a390: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_10a394:
    if (ctx->pc == 0x10A394u) {
        ctx->pc = 0x10A394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A390u;
        // 0x10a394: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A398u;
        goto label_10a398;
    }
    ctx->pc = 0x10A390u;
    {
        const bool branch_taken_0x10a390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a390) {
            ctx->pc = 0x10A394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A390u;
            // 0x10a394: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A3A0u;
            goto label_10a3a0;
        }
    }
    ctx->pc = 0x10A398u;
label_10a398:
    // 0x10a398: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x10a398u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10a39c:
    // 0x10a39c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x10a39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10a3a0:
    // 0x10a3a0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_10a3a4:
    if (ctx->pc == 0x10A3A4u) {
        ctx->pc = 0x10A3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A3A0u;
        // 0x10a3a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A3A8u;
        goto label_10a3a8;
    }
    ctx->pc = 0x10A3A0u;
    {
        const bool branch_taken_0x10a3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A3A0u;
        // 0x10a3a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a3a0) {
            ctx->pc = 0x10A3B4u;
            goto label_10a3b4;
        }
    }
    ctx->pc = 0x10A3A8u;
label_10a3a8:
    // 0x10a3a8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x10a3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_10a3ac:
    // 0x10a3ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10a3b0:
    // 0x10a3b0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x10a3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_10a3b4:
    // 0x10a3b4: 0xc0427cc  jal         func_109F30
label_10a3b8:
    if (ctx->pc == 0x10A3B8u) {
        ctx->pc = 0x10A3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A3B4u;
        // 0x10a3b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A3BCu;
        goto label_10a3bc;
    }
    ctx->pc = 0x10A3B4u;
    SET_GPR_U32(ctx, 31, 0x10A3BCu);
    ctx->pc = 0x10A3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A3B4u;
    // 0x10a3b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109F30u, 0x10A3B4u, 0x10A3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A3BCu;
label_10a3bc:
    // 0x10a3bc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_10a3c0:
    if (ctx->pc == 0x10A3C0u) {
        ctx->pc = 0x10A3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A3BCu;
        // 0x10a3c0: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A3C4u;
        goto label_10a3c4;
    }
    ctx->pc = 0x10A3BCu;
    {
        const bool branch_taken_0x10a3bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a3bc) {
            ctx->pc = 0x10A3C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A3BCu;
            // 0x10a3c0: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A3D8u;
            goto label_10a3d8;
        }
    }
    ctx->pc = 0x10A3C4u;
label_10a3c4:
    // 0x10a3c4: 0x52600004  beql        $s3, $zero, . + 4 + (0x4 << 2)
label_10a3c8:
    if (ctx->pc == 0x10A3C8u) {
        ctx->pc = 0x10A3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A3C4u;
        // 0x10a3c8: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A3CCu;
        goto label_10a3cc;
    }
    ctx->pc = 0x10A3C4u;
    {
        const bool branch_taken_0x10a3c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a3c4) {
            ctx->pc = 0x10A3C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A3C4u;
            // 0x10a3c8: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A3D8u;
            goto label_10a3d8;
        }
    }
    ctx->pc = 0x10A3CCu;
label_10a3cc:
    // 0x10a3cc: 0xc042aa6  jal         func_10AA98
label_10a3d0:
    if (ctx->pc == 0x10A3D0u) {
        ctx->pc = 0x10A3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A3CCu;
        // 0x10a3d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A3D4u;
        goto label_10a3d4;
    }
    ctx->pc = 0x10A3CCu;
    SET_GPR_U32(ctx, 31, 0x10A3D4u);
    ctx->pc = 0x10A3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A3CCu;
    // 0x10a3d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AA98u, 0x10A3CCu, 0x10A3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A3D4u;
label_10a3d4:
    // 0x10a3d4: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x10a3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_10a3d8:
    // 0x10a3d8: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
label_10a3dc:
    if (ctx->pc == 0x10A3DCu) {
        ctx->pc = 0x10A3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A3D8u;
        // 0x10a3dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A3E0u;
        goto label_10a3e0;
    }
    ctx->pc = 0x10A3D8u;
    {
        const bool branch_taken_0x10a3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A3D8u;
        // 0x10a3dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a3d8) {
            ctx->pc = 0x10A4FCu;
            goto label_10a4fc;
        }
    }
    ctx->pc = 0x10A3E0u;
label_10a3e0:
    // 0x10a3e0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x10a3e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10a3e4:
    // 0x10a3e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10a3e8:
    // 0x10a3e8: 0xc042536  jal         func_1094D8
label_10a3ec:
    if (ctx->pc == 0x10A3ECu) {
        ctx->pc = 0x10A3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A3E8u;
        // 0x10a3ec: 0xae120130  sw          $s2, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A3F0u;
        goto label_10a3f0;
    }
    ctx->pc = 0x10A3E8u;
    SET_GPR_U32(ctx, 31, 0x10A3F0u);
    ctx->pc = 0x10A3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A3E8u;
    // 0x10a3ec: 0xae120130  sw          $s2, 0x130($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1094D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1094D8u, 0x10A3E8u, 0x10A3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A3F0u;
label_10a3f0:
    // 0x10a3f0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_10a3f4:
    if (ctx->pc == 0x10A3F4u) {
        ctx->pc = 0x10A3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A3F0u;
        // 0x10a3f4: 0x8e0200e8  lw          $v0, 0xE8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A3F8u;
        goto label_10a3f8;
    }
    ctx->pc = 0x10A3F0u;
    {
        const bool branch_taken_0x10a3f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a3f0) {
            ctx->pc = 0x10A3F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A3F0u;
            // 0x10a3f4: 0x8e0200e8  lw          $v0, 0xE8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A40Cu;
            goto label_10a40c;
        }
    }
    ctx->pc = 0x10A3F8u;
label_10a3f8:
    // 0x10a3f8: 0xc042d7a  jal         func_10B5E8
label_10a3fc:
    if (ctx->pc == 0x10A3FCu) {
        ctx->pc = 0x10A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A3F8u;
        // 0x10a3fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A400u;
        goto label_10a400;
    }
    ctx->pc = 0x10A3F8u;
    SET_GPR_U32(ctx, 31, 0x10A400u);
    ctx->pc = 0x10A3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A3F8u;
    // 0x10a3fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B5E8u, 0x10A3F8u, 0x10A400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A400u;
label_10a400:
    // 0x10a400: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x10a400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_10a404:
    // 0x10a404: 0x1000003d  b           . + 4 + (0x3D << 2)
label_10a408:
    if (ctx->pc == 0x10A408u) {
        ctx->pc = 0x10A408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A404u;
        // 0x10a408: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A40Cu;
        goto label_10a40c;
    }
    ctx->pc = 0x10A404u;
    {
        const bool branch_taken_0x10a404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A404u;
        // 0x10a408: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a404) {
            ctx->pc = 0x10A4FCu;
            goto label_10a4fc;
        }
    }
    ctx->pc = 0x10A40Cu;
label_10a40c:
    // 0x10a40c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x10a40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10a410:
    // 0x10a410: 0x8e040184  lw          $a0, 0x184($s0)
    ctx->pc = 0x10a410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_10a414:
    // 0x10a414: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10a414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10a418:
    // 0x10a418: 0x242180b  movn        $v1, $s2, $v0
    ctx->pc = 0x10a418u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 18));
label_10a41c:
    // 0x10a41c: 0x14830037  bne         $a0, $v1, . + 4 + (0x37 << 2)
label_10a420:
    if (ctx->pc == 0x10A420u) {
        ctx->pc = 0x10A420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A41Cu;
        // 0x10a420: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A424u;
        goto label_10a424;
    }
    ctx->pc = 0x10A41Cu;
    {
        const bool branch_taken_0x10a41c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x10A420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A41Cu;
        // 0x10a420: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a41c) {
            ctx->pc = 0x10A4FCu;
            goto label_10a4fc;
        }
    }
    ctx->pc = 0x10A424u;
label_10a424:
    // 0x10a424: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10a428:
    // 0x10a428: 0xc0427cc  jal         func_109F30
label_10a42c:
    if (ctx->pc == 0x10A42Cu) {
        ctx->pc = 0x10A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A428u;
        // 0x10a42c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A430u;
        goto label_10a430;
    }
    ctx->pc = 0x10A428u;
    SET_GPR_U32(ctx, 31, 0x10A430u);
    ctx->pc = 0x10A42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A428u;
    // 0x10a42c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109F30u, 0x10A428u, 0x10A430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A430u;
label_10a430:
    // 0x10a430: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x10a430u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10a434:
    // 0x10a434: 0x242180b  movn        $v1, $s2, $v0
    ctx->pc = 0x10a434u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 18));
label_10a438:
    // 0x10a438: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_10a43c:
    if (ctx->pc == 0x10A43Cu) {
        ctx->pc = 0x10A43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A438u;
        // 0x10a43c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A440u;
        goto label_10a440;
    }
    ctx->pc = 0x10A438u;
    {
        const bool branch_taken_0x10a438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A438u;
        // 0x10a43c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a438) {
            ctx->pc = 0x10A454u;
            goto label_10a454;
        }
    }
    ctx->pc = 0x10A440u;
label_10a440:
    // 0x10a440: 0x52600005  beql        $s3, $zero, . + 4 + (0x5 << 2)
label_10a444:
    if (ctx->pc == 0x10A444u) {
        ctx->pc = 0x10A444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A440u;
        // 0x10a444: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A448u;
        goto label_10a448;
    }
    ctx->pc = 0x10A440u;
    {
        const bool branch_taken_0x10a440 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a440) {
            ctx->pc = 0x10A444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A440u;
            // 0x10a444: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A458u;
            goto label_10a458;
        }
    }
    ctx->pc = 0x10A448u;
label_10a448:
    // 0x10a448: 0xc042aa6  jal         func_10AA98
label_10a44c:
    if (ctx->pc == 0x10A44Cu) {
        ctx->pc = 0x10A44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A448u;
        // 0x10a44c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A450u;
        goto label_10a450;
    }
    ctx->pc = 0x10A448u;
    SET_GPR_U32(ctx, 31, 0x10A450u);
    ctx->pc = 0x10A44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A448u;
    // 0x10a44c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AA98u, 0x10A448u, 0x10A450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A450u;
label_10a450:
    // 0x10a450: 0x242a00b  movn        $s4, $s2, $v0
    ctx->pc = 0x10a450u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 18));
label_10a454:
    // 0x10a454: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x10a454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_10a458:
    // 0x10a458: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_10a45c:
    if (ctx->pc == 0x10A45Cu) {
        ctx->pc = 0x10A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A458u;
        // 0x10a45c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A460u;
        goto label_10a460;
    }
    ctx->pc = 0x10A458u;
    {
        const bool branch_taken_0x10a458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A458u;
        // 0x10a45c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a458) {
            ctx->pc = 0x10A4FCu;
            goto label_10a4fc;
        }
    }
    ctx->pc = 0x10A460u;
label_10a460:
    // 0x10a460: 0x8e050128  lw          $a1, 0x128($s0)
    ctx->pc = 0x10a460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_10a464:
    // 0x10a464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10a468:
    // 0x10a468: 0xc042daa  jal         func_10B6A8
label_10a46c:
    if (ctx->pc == 0x10A46Cu) {
        ctx->pc = 0x10A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A468u;
        // 0x10a46c: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A470u;
        goto label_10a470;
    }
    ctx->pc = 0x10A468u;
    SET_GPR_U32(ctx, 31, 0x10A470u);
    ctx->pc = 0x10A46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A468u;
    // 0x10a46c: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B6A8u, 0x10A468u, 0x10A470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A470u;
label_10a470:
    // 0x10a470: 0x8e020128  lw          $v0, 0x128($s0)
    ctx->pc = 0x10a470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_10a474:
    // 0x10a474: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x10a474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_10a478:
    // 0x10a478: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x10a478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
label_10a47c:
    // 0x10a47c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x10a47cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10a480:
    // 0x10a480: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x10a480u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_10a484:
    // 0x10a484: 0x8e030128  lw          $v1, 0x128($s0)
    ctx->pc = 0x10a484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_10a488:
    // 0x10a488: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x10a488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10a48c:
    // 0x10a48c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10a48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_10a490:
    // 0x10a490: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10a490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10a494:
    // 0x10a494: 0xae030128  sw          $v1, 0x128($s0)
    ctx->pc = 0x10a494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
label_10a498:
    // 0x10a498: 0x16600017  bnez        $s3, . + 4 + (0x17 << 2)
label_10a49c:
    if (ctx->pc == 0x10A49Cu) {
        ctx->pc = 0x10A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A498u;
        // 0x10a49c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A4A0u;
        goto label_10a4a0;
    }
    ctx->pc = 0x10A498u;
    {
        const bool branch_taken_0x10a498 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A498u;
        // 0x10a49c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a498) {
            ctx->pc = 0x10A4F8u;
            goto label_10a4f8;
        }
    }
    ctx->pc = 0x10A4A0u;
label_10a4a0:
    // 0x10a4a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10a4a4:
    // 0x10a4a4: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_10a4a8:
    if (ctx->pc == 0x10A4A8u) {
        ctx->pc = 0x10A4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A4A4u;
        // 0x10a4a8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A4ACu;
        goto label_10a4ac;
    }
    ctx->pc = 0x10A4A4u;
    {
        const bool branch_taken_0x10a4a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A4A4u;
        // 0x10a4a8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a4a4) {
            ctx->pc = 0x10A4F8u;
            goto label_10a4f8;
        }
    }
    ctx->pc = 0x10A4ACu;
label_10a4ac:
    // 0x10a4ac: 0x8e260040  lw          $a2, 0x40($s1)
    ctx->pc = 0x10a4acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_10a4b0:
    // 0x10a4b0: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
label_10a4b4:
    if (ctx->pc == 0x10A4B4u) {
        ctx->pc = 0x10A4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A4B0u;
        // 0x10a4b4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A4B8u;
        goto label_10a4b8;
    }
    ctx->pc = 0x10A4B0u;
    {
        const bool branch_taken_0x10a4b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A4B0u;
        // 0x10a4b4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a4b0) {
            ctx->pc = 0x10A4FCu;
            goto label_10a4fc;
        }
    }
    ctx->pc = 0x10A4B8u;
label_10a4b8:
    // 0x10a4b8: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x10a4b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_10a4bc:
    // 0x10a4bc: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
label_10a4c0:
    if (ctx->pc == 0x10A4C0u) {
        ctx->pc = 0x10A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A4BCu;
        // 0x10a4c0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A4C4u;
        goto label_10a4c4;
    }
    ctx->pc = 0x10A4BCu;
    {
        const bool branch_taken_0x10a4bc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A4BCu;
        // 0x10a4c0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a4bc) {
            ctx->pc = 0x10A500u;
            goto label_10a500;
        }
    }
    ctx->pc = 0x10A4C4u;
label_10a4c4:
    // 0x10a4c4: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x10a4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_10a4c8:
    // 0x10a4c8: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x10a4c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_10a4cc:
    // 0x10a4cc: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x10a4ccu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10a4d0:
    // 0x10a4d0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x10a4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_10a4d4:
    // 0x10a4d4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x10a4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_10a4d8:
    // 0x10a4d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10a4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10a4dc:
    // 0x10a4dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10a4dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_10a4e0:
    // 0x10a4e0: 0x624018  mult        $t0, $v1, $v0
    ctx->pc = 0x10a4e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_10a4e4:
    // 0x10a4e4: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x10a4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_10a4e8:
    // 0x10a4e8: 0xe0f809  jalr        $a3
label_10a4ec:
    if (ctx->pc == 0x10A4ECu) {
        ctx->pc = 0x10A4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A4E8u;
        // 0x10a4ec: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A4F0u;
        goto label_10a4f0;
    }
    ctx->pc = 0x10A4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x10A4F0u);
        ctx->pc = 0x10A4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A4E8u;
        // 0x10a4ec: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A4E8u, 0x10A4F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10A4F0u;
label_10a4f0:
    // 0x10a4f0: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x10a4f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_10a4f4:
    // 0x10a4f4: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x10a4f4u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10a4f8:
    // 0x10a4f8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x10a4f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10a4fc:
    // 0x10a4fc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x10a4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_10a500:
    // 0x10a500: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x10a500u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_10a504:
    // 0x10a504: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x10a504u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_10a508:
    // 0x10a508: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x10a508u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_10a50c:
    // 0x10a50c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x10a50cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_10a510:
    // 0x10a510: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x10a510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10a514:
    // 0x10a514: 0x3e00008  jr          $ra
label_10a518:
    if (ctx->pc == 0x10A518u) {
        ctx->pc = 0x10A518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A514u;
        // 0x10a518: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A51Cu;
        goto label_10a51c;
    }
    ctx->pc = 0x10A514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A514u;
        // 0x10a518: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A51Cu;
label_10a51c:
    // 0x10a51c: 0x0  nop
    ctx->pc = 0x10a51cu;
    // NOP
    if (ctx->pc == 0x10a51cu) { ctx->pc = 0x10a520u; }
}
