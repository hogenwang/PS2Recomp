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

// Function: sub_002AB208
// Address: 0x2ab208 - 0x2ab430
void sub_002AB208_0x2ab208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB208_0x2ab208");
#endif

    switch (ctx->pc) {
        case 0x2ab208u: goto label_2ab208;
        case 0x2ab20cu: goto label_2ab20c;
        case 0x2ab210u: goto label_2ab210;
        case 0x2ab214u: goto label_2ab214;
        case 0x2ab218u: goto label_2ab218;
        case 0x2ab21cu: goto label_2ab21c;
        case 0x2ab220u: goto label_2ab220;
        case 0x2ab224u: goto label_2ab224;
        case 0x2ab228u: goto label_2ab228;
        case 0x2ab22cu: goto label_2ab22c;
        case 0x2ab230u: goto label_2ab230;
        case 0x2ab234u: goto label_2ab234;
        case 0x2ab238u: goto label_2ab238;
        case 0x2ab23cu: goto label_2ab23c;
        case 0x2ab240u: goto label_2ab240;
        case 0x2ab244u: goto label_2ab244;
        case 0x2ab248u: goto label_2ab248;
        case 0x2ab24cu: goto label_2ab24c;
        case 0x2ab250u: goto label_2ab250;
        case 0x2ab254u: goto label_2ab254;
        case 0x2ab258u: goto label_2ab258;
        case 0x2ab25cu: goto label_2ab25c;
        case 0x2ab260u: goto label_2ab260;
        case 0x2ab264u: goto label_2ab264;
        case 0x2ab268u: goto label_2ab268;
        case 0x2ab26cu: goto label_2ab26c;
        case 0x2ab270u: goto label_2ab270;
        case 0x2ab274u: goto label_2ab274;
        case 0x2ab278u: goto label_2ab278;
        case 0x2ab27cu: goto label_2ab27c;
        case 0x2ab280u: goto label_2ab280;
        case 0x2ab284u: goto label_2ab284;
        case 0x2ab288u: goto label_2ab288;
        case 0x2ab28cu: goto label_2ab28c;
        case 0x2ab290u: goto label_2ab290;
        case 0x2ab294u: goto label_2ab294;
        case 0x2ab298u: goto label_2ab298;
        case 0x2ab29cu: goto label_2ab29c;
        case 0x2ab2a0u: goto label_2ab2a0;
        case 0x2ab2a4u: goto label_2ab2a4;
        case 0x2ab2a8u: goto label_2ab2a8;
        case 0x2ab2acu: goto label_2ab2ac;
        case 0x2ab2b0u: goto label_2ab2b0;
        case 0x2ab2b4u: goto label_2ab2b4;
        case 0x2ab2b8u: goto label_2ab2b8;
        case 0x2ab2bcu: goto label_2ab2bc;
        case 0x2ab2c0u: goto label_2ab2c0;
        case 0x2ab2c4u: goto label_2ab2c4;
        case 0x2ab2c8u: goto label_2ab2c8;
        case 0x2ab2ccu: goto label_2ab2cc;
        case 0x2ab2d0u: goto label_2ab2d0;
        case 0x2ab2d4u: goto label_2ab2d4;
        case 0x2ab2d8u: goto label_2ab2d8;
        case 0x2ab2dcu: goto label_2ab2dc;
        case 0x2ab2e0u: goto label_2ab2e0;
        case 0x2ab2e4u: goto label_2ab2e4;
        case 0x2ab2e8u: goto label_2ab2e8;
        case 0x2ab2ecu: goto label_2ab2ec;
        case 0x2ab2f0u: goto label_2ab2f0;
        case 0x2ab2f4u: goto label_2ab2f4;
        case 0x2ab2f8u: goto label_2ab2f8;
        case 0x2ab2fcu: goto label_2ab2fc;
        case 0x2ab300u: goto label_2ab300;
        case 0x2ab304u: goto label_2ab304;
        case 0x2ab308u: goto label_2ab308;
        case 0x2ab30cu: goto label_2ab30c;
        case 0x2ab310u: goto label_2ab310;
        case 0x2ab314u: goto label_2ab314;
        case 0x2ab318u: goto label_2ab318;
        case 0x2ab31cu: goto label_2ab31c;
        case 0x2ab320u: goto label_2ab320;
        case 0x2ab324u: goto label_2ab324;
        case 0x2ab328u: goto label_2ab328;
        case 0x2ab32cu: goto label_2ab32c;
        case 0x2ab330u: goto label_2ab330;
        case 0x2ab334u: goto label_2ab334;
        case 0x2ab338u: goto label_2ab338;
        case 0x2ab33cu: goto label_2ab33c;
        case 0x2ab340u: goto label_2ab340;
        case 0x2ab344u: goto label_2ab344;
        case 0x2ab348u: goto label_2ab348;
        case 0x2ab34cu: goto label_2ab34c;
        case 0x2ab350u: goto label_2ab350;
        case 0x2ab354u: goto label_2ab354;
        case 0x2ab358u: goto label_2ab358;
        case 0x2ab35cu: goto label_2ab35c;
        case 0x2ab360u: goto label_2ab360;
        case 0x2ab364u: goto label_2ab364;
        case 0x2ab368u: goto label_2ab368;
        case 0x2ab36cu: goto label_2ab36c;
        case 0x2ab370u: goto label_2ab370;
        case 0x2ab374u: goto label_2ab374;
        case 0x2ab378u: goto label_2ab378;
        case 0x2ab37cu: goto label_2ab37c;
        case 0x2ab380u: goto label_2ab380;
        case 0x2ab384u: goto label_2ab384;
        case 0x2ab388u: goto label_2ab388;
        case 0x2ab38cu: goto label_2ab38c;
        case 0x2ab390u: goto label_2ab390;
        case 0x2ab394u: goto label_2ab394;
        case 0x2ab398u: goto label_2ab398;
        case 0x2ab39cu: goto label_2ab39c;
        case 0x2ab3a0u: goto label_2ab3a0;
        case 0x2ab3a4u: goto label_2ab3a4;
        case 0x2ab3a8u: goto label_2ab3a8;
        case 0x2ab3acu: goto label_2ab3ac;
        case 0x2ab3b0u: goto label_2ab3b0;
        case 0x2ab3b4u: goto label_2ab3b4;
        case 0x2ab3b8u: goto label_2ab3b8;
        case 0x2ab3bcu: goto label_2ab3bc;
        case 0x2ab3c0u: goto label_2ab3c0;
        case 0x2ab3c4u: goto label_2ab3c4;
        case 0x2ab3c8u: goto label_2ab3c8;
        case 0x2ab3ccu: goto label_2ab3cc;
        case 0x2ab3d0u: goto label_2ab3d0;
        case 0x2ab3d4u: goto label_2ab3d4;
        case 0x2ab3d8u: goto label_2ab3d8;
        case 0x2ab3dcu: goto label_2ab3dc;
        case 0x2ab3e0u: goto label_2ab3e0;
        case 0x2ab3e4u: goto label_2ab3e4;
        case 0x2ab3e8u: goto label_2ab3e8;
        case 0x2ab3ecu: goto label_2ab3ec;
        case 0x2ab3f0u: goto label_2ab3f0;
        case 0x2ab3f4u: goto label_2ab3f4;
        case 0x2ab3f8u: goto label_2ab3f8;
        case 0x2ab3fcu: goto label_2ab3fc;
        case 0x2ab400u: goto label_2ab400;
        case 0x2ab404u: goto label_2ab404;
        case 0x2ab408u: goto label_2ab408;
        case 0x2ab40cu: goto label_2ab40c;
        case 0x2ab410u: goto label_2ab410;
        case 0x2ab414u: goto label_2ab414;
        case 0x2ab418u: goto label_2ab418;
        case 0x2ab41cu: goto label_2ab41c;
        case 0x2ab420u: goto label_2ab420;
        case 0x2ab424u: goto label_2ab424;
        case 0x2ab428u: goto label_2ab428;
        case 0x2ab42cu: goto label_2ab42c;
        default: break;
    }

    ctx->pc = 0x2ab208u;

label_2ab208:
    // 0x2ab208: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2ab208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2ab20c:
    // 0x2ab20c: 0x24021010  addiu       $v0, $zero, 0x1010
    ctx->pc = 0x2ab20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4112));
label_2ab210:
    // 0x2ab210: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2ab210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_2ab214:
    // 0x2ab214: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ab214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2ab218:
    // 0x2ab218: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2ab218u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ab21c:
    // 0x2ab21c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ab21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2ab220:
    // 0x2ab220: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ab220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ab224:
    // 0x2ab224: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2ab224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2ab228:
    // 0x2ab228: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ab228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ab22c:
    // 0x2ab22c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2ab22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2ab230:
    // 0x2ab230: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2ab230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2ab234:
    // 0x2ab234: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ab234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2ab238:
    // 0x2ab238: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x2ab238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_2ab23c:
    // 0x2ab23c: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x2ab23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2ab240:
    // 0x2ab240: 0x1462006f  bne         $v1, $v0, . + 4 + (0x6F << 2)
label_2ab244:
    if (ctx->pc == 0x2AB244u) {
        ctx->pc = 0x2AB244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB240u;
        // 0x2ab244: 0x8c940004  lw          $s4, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB248u;
        goto label_2ab248;
    }
    ctx->pc = 0x2AB240u;
    {
        const bool branch_taken_0x2ab240 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AB244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB240u;
        // 0x2ab244: 0x8c940004  lw          $s4, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab240) {
            ctx->pc = 0x2AB400u;
            goto label_2ab400;
        }
    }
    ctx->pc = 0x2AB248u;
label_2ab248:
    // 0x2ab248: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x2ab248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_2ab24c:
    // 0x2ab24c: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_2ab250:
    if (ctx->pc == 0x2AB250u) {
        ctx->pc = 0x2AB250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB24Cu;
        // 0x2ab250: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB254u;
        goto label_2ab254;
    }
    ctx->pc = 0x2AB24Cu;
    {
        const bool branch_taken_0x2ab24c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab24c) {
            ctx->pc = 0x2AB250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AB24Cu;
            // 0x2ab250: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AB274u;
            goto label_2ab274;
        }
    }
    ctx->pc = 0x2AB254u;
label_2ab254:
    // 0x2ab254: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2ab254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ab258:
    // 0x2ab258: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ab258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ab25c:
    // 0x2ab25c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_2ab260:
    if (ctx->pc == 0x2AB260u) {
        ctx->pc = 0x2AB260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB25Cu;
        // 0x2ab260: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB264u;
        goto label_2ab264;
    }
    ctx->pc = 0x2AB25Cu;
    {
        const bool branch_taken_0x2ab25c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ab25c) {
            ctx->pc = 0x2AB260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AB25Cu;
            // 0x2ab260: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AB274u;
            goto label_2ab274;
        }
    }
    ctx->pc = 0x2AB264u;
label_2ab264:
    // 0x2ab264: 0x8c82008c  lw          $v0, 0x8C($a0)
    ctx->pc = 0x2ab264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
label_2ab268:
    // 0x2ab268: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2ab26c:
    if (ctx->pc == 0x2AB26Cu) {
        ctx->pc = 0x2AB26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB268u;
        // 0x2ab26c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB270u;
        goto label_2ab270;
    }
    ctx->pc = 0x2AB268u;
    {
        const bool branch_taken_0x2ab268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB268u;
        // 0x2ab26c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab268) {
            ctx->pc = 0x2AB298u;
            goto label_2ab298;
        }
    }
    ctx->pc = 0x2AB270u;
label_2ab270:
    // 0x2ab270: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ab270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ab274:
    // 0x2ab274: 0xc0aeb94  jal         func_2BAE50
label_2ab278:
    if (ctx->pc == 0x2AB278u) {
        ctx->pc = 0x2AB278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB274u;
        // 0x2ab278: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB27Cu;
        goto label_2ab27c;
    }
    ctx->pc = 0x2AB274u;
    SET_GPR_U32(ctx, 31, 0x2AB27Cu);
    ctx->pc = 0x2AB278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB274u;
    // 0x2ab278: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAE50u, 0x2AB274u, 0x2AB27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB27Cu;
label_2ab27c:
    // 0x2ab27c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2ab280:
    if (ctx->pc == 0x2AB280u) {
        ctx->pc = 0x2AB280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB27Cu;
        // 0x2ab280: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB284u;
        goto label_2ab284;
    }
    ctx->pc = 0x2AB27Cu;
    {
        const bool branch_taken_0x2ab27c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AB280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB27Cu;
        // 0x2ab280: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab27c) {
            ctx->pc = 0x2AB298u;
            goto label_2ab298;
        }
    }
    ctx->pc = 0x2AB284u;
label_2ab284:
    // 0x2ab284: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ab284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ab288:
    // 0x2ab288: 0xc0acbea  jal         func_2B2FA8
label_2ab28c:
    if (ctx->pc == 0x2AB28Cu) {
        ctx->pc = 0x2AB28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB288u;
        // 0x2ab28c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB290u;
        goto label_2ab290;
    }
    ctx->pc = 0x2AB288u;
    SET_GPR_U32(ctx, 31, 0x2AB290u);
    ctx->pc = 0x2AB28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB288u;
    // 0x2ab28c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2FA8u, 0x2AB288u, 0x2AB290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB290u;
label_2ab290:
    // 0x2ab290: 0x1000005d  b           . + 4 + (0x5D << 2)
label_2ab294:
    if (ctx->pc == 0x2AB294u) {
        ctx->pc = 0x2AB294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB290u;
        // 0x2ab294: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB298u;
        goto label_2ab298;
    }
    ctx->pc = 0x2AB290u;
    {
        const bool branch_taken_0x2ab290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB290u;
        // 0x2ab294: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab290) {
            ctx->pc = 0x2AB408u;
            goto label_2ab408;
        }
    }
    ctx->pc = 0x2AB298u;
label_2ab298:
    // 0x2ab298: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ab298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ab29c:
    // 0x2ab29c: 0xa2800001  sb          $zero, 0x1($s4)
    ctx->pc = 0x2ab29cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 0));
label_2ab2a0:
    // 0x2ab2a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ab2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ab2a4:
    // 0x2ab2a4: 0xa2830000  sb          $v1, 0x0($s4)
    ctx->pc = 0x2ab2a4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
label_2ab2a8:
    // 0x2ab2a8: 0x26930009  addiu       $s3, $s4, 0x9
    ctx->pc = 0x2ab2a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 9));
label_2ab2ac:
    // 0x2ab2ac: 0xa2820002  sb          $v0, 0x2($s4)
    ctx->pc = 0x2ab2acu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 2));
label_2ab2b0:
    // 0x2ab2b0: 0xc0ac1c4  jal         func_2B0710
label_2ab2b4:
    if (ctx->pc == 0x2AB2B4u) {
        ctx->pc = 0x2AB2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB2B0u;
        // 0x2ab2b4: 0x26920003  addiu       $s2, $s4, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB2B8u;
        goto label_2ab2b8;
    }
    ctx->pc = 0x2AB2B0u;
    SET_GPR_U32(ctx, 31, 0x2AB2B8u);
    ctx->pc = 0x2AB2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB2B0u;
    // 0x2ab2b4: 0x26920003  addiu       $s2, $s4, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0710u, 0x2AB2B0u, 0x2AB2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB2B8u;
label_2ab2b8:
    // 0x2ab2b8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2ab2b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ab2bc:
    // 0x2ab2bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ab2bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ab2c0:
    // 0x2ab2c0: 0xc0ac1de  jal         func_2B0778
label_2ab2c4:
    if (ctx->pc == 0x2AB2C4u) {
        ctx->pc = 0x2AB2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB2C0u;
        // 0x2ab2c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB2C8u;
        goto label_2ab2c8;
    }
    ctx->pc = 0x2AB2C0u;
    SET_GPR_U32(ctx, 31, 0x2AB2C8u);
    ctx->pc = 0x2AB2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB2C0u;
    // 0x2ab2c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0778u, 0x2AB2C0u, 0x2AB2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB2C8u;
label_2ab2c8:
    // 0x2ab2c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ab2c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ab2cc:
    // 0x2ab2cc: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
label_2ab2d0:
    if (ctx->pc == 0x2AB2D0u) {
        ctx->pc = 0x2AB2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB2CCu;
        // 0x2ab2d0: 0x2639821  addu        $s3, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB2D4u;
        goto label_2ab2d4;
    }
    ctx->pc = 0x2AB2CCu;
    {
        const bool branch_taken_0x2ab2cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AB2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB2CCu;
        // 0x2ab2d0: 0x2639821  addu        $s3, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab2cc) {
            ctx->pc = 0x2AB338u;
            goto label_2ab338;
        }
    }
    ctx->pc = 0x2AB2D4u;
label_2ab2d4:
    // 0x2ab2d4: 0x8e2200c4  lw          $v0, 0xC4($s1)
    ctx->pc = 0x2ab2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_2ab2d8:
    // 0x2ab2d8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2ab2dc:
    if (ctx->pc == 0x2AB2DCu) {
        ctx->pc = 0x2AB2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB2D8u;
        // 0x2ab2dc: 0x8e2200dc  lw          $v0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB2E0u;
        goto label_2ab2e0;
    }
    ctx->pc = 0x2AB2D8u;
    {
        const bool branch_taken_0x2ab2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab2d8) {
            ctx->pc = 0x2AB2DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AB2D8u;
            // 0x2ab2dc: 0x8e2200dc  lw          $v0, 0xDC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AB2ECu;
            goto label_2ab2ec;
        }
    }
    ctx->pc = 0x2AB2E0u;
label_2ab2e0:
    // 0x2ab2e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ab2e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ab2e4:
    // 0x2ab2e4: 0x10000006  b           . + 4 + (0x6 << 2)
label_2ab2e8:
    if (ctx->pc == 0x2AB2E8u) {
        ctx->pc = 0x2AB2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB2E4u;
        // 0x2ab2e8: 0x8e3500c8  lw          $s5, 0xC8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB2ECu;
        goto label_2ab2ec;
    }
    ctx->pc = 0x2AB2E4u;
    {
        const bool branch_taken_0x2ab2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB2E4u;
        // 0x2ab2e8: 0x8e3500c8  lw          $s5, 0xC8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab2e4) {
            ctx->pc = 0x2AB300u;
            goto label_2ab300;
        }
    }
    ctx->pc = 0x2AB2ECu;
label_2ab2ec:
    // 0x2ab2ec: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x2ab2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_2ab2f0:
    // 0x2ab2f0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2ab2f4:
    if (ctx->pc == 0x2AB2F4u) {
        ctx->pc = 0x2AB2F8u;
        goto label_2ab2f8;
    }
    ctx->pc = 0x2AB2F0u;
    {
        const bool branch_taken_0x2ab2f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab2f0) {
            ctx->pc = 0x2AB300u;
            goto label_2ab300;
        }
    }
    ctx->pc = 0x2AB2F8u;
label_2ab2f8:
    // 0x2ab2f8: 0x8c550084  lw          $s5, 0x84($v0)
    ctx->pc = 0x2ab2f8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_2ab2fc:
    // 0x2ab2fc: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2ab2fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2ab300:
    // 0x2ab300: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_2ab304:
    if (ctx->pc == 0x2AB304u) {
        ctx->pc = 0x2AB304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB300u;
        // 0x2ab304: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB308u;
        goto label_2ab308;
    }
    ctx->pc = 0x2AB300u;
    {
        const bool branch_taken_0x2ab300 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB300u;
        // 0x2ab304: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab300) {
            ctx->pc = 0x2AB318u;
            goto label_2ab318;
        }
    }
    ctx->pc = 0x2AB308u;
label_2ab308:
    // 0x2ab308: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2ab308u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ab30c:
    // 0x2ab30c: 0x24054008  addiu       $a1, $zero, 0x4008
    ctx->pc = 0x2ab30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16392));
label_2ab310:
    // 0x2ab310: 0x200f809  jalr        $s0
label_2ab314:
    if (ctx->pc == 0x2AB314u) {
        ctx->pc = 0x2AB314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB310u;
        // 0x2ab314: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB318u;
        goto label_2ab318;
    }
    ctx->pc = 0x2AB310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2AB318u);
        ctx->pc = 0x2AB314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB310u;
        // 0x2ab314: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB310u, 0x2AB318u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AB318u;
label_2ab318:
    // 0x2ab318: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2ab318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2ab31c:
    // 0x2ab31c: 0x24050065  addiu       $a1, $zero, 0x65
    ctx->pc = 0x2ab31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_2ab320:
    // 0x2ab320: 0x240600b5  addiu       $a2, $zero, 0xB5
    ctx->pc = 0x2ab320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
label_2ab324:
    // 0x2ab324: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ab324u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ab328:
    // 0x2ab328: 0xc0a5648  jal         func_295920
label_2ab32c:
    if (ctx->pc == 0x2AB32Cu) {
        ctx->pc = 0x2AB32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB328u;
        // 0x2ab32c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB330u;
        goto label_2ab330;
    }
    ctx->pc = 0x2AB328u;
    SET_GPR_U32(ctx, 31, 0x2AB330u);
    ctx->pc = 0x2AB32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB328u;
    // 0x2ab32c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2AB328u, 0x2AB330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB330u;
label_2ab330:
    // 0x2ab330: 0x10000035  b           . + 4 + (0x35 << 2)
label_2ab334:
    if (ctx->pc == 0x2AB334u) {
        ctx->pc = 0x2AB334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB330u;
        // 0x2ab334: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB338u;
        goto label_2ab338;
    }
    ctx->pc = 0x2AB330u;
    {
        const bool branch_taken_0x2ab330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB330u;
        // 0x2ab334: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab330) {
            ctx->pc = 0x2AB408u;
            goto label_2ab408;
        }
    }
    ctx->pc = 0x2AB338u;
label_2ab338:
    // 0x2ab338: 0x31203  sra         $v0, $v1, 8
    ctx->pc = 0x2ab338u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 8));
label_2ab33c:
    // 0x2ab33c: 0xa2820003  sb          $v0, 0x3($s4)
    ctx->pc = 0x2ab33cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3), (uint8_t)GPR_U32(ctx, 2));
label_2ab340:
    // 0x2ab340: 0xa2430001  sb          $v1, 0x1($s2)
    ctx->pc = 0x2ab340u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 3));
label_2ab344:
    // 0x2ab344: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x2ab344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_2ab348:
    // 0x2ab348: 0x8c700044  lw          $s0, 0x44($v1)
    ctx->pc = 0x2ab348u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2ab34c:
    // 0x2ab34c: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x2ab34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2ab350:
    // 0x2ab350: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x2ab350u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_2ab354:
    // 0x2ab354: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2ab358:
    if (ctx->pc == 0x2AB358u) {
        ctx->pc = 0x2AB358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB354u;
        // 0x2ab358: 0x26920005  addiu       $s2, $s4, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB35Cu;
        goto label_2ab35c;
    }
    ctx->pc = 0x2AB354u;
    {
        const bool branch_taken_0x2ab354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB354u;
        // 0x2ab358: 0x26920005  addiu       $s2, $s4, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab354) {
            ctx->pc = 0x2AB38Cu;
            goto label_2ab38c;
        }
    }
    ctx->pc = 0x2AB35Cu;
label_2ab35c:
    // 0x2ab35c: 0x101203  sra         $v0, $s0, 8
    ctx->pc = 0x2ab35cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 8));
label_2ab360:
    // 0x2ab360: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ab360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ab364:
    // 0x2ab364: 0xa2820005  sb          $v0, 0x5($s4)
    ctx->pc = 0x2ab364u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 2));
label_2ab368:
    // 0x2ab368: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ab368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ab36c:
    // 0x2ab36c: 0xa2500001  sb          $s0, 0x1($s2)
    ctx->pc = 0x2ab36cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 16));
label_2ab370:
    // 0x2ab370: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x2ab370u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_2ab374:
    // 0x2ab374: 0x26920007  addiu       $s2, $s4, 0x7
    ctx->pc = 0x2ab374u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 7));
label_2ab378:
    // 0x2ab378: 0x8e2500b0  lw          $a1, 0xB0($s1)
    ctx->pc = 0x2ab378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_2ab37c:
    // 0x2ab37c: 0xc049c48  jal         func_127120
label_2ab380:
    if (ctx->pc == 0x2AB380u) {
        ctx->pc = 0x2AB380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB37Cu;
        // 0x2ab380: 0x24a50048  addiu       $a1, $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB384u;
        goto label_2ab384;
    }
    ctx->pc = 0x2AB37Cu;
    SET_GPR_U32(ctx, 31, 0x2AB384u);
    ctx->pc = 0x2AB380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB37Cu;
    // 0x2ab380: 0x24a50048  addiu       $a1, $a1, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2AB37Cu, 0x2AB384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB384u;
label_2ab384:
    // 0x2ab384: 0x10000005  b           . + 4 + (0x5 << 2)
label_2ab388:
    if (ctx->pc == 0x2AB388u) {
        ctx->pc = 0x2AB388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB384u;
        // 0x2ab388: 0x8e220050  lw          $v0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB38Cu;
        goto label_2ab38c;
    }
    ctx->pc = 0x2AB384u;
    {
        const bool branch_taken_0x2ab384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB384u;
        // 0x2ab388: 0x8e220050  lw          $v0, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab384) {
            ctx->pc = 0x2AB39Cu;
            goto label_2ab39c;
        }
    }
    ctx->pc = 0x2AB38Cu;
label_2ab38c:
    // 0x2ab38c: 0xa2800005  sb          $zero, 0x5($s4)
    ctx->pc = 0x2ab38cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 0));
label_2ab390:
    // 0x2ab390: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x2ab390u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
label_2ab394:
    // 0x2ab394: 0x26920007  addiu       $s2, $s4, 0x7
    ctx->pc = 0x2ab394u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 7));
label_2ab398:
    // 0x2ab398: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x2ab398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2ab39c:
    // 0x2ab39c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2ab39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2ab3a0:
    // 0x2ab3a0: 0xac43006c  sw          $v1, 0x6C($v0)
    ctx->pc = 0x2ab3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 3));
label_2ab3a4:
    // 0x2ab3a4: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x2ab3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
label_2ab3a8:
    // 0x2ab3a8: 0xc0a8d8a  jal         func_2A3628
label_2ab3ac:
    if (ctx->pc == 0x2AB3ACu) {
        ctx->pc = 0x2AB3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB3A8u;
        // 0x2ab3ac: 0xa2430001  sb          $v1, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB3B0u;
        goto label_2ab3b0;
    }
    ctx->pc = 0x2AB3A8u;
    SET_GPR_U32(ctx, 31, 0x2AB3B0u);
    ctx->pc = 0x2AB3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB3A8u;
    // 0x2ab3ac: 0xa2430001  sb          $v1, 0x1($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3628u, 0x2AB3A8u, 0x2AB3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB3B0u;
label_2ab3b0:
    // 0x2ab3b0: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x2ab3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2ab3b4:
    // 0x2ab3b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ab3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ab3b8:
    // 0x2ab3b8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2ab3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2ab3bc:
    // 0x2ab3bc: 0xc0a8d02  jal         func_2A3408
label_2ab3c0:
    if (ctx->pc == 0x2AB3C0u) {
        ctx->pc = 0x2AB3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB3BCu;
        // 0x2ab3c0: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB3C4u;
        goto label_2ab3c4;
    }
    ctx->pc = 0x2AB3BCu;
    SET_GPR_U32(ctx, 31, 0x2AB3C4u);
    ctx->pc = 0x2AB3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB3BCu;
    // 0x2ab3c0: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3408u, 0x2AB3BCu, 0x2AB3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB3C4u;
label_2ab3c4:
    // 0x2ab3c4: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x2ab3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2ab3c8:
    // 0x2ab3c8: 0x24041011  addiu       $a0, $zero, 0x1011
    ctx->pc = 0x2ab3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4113));
label_2ab3cc:
    // 0x2ab3cc: 0x68620077  ldl         $v0, 0x77($v1)
    ctx->pc = 0x2ab3ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2ab3d0:
    // 0x2ab3d0: 0x6c620070  ldr         $v0, 0x70($v1)
    ctx->pc = 0x2ab3d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2ab3d4:
    // 0x2ab3d4: 0x6865007f  ldl         $a1, 0x7F($v1)
    ctx->pc = 0x2ab3d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_2ab3d8:
    // 0x2ab3d8: 0x6c650078  ldr         $a1, 0x78($v1)
    ctx->pc = 0x2ab3d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2ab3dc:
    // 0x2ab3dc: 0xb2620007  sdl         $v0, 0x7($s3)
    ctx->pc = 0x2ab3dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2ab3e0:
    // 0x2ab3e0: 0xb6620000  sdr         $v0, 0x0($s3)
    ctx->pc = 0x2ab3e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2ab3e4:
    // 0x2ab3e4: 0xb265000f  sdl         $a1, 0xF($s3)
    ctx->pc = 0x2ab3e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2ab3e8:
    // 0x2ab3e8: 0xb6650008  sdr         $a1, 0x8($s3)
    ctx->pc = 0x2ab3e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2ab3ec:
    // 0x2ab3ec: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x2ab3ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_2ab3f0:
    // 0x2ab3f0: 0xae240030  sw          $a0, 0x30($s1)
    ctx->pc = 0x2ab3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 4));
label_2ab3f4:
    // 0x2ab3f4: 0x2741023  subu        $v0, $s3, $s4
    ctx->pc = 0x2ab3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_2ab3f8:
    // 0x2ab3f8: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x2ab3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
label_2ab3fc:
    // 0x2ab3fc: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x2ab3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
label_2ab400:
    // 0x2ab400: 0xc0acbb2  jal         func_2B2EC8
label_2ab404:
    if (ctx->pc == 0x2AB404u) {
        ctx->pc = 0x2AB404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB400u;
        // 0x2ab404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB408u;
        goto label_2ab408;
    }
    ctx->pc = 0x2AB400u;
    SET_GPR_U32(ctx, 31, 0x2AB408u);
    ctx->pc = 0x2AB404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB400u;
    // 0x2ab404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2EC8u, 0x2AB400u, 0x2AB408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB408u;
label_2ab408:
    // 0x2ab408: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2ab408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2ab40c:
    // 0x2ab40c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2ab40cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2ab410:
    // 0x2ab410: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2ab410u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2ab414:
    // 0x2ab414: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2ab414u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2ab418:
    // 0x2ab418: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ab418u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ab41c:
    // 0x2ab41c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ab41cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ab420:
    // 0x2ab420: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ab420u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ab424:
    // 0x2ab424: 0x3e00008  jr          $ra
label_2ab428:
    if (ctx->pc == 0x2AB428u) {
        ctx->pc = 0x2AB428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB424u;
        // 0x2ab428: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AB42Cu;
        goto label_2ab42c;
    }
    ctx->pc = 0x2AB424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB424u;
        // 0x2ab428: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB42Cu;
label_2ab42c:
    // 0x2ab42c: 0x0  nop
    ctx->pc = 0x2ab42cu;
    // NOP
    if (ctx->pc == 0x2ab42cu) { ctx->pc = 0x2ab430u; }
}
