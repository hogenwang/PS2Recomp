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

// Function: sub_002A9E88
// Address: 0x2a9e88 - 0x2aa328
void sub_002A9E88_0x2a9e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9E88_0x2a9e88");
#endif

    switch (ctx->pc) {
        case 0x2a9e88u: goto label_2a9e88;
        case 0x2a9e8cu: goto label_2a9e8c;
        case 0x2a9e90u: goto label_2a9e90;
        case 0x2a9e94u: goto label_2a9e94;
        case 0x2a9e98u: goto label_2a9e98;
        case 0x2a9e9cu: goto label_2a9e9c;
        case 0x2a9ea0u: goto label_2a9ea0;
        case 0x2a9ea4u: goto label_2a9ea4;
        case 0x2a9ea8u: goto label_2a9ea8;
        case 0x2a9eacu: goto label_2a9eac;
        case 0x2a9eb0u: goto label_2a9eb0;
        case 0x2a9eb4u: goto label_2a9eb4;
        case 0x2a9eb8u: goto label_2a9eb8;
        case 0x2a9ebcu: goto label_2a9ebc;
        case 0x2a9ec0u: goto label_2a9ec0;
        case 0x2a9ec4u: goto label_2a9ec4;
        case 0x2a9ec8u: goto label_2a9ec8;
        case 0x2a9eccu: goto label_2a9ecc;
        case 0x2a9ed0u: goto label_2a9ed0;
        case 0x2a9ed4u: goto label_2a9ed4;
        case 0x2a9ed8u: goto label_2a9ed8;
        case 0x2a9edcu: goto label_2a9edc;
        case 0x2a9ee0u: goto label_2a9ee0;
        case 0x2a9ee4u: goto label_2a9ee4;
        case 0x2a9ee8u: goto label_2a9ee8;
        case 0x2a9eecu: goto label_2a9eec;
        case 0x2a9ef0u: goto label_2a9ef0;
        case 0x2a9ef4u: goto label_2a9ef4;
        case 0x2a9ef8u: goto label_2a9ef8;
        case 0x2a9efcu: goto label_2a9efc;
        case 0x2a9f00u: goto label_2a9f00;
        case 0x2a9f04u: goto label_2a9f04;
        case 0x2a9f08u: goto label_2a9f08;
        case 0x2a9f0cu: goto label_2a9f0c;
        case 0x2a9f10u: goto label_2a9f10;
        case 0x2a9f14u: goto label_2a9f14;
        case 0x2a9f18u: goto label_2a9f18;
        case 0x2a9f1cu: goto label_2a9f1c;
        case 0x2a9f20u: goto label_2a9f20;
        case 0x2a9f24u: goto label_2a9f24;
        case 0x2a9f28u: goto label_2a9f28;
        case 0x2a9f2cu: goto label_2a9f2c;
        case 0x2a9f30u: goto label_2a9f30;
        case 0x2a9f34u: goto label_2a9f34;
        case 0x2a9f38u: goto label_2a9f38;
        case 0x2a9f3cu: goto label_2a9f3c;
        case 0x2a9f40u: goto label_2a9f40;
        case 0x2a9f44u: goto label_2a9f44;
        case 0x2a9f48u: goto label_2a9f48;
        case 0x2a9f4cu: goto label_2a9f4c;
        case 0x2a9f50u: goto label_2a9f50;
        case 0x2a9f54u: goto label_2a9f54;
        case 0x2a9f58u: goto label_2a9f58;
        case 0x2a9f5cu: goto label_2a9f5c;
        case 0x2a9f60u: goto label_2a9f60;
        case 0x2a9f64u: goto label_2a9f64;
        case 0x2a9f68u: goto label_2a9f68;
        case 0x2a9f6cu: goto label_2a9f6c;
        case 0x2a9f70u: goto label_2a9f70;
        case 0x2a9f74u: goto label_2a9f74;
        case 0x2a9f78u: goto label_2a9f78;
        case 0x2a9f7cu: goto label_2a9f7c;
        case 0x2a9f80u: goto label_2a9f80;
        case 0x2a9f84u: goto label_2a9f84;
        case 0x2a9f88u: goto label_2a9f88;
        case 0x2a9f8cu: goto label_2a9f8c;
        case 0x2a9f90u: goto label_2a9f90;
        case 0x2a9f94u: goto label_2a9f94;
        case 0x2a9f98u: goto label_2a9f98;
        case 0x2a9f9cu: goto label_2a9f9c;
        case 0x2a9fa0u: goto label_2a9fa0;
        case 0x2a9fa4u: goto label_2a9fa4;
        case 0x2a9fa8u: goto label_2a9fa8;
        case 0x2a9facu: goto label_2a9fac;
        case 0x2a9fb0u: goto label_2a9fb0;
        case 0x2a9fb4u: goto label_2a9fb4;
        case 0x2a9fb8u: goto label_2a9fb8;
        case 0x2a9fbcu: goto label_2a9fbc;
        case 0x2a9fc0u: goto label_2a9fc0;
        case 0x2a9fc4u: goto label_2a9fc4;
        case 0x2a9fc8u: goto label_2a9fc8;
        case 0x2a9fccu: goto label_2a9fcc;
        case 0x2a9fd0u: goto label_2a9fd0;
        case 0x2a9fd4u: goto label_2a9fd4;
        case 0x2a9fd8u: goto label_2a9fd8;
        case 0x2a9fdcu: goto label_2a9fdc;
        case 0x2a9fe0u: goto label_2a9fe0;
        case 0x2a9fe4u: goto label_2a9fe4;
        case 0x2a9fe8u: goto label_2a9fe8;
        case 0x2a9fecu: goto label_2a9fec;
        case 0x2a9ff0u: goto label_2a9ff0;
        case 0x2a9ff4u: goto label_2a9ff4;
        case 0x2a9ff8u: goto label_2a9ff8;
        case 0x2a9ffcu: goto label_2a9ffc;
        case 0x2aa000u: goto label_2aa000;
        case 0x2aa004u: goto label_2aa004;
        case 0x2aa008u: goto label_2aa008;
        case 0x2aa00cu: goto label_2aa00c;
        case 0x2aa010u: goto label_2aa010;
        case 0x2aa014u: goto label_2aa014;
        case 0x2aa018u: goto label_2aa018;
        case 0x2aa01cu: goto label_2aa01c;
        case 0x2aa020u: goto label_2aa020;
        case 0x2aa024u: goto label_2aa024;
        case 0x2aa028u: goto label_2aa028;
        case 0x2aa02cu: goto label_2aa02c;
        case 0x2aa030u: goto label_2aa030;
        case 0x2aa034u: goto label_2aa034;
        case 0x2aa038u: goto label_2aa038;
        case 0x2aa03cu: goto label_2aa03c;
        case 0x2aa040u: goto label_2aa040;
        case 0x2aa044u: goto label_2aa044;
        case 0x2aa048u: goto label_2aa048;
        case 0x2aa04cu: goto label_2aa04c;
        case 0x2aa050u: goto label_2aa050;
        case 0x2aa054u: goto label_2aa054;
        case 0x2aa058u: goto label_2aa058;
        case 0x2aa05cu: goto label_2aa05c;
        case 0x2aa060u: goto label_2aa060;
        case 0x2aa064u: goto label_2aa064;
        case 0x2aa068u: goto label_2aa068;
        case 0x2aa06cu: goto label_2aa06c;
        case 0x2aa070u: goto label_2aa070;
        case 0x2aa074u: goto label_2aa074;
        case 0x2aa078u: goto label_2aa078;
        case 0x2aa07cu: goto label_2aa07c;
        case 0x2aa080u: goto label_2aa080;
        case 0x2aa084u: goto label_2aa084;
        case 0x2aa088u: goto label_2aa088;
        case 0x2aa08cu: goto label_2aa08c;
        case 0x2aa090u: goto label_2aa090;
        case 0x2aa094u: goto label_2aa094;
        case 0x2aa098u: goto label_2aa098;
        case 0x2aa09cu: goto label_2aa09c;
        case 0x2aa0a0u: goto label_2aa0a0;
        case 0x2aa0a4u: goto label_2aa0a4;
        case 0x2aa0a8u: goto label_2aa0a8;
        case 0x2aa0acu: goto label_2aa0ac;
        case 0x2aa0b0u: goto label_2aa0b0;
        case 0x2aa0b4u: goto label_2aa0b4;
        case 0x2aa0b8u: goto label_2aa0b8;
        case 0x2aa0bcu: goto label_2aa0bc;
        case 0x2aa0c0u: goto label_2aa0c0;
        case 0x2aa0c4u: goto label_2aa0c4;
        case 0x2aa0c8u: goto label_2aa0c8;
        case 0x2aa0ccu: goto label_2aa0cc;
        case 0x2aa0d0u: goto label_2aa0d0;
        case 0x2aa0d4u: goto label_2aa0d4;
        case 0x2aa0d8u: goto label_2aa0d8;
        case 0x2aa0dcu: goto label_2aa0dc;
        case 0x2aa0e0u: goto label_2aa0e0;
        case 0x2aa0e4u: goto label_2aa0e4;
        case 0x2aa0e8u: goto label_2aa0e8;
        case 0x2aa0ecu: goto label_2aa0ec;
        case 0x2aa0f0u: goto label_2aa0f0;
        case 0x2aa0f4u: goto label_2aa0f4;
        case 0x2aa0f8u: goto label_2aa0f8;
        case 0x2aa0fcu: goto label_2aa0fc;
        case 0x2aa100u: goto label_2aa100;
        case 0x2aa104u: goto label_2aa104;
        case 0x2aa108u: goto label_2aa108;
        case 0x2aa10cu: goto label_2aa10c;
        case 0x2aa110u: goto label_2aa110;
        case 0x2aa114u: goto label_2aa114;
        case 0x2aa118u: goto label_2aa118;
        case 0x2aa11cu: goto label_2aa11c;
        case 0x2aa120u: goto label_2aa120;
        case 0x2aa124u: goto label_2aa124;
        case 0x2aa128u: goto label_2aa128;
        case 0x2aa12cu: goto label_2aa12c;
        case 0x2aa130u: goto label_2aa130;
        case 0x2aa134u: goto label_2aa134;
        case 0x2aa138u: goto label_2aa138;
        case 0x2aa13cu: goto label_2aa13c;
        case 0x2aa140u: goto label_2aa140;
        case 0x2aa144u: goto label_2aa144;
        case 0x2aa148u: goto label_2aa148;
        case 0x2aa14cu: goto label_2aa14c;
        case 0x2aa150u: goto label_2aa150;
        case 0x2aa154u: goto label_2aa154;
        case 0x2aa158u: goto label_2aa158;
        case 0x2aa15cu: goto label_2aa15c;
        case 0x2aa160u: goto label_2aa160;
        case 0x2aa164u: goto label_2aa164;
        case 0x2aa168u: goto label_2aa168;
        case 0x2aa16cu: goto label_2aa16c;
        case 0x2aa170u: goto label_2aa170;
        case 0x2aa174u: goto label_2aa174;
        case 0x2aa178u: goto label_2aa178;
        case 0x2aa17cu: goto label_2aa17c;
        case 0x2aa180u: goto label_2aa180;
        case 0x2aa184u: goto label_2aa184;
        case 0x2aa188u: goto label_2aa188;
        case 0x2aa18cu: goto label_2aa18c;
        case 0x2aa190u: goto label_2aa190;
        case 0x2aa194u: goto label_2aa194;
        case 0x2aa198u: goto label_2aa198;
        case 0x2aa19cu: goto label_2aa19c;
        case 0x2aa1a0u: goto label_2aa1a0;
        case 0x2aa1a4u: goto label_2aa1a4;
        case 0x2aa1a8u: goto label_2aa1a8;
        case 0x2aa1acu: goto label_2aa1ac;
        case 0x2aa1b0u: goto label_2aa1b0;
        case 0x2aa1b4u: goto label_2aa1b4;
        case 0x2aa1b8u: goto label_2aa1b8;
        case 0x2aa1bcu: goto label_2aa1bc;
        case 0x2aa1c0u: goto label_2aa1c0;
        case 0x2aa1c4u: goto label_2aa1c4;
        case 0x2aa1c8u: goto label_2aa1c8;
        case 0x2aa1ccu: goto label_2aa1cc;
        case 0x2aa1d0u: goto label_2aa1d0;
        case 0x2aa1d4u: goto label_2aa1d4;
        case 0x2aa1d8u: goto label_2aa1d8;
        case 0x2aa1dcu: goto label_2aa1dc;
        case 0x2aa1e0u: goto label_2aa1e0;
        case 0x2aa1e4u: goto label_2aa1e4;
        case 0x2aa1e8u: goto label_2aa1e8;
        case 0x2aa1ecu: goto label_2aa1ec;
        case 0x2aa1f0u: goto label_2aa1f0;
        case 0x2aa1f4u: goto label_2aa1f4;
        case 0x2aa1f8u: goto label_2aa1f8;
        case 0x2aa1fcu: goto label_2aa1fc;
        case 0x2aa200u: goto label_2aa200;
        case 0x2aa204u: goto label_2aa204;
        case 0x2aa208u: goto label_2aa208;
        case 0x2aa20cu: goto label_2aa20c;
        case 0x2aa210u: goto label_2aa210;
        case 0x2aa214u: goto label_2aa214;
        case 0x2aa218u: goto label_2aa218;
        case 0x2aa21cu: goto label_2aa21c;
        case 0x2aa220u: goto label_2aa220;
        case 0x2aa224u: goto label_2aa224;
        case 0x2aa228u: goto label_2aa228;
        case 0x2aa22cu: goto label_2aa22c;
        case 0x2aa230u: goto label_2aa230;
        case 0x2aa234u: goto label_2aa234;
        case 0x2aa238u: goto label_2aa238;
        case 0x2aa23cu: goto label_2aa23c;
        case 0x2aa240u: goto label_2aa240;
        case 0x2aa244u: goto label_2aa244;
        case 0x2aa248u: goto label_2aa248;
        case 0x2aa24cu: goto label_2aa24c;
        case 0x2aa250u: goto label_2aa250;
        case 0x2aa254u: goto label_2aa254;
        case 0x2aa258u: goto label_2aa258;
        case 0x2aa25cu: goto label_2aa25c;
        case 0x2aa260u: goto label_2aa260;
        case 0x2aa264u: goto label_2aa264;
        case 0x2aa268u: goto label_2aa268;
        case 0x2aa26cu: goto label_2aa26c;
        case 0x2aa270u: goto label_2aa270;
        case 0x2aa274u: goto label_2aa274;
        case 0x2aa278u: goto label_2aa278;
        case 0x2aa27cu: goto label_2aa27c;
        case 0x2aa280u: goto label_2aa280;
        case 0x2aa284u: goto label_2aa284;
        case 0x2aa288u: goto label_2aa288;
        case 0x2aa28cu: goto label_2aa28c;
        case 0x2aa290u: goto label_2aa290;
        case 0x2aa294u: goto label_2aa294;
        case 0x2aa298u: goto label_2aa298;
        case 0x2aa29cu: goto label_2aa29c;
        case 0x2aa2a0u: goto label_2aa2a0;
        case 0x2aa2a4u: goto label_2aa2a4;
        case 0x2aa2a8u: goto label_2aa2a8;
        case 0x2aa2acu: goto label_2aa2ac;
        case 0x2aa2b0u: goto label_2aa2b0;
        case 0x2aa2b4u: goto label_2aa2b4;
        case 0x2aa2b8u: goto label_2aa2b8;
        case 0x2aa2bcu: goto label_2aa2bc;
        case 0x2aa2c0u: goto label_2aa2c0;
        case 0x2aa2c4u: goto label_2aa2c4;
        case 0x2aa2c8u: goto label_2aa2c8;
        case 0x2aa2ccu: goto label_2aa2cc;
        case 0x2aa2d0u: goto label_2aa2d0;
        case 0x2aa2d4u: goto label_2aa2d4;
        case 0x2aa2d8u: goto label_2aa2d8;
        case 0x2aa2dcu: goto label_2aa2dc;
        case 0x2aa2e0u: goto label_2aa2e0;
        case 0x2aa2e4u: goto label_2aa2e4;
        case 0x2aa2e8u: goto label_2aa2e8;
        case 0x2aa2ecu: goto label_2aa2ec;
        case 0x2aa2f0u: goto label_2aa2f0;
        case 0x2aa2f4u: goto label_2aa2f4;
        case 0x2aa2f8u: goto label_2aa2f8;
        case 0x2aa2fcu: goto label_2aa2fc;
        case 0x2aa300u: goto label_2aa300;
        case 0x2aa304u: goto label_2aa304;
        case 0x2aa308u: goto label_2aa308;
        case 0x2aa30cu: goto label_2aa30c;
        case 0x2aa310u: goto label_2aa310;
        case 0x2aa314u: goto label_2aa314;
        case 0x2aa318u: goto label_2aa318;
        case 0x2aa31cu: goto label_2aa31c;
        case 0x2aa320u: goto label_2aa320;
        case 0x2aa324u: goto label_2aa324;
        default: break;
    }

    ctx->pc = 0x2a9e88u;

label_2a9e88:
    // 0x2a9e88: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2a9e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2a9e8c:
    // 0x2a9e8c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2a9e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_2a9e90:
    // 0x2a9e90: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2a9e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_2a9e94:
    // 0x2a9e94: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2a9e94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9e98:
    // 0x2a9e98: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2a9e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2a9e9c:
    // 0x2a9e9c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2a9e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2a9ea0:
    // 0x2a9ea0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a9ea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a9ea4:
    // 0x2a9ea4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2a9ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_2a9ea8:
    // 0x2a9ea8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2a9ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2a9eac:
    // 0x2a9eac: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2a9eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_2a9eb0:
    // 0x2a9eb0: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x2a9eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_2a9eb4:
    // 0x2a9eb4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2a9eb8:
    if (ctx->pc == 0x2A9EB8u) {
        ctx->pc = 0x2A9EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9EB4u;
        // 0x2a9eb8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9EBCu;
        goto label_2a9ebc;
    }
    ctx->pc = 0x2A9EB4u;
    {
        const bool branch_taken_0x2a9eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9EB4u;
        // 0x2a9eb8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9eb4) {
            ctx->pc = 0x2A9EC8u;
            goto label_2a9ec8;
        }
    }
    ctx->pc = 0x2A9EBCu;
label_2a9ebc:
    // 0x2a9ebc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2a9ebcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a9ec0:
    // 0x2a9ec0: 0x10000007  b           . + 4 + (0x7 << 2)
label_2a9ec4:
    if (ctx->pc == 0x2A9EC4u) {
        ctx->pc = 0x2A9EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9EC0u;
        // 0x2a9ec4: 0x8e1500c8  lw          $s5, 0xC8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9EC8u;
        goto label_2a9ec8;
    }
    ctx->pc = 0x2A9EC0u;
    {
        const bool branch_taken_0x2a9ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9EC0u;
        // 0x2a9ec4: 0x8e1500c8  lw          $s5, 0xC8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9ec0) {
            ctx->pc = 0x2A9EE0u;
            goto label_2a9ee0;
        }
    }
    ctx->pc = 0x2A9EC8u;
label_2a9ec8:
    // 0x2a9ec8: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x2a9ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_2a9ecc:
    // 0x2a9ecc: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x2a9eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_2a9ed0:
    // 0x2a9ed0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2a9ed4:
    if (ctx->pc == 0x2A9ED4u) {
        ctx->pc = 0x2A9ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9ED0u;
        // 0x2a9ed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9ED8u;
        goto label_2a9ed8;
    }
    ctx->pc = 0x2A9ED0u;
    {
        const bool branch_taken_0x2a9ed0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9ED0u;
        // 0x2a9ed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9ed0) {
            ctx->pc = 0x2A9EE4u;
            goto label_2a9ee4;
        }
    }
    ctx->pc = 0x2A9ED8u;
label_2a9ed8:
    // 0x2a9ed8: 0x8c550084  lw          $s5, 0x84($v0)
    ctx->pc = 0x2a9ed8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_2a9edc:
    // 0x2a9edc: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x2a9edcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2a9ee0:
    // 0x2a9ee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a9ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a9ee4:
    // 0x2a9ee4: 0xc0aa9c8  jal         func_2AA720
label_2a9ee8:
    if (ctx->pc == 0x2A9EE8u) {
        ctx->pc = 0x2A9EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9EE4u;
        // 0x2a9ee8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9EECu;
        goto label_2a9eec;
    }
    ctx->pc = 0x2A9EE4u;
    SET_GPR_U32(ctx, 31, 0x2A9EECu);
    ctx->pc = 0x2A9EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9EE4u;
    // 0x2a9ee8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA720u, 0x2A9EE4u, 0x2A9EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9EECu;
label_2a9eec:
    // 0x2a9eec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a9eecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a9ef0:
    // 0x2a9ef0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2a9ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2a9ef4:
    // 0x2a9ef4: 0x16620102  bne         $s3, $v0, . + 4 + (0x102 << 2)
label_2a9ef8:
    if (ctx->pc == 0x2A9EF8u) {
        ctx->pc = 0x2A9EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9EF4u;
        // 0x2a9ef8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9EFCu;
        goto label_2a9efc;
    }
    ctx->pc = 0x2A9EF4u;
    {
        const bool branch_taken_0x2a9ef4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A9EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9EF4u;
        // 0x2a9ef8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9ef4) {
            ctx->pc = 0x2AA300u;
            goto label_2aa300;
        }
    }
    ctx->pc = 0x2A9EFCu;
label_2a9efc:
    // 0x2a9efc: 0x8e120048  lw          $s2, 0x48($s0)
    ctx->pc = 0x2a9efcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2a9f00:
    // 0x2a9f00: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a9f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a9f04:
    // 0x2a9f04: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2a9f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2a9f08:
    // 0x2a9f08: 0xc049c48  jal         func_127120
label_2a9f0c:
    if (ctx->pc == 0x2A9F0Cu) {
        ctx->pc = 0x2A9F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9F08u;
        // 0x2a9f0c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9F10u;
        goto label_2a9f10;
    }
    ctx->pc = 0x2A9F08u;
    SET_GPR_U32(ctx, 31, 0x2A9F10u);
    ctx->pc = 0x2A9F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9F08u;
    // 0x2a9f0c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2A9F08u, 0x2A9F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9F10u;
label_2a9f10:
    // 0x2a9f10: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x2a9f10u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_2a9f14:
    // 0x2a9f14: 0x30820080  andi        $v0, $a0, 0x80
    ctx->pc = 0x2a9f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
label_2a9f18:
    // 0x2a9f18: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
label_2a9f1c:
    if (ctx->pc == 0x2A9F1Cu) {
        ctx->pc = 0x2A9F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9F18u;
        // 0x2a9f1c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9F20u;
        goto label_2a9f20;
    }
    ctx->pc = 0x2A9F18u;
    {
        const bool branch_taken_0x2a9f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9F18u;
        // 0x2a9f1c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9f18) {
            ctx->pc = 0x2AA0C8u;
            goto label_2aa0c8;
        }
    }
    ctx->pc = 0x2A9F20u;
label_2a9f20:
    // 0x2a9f20: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x2a9f20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_2a9f24:
    // 0x2a9f24: 0x14620069  bne         $v1, $v0, . + 4 + (0x69 << 2)
label_2a9f28:
    if (ctx->pc == 0x2A9F28u) {
        ctx->pc = 0x2A9F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9F24u;
        // 0x2a9f28: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9F2Cu;
        goto label_2a9f2c;
    }
    ctx->pc = 0x2A9F24u;
    {
        const bool branch_taken_0x2a9f24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A9F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9F24u;
        // 0x2a9f28: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9f24) {
            ctx->pc = 0x2AA0CCu;
            goto label_2aa0cc;
        }
    }
    ctx->pc = 0x2A9F2Cu;
label_2a9f2c:
    // 0x2a9f2c: 0x92420005  lbu         $v0, 0x5($s2)
    ctx->pc = 0x2a9f2cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
label_2a9f30:
    // 0x2a9f30: 0x14400067  bnez        $v0, . + 4 + (0x67 << 2)
label_2a9f34:
    if (ctx->pc == 0x2A9F34u) {
        ctx->pc = 0x2A9F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9F30u;
        // 0x2a9f34: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9F38u;
        goto label_2a9f38;
    }
    ctx->pc = 0x2A9F30u;
    {
        const bool branch_taken_0x2a9f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9F30u;
        // 0x2a9f34: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9f30) {
            ctx->pc = 0x2AA0D0u;
            goto label_2aa0d0;
        }
    }
    ctx->pc = 0x2A9F38u;
label_2a9f38:
    // 0x2a9f38: 0x92430006  lbu         $v1, 0x6($s2)
    ctx->pc = 0x2a9f38u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
label_2a9f3c:
    // 0x2a9f3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a9f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a9f40:
    // 0x2a9f40: 0x14620062  bne         $v1, $v0, . + 4 + (0x62 << 2)
label_2a9f44:
    if (ctx->pc == 0x2A9F44u) {
        ctx->pc = 0x2A9F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9F40u;
        // 0x2a9f44: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9F48u;
        goto label_2a9f48;
    }
    ctx->pc = 0x2A9F40u;
    {
        const bool branch_taken_0x2a9f40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A9F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9F40u;
        // 0x2a9f44: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9f40) {
            ctx->pc = 0x2AA0CCu;
            goto label_2aa0cc;
        }
    }
    ctx->pc = 0x2A9F48u;
label_2a9f48:
    // 0x2a9f48: 0xde020100  ld          $v0, 0x100($s0)
    ctx->pc = 0x2a9f48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 256)));
label_2a9f4c:
    // 0x2a9f4c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x2a9f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_2a9f50:
    // 0x2a9f50: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a9f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2a9f54:
    // 0x2a9f54: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2a9f58:
    if (ctx->pc == 0x2A9F58u) {
        ctx->pc = 0x2A9F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9F54u;
        // 0x2a9f58: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9F5Cu;
        goto label_2a9f5c;
    }
    ctx->pc = 0x2A9F54u;
    {
        const bool branch_taken_0x2a9f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9f54) {
            ctx->pc = 0x2A9F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9F54u;
            // 0x2a9f58: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9F84u;
            goto label_2a9f84;
        }
    }
    ctx->pc = 0x2A9F5Cu;
label_2a9f5c:
    // 0x2a9f5c: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_2a9f60:
    if (ctx->pc == 0x2A9F60u) {
        ctx->pc = 0x2A9F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9F5Cu;
        // 0x2a9f60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9F64u;
        goto label_2a9f64;
    }
    ctx->pc = 0x2A9F5Cu;
    {
        const bool branch_taken_0x2a9f5c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9F5Cu;
        // 0x2a9f60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9f5c) {
            ctx->pc = 0x2A9F74u;
            goto label_2a9f74;
        }
    }
    ctx->pc = 0x2A9F64u;
label_2a9f64:
    // 0x2a9f64: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2a9f64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2a9f68:
    // 0x2a9f68: 0x24054004  addiu       $a1, $zero, 0x4004
    ctx->pc = 0x2a9f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16388));
label_2a9f6c:
    // 0x2a9f6c: 0x280f809  jalr        $s4
label_2a9f70:
    if (ctx->pc == 0x2A9F70u) {
        ctx->pc = 0x2A9F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9F6Cu;
        // 0x2a9f70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9F74u;
        goto label_2a9f74;
    }
    ctx->pc = 0x2A9F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x2A9F74u);
        ctx->pc = 0x2A9F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9F6Cu;
        // 0x2a9f70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9F6Cu, 0x2A9F74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A9F74u;
label_2a9f74:
    // 0x2a9f74: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2a9f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2a9f78:
    // 0x2a9f78: 0x24050077  addiu       $a1, $zero, 0x77
    ctx->pc = 0x2a9f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_2a9f7c:
    // 0x2a9f7c: 0x100000cf  b           . + 4 + (0xCF << 2)
label_2a9f80:
    if (ctx->pc == 0x2A9F80u) {
        ctx->pc = 0x2A9F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9F7Cu;
        // 0x2a9f80: 0x24060102  addiu       $a2, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9F84u;
        goto label_2a9f84;
    }
    ctx->pc = 0x2A9F7Cu;
    {
        const bool branch_taken_0x2a9f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9F7Cu;
        // 0x2a9f80: 0x24060102  addiu       $a2, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9f7c) {
            ctx->pc = 0x2AA2BCu;
            goto label_2aa2bc;
        }
    }
    ctx->pc = 0x2A9F84u;
label_2a9f84:
    // 0x2a9f84: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2a9f88:
    if (ctx->pc == 0x2A9F88u) {
        ctx->pc = 0x2A9F8Cu;
        goto label_2a9f8c;
    }
    ctx->pc = 0x2A9F84u;
    {
        const bool branch_taken_0x2a9f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a9f84) {
            ctx->pc = 0x2A9FA4u;
            goto label_2a9fa4;
        }
    }
    ctx->pc = 0x2A9F8Cu;
label_2a9f8c:
    // 0x2a9f8c: 0xc0ab19e  jal         func_2AC678
label_2a9f90:
    if (ctx->pc == 0x2A9F90u) {
        ctx->pc = 0x2A9F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9F8Cu;
        // 0x2a9f90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9F94u;
        goto label_2a9f94;
    }
    ctx->pc = 0x2A9F8Cu;
    SET_GPR_U32(ctx, 31, 0x2A9F94u);
    ctx->pc = 0x2A9F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9F8Cu;
    // 0x2a9f90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC678u, 0x2A9F8Cu, 0x2A9F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9F94u;
label_2a9f94:
    // 0x2a9f94: 0x104000da  beqz        $v0, . + 4 + (0xDA << 2)
label_2a9f98:
    if (ctx->pc == 0x2A9F98u) {
        ctx->pc = 0x2A9F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9F94u;
        // 0x2a9f98: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9F9Cu;
        goto label_2a9f9c;
    }
    ctx->pc = 0x2A9F94u;
    {
        const bool branch_taken_0x2a9f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9F94u;
        // 0x2a9f98: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9f94) {
            ctx->pc = 0x2AA300u;
            goto label_2aa300;
        }
    }
    ctx->pc = 0x2A9F9Cu;
label_2a9f9c:
    // 0x2a9f9c: 0x10000004  b           . + 4 + (0x4 << 2)
label_2a9fa0:
    if (ctx->pc == 0x2A9FA0u) {
        ctx->pc = 0x2A9FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9F9Cu;
        // 0x2a9fa0: 0xde030100  ld          $v1, 0x100($s0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9FA4u;
        goto label_2a9fa4;
    }
    ctx->pc = 0x2A9F9Cu;
    {
        const bool branch_taken_0x2a9f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9F9Cu;
        // 0x2a9fa0: 0xde030100  ld          $v1, 0x100($s0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9f9c) {
            ctx->pc = 0x2A9FB0u;
            goto label_2a9fb0;
        }
    }
    ctx->pc = 0x2A9FA4u;
label_2a9fa4:
    // 0x2a9fa4: 0xc0ab1d4  jal         func_2AC750
label_2a9fa8:
    if (ctx->pc == 0x2A9FA8u) {
        ctx->pc = 0x2A9FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9FA4u;
        // 0x2a9fa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9FACu;
        goto label_2a9fac;
    }
    ctx->pc = 0x2A9FA4u;
    SET_GPR_U32(ctx, 31, 0x2A9FACu);
    ctx->pc = 0x2A9FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9FA4u;
    // 0x2a9fa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC750u, 0x2A9FA4u, 0x2A9FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9FACu;
label_2a9fac:
    // 0x2a9fac: 0xde030100  ld          $v1, 0x100($s0)
    ctx->pc = 0x2a9facu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 256)));
label_2a9fb0:
    // 0x2a9fb0: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2a9fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2a9fb4:
    // 0x2a9fb4: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x2a9fb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2a9fb8:
    // 0x2a9fb8: 0x8e060050  lw          $a2, 0x50($s0)
    ctx->pc = 0x2a9fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2a9fbc:
    // 0x2a9fbc: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2a9fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_2a9fc0:
    // 0x2a9fc0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2a9fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2a9fc4:
    // 0x2a9fc4: 0xa3880a  movz        $s1, $a1, $v1
    ctx->pc = 0x2a9fc4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 5));
label_2a9fc8:
    // 0x2a9fc8: 0x2a220021  slti        $v0, $s1, 0x21
    ctx->pc = 0x2a9fc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)33) ? 1 : 0);
label_2a9fcc:
    // 0x2a9fcc: 0x82880a  movz        $s1, $a0, $v0
    ctx->pc = 0x2a9fccu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
label_2a9fd0:
    // 0x2a9fd0: 0xacd1006c  sw          $s1, 0x6C($a2)
    ctx->pc = 0x2a9fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 108), GPR_U32(ctx, 17));
label_2a9fd4:
    // 0x2a9fd4: 0x2622ff7c  addiu       $v0, $s1, -0x84
    ctx->pc = 0x2a9fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967164));
label_2a9fd8:
    // 0x2a9fd8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a9fd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a9fdc:
    // 0x2a9fdc: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x2a9fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2a9fe0:
    // 0x2a9fe0: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x2a9fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2a9fe4:
    // 0x2a9fe4: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x2a9fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_2a9fe8:
    // 0x2a9fe8: 0xc049c48  jal         func_127120
label_2a9fec:
    if (ctx->pc == 0x2A9FECu) {
        ctx->pc = 0x2A9FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9FE8u;
        // 0x2a9fec: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9FF0u;
        goto label_2a9ff0;
    }
    ctx->pc = 0x2A9FE8u;
    SET_GPR_U32(ctx, 31, 0x2A9FF0u);
    ctx->pc = 0x2A9FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9FE8u;
    // 0x2a9fec: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2A9FE8u, 0x2A9FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9FF0u;
label_2a9ff0:
    // 0x2a9ff0: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2a9ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2a9ff4:
    // 0x2a9ff4: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_2a9ff8:
    if (ctx->pc == 0x2A9FF8u) {
        ctx->pc = 0x2A9FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9FF4u;
        // 0x2a9ff8: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9FFCu;
        goto label_2a9ffc;
    }
    ctx->pc = 0x2A9FF4u;
    {
        const bool branch_taken_0x2a9ff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9ff4) {
            ctx->pc = 0x2A9FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9FF4u;
            // 0x2a9ff8: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA008u;
            goto label_2aa008;
        }
    }
    ctx->pc = 0x2A9FFCu;
label_2a9ffc:
    // 0x2a9ffc: 0xc0aba02  jal         func_2AE808
label_2aa000:
    if (ctx->pc == 0x2AA000u) {
        ctx->pc = 0x2AA000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9FFCu;
        // 0x2aa000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA004u;
        goto label_2aa004;
    }
    ctx->pc = 0x2A9FFCu;
    SET_GPR_U32(ctx, 31, 0x2AA004u);
    ctx->pc = 0x2AA000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9FFCu;
    // 0x2aa000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE808u, 0x2A9FFCu, 0x2AA004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA004u;
label_2aa004:
    // 0x2aa004: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x2aa004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_2aa008:
    // 0x2aa008: 0xc0a32e0  jal         func_28CB80
label_2aa00c:
    if (ctx->pc == 0x2AA00Cu) {
        ctx->pc = 0x2AA00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA008u;
        // 0x2aa00c: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA010u;
        goto label_2aa010;
    }
    ctx->pc = 0x2AA008u;
    SET_GPR_U32(ctx, 31, 0x2AA010u);
    ctx->pc = 0x2AA00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA008u;
    // 0x2aa00c: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CB80u, 0x2AA008u, 0x2AA010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA010u;
label_2aa010:
    // 0x2aa010: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_2aa014:
    if (ctx->pc == 0x2AA014u) {
        ctx->pc = 0x2AA014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA010u;
        // 0x2aa014: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA018u;
        goto label_2aa018;
    }
    ctx->pc = 0x2AA010u;
    {
        const bool branch_taken_0x2aa010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aa010) {
            ctx->pc = 0x2AA014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA010u;
            // 0x2aa014: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA040u;
            goto label_2aa040;
        }
    }
    ctx->pc = 0x2AA018u;
label_2aa018:
    // 0x2aa018: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_2aa01c:
    if (ctx->pc == 0x2AA01Cu) {
        ctx->pc = 0x2AA01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA018u;
        // 0x2aa01c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA020u;
        goto label_2aa020;
    }
    ctx->pc = 0x2AA018u;
    {
        const bool branch_taken_0x2aa018 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA018u;
        // 0x2aa01c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa018) {
            ctx->pc = 0x2AA030u;
            goto label_2aa030;
        }
    }
    ctx->pc = 0x2AA020u;
label_2aa020:
    // 0x2aa020: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2aa020u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2aa024:
    // 0x2aa024: 0x24054004  addiu       $a1, $zero, 0x4004
    ctx->pc = 0x2aa024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16388));
label_2aa028:
    // 0x2aa028: 0x280f809  jalr        $s4
label_2aa02c:
    if (ctx->pc == 0x2AA02Cu) {
        ctx->pc = 0x2AA02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA028u;
        // 0x2aa02c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA030u;
        goto label_2aa030;
    }
    ctx->pc = 0x2AA028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x2AA030u);
        ctx->pc = 0x2AA02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA028u;
        // 0x2aa02c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA028u, 0x2AA030u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AA030u;
label_2aa030:
    // 0x2aa030: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2aa030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2aa034:
    // 0x2aa034: 0x24050077  addiu       $a1, $zero, 0x77
    ctx->pc = 0x2aa034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_2aa038:
    // 0x2aa038: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_2aa03c:
    if (ctx->pc == 0x2AA03Cu) {
        ctx->pc = 0x2AA03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA038u;
        // 0x2aa03c: 0x24060807  addiu       $a2, $zero, 0x807 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2055));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA040u;
        goto label_2aa040;
    }
    ctx->pc = 0x2AA038u;
    {
        const bool branch_taken_0x2aa038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA038u;
        // 0x2aa03c: 0x24060807  addiu       $a2, $zero, 0x807 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2055));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa038) {
            ctx->pc = 0x2AA2BCu;
            goto label_2aa2bc;
        }
    }
    ctx->pc = 0x2AA040u;
label_2aa040:
    // 0x2aa040: 0x24021020  addiu       $v0, $zero, 0x1020
    ctx->pc = 0x2aa040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4128));
label_2aa044:
    // 0x2aa044: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2aa044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_2aa048:
    // 0x2aa048: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2aa048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aa04c:
    // 0x2aa04c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2aa04cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_2aa050:
    // 0x2aa050: 0xc0ab2a0  jal         func_2ACA80
label_2aa054:
    if (ctx->pc == 0x2AA054u) {
        ctx->pc = 0x2AA054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA050u;
        // 0x2aa054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA058u;
        goto label_2aa058;
    }
    ctx->pc = 0x2AA050u;
    SET_GPR_U32(ctx, 31, 0x2AA058u);
    ctx->pc = 0x2AA054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA050u;
    // 0x2aa054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACA80u, 0x2AA050u, 0x2AA058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA058u;
label_2aa058:
    // 0x2aa058: 0x104000a8  beqz        $v0, . + 4 + (0xA8 << 2)
label_2aa05c:
    if (ctx->pc == 0x2AA05Cu) {
        ctx->pc = 0x2AA05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA058u;
        // 0x2aa05c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA060u;
        goto label_2aa060;
    }
    ctx->pc = 0x2AA058u;
    {
        const bool branch_taken_0x2aa058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA058u;
        // 0x2aa05c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa058) {
            ctx->pc = 0x2AA2FCu;
            goto label_2aa2fc;
        }
    }
    ctx->pc = 0x2AA060u;
label_2aa060:
    // 0x2aa060: 0xc0ab2cc  jal         func_2ACB30
label_2aa064:
    if (ctx->pc == 0x2AA064u) {
        ctx->pc = 0x2AA064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA060u;
        // 0x2aa064: 0x2665012c  addiu       $a1, $s3, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 300));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA068u;
        goto label_2aa068;
    }
    ctx->pc = 0x2AA060u;
    SET_GPR_U32(ctx, 31, 0x2AA068u);
    ctx->pc = 0x2AA064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA060u;
    // 0x2aa064: 0x2665012c  addiu       $a1, $s3, 0x12C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 300));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACB30u, 0x2AA060u, 0x2AA068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA068u;
label_2aa068:
    // 0x2aa068: 0x104000a4  beqz        $v0, . + 4 + (0xA4 << 2)
label_2aa06c:
    if (ctx->pc == 0x2AA06Cu) {
        ctx->pc = 0x2AA06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA068u;
        // 0x2aa06c: 0x240200f0  addiu       $v0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA070u;
        goto label_2aa070;
    }
    ctx->pc = 0x2AA068u;
    {
        const bool branch_taken_0x2aa068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA068u;
        // 0x2aa06c: 0x240200f0  addiu       $v0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa068) {
            ctx->pc = 0x2AA2FCu;
            goto label_2aa2fc;
        }
    }
    ctx->pc = 0x2AA070u;
label_2aa070:
    // 0x2aa070: 0xae13004c  sw          $s3, 0x4C($s0)
    ctx->pc = 0x2aa070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 19));
label_2aa074:
    // 0x2aa074: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2aa074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_2aa078:
    // 0x2aa078: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2aa078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2aa07c:
    // 0x2aa07c: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2aa07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2aa080:
    // 0x2aa080: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2aa080u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2aa084:
    // 0x2aa084: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x2aa084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_2aa088:
    // 0x2aa088: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aa088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aa08c:
    // 0x2aa08c: 0xc049c48  jal         func_127120
label_2aa090:
    if (ctx->pc == 0x2AA090u) {
        ctx->pc = 0x2AA090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA08Cu;
        // 0x2aa090: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA094u;
        goto label_2aa094;
    }
    ctx->pc = 0x2AA08Cu;
    SET_GPR_U32(ctx, 31, 0x2AA094u);
    ctx->pc = 0x2AA090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA08Cu;
    // 0x2aa090: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2AA08Cu, 0x2AA094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA094u;
label_2aa094:
    // 0x2aa094: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2aa094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2aa098:
    // 0x2aa098: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2aa098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aa09c:
    // 0x2aa09c: 0xac730028  sw          $s3, 0x28($v1)
    ctx->pc = 0x2aa09cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 19));
label_2aa0a0:
    // 0x2aa0a0: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2aa0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2aa0a4:
    // 0x2aa0a4: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x2aa0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_2aa0a8:
    // 0x2aa0a8: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2aa0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2aa0ac:
    // 0x2aa0ac: 0xc0aa9fa  jal         func_2AA7E8
label_2aa0b0:
    if (ctx->pc == 0x2AA0B0u) {
        ctx->pc = 0x2AA0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA0ACu;
        // 0x2aa0b0: 0xfc6400e0  sd          $a0, 0xE0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 224), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA0B4u;
        goto label_2aa0b4;
    }
    ctx->pc = 0x2AA0ACu;
    SET_GPR_U32(ctx, 31, 0x2AA0B4u);
    ctx->pc = 0x2AA0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA0ACu;
    // 0x2aa0b0: 0xfc6400e0  sd          $a0, 0xE0($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 224), GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA7E8u, 0x2AA0ACu, 0x2AA0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA0B4u;
label_2aa0b4:
    // 0x2aa0b4: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x2aa0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
label_2aa0b8:
    // 0x2aa0b8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2aa0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2aa0bc:
    // 0x2aa0bc: 0x24630218  addiu       $v1, $v1, 0x218
    ctx->pc = 0x2aa0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 536));
label_2aa0c0:
    // 0x2aa0c0: 0x10000083  b           . + 4 + (0x83 << 2)
label_2aa0c4:
    if (ctx->pc == 0x2AA0C4u) {
        ctx->pc = 0x2AA0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA0C0u;
        // 0x2aa0c4: 0xae030020  sw          $v1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA0C8u;
        goto label_2aa0c8;
    }
    ctx->pc = 0x2AA0C0u;
    {
        const bool branch_taken_0x2aa0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA0C0u;
        // 0x2aa0c4: 0xae030020  sw          $v1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa0c0) {
            ctx->pc = 0x2AA2D0u;
            goto label_2aa2d0;
        }
    }
    ctx->pc = 0x2AA0C8u;
label_2aa0c8:
    // 0x2aa0c8: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2aa0c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2aa0cc:
    // 0x2aa0cc: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x2aa0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2aa0d0:
    // 0x2aa0d0: 0x14620046  bne         $v1, $v0, . + 4 + (0x46 << 2)
label_2aa0d4:
    if (ctx->pc == 0x2AA0D4u) {
        ctx->pc = 0x2AA0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA0D0u;
        // 0x2aa0d4: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA0D8u;
        goto label_2aa0d8;
    }
    ctx->pc = 0x2AA0D0u;
    {
        const bool branch_taken_0x2aa0d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AA0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA0D0u;
        // 0x2aa0d4: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa0d0) {
            ctx->pc = 0x2AA1ECu;
            goto label_2aa1ec;
        }
    }
    ctx->pc = 0x2AA0D8u;
label_2aa0d8:
    // 0x2aa0d8: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x2aa0d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_2aa0dc:
    // 0x2aa0dc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2aa0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2aa0e0:
    // 0x2aa0e0: 0x14620042  bne         $v1, $v0, . + 4 + (0x42 << 2)
label_2aa0e4:
    if (ctx->pc == 0x2AA0E4u) {
        ctx->pc = 0x2AA0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA0E0u;
        // 0x2aa0e4: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA0E8u;
        goto label_2aa0e8;
    }
    ctx->pc = 0x2AA0E0u;
    {
        const bool branch_taken_0x2aa0e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AA0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA0E0u;
        // 0x2aa0e4: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa0e0) {
            ctx->pc = 0x2AA1ECu;
            goto label_2aa1ec;
        }
    }
    ctx->pc = 0x2AA0E8u;
label_2aa0e8:
    // 0x2aa0e8: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x2aa0e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_2aa0ec:
    // 0x2aa0ec: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2aa0ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2aa0f0:
    // 0x2aa0f0: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_2aa0f4:
    if (ctx->pc == 0x2AA0F4u) {
        ctx->pc = 0x2AA0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA0F0u;
        // 0x2aa0f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA0F8u;
        goto label_2aa0f8;
    }
    ctx->pc = 0x2AA0F0u;
    {
        const bool branch_taken_0x2aa0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA0F0u;
        // 0x2aa0f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa0f0) {
            ctx->pc = 0x2AA1ECu;
            goto label_2aa1ec;
        }
    }
    ctx->pc = 0x2AA0F8u;
label_2aa0f8:
    // 0x2aa0f8: 0x92430005  lbu         $v1, 0x5($s2)
    ctx->pc = 0x2aa0f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
label_2aa0fc:
    // 0x2aa0fc: 0x1462003b  bne         $v1, $v0, . + 4 + (0x3B << 2)
label_2aa100:
    if (ctx->pc == 0x2AA100u) {
        ctx->pc = 0x2AA100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA0FCu;
        // 0x2aa100: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA104u;
        goto label_2aa104;
    }
    ctx->pc = 0x2AA0FCu;
    {
        const bool branch_taken_0x2aa0fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AA100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA0FCu;
        // 0x2aa100: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa0fc) {
            ctx->pc = 0x2AA1ECu;
            goto label_2aa1ec;
        }
    }
    ctx->pc = 0x2AA104u;
label_2aa104:
    // 0x2aa104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aa104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2aa108:
    // 0x2aa108: 0xc0ac58a  jal         func_2B1628
label_2aa10c:
    if (ctx->pc == 0x2AA10Cu) {
        ctx->pc = 0x2AA10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA108u;
        // 0x2aa10c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA110u;
        goto label_2aa110;
    }
    ctx->pc = 0x2AA108u;
    SET_GPR_U32(ctx, 31, 0x2AA110u);
    ctx->pc = 0x2AA10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA108u;
    // 0x2aa10c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1628u, 0x2AA108u, 0x2AA110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA110u;
label_2aa110:
    // 0x2aa110: 0x1040007a  beqz        $v0, . + 4 + (0x7A << 2)
label_2aa114:
    if (ctx->pc == 0x2AA114u) {
        ctx->pc = 0x2AA114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA110u;
        // 0x2aa114: 0x24021120  addiu       $v0, $zero, 0x1120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA118u;
        goto label_2aa118;
    }
    ctx->pc = 0x2AA110u;
    {
        const bool branch_taken_0x2aa110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA110u;
        // 0x2aa114: 0x24021120  addiu       $v0, $zero, 0x1120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa110) {
            ctx->pc = 0x2AA2FCu;
            goto label_2aa2fc;
        }
    }
    ctx->pc = 0x2AA118u;
label_2aa118:
    // 0x2aa118: 0x240300f0  addiu       $v1, $zero, 0xF0
    ctx->pc = 0x2aa118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_2aa11c:
    // 0x2aa11c: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2aa11cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_2aa120:
    // 0x2aa120: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2aa120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2aa124:
    // 0x2aa124: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x2aa124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
label_2aa128:
    // 0x2aa128: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2aa128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2aa12c:
    // 0x2aa12c: 0xae13004c  sw          $s3, 0x4C($s0)
    ctx->pc = 0x2aa12cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 19));
label_2aa130:
    // 0x2aa130: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2aa130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2aa134:
    // 0x2aa134: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x2aa134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_2aa138:
    // 0x2aa138: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2aa138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2aa13c:
    // 0x2aa13c: 0xc049c48  jal         func_127120
label_2aa140:
    if (ctx->pc == 0x2AA140u) {
        ctx->pc = 0x2AA140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA13Cu;
        // 0x2aa140: 0xae030048  sw          $v1, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA144u;
        goto label_2aa144;
    }
    ctx->pc = 0x2AA13Cu;
    SET_GPR_U32(ctx, 31, 0x2AA144u);
    ctx->pc = 0x2AA140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA13Cu;
    // 0x2aa140: 0xae030048  sw          $v1, 0x48($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2AA13Cu, 0x2AA144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA144u;
label_2aa144:
    // 0x2aa144: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2aa144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2aa148:
    // 0x2aa148: 0xac73008c  sw          $s3, 0x8C($v1)
    ctx->pc = 0x2aa148u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 19));
label_2aa14c:
    // 0x2aa14c: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2aa14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2aa150:
    // 0x2aa150: 0xac400090  sw          $zero, 0x90($v0)
    ctx->pc = 0x2aa150u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 0));
label_2aa154:
    // 0x2aa154: 0x92450002  lbu         $a1, 0x2($s2)
    ctx->pc = 0x2aa154u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_2aa158:
    // 0x2aa158: 0x14a0000b  bnez        $a1, . + 4 + (0xB << 2)
label_2aa15c:
    if (ctx->pc == 0x2AA15Cu) {
        ctx->pc = 0x2AA15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA158u;
        // 0x2aa15c: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA160u;
        goto label_2aa160;
    }
    ctx->pc = 0x2AA158u;
    {
        const bool branch_taken_0x2aa158 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA158u;
        // 0x2aa15c: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa158) {
            ctx->pc = 0x2AA188u;
            goto label_2aa188;
        }
    }
    ctx->pc = 0x2AA160u;
label_2aa160:
    // 0x2aa160: 0xde020100  ld          $v0, 0x100($s0)
    ctx->pc = 0x2aa160u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 256)));
label_2aa164:
    // 0x2aa164: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x2aa164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_2aa168:
    // 0x2aa168: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2aa168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2aa16c:
    // 0x2aa16c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2aa170:
    if (ctx->pc == 0x2AA170u) {
        ctx->pc = 0x2AA170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA16Cu;
        // 0x2aa170: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA174u;
        goto label_2aa174;
    }
    ctx->pc = 0x2AA16Cu;
    {
        const bool branch_taken_0x2aa16c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA16Cu;
        // 0x2aa170: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa16c) {
            ctx->pc = 0x2AA188u;
            goto label_2aa188;
        }
    }
    ctx->pc = 0x2AA174u;
label_2aa174:
    // 0x2aa174: 0x24020300  addiu       $v0, $zero, 0x300
    ctx->pc = 0x2aa174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
label_2aa178:
    // 0x2aa178: 0xc0acc3e  jal         func_2B30F8
label_2aa17c:
    if (ctx->pc == 0x2AA17Cu) {
        ctx->pc = 0x2AA17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA178u;
        // 0x2aa17c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA180u;
        goto label_2aa180;
    }
    ctx->pc = 0x2AA178u;
    SET_GPR_U32(ctx, 31, 0x2AA180u);
    ctx->pc = 0x2AA17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA178u;
    // 0x2aa17c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B30F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B30F8u, 0x2AA178u, 0x2AA180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA180u;
label_2aa180:
    // 0x2aa180: 0x10000016  b           . + 4 + (0x16 << 2)
label_2aa184:
    if (ctx->pc == 0x2AA184u) {
        ctx->pc = 0x2AA184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA180u;
        // 0x2aa184: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA188u;
        goto label_2aa188;
    }
    ctx->pc = 0x2AA180u;
    {
        const bool branch_taken_0x2aa180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA180u;
        // 0x2aa184: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa180) {
            ctx->pc = 0x2AA1DCu;
            goto label_2aa1dc;
        }
    }
    ctx->pc = 0x2AA188u;
label_2aa188:
    // 0x2aa188: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aa188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aa18c:
    // 0x2aa18c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_2aa190:
    if (ctx->pc == 0x2AA190u) {
        ctx->pc = 0x2AA190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA18Cu;
        // 0x2aa190: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA194u;
        goto label_2aa194;
    }
    ctx->pc = 0x2AA18Cu;
    {
        const bool branch_taken_0x2aa18c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AA190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA18Cu;
        // 0x2aa190: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa18c) {
            ctx->pc = 0x2AA1B4u;
            goto label_2aa1b4;
        }
    }
    ctx->pc = 0x2AA194u;
label_2aa194:
    // 0x2aa194: 0xde020100  ld          $v0, 0x100($s0)
    ctx->pc = 0x2aa194u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 256)));
label_2aa198:
    // 0x2aa198: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2aa198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2aa19c:
    // 0x2aa19c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2aa1a0:
    if (ctx->pc == 0x2AA1A0u) {
        ctx->pc = 0x2AA1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA19Cu;
        // 0x2aa1a0: 0x24020301  addiu       $v0, $zero, 0x301 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 769));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA1A4u;
        goto label_2aa1a4;
    }
    ctx->pc = 0x2AA19Cu;
    {
        const bool branch_taken_0x2aa19c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA19Cu;
        // 0x2aa1a0: 0x24020301  addiu       $v0, $zero, 0x301 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 769));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa19c) {
            ctx->pc = 0x2AA1B4u;
            goto label_2aa1b4;
        }
    }
    ctx->pc = 0x2AA1A4u;
label_2aa1a4:
    // 0x2aa1a4: 0xc0af196  jal         func_2BC658
label_2aa1a8:
    if (ctx->pc == 0x2AA1A8u) {
        ctx->pc = 0x2AA1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA1A4u;
        // 0x2aa1a8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA1ACu;
        goto label_2aa1ac;
    }
    ctx->pc = 0x2AA1A4u;
    SET_GPR_U32(ctx, 31, 0x2AA1ACu);
    ctx->pc = 0x2AA1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA1A4u;
    // 0x2aa1a8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC658u, 0x2AA1A4u, 0x2AA1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA1ACu;
label_2aa1ac:
    // 0x2aa1ac: 0x1000000b  b           . + 4 + (0xB << 2)
label_2aa1b0:
    if (ctx->pc == 0x2AA1B0u) {
        ctx->pc = 0x2AA1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA1ACu;
        // 0x2aa1b0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA1B4u;
        goto label_2aa1b4;
    }
    ctx->pc = 0x2AA1ACu;
    {
        const bool branch_taken_0x2aa1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA1ACu;
        // 0x2aa1b0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa1ac) {
            ctx->pc = 0x2AA1DCu;
            goto label_2aa1dc;
        }
    }
    ctx->pc = 0x2AA1B4u;
label_2aa1b4:
    // 0x2aa1b4: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_2aa1b8:
    if (ctx->pc == 0x2AA1B8u) {
        ctx->pc = 0x2AA1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA1B4u;
        // 0x2aa1b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA1BCu;
        goto label_2aa1bc;
    }
    ctx->pc = 0x2AA1B4u;
    {
        const bool branch_taken_0x2aa1b4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA1B4u;
        // 0x2aa1b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa1b4) {
            ctx->pc = 0x2AA1CCu;
            goto label_2aa1cc;
        }
    }
    ctx->pc = 0x2AA1BCu;
label_2aa1bc:
    // 0x2aa1bc: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2aa1bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2aa1c0:
    // 0x2aa1c0: 0x24054004  addiu       $a1, $zero, 0x4004
    ctx->pc = 0x2aa1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16388));
label_2aa1c4:
    // 0x2aa1c4: 0x280f809  jalr        $s4
label_2aa1c8:
    if (ctx->pc == 0x2AA1C8u) {
        ctx->pc = 0x2AA1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA1C4u;
        // 0x2aa1c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA1CCu;
        goto label_2aa1cc;
    }
    ctx->pc = 0x2AA1C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x2AA1CCu);
        ctx->pc = 0x2AA1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA1C4u;
        // 0x2aa1c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA1C4u, 0x2AA1CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AA1CCu;
label_2aa1cc:
    // 0x2aa1cc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2aa1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2aa1d0:
    // 0x2aa1d0: 0x24050077  addiu       $a1, $zero, 0x77
    ctx->pc = 0x2aa1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_2aa1d4:
    // 0x2aa1d4: 0x10000039  b           . + 4 + (0x39 << 2)
label_2aa1d8:
    if (ctx->pc == 0x2AA1D8u) {
        ctx->pc = 0x2AA1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA1D4u;
        // 0x2aa1d8: 0x24060102  addiu       $a2, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA1DCu;
        goto label_2aa1dc;
    }
    ctx->pc = 0x2AA1D4u;
    {
        const bool branch_taken_0x2aa1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA1D4u;
        // 0x2aa1d8: 0x24060102  addiu       $a2, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa1d4) {
            ctx->pc = 0x2AA2BCu;
            goto label_2aa2bc;
        }
    }
    ctx->pc = 0x2AA1DCu;
label_2aa1dc:
    // 0x2aa1dc: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x2aa1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
label_2aa1e0:
    // 0x2aa1e0: 0x24420218  addiu       $v0, $v0, 0x218
    ctx->pc = 0x2aa1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 536));
label_2aa1e4:
    // 0x2aa1e4: 0x1000003a  b           . + 4 + (0x3A << 2)
label_2aa1e8:
    if (ctx->pc == 0x2AA1E8u) {
        ctx->pc = 0x2AA1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA1E4u;
        // 0x2aa1e8: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA1ECu;
        goto label_2aa1ec;
    }
    ctx->pc = 0x2AA1E4u;
    {
        const bool branch_taken_0x2aa1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA1E4u;
        // 0x2aa1e8: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa1e4) {
            ctx->pc = 0x2AA2D0u;
            goto label_2aa2d0;
        }
    }
    ctx->pc = 0x2AA1ECu;
label_2aa1ec:
    // 0x2aa1ec: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x2aa1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2aa1f0:
    // 0x2aa1f0: 0x14620030  bne         $v1, $v0, . + 4 + (0x30 << 2)
label_2aa1f4:
    if (ctx->pc == 0x2AA1F4u) {
        ctx->pc = 0x2AA1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA1F0u;
        // 0x2aa1f4: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA1F8u;
        goto label_2aa1f8;
    }
    ctx->pc = 0x2AA1F0u;
    {
        const bool branch_taken_0x2aa1f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AA1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA1F0u;
        // 0x2aa1f4: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa1f0) {
            ctx->pc = 0x2AA2B4u;
            goto label_2aa2b4;
        }
    }
    ctx->pc = 0x2AA1F8u;
label_2aa1f8:
    // 0x2aa1f8: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x2aa1f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_2aa1fc:
    // 0x2aa1fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2aa1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2aa200:
    // 0x2aa200: 0x1462002d  bne         $v1, $v0, . + 4 + (0x2D << 2)
label_2aa204:
    if (ctx->pc == 0x2AA204u) {
        ctx->pc = 0x2AA204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA200u;
        // 0x2aa204: 0x24050077  addiu       $a1, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA208u;
        goto label_2aa208;
    }
    ctx->pc = 0x2AA200u;
    {
        const bool branch_taken_0x2aa200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AA204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA200u;
        // 0x2aa204: 0x24050077  addiu       $a1, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa200) {
            ctx->pc = 0x2AA2B8u;
            goto label_2aa2b8;
        }
    }
    ctx->pc = 0x2AA208u;
label_2aa208:
    // 0x2aa208: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x2aa208u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_2aa20c:
    // 0x2aa20c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2aa20cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2aa210:
    // 0x2aa210: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_2aa214:
    if (ctx->pc == 0x2AA214u) {
        ctx->pc = 0x2AA214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA210u;
        // 0x2aa214: 0x240600fc  addiu       $a2, $zero, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA218u;
        goto label_2aa218;
    }
    ctx->pc = 0x2AA210u;
    {
        const bool branch_taken_0x2aa210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA210u;
        // 0x2aa214: 0x240600fc  addiu       $a2, $zero, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa210) {
            ctx->pc = 0x2AA2BCu;
            goto label_2aa2bc;
        }
    }
    ctx->pc = 0x2AA218u;
label_2aa218:
    // 0x2aa218: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x2aa218u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_2aa21c:
    // 0x2aa21c: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_2aa220:
    if (ctx->pc == 0x2AA220u) {
        ctx->pc = 0x2AA220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA21Cu;
        // 0x2aa220: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA224u;
        goto label_2aa224;
    }
    ctx->pc = 0x2AA21Cu;
    {
        const bool branch_taken_0x2aa21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA21Cu;
        // 0x2aa220: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa21c) {
            ctx->pc = 0x2AA2C0u;
            goto label_2aa2c0;
        }
    }
    ctx->pc = 0x2AA224u;
label_2aa224:
    // 0x2aa224: 0x92430004  lbu         $v1, 0x4($s2)
    ctx->pc = 0x2aa224u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_2aa228:
    // 0x2aa228: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2aa228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2aa22c:
    // 0x2aa22c: 0x14620024  bne         $v1, $v0, . + 4 + (0x24 << 2)
label_2aa230:
    if (ctx->pc == 0x2AA230u) {
        ctx->pc = 0x2AA234u;
        goto label_2aa234;
    }
    ctx->pc = 0x2AA22Cu;
    {
        const bool branch_taken_0x2aa22c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2aa22c) {
            ctx->pc = 0x2AA2C0u;
            goto label_2aa2c0;
        }
    }
    ctx->pc = 0x2AA234u;
label_2aa234:
    // 0x2aa234: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x2aa234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_2aa238:
    // 0x2aa238: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2aa23c:
    if (ctx->pc == 0x2AA23Cu) {
        ctx->pc = 0x2AA23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA238u;
        // 0x2aa23c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA240u;
        goto label_2aa240;
    }
    ctx->pc = 0x2AA238u;
    {
        const bool branch_taken_0x2aa238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA238u;
        // 0x2aa23c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa238) {
            ctx->pc = 0x2AA248u;
            goto label_2aa248;
        }
    }
    ctx->pc = 0x2AA240u;
label_2aa240:
    // 0x2aa240: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x2aa240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_2aa244:
    // 0x2aa244: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x2aa244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_2aa248:
    // 0x2aa248: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2aa24c:
    if (ctx->pc == 0x2AA24Cu) {
        ctx->pc = 0x2AA24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA248u;
        // 0x2aa24c: 0x92510005  lbu         $s1, 0x5($s2) (Delay Slot)
        SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA250u;
        goto label_2aa250;
    }
    ctx->pc = 0x2AA248u;
    {
        const bool branch_taken_0x2aa248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA248u;
        // 0x2aa24c: 0x92510005  lbu         $s1, 0x5($s2) (Delay Slot)
        SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa248) {
            ctx->pc = 0x2AA268u;
            goto label_2aa268;
        }
    }
    ctx->pc = 0x2AA250u;
label_2aa250:
    // 0x2aa250: 0x92420006  lbu         $v0, 0x6($s2)
    ctx->pc = 0x2aa250u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
label_2aa254:
    // 0x2aa254: 0x113200  sll         $a2, $s1, 8
    ctx->pc = 0x2aa254u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 8));
label_2aa258:
    // 0x2aa258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aa258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2aa25c:
    // 0x2aa25c: 0x24054004  addiu       $a1, $zero, 0x4004
    ctx->pc = 0x2aa25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16388));
label_2aa260:
    // 0x2aa260: 0x60f809  jalr        $v1
label_2aa264:
    if (ctx->pc == 0x2AA264u) {
        ctx->pc = 0x2AA264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA260u;
        // 0x2aa264: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA268u;
        goto label_2aa268;
    }
    ctx->pc = 0x2AA260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2AA268u);
        ctx->pc = 0x2AA264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA260u;
        // 0x2aa264: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA260u, 0x2AA268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AA268u;
label_2aa268:
    // 0x2aa268: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
label_2aa26c:
    if (ctx->pc == 0x2AA26Cu) {
        ctx->pc = 0x2AA26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA268u;
        // 0x2aa26c: 0x113200  sll         $a2, $s1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA270u;
        goto label_2aa270;
    }
    ctx->pc = 0x2AA268u;
    {
        const bool branch_taken_0x2aa268 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA268u;
        // 0x2aa26c: 0x113200  sll         $a2, $s1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa268) {
            ctx->pc = 0x2AA288u;
            goto label_2aa288;
        }
    }
    ctx->pc = 0x2AA270u;
label_2aa270:
    // 0x2aa270: 0x92420006  lbu         $v0, 0x6($s2)
    ctx->pc = 0x2aa270u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
label_2aa274:
    // 0x2aa274: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2aa274u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2aa278:
    // 0x2aa278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aa278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2aa27c:
    // 0x2aa27c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2aa27cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_2aa280:
    // 0x2aa280: 0x280f809  jalr        $s4
label_2aa284:
    if (ctx->pc == 0x2AA284u) {
        ctx->pc = 0x2AA284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA280u;
        // 0x2aa284: 0x24054004  addiu       $a1, $zero, 0x4004 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16388));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA288u;
        goto label_2aa288;
    }
    ctx->pc = 0x2AA280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x2AA288u);
        ctx->pc = 0x2AA284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA280u;
        // 0x2aa284: 0x24054004  addiu       $a1, $zero, 0x4004 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16388));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA280u, 0x2AA288u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AA288u;
label_2aa288:
    // 0x2aa288: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aa288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aa28c:
    // 0x2aa28c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2aa28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2aa290:
    // 0x2aa290: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2aa290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_2aa294:
    // 0x2aa294: 0x24050077  addiu       $a1, $zero, 0x77
    ctx->pc = 0x2aa294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_2aa298:
    // 0x2aa298: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2aa298u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa29c:
    // 0x2aa29c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2aa29cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa2a0:
    // 0x2aa2a0: 0x92460006  lbu         $a2, 0x6($s2)
    ctx->pc = 0x2aa2a0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
label_2aa2a4:
    // 0x2aa2a4: 0xc0a5648  jal         func_295920
label_2aa2a8:
    if (ctx->pc == 0x2AA2A8u) {
        ctx->pc = 0x2AA2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA2A4u;
        // 0x2aa2a8: 0x24c603e8  addiu       $a2, $a2, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA2ACu;
        goto label_2aa2ac;
    }
    ctx->pc = 0x2AA2A4u;
    SET_GPR_U32(ctx, 31, 0x2AA2ACu);
    ctx->pc = 0x2AA2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA2A4u;
    // 0x2aa2a8: 0x24c603e8  addiu       $a2, $a2, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2AA2A4u, 0x2AA2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA2ACu;
label_2aa2ac:
    // 0x2aa2ac: 0x10000014  b           . + 4 + (0x14 << 2)
label_2aa2b0:
    if (ctx->pc == 0x2AA2B0u) {
        ctx->pc = 0x2AA2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA2ACu;
        // 0x2aa2b0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA2B4u;
        goto label_2aa2b4;
    }
    ctx->pc = 0x2AA2ACu;
    {
        const bool branch_taken_0x2aa2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA2ACu;
        // 0x2aa2b0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa2ac) {
            ctx->pc = 0x2AA300u;
            goto label_2aa300;
        }
    }
    ctx->pc = 0x2AA2B4u;
label_2aa2b4:
    // 0x2aa2b4: 0x24050077  addiu       $a1, $zero, 0x77
    ctx->pc = 0x2aa2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_2aa2b8:
    // 0x2aa2b8: 0x240600fc  addiu       $a2, $zero, 0xFC
    ctx->pc = 0x2aa2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
label_2aa2bc:
    // 0x2aa2bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2aa2bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa2c0:
    // 0x2aa2c0: 0xc0a5648  jal         func_295920
label_2aa2c4:
    if (ctx->pc == 0x2AA2C4u) {
        ctx->pc = 0x2AA2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA2C0u;
        // 0x2aa2c4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA2C8u;
        goto label_2aa2c8;
    }
    ctx->pc = 0x2AA2C0u;
    SET_GPR_U32(ctx, 31, 0x2AA2C8u);
    ctx->pc = 0x2AA2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA2C0u;
    // 0x2aa2c4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2AA2C0u, 0x2AA2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA2C8u;
label_2aa2c8:
    // 0x2aa2c8: 0x1000000d  b           . + 4 + (0xD << 2)
label_2aa2cc:
    if (ctx->pc == 0x2AA2CCu) {
        ctx->pc = 0x2AA2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA2C8u;
        // 0x2aa2cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA2D0u;
        goto label_2aa2d0;
    }
    ctx->pc = 0x2AA2C8u;
    {
        const bool branch_taken_0x2aa2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA2C8u;
        // 0x2aa2cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa2c8) {
            ctx->pc = 0x2AA300u;
            goto label_2aa300;
        }
    }
    ctx->pc = 0x2AA2D0u;
label_2aa2d0:
    // 0x2aa2d0: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x2aa2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_2aa2d4:
    // 0x2aa2d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aa2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2aa2d8:
    // 0x2aa2d8: 0xc0aeb94  jal         func_2BAE50
label_2aa2dc:
    if (ctx->pc == 0x2AA2DCu) {
        ctx->pc = 0x2AA2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA2D8u;
        // 0x2aa2dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA2E0u;
        goto label_2aa2e0;
    }
    ctx->pc = 0x2AA2D8u;
    SET_GPR_U32(ctx, 31, 0x2AA2E0u);
    ctx->pc = 0x2AA2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA2D8u;
    // 0x2aa2dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAE50u, 0x2AA2D8u, 0x2AA2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA2E0u;
label_2aa2e0:
    // 0x2aa2e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2aa2e4:
    if (ctx->pc == 0x2AA2E4u) {
        ctx->pc = 0x2AA2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA2E0u;
        // 0x2aa2e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA2E8u;
        goto label_2aa2e8;
    }
    ctx->pc = 0x2AA2E0u;
    {
        const bool branch_taken_0x2aa2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA2E0u;
        // 0x2aa2e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa2e0) {
            ctx->pc = 0x2AA2FCu;
            goto label_2aa2fc;
        }
    }
    ctx->pc = 0x2AA2E8u;
label_2aa2e8:
    // 0x2aa2e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aa2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2aa2ec:
    // 0x2aa2ec: 0xc0ac086  jal         func_2B0218
label_2aa2f0:
    if (ctx->pc == 0x2AA2F0u) {
        ctx->pc = 0x2AA2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA2ECu;
        // 0x2aa2f0: 0xae020108  sw          $v0, 0x108($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA2F4u;
        goto label_2aa2f4;
    }
    ctx->pc = 0x2AA2ECu;
    SET_GPR_U32(ctx, 31, 0x2AA2F4u);
    ctx->pc = 0x2AA2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA2ECu;
    // 0x2aa2f0: 0xae020108  sw          $v0, 0x108($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0218u, 0x2AA2ECu, 0x2AA2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA2F4u;
label_2aa2f4:
    // 0x2aa2f4: 0x10000003  b           . + 4 + (0x3 << 2)
label_2aa2f8:
    if (ctx->pc == 0x2AA2F8u) {
        ctx->pc = 0x2AA2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA2F4u;
        // 0x2aa2f8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA2FCu;
        goto label_2aa2fc;
    }
    ctx->pc = 0x2AA2F4u;
    {
        const bool branch_taken_0x2aa2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA2F4u;
        // 0x2aa2f8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa2f4) {
            ctx->pc = 0x2AA304u;
            goto label_2aa304;
        }
    }
    ctx->pc = 0x2AA2FCu;
label_2aa2fc:
    // 0x2aa2fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2aa2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2aa300:
    // 0x2aa300: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2aa300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2aa304:
    // 0x2aa304: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2aa304u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2aa308:
    // 0x2aa308: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2aa308u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2aa30c:
    // 0x2aa30c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2aa30cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2aa310:
    // 0x2aa310: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2aa310u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2aa314:
    // 0x2aa314: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2aa314u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2aa318:
    // 0x2aa318: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2aa318u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2aa31c:
    // 0x2aa31c: 0x3e00008  jr          $ra
label_2aa320:
    if (ctx->pc == 0x2AA320u) {
        ctx->pc = 0x2AA320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA31Cu;
        // 0x2aa320: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AA324u;
        goto label_2aa324;
    }
    ctx->pc = 0x2AA31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA31Cu;
        // 0x2aa320: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA31Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA324u;
label_2aa324:
    // 0x2aa324: 0x0  nop
    ctx->pc = 0x2aa324u;
    // NOP
    if (ctx->pc == 0x2aa324u) { ctx->pc = 0x2aa328u; }
}
