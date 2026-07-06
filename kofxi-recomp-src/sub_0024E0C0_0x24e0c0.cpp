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

// Function: sub_0024E0C0
// Address: 0x24e0c0 - 0x24e460
void sub_0024E0C0_0x24e0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E0C0_0x24e0c0");
#endif

    switch (ctx->pc) {
        case 0x24e0c0u: goto label_24e0c0;
        case 0x24e0c4u: goto label_24e0c4;
        case 0x24e0c8u: goto label_24e0c8;
        case 0x24e0ccu: goto label_24e0cc;
        case 0x24e0d0u: goto label_24e0d0;
        case 0x24e0d4u: goto label_24e0d4;
        case 0x24e0d8u: goto label_24e0d8;
        case 0x24e0dcu: goto label_24e0dc;
        case 0x24e0e0u: goto label_24e0e0;
        case 0x24e0e4u: goto label_24e0e4;
        case 0x24e0e8u: goto label_24e0e8;
        case 0x24e0ecu: goto label_24e0ec;
        case 0x24e0f0u: goto label_24e0f0;
        case 0x24e0f4u: goto label_24e0f4;
        case 0x24e0f8u: goto label_24e0f8;
        case 0x24e0fcu: goto label_24e0fc;
        case 0x24e100u: goto label_24e100;
        case 0x24e104u: goto label_24e104;
        case 0x24e108u: goto label_24e108;
        case 0x24e10cu: goto label_24e10c;
        case 0x24e110u: goto label_24e110;
        case 0x24e114u: goto label_24e114;
        case 0x24e118u: goto label_24e118;
        case 0x24e11cu: goto label_24e11c;
        case 0x24e120u: goto label_24e120;
        case 0x24e124u: goto label_24e124;
        case 0x24e128u: goto label_24e128;
        case 0x24e12cu: goto label_24e12c;
        case 0x24e130u: goto label_24e130;
        case 0x24e134u: goto label_24e134;
        case 0x24e138u: goto label_24e138;
        case 0x24e13cu: goto label_24e13c;
        case 0x24e140u: goto label_24e140;
        case 0x24e144u: goto label_24e144;
        case 0x24e148u: goto label_24e148;
        case 0x24e14cu: goto label_24e14c;
        case 0x24e150u: goto label_24e150;
        case 0x24e154u: goto label_24e154;
        case 0x24e158u: goto label_24e158;
        case 0x24e15cu: goto label_24e15c;
        case 0x24e160u: goto label_24e160;
        case 0x24e164u: goto label_24e164;
        case 0x24e168u: goto label_24e168;
        case 0x24e16cu: goto label_24e16c;
        case 0x24e170u: goto label_24e170;
        case 0x24e174u: goto label_24e174;
        case 0x24e178u: goto label_24e178;
        case 0x24e17cu: goto label_24e17c;
        case 0x24e180u: goto label_24e180;
        case 0x24e184u: goto label_24e184;
        case 0x24e188u: goto label_24e188;
        case 0x24e18cu: goto label_24e18c;
        case 0x24e190u: goto label_24e190;
        case 0x24e194u: goto label_24e194;
        case 0x24e198u: goto label_24e198;
        case 0x24e19cu: goto label_24e19c;
        case 0x24e1a0u: goto label_24e1a0;
        case 0x24e1a4u: goto label_24e1a4;
        case 0x24e1a8u: goto label_24e1a8;
        case 0x24e1acu: goto label_24e1ac;
        case 0x24e1b0u: goto label_24e1b0;
        case 0x24e1b4u: goto label_24e1b4;
        case 0x24e1b8u: goto label_24e1b8;
        case 0x24e1bcu: goto label_24e1bc;
        case 0x24e1c0u: goto label_24e1c0;
        case 0x24e1c4u: goto label_24e1c4;
        case 0x24e1c8u: goto label_24e1c8;
        case 0x24e1ccu: goto label_24e1cc;
        case 0x24e1d0u: goto label_24e1d0;
        case 0x24e1d4u: goto label_24e1d4;
        case 0x24e1d8u: goto label_24e1d8;
        case 0x24e1dcu: goto label_24e1dc;
        case 0x24e1e0u: goto label_24e1e0;
        case 0x24e1e4u: goto label_24e1e4;
        case 0x24e1e8u: goto label_24e1e8;
        case 0x24e1ecu: goto label_24e1ec;
        case 0x24e1f0u: goto label_24e1f0;
        case 0x24e1f4u: goto label_24e1f4;
        case 0x24e1f8u: goto label_24e1f8;
        case 0x24e1fcu: goto label_24e1fc;
        case 0x24e200u: goto label_24e200;
        case 0x24e204u: goto label_24e204;
        case 0x24e208u: goto label_24e208;
        case 0x24e20cu: goto label_24e20c;
        case 0x24e210u: goto label_24e210;
        case 0x24e214u: goto label_24e214;
        case 0x24e218u: goto label_24e218;
        case 0x24e21cu: goto label_24e21c;
        case 0x24e220u: goto label_24e220;
        case 0x24e224u: goto label_24e224;
        case 0x24e228u: goto label_24e228;
        case 0x24e22cu: goto label_24e22c;
        case 0x24e230u: goto label_24e230;
        case 0x24e234u: goto label_24e234;
        case 0x24e238u: goto label_24e238;
        case 0x24e23cu: goto label_24e23c;
        case 0x24e240u: goto label_24e240;
        case 0x24e244u: goto label_24e244;
        case 0x24e248u: goto label_24e248;
        case 0x24e24cu: goto label_24e24c;
        case 0x24e250u: goto label_24e250;
        case 0x24e254u: goto label_24e254;
        case 0x24e258u: goto label_24e258;
        case 0x24e25cu: goto label_24e25c;
        case 0x24e260u: goto label_24e260;
        case 0x24e264u: goto label_24e264;
        case 0x24e268u: goto label_24e268;
        case 0x24e26cu: goto label_24e26c;
        case 0x24e270u: goto label_24e270;
        case 0x24e274u: goto label_24e274;
        case 0x24e278u: goto label_24e278;
        case 0x24e27cu: goto label_24e27c;
        case 0x24e280u: goto label_24e280;
        case 0x24e284u: goto label_24e284;
        case 0x24e288u: goto label_24e288;
        case 0x24e28cu: goto label_24e28c;
        case 0x24e290u: goto label_24e290;
        case 0x24e294u: goto label_24e294;
        case 0x24e298u: goto label_24e298;
        case 0x24e29cu: goto label_24e29c;
        case 0x24e2a0u: goto label_24e2a0;
        case 0x24e2a4u: goto label_24e2a4;
        case 0x24e2a8u: goto label_24e2a8;
        case 0x24e2acu: goto label_24e2ac;
        case 0x24e2b0u: goto label_24e2b0;
        case 0x24e2b4u: goto label_24e2b4;
        case 0x24e2b8u: goto label_24e2b8;
        case 0x24e2bcu: goto label_24e2bc;
        case 0x24e2c0u: goto label_24e2c0;
        case 0x24e2c4u: goto label_24e2c4;
        case 0x24e2c8u: goto label_24e2c8;
        case 0x24e2ccu: goto label_24e2cc;
        case 0x24e2d0u: goto label_24e2d0;
        case 0x24e2d4u: goto label_24e2d4;
        case 0x24e2d8u: goto label_24e2d8;
        case 0x24e2dcu: goto label_24e2dc;
        case 0x24e2e0u: goto label_24e2e0;
        case 0x24e2e4u: goto label_24e2e4;
        case 0x24e2e8u: goto label_24e2e8;
        case 0x24e2ecu: goto label_24e2ec;
        case 0x24e2f0u: goto label_24e2f0;
        case 0x24e2f4u: goto label_24e2f4;
        case 0x24e2f8u: goto label_24e2f8;
        case 0x24e2fcu: goto label_24e2fc;
        case 0x24e300u: goto label_24e300;
        case 0x24e304u: goto label_24e304;
        case 0x24e308u: goto label_24e308;
        case 0x24e30cu: goto label_24e30c;
        case 0x24e310u: goto label_24e310;
        case 0x24e314u: goto label_24e314;
        case 0x24e318u: goto label_24e318;
        case 0x24e31cu: goto label_24e31c;
        case 0x24e320u: goto label_24e320;
        case 0x24e324u: goto label_24e324;
        case 0x24e328u: goto label_24e328;
        case 0x24e32cu: goto label_24e32c;
        case 0x24e330u: goto label_24e330;
        case 0x24e334u: goto label_24e334;
        case 0x24e338u: goto label_24e338;
        case 0x24e33cu: goto label_24e33c;
        case 0x24e340u: goto label_24e340;
        case 0x24e344u: goto label_24e344;
        case 0x24e348u: goto label_24e348;
        case 0x24e34cu: goto label_24e34c;
        case 0x24e350u: goto label_24e350;
        case 0x24e354u: goto label_24e354;
        case 0x24e358u: goto label_24e358;
        case 0x24e35cu: goto label_24e35c;
        case 0x24e360u: goto label_24e360;
        case 0x24e364u: goto label_24e364;
        case 0x24e368u: goto label_24e368;
        case 0x24e36cu: goto label_24e36c;
        case 0x24e370u: goto label_24e370;
        case 0x24e374u: goto label_24e374;
        case 0x24e378u: goto label_24e378;
        case 0x24e37cu: goto label_24e37c;
        case 0x24e380u: goto label_24e380;
        case 0x24e384u: goto label_24e384;
        case 0x24e388u: goto label_24e388;
        case 0x24e38cu: goto label_24e38c;
        case 0x24e390u: goto label_24e390;
        case 0x24e394u: goto label_24e394;
        case 0x24e398u: goto label_24e398;
        case 0x24e39cu: goto label_24e39c;
        case 0x24e3a0u: goto label_24e3a0;
        case 0x24e3a4u: goto label_24e3a4;
        case 0x24e3a8u: goto label_24e3a8;
        case 0x24e3acu: goto label_24e3ac;
        case 0x24e3b0u: goto label_24e3b0;
        case 0x24e3b4u: goto label_24e3b4;
        case 0x24e3b8u: goto label_24e3b8;
        case 0x24e3bcu: goto label_24e3bc;
        case 0x24e3c0u: goto label_24e3c0;
        case 0x24e3c4u: goto label_24e3c4;
        case 0x24e3c8u: goto label_24e3c8;
        case 0x24e3ccu: goto label_24e3cc;
        case 0x24e3d0u: goto label_24e3d0;
        case 0x24e3d4u: goto label_24e3d4;
        case 0x24e3d8u: goto label_24e3d8;
        case 0x24e3dcu: goto label_24e3dc;
        case 0x24e3e0u: goto label_24e3e0;
        case 0x24e3e4u: goto label_24e3e4;
        case 0x24e3e8u: goto label_24e3e8;
        case 0x24e3ecu: goto label_24e3ec;
        case 0x24e3f0u: goto label_24e3f0;
        case 0x24e3f4u: goto label_24e3f4;
        case 0x24e3f8u: goto label_24e3f8;
        case 0x24e3fcu: goto label_24e3fc;
        case 0x24e400u: goto label_24e400;
        case 0x24e404u: goto label_24e404;
        case 0x24e408u: goto label_24e408;
        case 0x24e40cu: goto label_24e40c;
        case 0x24e410u: goto label_24e410;
        case 0x24e414u: goto label_24e414;
        case 0x24e418u: goto label_24e418;
        case 0x24e41cu: goto label_24e41c;
        case 0x24e420u: goto label_24e420;
        case 0x24e424u: goto label_24e424;
        case 0x24e428u: goto label_24e428;
        case 0x24e42cu: goto label_24e42c;
        case 0x24e430u: goto label_24e430;
        case 0x24e434u: goto label_24e434;
        case 0x24e438u: goto label_24e438;
        case 0x24e43cu: goto label_24e43c;
        case 0x24e440u: goto label_24e440;
        case 0x24e444u: goto label_24e444;
        case 0x24e448u: goto label_24e448;
        case 0x24e44cu: goto label_24e44c;
        case 0x24e450u: goto label_24e450;
        case 0x24e454u: goto label_24e454;
        case 0x24e458u: goto label_24e458;
        case 0x24e45cu: goto label_24e45c;
        default: break;
    }

    ctx->pc = 0x24e0c0u;

label_24e0c0:
    // 0x24e0c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x24e0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_24e0c4:
    // 0x24e0c4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x24e0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_24e0c8:
    // 0x24e0c8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x24e0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_24e0cc:
    // 0x24e0cc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x24e0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_24e0d0:
    // 0x24e0d0: 0x24530dc8  addiu       $s3, $v0, 0xDC8
    ctx->pc = 0x24e0d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 3528));
label_24e0d4:
    // 0x24e0d4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x24e0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_24e0d8:
    // 0x24e0d8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24e0d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24e0dc:
    // 0x24e0dc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24e0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_24e0e0:
    // 0x24e0e0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x24e0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_24e0e4:
    // 0x24e0e4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x24e0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_24e0e8:
    // 0x24e0e8: 0x96440006  lhu         $a0, 0x6($s2)
    ctx->pc = 0x24e0e8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_24e0ec:
    // 0x24e0ec: 0xc08b60c  jal         func_22D830
label_24e0f0:
    if (ctx->pc == 0x24E0F0u) {
        ctx->pc = 0x24E0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E0ECu;
        // 0x24e0f0: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E0F4u;
        goto label_24e0f4;
    }
    ctx->pc = 0x24E0ECu;
    SET_GPR_U32(ctx, 31, 0x24E0F4u);
    ctx->pc = 0x24E0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E0ECu;
    // 0x24e0f0: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x24E0ECu, 0x24E0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E0F4u;
label_24e0f4:
    // 0x24e0f4: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x24e0f4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_24e0f8:
    // 0x24e0f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24e0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24e0fc:
    // 0x24e0fc: 0xc090bf0  jal         func_242FC0
label_24e100:
    if (ctx->pc == 0x24E100u) {
        ctx->pc = 0x24E100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E0FCu;
        // 0x24e100: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E104u;
        goto label_24e104;
    }
    ctx->pc = 0x24E0FCu;
    SET_GPR_U32(ctx, 31, 0x24E104u);
    ctx->pc = 0x24E100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E0FCu;
    // 0x24e100: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242FC0u, 0x24E0FCu, 0x24E104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E104u;
label_24e104:
    // 0x24e104: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24e104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24e108:
    // 0x24e108: 0x12000088  beqz        $s0, . + 4 + (0x88 << 2)
label_24e10c:
    if (ctx->pc == 0x24E10Cu) {
        ctx->pc = 0x24E10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E108u;
        // 0x24e10c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E110u;
        goto label_24e110;
    }
    ctx->pc = 0x24E108u;
    {
        const bool branch_taken_0x24e108 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E108u;
        // 0x24e10c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e108) {
            ctx->pc = 0x24E32Cu;
            goto label_24e32c;
        }
    }
    ctx->pc = 0x24E110u;
label_24e110:
    // 0x24e110: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x24e110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_24e114:
    // 0x24e114: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x24e114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_24e118:
    // 0x24e118: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_24e11c:
    if (ctx->pc == 0x24E11Cu) {
        ctx->pc = 0x24E11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E118u;
        // 0x24e11c: 0x3c140025  lui         $s4, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E120u;
        goto label_24e120;
    }
    ctx->pc = 0x24E118u;
    {
        const bool branch_taken_0x24e118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E118u;
        // 0x24e11c: 0x3c140025  lui         $s4, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e118) {
            ctx->pc = 0x24E1C4u;
            goto label_24e1c4;
        }
    }
    ctx->pc = 0x24E120u;
label_24e120:
    // 0x24e120: 0x8e060030  lw          $a2, 0x30($s0)
    ctx->pc = 0x24e120u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_24e124:
    // 0x24e124: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24e124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24e128:
    // 0x24e128: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24e128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24e12c:
    // 0x24e12c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24e12cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24e130:
    // 0x24e130: 0x24080016  addiu       $t0, $zero, 0x16
    ctx->pc = 0x24e130u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_24e134:
    // 0x24e134: 0xc090d8e  jal         func_243638
label_24e138:
    if (ctx->pc == 0x24E138u) {
        ctx->pc = 0x24E138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E134u;
        // 0x24e138: 0x37a90008  ori         $t1, $sp, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E13Cu;
        goto label_24e13c;
    }
    ctx->pc = 0x24E134u;
    SET_GPR_U32(ctx, 31, 0x24E13Cu);
    ctx->pc = 0x24E138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E134u;
    // 0x24e138: 0x37a90008  ori         $t1, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x243638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243638u, 0x24E134u, 0x24E13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E13Cu;
label_24e13c:
    // 0x24e13c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_24e140:
    if (ctx->pc == 0x24E140u) {
        ctx->pc = 0x24E140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E13Cu;
        // 0x24e140: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E144u;
        goto label_24e144;
    }
    ctx->pc = 0x24E13Cu;
    {
        const bool branch_taken_0x24e13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E13Cu;
        // 0x24e140: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e13c) {
            ctx->pc = 0x24E15Cu;
            goto label_24e15c;
        }
    }
    ctx->pc = 0x24E144u;
label_24e144:
    // 0x24e144: 0xc090c4c  jal         func_243130
label_24e148:
    if (ctx->pc == 0x24E148u) {
        ctx->pc = 0x24E148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E144u;
        // 0x24e148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E14Cu;
        goto label_24e14c;
    }
    ctx->pc = 0x24E144u;
    SET_GPR_U32(ctx, 31, 0x24E14Cu);
    ctx->pc = 0x24E148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E144u;
    // 0x24e148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243130u, 0x24E144u, 0x24E14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E14Cu;
label_24e14c:
    // 0x24e14c: 0xc090c4c  jal         func_243130
label_24e150:
    if (ctx->pc == 0x24E150u) {
        ctx->pc = 0x24E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E14Cu;
        // 0x24e150: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E154u;
        goto label_24e154;
    }
    ctx->pc = 0x24E14Cu;
    SET_GPR_U32(ctx, 31, 0x24E154u);
    ctx->pc = 0x24E150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E14Cu;
    // 0x24e150: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243130u, 0x24E14Cu, 0x24E154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E154u;
label_24e154:
    // 0x24e154: 0x10000075  b           . + 4 + (0x75 << 2)
label_24e158:
    if (ctx->pc == 0x24E158u) {
        ctx->pc = 0x24E158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E154u;
        // 0x24e158: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E15Cu;
        goto label_24e15c;
    }
    ctx->pc = 0x24E154u;
    {
        const bool branch_taken_0x24e154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E154u;
        // 0x24e158: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e154) {
            ctx->pc = 0x24E32Cu;
            goto label_24e32c;
        }
    }
    ctx->pc = 0x24E15Cu;
label_24e15c:
    // 0x24e15c: 0x26030058  addiu       $v1, $s0, 0x58
    ctx->pc = 0x24e15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_24e160:
    // 0x24e160: 0x26040098  addiu       $a0, $s0, 0x98
    ctx->pc = 0x24e160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
label_24e164:
    // 0x24e164: 0x3c140025  lui         $s4, 0x25
    ctx->pc = 0x24e164u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)37 << 16));
label_24e168:
    // 0x24e168: 0x24420058  addiu       $v0, $v0, 0x58
    ctx->pc = 0x24e168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_24e16c:
    // 0x24e16c: 0x3c13003a  lui         $s3, 0x3A
    ctx->pc = 0x24e16cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)58 << 16));
label_24e170:
    // 0x24e170: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x24e170u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_24e174:
    // 0x24e174: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x24e174u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_24e178:
    // 0x24e178: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x24e178u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_24e17c:
    // 0x24e17c: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x24e17cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
label_24e180:
    // 0x24e180: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x24e180u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
label_24e184:
    // 0x24e184: 0xfc460008  sd          $a2, 0x8($v0)
    ctx->pc = 0x24e184u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
label_24e188:
    // 0x24e188: 0xfc470010  sd          $a3, 0x10($v0)
    ctx->pc = 0x24e188u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 7));
label_24e18c:
    // 0x24e18c: 0xfc480018  sd          $t0, 0x18($v0)
    ctx->pc = 0x24e18cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 8));
label_24e190:
    // 0x24e190: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x24e190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_24e194:
    // 0x24e194: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x24e194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_24e198:
    // 0x24e198: 0x0  nop
    ctx->pc = 0x24e198u;
    // NOP
label_24e19c:
    // 0x24e19c: 0x1464fff4  bne         $v1, $a0, . + 4 + (-0xC << 2)
label_24e1a0:
    if (ctx->pc == 0x24E1A0u) {
        ctx->pc = 0x24E1A4u;
        goto label_24e1a4;
    }
    ctx->pc = 0x24E19Cu;
    {
        const bool branch_taken_0x24e19c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x24e19c) {
            ctx->pc = 0x24E170u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24e170;
        }
    }
    ctx->pc = 0x24E1A4u;
label_24e1a4:
    // 0x24e1a4: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x24e1a4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_24e1a8:
    // 0x24e1a8: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x24e1a8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_24e1ac:
    // 0x24e1ac: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x24e1acu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
label_24e1b0:
    // 0x24e1b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24e1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24e1b4:
    // 0x24e1b4: 0xc090c4c  jal         func_243130
label_24e1b8:
    if (ctx->pc == 0x24E1B8u) {
        ctx->pc = 0x24E1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E1B4u;
        // 0x24e1b8: 0xfc460008  sd          $a2, 0x8($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E1BCu;
        goto label_24e1bc;
    }
    ctx->pc = 0x24E1B4u;
    SET_GPR_U32(ctx, 31, 0x24E1BCu);
    ctx->pc = 0x24E1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E1B4u;
    // 0x24e1b8: 0xfc460008  sd          $a2, 0x8($v0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243130u, 0x24E1B4u, 0x24E1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E1BCu;
label_24e1bc:
    // 0x24e1bc: 0x10000002  b           . + 4 + (0x2 << 2)
label_24e1c0:
    if (ctx->pc == 0x24E1C0u) {
        ctx->pc = 0x24E1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E1BCu;
        // 0x24e1c0: 0x8fb00008  lw          $s0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E1C4u;
        goto label_24e1c4;
    }
    ctx->pc = 0x24E1BCu;
    {
        const bool branch_taken_0x24e1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E1BCu;
        // 0x24e1c0: 0x8fb00008  lw          $s0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e1bc) {
            ctx->pc = 0x24E1C8u;
            goto label_24e1c8;
        }
    }
    ctx->pc = 0x24E1C4u;
label_24e1c4:
    // 0x24e1c4: 0x3c13003a  lui         $s3, 0x3A
    ctx->pc = 0x24e1c4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)58 << 16));
label_24e1c8:
    // 0x24e1c8: 0x8e661028  lw          $a2, 0x1028($s3)
    ctx->pc = 0x24e1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4136)));
label_24e1cc:
    // 0x24e1cc: 0x2685e3e8  addiu       $a1, $s4, -0x1C18
    ctx->pc = 0x24e1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294960104));
label_24e1d0:
    // 0x24e1d0: 0xc0910a8  jal         func_2442A0
label_24e1d4:
    if (ctx->pc == 0x24E1D4u) {
        ctx->pc = 0x24E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E1D0u;
        // 0x24e1d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E1D8u;
        goto label_24e1d8;
    }
    ctx->pc = 0x24E1D0u;
    SET_GPR_U32(ctx, 31, 0x24E1D8u);
    ctx->pc = 0x24E1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E1D0u;
    // 0x24e1d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2442A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2442A0u, 0x24E1D0u, 0x24E1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E1D8u;
label_24e1d8:
    // 0x24e1d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_24e1dc:
    if (ctx->pc == 0x24E1DCu) {
        ctx->pc = 0x24E1E0u;
        goto label_24e1e0;
    }
    ctx->pc = 0x24E1D8u;
    {
        const bool branch_taken_0x24e1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e1d8) {
            ctx->pc = 0x24E1F0u;
            goto label_24e1f0;
        }
    }
    ctx->pc = 0x24E1E0u;
label_24e1e0:
    // 0x24e1e0: 0xc090c4c  jal         func_243130
label_24e1e4:
    if (ctx->pc == 0x24E1E4u) {
        ctx->pc = 0x24E1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E1E0u;
        // 0x24e1e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E1E8u;
        goto label_24e1e8;
    }
    ctx->pc = 0x24E1E0u;
    SET_GPR_U32(ctx, 31, 0x24E1E8u);
    ctx->pc = 0x24E1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E1E0u;
    // 0x24e1e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243130u, 0x24E1E0u, 0x24E1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E1E8u;
label_24e1e8:
    // 0x24e1e8: 0x10000050  b           . + 4 + (0x50 << 2)
label_24e1ec:
    if (ctx->pc == 0x24E1ECu) {
        ctx->pc = 0x24E1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E1E8u;
        // 0x24e1ec: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E1F0u;
        goto label_24e1f0;
    }
    ctx->pc = 0x24E1E8u;
    {
        const bool branch_taken_0x24e1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E1E8u;
        // 0x24e1ec: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e1e8) {
            ctx->pc = 0x24E32Cu;
            goto label_24e32c;
        }
    }
    ctx->pc = 0x24E1F0u;
label_24e1f0:
    // 0x24e1f0: 0x5620002a  bnel        $s1, $zero, . + 4 + (0x2A << 2)
label_24e1f4:
    if (ctx->pc == 0x24E1F4u) {
        ctx->pc = 0x24E1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E1F0u;
        // 0x24e1f4: 0xde050058  ld          $a1, 0x58($s0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E1F8u;
        goto label_24e1f8;
    }
    ctx->pc = 0x24E1F0u;
    {
        const bool branch_taken_0x24e1f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e1f0) {
            ctx->pc = 0x24E1F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E1F0u;
            // 0x24e1f4: 0xde050058  ld          $a1, 0x58($s0) (Delay Slot)
            SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E29Cu;
            goto label_24e29c;
        }
    }
    ctx->pc = 0x24E1F8u;
label_24e1f8:
    // 0x24e1f8: 0x9651000a  lhu         $s1, 0xA($s2)
    ctx->pc = 0x24e1f8u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
label_24e1fc:
    // 0x24e1fc: 0xde030060  ld          $v1, 0x60($s0)
    ctx->pc = 0x24e1fcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 96)));
label_24e200:
    // 0x24e200: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x24e200u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_24e204:
    // 0x24e204: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_24e208:
    if (ctx->pc == 0x24E208u) {
        ctx->pc = 0x24E20Cu;
        goto label_24e20c;
    }
    ctx->pc = 0x24E204u;
    {
        const bool branch_taken_0x24e204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e204) {
            ctx->pc = 0x24E224u;
            goto label_24e224;
        }
    }
    ctx->pc = 0x24E20Cu;
label_24e20c:
    // 0x24e20c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_24e210:
    if (ctx->pc == 0x24E210u) {
        ctx->pc = 0x24E214u;
        goto label_24e214;
    }
    ctx->pc = 0x24E20Cu;
    {
        const bool branch_taken_0x24e20c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e20c) {
            ctx->pc = 0x24E224u;
            goto label_24e224;
        }
    }
    ctx->pc = 0x24E214u;
label_24e214:
    // 0x24e214: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x24e214u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
label_24e218:
    // 0x24e218: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x24e218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_24e21c:
    // 0x24e21c: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x24e21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
label_24e220:
    // 0x24e220: 0x222882f  dsubu       $s1, $s1, $v0
    ctx->pc = 0x24e220u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) - GPR_U64(ctx, 2));
label_24e224:
    // 0x24e224: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
label_24e228:
    if (ctx->pc == 0x24E228u) {
        ctx->pc = 0x24E228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E224u;
        // 0x24e228: 0x3c06003a  lui         $a2, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E22Cu;
        goto label_24e22c;
    }
    ctx->pc = 0x24E224u;
    {
        const bool branch_taken_0x24e224 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E224u;
        // 0x24e228: 0x3c06003a  lui         $a2, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e224) {
            ctx->pc = 0x24E244u;
            goto label_24e244;
        }
    }
    ctx->pc = 0x24E22Cu;
label_24e22c:
    // 0x24e22c: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x24e22cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_24e230:
    // 0x24e230: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
label_24e234:
    if (ctx->pc == 0x24E234u) {
        ctx->pc = 0x24E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E230u;
        // 0x24e234: 0xdcc30df8  ld          $v1, 0xDF8($a2) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 3576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E238u;
        goto label_24e238;
    }
    ctx->pc = 0x24E230u;
    {
        const bool branch_taken_0x24e230 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E230u;
        // 0x24e234: 0xdcc30df8  ld          $v1, 0xDF8($a2) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 3576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e230) {
            ctx->pc = 0x24E248u;
            goto label_24e248;
        }
    }
    ctx->pc = 0x24E238u;
label_24e238:
    // 0x24e238: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x24e238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_24e23c:
    // 0x24e23c: 0xdc510040  ld          $s1, 0x40($v0)
    ctx->pc = 0x24e23cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 2), 64)));
label_24e240:
    // 0x24e240: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x24e240u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
label_24e244:
    // 0x24e244: 0xdcc30df8  ld          $v1, 0xDF8($a2)
    ctx->pc = 0x24e244u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 3576)));
label_24e248:
    // 0x24e248: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x24e248u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_24e24c:
    // 0x24e24c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_24e250:
    if (ctx->pc == 0x24E250u) {
        ctx->pc = 0x24E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E24Cu;
        // 0x24e250: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E254u;
        goto label_24e254;
    }
    ctx->pc = 0x24E24Cu;
    {
        const bool branch_taken_0x24e24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E24Cu;
        // 0x24e250: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e24c) {
            ctx->pc = 0x24E260u;
            goto label_24e260;
        }
    }
    ctx->pc = 0x24E254u;
label_24e254:
    // 0x24e254: 0x10000010  b           . + 4 + (0x10 << 2)
label_24e258:
    if (ctx->pc == 0x24E258u) {
        ctx->pc = 0x24E258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E254u;
        // 0x24e258: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E25Cu;
        goto label_24e25c;
    }
    ctx->pc = 0x24E254u;
    {
        const bool branch_taken_0x24e254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E254u;
        // 0x24e258: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e254) {
            ctx->pc = 0x24E298u;
            goto label_24e298;
        }
    }
    ctx->pc = 0x24E25Cu;
label_24e25c:
    // 0x24e25c: 0x0  nop
    ctx->pc = 0x24e25cu;
    // NOP
label_24e260:
    // 0x24e260: 0xde050058  ld          $a1, 0x58($s0)
    ctx->pc = 0x24e260u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 88)));
label_24e264:
    // 0x24e264: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x24e264u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
label_24e268:
    // 0x24e268: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x24e268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_24e26c:
    // 0x24e26c: 0x2c82000e  sltiu       $v0, $a0, 0xE
    ctx->pc = 0x24e26cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
label_24e270:
    // 0x24e270: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_24e274:
    if (ctx->pc == 0x24E274u) {
        ctx->pc = 0x24E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E270u;
        // 0x24e274: 0x24c20df8  addiu       $v0, $a2, 0xDF8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 3576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E278u;
        goto label_24e278;
    }
    ctx->pc = 0x24E270u;
    {
        const bool branch_taken_0x24e270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E270u;
        // 0x24e274: 0x24c20df8  addiu       $v0, $a2, 0xDF8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 3576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e270) {
            ctx->pc = 0x24E2A0u;
            goto label_24e2a0;
        }
    }
    ctx->pc = 0x24E278u;
label_24e278:
    // 0x24e278: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x24e278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_24e27c:
    // 0x24e27c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24e27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24e280:
    // 0x24e280: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x24e280u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_24e284:
    // 0x24e284: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x24e284u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_24e288:
    // 0x24e288: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
label_24e28c:
    if (ctx->pc == 0x24E28Cu) {
        ctx->pc = 0x24E28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E288u;
        // 0x24e28c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E290u;
        goto label_24e290;
    }
    ctx->pc = 0x24E288u;
    {
        const bool branch_taken_0x24e288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E288u;
        // 0x24e28c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e288) {
            ctx->pc = 0x24E26Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24e26c;
        }
    }
    ctx->pc = 0x24E290u;
label_24e290:
    // 0x24e290: 0x10000003  b           . + 4 + (0x3 << 2)
label_24e294:
    if (ctx->pc == 0x24E294u) {
        ctx->pc = 0x24E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E290u;
        // 0x24e294: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E298u;
        goto label_24e298;
    }
    ctx->pc = 0x24E290u;
    {
        const bool branch_taken_0x24e290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E290u;
        // 0x24e294: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e290) {
            ctx->pc = 0x24E2A0u;
            goto label_24e2a0;
        }
    }
    ctx->pc = 0x24E298u;
label_24e298:
    // 0x24e298: 0xde050058  ld          $a1, 0x58($s0)
    ctx->pc = 0x24e298u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 88)));
label_24e29c:
    // 0x24e29c: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x24e29cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
label_24e2a0:
    // 0x24e2a0: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x24e2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_24e2a4:
    // 0x24e2a4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_24e2a8:
    if (ctx->pc == 0x24E2A8u) {
        ctx->pc = 0x24E2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E2A4u;
        // 0x24e2a8: 0x2e220128  sltiu       $v0, $s1, 0x128 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)296) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E2ACu;
        goto label_24e2ac;
    }
    ctx->pc = 0x24E2A4u;
    {
        const bool branch_taken_0x24e2a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E2A4u;
        // 0x24e2a8: 0x2e220128  sltiu       $v0, $s1, 0x128 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)296) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e2a4) {
            ctx->pc = 0x24E2ECu;
            goto label_24e2ec;
        }
    }
    ctx->pc = 0x24E2ACu;
label_24e2ac:
    // 0x24e2ac: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_24e2b0:
    if (ctx->pc == 0x24E2B0u) {
        ctx->pc = 0x24E2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E2ACu;
        // 0x24e2b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E2B4u;
        goto label_24e2b4;
    }
    ctx->pc = 0x24E2ACu;
    {
        const bool branch_taken_0x24e2ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E2ACu;
        // 0x24e2b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e2ac) {
            ctx->pc = 0x24E2C8u;
            goto label_24e2c8;
        }
    }
    ctx->pc = 0x24E2B4u;
label_24e2b4:
    // 0x24e2b4: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x24e2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_24e2b8:
    // 0x24e2b8: 0xdc620040  ld          $v0, 0x40($v1)
    ctx->pc = 0x24e2b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 64)));
label_24e2bc:
    // 0x24e2bc: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x24e2bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_24e2c0:
    // 0x24e2c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_24e2c4:
    if (ctx->pc == 0x24E2C4u) {
        ctx->pc = 0x24E2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E2C0u;
        // 0x24e2c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E2C8u;
        goto label_24e2c8;
    }
    ctx->pc = 0x24E2C0u;
    {
        const bool branch_taken_0x24e2c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E2C0u;
        // 0x24e2c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e2c0) {
            ctx->pc = 0x24E2D4u;
            goto label_24e2d4;
        }
    }
    ctx->pc = 0x24E2C8u;
label_24e2c8:
    // 0x24e2c8: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x24e2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_24e2cc:
    // 0x24e2cc: 0x10000007  b           . + 4 + (0x7 << 2)
label_24e2d0:
    if (ctx->pc == 0x24E2D0u) {
        ctx->pc = 0x24E2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E2CCu;
        // 0x24e2d0: 0xfe020058  sd          $v0, 0x58($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E2D4u;
        goto label_24e2d4;
    }
    ctx->pc = 0x24E2CCu;
    {
        const bool branch_taken_0x24e2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E2CCu;
        // 0x24e2d0: 0xfe020058  sd          $v0, 0x58($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e2cc) {
            ctx->pc = 0x24E2ECu;
            goto label_24e2ec;
        }
    }
    ctx->pc = 0x24E2D4u;
label_24e2d4:
    // 0x24e2d4: 0xde030060  ld          $v1, 0x60($s0)
    ctx->pc = 0x24e2d4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 96)));
label_24e2d8:
    // 0x24e2d8: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x24e2d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_24e2dc:
    // 0x24e2dc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_24e2e0:
    if (ctx->pc == 0x24E2E0u) {
        ctx->pc = 0x24E2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E2DCu;
        // 0x24e2e0: 0xfe110060  sd          $s1, 0x60($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E2E4u;
        goto label_24e2e4;
    }
    ctx->pc = 0x24E2DCu;
    {
        const bool branch_taken_0x24e2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e2dc) {
            ctx->pc = 0x24E2E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E2DCu;
            // 0x24e2e0: 0xfe110060  sd          $s1, 0x60($s0) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E2ECu;
            goto label_24e2ec;
        }
    }
    ctx->pc = 0x24E2E4u;
label_24e2e4:
    // 0x24e2e4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_24e2e8:
    if (ctx->pc == 0x24E2E8u) {
        ctx->pc = 0x24E2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E2E4u;
        // 0x24e2e8: 0xfe110060  sd          $s1, 0x60($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E2ECu;
        goto label_24e2ec;
    }
    ctx->pc = 0x24E2E4u;
    {
        const bool branch_taken_0x24e2e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e2e4) {
            ctx->pc = 0x24E2E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E2E4u;
            // 0x24e2e8: 0xfe110060  sd          $s1, 0x60($s0) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E2ECu;
            goto label_24e2ec;
        }
    }
    ctx->pc = 0x24E2ECu;
label_24e2ec:
    // 0x24e2ec: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
label_24e2f0:
    if (ctx->pc == 0x24E2F0u) {
        ctx->pc = 0x24E2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E2ECu;
        // 0x24e2f0: 0x8e500dc0  lw          $s0, 0xDC0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3520)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E2F4u;
        goto label_24e2f4;
    }
    ctx->pc = 0x24E2ECu;
    {
        const bool branch_taken_0x24e2ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e2ec) {
            ctx->pc = 0x24E2F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E2ECu;
            // 0x24e2f0: 0x8e500dc0  lw          $s0, 0xDC0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E300u;
            goto label_24e300;
        }
    }
    ctx->pc = 0x24E2F4u;
label_24e2f4:
    // 0x24e2f4: 0xc090c4c  jal         func_243130
label_24e2f8:
    if (ctx->pc == 0x24E2F8u) {
        ctx->pc = 0x24E2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E2F4u;
        // 0x24e2f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E2FCu;
        goto label_24e2fc;
    }
    ctx->pc = 0x24E2F4u;
    SET_GPR_U32(ctx, 31, 0x24E2FCu);
    ctx->pc = 0x24E2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E2F4u;
    // 0x24e2f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243130u, 0x24E2F4u, 0x24E2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E2FCu;
label_24e2fc:
    // 0x24e2fc: 0x8e500dc0  lw          $s0, 0xDC0($s2)
    ctx->pc = 0x24e2fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3520)));
label_24e300:
    // 0x24e300: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_24e304:
    if (ctx->pc == 0x24E304u) {
        ctx->pc = 0x24E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E300u;
        // 0x24e304: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E308u;
        goto label_24e308;
    }
    ctx->pc = 0x24E300u;
    {
        const bool branch_taken_0x24e300 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E300u;
        // 0x24e304: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e300) {
            ctx->pc = 0x24E32Cu;
            goto label_24e32c;
        }
    }
    ctx->pc = 0x24E308u;
label_24e308:
    // 0x24e308: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x24e308u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
label_24e30c:
    // 0x24e30c: 0x11883e  dsrl32      $s1, $s1, 0
    ctx->pc = 0x24e30cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 0));
label_24e310:
    // 0x24e310: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x24e310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_24e314:
    // 0x24e314: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x24e314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_24e318:
    // 0x24e318: 0x40f809  jalr        $v0
label_24e31c:
    if (ctx->pc == 0x24E31Cu) {
        ctx->pc = 0x24E31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E318u;
        // 0x24e31c: 0x912024  and         $a0, $a0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E320u;
        goto label_24e320;
    }
    ctx->pc = 0x24E318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24E320u);
        ctx->pc = 0x24E31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E318u;
        // 0x24e31c: 0x912024  and         $a0, $a0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E318u, 0x24E320u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24E320u;
label_24e320:
    // 0x24e320: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x24e320u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24e324:
    // 0x24e324: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
label_24e328:
    if (ctx->pc == 0x24E328u) {
        ctx->pc = 0x24E328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E324u;
        // 0x24e328: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E32Cu;
        goto label_24e32c;
    }
    ctx->pc = 0x24E324u;
    {
        const bool branch_taken_0x24e324 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E324u;
        // 0x24e328: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e324) {
            ctx->pc = 0x24E310u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24e310;
        }
    }
    ctx->pc = 0x24E32Cu;
label_24e32c:
    // 0x24e32c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x24e32cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_24e330:
    // 0x24e330: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x24e330u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_24e334:
    // 0x24e334: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x24e334u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_24e338:
    // 0x24e338: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x24e338u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24e33c:
    // 0x24e33c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24e33cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24e340:
    // 0x24e340: 0x3e00008  jr          $ra
label_24e344:
    if (ctx->pc == 0x24E344u) {
        ctx->pc = 0x24E344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E340u;
        // 0x24e344: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E348u;
        goto label_24e348;
    }
    ctx->pc = 0x24E340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E340u;
        // 0x24e344: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E348u;
label_24e348:
    // 0x24e348: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x24e348u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
label_24e34c:
    // 0x24e34c: 0x8ce20e68  lw          $v0, 0xE68($a3)
    ctx->pc = 0x24e34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3688)));
label_24e350:
    // 0x24e350: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x24e350u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_24e354:
    // 0x24e354: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_24e358:
    if (ctx->pc == 0x24E358u) {
        ctx->pc = 0x24E358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E354u;
        // 0x24e358: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E35Cu;
        goto label_24e35c;
    }
    ctx->pc = 0x24E354u;
    {
        const bool branch_taken_0x24e354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E354u;
        // 0x24e358: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e354) {
            ctx->pc = 0x24E384u;
            goto label_24e384;
        }
    }
    ctx->pc = 0x24E35Cu;
label_24e35c:
    // 0x24e35c: 0x24e60e68  addiu       $a2, $a3, 0xE68
    ctx->pc = 0x24e35cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 3688));
label_24e360:
    // 0x24e360: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24e360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_24e364:
    // 0x24e364: 0x0  nop
    ctx->pc = 0x24e364u;
    // NOP
label_24e368:
    // 0x24e368: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x24e368u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_24e36c:
    // 0x24e36c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_24e370:
    if (ctx->pc == 0x24E370u) {
        ctx->pc = 0x24E370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E36Cu;
        // 0x24e370: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E374u;
        goto label_24e374;
    }
    ctx->pc = 0x24E36Cu;
    {
        const bool branch_taken_0x24e36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E36Cu;
        // 0x24e370: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e36c) {
            ctx->pc = 0x24E384u;
            goto label_24e384;
        }
    }
    ctx->pc = 0x24E374u;
label_24e374:
    // 0x24e374: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x24e374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_24e378:
    // 0x24e378: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x24e378u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_24e37c:
    // 0x24e37c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_24e380:
    if (ctx->pc == 0x24E380u) {
        ctx->pc = 0x24E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E37Cu;
        // 0x24e380: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E384u;
        goto label_24e384;
    }
    ctx->pc = 0x24E37Cu;
    {
        const bool branch_taken_0x24e37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e37c) {
            ctx->pc = 0x24E380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E37Cu;
            // 0x24e380: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E368u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24e368;
        }
    }
    ctx->pc = 0x24E384u;
label_24e384:
    // 0x24e384: 0x4a30008  bgezl       $a1, . + 4 + (0x8 << 2)
label_24e388:
    if (ctx->pc == 0x24E388u) {
        ctx->pc = 0x24E388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E384u;
        // 0x24e388: 0x24e60e68  addiu       $a2, $a3, 0xE68 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 3688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E38Cu;
        goto label_24e38c;
    }
    ctx->pc = 0x24E384u;
    {
        const bool branch_taken_0x24e384 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x24e384) {
            ctx->pc = 0x24E388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E384u;
            // 0x24e388: 0x24e60e68  addiu       $a2, $a3, 0xE68 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 3688));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E3A8u;
            goto label_24e3a8;
        }
    }
    ctx->pc = 0x24E38Cu;
label_24e38c:
    // 0x24e38c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_24e390:
    if (ctx->pc == 0x24E390u) {
        ctx->pc = 0x24E390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E38Cu;
        // 0x24e390: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E394u;
        goto label_24e394;
    }
    ctx->pc = 0x24E38Cu;
    {
        const bool branch_taken_0x24e38c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E38Cu;
        // 0x24e390: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e38c) {
            ctx->pc = 0x24E3BCu;
            goto label_24e3bc;
        }
    }
    ctx->pc = 0x24E394u;
label_24e394:
    // 0x24e394: 0x24e20e68  addiu       $v0, $a3, 0xE68
    ctx->pc = 0x24e394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 3688));
label_24e398:
    // 0x24e398: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24e398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_24e39c:
    // 0x24e39c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24e39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24e3a0:
    // 0x24e3a0: 0x3e00008  jr          $ra
label_24e3a4:
    if (ctx->pc == 0x24E3A4u) {
        ctx->pc = 0x24E3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E3A0u;
        // 0x24e3a4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E3A8u;
        goto label_24e3a8;
    }
    ctx->pc = 0x24E3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E3A0u;
        // 0x24e3a4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E3A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E3A8u;
label_24e3a8:
    // 0x24e3a8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x24e3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_24e3ac:
    // 0x24e3ac: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x24e3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_24e3b0:
    // 0x24e3b0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x24e3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24e3b4:
    // 0x24e3b4: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_24e3b8:
    if (ctx->pc == 0x24E3B8u) {
        ctx->pc = 0x24E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E3B4u;
        // 0x24e3b8: 0xa4102a  slt         $v0, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E3BCu;
        goto label_24e3bc;
    }
    ctx->pc = 0x24E3B4u;
    {
        const bool branch_taken_0x24e3b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E3B4u;
        // 0x24e3b8: 0xa4102a  slt         $v0, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e3b4) {
            ctx->pc = 0x24E3C4u;
            goto label_24e3c4;
        }
    }
    ctx->pc = 0x24E3BCu;
label_24e3bc:
    // 0x24e3bc: 0x3e00008  jr          $ra
label_24e3c0:
    if (ctx->pc == 0x24E3C0u) {
        ctx->pc = 0x24E3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E3BCu;
        // 0x24e3c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E3C4u;
        goto label_24e3c4;
    }
    ctx->pc = 0x24E3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E3BCu;
        // 0x24e3c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E3BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E3C4u;
label_24e3c4:
    // 0x24e3c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_24e3c8:
    if (ctx->pc == 0x24E3C8u) {
        ctx->pc = 0x24E3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E3C4u;
        // 0x24e3c8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E3CCu;
        goto label_24e3cc;
    }
    ctx->pc = 0x24E3C4u;
    {
        const bool branch_taken_0x24e3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E3C4u;
        // 0x24e3c8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e3c4) {
            ctx->pc = 0x24E3D4u;
            goto label_24e3d4;
        }
    }
    ctx->pc = 0x24E3CCu;
label_24e3cc:
    // 0x24e3cc: 0x3e00008  jr          $ra
label_24e3d0:
    if (ctx->pc == 0x24E3D0u) {
        ctx->pc = 0x24E3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E3CCu;
        // 0x24e3d0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E3D4u;
        goto label_24e3d4;
    }
    ctx->pc = 0x24E3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E3CCu;
        // 0x24e3d0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E3CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E3D4u;
label_24e3d4:
    // 0x24e3d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24e3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_24e3d8:
    // 0x24e3d8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x24e3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_24e3dc:
    // 0x24e3dc: 0x3e00008  jr          $ra
label_24e3e0:
    if (ctx->pc == 0x24E3E0u) {
        ctx->pc = 0x24E3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E3DCu;
        // 0x24e3e0: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E3E4u;
        goto label_24e3e4;
    }
    ctx->pc = 0x24E3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E3DCu;
        // 0x24e3e0: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E3DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E3E4u;
label_24e3e4:
    // 0x24e3e4: 0x0  nop
    ctx->pc = 0x24e3e4u;
    // NOP
label_24e3e8:
    // 0x24e3e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24e3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_24e3ec:
    // 0x24e3ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24e3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_24e3f0:
    // 0x24e3f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24e3f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24e3f4:
    // 0x24e3f4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_24e3f8:
    if (ctx->pc == 0x24E3F8u) {
        ctx->pc = 0x24E3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E3F4u;
        // 0x24e3f8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E3FCu;
        goto label_24e3fc;
    }
    ctx->pc = 0x24E3F4u;
    {
        const bool branch_taken_0x24e3f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E3F4u;
        // 0x24e3f8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e3f4) {
            ctx->pc = 0x24E408u;
            goto label_24e408;
        }
    }
    ctx->pc = 0x24E3FCu;
label_24e3fc:
    // 0x24e3fc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x24e3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_24e400:
    // 0x24e400: 0xc08b5e0  jal         func_22D780
label_24e404:
    if (ctx->pc == 0x24E404u) {
        ctx->pc = 0x24E404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E400u;
        // 0x24e404: 0x24846c48  addiu       $a0, $a0, 0x6C48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E408u;
        goto label_24e408;
    }
    ctx->pc = 0x24E400u;
    SET_GPR_U32(ctx, 31, 0x24E408u);
    ctx->pc = 0x24E404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E400u;
    // 0x24e404: 0x24846c48  addiu       $a0, $a0, 0x6C48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D780u, 0x24E400u, 0x24E408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E408u;
label_24e408:
    // 0x24e408: 0x8e080034  lw          $t0, 0x34($s0)
    ctx->pc = 0x24e408u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_24e40c:
    // 0x24e40c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x24e40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_24e410:
    // 0x24e410: 0x31020014  andi        $v0, $t0, 0x14
    ctx->pc = 0x24e410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)20);
label_24e414:
    // 0x24e414: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
label_24e418:
    if (ctx->pc == 0x24E418u) {
        ctx->pc = 0x24E418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E414u;
        // 0x24e418: 0xde020058  ld          $v0, 0x58($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E41Cu;
        goto label_24e41c;
    }
    ctx->pc = 0x24E414u;
    {
        const bool branch_taken_0x24e414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x24e414) {
            ctx->pc = 0x24E418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E414u;
            // 0x24e418: 0xde020058  ld          $v0, 0x58($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E440u;
            goto label_24e440;
        }
    }
    ctx->pc = 0x24E41Cu;
label_24e41c:
    // 0x24e41c: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x24e41cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_24e420:
    // 0x24e420: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x24e420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24e424:
    // 0x24e424: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x24e424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_24e428:
    // 0x24e428: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24e428u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24e42c:
    // 0x24e42c: 0x8e060030  lw          $a2, 0x30($s0)
    ctx->pc = 0x24e42cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_24e430:
    // 0x24e430: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24e430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24e434:
    // 0x24e434: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24e434u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24e438:
    // 0x24e438: 0x8090d8e  j           func_243638
label_24e43c:
    if (ctx->pc == 0x24E43Cu) {
        ctx->pc = 0x24E43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E438u;
        // 0x24e43c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E440u;
        goto label_24e440;
    }
    ctx->pc = 0x24E438u;
    ctx->pc = 0x24E43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E438u;
    // 0x24e43c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243638u;
    sub_00243638_0x243638(rdram, ctx, runtime); return;
    ctx->pc = 0x24E440u;
label_24e440:
    // 0x24e440: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24e440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_24e444:
    // 0x24e444: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_24e448:
    if (ctx->pc == 0x24E448u) {
        ctx->pc = 0x24E448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E444u;
        // 0x24e448: 0xfe000060  sd          $zero, 0x60($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E44Cu;
        goto label_24e44c;
    }
    ctx->pc = 0x24E444u;
    {
        const bool branch_taken_0x24e444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e444) {
            ctx->pc = 0x24E448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E444u;
            // 0x24e448: 0xfe000060  sd          $zero, 0x60($s0) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E44Cu;
            goto label_24e44c;
        }
    }
    ctx->pc = 0x24E44Cu;
label_24e44c:
    // 0x24e44c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24e44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24e450:
    // 0x24e450: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24e450u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24e454:
    // 0x24e454: 0x3e00008  jr          $ra
label_24e458:
    if (ctx->pc == 0x24E458u) {
        ctx->pc = 0x24E458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E454u;
        // 0x24e458: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24E45Cu;
        goto label_24e45c;
    }
    ctx->pc = 0x24E454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24E458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E454u;
        // 0x24e458: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24E454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24E45Cu;
label_24e45c:
    // 0x24e45c: 0x0  nop
    ctx->pc = 0x24e45cu;
    // NOP
}
