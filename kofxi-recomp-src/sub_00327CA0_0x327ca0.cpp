#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00327CA0
// Address: 0x327ca0 - 0x328240
void sub_00327CA0_0x327ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327CA0_0x327ca0");
#endif

    switch (ctx->pc) {
        case 0x327ca0u: goto label_327ca0;
        case 0x327ca4u: goto label_327ca4;
        case 0x327ca8u: goto label_327ca8;
        case 0x327cacu: goto label_327cac;
        case 0x327cb0u: goto label_327cb0;
        case 0x327cb4u: goto label_327cb4;
        case 0x327cb8u: goto label_327cb8;
        case 0x327cbcu: goto label_327cbc;
        case 0x327cc0u: goto label_327cc0;
        case 0x327cc4u: goto label_327cc4;
        case 0x327cc8u: goto label_327cc8;
        case 0x327cccu: goto label_327ccc;
        case 0x327cd0u: goto label_327cd0;
        case 0x327cd4u: goto label_327cd4;
        case 0x327cd8u: goto label_327cd8;
        case 0x327cdcu: goto label_327cdc;
        case 0x327ce0u: goto label_327ce0;
        case 0x327ce4u: goto label_327ce4;
        case 0x327ce8u: goto label_327ce8;
        case 0x327cecu: goto label_327cec;
        case 0x327cf0u: goto label_327cf0;
        case 0x327cf4u: goto label_327cf4;
        case 0x327cf8u: goto label_327cf8;
        case 0x327cfcu: goto label_327cfc;
        case 0x327d00u: goto label_327d00;
        case 0x327d04u: goto label_327d04;
        case 0x327d08u: goto label_327d08;
        case 0x327d0cu: goto label_327d0c;
        case 0x327d10u: goto label_327d10;
        case 0x327d14u: goto label_327d14;
        case 0x327d18u: goto label_327d18;
        case 0x327d1cu: goto label_327d1c;
        case 0x327d20u: goto label_327d20;
        case 0x327d24u: goto label_327d24;
        case 0x327d28u: goto label_327d28;
        case 0x327d2cu: goto label_327d2c;
        case 0x327d30u: goto label_327d30;
        case 0x327d34u: goto label_327d34;
        case 0x327d38u: goto label_327d38;
        case 0x327d3cu: goto label_327d3c;
        case 0x327d40u: goto label_327d40;
        case 0x327d44u: goto label_327d44;
        case 0x327d48u: goto label_327d48;
        case 0x327d4cu: goto label_327d4c;
        case 0x327d50u: goto label_327d50;
        case 0x327d54u: goto label_327d54;
        case 0x327d58u: goto label_327d58;
        case 0x327d5cu: goto label_327d5c;
        case 0x327d60u: goto label_327d60;
        case 0x327d64u: goto label_327d64;
        case 0x327d68u: goto label_327d68;
        case 0x327d6cu: goto label_327d6c;
        case 0x327d70u: goto label_327d70;
        case 0x327d74u: goto label_327d74;
        case 0x327d78u: goto label_327d78;
        case 0x327d7cu: goto label_327d7c;
        case 0x327d80u: goto label_327d80;
        case 0x327d84u: goto label_327d84;
        case 0x327d88u: goto label_327d88;
        case 0x327d8cu: goto label_327d8c;
        case 0x327d90u: goto label_327d90;
        case 0x327d94u: goto label_327d94;
        case 0x327d98u: goto label_327d98;
        case 0x327d9cu: goto label_327d9c;
        case 0x327da0u: goto label_327da0;
        case 0x327da4u: goto label_327da4;
        case 0x327da8u: goto label_327da8;
        case 0x327dacu: goto label_327dac;
        case 0x327db0u: goto label_327db0;
        case 0x327db4u: goto label_327db4;
        case 0x327db8u: goto label_327db8;
        case 0x327dbcu: goto label_327dbc;
        case 0x327dc0u: goto label_327dc0;
        case 0x327dc4u: goto label_327dc4;
        case 0x327dc8u: goto label_327dc8;
        case 0x327dccu: goto label_327dcc;
        case 0x327dd0u: goto label_327dd0;
        case 0x327dd4u: goto label_327dd4;
        case 0x327dd8u: goto label_327dd8;
        case 0x327ddcu: goto label_327ddc;
        case 0x327de0u: goto label_327de0;
        case 0x327de4u: goto label_327de4;
        case 0x327de8u: goto label_327de8;
        case 0x327decu: goto label_327dec;
        case 0x327df0u: goto label_327df0;
        case 0x327df4u: goto label_327df4;
        case 0x327df8u: goto label_327df8;
        case 0x327dfcu: goto label_327dfc;
        case 0x327e00u: goto label_327e00;
        case 0x327e04u: goto label_327e04;
        case 0x327e08u: goto label_327e08;
        case 0x327e0cu: goto label_327e0c;
        case 0x327e10u: goto label_327e10;
        case 0x327e14u: goto label_327e14;
        case 0x327e18u: goto label_327e18;
        case 0x327e1cu: goto label_327e1c;
        case 0x327e20u: goto label_327e20;
        case 0x327e24u: goto label_327e24;
        case 0x327e28u: goto label_327e28;
        case 0x327e2cu: goto label_327e2c;
        case 0x327e30u: goto label_327e30;
        case 0x327e34u: goto label_327e34;
        case 0x327e38u: goto label_327e38;
        case 0x327e3cu: goto label_327e3c;
        case 0x327e40u: goto label_327e40;
        case 0x327e44u: goto label_327e44;
        case 0x327e48u: goto label_327e48;
        case 0x327e4cu: goto label_327e4c;
        case 0x327e50u: goto label_327e50;
        case 0x327e54u: goto label_327e54;
        case 0x327e58u: goto label_327e58;
        case 0x327e5cu: goto label_327e5c;
        case 0x327e60u: goto label_327e60;
        case 0x327e64u: goto label_327e64;
        case 0x327e68u: goto label_327e68;
        case 0x327e6cu: goto label_327e6c;
        case 0x327e70u: goto label_327e70;
        case 0x327e74u: goto label_327e74;
        case 0x327e78u: goto label_327e78;
        case 0x327e7cu: goto label_327e7c;
        case 0x327e80u: goto label_327e80;
        case 0x327e84u: goto label_327e84;
        case 0x327e88u: goto label_327e88;
        case 0x327e8cu: goto label_327e8c;
        case 0x327e90u: goto label_327e90;
        case 0x327e94u: goto label_327e94;
        case 0x327e98u: goto label_327e98;
        case 0x327e9cu: goto label_327e9c;
        case 0x327ea0u: goto label_327ea0;
        case 0x327ea4u: goto label_327ea4;
        case 0x327ea8u: goto label_327ea8;
        case 0x327eacu: goto label_327eac;
        case 0x327eb0u: goto label_327eb0;
        case 0x327eb4u: goto label_327eb4;
        case 0x327eb8u: goto label_327eb8;
        case 0x327ebcu: goto label_327ebc;
        case 0x327ec0u: goto label_327ec0;
        case 0x327ec4u: goto label_327ec4;
        case 0x327ec8u: goto label_327ec8;
        case 0x327eccu: goto label_327ecc;
        case 0x327ed0u: goto label_327ed0;
        case 0x327ed4u: goto label_327ed4;
        case 0x327ed8u: goto label_327ed8;
        case 0x327edcu: goto label_327edc;
        case 0x327ee0u: goto label_327ee0;
        case 0x327ee4u: goto label_327ee4;
        case 0x327ee8u: goto label_327ee8;
        case 0x327eecu: goto label_327eec;
        case 0x327ef0u: goto label_327ef0;
        case 0x327ef4u: goto label_327ef4;
        case 0x327ef8u: goto label_327ef8;
        case 0x327efcu: goto label_327efc;
        case 0x327f00u: goto label_327f00;
        case 0x327f04u: goto label_327f04;
        case 0x327f08u: goto label_327f08;
        case 0x327f0cu: goto label_327f0c;
        case 0x327f10u: goto label_327f10;
        case 0x327f14u: goto label_327f14;
        case 0x327f18u: goto label_327f18;
        case 0x327f1cu: goto label_327f1c;
        case 0x327f20u: goto label_327f20;
        case 0x327f24u: goto label_327f24;
        case 0x327f28u: goto label_327f28;
        case 0x327f2cu: goto label_327f2c;
        case 0x327f30u: goto label_327f30;
        case 0x327f34u: goto label_327f34;
        case 0x327f38u: goto label_327f38;
        case 0x327f3cu: goto label_327f3c;
        case 0x327f40u: goto label_327f40;
        case 0x327f44u: goto label_327f44;
        case 0x327f48u: goto label_327f48;
        case 0x327f4cu: goto label_327f4c;
        case 0x327f50u: goto label_327f50;
        case 0x327f54u: goto label_327f54;
        case 0x327f58u: goto label_327f58;
        case 0x327f5cu: goto label_327f5c;
        case 0x327f60u: goto label_327f60;
        case 0x327f64u: goto label_327f64;
        case 0x327f68u: goto label_327f68;
        case 0x327f6cu: goto label_327f6c;
        case 0x327f70u: goto label_327f70;
        case 0x327f74u: goto label_327f74;
        case 0x327f78u: goto label_327f78;
        case 0x327f7cu: goto label_327f7c;
        case 0x327f80u: goto label_327f80;
        case 0x327f84u: goto label_327f84;
        case 0x327f88u: goto label_327f88;
        case 0x327f8cu: goto label_327f8c;
        case 0x327f90u: goto label_327f90;
        case 0x327f94u: goto label_327f94;
        case 0x327f98u: goto label_327f98;
        case 0x327f9cu: goto label_327f9c;
        case 0x327fa0u: goto label_327fa0;
        case 0x327fa4u: goto label_327fa4;
        case 0x327fa8u: goto label_327fa8;
        case 0x327facu: goto label_327fac;
        case 0x327fb0u: goto label_327fb0;
        case 0x327fb4u: goto label_327fb4;
        case 0x327fb8u: goto label_327fb8;
        case 0x327fbcu: goto label_327fbc;
        case 0x327fc0u: goto label_327fc0;
        case 0x327fc4u: goto label_327fc4;
        case 0x327fc8u: goto label_327fc8;
        case 0x327fccu: goto label_327fcc;
        case 0x327fd0u: goto label_327fd0;
        case 0x327fd4u: goto label_327fd4;
        case 0x327fd8u: goto label_327fd8;
        case 0x327fdcu: goto label_327fdc;
        case 0x327fe0u: goto label_327fe0;
        case 0x327fe4u: goto label_327fe4;
        case 0x327fe8u: goto label_327fe8;
        case 0x327fecu: goto label_327fec;
        case 0x327ff0u: goto label_327ff0;
        case 0x327ff4u: goto label_327ff4;
        case 0x327ff8u: goto label_327ff8;
        case 0x327ffcu: goto label_327ffc;
        case 0x328000u: goto label_328000;
        case 0x328004u: goto label_328004;
        case 0x328008u: goto label_328008;
        case 0x32800cu: goto label_32800c;
        case 0x328010u: goto label_328010;
        case 0x328014u: goto label_328014;
        case 0x328018u: goto label_328018;
        case 0x32801cu: goto label_32801c;
        case 0x328020u: goto label_328020;
        case 0x328024u: goto label_328024;
        case 0x328028u: goto label_328028;
        case 0x32802cu: goto label_32802c;
        case 0x328030u: goto label_328030;
        case 0x328034u: goto label_328034;
        case 0x328038u: goto label_328038;
        case 0x32803cu: goto label_32803c;
        case 0x328040u: goto label_328040;
        case 0x328044u: goto label_328044;
        case 0x328048u: goto label_328048;
        case 0x32804cu: goto label_32804c;
        case 0x328050u: goto label_328050;
        case 0x328054u: goto label_328054;
        case 0x328058u: goto label_328058;
        case 0x32805cu: goto label_32805c;
        case 0x328060u: goto label_328060;
        case 0x328064u: goto label_328064;
        case 0x328068u: goto label_328068;
        case 0x32806cu: goto label_32806c;
        case 0x328070u: goto label_328070;
        case 0x328074u: goto label_328074;
        case 0x328078u: goto label_328078;
        case 0x32807cu: goto label_32807c;
        case 0x328080u: goto label_328080;
        case 0x328084u: goto label_328084;
        case 0x328088u: goto label_328088;
        case 0x32808cu: goto label_32808c;
        case 0x328090u: goto label_328090;
        case 0x328094u: goto label_328094;
        case 0x328098u: goto label_328098;
        case 0x32809cu: goto label_32809c;
        case 0x3280a0u: goto label_3280a0;
        case 0x3280a4u: goto label_3280a4;
        case 0x3280a8u: goto label_3280a8;
        case 0x3280acu: goto label_3280ac;
        case 0x3280b0u: goto label_3280b0;
        case 0x3280b4u: goto label_3280b4;
        case 0x3280b8u: goto label_3280b8;
        case 0x3280bcu: goto label_3280bc;
        case 0x3280c0u: goto label_3280c0;
        case 0x3280c4u: goto label_3280c4;
        case 0x3280c8u: goto label_3280c8;
        case 0x3280ccu: goto label_3280cc;
        case 0x3280d0u: goto label_3280d0;
        case 0x3280d4u: goto label_3280d4;
        case 0x3280d8u: goto label_3280d8;
        case 0x3280dcu: goto label_3280dc;
        case 0x3280e0u: goto label_3280e0;
        case 0x3280e4u: goto label_3280e4;
        case 0x3280e8u: goto label_3280e8;
        case 0x3280ecu: goto label_3280ec;
        case 0x3280f0u: goto label_3280f0;
        case 0x3280f4u: goto label_3280f4;
        case 0x3280f8u: goto label_3280f8;
        case 0x3280fcu: goto label_3280fc;
        case 0x328100u: goto label_328100;
        case 0x328104u: goto label_328104;
        case 0x328108u: goto label_328108;
        case 0x32810cu: goto label_32810c;
        case 0x328110u: goto label_328110;
        case 0x328114u: goto label_328114;
        case 0x328118u: goto label_328118;
        case 0x32811cu: goto label_32811c;
        case 0x328120u: goto label_328120;
        case 0x328124u: goto label_328124;
        case 0x328128u: goto label_328128;
        case 0x32812cu: goto label_32812c;
        case 0x328130u: goto label_328130;
        case 0x328134u: goto label_328134;
        case 0x328138u: goto label_328138;
        case 0x32813cu: goto label_32813c;
        case 0x328140u: goto label_328140;
        case 0x328144u: goto label_328144;
        case 0x328148u: goto label_328148;
        case 0x32814cu: goto label_32814c;
        case 0x328150u: goto label_328150;
        case 0x328154u: goto label_328154;
        case 0x328158u: goto label_328158;
        case 0x32815cu: goto label_32815c;
        case 0x328160u: goto label_328160;
        case 0x328164u: goto label_328164;
        case 0x328168u: goto label_328168;
        case 0x32816cu: goto label_32816c;
        case 0x328170u: goto label_328170;
        case 0x328174u: goto label_328174;
        case 0x328178u: goto label_328178;
        case 0x32817cu: goto label_32817c;
        case 0x328180u: goto label_328180;
        case 0x328184u: goto label_328184;
        case 0x328188u: goto label_328188;
        case 0x32818cu: goto label_32818c;
        case 0x328190u: goto label_328190;
        case 0x328194u: goto label_328194;
        case 0x328198u: goto label_328198;
        case 0x32819cu: goto label_32819c;
        case 0x3281a0u: goto label_3281a0;
        case 0x3281a4u: goto label_3281a4;
        case 0x3281a8u: goto label_3281a8;
        case 0x3281acu: goto label_3281ac;
        case 0x3281b0u: goto label_3281b0;
        case 0x3281b4u: goto label_3281b4;
        case 0x3281b8u: goto label_3281b8;
        case 0x3281bcu: goto label_3281bc;
        case 0x3281c0u: goto label_3281c0;
        case 0x3281c4u: goto label_3281c4;
        case 0x3281c8u: goto label_3281c8;
        case 0x3281ccu: goto label_3281cc;
        case 0x3281d0u: goto label_3281d0;
        case 0x3281d4u: goto label_3281d4;
        case 0x3281d8u: goto label_3281d8;
        case 0x3281dcu: goto label_3281dc;
        case 0x3281e0u: goto label_3281e0;
        case 0x3281e4u: goto label_3281e4;
        case 0x3281e8u: goto label_3281e8;
        case 0x3281ecu: goto label_3281ec;
        case 0x3281f0u: goto label_3281f0;
        case 0x3281f4u: goto label_3281f4;
        case 0x3281f8u: goto label_3281f8;
        case 0x3281fcu: goto label_3281fc;
        case 0x328200u: goto label_328200;
        case 0x328204u: goto label_328204;
        case 0x328208u: goto label_328208;
        case 0x32820cu: goto label_32820c;
        case 0x328210u: goto label_328210;
        case 0x328214u: goto label_328214;
        case 0x328218u: goto label_328218;
        case 0x32821cu: goto label_32821c;
        case 0x328220u: goto label_328220;
        case 0x328224u: goto label_328224;
        case 0x328228u: goto label_328228;
        case 0x32822cu: goto label_32822c;
        case 0x328230u: goto label_328230;
        case 0x328234u: goto label_328234;
        case 0x328238u: goto label_328238;
        case 0x32823cu: goto label_32823c;
        default: break;
    }

    ctx->pc = 0x327ca0u;

label_327ca0:
    // 0x327ca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x327ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_327ca4:
    // 0x327ca4: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x327ca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_327ca8:
    // 0x327ca8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x327ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_327cac:
    // 0x327cac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x327cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_327cb0:
    // 0x327cb0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x327cb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_327cb4:
    // 0x327cb4: 0xc0c87f8  jal         func_321FE0
label_327cb8:
    if (ctx->pc == 0x327CB8u) {
        ctx->pc = 0x327CB8u;
            // 0x327cb8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x327CBCu;
        goto label_327cbc;
    }
    ctx->pc = 0x327CB4u;
    SET_GPR_U32(ctx, 31, 0x327CBCu);
    ctx->pc = 0x327CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327CB4u;
            // 0x327cb8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321FE0u;
    if (runtime->hasFunction(0x321FE0u)) {
        auto targetFn = runtime->lookupFunction(0x321FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327CBCu; }
        if (ctx->pc != 0x327CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321FE0_0x321fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327CBCu; }
        if (ctx->pc != 0x327CBCu) { return; }
    }
    ctx->pc = 0x327CBCu;
label_327cbc:
    // 0x327cbc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x327cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_327cc0:
    // 0x327cc0: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x327cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_327cc4:
    // 0x327cc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x327cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_327cc8:
    // 0x327cc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x327cc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_327ccc:
    // 0x327ccc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x327cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_327cd0:
    // 0x327cd0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x327cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_327cd4:
    // 0x327cd4: 0x9442000a  lhu         $v0, 0xA($v0)
    ctx->pc = 0x327cd4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_327cd8:
    // 0x327cd8: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x327cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_327cdc:
    // 0x327cdc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x327cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_327ce0:
    // 0x327ce0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x327ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_327ce4:
    // 0x327ce4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x327ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_327ce8:
    // 0x327ce8: 0x3e00008  jr          $ra
label_327cec:
    if (ctx->pc == 0x327CECu) {
        ctx->pc = 0x327CECu;
            // 0x327cec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x327CF0u;
        goto label_327cf0;
    }
    ctx->pc = 0x327CE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x327CE8u;
            // 0x327cec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x327CF0u;
label_327cf0:
    // 0x327cf0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x327cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_327cf4:
    // 0x327cf4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x327cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_327cf8:
    // 0x327cf8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x327cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_327cfc:
    // 0x327cfc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x327cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_327d00:
    // 0x327d00: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x327d00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_327d04:
    // 0x327d04: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x327d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_327d08:
    // 0x327d08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x327d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_327d0c:
    // 0x327d0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x327d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_327d10:
    // 0x327d10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x327d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_327d14:
    // 0x327d14: 0x8c940010  lw          $s4, 0x10($a0)
    ctx->pc = 0x327d14u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_327d18:
    // 0x327d18: 0x86850014  lh          $a1, 0x14($s4)
    ctx->pc = 0x327d18u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
label_327d1c:
    // 0x327d1c: 0xc0c87e4  jal         func_321F90
label_327d20:
    if (ctx->pc == 0x327D20u) {
        ctx->pc = 0x327D20u;
            // 0x327d20: 0x96840012  lhu         $a0, 0x12($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 18)));
        ctx->pc = 0x327D24u;
        goto label_327d24;
    }
    ctx->pc = 0x327D1Cu;
    SET_GPR_U32(ctx, 31, 0x327D24u);
    ctx->pc = 0x327D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327D1Cu;
            // 0x327d20: 0x96840012  lhu         $a0, 0x12($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321F90u;
    if (runtime->hasFunction(0x321F90u)) {
        auto targetFn = runtime->lookupFunction(0x321F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327D24u; }
        if (ctx->pc != 0x327D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321F90_0x321f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327D24u; }
        if (ctx->pc != 0x327D24u) { return; }
    }
    ctx->pc = 0x327D24u;
label_327d24:
    // 0x327d24: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x327d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_327d28:
    // 0x327d28: 0xa4430010  sh          $v1, 0x10($v0)
    ctx->pc = 0x327d28u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 16), (uint16_t)GPR_U32(ctx, 3));
label_327d2c:
    // 0x327d2c: 0x9684000c  lhu         $a0, 0xC($s4)
    ctx->pc = 0x327d2cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_327d30:
    // 0x327d30: 0x30830040  andi        $v1, $a0, 0x40
    ctx->pc = 0x327d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
label_327d34:
    // 0x327d34: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_327d38:
    if (ctx->pc == 0x327D38u) {
        ctx->pc = 0x327D38u;
            // 0x327d38: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x327D3Cu;
        goto label_327d3c;
    }
    ctx->pc = 0x327D34u;
    {
        const bool branch_taken_0x327d34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x327D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x327D34u;
            // 0x327d38: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327d34) {
            ctx->pc = 0x327D4Cu;
            goto label_327d4c;
        }
    }
    ctx->pc = 0x327D3Cu;
label_327d3c:
    // 0x327d3c: 0xc055728  jal         func_155CA0
label_327d40:
    if (ctx->pc == 0x327D40u) {
        ctx->pc = 0x327D40u;
            // 0x327d40: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x327D44u;
        goto label_327d44;
    }
    ctx->pc = 0x327D3Cu;
    SET_GPR_U32(ctx, 31, 0x327D44u);
    ctx->pc = 0x327D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327D3Cu;
            // 0x327d40: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327D44u; }
        if (ctx->pc != 0x327D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327D44u; }
        if (ctx->pc != 0x327D44u) { return; }
    }
    ctx->pc = 0x327D44u;
label_327d44:
    // 0x327d44: 0x10000067  b           . + 4 + (0x67 << 2)
label_327d48:
    if (ctx->pc == 0x327D48u) {
        ctx->pc = 0x327D48u;
            // 0x327d48: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x327D4Cu;
        goto label_327d4c;
    }
    ctx->pc = 0x327D44u;
    {
        const bool branch_taken_0x327d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x327D44u;
            // 0x327d48: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327d44) {
            ctx->pc = 0x327EE4u;
            goto label_327ee4;
        }
    }
    ctx->pc = 0x327D4Cu;
label_327d4c:
    // 0x327d4c: 0x30830020  andi        $v1, $a0, 0x20
    ctx->pc = 0x327d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
label_327d50:
    // 0x327d50: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_327d54:
    if (ctx->pc == 0x327D54u) {
        ctx->pc = 0x327D54u;
            // 0x327d54: 0x96840018  lhu         $a0, 0x18($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->pc = 0x327D58u;
        goto label_327d58;
    }
    ctx->pc = 0x327D50u;
    {
        const bool branch_taken_0x327d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x327d50) {
            ctx->pc = 0x327D54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x327D50u;
            // 0x327d54: 0x96840018  lhu         $a0, 0x18($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x327D74u;
            goto label_327d74;
        }
    }
    ctx->pc = 0x327D58u;
label_327d58:
    // 0x327d58: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x327d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_327d5c:
    // 0x327d5c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x327d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_327d60:
    // 0x327d60: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x327d60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
label_327d64:
    // 0x327d64: 0xc055728  jal         func_155CA0
label_327d68:
    if (ctx->pc == 0x327D68u) {
        ctx->pc = 0x327D68u;
            // 0x327d68: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x327D6Cu;
        goto label_327d6c;
    }
    ctx->pc = 0x327D64u;
    SET_GPR_U32(ctx, 31, 0x327D6Cu);
    ctx->pc = 0x327D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327D64u;
            // 0x327d68: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327D6Cu; }
        if (ctx->pc != 0x327D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327D6Cu; }
        if (ctx->pc != 0x327D6Cu) { return; }
    }
    ctx->pc = 0x327D6Cu;
label_327d6c:
    // 0x327d6c: 0x1000005c  b           . + 4 + (0x5C << 2)
label_327d70:
    if (ctx->pc == 0x327D70u) {
        ctx->pc = 0x327D74u;
        goto label_327d74;
    }
    ctx->pc = 0x327D6Cu;
    {
        const bool branch_taken_0x327d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327d6c) {
            ctx->pc = 0x327EE0u;
            goto label_327ee0;
        }
    }
    ctx->pc = 0x327D74u;
label_327d74:
    // 0x327d74: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x327d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_327d78:
    // 0x327d78: 0x54830007  bnel        $a0, $v1, . + 4 + (0x7 << 2)
label_327d7c:
    if (ctx->pc == 0x327D7Cu) {
        ctx->pc = 0x327D7Cu;
            // 0x327d7c: 0x96030012  lhu         $v1, 0x12($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->pc = 0x327D80u;
        goto label_327d80;
    }
    ctx->pc = 0x327D78u;
    {
        const bool branch_taken_0x327d78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x327d78) {
            ctx->pc = 0x327D7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x327D78u;
            // 0x327d7c: 0x96030012  lhu         $v1, 0x12($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x327D98u;
            goto label_327d98;
        }
    }
    ctx->pc = 0x327D80u;
label_327d80:
    // 0x327d80: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x327d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
label_327d84:
    // 0x327d84: 0x9463f348  lhu         $v1, -0xCB8($v1)
    ctx->pc = 0x327d84u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294964040)));
label_327d88:
    // 0x327d88: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x327d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_327d8c:
    // 0x327d8c: 0x14600054  bnez        $v1, . + 4 + (0x54 << 2)
label_327d90:
    if (ctx->pc == 0x327D90u) {
        ctx->pc = 0x327D94u;
        goto label_327d94;
    }
    ctx->pc = 0x327D8Cu;
    {
        const bool branch_taken_0x327d8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x327d8c) {
            ctx->pc = 0x327EE0u;
            goto label_327ee0;
        }
    }
    ctx->pc = 0x327D94u;
label_327d94:
    // 0x327d94: 0x96030012  lhu         $v1, 0x12($s0)
    ctx->pc = 0x327d94u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_327d98:
    // 0x327d98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x327d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_327d9c:
    // 0x327d9c: 0xa6030012  sh          $v1, 0x12($s0)
    ctx->pc = 0x327d9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
label_327da0:
    // 0x327da0: 0x8e930008  lw          $s3, 0x8($s4)
    ctx->pc = 0x327da0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_327da4:
    // 0x327da4: 0x96710000  lhu         $s1, 0x0($s3)
    ctx->pc = 0x327da4u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_327da8:
    // 0x327da8: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x327da8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_327dac:
    // 0x327dac: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x327dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_327db0:
    // 0x327db0: 0x12230037  beq         $s1, $v1, . + 4 + (0x37 << 2)
label_327db4:
    if (ctx->pc == 0x327DB4u) {
        ctx->pc = 0x327DB4u;
            // 0x327db4: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->pc = 0x327DB8u;
        goto label_327db8;
    }
    ctx->pc = 0x327DB0u;
    {
        const bool branch_taken_0x327db0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x327DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x327DB0u;
            // 0x327db4: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327db0) {
            ctx->pc = 0x327E90u;
            goto label_327e90;
        }
    }
    ctx->pc = 0x327DB8u;
label_327db8:
    // 0x327db8: 0x3223f000  andi        $v1, $s1, 0xF000
    ctx->pc = 0x327db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)61440);
label_327dbc:
    // 0x327dbc: 0x3402a000  ori         $v0, $zero, 0xA000
    ctx->pc = 0x327dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
label_327dc0:
    // 0x327dc0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_327dc4:
    if (ctx->pc == 0x327DC4u) {
        ctx->pc = 0x327DC8u;
        goto label_327dc8;
    }
    ctx->pc = 0x327DC0u;
    {
        const bool branch_taken_0x327dc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x327dc0) {
            ctx->pc = 0x327DD8u;
            goto label_327dd8;
        }
    }
    ctx->pc = 0x327DC8u;
label_327dc8:
    // 0x327dc8: 0x3402c000  ori         $v0, $zero, 0xC000
    ctx->pc = 0x327dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
label_327dcc:
    // 0x327dcc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_327dd0:
    if (ctx->pc == 0x327DD0u) {
        ctx->pc = 0x327DD4u;
        goto label_327dd4;
    }
    ctx->pc = 0x327DCCu;
    {
        const bool branch_taken_0x327dcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x327dcc) {
            ctx->pc = 0x327DE0u;
            goto label_327de0;
        }
    }
    ctx->pc = 0x327DD4u;
label_327dd4:
    // 0x327dd4: 0x0  nop
    ctx->pc = 0x327dd4u;
    // NOP
label_327dd8:
    // 0x327dd8: 0x10000003  b           . + 4 + (0x3 << 2)
label_327ddc:
    if (ctx->pc == 0x327DDCu) {
        ctx->pc = 0x327DDCu;
            // 0x327ddc: 0x32310fff  andi        $s1, $s1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4095);
        ctx->pc = 0x327DE0u;
        goto label_327de0;
    }
    ctx->pc = 0x327DD8u;
    {
        const bool branch_taken_0x327dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x327DD8u;
            // 0x327ddc: 0x32310fff  andi        $s1, $s1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x327dd8) {
            ctx->pc = 0x327DE8u;
            goto label_327de8;
        }
    }
    ctx->pc = 0x327DE0u;
label_327de0:
    // 0x327de0: 0xc068158  jal         func_1A0560
label_327de4:
    if (ctx->pc == 0x327DE4u) {
        ctx->pc = 0x327DE8u;
        goto label_327de8;
    }
    ctx->pc = 0x327DE0u;
    SET_GPR_U32(ctx, 31, 0x327DE8u);
    ctx->pc = 0x1A0560u;
    if (runtime->hasFunction(0x1A0560u)) {
        auto targetFn = runtime->lookupFunction(0x1A0560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327DE8u; }
        if (ctx->pc != 0x327DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0560_0x1a0560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327DE8u; }
        if (ctx->pc != 0x327DE8u) { return; }
    }
    ctx->pc = 0x327DE8u;
label_327de8:
    // 0x327de8: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x327de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_327dec:
    // 0x327dec: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x327decu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_327df0:
    // 0x327df0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x327df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_327df4:
    // 0x327df4: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x327df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_327df8:
    // 0x327df8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x327df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_327dfc:
    // 0x327dfc: 0x24420d40  addiu       $v0, $v0, 0xD40
    ctx->pc = 0x327dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3392));
label_327e00:
    // 0x327e00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x327e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_327e04:
    // 0x327e04: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x327e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_327e08:
    // 0x327e08: 0x40f809  jalr        $v0
label_327e0c:
    if (ctx->pc == 0x327E0Cu) {
        ctx->pc = 0x327E0Cu;
            // 0x327e0c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x327E10u;
        goto label_327e10;
    }
    ctx->pc = 0x327E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x327E10u);
        ctx->pc = 0x327E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x327E08u;
            // 0x327e0c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x327E10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x327E10u; }
            if (ctx->pc != 0x327E10u) { return; }
        }
        }
    }
    ctx->pc = 0x327E10u;
label_327e10:
    // 0x327e10: 0x3045ff00  andi        $a1, $v0, 0xFF00
    ctx->pc = 0x327e10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
label_327e14:
    // 0x327e14: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x327e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_327e18:
    // 0x327e18: 0x54a30003  bnel        $a1, $v1, . + 4 + (0x3 << 2)
label_327e1c:
    if (ctx->pc == 0x327E1Cu) {
        ctx->pc = 0x327E1Cu;
            // 0x327e1c: 0x24030400  addiu       $v1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->pc = 0x327E20u;
        goto label_327e20;
    }
    ctx->pc = 0x327E18u;
    {
        const bool branch_taken_0x327e18 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x327e18) {
            ctx->pc = 0x327E1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x327E18u;
            // 0x327e1c: 0x24030400  addiu       $v1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
            ctx->pc = 0x327E28u;
            goto label_327e28;
        }
    }
    ctx->pc = 0x327E20u;
label_327e20:
    // 0x327e20: 0x1000001b  b           . + 4 + (0x1B << 2)
label_327e24:
    if (ctx->pc == 0x327E24u) {
        ctx->pc = 0x327E24u;
            // 0x327e24: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x327E28u;
        goto label_327e28;
    }
    ctx->pc = 0x327E20u;
    {
        const bool branch_taken_0x327e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x327E20u;
            // 0x327e24: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327e20) {
            ctx->pc = 0x327E90u;
            goto label_327e90;
        }
    }
    ctx->pc = 0x327E28u;
label_327e28:
    // 0x327e28: 0x54a30005  bnel        $a1, $v1, . + 4 + (0x5 << 2)
label_327e2c:
    if (ctx->pc == 0x327E2Cu) {
        ctx->pc = 0x327E2Cu;
            // 0x327e2c: 0x24031000  addiu       $v1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->pc = 0x327E30u;
        goto label_327e30;
    }
    ctx->pc = 0x327E28u;
    {
        const bool branch_taken_0x327e28 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x327e28) {
            ctx->pc = 0x327E2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x327E28u;
            // 0x327e2c: 0x24031000  addiu       $v1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
            ctx->pc = 0x327E40u;
            goto label_327e40;
        }
    }
    ctx->pc = 0x327E30u;
label_327e30:
    // 0x327e30: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x327e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_327e34:
    // 0x327e34: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x327e34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_327e38:
    // 0x327e38: 0x10000015  b           . + 4 + (0x15 << 2)
label_327e3c:
    if (ctx->pc == 0x327E3Cu) {
        ctx->pc = 0x327E3Cu;
            // 0x327e3c: 0x2639821  addu        $s3, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->pc = 0x327E40u;
        goto label_327e40;
    }
    ctx->pc = 0x327E38u;
    {
        const bool branch_taken_0x327e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x327E38u;
            // 0x327e3c: 0x2639821  addu        $s3, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327e38) {
            ctx->pc = 0x327E90u;
            goto label_327e90;
        }
    }
    ctx->pc = 0x327E40u;
label_327e40:
    // 0x327e40: 0x54a30005  bnel        $a1, $v1, . + 4 + (0x5 << 2)
label_327e44:
    if (ctx->pc == 0x327E44u) {
        ctx->pc = 0x327E44u;
            // 0x327e44: 0x24030800  addiu       $v1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = 0x327E48u;
        goto label_327e48;
    }
    ctx->pc = 0x327E40u;
    {
        const bool branch_taken_0x327e40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x327e40) {
            ctx->pc = 0x327E44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x327E40u;
            // 0x327e44: 0x24030800  addiu       $v1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
            ctx->pc = 0x327E58u;
            goto label_327e58;
        }
    }
    ctx->pc = 0x327E48u;
label_327e48:
    // 0x327e48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x327e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_327e4c:
    // 0x327e4c: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x327e4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_327e50:
    // 0x327e50: 0x1000000f  b           . + 4 + (0xF << 2)
label_327e54:
    if (ctx->pc == 0x327E54u) {
        ctx->pc = 0x327E54u;
            // 0x327e54: 0xa2030004  sb          $v1, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x327E58u;
        goto label_327e58;
    }
    ctx->pc = 0x327E50u;
    {
        const bool branch_taken_0x327e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x327E50u;
            // 0x327e54: 0xa2030004  sb          $v1, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327e50) {
            ctx->pc = 0x327E90u;
            goto label_327e90;
        }
    }
    ctx->pc = 0x327E58u;
label_327e58:
    // 0x327e58: 0x54a30006  bnel        $a1, $v1, . + 4 + (0x6 << 2)
label_327e5c:
    if (ctx->pc == 0x327E5Cu) {
        ctx->pc = 0x327E5Cu;
            // 0x327e5c: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x327E60u;
        goto label_327e60;
    }
    ctx->pc = 0x327E58u;
    {
        const bool branch_taken_0x327e58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x327e58) {
            ctx->pc = 0x327E5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x327E58u;
            // 0x327e5c: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x327E74u;
            goto label_327e74;
        }
    }
    ctx->pc = 0x327E60u;
label_327e60:
    // 0x327e60: 0x82030004  lb          $v1, 0x4($s0)
    ctx->pc = 0x327e60u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_327e64:
    // 0x327e64: 0x8e930004  lw          $s3, 0x4($s4)
    ctx->pc = 0x327e64u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_327e68:
    // 0x327e68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x327e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_327e6c:
    // 0x327e6c: 0x10000008  b           . + 4 + (0x8 << 2)
label_327e70:
    if (ctx->pc == 0x327E70u) {
        ctx->pc = 0x327E70u;
            // 0x327e70: 0xa2030004  sb          $v1, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x327E74u;
        goto label_327e74;
    }
    ctx->pc = 0x327E6Cu;
    {
        const bool branch_taken_0x327e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x327E6Cu;
            // 0x327e70: 0xa2030004  sb          $v1, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327e6c) {
            ctx->pc = 0x327E90u;
            goto label_327e90;
        }
    }
    ctx->pc = 0x327E74u;
label_327e74:
    // 0x327e74: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x327e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_327e78:
    // 0x327e78: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x327e78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_327e7c:
    // 0x327e7c: 0x14a3ffc9  bne         $a1, $v1, . + 4 + (-0x37 << 2)
label_327e80:
    if (ctx->pc == 0x327E80u) {
        ctx->pc = 0x327E80u;
            // 0x327e80: 0x2649821  addu        $s3, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->pc = 0x327E84u;
        goto label_327e84;
    }
    ctx->pc = 0x327E7Cu;
    {
        const bool branch_taken_0x327e7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x327E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x327E7Cu;
            // 0x327e80: 0x2649821  addu        $s3, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327e7c) {
            ctx->pc = 0x327DA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_327da4;
        }
    }
    ctx->pc = 0x327E84u;
label_327e84:
    // 0x327e84: 0x9683000c  lhu         $v1, 0xC($s4)
    ctx->pc = 0x327e84u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_327e88:
    // 0x327e88: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x327e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
label_327e8c:
    // 0x327e8c: 0xa683000c  sh          $v1, 0xC($s4)
    ctx->pc = 0x327e8cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 12), (uint16_t)GPR_U32(ctx, 3));
label_327e90:
    // 0x327e90: 0x96650000  lhu         $a1, 0x0($s3)
    ctx->pc = 0x327e90u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_327e94:
    // 0x327e94: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x327e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
label_327e98:
    // 0x327e98: 0x30a4f000  andi        $a0, $a1, 0xF000
    ctx->pc = 0x327e98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)61440);
label_327e9c:
    // 0x327e9c: 0x50830005  beql        $a0, $v1, . + 4 + (0x5 << 2)
label_327ea0:
    if (ctx->pc == 0x327EA0u) {
        ctx->pc = 0x327EA0u;
            // 0x327ea0: 0x30a400ff  andi        $a0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x327EA4u;
        goto label_327ea4;
    }
    ctx->pc = 0x327E9Cu;
    {
        const bool branch_taken_0x327e9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x327e9c) {
            ctx->pc = 0x327EA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x327E9Cu;
            // 0x327ea0: 0x30a400ff  andi        $a0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x327EB4u;
            goto label_327eb4;
        }
    }
    ctx->pc = 0x327EA4u;
label_327ea4:
    // 0x327ea4: 0x3403c000  ori         $v1, $zero, 0xC000
    ctx->pc = 0x327ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
label_327ea8:
    // 0x327ea8: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
label_327eac:
    if (ctx->pc == 0x327EACu) {
        ctx->pc = 0x327EB0u;
        goto label_327eb0;
    }
    ctx->pc = 0x327EA8u;
    {
        const bool branch_taken_0x327ea8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x327ea8) {
            ctx->pc = 0x327ED4u;
            goto label_327ed4;
        }
    }
    ctx->pc = 0x327EB0u;
label_327eb0:
    // 0x327eb0: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x327eb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_327eb4:
    // 0x327eb4: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x327eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_327eb8:
    // 0x327eb8: 0x54830009  bnel        $a0, $v1, . + 4 + (0x9 << 2)
label_327ebc:
    if (ctx->pc == 0x327EBCu) {
        ctx->pc = 0x327EBCu;
            // 0x327ebc: 0xae930008  sw          $s3, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 19));
        ctx->pc = 0x327EC0u;
        goto label_327ec0;
    }
    ctx->pc = 0x327EB8u;
    {
        const bool branch_taken_0x327eb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x327eb8) {
            ctx->pc = 0x327EBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x327EB8u;
            // 0x327ebc: 0xae930008  sw          $s3, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
            ctx->pc = 0x327EE0u;
            goto label_327ee0;
        }
    }
    ctx->pc = 0x327EC0u;
label_327ec0:
    // 0x327ec0: 0x82030004  lb          $v1, 0x4($s0)
    ctx->pc = 0x327ec0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_327ec4:
    // 0x327ec4: 0x8e930004  lw          $s3, 0x4($s4)
    ctx->pc = 0x327ec4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_327ec8:
    // 0x327ec8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x327ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_327ecc:
    // 0x327ecc: 0x10000003  b           . + 4 + (0x3 << 2)
label_327ed0:
    if (ctx->pc == 0x327ED0u) {
        ctx->pc = 0x327ED0u;
            // 0x327ed0: 0xa2030004  sb          $v1, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x327ED4u;
        goto label_327ed4;
    }
    ctx->pc = 0x327ECCu;
    {
        const bool branch_taken_0x327ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x327ECCu;
            // 0x327ed0: 0xa2030004  sb          $v1, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327ecc) {
            ctx->pc = 0x327EDCu;
            goto label_327edc;
        }
    }
    ctx->pc = 0x327ED4u;
label_327ed4:
    // 0x327ed4: 0xc068158  jal         func_1A0560
label_327ed8:
    if (ctx->pc == 0x327ED8u) {
        ctx->pc = 0x327EDCu;
        goto label_327edc;
    }
    ctx->pc = 0x327ED4u;
    SET_GPR_U32(ctx, 31, 0x327EDCu);
    ctx->pc = 0x1A0560u;
    if (runtime->hasFunction(0x1A0560u)) {
        auto targetFn = runtime->lookupFunction(0x1A0560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327EDCu; }
        if (ctx->pc != 0x327EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0560_0x1a0560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327EDCu; }
        if (ctx->pc != 0x327EDCu) { return; }
    }
    ctx->pc = 0x327EDCu;
label_327edc:
    // 0x327edc: 0xae930008  sw          $s3, 0x8($s4)
    ctx->pc = 0x327edcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 19));
label_327ee0:
    // 0x327ee0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x327ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_327ee4:
    // 0x327ee4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x327ee4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_327ee8:
    // 0x327ee8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x327ee8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_327eec:
    // 0x327eec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x327eecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_327ef0:
    // 0x327ef0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x327ef0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_327ef4:
    // 0x327ef4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x327ef4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_327ef8:
    // 0x327ef8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x327ef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_327efc:
    // 0x327efc: 0x3e00008  jr          $ra
label_327f00:
    if (ctx->pc == 0x327F00u) {
        ctx->pc = 0x327F00u;
            // 0x327f00: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x327F04u;
        goto label_327f04;
    }
    ctx->pc = 0x327EFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x327EFCu;
            // 0x327f00: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x327F04u;
label_327f04:
    // 0x327f04: 0x0  nop
    ctx->pc = 0x327f04u;
    // NOP
label_327f08:
    // 0x327f08: 0x0  nop
    ctx->pc = 0x327f08u;
    // NOP
label_327f0c:
    // 0x327f0c: 0x0  nop
    ctx->pc = 0x327f0cu;
    // NOP
label_327f10:
    // 0x327f10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x327f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_327f14:
    // 0x327f14: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x327f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_327f18:
    // 0x327f18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x327f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_327f1c:
    // 0x327f1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x327f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_327f20:
    // 0x327f20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x327f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_327f24:
    // 0x327f24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x327f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_327f28:
    // 0x327f28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x327f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_327f2c:
    // 0x327f2c: 0x8c930010  lw          $s3, 0x10($a0)
    ctx->pc = 0x327f2cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_327f30:
    // 0x327f30: 0x966500d4  lhu         $a1, 0xD4($s3)
    ctx->pc = 0x327f30u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 212)));
label_327f34:
    // 0x327f34: 0x30a30040  andi        $v1, $a1, 0x40
    ctx->pc = 0x327f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
label_327f38:
    // 0x327f38: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_327f3c:
    if (ctx->pc == 0x327F3Cu) {
        ctx->pc = 0x327F3Cu;
            // 0x327f3c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x327F40u;
        goto label_327f40;
    }
    ctx->pc = 0x327F38u;
    {
        const bool branch_taken_0x327f38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x327F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x327F38u;
            // 0x327f3c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327f38) {
            ctx->pc = 0x327F50u;
            goto label_327f50;
        }
    }
    ctx->pc = 0x327F40u;
label_327f40:
    // 0x327f40: 0xc055728  jal         func_155CA0
label_327f44:
    if (ctx->pc == 0x327F44u) {
        ctx->pc = 0x327F48u;
        goto label_327f48;
    }
    ctx->pc = 0x327F40u;
    SET_GPR_U32(ctx, 31, 0x327F48u);
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327F48u; }
        if (ctx->pc != 0x327F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327F48u; }
        if (ctx->pc != 0x327F48u) { return; }
    }
    ctx->pc = 0x327F48u;
label_327f48:
    // 0x327f48: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_327f4c:
    if (ctx->pc == 0x327F4Cu) {
        ctx->pc = 0x327F4Cu;
            // 0x327f4c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x327F50u;
        goto label_327f50;
    }
    ctx->pc = 0x327F48u;
    {
        const bool branch_taken_0x327f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x327F48u;
            // 0x327f4c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327f48) {
            ctx->pc = 0x32821Cu;
            goto label_32821c;
        }
    }
    ctx->pc = 0x327F50u;
label_327f50:
    // 0x327f50: 0x30a30020  andi        $v1, $a1, 0x20
    ctx->pc = 0x327f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
label_327f54:
    // 0x327f54: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
label_327f58:
    if (ctx->pc == 0x327F58u) {
        ctx->pc = 0x327F58u;
            // 0x327f58: 0x966400e0  lhu         $a0, 0xE0($s3) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 224)));
        ctx->pc = 0x327F5Cu;
        goto label_327f5c;
    }
    ctx->pc = 0x327F54u;
    {
        const bool branch_taken_0x327f54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x327f54) {
            ctx->pc = 0x327F58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x327F54u;
            // 0x327f58: 0x966400e0  lhu         $a0, 0xE0($s3) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 224)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x327F8Cu;
            goto label_327f8c;
        }
    }
    ctx->pc = 0x327F5Cu;
label_327f5c:
    // 0x327f5c: 0x966400de  lhu         $a0, 0xDE($s3)
    ctx->pc = 0x327f5cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 222)));
label_327f60:
    // 0x327f60: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x327f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
label_327f64:
    // 0x327f64: 0x24429410  addiu       $v0, $v0, -0x6BF0
    ctx->pc = 0x327f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939664));
label_327f68:
    // 0x327f68: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x327f68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_327f6c:
    // 0x327f6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x327f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_327f70:
    // 0x327f70: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x327f70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_327f74:
    // 0x327f74: 0xc0c8ad0  jal         func_322B40
label_327f78:
    if (ctx->pc == 0x327F78u) {
        ctx->pc = 0x327F78u;
            // 0x327f78: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x327F7Cu;
        goto label_327f7c;
    }
    ctx->pc = 0x327F74u;
    SET_GPR_U32(ctx, 31, 0x327F7Cu);
    ctx->pc = 0x327F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327F74u;
            // 0x327f78: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x322B40u;
    if (runtime->hasFunction(0x322B40u)) {
        auto targetFn = runtime->lookupFunction(0x322B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327F7Cu; }
        if (ctx->pc != 0x327F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00322B40_0x322b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327F7Cu; }
        if (ctx->pc != 0x327F7Cu) { return; }
    }
    ctx->pc = 0x327F7Cu;
label_327f7c:
    // 0x327f7c: 0xc055728  jal         func_155CA0
label_327f80:
    if (ctx->pc == 0x327F80u) {
        ctx->pc = 0x327F80u;
            // 0x327f80: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x327F84u;
        goto label_327f84;
    }
    ctx->pc = 0x327F7Cu;
    SET_GPR_U32(ctx, 31, 0x327F84u);
    ctx->pc = 0x327F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x327F7Cu;
            // 0x327f80: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327F84u; }
        if (ctx->pc != 0x327F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327F84u; }
        if (ctx->pc != 0x327F84u) { return; }
    }
    ctx->pc = 0x327F84u;
label_327f84:
    // 0x327f84: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_327f88:
    if (ctx->pc == 0x327F88u) {
        ctx->pc = 0x327F8Cu;
        goto label_327f8c;
    }
    ctx->pc = 0x327F84u;
    {
        const bool branch_taken_0x327f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327f84) {
            ctx->pc = 0x328218u;
            goto label_328218;
        }
    }
    ctx->pc = 0x327F8Cu;
label_327f8c:
    // 0x327f8c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x327f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_327f90:
    // 0x327f90: 0x5483000a  bnel        $a0, $v1, . + 4 + (0xA << 2)
label_327f94:
    if (ctx->pc == 0x327F94u) {
        ctx->pc = 0x327F94u;
            // 0x327f94: 0x966500de  lhu         $a1, 0xDE($s3) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 222)));
        ctx->pc = 0x327F98u;
        goto label_327f98;
    }
    ctx->pc = 0x327F90u;
    {
        const bool branch_taken_0x327f90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x327f90) {
            ctx->pc = 0x327F94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x327F90u;
            // 0x327f94: 0x966500de  lhu         $a1, 0xDE($s3) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 222)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x327FBCu;
            goto label_327fbc;
        }
    }
    ctx->pc = 0x327F98u;
label_327f98:
    // 0x327f98: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x327f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
label_327f9c:
    // 0x327f9c: 0x9463f348  lhu         $v1, -0xCB8($v1)
    ctx->pc = 0x327f9cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294964040)));
label_327fa0:
    // 0x327fa0: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x327fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_327fa4:
    // 0x327fa4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_327fa8:
    if (ctx->pc == 0x327FA8u) {
        ctx->pc = 0x327FACu;
        goto label_327fac;
    }
    ctx->pc = 0x327FA4u;
    {
        const bool branch_taken_0x327fa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x327fa4) {
            ctx->pc = 0x327FB8u;
            goto label_327fb8;
        }
    }
    ctx->pc = 0x327FACu;
label_327fac:
    // 0x327fac: 0x30a3fff7  andi        $v1, $a1, 0xFFF7
    ctx->pc = 0x327facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65527);
label_327fb0:
    // 0x327fb0: 0x1000005a  b           . + 4 + (0x5A << 2)
label_327fb4:
    if (ctx->pc == 0x327FB4u) {
        ctx->pc = 0x327FB4u;
            // 0x327fb4: 0xa66300d4  sh          $v1, 0xD4($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 212), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x327FB8u;
        goto label_327fb8;
    }
    ctx->pc = 0x327FB0u;
    {
        const bool branch_taken_0x327fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x327FB0u;
            // 0x327fb4: 0xa66300d4  sh          $v1, 0xD4($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 212), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327fb0) {
            ctx->pc = 0x32811Cu;
            goto label_32811c;
        }
    }
    ctx->pc = 0x327FB8u;
label_327fb8:
    // 0x327fb8: 0x966500de  lhu         $a1, 0xDE($s3)
    ctx->pc = 0x327fb8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 222)));
label_327fbc:
    // 0x327fbc: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x327fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
label_327fc0:
    // 0x327fc0: 0x24639424  addiu       $v1, $v1, -0x6BDC
    ctx->pc = 0x327fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939684));
label_327fc4:
    // 0x327fc4: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x327fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_327fc8:
    // 0x327fc8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x327fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_327fcc:
    // 0x327fcc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x327fccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_327fd0:
    // 0x327fd0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x327fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_327fd4:
    // 0x327fd4: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x327fd4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_327fd8:
    // 0x327fd8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x327fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_327fdc:
    // 0x327fdc: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x327fdcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
label_327fe0:
    // 0x327fe0: 0x966300d4  lhu         $v1, 0xD4($s3)
    ctx->pc = 0x327fe0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 212)));
label_327fe4:
    // 0x327fe4: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x327fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_327fe8:
    // 0x327fe8: 0xa66300d4  sh          $v1, 0xD4($s3)
    ctx->pc = 0x327fe8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 212), (uint16_t)GPR_U32(ctx, 3));
label_327fec:
    // 0x327fec: 0x966300d4  lhu         $v1, 0xD4($s3)
    ctx->pc = 0x327fecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 212)));
label_327ff0:
    // 0x327ff0: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x327ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_327ff4:
    // 0x327ff4: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
label_327ff8:
    if (ctx->pc == 0x327FF8u) {
        ctx->pc = 0x327FF8u;
            // 0x327ff8: 0x8e7200d0  lw          $s2, 0xD0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 208)));
        ctx->pc = 0x327FFCu;
        goto label_327ffc;
    }
    ctx->pc = 0x327FF4u;
    {
        const bool branch_taken_0x327ff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x327ff4) {
            ctx->pc = 0x327FF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x327FF4u;
            // 0x327ff8: 0x8e7200d0  lw          $s2, 0xD0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 208)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x328028u;
            goto label_328028;
        }
    }
    ctx->pc = 0x327FFCu;
label_327ffc:
    // 0x327ffc: 0x966400da  lhu         $a0, 0xDA($s3)
    ctx->pc = 0x327ffcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 218)));
label_328000:
    // 0x328000: 0x966500d8  lhu         $a1, 0xD8($s3)
    ctx->pc = 0x328000u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 216)));
label_328004:
    // 0x328004: 0xc0c9f28  jal         func_327CA0
label_328008:
    if (ctx->pc == 0x328008u) {
        ctx->pc = 0x328008u;
            // 0x328008: 0x866600dc  lh          $a2, 0xDC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 220)));
        ctx->pc = 0x32800Cu;
        goto label_32800c;
    }
    ctx->pc = 0x328004u;
    SET_GPR_U32(ctx, 31, 0x32800Cu);
    ctx->pc = 0x328008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328004u;
            // 0x328008: 0x866600dc  lh          $a2, 0xDC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x327CA0u;
    goto label_327ca0;
    ctx->pc = 0x32800Cu;
label_32800c:
    // 0x32800c: 0xae6200cc  sw          $v0, 0xCC($s3)
    ctx->pc = 0x32800cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 204), GPR_U32(ctx, 2));
label_328010:
    // 0x328010: 0xae6200d0  sw          $v0, 0xD0($s3)
    ctx->pc = 0x328010u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 2));
label_328014:
    // 0x328014: 0x966300d4  lhu         $v1, 0xD4($s3)
    ctx->pc = 0x328014u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 212)));
label_328018:
    // 0x328018: 0x3063fffb  andi        $v1, $v1, 0xFFFB
    ctx->pc = 0x328018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65531);
label_32801c:
    // 0x32801c: 0xa66300d4  sh          $v1, 0xD4($s3)
    ctx->pc = 0x32801cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 212), (uint16_t)GPR_U32(ctx, 3));
label_328020:
    // 0x328020: 0xa66000d6  sh          $zero, 0xD6($s3)
    ctx->pc = 0x328020u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 214), (uint16_t)GPR_U32(ctx, 0));
label_328024:
    // 0x328024: 0x8e7200d0  lw          $s2, 0xD0($s3)
    ctx->pc = 0x328024u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 208)));
label_328028:
    // 0x328028: 0x96500000  lhu         $s0, 0x0($s2)
    ctx->pc = 0x328028u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_32802c:
    // 0x32802c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x32802cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_328030:
    // 0x328030: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x328030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_328034:
    // 0x328034: 0x1203002f  beq         $s0, $v1, . + 4 + (0x2F << 2)
label_328038:
    if (ctx->pc == 0x328038u) {
        ctx->pc = 0x328038u;
            // 0x328038: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->pc = 0x32803Cu;
        goto label_32803c;
    }
    ctx->pc = 0x328034u;
    {
        const bool branch_taken_0x328034 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x328038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x328034u;
            // 0x328038: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328034) {
            ctx->pc = 0x3280F4u;
            goto label_3280f4;
        }
    }
    ctx->pc = 0x32803Cu;
label_32803c:
    // 0x32803c: 0x3203f000  andi        $v1, $s0, 0xF000
    ctx->pc = 0x32803cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)61440);
label_328040:
    // 0x328040: 0x3402a000  ori         $v0, $zero, 0xA000
    ctx->pc = 0x328040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
label_328044:
    // 0x328044: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_328048:
    if (ctx->pc == 0x328048u) {
        ctx->pc = 0x32804Cu;
        goto label_32804c;
    }
    ctx->pc = 0x328044u;
    {
        const bool branch_taken_0x328044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x328044) {
            ctx->pc = 0x328058u;
            goto label_328058;
        }
    }
    ctx->pc = 0x32804Cu;
label_32804c:
    // 0x32804c: 0x10000004  b           . + 4 + (0x4 << 2)
label_328050:
    if (ctx->pc == 0x328050u) {
        ctx->pc = 0x328050u;
            // 0x328050: 0x32100fff  andi        $s0, $s0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4095);
        ctx->pc = 0x328054u;
        goto label_328054;
    }
    ctx->pc = 0x32804Cu;
    {
        const bool branch_taken_0x32804c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32804Cu;
            // 0x328050: 0x32100fff  andi        $s0, $s0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32804c) {
            ctx->pc = 0x328060u;
            goto label_328060;
        }
    }
    ctx->pc = 0x328054u;
label_328054:
    // 0x328054: 0x0  nop
    ctx->pc = 0x328054u;
    // NOP
label_328058:
    // 0x328058: 0xc068158  jal         func_1A0560
label_32805c:
    if (ctx->pc == 0x32805Cu) {
        ctx->pc = 0x328060u;
        goto label_328060;
    }
    ctx->pc = 0x328058u;
    SET_GPR_U32(ctx, 31, 0x328060u);
    ctx->pc = 0x1A0560u;
    if (runtime->hasFunction(0x1A0560u)) {
        auto targetFn = runtime->lookupFunction(0x1A0560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328060u; }
        if (ctx->pc != 0x328060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A0560_0x1a0560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328060u; }
        if (ctx->pc != 0x328060u) { return; }
    }
    ctx->pc = 0x328060u;
label_328060:
    // 0x328060: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x328060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_328064:
    // 0x328064: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x328064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_328068:
    // 0x328068: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32806c:
    // 0x32806c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x32806cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_328070:
    // 0x328070: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x328070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_328074:
    // 0x328074: 0x24420da0  addiu       $v0, $v0, 0xDA0
    ctx->pc = 0x328074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3488));
label_328078:
    // 0x328078: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x328078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32807c:
    // 0x32807c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x32807cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_328080:
    // 0x328080: 0x40f809  jalr        $v0
label_328084:
    if (ctx->pc == 0x328084u) {
        ctx->pc = 0x328084u;
            // 0x328084: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x328088u;
        goto label_328088;
    }
    ctx->pc = 0x328080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x328088u);
        ctx->pc = 0x328084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x328080u;
            // 0x328084: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x328088u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x328088u; }
            if (ctx->pc != 0x328088u) { return; }
        }
        }
    }
    ctx->pc = 0x328088u;
label_328088:
    // 0x328088: 0x3045ff00  andi        $a1, $v0, 0xFF00
    ctx->pc = 0x328088u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
label_32808c:
    // 0x32808c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x32808cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_328090:
    // 0x328090: 0x54a30003  bnel        $a1, $v1, . + 4 + (0x3 << 2)
label_328094:
    if (ctx->pc == 0x328094u) {
        ctx->pc = 0x328094u;
            // 0x328094: 0x24030400  addiu       $v1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->pc = 0x328098u;
        goto label_328098;
    }
    ctx->pc = 0x328090u;
    {
        const bool branch_taken_0x328090 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x328090) {
            ctx->pc = 0x328094u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328090u;
            // 0x328094: 0x24030400  addiu       $v1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3280A0u;
            goto label_3280a0;
        }
    }
    ctx->pc = 0x328098u;
label_328098:
    // 0x328098: 0x10000016  b           . + 4 + (0x16 << 2)
label_32809c:
    if (ctx->pc == 0x32809Cu) {
        ctx->pc = 0x32809Cu;
            // 0x32809c: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3280A0u;
        goto label_3280a0;
    }
    ctx->pc = 0x328098u;
    {
        const bool branch_taken_0x328098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32809Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x328098u;
            // 0x32809c: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328098) {
            ctx->pc = 0x3280F4u;
            goto label_3280f4;
        }
    }
    ctx->pc = 0x3280A0u;
label_3280a0:
    // 0x3280a0: 0x54a30005  bnel        $a1, $v1, . + 4 + (0x5 << 2)
label_3280a4:
    if (ctx->pc == 0x3280A4u) {
        ctx->pc = 0x3280A4u;
            // 0x3280a4: 0x24031000  addiu       $v1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->pc = 0x3280A8u;
        goto label_3280a8;
    }
    ctx->pc = 0x3280A0u;
    {
        const bool branch_taken_0x3280a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3280a0) {
            ctx->pc = 0x3280A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3280A0u;
            // 0x3280a4: 0x24031000  addiu       $v1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3280B8u;
            goto label_3280b8;
        }
    }
    ctx->pc = 0x3280A8u;
label_3280a8:
    // 0x3280a8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3280a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3280ac:
    // 0x3280ac: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3280acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3280b0:
    // 0x3280b0: 0x10000010  b           . + 4 + (0x10 << 2)
label_3280b4:
    if (ctx->pc == 0x3280B4u) {
        ctx->pc = 0x3280B4u;
            // 0x3280b4: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->pc = 0x3280B8u;
        goto label_3280b8;
    }
    ctx->pc = 0x3280B0u;
    {
        const bool branch_taken_0x3280b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3280B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3280B0u;
            // 0x3280b4: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3280b0) {
            ctx->pc = 0x3280F4u;
            goto label_3280f4;
        }
    }
    ctx->pc = 0x3280B8u;
label_3280b8:
    // 0x3280b8: 0x54a30003  bnel        $a1, $v1, . + 4 + (0x3 << 2)
label_3280bc:
    if (ctx->pc == 0x3280BCu) {
        ctx->pc = 0x3280BCu;
            // 0x3280bc: 0x24030800  addiu       $v1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = 0x3280C0u;
        goto label_3280c0;
    }
    ctx->pc = 0x3280B8u;
    {
        const bool branch_taken_0x3280b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3280b8) {
            ctx->pc = 0x3280BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3280B8u;
            // 0x3280bc: 0x24030800  addiu       $v1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3280C8u;
            goto label_3280c8;
        }
    }
    ctx->pc = 0x3280C0u;
label_3280c0:
    // 0x3280c0: 0x1000000c  b           . + 4 + (0xC << 2)
label_3280c4:
    if (ctx->pc == 0x3280C4u) {
        ctx->pc = 0x3280C4u;
            // 0x3280c4: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3280C8u;
        goto label_3280c8;
    }
    ctx->pc = 0x3280C0u;
    {
        const bool branch_taken_0x3280c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3280C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3280C0u;
            // 0x3280c4: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3280c0) {
            ctx->pc = 0x3280F4u;
            goto label_3280f4;
        }
    }
    ctx->pc = 0x3280C8u;
label_3280c8:
    // 0x3280c8: 0x54a30003  bnel        $a1, $v1, . + 4 + (0x3 << 2)
label_3280cc:
    if (ctx->pc == 0x3280CCu) {
        ctx->pc = 0x3280CCu;
            // 0x3280cc: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3280D0u;
        goto label_3280d0;
    }
    ctx->pc = 0x3280C8u;
    {
        const bool branch_taken_0x3280c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3280c8) {
            ctx->pc = 0x3280CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3280C8u;
            // 0x3280cc: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3280D8u;
            goto label_3280d8;
        }
    }
    ctx->pc = 0x3280D0u;
label_3280d0:
    // 0x3280d0: 0x10000008  b           . + 4 + (0x8 << 2)
label_3280d4:
    if (ctx->pc == 0x3280D4u) {
        ctx->pc = 0x3280D4u;
            // 0x3280d4: 0x8e7200cc  lw          $s2, 0xCC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
        ctx->pc = 0x3280D8u;
        goto label_3280d8;
    }
    ctx->pc = 0x3280D0u;
    {
        const bool branch_taken_0x3280d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3280D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3280D0u;
            // 0x3280d4: 0x8e7200cc  lw          $s2, 0xCC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3280d0) {
            ctx->pc = 0x3280F4u;
            goto label_3280f4;
        }
    }
    ctx->pc = 0x3280D8u;
label_3280d8:
    // 0x3280d8: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x3280d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_3280dc:
    // 0x3280dc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3280dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_3280e0:
    // 0x3280e0: 0x14a3ffd1  bne         $a1, $v1, . + 4 + (-0x2F << 2)
label_3280e4:
    if (ctx->pc == 0x3280E4u) {
        ctx->pc = 0x3280E4u;
            // 0x3280e4: 0x2449021  addu        $s2, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->pc = 0x3280E8u;
        goto label_3280e8;
    }
    ctx->pc = 0x3280E0u;
    {
        const bool branch_taken_0x3280e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3280E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3280E0u;
            // 0x3280e4: 0x2449021  addu        $s2, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3280e0) {
            ctx->pc = 0x328028u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_328028;
        }
    }
    ctx->pc = 0x3280E8u;
label_3280e8:
    // 0x3280e8: 0x966300d4  lhu         $v1, 0xD4($s3)
    ctx->pc = 0x3280e8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 212)));
label_3280ec:
    // 0x3280ec: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x3280ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
label_3280f0:
    // 0x3280f0: 0xa66300d4  sh          $v1, 0xD4($s3)
    ctx->pc = 0x3280f0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 212), (uint16_t)GPR_U32(ctx, 3));
label_3280f4:
    // 0x3280f4: 0xae7200d0  sw          $s2, 0xD0($s3)
    ctx->pc = 0x3280f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 18));
label_3280f8:
    // 0x3280f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3280f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3280fc:
    // 0x3280fc: 0x866400dc  lh          $a0, 0xDC($s3)
    ctx->pc = 0x3280fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 220)));
label_328100:
    // 0x328100: 0x54830007  bnel        $a0, $v1, . + 4 + (0x7 << 2)
label_328104:
    if (ctx->pc == 0x328104u) {
        ctx->pc = 0x328104u;
            // 0x328104: 0x966500de  lhu         $a1, 0xDE($s3) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 222)));
        ctx->pc = 0x328108u;
        goto label_328108;
    }
    ctx->pc = 0x328100u;
    {
        const bool branch_taken_0x328100 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x328100) {
            ctx->pc = 0x328104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328100u;
            // 0x328104: 0x966500de  lhu         $a1, 0xDE($s3) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 222)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x328120u;
            goto label_328120;
        }
    }
    ctx->pc = 0x328108u;
label_328108:
    // 0x328108: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x328108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
label_32810c:
    // 0x32810c: 0x9463f348  lhu         $v1, -0xCB8($v1)
    ctx->pc = 0x32810cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294964040)));
label_328110:
    // 0x328110: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x328110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_328114:
    // 0x328114: 0x14600040  bnez        $v1, . + 4 + (0x40 << 2)
label_328118:
    if (ctx->pc == 0x328118u) {
        ctx->pc = 0x32811Cu;
        goto label_32811c;
    }
    ctx->pc = 0x328114u;
    {
        const bool branch_taken_0x328114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x328114) {
            ctx->pc = 0x328218u;
            goto label_328218;
        }
    }
    ctx->pc = 0x32811Cu;
label_32811c:
    // 0x32811c: 0x966500de  lhu         $a1, 0xDE($s3)
    ctx->pc = 0x32811cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 222)));
label_328120:
    // 0x328120: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x328120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
label_328124:
    // 0x328124: 0x2463941c  addiu       $v1, $v1, -0x6BE4
    ctx->pc = 0x328124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939676));
label_328128:
    // 0x328128: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x328128u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_32812c:
    // 0x32812c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x32812cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_328130:
    // 0x328130: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x328130u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_328134:
    // 0x328134: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x328134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_328138:
    // 0x328138: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x328138u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_32813c:
    // 0x32813c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x32813cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_328140:
    // 0x328140: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
label_328144:
    if (ctx->pc == 0x328144u) {
        ctx->pc = 0x328148u;
        goto label_328148;
    }
    ctx->pc = 0x328140u;
    {
        const bool branch_taken_0x328140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x328140) {
            ctx->pc = 0x328218u;
            goto label_328218;
        }
    }
    ctx->pc = 0x328148u;
label_328148:
    // 0x328148: 0x966400d4  lhu         $a0, 0xD4($s3)
    ctx->pc = 0x328148u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 212)));
label_32814c:
    // 0x32814c: 0x30830080  andi        $v1, $a0, 0x80
    ctx->pc = 0x32814cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
label_328150:
    // 0x328150: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_328154:
    if (ctx->pc == 0x328154u) {
        ctx->pc = 0x328154u;
            // 0x328154: 0x30830100  andi        $v1, $a0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
        ctx->pc = 0x328158u;
        goto label_328158;
    }
    ctx->pc = 0x328150u;
    {
        const bool branch_taken_0x328150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x328150) {
            ctx->pc = 0x328154u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328150u;
            // 0x328154: 0x30830100  andi        $v1, $a0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
            ctx->pc = 0x328168u;
            goto label_328168;
        }
    }
    ctx->pc = 0x328158u;
label_328158:
    // 0x328158: 0xc0c9c90  jal         func_327240
label_32815c:
    if (ctx->pc == 0x32815Cu) {
        ctx->pc = 0x32815Cu;
            // 0x32815c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x328160u;
        goto label_328160;
    }
    ctx->pc = 0x328158u;
    SET_GPR_U32(ctx, 31, 0x328160u);
    ctx->pc = 0x32815Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328158u;
            // 0x32815c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x327240u;
    if (runtime->hasFunction(0x327240u)) {
        auto targetFn = runtime->lookupFunction(0x327240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328160u; }
        if (ctx->pc != 0x328160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00327240_0x327240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328160u; }
        if (ctx->pc != 0x328160u) { return; }
    }
    ctx->pc = 0x328160u;
label_328160:
    // 0x328160: 0x1000002d  b           . + 4 + (0x2D << 2)
label_328164:
    if (ctx->pc == 0x328164u) {
        ctx->pc = 0x328168u;
        goto label_328168;
    }
    ctx->pc = 0x328160u;
    {
        const bool branch_taken_0x328160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328160) {
            ctx->pc = 0x328218u;
            goto label_328218;
        }
    }
    ctx->pc = 0x328168u;
label_328168:
    // 0x328168: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_32816c:
    if (ctx->pc == 0x32816Cu) {
        ctx->pc = 0x32816Cu;
            // 0x32816c: 0x30830200  andi        $v1, $a0, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
        ctx->pc = 0x328170u;
        goto label_328170;
    }
    ctx->pc = 0x328168u;
    {
        const bool branch_taken_0x328168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x328168) {
            ctx->pc = 0x32816Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328168u;
            // 0x32816c: 0x30830200  andi        $v1, $a0, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
            ctx->pc = 0x328180u;
            goto label_328180;
        }
    }
    ctx->pc = 0x328170u;
label_328170:
    // 0x328170: 0xc0c9098  jal         func_324260
label_328174:
    if (ctx->pc == 0x328174u) {
        ctx->pc = 0x328174u;
            // 0x328174: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x328178u;
        goto label_328178;
    }
    ctx->pc = 0x328170u;
    SET_GPR_U32(ctx, 31, 0x328178u);
    ctx->pc = 0x328174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328170u;
            // 0x328174: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324260u;
    if (runtime->hasFunction(0x324260u)) {
        auto targetFn = runtime->lookupFunction(0x324260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328178u; }
        if (ctx->pc != 0x328178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324260_0x324260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328178u; }
        if (ctx->pc != 0x328178u) { return; }
    }
    ctx->pc = 0x328178u;
label_328178:
    // 0x328178: 0x10000027  b           . + 4 + (0x27 << 2)
label_32817c:
    if (ctx->pc == 0x32817Cu) {
        ctx->pc = 0x328180u;
        goto label_328180;
    }
    ctx->pc = 0x328178u;
    {
        const bool branch_taken_0x328178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328178) {
            ctx->pc = 0x328218u;
            goto label_328218;
        }
    }
    ctx->pc = 0x328180u;
label_328180:
    // 0x328180: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_328184:
    if (ctx->pc == 0x328184u) {
        ctx->pc = 0x328184u;
            // 0x328184: 0x30830400  andi        $v1, $a0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
        ctx->pc = 0x328188u;
        goto label_328188;
    }
    ctx->pc = 0x328180u;
    {
        const bool branch_taken_0x328180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x328180) {
            ctx->pc = 0x328184u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328180u;
            // 0x328184: 0x30830400  andi        $v1, $a0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
            ctx->pc = 0x328198u;
            goto label_328198;
        }
    }
    ctx->pc = 0x328188u;
label_328188:
    // 0x328188: 0xc0c938c  jal         func_324E30
label_32818c:
    if (ctx->pc == 0x32818Cu) {
        ctx->pc = 0x32818Cu;
            // 0x32818c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x328190u;
        goto label_328190;
    }
    ctx->pc = 0x328188u;
    SET_GPR_U32(ctx, 31, 0x328190u);
    ctx->pc = 0x32818Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328188u;
            // 0x32818c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x324E30u;
    if (runtime->hasFunction(0x324E30u)) {
        auto targetFn = runtime->lookupFunction(0x324E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328190u; }
        if (ctx->pc != 0x328190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00324E30_0x324e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328190u; }
        if (ctx->pc != 0x328190u) { return; }
    }
    ctx->pc = 0x328190u;
label_328190:
    // 0x328190: 0x10000021  b           . + 4 + (0x21 << 2)
label_328194:
    if (ctx->pc == 0x328194u) {
        ctx->pc = 0x328198u;
        goto label_328198;
    }
    ctx->pc = 0x328190u;
    {
        const bool branch_taken_0x328190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328190) {
            ctx->pc = 0x328218u;
            goto label_328218;
        }
    }
    ctx->pc = 0x328198u;
label_328198:
    // 0x328198: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_32819c:
    if (ctx->pc == 0x32819Cu) {
        ctx->pc = 0x3281A0u;
        goto label_3281a0;
    }
    ctx->pc = 0x328198u;
    {
        const bool branch_taken_0x328198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x328198) {
            ctx->pc = 0x328218u;
            goto label_328218;
        }
    }
    ctx->pc = 0x3281A0u;
label_3281a0:
    // 0x3281a0: 0x866500dc  lh          $a1, 0xDC($s3)
    ctx->pc = 0x3281a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 220)));
label_3281a4:
    // 0x3281a4: 0xc0c87e4  jal         func_321F90
label_3281a8:
    if (ctx->pc == 0x3281A8u) {
        ctx->pc = 0x3281A8u;
            // 0x3281a8: 0x866400e4  lh          $a0, 0xE4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 228)));
        ctx->pc = 0x3281ACu;
        goto label_3281ac;
    }
    ctx->pc = 0x3281A4u;
    SET_GPR_U32(ctx, 31, 0x3281ACu);
    ctx->pc = 0x3281A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3281A4u;
            // 0x3281a8: 0x866400e4  lh          $a0, 0xE4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 228)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321F90u;
    if (runtime->hasFunction(0x321F90u)) {
        auto targetFn = runtime->lookupFunction(0x321F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3281ACu; }
        if (ctx->pc != 0x3281ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321F90_0x321f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3281ACu; }
        if (ctx->pc != 0x3281ACu) { return; }
    }
    ctx->pc = 0x3281ACu;
label_3281ac:
    // 0x3281ac: 0x9444000c  lhu         $a0, 0xC($v0)
    ctx->pc = 0x3281acu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
label_3281b0:
    // 0x3281b0: 0x8663000c  lh          $v1, 0xC($s3)
    ctx->pc = 0x3281b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
label_3281b4:
    // 0x3281b4: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x3281b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_3281b8:
    // 0x3281b8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3281b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3281bc:
    // 0x3281bc: 0xa6630014  sh          $v1, 0x14($s3)
    ctx->pc = 0x3281bcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 20), (uint16_t)GPR_U32(ctx, 3));
label_3281c0:
    // 0x3281c0: 0x9443000e  lhu         $v1, 0xE($v0)
    ctx->pc = 0x3281c0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_3281c4:
    // 0x3281c4: 0x8662000e  lh          $v0, 0xE($s3)
    ctx->pc = 0x3281c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
label_3281c8:
    // 0x3281c8: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x3281c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_3281cc:
    // 0x3281cc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3281ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3281d0:
    // 0x3281d0: 0xa6620016  sh          $v0, 0x16($s3)
    ctx->pc = 0x3281d0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 22), (uint16_t)GPR_U32(ctx, 2));
label_3281d4:
    // 0x3281d4: 0x866500dc  lh          $a1, 0xDC($s3)
    ctx->pc = 0x3281d4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 220)));
label_3281d8:
    // 0x3281d8: 0xc0c87e4  jal         func_321F90
label_3281dc:
    if (ctx->pc == 0x3281DCu) {
        ctx->pc = 0x3281DCu;
            // 0x3281dc: 0x966400da  lhu         $a0, 0xDA($s3) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 218)));
        ctx->pc = 0x3281E0u;
        goto label_3281e0;
    }
    ctx->pc = 0x3281D8u;
    SET_GPR_U32(ctx, 31, 0x3281E0u);
    ctx->pc = 0x3281DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3281D8u;
            // 0x3281dc: 0x966400da  lhu         $a0, 0xDA($s3) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 218)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321F90u;
    if (runtime->hasFunction(0x321F90u)) {
        auto targetFn = runtime->lookupFunction(0x321F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3281E0u; }
        if (ctx->pc != 0x3281E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00321F90_0x321f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3281E0u; }
        if (ctx->pc != 0x3281E0u) { return; }
    }
    ctx->pc = 0x3281E0u;
label_3281e0:
    // 0x3281e0: 0x86640014  lh          $a0, 0x14($s3)
    ctx->pc = 0x3281e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
label_3281e4:
    // 0x3281e4: 0x84430006  lh          $v1, 0x6($v0)
    ctx->pc = 0x3281e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
label_3281e8:
    // 0x3281e8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3281e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3281ec:
    // 0x3281ec: 0xa6630014  sh          $v1, 0x14($s3)
    ctx->pc = 0x3281ecu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 20), (uint16_t)GPR_U32(ctx, 3));
label_3281f0:
    // 0x3281f0: 0x86630016  lh          $v1, 0x16($s3)
    ctx->pc = 0x3281f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
label_3281f4:
    // 0x3281f4: 0x84420008  lh          $v0, 0x8($v0)
    ctx->pc = 0x3281f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_3281f8:
    // 0x3281f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3281f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3281fc:
    // 0x3281fc: 0xa6620016  sh          $v0, 0x16($s3)
    ctx->pc = 0x3281fcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 22), (uint16_t)GPR_U32(ctx, 2));
label_328200:
    // 0x328200: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x328200u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
label_328204:
    // 0x328204: 0x866400e4  lh          $a0, 0xE4($s3)
    ctx->pc = 0x328204u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 228)));
label_328208:
    // 0x328208: 0x86650014  lh          $a1, 0x14($s3)
    ctx->pc = 0x328208u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
label_32820c:
    // 0x32820c: 0x866700dc  lh          $a3, 0xDC($s3)
    ctx->pc = 0x32820cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 220)));
label_328210:
    // 0x328210: 0xc0c8e08  jal         func_323820
label_328214:
    if (ctx->pc == 0x328214u) {
        ctx->pc = 0x328214u;
            // 0x328214: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->pc = 0x328218u;
        goto label_328218;
    }
    ctx->pc = 0x328210u;
    SET_GPR_U32(ctx, 31, 0x328218u);
    ctx->pc = 0x328214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328210u;
            // 0x328214: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x323820u;
    if (runtime->hasFunction(0x323820u)) {
        auto targetFn = runtime->lookupFunction(0x323820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328218u; }
        if (ctx->pc != 0x328218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323820_0x323820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x328218u; }
        if (ctx->pc != 0x328218u) { return; }
    }
    ctx->pc = 0x328218u;
label_328218:
    // 0x328218: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x328218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_32821c:
    // 0x32821c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x32821cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_328220:
    // 0x328220: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x328220u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_328224:
    // 0x328224: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x328224u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_328228:
    // 0x328228: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x328228u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32822c:
    // 0x32822c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32822cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_328230:
    // 0x328230: 0x3e00008  jr          $ra
label_328234:
    if (ctx->pc == 0x328234u) {
        ctx->pc = 0x328234u;
            // 0x328234: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x328238u;
        goto label_328238;
    }
    ctx->pc = 0x328230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x328230u;
            // 0x328234: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x328238u;
label_328238:
    // 0x328238: 0x0  nop
    ctx->pc = 0x328238u;
    // NOP
label_32823c:
    // 0x32823c: 0x0  nop
    ctx->pc = 0x32823cu;
    // NOP
    ctx->pc = 0x328240u;
}
