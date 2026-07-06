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

// Function: sub_001B7068
// Address: 0x1b7068 - 0x1b74a8
void sub_001B7068_0x1b7068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7068_0x1b7068");
#endif

    switch (ctx->pc) {
        case 0x1b7068u: goto label_1b7068;
        case 0x1b706cu: goto label_1b706c;
        case 0x1b7070u: goto label_1b7070;
        case 0x1b7074u: goto label_1b7074;
        case 0x1b7078u: goto label_1b7078;
        case 0x1b707cu: goto label_1b707c;
        case 0x1b7080u: goto label_1b7080;
        case 0x1b7084u: goto label_1b7084;
        case 0x1b7088u: goto label_1b7088;
        case 0x1b708cu: goto label_1b708c;
        case 0x1b7090u: goto label_1b7090;
        case 0x1b7094u: goto label_1b7094;
        case 0x1b7098u: goto label_1b7098;
        case 0x1b709cu: goto label_1b709c;
        case 0x1b70a0u: goto label_1b70a0;
        case 0x1b70a4u: goto label_1b70a4;
        case 0x1b70a8u: goto label_1b70a8;
        case 0x1b70acu: goto label_1b70ac;
        case 0x1b70b0u: goto label_1b70b0;
        case 0x1b70b4u: goto label_1b70b4;
        case 0x1b70b8u: goto label_1b70b8;
        case 0x1b70bcu: goto label_1b70bc;
        case 0x1b70c0u: goto label_1b70c0;
        case 0x1b70c4u: goto label_1b70c4;
        case 0x1b70c8u: goto label_1b70c8;
        case 0x1b70ccu: goto label_1b70cc;
        case 0x1b70d0u: goto label_1b70d0;
        case 0x1b70d4u: goto label_1b70d4;
        case 0x1b70d8u: goto label_1b70d8;
        case 0x1b70dcu: goto label_1b70dc;
        case 0x1b70e0u: goto label_1b70e0;
        case 0x1b70e4u: goto label_1b70e4;
        case 0x1b70e8u: goto label_1b70e8;
        case 0x1b70ecu: goto label_1b70ec;
        case 0x1b70f0u: goto label_1b70f0;
        case 0x1b70f4u: goto label_1b70f4;
        case 0x1b70f8u: goto label_1b70f8;
        case 0x1b70fcu: goto label_1b70fc;
        case 0x1b7100u: goto label_1b7100;
        case 0x1b7104u: goto label_1b7104;
        case 0x1b7108u: goto label_1b7108;
        case 0x1b710cu: goto label_1b710c;
        case 0x1b7110u: goto label_1b7110;
        case 0x1b7114u: goto label_1b7114;
        case 0x1b7118u: goto label_1b7118;
        case 0x1b711cu: goto label_1b711c;
        case 0x1b7120u: goto label_1b7120;
        case 0x1b7124u: goto label_1b7124;
        case 0x1b7128u: goto label_1b7128;
        case 0x1b712cu: goto label_1b712c;
        case 0x1b7130u: goto label_1b7130;
        case 0x1b7134u: goto label_1b7134;
        case 0x1b7138u: goto label_1b7138;
        case 0x1b713cu: goto label_1b713c;
        case 0x1b7140u: goto label_1b7140;
        case 0x1b7144u: goto label_1b7144;
        case 0x1b7148u: goto label_1b7148;
        case 0x1b714cu: goto label_1b714c;
        case 0x1b7150u: goto label_1b7150;
        case 0x1b7154u: goto label_1b7154;
        case 0x1b7158u: goto label_1b7158;
        case 0x1b715cu: goto label_1b715c;
        case 0x1b7160u: goto label_1b7160;
        case 0x1b7164u: goto label_1b7164;
        case 0x1b7168u: goto label_1b7168;
        case 0x1b716cu: goto label_1b716c;
        case 0x1b7170u: goto label_1b7170;
        case 0x1b7174u: goto label_1b7174;
        case 0x1b7178u: goto label_1b7178;
        case 0x1b717cu: goto label_1b717c;
        case 0x1b7180u: goto label_1b7180;
        case 0x1b7184u: goto label_1b7184;
        case 0x1b7188u: goto label_1b7188;
        case 0x1b718cu: goto label_1b718c;
        case 0x1b7190u: goto label_1b7190;
        case 0x1b7194u: goto label_1b7194;
        case 0x1b7198u: goto label_1b7198;
        case 0x1b719cu: goto label_1b719c;
        case 0x1b71a0u: goto label_1b71a0;
        case 0x1b71a4u: goto label_1b71a4;
        case 0x1b71a8u: goto label_1b71a8;
        case 0x1b71acu: goto label_1b71ac;
        case 0x1b71b0u: goto label_1b71b0;
        case 0x1b71b4u: goto label_1b71b4;
        case 0x1b71b8u: goto label_1b71b8;
        case 0x1b71bcu: goto label_1b71bc;
        case 0x1b71c0u: goto label_1b71c0;
        case 0x1b71c4u: goto label_1b71c4;
        case 0x1b71c8u: goto label_1b71c8;
        case 0x1b71ccu: goto label_1b71cc;
        case 0x1b71d0u: goto label_1b71d0;
        case 0x1b71d4u: goto label_1b71d4;
        case 0x1b71d8u: goto label_1b71d8;
        case 0x1b71dcu: goto label_1b71dc;
        case 0x1b71e0u: goto label_1b71e0;
        case 0x1b71e4u: goto label_1b71e4;
        case 0x1b71e8u: goto label_1b71e8;
        case 0x1b71ecu: goto label_1b71ec;
        case 0x1b71f0u: goto label_1b71f0;
        case 0x1b71f4u: goto label_1b71f4;
        case 0x1b71f8u: goto label_1b71f8;
        case 0x1b71fcu: goto label_1b71fc;
        case 0x1b7200u: goto label_1b7200;
        case 0x1b7204u: goto label_1b7204;
        case 0x1b7208u: goto label_1b7208;
        case 0x1b720cu: goto label_1b720c;
        case 0x1b7210u: goto label_1b7210;
        case 0x1b7214u: goto label_1b7214;
        case 0x1b7218u: goto label_1b7218;
        case 0x1b721cu: goto label_1b721c;
        case 0x1b7220u: goto label_1b7220;
        case 0x1b7224u: goto label_1b7224;
        case 0x1b7228u: goto label_1b7228;
        case 0x1b722cu: goto label_1b722c;
        case 0x1b7230u: goto label_1b7230;
        case 0x1b7234u: goto label_1b7234;
        case 0x1b7238u: goto label_1b7238;
        case 0x1b723cu: goto label_1b723c;
        case 0x1b7240u: goto label_1b7240;
        case 0x1b7244u: goto label_1b7244;
        case 0x1b7248u: goto label_1b7248;
        case 0x1b724cu: goto label_1b724c;
        case 0x1b7250u: goto label_1b7250;
        case 0x1b7254u: goto label_1b7254;
        case 0x1b7258u: goto label_1b7258;
        case 0x1b725cu: goto label_1b725c;
        case 0x1b7260u: goto label_1b7260;
        case 0x1b7264u: goto label_1b7264;
        case 0x1b7268u: goto label_1b7268;
        case 0x1b726cu: goto label_1b726c;
        case 0x1b7270u: goto label_1b7270;
        case 0x1b7274u: goto label_1b7274;
        case 0x1b7278u: goto label_1b7278;
        case 0x1b727cu: goto label_1b727c;
        case 0x1b7280u: goto label_1b7280;
        case 0x1b7284u: goto label_1b7284;
        case 0x1b7288u: goto label_1b7288;
        case 0x1b728cu: goto label_1b728c;
        case 0x1b7290u: goto label_1b7290;
        case 0x1b7294u: goto label_1b7294;
        case 0x1b7298u: goto label_1b7298;
        case 0x1b729cu: goto label_1b729c;
        case 0x1b72a0u: goto label_1b72a0;
        case 0x1b72a4u: goto label_1b72a4;
        case 0x1b72a8u: goto label_1b72a8;
        case 0x1b72acu: goto label_1b72ac;
        case 0x1b72b0u: goto label_1b72b0;
        case 0x1b72b4u: goto label_1b72b4;
        case 0x1b72b8u: goto label_1b72b8;
        case 0x1b72bcu: goto label_1b72bc;
        case 0x1b72c0u: goto label_1b72c0;
        case 0x1b72c4u: goto label_1b72c4;
        case 0x1b72c8u: goto label_1b72c8;
        case 0x1b72ccu: goto label_1b72cc;
        case 0x1b72d0u: goto label_1b72d0;
        case 0x1b72d4u: goto label_1b72d4;
        case 0x1b72d8u: goto label_1b72d8;
        case 0x1b72dcu: goto label_1b72dc;
        case 0x1b72e0u: goto label_1b72e0;
        case 0x1b72e4u: goto label_1b72e4;
        case 0x1b72e8u: goto label_1b72e8;
        case 0x1b72ecu: goto label_1b72ec;
        case 0x1b72f0u: goto label_1b72f0;
        case 0x1b72f4u: goto label_1b72f4;
        case 0x1b72f8u: goto label_1b72f8;
        case 0x1b72fcu: goto label_1b72fc;
        case 0x1b7300u: goto label_1b7300;
        case 0x1b7304u: goto label_1b7304;
        case 0x1b7308u: goto label_1b7308;
        case 0x1b730cu: goto label_1b730c;
        case 0x1b7310u: goto label_1b7310;
        case 0x1b7314u: goto label_1b7314;
        case 0x1b7318u: goto label_1b7318;
        case 0x1b731cu: goto label_1b731c;
        case 0x1b7320u: goto label_1b7320;
        case 0x1b7324u: goto label_1b7324;
        case 0x1b7328u: goto label_1b7328;
        case 0x1b732cu: goto label_1b732c;
        case 0x1b7330u: goto label_1b7330;
        case 0x1b7334u: goto label_1b7334;
        case 0x1b7338u: goto label_1b7338;
        case 0x1b733cu: goto label_1b733c;
        case 0x1b7340u: goto label_1b7340;
        case 0x1b7344u: goto label_1b7344;
        case 0x1b7348u: goto label_1b7348;
        case 0x1b734cu: goto label_1b734c;
        case 0x1b7350u: goto label_1b7350;
        case 0x1b7354u: goto label_1b7354;
        case 0x1b7358u: goto label_1b7358;
        case 0x1b735cu: goto label_1b735c;
        case 0x1b7360u: goto label_1b7360;
        case 0x1b7364u: goto label_1b7364;
        case 0x1b7368u: goto label_1b7368;
        case 0x1b736cu: goto label_1b736c;
        case 0x1b7370u: goto label_1b7370;
        case 0x1b7374u: goto label_1b7374;
        case 0x1b7378u: goto label_1b7378;
        case 0x1b737cu: goto label_1b737c;
        case 0x1b7380u: goto label_1b7380;
        case 0x1b7384u: goto label_1b7384;
        case 0x1b7388u: goto label_1b7388;
        case 0x1b738cu: goto label_1b738c;
        case 0x1b7390u: goto label_1b7390;
        case 0x1b7394u: goto label_1b7394;
        case 0x1b7398u: goto label_1b7398;
        case 0x1b739cu: goto label_1b739c;
        case 0x1b73a0u: goto label_1b73a0;
        case 0x1b73a4u: goto label_1b73a4;
        case 0x1b73a8u: goto label_1b73a8;
        case 0x1b73acu: goto label_1b73ac;
        case 0x1b73b0u: goto label_1b73b0;
        case 0x1b73b4u: goto label_1b73b4;
        case 0x1b73b8u: goto label_1b73b8;
        case 0x1b73bcu: goto label_1b73bc;
        case 0x1b73c0u: goto label_1b73c0;
        case 0x1b73c4u: goto label_1b73c4;
        case 0x1b73c8u: goto label_1b73c8;
        case 0x1b73ccu: goto label_1b73cc;
        case 0x1b73d0u: goto label_1b73d0;
        case 0x1b73d4u: goto label_1b73d4;
        case 0x1b73d8u: goto label_1b73d8;
        case 0x1b73dcu: goto label_1b73dc;
        case 0x1b73e0u: goto label_1b73e0;
        case 0x1b73e4u: goto label_1b73e4;
        case 0x1b73e8u: goto label_1b73e8;
        case 0x1b73ecu: goto label_1b73ec;
        case 0x1b73f0u: goto label_1b73f0;
        case 0x1b73f4u: goto label_1b73f4;
        case 0x1b73f8u: goto label_1b73f8;
        case 0x1b73fcu: goto label_1b73fc;
        case 0x1b7400u: goto label_1b7400;
        case 0x1b7404u: goto label_1b7404;
        case 0x1b7408u: goto label_1b7408;
        case 0x1b740cu: goto label_1b740c;
        case 0x1b7410u: goto label_1b7410;
        case 0x1b7414u: goto label_1b7414;
        case 0x1b7418u: goto label_1b7418;
        case 0x1b741cu: goto label_1b741c;
        case 0x1b7420u: goto label_1b7420;
        case 0x1b7424u: goto label_1b7424;
        case 0x1b7428u: goto label_1b7428;
        case 0x1b742cu: goto label_1b742c;
        case 0x1b7430u: goto label_1b7430;
        case 0x1b7434u: goto label_1b7434;
        case 0x1b7438u: goto label_1b7438;
        case 0x1b743cu: goto label_1b743c;
        case 0x1b7440u: goto label_1b7440;
        case 0x1b7444u: goto label_1b7444;
        case 0x1b7448u: goto label_1b7448;
        case 0x1b744cu: goto label_1b744c;
        case 0x1b7450u: goto label_1b7450;
        case 0x1b7454u: goto label_1b7454;
        case 0x1b7458u: goto label_1b7458;
        case 0x1b745cu: goto label_1b745c;
        case 0x1b7460u: goto label_1b7460;
        case 0x1b7464u: goto label_1b7464;
        case 0x1b7468u: goto label_1b7468;
        case 0x1b746cu: goto label_1b746c;
        case 0x1b7470u: goto label_1b7470;
        case 0x1b7474u: goto label_1b7474;
        case 0x1b7478u: goto label_1b7478;
        case 0x1b747cu: goto label_1b747c;
        case 0x1b7480u: goto label_1b7480;
        case 0x1b7484u: goto label_1b7484;
        case 0x1b7488u: goto label_1b7488;
        case 0x1b748cu: goto label_1b748c;
        case 0x1b7490u: goto label_1b7490;
        case 0x1b7494u: goto label_1b7494;
        case 0x1b7498u: goto label_1b7498;
        case 0x1b749cu: goto label_1b749c;
        case 0x1b74a0u: goto label_1b74a0;
        case 0x1b74a4u: goto label_1b74a4;
        default: break;
    }

    ctx->pc = 0x1b7068u;

label_1b7068:
    // 0x1b7068: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1b7068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
label_1b706c:
    // 0x1b706c: 0x2463b424  addiu       $v1, $v1, -0x4BDC
    ctx->pc = 0x1b706cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947876));
label_1b7070:
    // 0x1b7070: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b7070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1b7074:
    // 0x1b7074: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b7074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1b7078:
    // 0x1b7078: 0x3e00008  jr          $ra
label_1b707c:
    if (ctx->pc == 0x1B707Cu) {
        ctx->pc = 0x1B707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7078u;
        // 0x1b707c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7080u;
        goto label_1b7080;
    }
    ctx->pc = 0x1B7078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7078u;
        // 0x1b707c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7080u;
label_1b7080:
    // 0x1b7080: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b7080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1b7084:
    // 0x1b7084: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1b7084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1b7088:
    // 0x1b7088: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1b7088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_1b708c:
    // 0x1b708c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b708cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b7090:
    // 0x1b7090: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1b7090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1b7094:
    // 0x1b7094: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b7094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1b7098:
    // 0x1b7098: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1b7098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1b709c:
    // 0x1b709c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1b709cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_1b70a0:
    // 0x1b70a0: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x1b70a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1b70a4:
    // 0x1b70a4: 0xc06fb80  jal         func_1BEE00
label_1b70a8:
    if (ctx->pc == 0x1B70A8u) {
        ctx->pc = 0x1B70A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B70A4u;
        // 0x1b70a8: 0x8e740004  lw          $s4, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B70ACu;
        goto label_1b70ac;
    }
    ctx->pc = 0x1B70A4u;
    SET_GPR_U32(ctx, 31, 0x1B70ACu);
    ctx->pc = 0x1B70A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B70A4u;
    // 0x1b70a8: 0x8e740004  lw          $s4, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEE00u, 0x1B70A4u, 0x1B70ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B70ACu;
label_1b70ac:
    // 0x1b70ac: 0xc06e042  jal         func_1B8108
label_1b70b0:
    if (ctx->pc == 0x1B70B0u) {
        ctx->pc = 0x1B70B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B70ACu;
        // 0x1b70b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B70B4u;
        goto label_1b70b4;
    }
    ctx->pc = 0x1B70ACu;
    SET_GPR_U32(ctx, 31, 0x1B70B4u);
    ctx->pc = 0x1B70B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B70ACu;
    // 0x1b70b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8108u, 0x1B70ACu, 0x1B70B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B70B4u;
label_1b70b4:
    // 0x1b70b4: 0x82630002  lb          $v1, 0x2($s3)
    ctx->pc = 0x1b70b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_1b70b8:
    // 0x1b70b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b70b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b70bc:
    // 0x1b70bc: 0x54620061  bnel        $v1, $v0, . + 4 + (0x61 << 2)
label_1b70c0:
    if (ctx->pc == 0x1B70C0u) {
        ctx->pc = 0x1B70C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B70BCu;
        // 0x1b70c0: 0x82630001  lb          $v1, 0x1($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B70C4u;
        goto label_1b70c4;
    }
    ctx->pc = 0x1B70BCu;
    {
        const bool branch_taken_0x1b70bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b70bc) {
            ctx->pc = 0x1B70C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B70BCu;
            // 0x1b70c0: 0x82630001  lb          $v1, 0x1($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7244u;
            goto label_1b7244;
        }
    }
    ctx->pc = 0x1B70C4u;
label_1b70c4:
    // 0x1b70c4: 0x5603003c  bnel        $s0, $v1, . + 4 + (0x3C << 2)
label_1b70c8:
    if (ctx->pc == 0x1B70C8u) {
        ctx->pc = 0x1B70C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B70C4u;
        // 0x1b70c8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B70CCu;
        goto label_1b70cc;
    }
    ctx->pc = 0x1B70C4u;
    {
        const bool branch_taken_0x1b70c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b70c4) {
            ctx->pc = 0x1B70C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B70C4u;
            // 0x1b70c8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B71B8u;
            goto label_1b71b8;
        }
    }
    ctx->pc = 0x1B70CCu;
label_1b70cc:
    // 0x1b70cc: 0xa2600002  sb          $zero, 0x2($s3)
    ctx->pc = 0x1b70ccu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
label_1b70d0:
    // 0x1b70d0: 0xc06e048  jal         func_1B8120
label_1b70d4:
    if (ctx->pc == 0x1B70D4u) {
        ctx->pc = 0x1B70D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B70D0u;
        // 0x1b70d4: 0x26720024  addiu       $s2, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B70D8u;
        goto label_1b70d8;
    }
    ctx->pc = 0x1B70D0u;
    SET_GPR_U32(ctx, 31, 0x1B70D8u);
    ctx->pc = 0x1B70D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B70D0u;
    // 0x1b70d4: 0x26720024  addiu       $s2, $s3, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8120u, 0x1B70D0u, 0x1B70D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B70D8u;
label_1b70d8:
    // 0x1b70d8: 0x8e700020  lw          $s0, 0x20($s3)
    ctx->pc = 0x1b70d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1b70dc:
    // 0x1b70dc: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x1b70dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b70e0:
    // 0x1b70e0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b70e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b70e4:
    // 0x1b70e4: 0x1082c0  sll         $s0, $s0, 11
    ctx->pc = 0x1b70e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 11));
label_1b70e8:
    // 0x1b70e8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1b70e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b70ec:
    // 0x1b70ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b70ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b70f0:
    // 0x1b70f0: 0xc07337e  jal         func_1CCDF8
label_1b70f4:
    if (ctx->pc == 0x1B70F4u) {
        ctx->pc = 0x1B70F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B70F0u;
        // 0x1b70f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B70F8u;
        goto label_1b70f8;
    }
    ctx->pc = 0x1B70F0u;
    SET_GPR_U32(ctx, 31, 0x1B70F8u);
    ctx->pc = 0x1B70F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B70F0u;
    // 0x1b70f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCDF8u, 0x1B70F0u, 0x1B70F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B70F8u;
label_1b70f8:
    // 0x1b70f8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1b70f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1b70fc:
    // 0x1b70fc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b70fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b7100:
    // 0x1b7100: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b7100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b7104:
    // 0x1b7104: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1b7104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1b7108:
    // 0x1b7108: 0x40f809  jalr        $v0
label_1b710c:
    if (ctx->pc == 0x1B710Cu) {
        ctx->pc = 0x1B710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7108u;
        // 0x1b710c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7110u;
        goto label_1b7110;
    }
    ctx->pc = 0x1B7108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B7110u);
        ctx->pc = 0x1B710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7108u;
        // 0x1b710c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7108u, 0x1B7110u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B7110u;
label_1b7110:
    // 0x1b7110: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1b7110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1b7114:
    // 0x1b7114: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b7114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b7118:
    // 0x1b7118: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b7118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b711c:
    // 0x1b711c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1b711cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1b7120:
    // 0x1b7120: 0x40f809  jalr        $v0
label_1b7124:
    if (ctx->pc == 0x1B7124u) {
        ctx->pc = 0x1B7124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7120u;
        // 0x1b7124: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7128u;
        goto label_1b7128;
    }
    ctx->pc = 0x1B7120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B7128u);
        ctx->pc = 0x1B7124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7120u;
        // 0x1b7124: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7120u, 0x1B7128u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B7128u;
label_1b7128:
    // 0x1b7128: 0x8e630058  lw          $v1, 0x58($s3)
    ctx->pc = 0x1b7128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_1b712c:
    // 0x1b712c: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x1b712cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_1b7130:
    // 0x1b7130: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x1b7130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1b7134:
    // 0x1b7134: 0x8e650030  lw          $a1, 0x30($s3)
    ctx->pc = 0x1b7134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_1b7138:
    // 0x1b7138: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1b7138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1b713c:
    // 0x1b713c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b713cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b7140:
    // 0x1b7140: 0xae620034  sw          $v0, 0x34($s3)
    ctx->pc = 0x1b7140u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 2));
label_1b7144:
    // 0x1b7144: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1b7144u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1b7148:
    // 0x1b7148: 0xae630058  sw          $v1, 0x58($s3)
    ctx->pc = 0x1b7148u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 3));
label_1b714c:
    // 0x1b714c: 0xae600028  sw          $zero, 0x28($s3)
    ctx->pc = 0x1b714cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
label_1b7150:
    // 0x1b7150: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
label_1b7154:
    if (ctx->pc == 0x1B7154u) {
        ctx->pc = 0x1B7154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7150u;
        // 0x1b7154: 0x8e700014  lw          $s0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7158u;
        goto label_1b7158;
    }
    ctx->pc = 0x1B7150u;
    {
        const bool branch_taken_0x1b7150 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1B7154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7150u;
        // 0x1b7154: 0x8e700014  lw          $s0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7150) {
            ctx->pc = 0x1B716Cu;
            goto label_1b716c;
        }
    }
    ctx->pc = 0x1B7158u;
label_1b7158:
    // 0x1b7158: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x1b7158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_1b715c:
    // 0x1b715c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1b7160:
    if (ctx->pc == 0x1B7160u) {
        ctx->pc = 0x1B7160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B715Cu;
        // 0x1b7160: 0x8e620058  lw          $v0, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7164u;
        goto label_1b7164;
    }
    ctx->pc = 0x1B715Cu;
    {
        const bool branch_taken_0x1b715c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b715c) {
            ctx->pc = 0x1B7160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B715Cu;
            // 0x1b7160: 0x8e620058  lw          $v0, 0x58($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7170u;
            goto label_1b7170;
        }
    }
    ctx->pc = 0x1B7164u;
label_1b7164:
    // 0x1b7164: 0x40f809  jalr        $v0
label_1b7168:
    if (ctx->pc == 0x1B7168u) {
        ctx->pc = 0x1B7168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7164u;
        // 0x1b7168: 0x8e64003c  lw          $a0, 0x3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B716Cu;
        goto label_1b716c;
    }
    ctx->pc = 0x1B7164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B716Cu);
        ctx->pc = 0x1B7168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7164u;
        // 0x1b7168: 0x8e64003c  lw          $a0, 0x3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7164u, 0x1B716Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B716Cu;
label_1b716c:
    // 0x1b716c: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x1b716cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_1b7170:
    // 0x1b7170: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x1b7170u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1b7174:
    // 0x1b7174: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1b7178:
    if (ctx->pc == 0x1B7178u) {
        ctx->pc = 0x1B7178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7174u;
        // 0x1b7178: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B717Cu;
        goto label_1b717c;
    }
    ctx->pc = 0x1B7174u;
    {
        const bool branch_taken_0x1b7174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7174u;
        // 0x1b7178: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7174) {
            ctx->pc = 0x1B71ACu;
            goto label_1b71ac;
        }
    }
    ctx->pc = 0x1B717Cu;
label_1b717c:
    // 0x1b717c: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x1b717cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_1b7180:
    // 0x1b7180: 0x8e63005c  lw          $v1, 0x5C($s3)
    ctx->pc = 0x1b7180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
label_1b7184:
    // 0x1b7184: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x1b7184u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
label_1b7188:
    // 0x1b7188: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1b7188u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1b718c:
    // 0x1b718c: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
label_1b7190:
    if (ctx->pc == 0x1B7190u) {
        ctx->pc = 0x1B7190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B718Cu;
        // 0x1b7190: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7194u;
        goto label_1b7194;
    }
    ctx->pc = 0x1B718Cu;
    {
        const bool branch_taken_0x1b718c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b718c) {
            ctx->pc = 0x1B7190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B718Cu;
            // 0x1b7190: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7240u;
            goto label_1b7240;
        }
    }
    ctx->pc = 0x1B7194u;
label_1b7194:
    // 0x1b7194: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x1b7194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_1b7198:
    // 0x1b7198: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x1b7198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_1b719c:
    // 0x1b719c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1b719cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1b71a0:
    // 0x1b71a0: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
label_1b71a4:
    if (ctx->pc == 0x1B71A4u) {
        ctx->pc = 0x1B71A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B71A0u;
        // 0x1b71a4: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B71A8u;
        goto label_1b71a8;
    }
    ctx->pc = 0x1B71A0u;
    {
        const bool branch_taken_0x1b71a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b71a0) {
            ctx->pc = 0x1B71A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B71A0u;
            // 0x1b71a4: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7240u;
            goto label_1b7240;
        }
    }
    ctx->pc = 0x1B71A8u;
label_1b71a8:
    // 0x1b71a8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b71a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b71ac:
    // 0x1b71ac: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x1b71acu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
label_1b71b0:
    // 0x1b71b0: 0x10000023  b           . + 4 + (0x23 << 2)
label_1b71b4:
    if (ctx->pc == 0x1B71B4u) {
        ctx->pc = 0x1B71B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B71B0u;
        // 0x1b71b4: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B71B8u;
        goto label_1b71b8;
    }
    ctx->pc = 0x1B71B0u;
    {
        const bool branch_taken_0x1b71b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B71B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B71B0u;
        // 0x1b71b4: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b71b0) {
            ctx->pc = 0x1B7240u;
            goto label_1b7240;
        }
    }
    ctx->pc = 0x1B71B8u;
label_1b71b8:
    // 0x1b71b8: 0x1602001f  bne         $s0, $v0, . + 4 + (0x1F << 2)
label_1b71bc:
    if (ctx->pc == 0x1B71BCu) {
        ctx->pc = 0x1B71C0u;
        goto label_1b71c0;
    }
    ctx->pc = 0x1B71B8u;
    {
        const bool branch_taken_0x1b71b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b71b8) {
            ctx->pc = 0x1B7238u;
            goto label_1b7238;
        }
    }
    ctx->pc = 0x1B71C0u;
label_1b71c0:
    // 0x1b71c0: 0xa2600002  sb          $zero, 0x2($s3)
    ctx->pc = 0x1b71c0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
label_1b71c4:
    // 0x1b71c4: 0xc06e048  jal         func_1B8120
label_1b71c8:
    if (ctx->pc == 0x1B71C8u) {
        ctx->pc = 0x1B71C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B71C4u;
        // 0x1b71c8: 0x26700024  addiu       $s0, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B71CCu;
        goto label_1b71cc;
    }
    ctx->pc = 0x1B71C4u;
    SET_GPR_U32(ctx, 31, 0x1B71CCu);
    ctx->pc = 0x1B71C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B71C4u;
    // 0x1b71c8: 0x26700024  addiu       $s0, $s3, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8120u, 0x1B71C4u, 0x1B71CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B71CCu;
label_1b71cc:
    // 0x1b71cc: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1b71ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1b71d0:
    // 0x1b71d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b71d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b71d4:
    // 0x1b71d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b71d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b71d8:
    // 0x1b71d8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1b71d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1b71dc:
    // 0x1b71dc: 0x40f809  jalr        $v0
label_1b71e0:
    if (ctx->pc == 0x1B71E0u) {
        ctx->pc = 0x1B71E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B71DCu;
        // 0x1b71e0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B71E4u;
        goto label_1b71e4;
    }
    ctx->pc = 0x1B71DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B71E4u);
        ctx->pc = 0x1B71E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B71DCu;
        // 0x1b71e0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B71DCu, 0x1B71E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B71E4u;
label_1b71e4:
    // 0x1b71e4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1b71e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1b71e8:
    // 0x1b71e8: 0xae600028  sw          $zero, 0x28($s3)
    ctx->pc = 0x1b71e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
label_1b71ec:
    // 0x1b71ec: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1b71ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1b71f0:
    // 0x1b71f0: 0x8c42b420  lw          $v0, -0x4BE0($v0)
    ctx->pc = 0x1b71f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947872)));
label_1b71f4:
    // 0x1b71f4: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
label_1b71f8:
    if (ctx->pc == 0x1B71F8u) {
        ctx->pc = 0x1B71F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B71F4u;
        // 0x1b71f8: 0x8e63004c  lw          $v1, 0x4C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B71FCu;
        goto label_1b71fc;
    }
    ctx->pc = 0x1B71F4u;
    {
        const bool branch_taken_0x1b71f4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B71F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B71F4u;
        // 0x1b71f8: 0x8e63004c  lw          $v1, 0x4C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b71f4) {
            ctx->pc = 0x1B7218u;
            goto label_1b7218;
        }
    }
    ctx->pc = 0x1B71FCu;
label_1b71fc:
    // 0x1b71fc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1b71fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b7200:
    // 0x1b7200: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1b7204:
    if (ctx->pc == 0x1B7204u) {
        ctx->pc = 0x1B7204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7200u;
        // 0x1b7204: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7208u;
        goto label_1b7208;
    }
    ctx->pc = 0x1B7200u;
    {
        const bool branch_taken_0x1b7200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7200u;
        // 0x1b7204: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7200) {
            ctx->pc = 0x1B721Cu;
            goto label_1b721c;
        }
    }
    ctx->pc = 0x1B7208u;
label_1b7208:
    // 0x1b7208: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b7208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b720c:
    // 0x1b720c: 0x1000000c  b           . + 4 + (0xC << 2)
label_1b7210:
    if (ctx->pc == 0x1B7210u) {
        ctx->pc = 0x1B7210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B720Cu;
        // 0x1b7210: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7214u;
        goto label_1b7214;
    }
    ctx->pc = 0x1B720Cu;
    {
        const bool branch_taken_0x1b720c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B720Cu;
        // 0x1b7210: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b720c) {
            ctx->pc = 0x1B7240u;
            goto label_1b7240;
        }
    }
    ctx->pc = 0x1B7214u;
label_1b7214:
    // 0x1b7214: 0x0  nop
    ctx->pc = 0x1b7214u;
    // NOP
label_1b7218:
    // 0x1b7218: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1b7218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_1b721c:
    // 0x1b721c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x1b721cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_1b7220:
    // 0x1b7220: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b7220u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b7224:
    // 0x1b7224: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_1b7228:
    if (ctx->pc == 0x1B7228u) {
        ctx->pc = 0x1B7228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7224u;
        // 0x1b7228: 0x82630001  lb          $v1, 0x1($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B722Cu;
        goto label_1b722c;
    }
    ctx->pc = 0x1B7224u;
    {
        const bool branch_taken_0x1b7224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7224) {
            ctx->pc = 0x1B7228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7224u;
            // 0x1b7228: 0x82630001  lb          $v1, 0x1($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7244u;
            goto label_1b7244;
        }
    }
    ctx->pc = 0x1B722Cu;
label_1b722c:
    // 0x1b722c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1b722cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b7230:
    // 0x1b7230: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b7234:
    if (ctx->pc == 0x1B7234u) {
        ctx->pc = 0x1B7234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7230u;
        // 0x1b7234: 0xae62004c  sw          $v0, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7238u;
        goto label_1b7238;
    }
    ctx->pc = 0x1B7230u;
    {
        const bool branch_taken_0x1b7230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7230u;
        // 0x1b7234: 0xae62004c  sw          $v0, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7230) {
            ctx->pc = 0x1B7240u;
            goto label_1b7240;
        }
    }
    ctx->pc = 0x1B7238u;
label_1b7238:
    // 0x1b7238: 0xc06e048  jal         func_1B8120
label_1b723c:
    if (ctx->pc == 0x1B723Cu) {
        ctx->pc = 0x1B7240u;
        goto label_1b7240;
    }
    ctx->pc = 0x1B7238u;
    SET_GPR_U32(ctx, 31, 0x1B7240u);
    ctx->pc = 0x1B8120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8120u, 0x1B7238u, 0x1B7240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7240u;
label_1b7240:
    // 0x1b7240: 0x82630001  lb          $v1, 0x1($s3)
    ctx->pc = 0x1b7240u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_1b7244:
    // 0x1b7244: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b7244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b7248:
    // 0x1b7248: 0x1062008f  beq         $v1, $v0, . + 4 + (0x8F << 2)
label_1b724c:
    if (ctx->pc == 0x1B724Cu) {
        ctx->pc = 0x1B724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7248u;
        // 0x1b724c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7250u;
        goto label_1b7250;
    }
    ctx->pc = 0x1B7248u;
    {
        const bool branch_taken_0x1b7248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7248u;
        // 0x1b724c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7248) {
            ctx->pc = 0x1B7488u;
            goto label_1b7488;
        }
    }
    ctx->pc = 0x1B7250u;
label_1b7250:
    // 0x1b7250: 0x82620002  lb          $v0, 0x2($s3)
    ctx->pc = 0x1b7250u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_1b7254:
    // 0x1b7254: 0x1440008d  bnez        $v0, . + 4 + (0x8D << 2)
label_1b7258:
    if (ctx->pc == 0x1B7258u) {
        ctx->pc = 0x1B7258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7254u;
        // 0x1b7258: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B725Cu;
        goto label_1b725c;
    }
    ctx->pc = 0x1B7254u;
    {
        const bool branch_taken_0x1b7254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7254u;
        // 0x1b7258: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7254) {
            ctx->pc = 0x1B748Cu;
            goto label_1b748c;
        }
    }
    ctx->pc = 0x1B725Cu;
label_1b725c:
    // 0x1b725c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b725cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b7260:
    // 0x1b7260: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x1b7260u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
label_1b7264:
    // 0x1b7264: 0xa2620002  sb          $v0, 0x2($s3)
    ctx->pc = 0x1b7264u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 2));
label_1b7268:
    // 0x1b7268: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b7268u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b726c:
    // 0x1b726c: 0xc06e048  jal         func_1B8120
label_1b7270:
    if (ctx->pc == 0x1B7270u) {
        ctx->pc = 0x1B7270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B726Cu;
        // 0x1b7270: 0xae600028  sw          $zero, 0x28($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7274u;
        goto label_1b7274;
    }
    ctx->pc = 0x1B726Cu;
    SET_GPR_U32(ctx, 31, 0x1B7274u);
    ctx->pc = 0x1B7270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B726Cu;
    // 0x1b7270: 0xae600028  sw          $zero, 0x28($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8120u, 0x1B726Cu, 0x1B7274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7274u;
label_1b7274:
    // 0x1b7274: 0x82620044  lb          $v0, 0x44($s3)
    ctx->pc = 0x1b7274u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 68)));
label_1b7278:
    // 0x1b7278: 0x50510082  beql        $v0, $s1, . + 4 + (0x82 << 2)
label_1b727c:
    if (ctx->pc == 0x1B727Cu) {
        ctx->pc = 0x1B727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7278u;
        // 0x1b727c: 0xa2600002  sb          $zero, 0x2($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7280u;
        goto label_1b7280;
    }
    ctx->pc = 0x1B7278u;
    {
        const bool branch_taken_0x1b7278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1b7278) {
            ctx->pc = 0x1B727Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7278u;
            // 0x1b727c: 0xa2600002  sb          $zero, 0x2($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7484u;
            goto label_1b7484;
        }
    }
    ctx->pc = 0x1B7280u;
label_1b7280:
    // 0x1b7280: 0x82620048  lb          $v0, 0x48($s3)
    ctx->pc = 0x1b7280u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 72)));
label_1b7284:
    // 0x1b7284: 0x5051007f  beql        $v0, $s1, . + 4 + (0x7F << 2)
label_1b7288:
    if (ctx->pc == 0x1B7288u) {
        ctx->pc = 0x1B7288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7284u;
        // 0x1b7288: 0xa2600002  sb          $zero, 0x2($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B728Cu;
        goto label_1b728c;
    }
    ctx->pc = 0x1B7284u;
    {
        const bool branch_taken_0x1b7284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1b7284) {
            ctx->pc = 0x1B7288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7284u;
            // 0x1b7288: 0xa2600002  sb          $zero, 0x2($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7484u;
            goto label_1b7484;
        }
    }
    ctx->pc = 0x1B728Cu;
label_1b728c:
    // 0x1b728c: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x1b728cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_1b7290:
    // 0x1b7290: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1b7294:
    if (ctx->pc == 0x1B7294u) {
        ctx->pc = 0x1B7294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7290u;
        // 0x1b7294: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7298u;
        goto label_1b7298;
    }
    ctx->pc = 0x1B7290u;
    {
        const bool branch_taken_0x1b7290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7290u;
        // 0x1b7294: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7290) {
            ctx->pc = 0x1B72A8u;
            goto label_1b72a8;
        }
    }
    ctx->pc = 0x1B7298u;
label_1b7298:
    // 0x1b7298: 0xa2600002  sb          $zero, 0x2($s3)
    ctx->pc = 0x1b7298u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
label_1b729c:
    // 0x1b729c: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x1b729cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
label_1b72a0:
    // 0x1b72a0: 0x10000078  b           . + 4 + (0x78 << 2)
label_1b72a4:
    if (ctx->pc == 0x1B72A4u) {
        ctx->pc = 0x1B72A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B72A0u;
        // 0x1b72a4: 0xae600020  sw          $zero, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B72A8u;
        goto label_1b72a8;
    }
    ctx->pc = 0x1B72A0u;
    {
        const bool branch_taken_0x1b72a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B72A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B72A0u;
        // 0x1b72a4: 0xae600020  sw          $zero, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b72a0) {
            ctx->pc = 0x1B7484u;
            goto label_1b7484;
        }
    }
    ctx->pc = 0x1B72A8u;
label_1b72a8:
    // 0x1b72a8: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_1b72ac:
    if (ctx->pc == 0x1B72ACu) {
        ctx->pc = 0x1B72B0u;
        goto label_1b72b0;
    }
    ctx->pc = 0x1B72A8u;
    {
        const bool branch_taken_0x1b72a8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b72a8) {
            ctx->pc = 0x1B72BCu;
            goto label_1b72bc;
        }
    }
    ctx->pc = 0x1B72B0u;
label_1b72b0:
    // 0x1b72b0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1b72b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1b72b4:
    // 0x1b72b4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_1b72b8:
    if (ctx->pc == 0x1B72B8u) {
        ctx->pc = 0x1B72B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B72B4u;
        // 0x1b72b8: 0x8c420024  lw          $v0, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B72BCu;
        goto label_1b72bc;
    }
    ctx->pc = 0x1B72B4u;
    {
        const bool branch_taken_0x1b72b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b72b4) {
            ctx->pc = 0x1B72B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B72B4u;
            // 0x1b72b8: 0x8c420024  lw          $v0, 0x24($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B72D0u;
            goto label_1b72d0;
        }
    }
    ctx->pc = 0x1B72BCu;
label_1b72bc:
    // 0x1b72bc: 0xc06dc1a  jal         func_1B7068
label_1b72c0:
    if (ctx->pc == 0x1B72C0u) {
        ctx->pc = 0x1B72C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B72BCu;
        // 0x1b72c0: 0xa2600002  sb          $zero, 0x2($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B72C4u;
        goto label_1b72c4;
    }
    ctx->pc = 0x1B72BCu;
    SET_GPR_U32(ctx, 31, 0x1B72C4u);
    ctx->pc = 0x1B72C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B72BCu;
    // 0x1b72c0: 0xa2600002  sb          $zero, 0x2($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7068u;
    goto label_1b7068;
    ctx->pc = 0x1B72C4u;
label_1b72c4:
    // 0x1b72c4: 0x10000070  b           . + 4 + (0x70 << 2)
label_1b72c8:
    if (ctx->pc == 0x1B72C8u) {
        ctx->pc = 0x1B72C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B72C4u;
        // 0x1b72c8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B72CCu;
        goto label_1b72cc;
    }
    ctx->pc = 0x1B72C4u;
    {
        const bool branch_taken_0x1b72c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B72C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B72C4u;
        // 0x1b72c8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b72c4) {
            ctx->pc = 0x1B7488u;
            goto label_1b7488;
        }
    }
    ctx->pc = 0x1B72CCu;
label_1b72cc:
    // 0x1b72cc: 0x0  nop
    ctx->pc = 0x1b72ccu;
    // NOP
label_1b72d0:
    // 0x1b72d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b72d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b72d4:
    // 0x1b72d4: 0x40f809  jalr        $v0
label_1b72d8:
    if (ctx->pc == 0x1B72D8u) {
        ctx->pc = 0x1B72D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B72D4u;
        // 0x1b72d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B72DCu;
        goto label_1b72dc;
    }
    ctx->pc = 0x1B72D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B72DCu);
        ctx->pc = 0x1B72D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B72D4u;
        // 0x1b72d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B72D4u, 0x1B72DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B72DCu;
label_1b72dc:
    // 0x1b72dc: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x1b72dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_1b72e0:
    // 0x1b72e0: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x1b72e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1b72e4:
    // 0x1b72e4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1b72e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1b72e8:
    // 0x1b72e8: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x1b72e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1b72ec:
    // 0x1b72ec: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_1b72f0:
    if (ctx->pc == 0x1B72F0u) {
        ctx->pc = 0x1B72F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B72ECu;
        // 0x1b72f0: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B72F4u;
        goto label_1b72f4;
    }
    ctx->pc = 0x1B72ECu;
    {
        const bool branch_taken_0x1b72ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b72ec) {
            ctx->pc = 0x1B72F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B72ECu;
            // 0x1b72f0: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7300u;
            goto label_1b7300;
        }
    }
    ctx->pc = 0x1B72F4u;
label_1b72f4:
    // 0x1b72f4: 0x10000063  b           . + 4 + (0x63 << 2)
label_1b72f8:
    if (ctx->pc == 0x1B72F8u) {
        ctx->pc = 0x1B72F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B72F4u;
        // 0x1b72f8: 0xa2600002  sb          $zero, 0x2($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B72FCu;
        goto label_1b72fc;
    }
    ctx->pc = 0x1B72F4u;
    {
        const bool branch_taken_0x1b72f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B72F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B72F4u;
        // 0x1b72f8: 0xa2600002  sb          $zero, 0x2($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b72f4) {
            ctx->pc = 0x1B7484u;
            goto label_1b7484;
        }
    }
    ctx->pc = 0x1B72FCu;
label_1b72fc:
    // 0x1b72fc: 0x0  nop
    ctx->pc = 0x1b72fcu;
    // NOP
label_1b7300:
    // 0x1b7300: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1b7300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b7304:
    // 0x1b7304: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x1b7304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_1b7308:
    // 0x1b7308: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b7308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b730c:
    // 0x1b730c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1b730cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1b7310:
    // 0x1b7310: 0x40f809  jalr        $v0
label_1b7314:
    if (ctx->pc == 0x1B7314u) {
        ctx->pc = 0x1B7314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7310u;
        // 0x1b7314: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7318u;
        goto label_1b7318;
    }
    ctx->pc = 0x1B7310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B7318u);
        ctx->pc = 0x1B7314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7310u;
        // 0x1b7314: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7310u, 0x1B7318u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B7318u;
label_1b7318:
    // 0x1b7318: 0x8e650030  lw          $a1, 0x30($s3)
    ctx->pc = 0x1b7318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_1b731c:
    // 0x1b731c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1b731cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1b7320:
    // 0x1b7320: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b7320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7324:
    // 0x1b7324: 0x8e670058  lw          $a3, 0x58($s3)
    ctx->pc = 0x1b7324u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_1b7328:
    // 0x1b7328: 0x246407ff  addiu       $a0, $v1, 0x7FF
    ctx->pc = 0x1b7328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2047));
label_1b732c:
    // 0x1b732c: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x1b732cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
label_1b7330:
    // 0x1b7330: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x1b7330u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_1b7334:
    // 0x1b7334: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x1b7334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_1b7338:
    // 0x1b7338: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x1b7338u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1b733c:
    // 0x1b733c: 0x382c3  sra         $s0, $v1, 11
    ctx->pc = 0x1b733cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 11));
label_1b7340:
    // 0x1b7340: 0x205182a  slt         $v1, $s0, $a1
    ctx->pc = 0x1b7340u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1b7344:
    // 0x1b7344: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x1b7344u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1b7348:
    // 0x1b7348: 0xa3800a  movz        $s0, $a1, $v1
    ctx->pc = 0x1b7348u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
label_1b734c:
    // 0x1b734c: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x1b734cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1b7350:
    // 0x1b7350: 0x202182a  slt         $v1, $s0, $v0
    ctx->pc = 0x1b7350u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b7354:
    // 0x1b7354: 0x8e68002c  lw          $t0, 0x2C($s3)
    ctx->pc = 0x1b7354u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_1b7358:
    // 0x1b7358: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x1b7358u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_1b735c:
    // 0x1b735c: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x1b735cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1b7360:
    // 0x1b7360: 0x208102a  slt         $v0, $s0, $t0
    ctx->pc = 0x1b7360u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1b7364:
    // 0x1b7364: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1b7364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1b7368:
    // 0x1b7368: 0xc06faea  jal         func_1BEBA8
label_1b736c:
    if (ctx->pc == 0x1B736Cu) {
        ctx->pc = 0x1B736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7368u;
        // 0x1b736c: 0x102800a  movz        $s0, $t0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7370u;
        goto label_1b7370;
    }
    ctx->pc = 0x1B7368u;
    SET_GPR_U32(ctx, 31, 0x1B7370u);
    ctx->pc = 0x1B736Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7368u;
    // 0x1b736c: 0x102800a  movz        $s0, $t0, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEBA8u, 0x1B7368u, 0x1B7370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7370u;
label_1b7370:
    // 0x1b7370: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1b7370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
label_1b7374:
    // 0x1b7374: 0x8c64c358  lw          $a0, -0x3CA8($v1)
    ctx->pc = 0x1b7374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294951768)));
label_1b7378:
    // 0x1b7378: 0x1491000b  bne         $a0, $s1, . + 4 + (0xB << 2)
label_1b737c:
    if (ctx->pc == 0x1B737Cu) {
        ctx->pc = 0x1B737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7378u;
        // 0x1b737c: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7380u;
        goto label_1b7380;
    }
    ctx->pc = 0x1B7378u;
    {
        const bool branch_taken_0x1b7378 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        ctx->pc = 0x1B737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7378u;
        // 0x1b737c: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7378) {
            ctx->pc = 0x1B73A8u;
            goto label_1b73a8;
        }
    }
    ctx->pc = 0x1B7380u;
label_1b7380:
    // 0x1b7380: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1b7380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1b7384:
    // 0x1b7384: 0xac44c858  sw          $a0, -0x37A8($v0)
    ctx->pc = 0x1b7384u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953048), GPR_U32(ctx, 4));
label_1b7388:
    // 0x1b7388: 0x82630003  lb          $v1, 0x3($s3)
    ctx->pc = 0x1b7388u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
label_1b738c:
    // 0x1b738c: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_1b7390:
    if (ctx->pc == 0x1B7390u) {
        ctx->pc = 0x1B7390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B738Cu;
        // 0x1b7390: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7394u;
        goto label_1b7394;
    }
    ctx->pc = 0x1B738Cu;
    {
        const bool branch_taken_0x1b738c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1B7390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B738Cu;
        // 0x1b7390: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b738c) {
            ctx->pc = 0x1B73A0u;
            goto label_1b73a0;
        }
    }
    ctx->pc = 0x1B7394u;
label_1b7394:
    // 0x1b7394: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b7398:
    if (ctx->pc == 0x1B7398u) {
        ctx->pc = 0x1B7398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7394u;
        // 0x1b7398: 0xa040c85c  sb          $zero, -0x37A4($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294953052), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B739Cu;
        goto label_1b739c;
    }
    ctx->pc = 0x1B7394u;
    {
        const bool branch_taken_0x1b7394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7394u;
        // 0x1b7398: 0xa040c85c  sb          $zero, -0x37A4($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294953052), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7394) {
            ctx->pc = 0x1B73A4u;
            goto label_1b73a4;
        }
    }
    ctx->pc = 0x1B739Cu;
label_1b739c:
    // 0x1b739c: 0x0  nop
    ctx->pc = 0x1b739cu;
    // NOP
label_1b73a0:
    // 0x1b73a0: 0xa044c85c  sb          $a0, -0x37A4($v0)
    ctx->pc = 0x1b73a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294953052), (uint8_t)GPR_U32(ctx, 4));
label_1b73a4:
    // 0x1b73a4: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x1b73a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_1b73a8:
    // 0x1b73a8: 0x8e65005c  lw          $a1, 0x5C($s3)
    ctx->pc = 0x1b73a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
label_1b73ac:
    // 0x1b73ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b73acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b73b0:
    // 0x1b73b0: 0x50a2000a  beql        $a1, $v0, . + 4 + (0xA << 2)
label_1b73b4:
    if (ctx->pc == 0x1B73B4u) {
        ctx->pc = 0x1B73B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B73B0u;
        // 0x1b73b4: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B73B8u;
        goto label_1b73b8;
    }
    ctx->pc = 0x1B73B0u;
    {
        const bool branch_taken_0x1b73b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b73b0) {
            ctx->pc = 0x1B73B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B73B0u;
            // 0x1b73b4: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B73DCu;
            goto label_1b73dc;
        }
    }
    ctx->pc = 0x1B73B8u;
label_1b73b8:
    // 0x1b73b8: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x1b73b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_1b73bc:
    // 0x1b73bc: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1b73bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_1b73c0:
    // 0x1b73c0: 0x244407ff  addiu       $a0, $v0, 0x7FF
    ctx->pc = 0x1b73c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
label_1b73c4:
    // 0x1b73c4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1b73c4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_1b73c8:
    // 0x1b73c8: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x1b73c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_1b73cc:
    // 0x1b73cc: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x1b73ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1b73d0:
    // 0x1b73d0: 0x202182a  slt         $v1, $s0, $v0
    ctx->pc = 0x1b73d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b73d4:
    // 0x1b73d4: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x1b73d4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_1b73d8:
    // 0x1b73d8: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x1b73d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1b73dc:
    // 0x1b73dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b73dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b73e0:
    // 0x1b73e0: 0xc06fb04  jal         func_1BEC10
label_1b73e4:
    if (ctx->pc == 0x1B73E4u) {
        ctx->pc = 0x1B73E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B73E0u;
        // 0x1b73e4: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B73E8u;
        goto label_1b73e8;
    }
    ctx->pc = 0x1B73E0u;
    SET_GPR_U32(ctx, 31, 0x1B73E8u);
    ctx->pc = 0x1B73E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B73E0u;
    // 0x1b73e4: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEC10u, 0x1B73E0u, 0x1B73E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B73E8u;
label_1b73e8:
    // 0x1b73e8: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1b73e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1b73ec:
    // 0x1b73ec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1b73ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1b73f0:
    // 0x1b73f0: 0xae640028  sw          $a0, 0x28($s3)
    ctx->pc = 0x1b73f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 4));
label_1b73f4:
    // 0x1b73f4: 0xae630024  sw          $v1, 0x24($s3)
    ctx->pc = 0x1b73f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 3));
label_1b73f8:
    // 0x1b73f8: 0x1c400022  bgtz        $v0, . + 4 + (0x22 << 2)
label_1b73fc:
    if (ctx->pc == 0x1B73FCu) {
        ctx->pc = 0x1B73FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B73F8u;
        // 0x1b73fc: 0xae620020  sw          $v0, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7400u;
        goto label_1b7400;
    }
    ctx->pc = 0x1B73F8u;
    {
        const bool branch_taken_0x1b73f8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1B73FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B73F8u;
        // 0x1b73fc: 0xae620020  sw          $v0, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b73f8) {
            ctx->pc = 0x1B7484u;
            goto label_1b7484;
        }
    }
    ctx->pc = 0x1B7400u;
label_1b7400:
    // 0x1b7400: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1b7400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1b7404:
    // 0x1b7404: 0x26700024  addiu       $s0, $s3, 0x24
    ctx->pc = 0x1b7404u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
label_1b7408:
    // 0x1b7408: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b7408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b740c:
    // 0x1b740c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b740cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7410:
    // 0x1b7410: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1b7410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1b7414:
    // 0x1b7414: 0x40f809  jalr        $v0
label_1b7418:
    if (ctx->pc == 0x1B7418u) {
        ctx->pc = 0x1B7418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7414u;
        // 0x1b7418: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B741Cu;
        goto label_1b741c;
    }
    ctx->pc = 0x1B7414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B741Cu);
        ctx->pc = 0x1B7418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7414u;
        // 0x1b7418: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7414u, 0x1B741Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B741Cu;
label_1b741c:
    // 0x1b741c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1b741cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1b7420:
    // 0x1b7420: 0xae600028  sw          $zero, 0x28($s3)
    ctx->pc = 0x1b7420u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
label_1b7424:
    // 0x1b7424: 0xa2600002  sb          $zero, 0x2($s3)
    ctx->pc = 0x1b7424u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
label_1b7428:
    // 0x1b7428: 0xc06fb80  jal         func_1BEE00
label_1b742c:
    if (ctx->pc == 0x1B742Cu) {
        ctx->pc = 0x1B742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7428u;
        // 0x1b742c: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7430u;
        goto label_1b7430;
    }
    ctx->pc = 0x1B7428u;
    SET_GPR_U32(ctx, 31, 0x1B7430u);
    ctx->pc = 0x1B742Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7428u;
    // 0x1b742c: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEE00u, 0x1B7428u, 0x1B7430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7430u;
label_1b7430:
    // 0x1b7430: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b7430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b7434:
    // 0x1b7434: 0x54430014  bnel        $v0, $v1, . + 4 + (0x14 << 2)
label_1b7438:
    if (ctx->pc == 0x1B7438u) {
        ctx->pc = 0x1B7438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7434u;
        // 0x1b7438: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B743Cu;
        goto label_1b743c;
    }
    ctx->pc = 0x1B7434u;
    {
        const bool branch_taken_0x1b7434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b7434) {
            ctx->pc = 0x1B7438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7434u;
            // 0x1b7438: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7488u;
            goto label_1b7488;
        }
    }
    ctx->pc = 0x1B743Cu;
label_1b743c:
    // 0x1b743c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1b743cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1b7440:
    // 0x1b7440: 0x8c42b420  lw          $v0, -0x4BE0($v0)
    ctx->pc = 0x1b7440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947872)));
label_1b7444:
    // 0x1b7444: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
label_1b7448:
    if (ctx->pc == 0x1B7448u) {
        ctx->pc = 0x1B7448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7444u;
        // 0x1b7448: 0x8e63004c  lw          $v1, 0x4C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B744Cu;
        goto label_1b744c;
    }
    ctx->pc = 0x1B7444u;
    {
        const bool branch_taken_0x1b7444 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B7448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7444u;
        // 0x1b7448: 0x8e63004c  lw          $v1, 0x4C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7444) {
            ctx->pc = 0x1B7468u;
            goto label_1b7468;
        }
    }
    ctx->pc = 0x1B744Cu;
label_1b744c:
    // 0x1b744c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1b744cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b7450:
    // 0x1b7450: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1b7454:
    if (ctx->pc == 0x1B7454u) {
        ctx->pc = 0x1B7454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7450u;
        // 0x1b7454: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7458u;
        goto label_1b7458;
    }
    ctx->pc = 0x1B7450u;
    {
        const bool branch_taken_0x1b7450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7450u;
        // 0x1b7454: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7450) {
            ctx->pc = 0x1B746Cu;
            goto label_1b746c;
        }
    }
    ctx->pc = 0x1B7458u;
label_1b7458:
    // 0x1b7458: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b7458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b745c:
    // 0x1b745c: 0x10000009  b           . + 4 + (0x9 << 2)
label_1b7460:
    if (ctx->pc == 0x1B7460u) {
        ctx->pc = 0x1B7460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B745Cu;
        // 0x1b7460: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B7464u;
        goto label_1b7464;
    }
    ctx->pc = 0x1B745Cu;
    {
        const bool branch_taken_0x1b745c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B745Cu;
        // 0x1b7460: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b745c) {
            ctx->pc = 0x1B7484u;
            goto label_1b7484;
        }
    }
    ctx->pc = 0x1B7464u;
label_1b7464:
    // 0x1b7464: 0x0  nop
    ctx->pc = 0x1b7464u;
    // NOP
label_1b7468:
    // 0x1b7468: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1b7468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_1b746c:
    // 0x1b746c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x1b746cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_1b7470:
    // 0x1b7470: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b7470u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b7474:
    // 0x1b7474: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1b7478:
    if (ctx->pc == 0x1B7478u) {
        ctx->pc = 0x1B7478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7474u;
        // 0x1b7478: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B747Cu;
        goto label_1b747c;
    }
    ctx->pc = 0x1B7474u;
    {
        const bool branch_taken_0x1b7474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7474u;
        // 0x1b7478: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7474) {
            ctx->pc = 0x1B7488u;
            goto label_1b7488;
        }
    }
    ctx->pc = 0x1B747Cu;
label_1b747c:
    // 0x1b747c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1b747cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b7480:
    // 0x1b7480: 0xae62004c  sw          $v0, 0x4C($s3)
    ctx->pc = 0x1b7480u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 2));
label_1b7484:
    // 0x1b7484: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1b7484u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b7488:
    // 0x1b7488: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1b7488u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1b748c:
    // 0x1b748c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b748cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b7490:
    // 0x1b7490: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1b7490u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1b7494:
    // 0x1b7494: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1b7494u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b7498:
    // 0x1b7498: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1b7498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1b749c:
    // 0x1b749c: 0x3e00008  jr          $ra
label_1b74a0:
    if (ctx->pc == 0x1B74A0u) {
        ctx->pc = 0x1B74A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B749Cu;
        // 0x1b74a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B74A4u;
        goto label_1b74a4;
    }
    ctx->pc = 0x1B749Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B74A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B749Cu;
        // 0x1b74a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B749Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B74A4u;
label_1b74a4:
    // 0x1b74a4: 0x0  nop
    ctx->pc = 0x1b74a4u;
    // NOP
    if (ctx->pc == 0x1b74a4u) { ctx->pc = 0x1b74a8u; }
}
