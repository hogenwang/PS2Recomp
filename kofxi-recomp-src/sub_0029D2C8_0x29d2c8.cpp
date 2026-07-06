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

// Function: sub_0029D2C8
// Address: 0x29d2c8 - 0x29d570
void sub_0029D2C8_0x29d2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D2C8_0x29d2c8");
#endif

    switch (ctx->pc) {
        case 0x29d2c8u: goto label_29d2c8;
        case 0x29d2ccu: goto label_29d2cc;
        case 0x29d2d0u: goto label_29d2d0;
        case 0x29d2d4u: goto label_29d2d4;
        case 0x29d2d8u: goto label_29d2d8;
        case 0x29d2dcu: goto label_29d2dc;
        case 0x29d2e0u: goto label_29d2e0;
        case 0x29d2e4u: goto label_29d2e4;
        case 0x29d2e8u: goto label_29d2e8;
        case 0x29d2ecu: goto label_29d2ec;
        case 0x29d2f0u: goto label_29d2f0;
        case 0x29d2f4u: goto label_29d2f4;
        case 0x29d2f8u: goto label_29d2f8;
        case 0x29d2fcu: goto label_29d2fc;
        case 0x29d300u: goto label_29d300;
        case 0x29d304u: goto label_29d304;
        case 0x29d308u: goto label_29d308;
        case 0x29d30cu: goto label_29d30c;
        case 0x29d310u: goto label_29d310;
        case 0x29d314u: goto label_29d314;
        case 0x29d318u: goto label_29d318;
        case 0x29d31cu: goto label_29d31c;
        case 0x29d320u: goto label_29d320;
        case 0x29d324u: goto label_29d324;
        case 0x29d328u: goto label_29d328;
        case 0x29d32cu: goto label_29d32c;
        case 0x29d330u: goto label_29d330;
        case 0x29d334u: goto label_29d334;
        case 0x29d338u: goto label_29d338;
        case 0x29d33cu: goto label_29d33c;
        case 0x29d340u: goto label_29d340;
        case 0x29d344u: goto label_29d344;
        case 0x29d348u: goto label_29d348;
        case 0x29d34cu: goto label_29d34c;
        case 0x29d350u: goto label_29d350;
        case 0x29d354u: goto label_29d354;
        case 0x29d358u: goto label_29d358;
        case 0x29d35cu: goto label_29d35c;
        case 0x29d360u: goto label_29d360;
        case 0x29d364u: goto label_29d364;
        case 0x29d368u: goto label_29d368;
        case 0x29d36cu: goto label_29d36c;
        case 0x29d370u: goto label_29d370;
        case 0x29d374u: goto label_29d374;
        case 0x29d378u: goto label_29d378;
        case 0x29d37cu: goto label_29d37c;
        case 0x29d380u: goto label_29d380;
        case 0x29d384u: goto label_29d384;
        case 0x29d388u: goto label_29d388;
        case 0x29d38cu: goto label_29d38c;
        case 0x29d390u: goto label_29d390;
        case 0x29d394u: goto label_29d394;
        case 0x29d398u: goto label_29d398;
        case 0x29d39cu: goto label_29d39c;
        case 0x29d3a0u: goto label_29d3a0;
        case 0x29d3a4u: goto label_29d3a4;
        case 0x29d3a8u: goto label_29d3a8;
        case 0x29d3acu: goto label_29d3ac;
        case 0x29d3b0u: goto label_29d3b0;
        case 0x29d3b4u: goto label_29d3b4;
        case 0x29d3b8u: goto label_29d3b8;
        case 0x29d3bcu: goto label_29d3bc;
        case 0x29d3c0u: goto label_29d3c0;
        case 0x29d3c4u: goto label_29d3c4;
        case 0x29d3c8u: goto label_29d3c8;
        case 0x29d3ccu: goto label_29d3cc;
        case 0x29d3d0u: goto label_29d3d0;
        case 0x29d3d4u: goto label_29d3d4;
        case 0x29d3d8u: goto label_29d3d8;
        case 0x29d3dcu: goto label_29d3dc;
        case 0x29d3e0u: goto label_29d3e0;
        case 0x29d3e4u: goto label_29d3e4;
        case 0x29d3e8u: goto label_29d3e8;
        case 0x29d3ecu: goto label_29d3ec;
        case 0x29d3f0u: goto label_29d3f0;
        case 0x29d3f4u: goto label_29d3f4;
        case 0x29d3f8u: goto label_29d3f8;
        case 0x29d3fcu: goto label_29d3fc;
        case 0x29d400u: goto label_29d400;
        case 0x29d404u: goto label_29d404;
        case 0x29d408u: goto label_29d408;
        case 0x29d40cu: goto label_29d40c;
        case 0x29d410u: goto label_29d410;
        case 0x29d414u: goto label_29d414;
        case 0x29d418u: goto label_29d418;
        case 0x29d41cu: goto label_29d41c;
        case 0x29d420u: goto label_29d420;
        case 0x29d424u: goto label_29d424;
        case 0x29d428u: goto label_29d428;
        case 0x29d42cu: goto label_29d42c;
        case 0x29d430u: goto label_29d430;
        case 0x29d434u: goto label_29d434;
        case 0x29d438u: goto label_29d438;
        case 0x29d43cu: goto label_29d43c;
        case 0x29d440u: goto label_29d440;
        case 0x29d444u: goto label_29d444;
        case 0x29d448u: goto label_29d448;
        case 0x29d44cu: goto label_29d44c;
        case 0x29d450u: goto label_29d450;
        case 0x29d454u: goto label_29d454;
        case 0x29d458u: goto label_29d458;
        case 0x29d45cu: goto label_29d45c;
        case 0x29d460u: goto label_29d460;
        case 0x29d464u: goto label_29d464;
        case 0x29d468u: goto label_29d468;
        case 0x29d46cu: goto label_29d46c;
        case 0x29d470u: goto label_29d470;
        case 0x29d474u: goto label_29d474;
        case 0x29d478u: goto label_29d478;
        case 0x29d47cu: goto label_29d47c;
        case 0x29d480u: goto label_29d480;
        case 0x29d484u: goto label_29d484;
        case 0x29d488u: goto label_29d488;
        case 0x29d48cu: goto label_29d48c;
        case 0x29d490u: goto label_29d490;
        case 0x29d494u: goto label_29d494;
        case 0x29d498u: goto label_29d498;
        case 0x29d49cu: goto label_29d49c;
        case 0x29d4a0u: goto label_29d4a0;
        case 0x29d4a4u: goto label_29d4a4;
        case 0x29d4a8u: goto label_29d4a8;
        case 0x29d4acu: goto label_29d4ac;
        case 0x29d4b0u: goto label_29d4b0;
        case 0x29d4b4u: goto label_29d4b4;
        case 0x29d4b8u: goto label_29d4b8;
        case 0x29d4bcu: goto label_29d4bc;
        case 0x29d4c0u: goto label_29d4c0;
        case 0x29d4c4u: goto label_29d4c4;
        case 0x29d4c8u: goto label_29d4c8;
        case 0x29d4ccu: goto label_29d4cc;
        case 0x29d4d0u: goto label_29d4d0;
        case 0x29d4d4u: goto label_29d4d4;
        case 0x29d4d8u: goto label_29d4d8;
        case 0x29d4dcu: goto label_29d4dc;
        case 0x29d4e0u: goto label_29d4e0;
        case 0x29d4e4u: goto label_29d4e4;
        case 0x29d4e8u: goto label_29d4e8;
        case 0x29d4ecu: goto label_29d4ec;
        case 0x29d4f0u: goto label_29d4f0;
        case 0x29d4f4u: goto label_29d4f4;
        case 0x29d4f8u: goto label_29d4f8;
        case 0x29d4fcu: goto label_29d4fc;
        case 0x29d500u: goto label_29d500;
        case 0x29d504u: goto label_29d504;
        case 0x29d508u: goto label_29d508;
        case 0x29d50cu: goto label_29d50c;
        case 0x29d510u: goto label_29d510;
        case 0x29d514u: goto label_29d514;
        case 0x29d518u: goto label_29d518;
        case 0x29d51cu: goto label_29d51c;
        case 0x29d520u: goto label_29d520;
        case 0x29d524u: goto label_29d524;
        case 0x29d528u: goto label_29d528;
        case 0x29d52cu: goto label_29d52c;
        case 0x29d530u: goto label_29d530;
        case 0x29d534u: goto label_29d534;
        case 0x29d538u: goto label_29d538;
        case 0x29d53cu: goto label_29d53c;
        case 0x29d540u: goto label_29d540;
        case 0x29d544u: goto label_29d544;
        case 0x29d548u: goto label_29d548;
        case 0x29d54cu: goto label_29d54c;
        case 0x29d550u: goto label_29d550;
        case 0x29d554u: goto label_29d554;
        case 0x29d558u: goto label_29d558;
        case 0x29d55cu: goto label_29d55c;
        case 0x29d560u: goto label_29d560;
        case 0x29d564u: goto label_29d564;
        case 0x29d568u: goto label_29d568;
        case 0x29d56cu: goto label_29d56c;
        default: break;
    }

    ctx->pc = 0x29d2c8u;

label_29d2c8:
    // 0x29d2c8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x29d2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_29d2cc:
    // 0x29d2cc: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x29d2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
label_29d2d0:
    // 0x29d2d0: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x29d2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
label_29d2d4:
    // 0x29d2d4: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x29d2d4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_29d2d8:
    // 0x29d2d8: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x29d2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_29d2dc:
    // 0x29d2dc: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x29d2dcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29d2e0:
    // 0x29d2e0: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x29d2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
label_29d2e4:
    // 0x29d2e4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x29d2e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d2e8:
    // 0x29d2e8: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x29d2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_29d2ec:
    // 0x29d2ec: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x29d2ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29d2f0:
    // 0x29d2f0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x29d2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_29d2f4:
    // 0x29d2f4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x29d2f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29d2f8:
    // 0x29d2f8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x29d2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_29d2fc:
    // 0x29d2fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29d2fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29d300:
    // 0x29d300: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x29d300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_29d304:
    // 0x29d304: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x29d304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_29d308:
    // 0x29d308: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x29d308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_29d30c:
    // 0x29d30c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x29d30cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_29d310:
    // 0x29d310: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x29d310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_29d314:
    // 0x29d314: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x29d314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_29d318:
    // 0x29d318: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x29d318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_29d31c:
    // 0x29d31c: 0x27b30004  addiu       $s3, $sp, 0x4
    ctx->pc = 0x29d31cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_29d320:
    // 0x29d320: 0x27b10008  addiu       $s1, $sp, 0x8
    ctx->pc = 0x29d320u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_29d324:
    // 0x29d324: 0x10000008  b           . + 4 + (0x8 << 2)
label_29d328:
    if (ctx->pc == 0x29D328u) {
        ctx->pc = 0x29D328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D324u;
        // 0x29d328: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D32Cu;
        goto label_29d32c;
    }
    ctx->pc = 0x29D324u;
    {
        const bool branch_taken_0x29d324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D324u;
        // 0x29d328: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d324) {
            ctx->pc = 0x29D348u;
            goto label_29d348;
        }
    }
    ctx->pc = 0x29D32Cu;
label_29d32c:
    // 0x29d32c: 0x0  nop
    ctx->pc = 0x29d32cu;
    // NOP
label_29d330:
    // 0x29d330: 0xc0a8c0a  jal         func_2A3028
label_29d334:
    if (ctx->pc == 0x29D334u) {
        ctx->pc = 0x29D334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D330u;
        // 0x29d334: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D338u;
        goto label_29d338;
    }
    ctx->pc = 0x29D330u;
    SET_GPR_U32(ctx, 31, 0x29D338u);
    ctx->pc = 0x29D334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D330u;
    // 0x29d334: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x29D330u, 0x29D338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D338u;
label_29d338:
    // 0x29d338: 0xc0a8c0a  jal         func_2A3028
label_29d33c:
    if (ctx->pc == 0x29D33Cu) {
        ctx->pc = 0x29D33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D338u;
        // 0x29d33c: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D340u;
        goto label_29d340;
    }
    ctx->pc = 0x29D338u;
    SET_GPR_U32(ctx, 31, 0x29D340u);
    ctx->pc = 0x29D33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D338u;
    // 0x29d33c: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x29D338u, 0x29D340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D340u;
label_29d340:
    // 0x29d340: 0xc0a8c0a  jal         func_2A3028
label_29d344:
    if (ctx->pc == 0x29D344u) {
        ctx->pc = 0x29D344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D340u;
        // 0x29d344: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D348u;
        goto label_29d348;
    }
    ctx->pc = 0x29D340u;
    SET_GPR_U32(ctx, 31, 0x29D348u);
    ctx->pc = 0x29D344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D340u;
    // 0x29d344: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x29D340u, 0x29D348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D348u;
label_29d348:
    // 0x29d348: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x29d348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_29d34c:
    // 0x29d34c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29d34cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29d350:
    // 0x29d350: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x29d350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29d354:
    // 0x29d354: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x29d354u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29d358:
    // 0x29d358: 0xc0a76a0  jal         func_29DA80
label_29d35c:
    if (ctx->pc == 0x29D35Cu) {
        ctx->pc = 0x29D35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D358u;
        // 0x29d35c: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D360u;
        goto label_29d360;
    }
    ctx->pc = 0x29D358u;
    SET_GPR_U32(ctx, 31, 0x29D360u);
    ctx->pc = 0x29D35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D358u;
    // 0x29d35c: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DA80u, 0x29D358u, 0x29D360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D360u;
label_29d360:
    // 0x29d360: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
label_29d364:
    if (ctx->pc == 0x29D364u) {
        ctx->pc = 0x29D364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D360u;
        // 0x29d364: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D368u;
        goto label_29d368;
    }
    ctx->pc = 0x29D360u;
    {
        const bool branch_taken_0x29d360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D360u;
        // 0x29d364: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d360) {
            ctx->pc = 0x29D4DCu;
            goto label_29d4dc;
        }
    }
    ctx->pc = 0x29D368u;
label_29d368:
    // 0x29d368: 0xc04a78a  jal         func_129E28
label_29d36c:
    if (ctx->pc == 0x29D36Cu) {
        ctx->pc = 0x29D36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D368u;
        // 0x29d36c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D370u;
        goto label_29d370;
    }
    ctx->pc = 0x29D368u;
    SET_GPR_U32(ctx, 31, 0x29D370u);
    ctx->pc = 0x29D36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D368u;
    // 0x29d36c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129E28u, 0x29D368u, 0x29D370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D370u;
label_29d370:
    // 0x29d370: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_29d374:
    if (ctx->pc == 0x29D374u) {
        ctx->pc = 0x29D374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D370u;
        // 0x29d374: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D378u;
        goto label_29d378;
    }
    ctx->pc = 0x29D370u;
    {
        const bool branch_taken_0x29d370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D370u;
        // 0x29d374: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d370) {
            ctx->pc = 0x29D424u;
            goto label_29d424;
        }
    }
    ctx->pc = 0x29D378u;
label_29d378:
    // 0x29d378: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x29d378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_29d37c:
    // 0x29d37c: 0xc04a78a  jal         func_129E28
label_29d380:
    if (ctx->pc == 0x29D380u) {
        ctx->pc = 0x29D380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D37Cu;
        // 0x29d380: 0x24a5c5e8  addiu       $a1, $a1, -0x3A18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D384u;
        goto label_29d384;
    }
    ctx->pc = 0x29D37Cu;
    SET_GPR_U32(ctx, 31, 0x29D384u);
    ctx->pc = 0x29D380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D37Cu;
    // 0x29d380: 0x24a5c5e8  addiu       $a1, $a1, -0x3A18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129E28u, 0x29D37Cu, 0x29D384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D384u;
label_29d384:
    // 0x29d384: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_29d388:
    if (ctx->pc == 0x29D388u) {
        ctx->pc = 0x29D388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D384u;
        // 0x29d388: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D38Cu;
        goto label_29d38c;
    }
    ctx->pc = 0x29D384u;
    {
        const bool branch_taken_0x29d384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d384) {
            ctx->pc = 0x29D388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D384u;
            // 0x29d388: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D3A4u;
            goto label_29d3a4;
        }
    }
    ctx->pc = 0x29D38Cu;
label_29d38c:
    // 0x29d38c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x29d38cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_29d390:
    // 0x29d390: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29d394:
    // 0x29d394: 0xc04a78a  jal         func_129E28
label_29d398:
    if (ctx->pc == 0x29D398u) {
        ctx->pc = 0x29D398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D394u;
        // 0x29d398: 0x24a5c5f8  addiu       $a1, $a1, -0x3A08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952440));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D39Cu;
        goto label_29d39c;
    }
    ctx->pc = 0x29D394u;
    SET_GPR_U32(ctx, 31, 0x29D39Cu);
    ctx->pc = 0x29D398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D394u;
    // 0x29d398: 0x24a5c5f8  addiu       $a1, $a1, -0x3A08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129E28u, 0x29D394u, 0x29D39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D39Cu;
label_29d39c:
    // 0x29d39c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_29d3a0:
    if (ctx->pc == 0x29D3A0u) {
        ctx->pc = 0x29D3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D39Cu;
        // 0x29d3a0: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D3A4u;
        goto label_29d3a4;
    }
    ctx->pc = 0x29D39Cu;
    {
        const bool branch_taken_0x29d39c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D39Cu;
        // 0x29d3a0: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d39c) {
            ctx->pc = 0x29D424u;
            goto label_29d424;
        }
    }
    ctx->pc = 0x29D3A4u;
label_29d3a4:
    // 0x29d3a4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x29d3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_29d3a8:
    // 0x29d3a8: 0xc04a78a  jal         func_129E28
label_29d3ac:
    if (ctx->pc == 0x29D3ACu) {
        ctx->pc = 0x29D3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3A8u;
        // 0x29d3ac: 0x24a5c608  addiu       $a1, $a1, -0x39F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D3B0u;
        goto label_29d3b0;
    }
    ctx->pc = 0x29D3A8u;
    SET_GPR_U32(ctx, 31, 0x29D3B0u);
    ctx->pc = 0x29D3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D3A8u;
    // 0x29d3ac: 0x24a5c608  addiu       $a1, $a1, -0x39F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129E28u, 0x29D3A8u, 0x29D3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D3B0u;
label_29d3b0:
    // 0x29d3b0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_29d3b4:
    if (ctx->pc == 0x29D3B4u) {
        ctx->pc = 0x29D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3B0u;
        // 0x29d3b4: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D3B8u;
        goto label_29d3b8;
    }
    ctx->pc = 0x29D3B0u;
    {
        const bool branch_taken_0x29d3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d3b0) {
            ctx->pc = 0x29D3B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D3B0u;
            // 0x29d3b4: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D3D0u;
            goto label_29d3d0;
        }
    }
    ctx->pc = 0x29D3B8u;
label_29d3b8:
    // 0x29d3b8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x29d3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_29d3bc:
    // 0x29d3bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29d3c0:
    // 0x29d3c0: 0xc04a78a  jal         func_129E28
label_29d3c4:
    if (ctx->pc == 0x29D3C4u) {
        ctx->pc = 0x29D3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3C0u;
        // 0x29d3c4: 0x24a5c5f8  addiu       $a1, $a1, -0x3A08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952440));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D3C8u;
        goto label_29d3c8;
    }
    ctx->pc = 0x29D3C0u;
    SET_GPR_U32(ctx, 31, 0x29D3C8u);
    ctx->pc = 0x29D3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D3C0u;
    // 0x29d3c4: 0x24a5c5f8  addiu       $a1, $a1, -0x3A08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129E28u, 0x29D3C0u, 0x29D3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D3C8u;
label_29d3c8:
    // 0x29d3c8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_29d3cc:
    if (ctx->pc == 0x29D3CCu) {
        ctx->pc = 0x29D3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3C8u;
        // 0x29d3cc: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D3D0u;
        goto label_29d3d0;
    }
    ctx->pc = 0x29D3C8u;
    {
        const bool branch_taken_0x29d3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3C8u;
        // 0x29d3cc: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d3c8) {
            ctx->pc = 0x29D424u;
            goto label_29d424;
        }
    }
    ctx->pc = 0x29D3D0u;
label_29d3d0:
    // 0x29d3d0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x29d3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_29d3d4:
    // 0x29d3d4: 0xc04a78a  jal         func_129E28
label_29d3d8:
    if (ctx->pc == 0x29D3D8u) {
        ctx->pc = 0x29D3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3D4u;
        // 0x29d3d8: 0x24a5c618  addiu       $a1, $a1, -0x39E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952472));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D3DCu;
        goto label_29d3dc;
    }
    ctx->pc = 0x29D3D4u;
    SET_GPR_U32(ctx, 31, 0x29D3DCu);
    ctx->pc = 0x29D3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D3D4u;
    // 0x29d3d8: 0x24a5c618  addiu       $a1, $a1, -0x39E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129E28u, 0x29D3D4u, 0x29D3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D3DCu;
label_29d3dc:
    // 0x29d3dc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_29d3e0:
    if (ctx->pc == 0x29D3E0u) {
        ctx->pc = 0x29D3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3DCu;
        // 0x29d3e0: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D3E4u;
        goto label_29d3e4;
    }
    ctx->pc = 0x29D3DCu;
    {
        const bool branch_taken_0x29d3dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d3dc) {
            ctx->pc = 0x29D3E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D3DCu;
            // 0x29d3e0: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D3FCu;
            goto label_29d3fc;
        }
    }
    ctx->pc = 0x29D3E4u;
label_29d3e4:
    // 0x29d3e4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x29d3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_29d3e8:
    // 0x29d3e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29d3ec:
    // 0x29d3ec: 0xc04a78a  jal         func_129E28
label_29d3f0:
    if (ctx->pc == 0x29D3F0u) {
        ctx->pc = 0x29D3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3ECu;
        // 0x29d3f0: 0x24a5c630  addiu       $a1, $a1, -0x39D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D3F4u;
        goto label_29d3f4;
    }
    ctx->pc = 0x29D3ECu;
    SET_GPR_U32(ctx, 31, 0x29D3F4u);
    ctx->pc = 0x29D3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D3ECu;
    // 0x29d3f0: 0x24a5c630  addiu       $a1, $a1, -0x39D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129E28u, 0x29D3ECu, 0x29D3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D3F4u;
label_29d3f4:
    // 0x29d3f4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_29d3f8:
    if (ctx->pc == 0x29D3F8u) {
        ctx->pc = 0x29D3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3F4u;
        // 0x29d3f8: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D3FCu;
        goto label_29d3fc;
    }
    ctx->pc = 0x29D3F4u;
    {
        const bool branch_taken_0x29d3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3F4u;
        // 0x29d3f8: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d3f4) {
            ctx->pc = 0x29D424u;
            goto label_29d424;
        }
    }
    ctx->pc = 0x29D3FCu;
label_29d3fc:
    // 0x29d3fc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x29d3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_29d400:
    // 0x29d400: 0xc04a78a  jal         func_129E28
label_29d404:
    if (ctx->pc == 0x29D404u) {
        ctx->pc = 0x29D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D400u;
        // 0x29d404: 0x24a5c640  addiu       $a1, $a1, -0x39C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D408u;
        goto label_29d408;
    }
    ctx->pc = 0x29D400u;
    SET_GPR_U32(ctx, 31, 0x29D408u);
    ctx->pc = 0x29D404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D400u;
    // 0x29d404: 0x24a5c640  addiu       $a1, $a1, -0x39C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129E28u, 0x29D400u, 0x29D408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D408u;
label_29d408:
    // 0x29d408: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
label_29d40c:
    if (ctx->pc == 0x29D40Cu) {
        ctx->pc = 0x29D40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D408u;
        // 0x29d40c: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D410u;
        goto label_29d410;
    }
    ctx->pc = 0x29D408u;
    {
        const bool branch_taken_0x29d408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D408u;
        // 0x29d40c: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d408) {
            ctx->pc = 0x29D330u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29d330;
        }
    }
    ctx->pc = 0x29D410u;
label_29d410:
    // 0x29d410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29d414:
    // 0x29d414: 0xc04a78a  jal         func_129E28
label_29d418:
    if (ctx->pc == 0x29D418u) {
        ctx->pc = 0x29D418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D414u;
        // 0x29d418: 0x24a5c658  addiu       $a1, $a1, -0x39A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D41Cu;
        goto label_29d41c;
    }
    ctx->pc = 0x29D414u;
    SET_GPR_U32(ctx, 31, 0x29D41Cu);
    ctx->pc = 0x29D418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D414u;
    // 0x29d418: 0x24a5c658  addiu       $a1, $a1, -0x39A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129E28u, 0x29D414u, 0x29D41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D41Cu;
label_29d41c:
    // 0x29d41c: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
label_29d420:
    if (ctx->pc == 0x29D420u) {
        ctx->pc = 0x29D424u;
        goto label_29d424;
    }
    ctx->pc = 0x29D41Cu;
    {
        const bool branch_taken_0x29d41c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d41c) {
            ctx->pc = 0x29D330u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29d330;
        }
    }
    ctx->pc = 0x29D424u;
label_29d424:
    // 0x29d424: 0xc0a58b8  jal         func_2962E0
label_29d428:
    if (ctx->pc == 0x29D428u) {
        ctx->pc = 0x29D42Cu;
        goto label_29d42c;
    }
    ctx->pc = 0x29D424u;
    SET_GPR_U32(ctx, 31, 0x29D42Cu);
    ctx->pc = 0x2962E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2962E0u, 0x29D424u, 0x29D42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D42Cu;
label_29d42c:
    // 0x29d42c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29d42cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d430:
    // 0x29d430: 0x12200037  beqz        $s1, . + 4 + (0x37 << 2)
label_29d434:
    if (ctx->pc == 0x29D434u) {
        ctx->pc = 0x29D434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D430u;
        // 0x29d434: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D438u;
        goto label_29d438;
    }
    ctx->pc = 0x29D430u;
    {
        const bool branch_taken_0x29d430 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D430u;
        // 0x29d434: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d430) {
            ctx->pc = 0x29D510u;
            goto label_29d510;
        }
    }
    ctx->pc = 0x29D438u;
label_29d438:
    // 0x29d438: 0xc0a75cc  jal         func_29D730
label_29d43c:
    if (ctx->pc == 0x29D43Cu) {
        ctx->pc = 0x29D43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D438u;
        // 0x29d43c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D440u;
        goto label_29d440;
    }
    ctx->pc = 0x29D438u;
    SET_GPR_U32(ctx, 31, 0x29D440u);
    ctx->pc = 0x29D43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D438u;
    // 0x29d43c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D730u, 0x29D438u, 0x29D440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D440u;
label_29d440:
    // 0x29d440: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_29d444:
    if (ctx->pc == 0x29D444u) {
        ctx->pc = 0x29D444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D440u;
        // 0x29d444: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D448u;
        goto label_29d448;
    }
    ctx->pc = 0x29D440u;
    {
        const bool branch_taken_0x29d440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D440u;
        // 0x29d444: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d440) {
            ctx->pc = 0x29D510u;
            goto label_29d510;
        }
    }
    ctx->pc = 0x29D448u;
label_29d448:
    // 0x29d448: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x29d448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29d44c:
    // 0x29d44c: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x29d44cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_29d450:
    // 0x29d450: 0xc0a755c  jal         func_29D570
label_29d454:
    if (ctx->pc == 0x29D454u) {
        ctx->pc = 0x29D454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D450u;
        // 0x29d454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D458u;
        goto label_29d458;
    }
    ctx->pc = 0x29D450u;
    SET_GPR_U32(ctx, 31, 0x29D458u);
    ctx->pc = 0x29D454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D450u;
    // 0x29d454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D570u, 0x29D450u, 0x29D458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D458u;
label_29d458:
    // 0x29d458: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_29d45c:
    if (ctx->pc == 0x29D45Cu) {
        ctx->pc = 0x29D45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D458u;
        // 0x29d45c: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D460u;
        goto label_29d460;
    }
    ctx->pc = 0x29D458u;
    {
        const bool branch_taken_0x29d458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D458u;
        // 0x29d45c: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d458) {
            ctx->pc = 0x29D510u;
            goto label_29d510;
        }
    }
    ctx->pc = 0x29D460u;
label_29d460:
    // 0x29d460: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x29d460u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_29d464:
    // 0x29d464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29d468:
    // 0x29d468: 0x24a5c5f8  addiu       $a1, $a1, -0x3A08
    ctx->pc = 0x29d468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952440));
label_29d46c:
    // 0x29d46c: 0xc04a78a  jal         func_129E28
label_29d470:
    if (ctx->pc == 0x29D470u) {
        ctx->pc = 0x29D470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D46Cu;
        // 0x29d470: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D474u;
        goto label_29d474;
    }
    ctx->pc = 0x29D46Cu;
    SET_GPR_U32(ctx, 31, 0x29D474u);
    ctx->pc = 0x29D470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D46Cu;
    // 0x29d470: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129E28u, 0x29D46Cu, 0x29D474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D474u;
label_29d474:
    // 0x29d474: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_29d478:
    if (ctx->pc == 0x29D478u) {
        ctx->pc = 0x29D478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D474u;
        // 0x29d478: 0xdfa60010  ld          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D47Cu;
        goto label_29d47c;
    }
    ctx->pc = 0x29D474u;
    {
        const bool branch_taken_0x29d474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D474u;
        // 0x29d478: 0xdfa60010  ld          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d474) {
            ctx->pc = 0x29D4E4u;
            goto label_29d4e4;
        }
    }
    ctx->pc = 0x29D47Cu;
label_29d47c:
    // 0x29d47c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x29d47cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_29d480:
    // 0x29d480: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x29d480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_29d484:
    // 0x29d484: 0xc04a78a  jal         func_129E28
label_29d488:
    if (ctx->pc == 0x29D488u) {
        ctx->pc = 0x29D488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D484u;
        // 0x29d488: 0x24a5c5e8  addiu       $a1, $a1, -0x3A18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D48Cu;
        goto label_29d48c;
    }
    ctx->pc = 0x29D484u;
    SET_GPR_U32(ctx, 31, 0x29D48Cu);
    ctx->pc = 0x29D488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D484u;
    // 0x29d488: 0x24a5c5e8  addiu       $a1, $a1, -0x3A18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129E28u, 0x29D484u, 0x29D48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D48Cu;
label_29d48c:
    // 0x29d48c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_29d490:
    if (ctx->pc == 0x29D490u) {
        ctx->pc = 0x29D490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D48Cu;
        // 0x29d490: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D494u;
        goto label_29d494;
    }
    ctx->pc = 0x29D48Cu;
    {
        const bool branch_taken_0x29d48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D48Cu;
        // 0x29d490: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d48c) {
            ctx->pc = 0x29D4B0u;
            goto label_29d4b0;
        }
    }
    ctx->pc = 0x29D494u;
label_29d494:
    // 0x29d494: 0xdfa70010  ld          $a3, 0x10($sp)
    ctx->pc = 0x29d494u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29d498:
    // 0x29d498: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x29d498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29d49c:
    // 0x29d49c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x29d49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_29d4a0:
    // 0x29d4a0: 0x2a0f809  jalr        $s5
label_29d4a4:
    if (ctx->pc == 0x29D4A4u) {
        ctx->pc = 0x29D4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4A0u;
        // 0x29d4a4: 0x27a60018  addiu       $a2, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D4A8u;
        goto label_29d4a8;
    }
    ctx->pc = 0x29D4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x29D4A8u);
        ctx->pc = 0x29D4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4A0u;
        // 0x29d4a4: 0x27a60018  addiu       $a2, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D4A0u, 0x29D4A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D4A8u;
label_29d4a8:
    // 0x29d4a8: 0x10000012  b           . + 4 + (0x12 << 2)
label_29d4ac:
    if (ctx->pc == 0x29D4ACu) {
        ctx->pc = 0x29D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4A8u;
        // 0x29d4ac: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D4B0u;
        goto label_29d4b0;
    }
    ctx->pc = 0x29D4A8u;
    {
        const bool branch_taken_0x29d4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4A8u;
        // 0x29d4ac: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d4a8) {
            ctx->pc = 0x29D4F4u;
            goto label_29d4f4;
        }
    }
    ctx->pc = 0x29D4B0u;
label_29d4b0:
    // 0x29d4b0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x29d4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_29d4b4:
    // 0x29d4b4: 0xc04a78a  jal         func_129E28
label_29d4b8:
    if (ctx->pc == 0x29D4B8u) {
        ctx->pc = 0x29D4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4B4u;
        // 0x29d4b8: 0x24a5c608  addiu       $a1, $a1, -0x39F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D4BCu;
        goto label_29d4bc;
    }
    ctx->pc = 0x29D4B4u;
    SET_GPR_U32(ctx, 31, 0x29D4BCu);
    ctx->pc = 0x29D4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D4B4u;
    // 0x29d4b8: 0x24a5c608  addiu       $a1, $a1, -0x39F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129E28u, 0x29D4B4u, 0x29D4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D4BCu;
label_29d4bc:
    // 0x29d4bc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_29d4c0:
    if (ctx->pc == 0x29D4C0u) {
        ctx->pc = 0x29D4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4BCu;
        // 0x29d4c0: 0xdfa70010  ld          $a3, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D4C4u;
        goto label_29d4c4;
    }
    ctx->pc = 0x29D4BCu;
    {
        const bool branch_taken_0x29d4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4BCu;
        // 0x29d4c0: 0xdfa70010  ld          $a3, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d4bc) {
            ctx->pc = 0x29D4F4u;
            goto label_29d4f4;
        }
    }
    ctx->pc = 0x29D4C4u;
label_29d4c4:
    // 0x29d4c4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x29d4c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29d4c8:
    // 0x29d4c8: 0x24040074  addiu       $a0, $zero, 0x74
    ctx->pc = 0x29d4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_29d4cc:
    // 0x29d4cc: 0x2a0f809  jalr        $s5
label_29d4d0:
    if (ctx->pc == 0x29D4D0u) {
        ctx->pc = 0x29D4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4CCu;
        // 0x29d4d0: 0x27a60018  addiu       $a2, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D4D4u;
        goto label_29d4d4;
    }
    ctx->pc = 0x29D4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x29D4D4u);
        ctx->pc = 0x29D4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4CCu;
        // 0x29d4d0: 0x27a60018  addiu       $a2, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D4CCu, 0x29D4D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D4D4u;
label_29d4d4:
    // 0x29d4d4: 0x10000007  b           . + 4 + (0x7 << 2)
label_29d4d8:
    if (ctx->pc == 0x29D4D8u) {
        ctx->pc = 0x29D4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4D4u;
        // 0x29d4d8: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D4DCu;
        goto label_29d4dc;
    }
    ctx->pc = 0x29D4D4u;
    {
        const bool branch_taken_0x29d4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4D4u;
        // 0x29d4d8: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d4d4) {
            ctx->pc = 0x29D4F4u;
            goto label_29d4f4;
        }
    }
    ctx->pc = 0x29D4DCu;
label_29d4dc:
    // 0x29d4dc: 0x10000017  b           . + 4 + (0x17 << 2)
label_29d4e0:
    if (ctx->pc == 0x29D4E0u) {
        ctx->pc = 0x29D4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4DCu;
        // 0x29d4e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D4E4u;
        goto label_29d4e4;
    }
    ctx->pc = 0x29D4DCu;
    {
        const bool branch_taken_0x29d4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4DCu;
        // 0x29d4e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d4dc) {
            ctx->pc = 0x29D53Cu;
            goto label_29d53c;
        }
    }
    ctx->pc = 0x29D4E4u;
label_29d4e4:
    // 0x29d4e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29d4e8:
    // 0x29d4e8: 0x2a0f809  jalr        $s5
label_29d4ec:
    if (ctx->pc == 0x29D4ECu) {
        ctx->pc = 0x29D4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4E8u;
        // 0x29d4ec: 0x27a50018  addiu       $a1, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D4F0u;
        goto label_29d4f0;
    }
    ctx->pc = 0x29D4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x29D4F0u);
        ctx->pc = 0x29D4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4E8u;
        // 0x29d4ec: 0x27a50018  addiu       $a1, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D4E8u, 0x29D4F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D4F0u;
label_29d4f0:
    // 0x29d4f0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x29d4f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d4f4:
    // 0x29d4f4: 0x16c00006  bnez        $s6, . + 4 + (0x6 << 2)
label_29d4f8:
    if (ctx->pc == 0x29D4F8u) {
        ctx->pc = 0x29D4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4F4u;
        // 0x29d4f8: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D4FCu;
        goto label_29d4fc;
    }
    ctx->pc = 0x29D4F4u;
    {
        const bool branch_taken_0x29d4f4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D4F4u;
        // 0x29d4f8: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d4f4) {
            ctx->pc = 0x29D510u;
            goto label_29d510;
        }
    }
    ctx->pc = 0x29D4FCu;
label_29d4fc:
    // 0x29d4fc: 0x24050067  addiu       $a1, $zero, 0x67
    ctx->pc = 0x29d4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
label_29d500:
    // 0x29d500: 0x2406080d  addiu       $a2, $zero, 0x80D
    ctx->pc = 0x29d500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
label_29d504:
    // 0x29d504: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29d504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29d508:
    // 0x29d508: 0xc0a5648  jal         func_295920
label_29d50c:
    if (ctx->pc == 0x29D50Cu) {
        ctx->pc = 0x29D50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D508u;
        // 0x29d50c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D510u;
        goto label_29d510;
    }
    ctx->pc = 0x29D508u;
    SET_GPR_U32(ctx, 31, 0x29D510u);
    ctx->pc = 0x29D50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D508u;
    // 0x29d50c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x29D508u, 0x29D510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D510u;
label_29d510:
    // 0x29d510: 0xc0a8c0a  jal         func_2A3028
label_29d514:
    if (ctx->pc == 0x29D514u) {
        ctx->pc = 0x29D514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D510u;
        // 0x29d514: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D518u;
        goto label_29d518;
    }
    ctx->pc = 0x29D510u;
    SET_GPR_U32(ctx, 31, 0x29D518u);
    ctx->pc = 0x29D514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D510u;
    // 0x29d514: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x29D510u, 0x29D518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D518u;
label_29d518:
    // 0x29d518: 0xc0a8c0a  jal         func_2A3028
label_29d51c:
    if (ctx->pc == 0x29D51Cu) {
        ctx->pc = 0x29D51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D518u;
        // 0x29d51c: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D520u;
        goto label_29d520;
    }
    ctx->pc = 0x29D518u;
    SET_GPR_U32(ctx, 31, 0x29D520u);
    ctx->pc = 0x29D51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D518u;
    // 0x29d51c: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x29D518u, 0x29D520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D520u;
label_29d520:
    // 0x29d520: 0xc0a8c0a  jal         func_2A3028
label_29d524:
    if (ctx->pc == 0x29D524u) {
        ctx->pc = 0x29D524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D520u;
        // 0x29d524: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D528u;
        goto label_29d528;
    }
    ctx->pc = 0x29D520u;
    SET_GPR_U32(ctx, 31, 0x29D528u);
    ctx->pc = 0x29D524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D520u;
    // 0x29d524: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x29D520u, 0x29D528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D528u;
label_29d528:
    // 0x29d528: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_29d52c:
    if (ctx->pc == 0x29D52Cu) {
        ctx->pc = 0x29D52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D528u;
        // 0x29d52c: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D530u;
        goto label_29d530;
    }
    ctx->pc = 0x29D528u;
    {
        const bool branch_taken_0x29d528 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D528u;
        // 0x29d52c: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d528) {
            ctx->pc = 0x29D53Cu;
            goto label_29d53c;
        }
    }
    ctx->pc = 0x29D530u;
label_29d530:
    // 0x29d530: 0xc0a5a18  jal         func_296860
label_29d534:
    if (ctx->pc == 0x29D534u) {
        ctx->pc = 0x29D534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D530u;
        // 0x29d534: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D538u;
        goto label_29d538;
    }
    ctx->pc = 0x29D530u;
    SET_GPR_U32(ctx, 31, 0x29D538u);
    ctx->pc = 0x29D534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D530u;
    // 0x29d534: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296860u, 0x29D530u, 0x29D538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D538u;
label_29d538:
    // 0x29d538: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x29d538u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29d53c:
    // 0x29d53c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x29d53cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_29d540:
    // 0x29d540: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x29d540u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_29d544:
    // 0x29d544: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x29d544u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_29d548:
    // 0x29d548: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x29d548u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_29d54c:
    // 0x29d54c: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x29d54cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_29d550:
    // 0x29d550: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x29d550u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_29d554:
    // 0x29d554: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x29d554u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_29d558:
    // 0x29d558: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x29d558u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_29d55c:
    // 0x29d55c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x29d55cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29d560:
    // 0x29d560: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x29d560u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29d564:
    // 0x29d564: 0x3e00008  jr          $ra
label_29d568:
    if (ctx->pc == 0x29D568u) {
        ctx->pc = 0x29D568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D564u;
        // 0x29d568: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D56Cu;
        goto label_29d56c;
    }
    ctx->pc = 0x29D564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D564u;
        // 0x29d568: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D56Cu;
label_29d56c:
    // 0x29d56c: 0x0  nop
    ctx->pc = 0x29d56cu;
    // NOP
    if (ctx->pc == 0x29d56cu) { ctx->pc = 0x29d570u; }
}
