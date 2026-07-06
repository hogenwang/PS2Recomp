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

// Function: sub_002791B0
// Address: 0x2791b0 - 0x279588
void sub_002791B0_0x2791b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002791B0_0x2791b0");
#endif

    switch (ctx->pc) {
        case 0x2791b0u: goto label_2791b0;
        case 0x2791b4u: goto label_2791b4;
        case 0x2791b8u: goto label_2791b8;
        case 0x2791bcu: goto label_2791bc;
        case 0x2791c0u: goto label_2791c0;
        case 0x2791c4u: goto label_2791c4;
        case 0x2791c8u: goto label_2791c8;
        case 0x2791ccu: goto label_2791cc;
        case 0x2791d0u: goto label_2791d0;
        case 0x2791d4u: goto label_2791d4;
        case 0x2791d8u: goto label_2791d8;
        case 0x2791dcu: goto label_2791dc;
        case 0x2791e0u: goto label_2791e0;
        case 0x2791e4u: goto label_2791e4;
        case 0x2791e8u: goto label_2791e8;
        case 0x2791ecu: goto label_2791ec;
        case 0x2791f0u: goto label_2791f0;
        case 0x2791f4u: goto label_2791f4;
        case 0x2791f8u: goto label_2791f8;
        case 0x2791fcu: goto label_2791fc;
        case 0x279200u: goto label_279200;
        case 0x279204u: goto label_279204;
        case 0x279208u: goto label_279208;
        case 0x27920cu: goto label_27920c;
        case 0x279210u: goto label_279210;
        case 0x279214u: goto label_279214;
        case 0x279218u: goto label_279218;
        case 0x27921cu: goto label_27921c;
        case 0x279220u: goto label_279220;
        case 0x279224u: goto label_279224;
        case 0x279228u: goto label_279228;
        case 0x27922cu: goto label_27922c;
        case 0x279230u: goto label_279230;
        case 0x279234u: goto label_279234;
        case 0x279238u: goto label_279238;
        case 0x27923cu: goto label_27923c;
        case 0x279240u: goto label_279240;
        case 0x279244u: goto label_279244;
        case 0x279248u: goto label_279248;
        case 0x27924cu: goto label_27924c;
        case 0x279250u: goto label_279250;
        case 0x279254u: goto label_279254;
        case 0x279258u: goto label_279258;
        case 0x27925cu: goto label_27925c;
        case 0x279260u: goto label_279260;
        case 0x279264u: goto label_279264;
        case 0x279268u: goto label_279268;
        case 0x27926cu: goto label_27926c;
        case 0x279270u: goto label_279270;
        case 0x279274u: goto label_279274;
        case 0x279278u: goto label_279278;
        case 0x27927cu: goto label_27927c;
        case 0x279280u: goto label_279280;
        case 0x279284u: goto label_279284;
        case 0x279288u: goto label_279288;
        case 0x27928cu: goto label_27928c;
        case 0x279290u: goto label_279290;
        case 0x279294u: goto label_279294;
        case 0x279298u: goto label_279298;
        case 0x27929cu: goto label_27929c;
        case 0x2792a0u: goto label_2792a0;
        case 0x2792a4u: goto label_2792a4;
        case 0x2792a8u: goto label_2792a8;
        case 0x2792acu: goto label_2792ac;
        case 0x2792b0u: goto label_2792b0;
        case 0x2792b4u: goto label_2792b4;
        case 0x2792b8u: goto label_2792b8;
        case 0x2792bcu: goto label_2792bc;
        case 0x2792c0u: goto label_2792c0;
        case 0x2792c4u: goto label_2792c4;
        case 0x2792c8u: goto label_2792c8;
        case 0x2792ccu: goto label_2792cc;
        case 0x2792d0u: goto label_2792d0;
        case 0x2792d4u: goto label_2792d4;
        case 0x2792d8u: goto label_2792d8;
        case 0x2792dcu: goto label_2792dc;
        case 0x2792e0u: goto label_2792e0;
        case 0x2792e4u: goto label_2792e4;
        case 0x2792e8u: goto label_2792e8;
        case 0x2792ecu: goto label_2792ec;
        case 0x2792f0u: goto label_2792f0;
        case 0x2792f4u: goto label_2792f4;
        case 0x2792f8u: goto label_2792f8;
        case 0x2792fcu: goto label_2792fc;
        case 0x279300u: goto label_279300;
        case 0x279304u: goto label_279304;
        case 0x279308u: goto label_279308;
        case 0x27930cu: goto label_27930c;
        case 0x279310u: goto label_279310;
        case 0x279314u: goto label_279314;
        case 0x279318u: goto label_279318;
        case 0x27931cu: goto label_27931c;
        case 0x279320u: goto label_279320;
        case 0x279324u: goto label_279324;
        case 0x279328u: goto label_279328;
        case 0x27932cu: goto label_27932c;
        case 0x279330u: goto label_279330;
        case 0x279334u: goto label_279334;
        case 0x279338u: goto label_279338;
        case 0x27933cu: goto label_27933c;
        case 0x279340u: goto label_279340;
        case 0x279344u: goto label_279344;
        case 0x279348u: goto label_279348;
        case 0x27934cu: goto label_27934c;
        case 0x279350u: goto label_279350;
        case 0x279354u: goto label_279354;
        case 0x279358u: goto label_279358;
        case 0x27935cu: goto label_27935c;
        case 0x279360u: goto label_279360;
        case 0x279364u: goto label_279364;
        case 0x279368u: goto label_279368;
        case 0x27936cu: goto label_27936c;
        case 0x279370u: goto label_279370;
        case 0x279374u: goto label_279374;
        case 0x279378u: goto label_279378;
        case 0x27937cu: goto label_27937c;
        case 0x279380u: goto label_279380;
        case 0x279384u: goto label_279384;
        case 0x279388u: goto label_279388;
        case 0x27938cu: goto label_27938c;
        case 0x279390u: goto label_279390;
        case 0x279394u: goto label_279394;
        case 0x279398u: goto label_279398;
        case 0x27939cu: goto label_27939c;
        case 0x2793a0u: goto label_2793a0;
        case 0x2793a4u: goto label_2793a4;
        case 0x2793a8u: goto label_2793a8;
        case 0x2793acu: goto label_2793ac;
        case 0x2793b0u: goto label_2793b0;
        case 0x2793b4u: goto label_2793b4;
        case 0x2793b8u: goto label_2793b8;
        case 0x2793bcu: goto label_2793bc;
        case 0x2793c0u: goto label_2793c0;
        case 0x2793c4u: goto label_2793c4;
        case 0x2793c8u: goto label_2793c8;
        case 0x2793ccu: goto label_2793cc;
        case 0x2793d0u: goto label_2793d0;
        case 0x2793d4u: goto label_2793d4;
        case 0x2793d8u: goto label_2793d8;
        case 0x2793dcu: goto label_2793dc;
        case 0x2793e0u: goto label_2793e0;
        case 0x2793e4u: goto label_2793e4;
        case 0x2793e8u: goto label_2793e8;
        case 0x2793ecu: goto label_2793ec;
        case 0x2793f0u: goto label_2793f0;
        case 0x2793f4u: goto label_2793f4;
        case 0x2793f8u: goto label_2793f8;
        case 0x2793fcu: goto label_2793fc;
        case 0x279400u: goto label_279400;
        case 0x279404u: goto label_279404;
        case 0x279408u: goto label_279408;
        case 0x27940cu: goto label_27940c;
        case 0x279410u: goto label_279410;
        case 0x279414u: goto label_279414;
        case 0x279418u: goto label_279418;
        case 0x27941cu: goto label_27941c;
        case 0x279420u: goto label_279420;
        case 0x279424u: goto label_279424;
        case 0x279428u: goto label_279428;
        case 0x27942cu: goto label_27942c;
        case 0x279430u: goto label_279430;
        case 0x279434u: goto label_279434;
        case 0x279438u: goto label_279438;
        case 0x27943cu: goto label_27943c;
        case 0x279440u: goto label_279440;
        case 0x279444u: goto label_279444;
        case 0x279448u: goto label_279448;
        case 0x27944cu: goto label_27944c;
        case 0x279450u: goto label_279450;
        case 0x279454u: goto label_279454;
        case 0x279458u: goto label_279458;
        case 0x27945cu: goto label_27945c;
        case 0x279460u: goto label_279460;
        case 0x279464u: goto label_279464;
        case 0x279468u: goto label_279468;
        case 0x27946cu: goto label_27946c;
        case 0x279470u: goto label_279470;
        case 0x279474u: goto label_279474;
        case 0x279478u: goto label_279478;
        case 0x27947cu: goto label_27947c;
        case 0x279480u: goto label_279480;
        case 0x279484u: goto label_279484;
        case 0x279488u: goto label_279488;
        case 0x27948cu: goto label_27948c;
        case 0x279490u: goto label_279490;
        case 0x279494u: goto label_279494;
        case 0x279498u: goto label_279498;
        case 0x27949cu: goto label_27949c;
        case 0x2794a0u: goto label_2794a0;
        case 0x2794a4u: goto label_2794a4;
        case 0x2794a8u: goto label_2794a8;
        case 0x2794acu: goto label_2794ac;
        case 0x2794b0u: goto label_2794b0;
        case 0x2794b4u: goto label_2794b4;
        case 0x2794b8u: goto label_2794b8;
        case 0x2794bcu: goto label_2794bc;
        case 0x2794c0u: goto label_2794c0;
        case 0x2794c4u: goto label_2794c4;
        case 0x2794c8u: goto label_2794c8;
        case 0x2794ccu: goto label_2794cc;
        case 0x2794d0u: goto label_2794d0;
        case 0x2794d4u: goto label_2794d4;
        case 0x2794d8u: goto label_2794d8;
        case 0x2794dcu: goto label_2794dc;
        case 0x2794e0u: goto label_2794e0;
        case 0x2794e4u: goto label_2794e4;
        case 0x2794e8u: goto label_2794e8;
        case 0x2794ecu: goto label_2794ec;
        case 0x2794f0u: goto label_2794f0;
        case 0x2794f4u: goto label_2794f4;
        case 0x2794f8u: goto label_2794f8;
        case 0x2794fcu: goto label_2794fc;
        case 0x279500u: goto label_279500;
        case 0x279504u: goto label_279504;
        case 0x279508u: goto label_279508;
        case 0x27950cu: goto label_27950c;
        case 0x279510u: goto label_279510;
        case 0x279514u: goto label_279514;
        case 0x279518u: goto label_279518;
        case 0x27951cu: goto label_27951c;
        case 0x279520u: goto label_279520;
        case 0x279524u: goto label_279524;
        case 0x279528u: goto label_279528;
        case 0x27952cu: goto label_27952c;
        case 0x279530u: goto label_279530;
        case 0x279534u: goto label_279534;
        case 0x279538u: goto label_279538;
        case 0x27953cu: goto label_27953c;
        case 0x279540u: goto label_279540;
        case 0x279544u: goto label_279544;
        case 0x279548u: goto label_279548;
        case 0x27954cu: goto label_27954c;
        case 0x279550u: goto label_279550;
        case 0x279554u: goto label_279554;
        case 0x279558u: goto label_279558;
        case 0x27955cu: goto label_27955c;
        case 0x279560u: goto label_279560;
        case 0x279564u: goto label_279564;
        case 0x279568u: goto label_279568;
        case 0x27956cu: goto label_27956c;
        case 0x279570u: goto label_279570;
        case 0x279574u: goto label_279574;
        case 0x279578u: goto label_279578;
        case 0x27957cu: goto label_27957c;
        case 0x279580u: goto label_279580;
        case 0x279584u: goto label_279584;
        default: break;
    }

    ctx->pc = 0x2791b0u;

label_2791b0:
    // 0x2791b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2791b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2791b4:
    // 0x2791b4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2791b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_2791b8:
    // 0x2791b8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2791b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2791bc:
    // 0x2791bc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2791bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2791c0:
    // 0x2791c0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2791c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_2791c4:
    // 0x2791c4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2791c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_2791c8:
    // 0x2791c8: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2791c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2791cc:
    // 0x2791cc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2791ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2791d0:
    // 0x2791d0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2791d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2791d4:
    // 0x2791d4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2791d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2791d8:
    // 0x2791d8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2791d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2791dc:
    // 0x2791dc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2791dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_2791e0:
    // 0x2791e0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2791e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_2791e4:
    // 0x2791e4: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x2791e4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_2791e8:
    // 0x2791e8: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x2791e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_2791ec:
    // 0x2791ec: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2791ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_2791f0:
    // 0x2791f0: 0xc09c8c4  jal         func_272310
label_2791f4:
    if (ctx->pc == 0x2791F4u) {
        ctx->pc = 0x2791F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2791F0u;
        // 0x2791f4: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2791F8u;
        goto label_2791f8;
    }
    ctx->pc = 0x2791F0u;
    SET_GPR_U32(ctx, 31, 0x2791F8u);
    ctx->pc = 0x2791F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2791F0u;
    // 0x2791f4: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272310u, 0x2791F0u, 0x2791F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2791F8u;
label_2791f8:
    // 0x2791f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2791f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2791fc:
    // 0x2791fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2791fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_279200:
    // 0x279200: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
label_279204:
    if (ctx->pc == 0x279204u) {
        ctx->pc = 0x279204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279200u;
        // 0x279204: 0x3c15003a  lui         $s5, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279208u;
        goto label_279208;
    }
    ctx->pc = 0x279200u;
    {
        const bool branch_taken_0x279200 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x279204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279200u;
        // 0x279204: 0x3c15003a  lui         $s5, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279200) {
            ctx->pc = 0x279228u;
            goto label_279228;
        }
    }
    ctx->pc = 0x279208u;
label_279208:
    // 0x279208: 0x26a22d78  addiu       $v0, $s5, 0x2D78
    ctx->pc = 0x279208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 11640));
label_27920c:
    // 0x27920c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x27920cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_279210:
    // 0x279210: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x279210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_279214:
    // 0x279214: 0x8c63073c  lw          $v1, 0x73C($v1)
    ctx->pc = 0x279214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1852)));
label_279218:
    // 0x279218: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_27921c:
    if (ctx->pc == 0x27921Cu) {
        ctx->pc = 0x27921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279218u;
        // 0x27921c: 0x26b02d78  addiu       $s0, $s5, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 11640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279220u;
        goto label_279220;
    }
    ctx->pc = 0x279218u;
    {
        const bool branch_taken_0x279218 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x27921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279218u;
        // 0x27921c: 0x26b02d78  addiu       $s0, $s5, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 11640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279218) {
            ctx->pc = 0x27922Cu;
            goto label_27922c;
        }
    }
    ctx->pc = 0x279220u;
label_279220:
    // 0x279220: 0x100000cb  b           . + 4 + (0xCB << 2)
label_279224:
    if (ctx->pc == 0x279224u) {
        ctx->pc = 0x279224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279220u;
        // 0x279224: 0x2402ff92  addiu       $v0, $zero, -0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967186));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279228u;
        goto label_279228;
    }
    ctx->pc = 0x279220u;
    {
        const bool branch_taken_0x279220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279220u;
        // 0x279224: 0x2402ff92  addiu       $v0, $zero, -0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967186));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279220) {
            ctx->pc = 0x279550u;
            goto label_279550;
        }
    }
    ctx->pc = 0x279228u;
label_279228:
    // 0x279228: 0x26b02d78  addiu       $s0, $s5, 0x2D78
    ctx->pc = 0x279228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 11640));
label_27922c:
    // 0x27922c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x27922cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_279230:
    // 0x279230: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x279230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_279234:
    // 0x279234: 0x8c84069c  lw          $a0, 0x69C($a0)
    ctx->pc = 0x279234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1692)));
label_279238:
    // 0x279238: 0xc09dfc6  jal         func_277F18
label_27923c:
    if (ctx->pc == 0x27923Cu) {
        ctx->pc = 0x27923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279238u;
        // 0x27923c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279240u;
        goto label_279240;
    }
    ctx->pc = 0x279238u;
    SET_GPR_U32(ctx, 31, 0x279240u);
    ctx->pc = 0x27923Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279238u;
    // 0x27923c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277F18u, 0x279238u, 0x279240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279240u;
label_279240:
    // 0x279240: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x279240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_279244:
    // 0x279244: 0x6220091  bltzl       $s1, . + 4 + (0x91 << 2)
label_279248:
    if (ctx->pc == 0x279248u) {
        ctx->pc = 0x279248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279244u;
        // 0x279248: 0x26a22d78  addiu       $v0, $s5, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 11640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27924Cu;
        goto label_27924c;
    }
    ctx->pc = 0x279244u;
    {
        const bool branch_taken_0x279244 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x279244) {
            ctx->pc = 0x279248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279244u;
            // 0x279248: 0x26a22d78  addiu       $v0, $s5, 0x2D78 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 11640));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27948Cu;
            goto label_27948c;
        }
    }
    ctx->pc = 0x27924Cu;
label_27924c:
    // 0x27924c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x27924cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_279250:
    // 0x279250: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x279250u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
label_279254:
    // 0x279254: 0xac3106a0  sw          $s1, 0x6A0($at)
    ctx->pc = 0x279254u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1696), GPR_U32(ctx, 17));
label_279258:
    // 0x279258: 0xc09c940  jal         func_272500
label_27925c:
    if (ctx->pc == 0x27925Cu) {
        ctx->pc = 0x27925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279258u;
        // 0x27925c: 0x2411fda7  addiu       $s1, $zero, -0x259 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966695));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279260u;
        goto label_279260;
    }
    ctx->pc = 0x279258u;
    SET_GPR_U32(ctx, 31, 0x279260u);
    ctx->pc = 0x27925Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279258u;
    // 0x27925c: 0x2411fda7  addiu       $s1, $zero, -0x259 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966695));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272500u, 0x279258u, 0x279260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279260u;
label_279260:
    // 0x279260: 0x1c40008a  bgtz        $v0, . + 4 + (0x8A << 2)
label_279264:
    if (ctx->pc == 0x279264u) {
        ctx->pc = 0x279264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279260u;
        // 0x279264: 0x26a22d78  addiu       $v0, $s5, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 11640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279268u;
        goto label_279268;
    }
    ctx->pc = 0x279260u;
    {
        const bool branch_taken_0x279260 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x279264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279260u;
        // 0x279264: 0x26a22d78  addiu       $v0, $s5, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 11640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279260) {
            ctx->pc = 0x27948Cu;
            goto label_27948c;
        }
    }
    ctx->pc = 0x279268u;
label_279268:
    // 0x279268: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x279268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_27926c:
    // 0x27926c: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x27926cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
label_279270:
    // 0x279270: 0x8c30069c  lw          $s0, 0x69C($at)
    ctx->pc = 0x279270u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 1692)));
label_279274:
    // 0x279274: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x279274u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_279278:
    // 0x279278: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x279278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
label_27927c:
    // 0x27927c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x27927cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
label_279280:
    // 0x279280: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x279280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_279284:
    // 0x279284: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x279284u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
label_279288:
    // 0x279288: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x279288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
label_27928c:
    // 0x27928c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x27928cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_279290:
    // 0x279290: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x279290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
label_279294:
    // 0x279294: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x279294u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_279298:
    // 0x279298: 0xc0b7c76  jal         func_2DF1D8
label_27929c:
    if (ctx->pc == 0x27929Cu) {
        ctx->pc = 0x2792A0u;
        goto label_2792a0;
    }
    ctx->pc = 0x279298u;
    SET_GPR_U32(ctx, 31, 0x2792A0u);
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x279298u, 0x2792A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2792A0u;
label_2792a0:
    // 0x2792a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2792a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2792a4:
    // 0x2792a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2792a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2792a8:
    // 0x2792a8: 0x2112021  addu        $a0, $s0, $s1
    ctx->pc = 0x2792a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_2792ac:
    // 0x2792ac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2792acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2792b0:
    // 0x2792b0: 0x0  nop
    ctx->pc = 0x2792b0u;
    // NOP
label_2792b4:
    // 0x2792b4: 0x0  nop
    ctx->pc = 0x2792b4u;
    // NOP
label_2792b8:
    // 0x2792b8: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x2792b8u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
label_2792bc:
    // 0x2792bc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2792bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_2792c0:
    // 0x2792c0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2792c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2792c4:
    // 0x2792c4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2792c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2792c8:
    // 0x2792c8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2792c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2792cc:
    // 0x2792cc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2792d0:
    if (ctx->pc == 0x2792D0u) {
        ctx->pc = 0x2792D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2792CCu;
        // 0x2792d0: 0x2a230400  slti        $v1, $s1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1024) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2792D4u;
        goto label_2792d4;
    }
    ctx->pc = 0x2792CCu;
    {
        const bool branch_taken_0x2792cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2792D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2792CCu;
        // 0x2792d0: 0x2a230400  slti        $v1, $s1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1024) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2792cc) {
            ctx->pc = 0x2792E4u;
            goto label_2792e4;
        }
    }
    ctx->pc = 0x2792D4u;
label_2792d4:
    // 0x2792d4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2792d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_2792d8:
    // 0x2792d8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2792d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2792dc:
    // 0x2792dc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2792dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2792e0:
    // 0x2792e0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x2792e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
label_2792e4:
    // 0x2792e4: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_2792e8:
    if (ctx->pc == 0x2792E8u) {
        ctx->pc = 0x2792E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2792E4u;
        // 0x2792e8: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2792ECu;
        goto label_2792ec;
    }
    ctx->pc = 0x2792E4u;
    {
        const bool branch_taken_0x2792e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2792E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2792E4u;
        // 0x2792e8: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2792e4) {
            ctx->pc = 0x279298u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_279298;
        }
    }
    ctx->pc = 0x2792ECu;
label_2792ec:
    // 0x2792ec: 0x26b02d78  addiu       $s0, $s5, 0x2D78
    ctx->pc = 0x2792ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 11640));
label_2792f0:
    // 0x2792f0: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2792f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_2792f4:
    // 0x2792f4: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2792f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_2792f8:
    // 0x2792f8: 0xc043320  jal         func_10CC80
label_2792fc:
    if (ctx->pc == 0x2792FCu) {
        ctx->pc = 0x2792FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2792F8u;
        // 0x2792fc: 0x8c8406d0  lw          $a0, 0x6D0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1744)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279300u;
        goto label_279300;
    }
    ctx->pc = 0x2792F8u;
    SET_GPR_U32(ctx, 31, 0x279300u);
    ctx->pc = 0x2792FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2792F8u;
    // 0x2792fc: 0x8c8406d0  lw          $a0, 0x6D0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1744)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x2792F8u, 0x279300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279300u;
label_279300:
    // 0x279300: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x279300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_279304:
    // 0x279304: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x279304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_279308:
    // 0x279308: 0x8c42071c  lw          $v0, 0x71C($v0)
    ctx->pc = 0x279308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1820)));
label_27930c:
    // 0x27930c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x27930cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_279310:
    // 0x279310: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x279310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_279314:
    // 0x279314: 0x8c8406a4  lw          $a0, 0x6A4($a0)
    ctx->pc = 0x279314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1700)));
label_279318:
    // 0x279318: 0x40f809  jalr        $v0
label_27931c:
    if (ctx->pc == 0x27931Cu) {
        ctx->pc = 0x27931Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279318u;
        // 0x27931c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279320u;
        goto label_279320;
    }
    ctx->pc = 0x279318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x279320u);
        ctx->pc = 0x27931Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279318u;
        // 0x27931c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279318u, 0x279320u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x279320u;
label_279320:
    // 0x279320: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x279320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_279324:
    // 0x279324: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x279324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_279328:
    // 0x279328: 0x8c8406d0  lw          $a0, 0x6D0($a0)
    ctx->pc = 0x279328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1744)));
label_27932c:
    // 0x27932c: 0xc04332c  jal         func_10CCB0
label_279330:
    if (ctx->pc == 0x279330u) {
        ctx->pc = 0x279330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27932Cu;
        // 0x279330: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279334u;
        goto label_279334;
    }
    ctx->pc = 0x27932Cu;
    SET_GPR_U32(ctx, 31, 0x279334u);
    ctx->pc = 0x279330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27932Cu;
    // 0x279330: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x27932Cu, 0x279334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279334u;
label_279334:
    // 0x279334: 0x6200054  bltz        $s1, . + 4 + (0x54 << 2)
label_279338:
    if (ctx->pc == 0x279338u) {
        ctx->pc = 0x279338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279334u;
        // 0x279338: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27933Cu;
        goto label_27933c;
    }
    ctx->pc = 0x279334u;
    {
        const bool branch_taken_0x279334 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x279338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279334u;
        // 0x279338: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279334) {
            ctx->pc = 0x279488u;
            goto label_279488;
        }
    }
    ctx->pc = 0x27933Cu;
label_27933c:
    // 0x27933c: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
label_279340:
    if (ctx->pc == 0x279340u) {
        ctx->pc = 0x279340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27933Cu;
        // 0x279340: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279344u;
        goto label_279344;
    }
    ctx->pc = 0x27933Cu;
    {
        const bool branch_taken_0x27933c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x279340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27933Cu;
        // 0x279340: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27933c) {
            ctx->pc = 0x279350u;
            goto label_279350;
        }
    }
    ctx->pc = 0x279344u;
label_279344:
    // 0x279344: 0x10000050  b           . + 4 + (0x50 << 2)
label_279348:
    if (ctx->pc == 0x279348u) {
        ctx->pc = 0x279348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279344u;
        // 0x279348: 0x2411ff95  addiu       $s1, $zero, -0x6B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967189));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27934Cu;
        goto label_27934c;
    }
    ctx->pc = 0x279344u;
    {
        const bool branch_taken_0x279344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279344u;
        // 0x279348: 0x2411ff95  addiu       $s1, $zero, -0x6B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967189));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279344) {
            ctx->pc = 0x279488u;
            goto label_279488;
        }
    }
    ctx->pc = 0x27934Cu;
label_27934c:
    // 0x27934c: 0x0  nop
    ctx->pc = 0x27934cu;
    // NOP
label_279350:
    // 0x279350: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x279350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_279354:
    // 0x279354: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x279354u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
label_279358:
    // 0x279358: 0xac3106a8  sw          $s1, 0x6A8($at)
    ctx->pc = 0x279358u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1704), GPR_U32(ctx, 17));
label_27935c:
    // 0x27935c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27935cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_279360:
    // 0x279360: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x279360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_279364:
    // 0x279364: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x279364u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_279368:
    // 0x279368: 0xc09e3c2  jal         func_278F08
label_27936c:
    if (ctx->pc == 0x27936Cu) {
        ctx->pc = 0x27936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279368u;
        // 0x27936c: 0x27a80004  addiu       $t0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279370u;
        goto label_279370;
    }
    ctx->pc = 0x279368u;
    SET_GPR_U32(ctx, 31, 0x279370u);
    ctx->pc = 0x27936Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279368u;
    // 0x27936c: 0x27a80004  addiu       $t0, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278F08u, 0x279368u, 0x279370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279370u;
label_279370:
    // 0x279370: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x279370u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_279374:
    // 0x279374: 0x6200044  bltz        $s1, . + 4 + (0x44 << 2)
label_279378:
    if (ctx->pc == 0x279378u) {
        ctx->pc = 0x279378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279374u;
        // 0x279378: 0x34138032  ori         $s3, $zero, 0x8032 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32818);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27937Cu;
        goto label_27937c;
    }
    ctx->pc = 0x279374u;
    {
        const bool branch_taken_0x279374 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x279378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279374u;
        // 0x279378: 0x34138032  ori         $s3, $zero, 0x8032 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32818);
        ctx->in_delay_slot = false;
        if (branch_taken_0x279374) {
            ctx->pc = 0x279488u;
            goto label_279488;
        }
    }
    ctx->pc = 0x27937Cu;
label_27937c:
    // 0x27937c: 0x3c120001  lui         $s2, 0x1
    ctx->pc = 0x27937cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)1 << 16));
label_279380:
    // 0x279380: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x279380u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_279384:
    // 0x279384: 0x8e5206a4  lw          $s2, 0x6A4($s2)
    ctx->pc = 0x279384u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1700)));
label_279388:
    // 0x279388: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x279388u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27938c:
    // 0x27938c: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x27938cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
label_279390:
    // 0x279390: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x279390u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
label_279394:
    // 0x279394: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x279394u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_279398:
    // 0x279398: 0x3c148000  lui         $s4, 0x8000
    ctx->pc = 0x279398u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32768 << 16));
label_27939c:
    // 0x27939c: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x27939cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
label_2793a0:
    // 0x2793a0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2793a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2793a4:
    // 0x2793a4: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x2793a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
label_2793a8:
    // 0x2793a8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2793a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2793ac:
    // 0x2793ac: 0x0  nop
    ctx->pc = 0x2793acu;
    // NOP
label_2793b0:
    // 0x2793b0: 0xc0b7c76  jal         func_2DF1D8
label_2793b4:
    if (ctx->pc == 0x2793B4u) {
        ctx->pc = 0x2793B8u;
        goto label_2793b8;
    }
    ctx->pc = 0x2793B0u;
    SET_GPR_U32(ctx, 31, 0x2793B8u);
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2793B0u, 0x2793B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2793B8u;
label_2793b8:
    // 0x2793b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2793b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2793bc:
    // 0x2793bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2793bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2793c0:
    // 0x2793c0: 0x2512021  addu        $a0, $s2, $s1
    ctx->pc = 0x2793c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_2793c4:
    // 0x2793c4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2793c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2793c8:
    // 0x2793c8: 0x0  nop
    ctx->pc = 0x2793c8u;
    // NOP
label_2793cc:
    // 0x2793cc: 0x0  nop
    ctx->pc = 0x2793ccu;
    // NOP
label_2793d0:
    // 0x2793d0: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x2793d0u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
label_2793d4:
    // 0x2793d4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2793d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_2793d8:
    // 0x2793d8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2793d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2793dc:
    // 0x2793dc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2793dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2793e0:
    // 0x2793e0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2793e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2793e4:
    // 0x2793e4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2793e8:
    if (ctx->pc == 0x2793E8u) {
        ctx->pc = 0x2793E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2793E4u;
        // 0x2793e8: 0x271182b  sltu        $v1, $s3, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2793ECu;
        goto label_2793ec;
    }
    ctx->pc = 0x2793E4u;
    {
        const bool branch_taken_0x2793e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2793E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2793E4u;
        // 0x2793e8: 0x271182b  sltu        $v1, $s3, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2793e4) {
            ctx->pc = 0x2793FCu;
            goto label_2793fc;
        }
    }
    ctx->pc = 0x2793ECu;
label_2793ec:
    // 0x2793ec: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2793ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_2793f0:
    // 0x2793f0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2793f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2793f4:
    // 0x2793f4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2793f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2793f8:
    // 0x2793f8: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x2793f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
label_2793fc:
    // 0x2793fc: 0x1060ffec  beqz        $v1, . + 4 + (-0x14 << 2)
label_279400:
    if (ctx->pc == 0x279400u) {
        ctx->pc = 0x279400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2793FCu;
        // 0x279400: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279404u;
        goto label_279404;
    }
    ctx->pc = 0x2793FCu;
    {
        const bool branch_taken_0x2793fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x279400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2793FCu;
        // 0x279400: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2793fc) {
            ctx->pc = 0x2793B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2793b0;
        }
    }
    ctx->pc = 0x279404u;
label_279404:
    // 0x279404: 0x26b02d78  addiu       $s0, $s5, 0x2D78
    ctx->pc = 0x279404u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 11640));
label_279408:
    // 0x279408: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x279408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_27940c:
    // 0x27940c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x27940cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_279410:
    // 0x279410: 0xc043320  jal         func_10CC80
label_279414:
    if (ctx->pc == 0x279414u) {
        ctx->pc = 0x279414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279410u;
        // 0x279414: 0x8c8406d0  lw          $a0, 0x6D0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1744)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279418u;
        goto label_279418;
    }
    ctx->pc = 0x279410u;
    SET_GPR_U32(ctx, 31, 0x279418u);
    ctx->pc = 0x279414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279410u;
    // 0x279414: 0x8c8406d0  lw          $a0, 0x6D0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1744)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x279410u, 0x279418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279418u;
label_279418:
    // 0x279418: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x279418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_27941c:
    // 0x27941c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x27941cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_279420:
    // 0x279420: 0x8c420720  lw          $v0, 0x720($v0)
    ctx->pc = 0x279420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1824)));
label_279424:
    // 0x279424: 0x40f809  jalr        $v0
label_279428:
    if (ctx->pc == 0x279428u) {
        ctx->pc = 0x27942Cu;
        goto label_27942c;
    }
    ctx->pc = 0x279424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27942Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279424u, 0x27942Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27942Cu;
label_27942c:
    // 0x27942c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x27942cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_279430:
    // 0x279430: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x279430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_279434:
    // 0x279434: 0x8c8406d0  lw          $a0, 0x6D0($a0)
    ctx->pc = 0x279434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1744)));
label_279438:
    // 0x279438: 0xc04332c  jal         func_10CCB0
label_27943c:
    if (ctx->pc == 0x27943Cu) {
        ctx->pc = 0x27943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279438u;
        // 0x27943c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279440u;
        goto label_279440;
    }
    ctx->pc = 0x279438u;
    SET_GPR_U32(ctx, 31, 0x279440u);
    ctx->pc = 0x27943Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279438u;
    // 0x27943c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x279438u, 0x279440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279440u;
label_279440:
    // 0x279440: 0x6200043  bltz        $s1, . + 4 + (0x43 << 2)
label_279444:
    if (ctx->pc == 0x279444u) {
        ctx->pc = 0x279444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279440u;
        // 0x279444: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279448u;
        goto label_279448;
    }
    ctx->pc = 0x279440u;
    {
        const bool branch_taken_0x279440 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x279444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279440u;
        // 0x279444: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279440) {
            ctx->pc = 0x279550u;
            goto label_279550;
        }
    }
    ctx->pc = 0x279448u;
label_279448:
    // 0x279448: 0xc09c940  jal         func_272500
label_27944c:
    if (ctx->pc == 0x27944Cu) {
        ctx->pc = 0x279450u;
        goto label_279450;
    }
    ctx->pc = 0x279448u;
    SET_GPR_U32(ctx, 31, 0x279450u);
    ctx->pc = 0x272500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272500u, 0x279448u, 0x279450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279450u;
label_279450:
    // 0x279450: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_279454:
    if (ctx->pc == 0x279454u) {
        ctx->pc = 0x279454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279450u;
        // 0x279454: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279458u;
        goto label_279458;
    }
    ctx->pc = 0x279450u;
    {
        const bool branch_taken_0x279450 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x279454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279450u;
        // 0x279454: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279450) {
            ctx->pc = 0x279460u;
            goto label_279460;
        }
    }
    ctx->pc = 0x279458u;
label_279458:
    // 0x279458: 0x1000003d  b           . + 4 + (0x3D << 2)
label_27945c:
    if (ctx->pc == 0x27945Cu) {
        ctx->pc = 0x27945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279458u;
        // 0x27945c: 0x2402fda7  addiu       $v0, $zero, -0x259 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966695));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279460u;
        goto label_279460;
    }
    ctx->pc = 0x279458u;
    {
        const bool branch_taken_0x279458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279458u;
        // 0x27945c: 0x2402fda7  addiu       $v0, $zero, -0x259 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966695));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279458) {
            ctx->pc = 0x279550u;
            goto label_279550;
        }
    }
    ctx->pc = 0x279460u;
label_279460:
    // 0x279460: 0x1460003b  bnez        $v1, . + 4 + (0x3B << 2)
label_279464:
    if (ctx->pc == 0x279464u) {
        ctx->pc = 0x279464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279460u;
        // 0x279464: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279468u;
        goto label_279468;
    }
    ctx->pc = 0x279460u;
    {
        const bool branch_taken_0x279460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x279464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279460u;
        // 0x279464: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279460) {
            ctx->pc = 0x279550u;
            goto label_279550;
        }
    }
    ctx->pc = 0x279468u;
label_279468:
    // 0x279468: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x279468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_27946c:
    // 0x27946c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x27946cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_279470:
    // 0x279470: 0x8c6306a8  lw          $v1, 0x6A8($v1)
    ctx->pc = 0x279470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1704)));
label_279474:
    // 0x279474: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x279474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_279478:
    // 0x279478: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x279478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_27947c:
    // 0x27947c: 0x8c4206a0  lw          $v0, 0x6A0($v0)
    ctx->pc = 0x27947cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1696)));
label_279480:
    // 0x279480: 0x10000033  b           . + 4 + (0x33 << 2)
label_279484:
    if (ctx->pc == 0x279484u) {
        ctx->pc = 0x279484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279480u;
        // 0x279484: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279488u;
        goto label_279488;
    }
    ctx->pc = 0x279480u;
    {
        const bool branch_taken_0x279480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279480u;
        // 0x279484: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279480) {
            ctx->pc = 0x279550u;
            goto label_279550;
        }
    }
    ctx->pc = 0x279488u;
label_279488:
    // 0x279488: 0x26a22d78  addiu       $v0, $s5, 0x2D78
    ctx->pc = 0x279488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 11640));
label_27948c:
    // 0x27948c: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x27948cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
label_279490:
    // 0x279490: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x279490u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
label_279494:
    // 0x279494: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x279494u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_279498:
    // 0x279498: 0x3c120001  lui         $s2, 0x1
    ctx->pc = 0x279498u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)1 << 16));
label_27949c:
    // 0x27949c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x27949cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2794a0:
    // 0x2794a0: 0x8e5206a4  lw          $s2, 0x6A4($s2)
    ctx->pc = 0x2794a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1700)));
label_2794a4:
    // 0x2794a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2794a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2794a8:
    // 0x2794a8: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x2794a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
label_2794ac:
    // 0x2794ac: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2794acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2794b0:
    // 0x2794b0: 0x3c148000  lui         $s4, 0x8000
    ctx->pc = 0x2794b0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32768 << 16));
label_2794b4:
    // 0x2794b4: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x2794b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
label_2794b8:
    // 0x2794b8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2794b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2794bc:
    // 0x2794bc: 0x34138032  ori         $s3, $zero, 0x8032
    ctx->pc = 0x2794bcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32818);
label_2794c0:
    // 0x2794c0: 0xc0b7c76  jal         func_2DF1D8
label_2794c4:
    if (ctx->pc == 0x2794C4u) {
        ctx->pc = 0x2794C8u;
        goto label_2794c8;
    }
    ctx->pc = 0x2794C0u;
    SET_GPR_U32(ctx, 31, 0x2794C8u);
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2794C0u, 0x2794C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2794C8u;
label_2794c8:
    // 0x2794c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2794c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2794cc:
    // 0x2794cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2794ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2794d0:
    // 0x2794d0: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x2794d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_2794d4:
    // 0x2794d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2794d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2794d8:
    // 0x2794d8: 0x0  nop
    ctx->pc = 0x2794d8u;
    // NOP
label_2794dc:
    // 0x2794dc: 0x0  nop
    ctx->pc = 0x2794dcu;
    // NOP
label_2794e0:
    // 0x2794e0: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x2794e0u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
label_2794e4:
    // 0x2794e4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2794e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_2794e8:
    // 0x2794e8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2794e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2794ec:
    // 0x2794ec: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2794ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2794f0:
    // 0x2794f0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2794f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2794f4:
    // 0x2794f4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2794f8:
    if (ctx->pc == 0x2794F8u) {
        ctx->pc = 0x2794F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2794F4u;
        // 0x2794f8: 0x270182b  sltu        $v1, $s3, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2794FCu;
        goto label_2794fc;
    }
    ctx->pc = 0x2794F4u;
    {
        const bool branch_taken_0x2794f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2794F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2794F4u;
        // 0x2794f8: 0x270182b  sltu        $v1, $s3, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2794f4) {
            ctx->pc = 0x27950Cu;
            goto label_27950c;
        }
    }
    ctx->pc = 0x2794FCu;
label_2794fc:
    // 0x2794fc: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2794fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_279500:
    // 0x279500: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x279500u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_279504:
    // 0x279504: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x279504u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_279508:
    // 0x279508: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x279508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
label_27950c:
    // 0x27950c: 0x1060ffec  beqz        $v1, . + 4 + (-0x14 << 2)
label_279510:
    if (ctx->pc == 0x279510u) {
        ctx->pc = 0x279510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27950Cu;
        // 0x279510: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279514u;
        goto label_279514;
    }
    ctx->pc = 0x27950Cu;
    {
        const bool branch_taken_0x27950c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x279510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27950Cu;
        // 0x279510: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27950c) {
            ctx->pc = 0x2794C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2794c0;
        }
    }
    ctx->pc = 0x279514u;
label_279514:
    // 0x279514: 0x26b02d78  addiu       $s0, $s5, 0x2D78
    ctx->pc = 0x279514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 11640));
label_279518:
    // 0x279518: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x279518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_27951c:
    // 0x27951c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x27951cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_279520:
    // 0x279520: 0xc043320  jal         func_10CC80
label_279524:
    if (ctx->pc == 0x279524u) {
        ctx->pc = 0x279524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279520u;
        // 0x279524: 0x8c8406d0  lw          $a0, 0x6D0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1744)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279528u;
        goto label_279528;
    }
    ctx->pc = 0x279520u;
    SET_GPR_U32(ctx, 31, 0x279528u);
    ctx->pc = 0x279524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279520u;
    // 0x279524: 0x8c8406d0  lw          $a0, 0x6D0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1744)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x279520u, 0x279528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279528u;
label_279528:
    // 0x279528: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x279528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_27952c:
    // 0x27952c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x27952cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_279530:
    // 0x279530: 0x8c420720  lw          $v0, 0x720($v0)
    ctx->pc = 0x279530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1824)));
label_279534:
    // 0x279534: 0x40f809  jalr        $v0
label_279538:
    if (ctx->pc == 0x279538u) {
        ctx->pc = 0x27953Cu;
        goto label_27953c;
    }
    ctx->pc = 0x279534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27953Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279534u, 0x27953Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27953Cu;
label_27953c:
    // 0x27953c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x27953cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_279540:
    // 0x279540: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x279540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_279544:
    // 0x279544: 0xc04332c  jal         func_10CCB0
label_279548:
    if (ctx->pc == 0x279548u) {
        ctx->pc = 0x279548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279544u;
        // 0x279548: 0x8c8406d0  lw          $a0, 0x6D0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1744)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27954Cu;
        goto label_27954c;
    }
    ctx->pc = 0x279544u;
    SET_GPR_U32(ctx, 31, 0x27954Cu);
    ctx->pc = 0x279548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279544u;
    // 0x279548: 0x8c8406d0  lw          $a0, 0x6D0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1744)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x279544u, 0x27954Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27954Cu;
label_27954c:
    // 0x27954c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x27954cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_279550:
    // 0x279550: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x279550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_279554:
    // 0x279554: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x279554u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_279558:
    // 0x279558: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x279558u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_27955c:
    // 0x27955c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x27955cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_279560:
    // 0x279560: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x279560u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_279564:
    // 0x279564: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x279564u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_279568:
    // 0x279568: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x279568u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_27956c:
    // 0x27956c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x27956cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_279570:
    // 0x279570: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x279570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_279574:
    // 0x279574: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x279574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_279578:
    // 0x279578: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x279578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_27957c:
    // 0x27957c: 0x3e00008  jr          $ra
label_279580:
    if (ctx->pc == 0x279580u) {
        ctx->pc = 0x279580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27957Cu;
        // 0x279580: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279584u;
        goto label_279584;
    }
    ctx->pc = 0x27957Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27957Cu;
        // 0x279580: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27957Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279584u;
label_279584:
    // 0x279584: 0x0  nop
    ctx->pc = 0x279584u;
    // NOP
    if (ctx->pc == 0x279584u) { ctx->pc = 0x279588u; }
}
