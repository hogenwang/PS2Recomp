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

// Function: sub_00111258
// Address: 0x111258 - 0x111420
void sub_00111258_0x111258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111258_0x111258");
#endif

    switch (ctx->pc) {
        case 0x111258u: goto label_111258;
        case 0x11125cu: goto label_11125c;
        case 0x111260u: goto label_111260;
        case 0x111264u: goto label_111264;
        case 0x111268u: goto label_111268;
        case 0x11126cu: goto label_11126c;
        case 0x111270u: goto label_111270;
        case 0x111274u: goto label_111274;
        case 0x111278u: goto label_111278;
        case 0x11127cu: goto label_11127c;
        case 0x111280u: goto label_111280;
        case 0x111284u: goto label_111284;
        case 0x111288u: goto label_111288;
        case 0x11128cu: goto label_11128c;
        case 0x111290u: goto label_111290;
        case 0x111294u: goto label_111294;
        case 0x111298u: goto label_111298;
        case 0x11129cu: goto label_11129c;
        case 0x1112a0u: goto label_1112a0;
        case 0x1112a4u: goto label_1112a4;
        case 0x1112a8u: goto label_1112a8;
        case 0x1112acu: goto label_1112ac;
        case 0x1112b0u: goto label_1112b0;
        case 0x1112b4u: goto label_1112b4;
        case 0x1112b8u: goto label_1112b8;
        case 0x1112bcu: goto label_1112bc;
        case 0x1112c0u: goto label_1112c0;
        case 0x1112c4u: goto label_1112c4;
        case 0x1112c8u: goto label_1112c8;
        case 0x1112ccu: goto label_1112cc;
        case 0x1112d0u: goto label_1112d0;
        case 0x1112d4u: goto label_1112d4;
        case 0x1112d8u: goto label_1112d8;
        case 0x1112dcu: goto label_1112dc;
        case 0x1112e0u: goto label_1112e0;
        case 0x1112e4u: goto label_1112e4;
        case 0x1112e8u: goto label_1112e8;
        case 0x1112ecu: goto label_1112ec;
        case 0x1112f0u: goto label_1112f0;
        case 0x1112f4u: goto label_1112f4;
        case 0x1112f8u: goto label_1112f8;
        case 0x1112fcu: goto label_1112fc;
        case 0x111300u: goto label_111300;
        case 0x111304u: goto label_111304;
        case 0x111308u: goto label_111308;
        case 0x11130cu: goto label_11130c;
        case 0x111310u: goto label_111310;
        case 0x111314u: goto label_111314;
        case 0x111318u: goto label_111318;
        case 0x11131cu: goto label_11131c;
        case 0x111320u: goto label_111320;
        case 0x111324u: goto label_111324;
        case 0x111328u: goto label_111328;
        case 0x11132cu: goto label_11132c;
        case 0x111330u: goto label_111330;
        case 0x111334u: goto label_111334;
        case 0x111338u: goto label_111338;
        case 0x11133cu: goto label_11133c;
        case 0x111340u: goto label_111340;
        case 0x111344u: goto label_111344;
        case 0x111348u: goto label_111348;
        case 0x11134cu: goto label_11134c;
        case 0x111350u: goto label_111350;
        case 0x111354u: goto label_111354;
        case 0x111358u: goto label_111358;
        case 0x11135cu: goto label_11135c;
        case 0x111360u: goto label_111360;
        case 0x111364u: goto label_111364;
        case 0x111368u: goto label_111368;
        case 0x11136cu: goto label_11136c;
        case 0x111370u: goto label_111370;
        case 0x111374u: goto label_111374;
        case 0x111378u: goto label_111378;
        case 0x11137cu: goto label_11137c;
        case 0x111380u: goto label_111380;
        case 0x111384u: goto label_111384;
        case 0x111388u: goto label_111388;
        case 0x11138cu: goto label_11138c;
        case 0x111390u: goto label_111390;
        case 0x111394u: goto label_111394;
        case 0x111398u: goto label_111398;
        case 0x11139cu: goto label_11139c;
        case 0x1113a0u: goto label_1113a0;
        case 0x1113a4u: goto label_1113a4;
        case 0x1113a8u: goto label_1113a8;
        case 0x1113acu: goto label_1113ac;
        case 0x1113b0u: goto label_1113b0;
        case 0x1113b4u: goto label_1113b4;
        case 0x1113b8u: goto label_1113b8;
        case 0x1113bcu: goto label_1113bc;
        case 0x1113c0u: goto label_1113c0;
        case 0x1113c4u: goto label_1113c4;
        case 0x1113c8u: goto label_1113c8;
        case 0x1113ccu: goto label_1113cc;
        case 0x1113d0u: goto label_1113d0;
        case 0x1113d4u: goto label_1113d4;
        case 0x1113d8u: goto label_1113d8;
        case 0x1113dcu: goto label_1113dc;
        case 0x1113e0u: goto label_1113e0;
        case 0x1113e4u: goto label_1113e4;
        case 0x1113e8u: goto label_1113e8;
        case 0x1113ecu: goto label_1113ec;
        case 0x1113f0u: goto label_1113f0;
        case 0x1113f4u: goto label_1113f4;
        case 0x1113f8u: goto label_1113f8;
        case 0x1113fcu: goto label_1113fc;
        case 0x111400u: goto label_111400;
        case 0x111404u: goto label_111404;
        case 0x111408u: goto label_111408;
        case 0x11140cu: goto label_11140c;
        case 0x111410u: goto label_111410;
        case 0x111414u: goto label_111414;
        case 0x111418u: goto label_111418;
        case 0x11141cu: goto label_11141c;
        default: break;
    }

    ctx->pc = 0x111258u;

label_111258:
    // 0x111258: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x111258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_11125c:
    // 0x11125c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x11125cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_111260:
    // 0x111260: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x111260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_111264:
    // 0x111264: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x111264u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_111268:
    // 0x111268: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x111268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_11126c:
    // 0x11126c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x11126cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_111270:
    // 0x111270: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x111270u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_111274:
    // 0x111274: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x111274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_111278:
    // 0x111278: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x111278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_11127c:
    // 0x11127c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x11127cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_111280:
    // 0x111280: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x111280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_111284:
    // 0x111284: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x111284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_111288:
    // 0x111288: 0x40f809  jalr        $v0
label_11128c:
    if (ctx->pc == 0x11128Cu) {
        ctx->pc = 0x11128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111288u;
        // 0x11128c: 0x8e26000c  lw          $a2, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111290u;
        goto label_111290;
    }
    ctx->pc = 0x111288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x111290u);
        ctx->pc = 0x11128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111288u;
        // 0x11128c: 0x8e26000c  lw          $a2, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111288u, 0x111290u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x111290u;
label_111290:
    // 0x111290: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x111290u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_111294:
    // 0x111294: 0x56400001  bnel        $s2, $zero, . + 4 + (0x1 << 2)
label_111298:
    if (ctx->pc == 0x111298u) {
        ctx->pc = 0x111298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111294u;
        // 0x111298: 0x8e34002c  lw          $s4, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11129Cu;
        goto label_11129c;
    }
    ctx->pc = 0x111294u;
    {
        const bool branch_taken_0x111294 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x111294) {
            ctx->pc = 0x111298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111294u;
            // 0x111298: 0x8e34002c  lw          $s4, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11129Cu;
            goto label_11129c;
        }
    }
    ctx->pc = 0x11129Cu;
label_11129c:
    // 0x11129c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x11129cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1112a0:
    // 0x1112a0: 0x18a00003  blez        $a1, . + 4 + (0x3 << 2)
label_1112a4:
    if (ctx->pc == 0x1112A4u) {
        ctx->pc = 0x1112A8u;
        goto label_1112a8;
    }
    ctx->pc = 0x1112A0u;
    {
        const bool branch_taken_0x1112a0 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x1112a0) {
            ctx->pc = 0x1112B0u;
            goto label_1112b0;
        }
    }
    ctx->pc = 0x1112A8u;
label_1112a8:
    // 0x1112a8: 0xc0440be  jal         func_1102F8
label_1112ac:
    if (ctx->pc == 0x1112ACu) {
        ctx->pc = 0x1112ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112A8u;
        // 0x1112ac: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1112B0u;
        goto label_1112b0;
    }
    ctx->pc = 0x1112A8u;
    SET_GPR_U32(ctx, 31, 0x1112B0u);
    ctx->pc = 0x1112ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1112A8u;
    // 0x1112ac: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1102F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1102F8u, 0x1112A8u, 0x1112B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1112B0u;
label_1112b0:
    // 0x1112b0: 0x1a800003  blez        $s4, . + 4 + (0x3 << 2)
label_1112b4:
    if (ctx->pc == 0x1112B4u) {
        ctx->pc = 0x1112B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112B0u;
        // 0x1112b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1112B8u;
        goto label_1112b8;
    }
    ctx->pc = 0x1112B0u;
    {
        const bool branch_taken_0x1112b0 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1112B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112B0u;
        // 0x1112b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1112b0) {
            ctx->pc = 0x1112C0u;
            goto label_1112c0;
        }
    }
    ctx->pc = 0x1112B8u;
label_1112b8:
    // 0x1112b8: 0xc0440be  jal         func_1102F8
label_1112bc:
    if (ctx->pc == 0x1112BCu) {
        ctx->pc = 0x1112BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112B8u;
        // 0x1112bc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1112C0u;
        goto label_1112c0;
    }
    ctx->pc = 0x1112B8u;
    SET_GPR_U32(ctx, 31, 0x1112C0u);
    ctx->pc = 0x1112BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1112B8u;
    // 0x1112bc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1102F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1102F8u, 0x1112B8u, 0x1112C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1112C0u;
label_1112c0:
    // 0x1112c0: 0xc045ba8  jal         func_116EA0
label_1112c4:
    if (ctx->pc == 0x1112C4u) {
        ctx->pc = 0x1112C8u;
        goto label_1112c8;
    }
    ctx->pc = 0x1112C0u;
    SET_GPR_U32(ctx, 31, 0x1112C8u);
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x1112C0u, 0x1112C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1112C8u;
label_1112c8:
    // 0x1112c8: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x1112c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_1112cc:
    // 0x1112cc: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x1112ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
label_1112d0:
    // 0x1112d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1112d4:
    if (ctx->pc == 0x1112D4u) {
        ctx->pc = 0x1112D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112D0u;
        // 0x1112d4: 0x52c02  srl         $a1, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1112D8u;
        goto label_1112d8;
    }
    ctx->pc = 0x1112D0u;
    {
        const bool branch_taken_0x1112d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1112D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112D0u;
        // 0x1112d4: 0x52c02  srl         $a1, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1112d0) {
            ctx->pc = 0x1112ECu;
            goto label_1112ec;
        }
    }
    ctx->pc = 0x1112D8u;
label_1112d8:
    // 0x1112d8: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1112d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
label_1112dc:
    // 0x1112dc: 0xc04419a  jal         func_110668
label_1112e0:
    if (ctx->pc == 0x1112E0u) {
        ctx->pc = 0x1112E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112DCu;
        // 0x1112e0: 0x24848200  addiu       $a0, $a0, -0x7E00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1112E4u;
        goto label_1112e4;
    }
    ctx->pc = 0x1112DCu;
    SET_GPR_U32(ctx, 31, 0x1112E4u);
    ctx->pc = 0x1112E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1112DCu;
    // 0x1112e0: 0x24848200  addiu       $a0, $a0, -0x7E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110668u, 0x1112DCu, 0x1112E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1112E4u;
label_1112e4:
    // 0x1112e4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1112e8:
    if (ctx->pc == 0x1112E8u) {
        ctx->pc = 0x1112E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112E4u;
        // 0x1112e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1112ECu;
        goto label_1112ec;
    }
    ctx->pc = 0x1112E4u;
    {
        const bool branch_taken_0x1112e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1112E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112E4u;
        // 0x1112e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1112e4) {
            ctx->pc = 0x1112FCu;
            goto label_1112fc;
        }
    }
    ctx->pc = 0x1112ECu;
label_1112ec:
    // 0x1112ec: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1112ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
label_1112f0:
    // 0x1112f0: 0xc04418e  jal         func_110638
label_1112f4:
    if (ctx->pc == 0x1112F4u) {
        ctx->pc = 0x1112F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112F0u;
        // 0x1112f4: 0x24848200  addiu       $a0, $a0, -0x7E00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1112F8u;
        goto label_1112f8;
    }
    ctx->pc = 0x1112F0u;
    SET_GPR_U32(ctx, 31, 0x1112F8u);
    ctx->pc = 0x1112F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1112F0u;
    // 0x1112f4: 0x24848200  addiu       $a0, $a0, -0x7E00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110638u, 0x1112F0u, 0x1112F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1112F8u;
label_1112f8:
    // 0x1112f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1112f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1112fc:
    // 0x1112fc: 0xc045bbc  jal         func_116EF0
label_111300:
    if (ctx->pc == 0x111300u) {
        ctx->pc = 0x111304u;
        goto label_111304;
    }
    ctx->pc = 0x1112FCu;
    SET_GPR_U32(ctx, 31, 0x111304u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x1112FCu, 0x111304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111304u;
label_111304:
    // 0x111304: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x111304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_111308:
    // 0x111308: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x111308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_11130c:
    // 0x11130c: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x11130cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
label_111310:
    // 0x111310: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x111310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_111314:
    // 0x111314: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x111314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
label_111318:
    // 0x111318: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x111318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_11131c:
    // 0x11131c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_111320:
    if (ctx->pc == 0x111320u) {
        ctx->pc = 0x111320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11131Cu;
        // 0x111320: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111324u;
        goto label_111324;
    }
    ctx->pc = 0x11131Cu;
    {
        const bool branch_taken_0x11131c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11131c) {
            ctx->pc = 0x111320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11131Cu;
            // 0x111320: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111358u;
            goto label_111358;
        }
    }
    ctx->pc = 0x111324u;
label_111324:
    // 0x111324: 0x0  nop
    ctx->pc = 0x111324u;
    // NOP
label_111328:
    // 0x111328: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x111328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_11132c:
    // 0x11132c: 0x8e280028  lw          $t0, 0x28($s1)
    ctx->pc = 0x11132cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_111330:
    // 0x111330: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x111330u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_111334:
    // 0x111334: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x111334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_111338:
    // 0x111338: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x111338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_11133c:
    // 0x11133c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x11133cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_111340:
    // 0x111340: 0xc04404c  jal         func_110130
label_111344:
    if (ctx->pc == 0x111344u) {
        ctx->pc = 0x111344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111340u;
        // 0x111344: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111348u;
        goto label_111348;
    }
    ctx->pc = 0x111340u;
    SET_GPR_U32(ctx, 31, 0x111348u);
    ctx->pc = 0x111344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111340u;
    // 0x111344: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110130u, 0x111340u, 0x111348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111348u;
label_111348:
    // 0x111348: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
label_11134c:
    if (ctx->pc == 0x11134Cu) {
        ctx->pc = 0x11134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111348u;
        // 0x11134c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111350u;
        goto label_111350;
    }
    ctx->pc = 0x111348u;
    {
        const bool branch_taken_0x111348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111348u;
        // 0x11134c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111348) {
            ctx->pc = 0x111328u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_111328;
        }
    }
    ctx->pc = 0x111350u;
label_111350:
    // 0x111350: 0x1000002c  b           . + 4 + (0x2C << 2)
label_111354:
    if (ctx->pc == 0x111354u) {
        ctx->pc = 0x111354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111350u;
        // 0x111354: 0xdfb40060  ld          $s4, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111358u;
        goto label_111358;
    }
    ctx->pc = 0x111350u;
    {
        const bool branch_taken_0x111350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111350u;
        // 0x111354: 0xdfb40060  ld          $s4, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111350) {
            ctx->pc = 0x111404u;
            goto label_111404;
        }
    }
    ctx->pc = 0x111358u;
label_111358:
    // 0x111358: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x111358u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11135c:
    // 0x11135c: 0x1a800007  blez        $s4, . + 4 + (0x7 << 2)
label_111360:
    if (ctx->pc == 0x111360u) {
        ctx->pc = 0x111360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11135Cu;
        // 0x111360: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111364u;
        goto label_111364;
    }
    ctx->pc = 0x11135Cu;
    {
        const bool branch_taken_0x11135c = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x111360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11135Cu;
        // 0x111360: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11135c) {
            ctx->pc = 0x11137Cu;
            goto label_11137c;
        }
    }
    ctx->pc = 0x111364u;
label_111364:
    // 0x111364: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x111364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_111368:
    // 0x111368: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x111368u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11136c:
    // 0x11136c: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x11136cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
label_111370:
    // 0x111370: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x111370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_111374:
    // 0x111374: 0xafb40008  sw          $s4, 0x8($sp)
    ctx->pc = 0x111374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 20));
label_111378:
    // 0x111378: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x111378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_11137c:
    // 0x11137c: 0x132900  sll         $a1, $s3, 4
    ctx->pc = 0x11137cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_111380:
    // 0x111380: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x111380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_111384:
    // 0x111384: 0x3a51821  addu        $v1, $sp, $a1
    ctx->pc = 0x111384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
label_111388:
    // 0x111388: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x111388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_11138c:
    // 0x11138c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x11138cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_111390:
    // 0x111390: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x111390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_111394:
    // 0x111394: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x111394u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_111398:
    // 0x111398: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x111398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_11139c:
    // 0x11139c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x11139cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1113a0:
    // 0x1113a0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1113a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1113a4:
    // 0x1113a4: 0x27a2000c  addiu       $v0, $sp, 0xC
    ctx->pc = 0x1113a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_1113a8:
    // 0x1113a8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1113a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1113ac:
    // 0x1113ac: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1113acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1113b0:
    // 0x1113b0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1113b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1113b4:
    // 0x1113b4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1113b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1113b8:
    // 0x1113b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1113b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1113bc:
    // 0x1113bc: 0x0  nop
    ctx->pc = 0x1113bcu;
    // NOP
label_1113c0:
    // 0x1113c0: 0xc043ee2  jal         func_10FB88
label_1113c4:
    if (ctx->pc == 0x1113C4u) {
        ctx->pc = 0x1113C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113C0u;
        // 0x1113c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1113C8u;
        goto label_1113c8;
    }
    ctx->pc = 0x1113C0u;
    SET_GPR_U32(ctx, 31, 0x1113C8u);
    ctx->pc = 0x1113C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1113C0u;
    // 0x1113c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FB88u, 0x1113C0u, 0x1113C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1113C8u;
label_1113c8:
    // 0x1113c8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1113cc:
    if (ctx->pc == 0x1113CCu) {
        ctx->pc = 0x1113CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113C8u;
        // 0x1113cc: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1113D0u;
        goto label_1113d0;
    }
    ctx->pc = 0x1113C8u;
    {
        const bool branch_taken_0x1113c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1113CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113C8u;
        // 0x1113cc: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1113c8) {
            ctx->pc = 0x111400u;
            goto label_111400;
        }
    }
    ctx->pc = 0x1113D0u;
label_1113d0:
    // 0x1113d0: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x1113d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_1113d4:
    // 0x1113d4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1113d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1113d8:
    // 0x1113d8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1113d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1113dc:
    // 0x1113dc: 0x0  nop
    ctx->pc = 0x1113dcu;
    // NOP
label_1113e0:
    // 0x1113e0: 0x0  nop
    ctx->pc = 0x1113e0u;
    // NOP
label_1113e4:
    // 0x1113e4: 0x0  nop
    ctx->pc = 0x1113e4u;
    // NOP
label_1113e8:
    // 0x1113e8: 0x0  nop
    ctx->pc = 0x1113e8u;
    // NOP
label_1113ec:
    // 0x1113ec: 0x1464fffa  bne         $v1, $a0, . + 4 + (-0x6 << 2)
label_1113f0:
    if (ctx->pc == 0x1113F0u) {
        ctx->pc = 0x1113F4u;
        goto label_1113f4;
    }
    ctx->pc = 0x1113ECu;
    {
        const bool branch_taken_0x1113ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1113ec) {
            ctx->pc = 0x1113D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1113d8;
        }
    }
    ctx->pc = 0x1113F4u;
label_1113f4:
    // 0x1113f4: 0x5040fff2  beql        $v0, $zero, . + 4 + (-0xE << 2)
label_1113f8:
    if (ctx->pc == 0x1113F8u) {
        ctx->pc = 0x1113F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1113F4u;
        // 0x1113f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1113FCu;
        goto label_1113fc;
    }
    ctx->pc = 0x1113F4u;
    {
        const bool branch_taken_0x1113f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1113f4) {
            ctx->pc = 0x1113F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1113F4u;
            // 0x1113f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1113C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1113c0;
        }
    }
    ctx->pc = 0x1113FCu;
label_1113fc:
    // 0x1113fc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1113fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_111400:
    // 0x111400: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x111400u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_111404:
    // 0x111404: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x111404u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_111408:
    // 0x111408: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x111408u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_11140c:
    // 0x11140c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x11140cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_111410:
    // 0x111410: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x111410u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_111414:
    // 0x111414: 0x3e00008  jr          $ra
label_111418:
    if (ctx->pc == 0x111418u) {
        ctx->pc = 0x111418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111414u;
        // 0x111418: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11141Cu;
        goto label_11141c;
    }
    ctx->pc = 0x111414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111414u;
        // 0x111418: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11141Cu;
label_11141c:
    // 0x11141c: 0x0  nop
    ctx->pc = 0x11141cu;
    // NOP
    if (ctx->pc == 0x11141cu) { ctx->pc = 0x111420u; }
}
