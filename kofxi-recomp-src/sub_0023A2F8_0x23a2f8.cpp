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

// Function: sub_0023A2F8
// Address: 0x23a2f8 - 0x23a5b0
void sub_0023A2F8_0x23a2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A2F8_0x23a2f8");
#endif

    switch (ctx->pc) {
        case 0x23a2f8u: goto label_23a2f8;
        case 0x23a2fcu: goto label_23a2fc;
        case 0x23a300u: goto label_23a300;
        case 0x23a304u: goto label_23a304;
        case 0x23a308u: goto label_23a308;
        case 0x23a30cu: goto label_23a30c;
        case 0x23a310u: goto label_23a310;
        case 0x23a314u: goto label_23a314;
        case 0x23a318u: goto label_23a318;
        case 0x23a31cu: goto label_23a31c;
        case 0x23a320u: goto label_23a320;
        case 0x23a324u: goto label_23a324;
        case 0x23a328u: goto label_23a328;
        case 0x23a32cu: goto label_23a32c;
        case 0x23a330u: goto label_23a330;
        case 0x23a334u: goto label_23a334;
        case 0x23a338u: goto label_23a338;
        case 0x23a33cu: goto label_23a33c;
        case 0x23a340u: goto label_23a340;
        case 0x23a344u: goto label_23a344;
        case 0x23a348u: goto label_23a348;
        case 0x23a34cu: goto label_23a34c;
        case 0x23a350u: goto label_23a350;
        case 0x23a354u: goto label_23a354;
        case 0x23a358u: goto label_23a358;
        case 0x23a35cu: goto label_23a35c;
        case 0x23a360u: goto label_23a360;
        case 0x23a364u: goto label_23a364;
        case 0x23a368u: goto label_23a368;
        case 0x23a36cu: goto label_23a36c;
        case 0x23a370u: goto label_23a370;
        case 0x23a374u: goto label_23a374;
        case 0x23a378u: goto label_23a378;
        case 0x23a37cu: goto label_23a37c;
        case 0x23a380u: goto label_23a380;
        case 0x23a384u: goto label_23a384;
        case 0x23a388u: goto label_23a388;
        case 0x23a38cu: goto label_23a38c;
        case 0x23a390u: goto label_23a390;
        case 0x23a394u: goto label_23a394;
        case 0x23a398u: goto label_23a398;
        case 0x23a39cu: goto label_23a39c;
        case 0x23a3a0u: goto label_23a3a0;
        case 0x23a3a4u: goto label_23a3a4;
        case 0x23a3a8u: goto label_23a3a8;
        case 0x23a3acu: goto label_23a3ac;
        case 0x23a3b0u: goto label_23a3b0;
        case 0x23a3b4u: goto label_23a3b4;
        case 0x23a3b8u: goto label_23a3b8;
        case 0x23a3bcu: goto label_23a3bc;
        case 0x23a3c0u: goto label_23a3c0;
        case 0x23a3c4u: goto label_23a3c4;
        case 0x23a3c8u: goto label_23a3c8;
        case 0x23a3ccu: goto label_23a3cc;
        case 0x23a3d0u: goto label_23a3d0;
        case 0x23a3d4u: goto label_23a3d4;
        case 0x23a3d8u: goto label_23a3d8;
        case 0x23a3dcu: goto label_23a3dc;
        case 0x23a3e0u: goto label_23a3e0;
        case 0x23a3e4u: goto label_23a3e4;
        case 0x23a3e8u: goto label_23a3e8;
        case 0x23a3ecu: goto label_23a3ec;
        case 0x23a3f0u: goto label_23a3f0;
        case 0x23a3f4u: goto label_23a3f4;
        case 0x23a3f8u: goto label_23a3f8;
        case 0x23a3fcu: goto label_23a3fc;
        case 0x23a400u: goto label_23a400;
        case 0x23a404u: goto label_23a404;
        case 0x23a408u: goto label_23a408;
        case 0x23a40cu: goto label_23a40c;
        case 0x23a410u: goto label_23a410;
        case 0x23a414u: goto label_23a414;
        case 0x23a418u: goto label_23a418;
        case 0x23a41cu: goto label_23a41c;
        case 0x23a420u: goto label_23a420;
        case 0x23a424u: goto label_23a424;
        case 0x23a428u: goto label_23a428;
        case 0x23a42cu: goto label_23a42c;
        case 0x23a430u: goto label_23a430;
        case 0x23a434u: goto label_23a434;
        case 0x23a438u: goto label_23a438;
        case 0x23a43cu: goto label_23a43c;
        case 0x23a440u: goto label_23a440;
        case 0x23a444u: goto label_23a444;
        case 0x23a448u: goto label_23a448;
        case 0x23a44cu: goto label_23a44c;
        case 0x23a450u: goto label_23a450;
        case 0x23a454u: goto label_23a454;
        case 0x23a458u: goto label_23a458;
        case 0x23a45cu: goto label_23a45c;
        case 0x23a460u: goto label_23a460;
        case 0x23a464u: goto label_23a464;
        case 0x23a468u: goto label_23a468;
        case 0x23a46cu: goto label_23a46c;
        case 0x23a470u: goto label_23a470;
        case 0x23a474u: goto label_23a474;
        case 0x23a478u: goto label_23a478;
        case 0x23a47cu: goto label_23a47c;
        case 0x23a480u: goto label_23a480;
        case 0x23a484u: goto label_23a484;
        case 0x23a488u: goto label_23a488;
        case 0x23a48cu: goto label_23a48c;
        case 0x23a490u: goto label_23a490;
        case 0x23a494u: goto label_23a494;
        case 0x23a498u: goto label_23a498;
        case 0x23a49cu: goto label_23a49c;
        case 0x23a4a0u: goto label_23a4a0;
        case 0x23a4a4u: goto label_23a4a4;
        case 0x23a4a8u: goto label_23a4a8;
        case 0x23a4acu: goto label_23a4ac;
        case 0x23a4b0u: goto label_23a4b0;
        case 0x23a4b4u: goto label_23a4b4;
        case 0x23a4b8u: goto label_23a4b8;
        case 0x23a4bcu: goto label_23a4bc;
        case 0x23a4c0u: goto label_23a4c0;
        case 0x23a4c4u: goto label_23a4c4;
        case 0x23a4c8u: goto label_23a4c8;
        case 0x23a4ccu: goto label_23a4cc;
        case 0x23a4d0u: goto label_23a4d0;
        case 0x23a4d4u: goto label_23a4d4;
        case 0x23a4d8u: goto label_23a4d8;
        case 0x23a4dcu: goto label_23a4dc;
        case 0x23a4e0u: goto label_23a4e0;
        case 0x23a4e4u: goto label_23a4e4;
        case 0x23a4e8u: goto label_23a4e8;
        case 0x23a4ecu: goto label_23a4ec;
        case 0x23a4f0u: goto label_23a4f0;
        case 0x23a4f4u: goto label_23a4f4;
        case 0x23a4f8u: goto label_23a4f8;
        case 0x23a4fcu: goto label_23a4fc;
        case 0x23a500u: goto label_23a500;
        case 0x23a504u: goto label_23a504;
        case 0x23a508u: goto label_23a508;
        case 0x23a50cu: goto label_23a50c;
        case 0x23a510u: goto label_23a510;
        case 0x23a514u: goto label_23a514;
        case 0x23a518u: goto label_23a518;
        case 0x23a51cu: goto label_23a51c;
        case 0x23a520u: goto label_23a520;
        case 0x23a524u: goto label_23a524;
        case 0x23a528u: goto label_23a528;
        case 0x23a52cu: goto label_23a52c;
        case 0x23a530u: goto label_23a530;
        case 0x23a534u: goto label_23a534;
        case 0x23a538u: goto label_23a538;
        case 0x23a53cu: goto label_23a53c;
        case 0x23a540u: goto label_23a540;
        case 0x23a544u: goto label_23a544;
        case 0x23a548u: goto label_23a548;
        case 0x23a54cu: goto label_23a54c;
        case 0x23a550u: goto label_23a550;
        case 0x23a554u: goto label_23a554;
        case 0x23a558u: goto label_23a558;
        case 0x23a55cu: goto label_23a55c;
        case 0x23a560u: goto label_23a560;
        case 0x23a564u: goto label_23a564;
        case 0x23a568u: goto label_23a568;
        case 0x23a56cu: goto label_23a56c;
        case 0x23a570u: goto label_23a570;
        case 0x23a574u: goto label_23a574;
        case 0x23a578u: goto label_23a578;
        case 0x23a57cu: goto label_23a57c;
        case 0x23a580u: goto label_23a580;
        case 0x23a584u: goto label_23a584;
        case 0x23a588u: goto label_23a588;
        case 0x23a58cu: goto label_23a58c;
        case 0x23a590u: goto label_23a590;
        case 0x23a594u: goto label_23a594;
        case 0x23a598u: goto label_23a598;
        case 0x23a59cu: goto label_23a59c;
        case 0x23a5a0u: goto label_23a5a0;
        case 0x23a5a4u: goto label_23a5a4;
        case 0x23a5a8u: goto label_23a5a8;
        case 0x23a5acu: goto label_23a5ac;
        default: break;
    }

    ctx->pc = 0x23a2f8u;

label_23a2f8:
    // 0x23a2f8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x23a2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_23a2fc:
    // 0x23a2fc: 0x240200dc  addiu       $v0, $zero, 0xDC
    ctx->pc = 0x23a2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
label_23a300:
    // 0x23a300: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x23a300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_23a304:
    // 0x23a304: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x23a304u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_23a308:
    // 0x23a308: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x23a308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_23a30c:
    // 0x23a30c: 0x311effff  andi        $fp, $t0, 0xFFFF
    ctx->pc = 0x23a30cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_23a310:
    // 0x23a310: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x23a310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_23a314:
    // 0x23a314: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x23a314u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23a318:
    // 0x23a318: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x23a318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_23a31c:
    // 0x23a31c: 0x30f400ff  andi        $s4, $a3, 0xFF
    ctx->pc = 0x23a31cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_23a320:
    // 0x23a320: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x23a320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_23a324:
    // 0x23a324: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x23a324u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23a328:
    // 0x23a328: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x23a328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_23a32c:
    // 0x23a32c: 0x30b2ffff  andi        $s2, $a1, 0xFFFF
    ctx->pc = 0x23a32cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_23a330:
    // 0x23a330: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x23a330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_23a334:
    // 0x23a334: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x23a334u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23a338:
    // 0x23a338: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x23a338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_23a33c:
    // 0x23a33c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x23a33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_23a340:
    // 0x23a340: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x23a340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_23a344:
    // 0x23a344: 0x8ee3012c  lw          $v1, 0x12C($s7)
    ctx->pc = 0x23a344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 300)));
label_23a348:
    // 0x23a348: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x23a348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
label_23a34c:
    // 0x23a34c: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x23a34cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_23a350:
    // 0x23a350: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x23a350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
label_23a354:
    // 0x23a354: 0x263880b  movn        $s1, $s3, $v1
    ctx->pc = 0x23a354u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 19));
label_23a358:
    // 0x23a358: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x23a358u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_23a35c:
    // 0x23a35c: 0x5e182b  sltu        $v1, $v0, $fp
    ctx->pc = 0x23a35cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_23a360:
    // 0x23a360: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x23a360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_23a364:
    // 0x23a364: 0xc08c682  jal         func_231A08
label_23a368:
    if (ctx->pc == 0x23A368u) {
        ctx->pc = 0x23A368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A364u;
        // 0x23a368: 0x43f00b  movn        $fp, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A36Cu;
        goto label_23a36c;
    }
    ctx->pc = 0x23A364u;
    SET_GPR_U32(ctx, 31, 0x23A36Cu);
    ctx->pc = 0x23A368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A364u;
    // 0x23a368: 0x43f00b  movn        $fp, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x23A364u, 0x23A36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A36Cu;
label_23a36c:
    // 0x23a36c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23a36cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23a370:
    // 0x23a370: 0xc098552  jal         func_261548
label_23a374:
    if (ctx->pc == 0x23A374u) {
        ctx->pc = 0x23A374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A370u;
        // 0x23a374: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A378u;
        goto label_23a378;
    }
    ctx->pc = 0x23A370u;
    SET_GPR_U32(ctx, 31, 0x23A378u);
    ctx->pc = 0x23A374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A370u;
    // 0x23a374: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x23A370u, 0x23A378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A378u;
label_23a378:
    // 0x23a378: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x23a378u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23a37c:
    // 0x23a37c: 0xc08c698  jal         func_231A60
label_23a380:
    if (ctx->pc == 0x23A380u) {
        ctx->pc = 0x23A380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A37Cu;
        // 0x23a380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A384u;
        goto label_23a384;
    }
    ctx->pc = 0x23A37Cu;
    SET_GPR_U32(ctx, 31, 0x23A384u);
    ctx->pc = 0x23A380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A37Cu;
    // 0x23a380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x23A37Cu, 0x23A384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A384u;
label_23a384:
    // 0x23a384: 0x16a00015  bnez        $s5, . + 4 + (0x15 << 2)
label_23a388:
    if (ctx->pc == 0x23A388u) {
        ctx->pc = 0x23A388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A384u;
        // 0x23a388: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A38Cu;
        goto label_23a38c;
    }
    ctx->pc = 0x23A384u;
    {
        const bool branch_taken_0x23a384 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A384u;
        // 0x23a388: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a384) {
            ctx->pc = 0x23A3DCu;
            goto label_23a3dc;
        }
    }
    ctx->pc = 0x23A38Cu;
label_23a38c:
    // 0x23a38c: 0xc08a8cc  jal         func_22A330
label_23a390:
    if (ctx->pc == 0x23A390u) {
        ctx->pc = 0x23A390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A38Cu;
        // 0x23a390: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A394u;
        goto label_23a394;
    }
    ctx->pc = 0x23A38Cu;
    SET_GPR_U32(ctx, 31, 0x23A394u);
    ctx->pc = 0x23A390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A38Cu;
    // 0x23a390: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A330u, 0x23A38Cu, 0x23A394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A394u;
label_23a394:
    // 0x23a394: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x23a394u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23a398:
    // 0x23a398: 0x12a00078  beqz        $s5, . + 4 + (0x78 << 2)
label_23a39c:
    if (ctx->pc == 0x23A39Cu) {
        ctx->pc = 0x23A39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A398u;
        // 0x23a39c: 0x27d30004  addiu       $s3, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A3A0u;
        goto label_23a3a0;
    }
    ctx->pc = 0x23A398u;
    {
        const bool branch_taken_0x23a398 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A398u;
        // 0x23a39c: 0x27d30004  addiu       $s3, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a398) {
            ctx->pc = 0x23A57Cu;
            goto label_23a57c;
        }
    }
    ctx->pc = 0x23A3A0u;
label_23a3a0:
    // 0x23a3a0: 0xaea00014  sw          $zero, 0x14($s5)
    ctx->pc = 0x23a3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 0));
label_23a3a4:
    // 0x23a3a4: 0x2331821  addu        $v1, $s1, $s3
    ctx->pc = 0x23a3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_23a3a8:
    // 0x23a3a8: 0xaea30018  sw          $v1, 0x18($s5)
    ctx->pc = 0x23a3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 3));
label_23a3ac:
    // 0x23a3ac: 0xaea3000c  sw          $v1, 0xC($s5)
    ctx->pc = 0x23a3acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 3));
label_23a3b0:
    // 0x23a3b0: 0x8ee2012c  lw          $v0, 0x12C($s7)
    ctx->pc = 0x23a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 300)));
label_23a3b4:
    // 0x23a3b4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x23a3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_23a3b8:
    // 0x23a3b8: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_23a3bc:
    if (ctx->pc == 0x23A3BCu) {
        ctx->pc = 0x23A3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A3B8u;
        // 0x23a3bc: 0x8eb00008  lw          $s0, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A3C0u;
        goto label_23a3c0;
    }
    ctx->pc = 0x23A3B8u;
    {
        const bool branch_taken_0x23a3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a3b8) {
            ctx->pc = 0x23A3BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A3B8u;
            // 0x23a3bc: 0x8eb00008  lw          $s0, 0x8($s5) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A400u;
            goto label_23a400;
        }
    }
    ctx->pc = 0x23A3C0u;
label_23a3c0:
    // 0x23a3c0: 0xc08a262  jal         func_228988
label_23a3c4:
    if (ctx->pc == 0x23A3C4u) {
        ctx->pc = 0x23A3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A3C0u;
        // 0x23a3c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A3C8u;
        goto label_23a3c8;
    }
    ctx->pc = 0x23A3C0u;
    SET_GPR_U32(ctx, 31, 0x23A3C8u);
    ctx->pc = 0x23A3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A3C0u;
    // 0x23a3c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x23A3C0u, 0x23A3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A3C8u;
label_23a3c8:
    // 0x23a3c8: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x23a3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_23a3cc:
    // 0x23a3cc: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x23a3ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_23a3d0:
    // 0x23a3d0: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x23a3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_23a3d4:
    // 0x23a3d4: 0x10000014  b           . + 4 + (0x14 << 2)
label_23a3d8:
    if (ctx->pc == 0x23A3D8u) {
        ctx->pc = 0x23A3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A3D4u;
        // 0x23a3d8: 0x24560002  addiu       $s6, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A3DCu;
        goto label_23a3dc;
    }
    ctx->pc = 0x23A3D4u;
    {
        const bool branch_taken_0x23a3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A3D4u;
        // 0x23a3d8: 0x24560002  addiu       $s6, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a3d4) {
            ctx->pc = 0x23A428u;
            goto label_23a428;
        }
    }
    ctx->pc = 0x23A3DCu;
label_23a3dc:
    // 0x23a3dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23a3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23a3e0:
    // 0x23a3e0: 0x26a30020  addiu       $v1, $s5, 0x20
    ctx->pc = 0x23a3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_23a3e4:
    // 0x23a3e4: 0xa6a20010  sh          $v0, 0x10($s5)
    ctx->pc = 0x23a3e4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 16), (uint16_t)GPR_U32(ctx, 2));
label_23a3e8:
    // 0x23a3e8: 0xaea30008  sw          $v1, 0x8($s5)
    ctx->pc = 0x23a3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
label_23a3ec:
    // 0x23a3ec: 0xa6b30012  sh          $s3, 0x12($s5)
    ctx->pc = 0x23a3ecu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 18), (uint16_t)GPR_U32(ctx, 19));
label_23a3f0:
    // 0x23a3f0: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x23a3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_23a3f4:
    // 0x23a3f4: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x23a3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
label_23a3f8:
    // 0x23a3f8: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
label_23a3fc:
    if (ctx->pc == 0x23A3FCu) {
        ctx->pc = 0x23A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A3F8u;
        // 0x23a3fc: 0xaea0001c  sw          $zero, 0x1C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A400u;
        goto label_23a400;
    }
    ctx->pc = 0x23A3F8u;
    {
        const bool branch_taken_0x23a3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A3F8u;
        // 0x23a3fc: 0xaea0001c  sw          $zero, 0x1C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a3f8) {
            ctx->pc = 0x23A398u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23a398;
        }
    }
    ctx->pc = 0x23A400u;
label_23a400:
    // 0x23a400: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x23a400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_23a404:
    // 0x23a404: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23a404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23a408:
    // 0x23a408: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23a408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23a40c:
    // 0x23a40c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x23a40cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_23a410:
    // 0x23a410: 0x26160004  addiu       $s6, $s0, 0x4
    ctx->pc = 0x23a410u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_23a414:
    // 0x23a414: 0xc08a262  jal         func_228988
label_23a418:
    if (ctx->pc == 0x23A418u) {
        ctx->pc = 0x23A418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A414u;
        // 0x23a418: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A41Cu;
        goto label_23a41c;
    }
    ctx->pc = 0x23A414u;
    SET_GPR_U32(ctx, 31, 0x23A41Cu);
    ctx->pc = 0x23A418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A414u;
    // 0x23a418: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x23A414u, 0x23A41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A41Cu;
label_23a41c:
    // 0x23a41c: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x23a41cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_23a420:
    // 0x23a420: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x23a420u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_23a424:
    // 0x23a424: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x23a424u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
label_23a428:
    // 0x23a428: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23a428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_23a42c:
    // 0x23a42c: 0x3264ffff  andi        $a0, $s3, 0xFFFF
    ctx->pc = 0x23a42cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
label_23a430:
    // 0x23a430: 0xa2d40001  sb          $s4, 0x1($s6)
    ctx->pc = 0x23a430u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1), (uint8_t)GPR_U32(ctx, 20));
label_23a434:
    // 0x23a434: 0xc08a262  jal         func_228988
label_23a438:
    if (ctx->pc == 0x23A438u) {
        ctx->pc = 0x23A438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A434u;
        // 0x23a438: 0xa2c20000  sb          $v0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A43Cu;
        goto label_23a43c;
    }
    ctx->pc = 0x23A434u;
    SET_GPR_U32(ctx, 31, 0x23A43Cu);
    ctx->pc = 0x23A438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A434u;
    // 0x23a438: 0xa2c20000  sb          $v0, 0x0($s6) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x23A434u, 0x23A43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A43Cu;
label_23a43c:
    // 0x23a43c: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x23a43cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_23a440:
    // 0x23a440: 0xa2c20002  sb          $v0, 0x2($s6)
    ctx->pc = 0x23a440u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 2), (uint8_t)GPR_U32(ctx, 2));
label_23a444:
    // 0x23a444: 0x13c00005  beqz        $fp, . + 4 + (0x5 << 2)
label_23a448:
    if (ctx->pc == 0x23A448u) {
        ctx->pc = 0x23A448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A444u;
        // 0x23a448: 0xa2c30003  sb          $v1, 0x3($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A44Cu;
        goto label_23a44c;
    }
    ctx->pc = 0x23A444u;
    {
        const bool branch_taken_0x23a444 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A444u;
        // 0x23a448: 0xa2c30003  sb          $v1, 0x3($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a444) {
            ctx->pc = 0x23A45Cu;
            goto label_23a45c;
        }
    }
    ctx->pc = 0x23A44Cu;
label_23a44c:
    // 0x23a44c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x23a44cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_23a450:
    // 0x23a450: 0x26c50004  addiu       $a1, $s6, 0x4
    ctx->pc = 0x23a450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_23a454:
    // 0x23a454: 0xc08b4f8  jal         func_22D3E0
label_23a458:
    if (ctx->pc == 0x23A458u) {
        ctx->pc = 0x23A458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A454u;
        // 0x23a458: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A45Cu;
        goto label_23a45c;
    }
    ctx->pc = 0x23A454u;
    SET_GPR_U32(ctx, 31, 0x23A45Cu);
    ctx->pc = 0x23A458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A454u;
    // 0x23a458: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x23A454u, 0x23A45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A45Cu;
label_23a45c:
    // 0x23a45c: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23a45cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_23a460:
    // 0x23a460: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23a460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23a464:
    // 0x23a464: 0x261052d8  addiu       $s0, $s0, 0x52D8
    ctx->pc = 0x23a464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21208));
label_23a468:
    // 0x23a468: 0xc0903d4  jal         func_240F50
label_23a46c:
    if (ctx->pc == 0x23A46Cu) {
        ctx->pc = 0x23A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A468u;
        // 0x23a46c: 0x26f40014  addiu       $s4, $s7, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A470u;
        goto label_23a470;
    }
    ctx->pc = 0x23A468u;
    SET_GPR_U32(ctx, 31, 0x23A470u);
    ctx->pc = 0x23A46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A468u;
    // 0x23a46c: 0x26f40014  addiu       $s4, $s7, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240F50u, 0x23A468u, 0x23A470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A470u;
label_23a470:
    // 0x23a470: 0x92c40000  lbu         $a0, 0x0($s6)
    ctx->pc = 0x23a470u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_23a474:
    // 0x23a474: 0xc0902ac  jal         func_240AB0
label_23a478:
    if (ctx->pc == 0x23A478u) {
        ctx->pc = 0x23A478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A474u;
        // 0x23a478: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A47Cu;
        goto label_23a47c;
    }
    ctx->pc = 0x23A474u;
    SET_GPR_U32(ctx, 31, 0x23A47Cu);
    ctx->pc = 0x23A478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A474u;
    // 0x23a478: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240AB0u, 0x23A474u, 0x23A47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A47Cu;
label_23a47c:
    // 0x23a47c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23a47cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23a480:
    // 0x23a480: 0x92c40003  lbu         $a0, 0x3($s6)
    ctx->pc = 0x23a480u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 3)));
label_23a484:
    // 0x23a484: 0x92c20002  lbu         $v0, 0x2($s6)
    ctx->pc = 0x23a484u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 2)));
label_23a488:
    // 0x23a488: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x23a488u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_23a48c:
    // 0x23a48c: 0x92d10001  lbu         $s1, 0x1($s6)
    ctx->pc = 0x23a48cu;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
label_23a490:
    // 0x23a490: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x23a490u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_23a494:
    // 0x23a494: 0xc08b60c  jal         func_22D830
label_23a498:
    if (ctx->pc == 0x23A498u) {
        ctx->pc = 0x23A498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A494u;
        // 0x23a498: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A49Cu;
        goto label_23a49c;
    }
    ctx->pc = 0x23A494u;
    SET_GPR_U32(ctx, 31, 0x23A49Cu);
    ctx->pc = 0x23A498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A494u;
    // 0x23a498: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x23A494u, 0x23A49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A49Cu;
label_23a49c:
    // 0x23a49c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23a49cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23a4a0:
    // 0x23a4a0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x23a4a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23a4a4:
    // 0x23a4a4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x23a4a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23a4a8:
    // 0x23a4a8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x23a4a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23a4ac:
    // 0x23a4ac: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x23a4acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23a4b0:
    // 0x23a4b0: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x23a4b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23a4b4:
    // 0x23a4b4: 0xc08b5ac  jal         func_22D6B0
label_23a4b8:
    if (ctx->pc == 0x23A4B8u) {
        ctx->pc = 0x23A4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4B4u;
        // 0x23a4b8: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A4BCu;
        goto label_23a4bc;
    }
    ctx->pc = 0x23A4B4u;
    SET_GPR_U32(ctx, 31, 0x23A4BCu);
    ctx->pc = 0x23A4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A4B4u;
    // 0x23a4b8: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23A4B4u, 0x23A4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A4BCu;
label_23a4bc:
    // 0x23a4bc: 0x13c00003  beqz        $fp, . + 4 + (0x3 << 2)
label_23a4c0:
    if (ctx->pc == 0x23A4C0u) {
        ctx->pc = 0x23A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4BCu;
        // 0x23a4c0: 0x26c40004  addiu       $a0, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A4C4u;
        goto label_23a4c4;
    }
    ctx->pc = 0x23A4BCu;
    {
        const bool branch_taken_0x23a4bc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4BCu;
        // 0x23a4c0: 0x26c40004  addiu       $a0, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a4bc) {
            ctx->pc = 0x23A4CCu;
            goto label_23a4cc;
        }
    }
    ctx->pc = 0x23A4C4u;
label_23a4c4:
    // 0x23a4c4: 0xc090404  jal         func_241010
label_23a4c8:
    if (ctx->pc == 0x23A4C8u) {
        ctx->pc = 0x23A4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4C4u;
        // 0x23a4c8: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A4CCu;
        goto label_23a4cc;
    }
    ctx->pc = 0x23A4C4u;
    SET_GPR_U32(ctx, 31, 0x23A4CCu);
    ctx->pc = 0x23A4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A4C4u;
    // 0x23a4c8: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241010u, 0x23A4C4u, 0x23A4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A4CCu;
label_23a4cc:
    // 0x23a4cc: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x23a4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_23a4d0:
    // 0x23a4d0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23a4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23a4d4:
    // 0x23a4d4: 0xc08b5ac  jal         func_22D6B0
label_23a4d8:
    if (ctx->pc == 0x23A4D8u) {
        ctx->pc = 0x23A4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4D4u;
        // 0x23a4d8: 0x24a55300  addiu       $a1, $a1, 0x5300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A4DCu;
        goto label_23a4dc;
    }
    ctx->pc = 0x23A4D4u;
    SET_GPR_U32(ctx, 31, 0x23A4DCu);
    ctx->pc = 0x23A4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A4D4u;
    // 0x23a4d8: 0x24a55300  addiu       $a1, $a1, 0x5300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x23A4D4u, 0x23A4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A4DCu;
label_23a4dc:
    // 0x23a4dc: 0x8ee2011c  lw          $v0, 0x11C($s7)
    ctx->pc = 0x23a4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 284)));
label_23a4e0:
    // 0x23a4e0: 0x8ee30120  lw          $v1, 0x120($s7)
    ctx->pc = 0x23a4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 288)));
label_23a4e4:
    // 0x23a4e4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x23a4e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23a4e8:
    // 0x23a4e8: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_23a4ec:
    if (ctx->pc == 0x23A4ECu) {
        ctx->pc = 0x23A4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4E8u;
        // 0x23a4ec: 0xaea00004  sw          $zero, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A4F0u;
        goto label_23a4f0;
    }
    ctx->pc = 0x23A4E8u;
    {
        const bool branch_taken_0x23a4e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a4e8) {
            ctx->pc = 0x23A4ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A4E8u;
            // 0x23a4ec: 0xaea00004  sw          $zero, 0x4($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A520u;
            goto label_23a520;
        }
    }
    ctx->pc = 0x23A4F0u;
label_23a4f0:
    // 0x23a4f0: 0x8ee30110  lw          $v1, 0x110($s7)
    ctx->pc = 0x23a4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 272)));
label_23a4f4:
    // 0x23a4f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x23a4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23a4f8:
    // 0x23a4f8: 0x8ee200ec  lw          $v0, 0xEC($s7)
    ctx->pc = 0x23a4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 236)));
label_23a4fc:
    // 0x23a4fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23a4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23a500:
    // 0x23a500: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23a500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23a504:
    // 0x23a504: 0xaee30110  sw          $v1, 0x110($s7)
    ctx->pc = 0x23a504u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 272), GPR_U32(ctx, 3));
label_23a508:
    // 0x23a508: 0xc08a9d6  jal         func_22A758
label_23a50c:
    if (ctx->pc == 0x23A50Cu) {
        ctx->pc = 0x23A50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A508u;
        // 0x23a50c: 0xaee200ec  sw          $v0, 0xEC($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A510u;
        goto label_23a510;
    }
    ctx->pc = 0x23A508u;
    SET_GPR_U32(ctx, 31, 0x23A510u);
    ctx->pc = 0x23A50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A508u;
    // 0x23a50c: 0xaee200ec  sw          $v0, 0xEC($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x23A508u, 0x23A510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A510u;
label_23a510:
    // 0x23a510: 0xdee20070  ld          $v0, 0x70($s7)
    ctx->pc = 0x23a510u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 23), 112)));
label_23a514:
    // 0x23a514: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x23a514u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_23a518:
    // 0x23a518: 0x10000009  b           . + 4 + (0x9 << 2)
label_23a51c:
    if (ctx->pc == 0x23A51Cu) {
        ctx->pc = 0x23A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A518u;
        // 0x23a51c: 0xfee20070  sd          $v0, 0x70($s7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 23), 112), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A520u;
        goto label_23a520;
    }
    ctx->pc = 0x23A518u;
    {
        const bool branch_taken_0x23a518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A518u;
        // 0x23a51c: 0xfee20070  sd          $v0, 0x70($s7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 23), 112), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a518) {
            ctx->pc = 0x23A540u;
            goto label_23a540;
        }
    }
    ctx->pc = 0x23A520u;
label_23a520:
    // 0x23a520: 0x8ee20118  lw          $v0, 0x118($s7)
    ctx->pc = 0x23a520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 280)));
label_23a524:
    // 0x23a524: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
label_23a528:
    if (ctx->pc == 0x23A528u) {
        ctx->pc = 0x23A528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A524u;
        // 0x23a528: 0xac550004  sw          $s5, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A52Cu;
        goto label_23a52c;
    }
    ctx->pc = 0x23A524u;
    {
        const bool branch_taken_0x23a524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a524) {
            ctx->pc = 0x23A528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A524u;
            // 0x23a528: 0xac550004  sw          $s5, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A530u;
            goto label_23a530;
        }
    }
    ctx->pc = 0x23A52Cu;
label_23a52c:
    // 0x23a52c: 0xaef50114  sw          $s5, 0x114($s7)
    ctx->pc = 0x23a52cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 276), GPR_U32(ctx, 21));
label_23a530:
    // 0x23a530: 0x8ee2011c  lw          $v0, 0x11C($s7)
    ctx->pc = 0x23a530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 284)));
label_23a534:
    // 0x23a534: 0xaef50118  sw          $s5, 0x118($s7)
    ctx->pc = 0x23a534u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 280), GPR_U32(ctx, 21));
label_23a538:
    // 0x23a538: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23a538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23a53c:
    // 0x23a53c: 0xaee2011c  sw          $v0, 0x11C($s7)
    ctx->pc = 0x23a53cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 284), GPR_U32(ctx, 2));
label_23a540:
    // 0x23a540: 0x96e20030  lhu         $v0, 0x30($s7)
    ctx->pc = 0x23a540u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 48)));
label_23a544:
    // 0x23a544: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x23a544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_23a548:
    // 0x23a548: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_23a54c:
    if (ctx->pc == 0x23A54Cu) {
        ctx->pc = 0x23A54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A548u;
        // 0x23a54c: 0x8ea20018  lw          $v0, 0x18($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A550u;
        goto label_23a550;
    }
    ctx->pc = 0x23A548u;
    {
        const bool branch_taken_0x23a548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a548) {
            ctx->pc = 0x23A54Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A548u;
            // 0x23a54c: 0x8ea20018  lw          $v0, 0x18($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A560u;
            goto label_23a560;
        }
    }
    ctx->pc = 0x23A550u;
label_23a550:
    // 0x23a550: 0x8ee200c8  lw          $v0, 0xC8($s7)
    ctx->pc = 0x23a550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 200)));
label_23a554:
    // 0x23a554: 0x40f809  jalr        $v0
label_23a558:
    if (ctx->pc == 0x23A558u) {
        ctx->pc = 0x23A558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A554u;
        // 0x23a558: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A55Cu;
        goto label_23a55c;
    }
    ctx->pc = 0x23A554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23A55Cu);
        ctx->pc = 0x23A558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A554u;
        // 0x23a558: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A554u, 0x23A55Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23A55Cu;
label_23a55c:
    // 0x23a55c: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x23a55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_23a560:
    // 0x23a560: 0x8ee40130  lw          $a0, 0x130($s7)
    ctx->pc = 0x23a560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 304)));
label_23a564:
    // 0x23a564: 0xdee30088  ld          $v1, 0x88($s7)
    ctx->pc = 0x23a564u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 23), 136)));
label_23a568:
    // 0x23a568: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23a568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_23a56c:
    // 0x23a56c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23a56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23a570:
    // 0x23a570: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x23a570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_23a574:
    // 0x23a574: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x23a574u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_23a578:
    // 0x23a578: 0xfee30088  sd          $v1, 0x88($s7)
    ctx->pc = 0x23a578u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 136), GPR_U64(ctx, 3));
label_23a57c:
    // 0x23a57c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x23a57cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_23a580:
    // 0x23a580: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x23a580u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_23a584:
    // 0x23a584: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x23a584u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_23a588:
    // 0x23a588: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x23a588u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_23a58c:
    // 0x23a58c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x23a58cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_23a590:
    // 0x23a590: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x23a590u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23a594:
    // 0x23a594: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x23a594u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23a598:
    // 0x23a598: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x23a598u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23a59c:
    // 0x23a59c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x23a59cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23a5a0:
    // 0x23a5a0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x23a5a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23a5a4:
    // 0x23a5a4: 0x3e00008  jr          $ra
label_23a5a8:
    if (ctx->pc == 0x23A5A8u) {
        ctx->pc = 0x23A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A5A4u;
        // 0x23a5a8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A5ACu;
        goto label_23a5ac;
    }
    ctx->pc = 0x23A5A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A5A4u;
        // 0x23a5a8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A5A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A5ACu;
label_23a5ac:
    // 0x23a5ac: 0x0  nop
    ctx->pc = 0x23a5acu;
    // NOP
}
