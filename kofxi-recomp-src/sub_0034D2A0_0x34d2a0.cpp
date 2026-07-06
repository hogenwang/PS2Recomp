#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034D2A0
// Address: 0x34d2a0 - 0x34e1e0
void sub_0034D2A0_0x34d2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034D2A0_0x34d2a0");
#endif

    switch (ctx->pc) {
        case 0x34d2b8u: goto label_34d2b8;
        case 0x34d2d4u: goto label_34d2d4;
        case 0x34d2e8u: goto label_34d2e8;
        case 0x34d2f4u: goto label_34d2f4;
        case 0x34d310u: goto label_34d310;
        case 0x34d33cu: goto label_34d33c;
        case 0x34d358u: goto label_34d358;
        case 0x34d380u: goto label_34d380;
        case 0x34d390u: goto label_34d390;
        case 0x34d3a8u: goto label_34d3a8;
        case 0x34d3bcu: goto label_34d3bc;
        case 0x34d3d8u: goto label_34d3d8;
        case 0x34d3f8u: goto label_34d3f8;
        case 0x34d404u: goto label_34d404;
        case 0x34d410u: goto label_34d410;
        case 0x34d438u: goto label_34d438;
        case 0x34d458u: goto label_34d458;
        case 0x34d488u: goto label_34d488;
        case 0x34d490u: goto label_34d490;
        case 0x34d4d0u: goto label_34d4d0;
        case 0x34d4e4u: goto label_34d4e4;
        case 0x34d4ecu: goto label_34d4ec;
        case 0x34d4f4u: goto label_34d4f4;
        case 0x34d500u: goto label_34d500;
        case 0x34d528u: goto label_34d528;
        case 0x34d530u: goto label_34d530;
        case 0x34d538u: goto label_34d538;
        case 0x34d54cu: goto label_34d54c;
        case 0x34d554u: goto label_34d554;
        case 0x34d56cu: goto label_34d56c;
        case 0x34d580u: goto label_34d580;
        case 0x34d590u: goto label_34d590;
        case 0x34d5e0u: goto label_34d5e0;
        case 0x34d5f8u: goto label_34d5f8;
        case 0x34d60cu: goto label_34d60c;
        case 0x34d61cu: goto label_34d61c;
        case 0x34d634u: goto label_34d634;
        case 0x34d640u: goto label_34d640;
        case 0x34d650u: goto label_34d650;
        case 0x34d670u: goto label_34d670;
        case 0x34d68cu: goto label_34d68c;
        case 0x34d6a4u: goto label_34d6a4;
        case 0x34d6b0u: goto label_34d6b0;
        case 0x34d6c0u: goto label_34d6c0;
        case 0x34d730u: goto label_34d730;
        case 0x34d748u: goto label_34d748;
        case 0x34d768u: goto label_34d768;
        case 0x34d790u: goto label_34d790;
        case 0x34d79cu: goto label_34d79c;
        case 0x34d7b0u: goto label_34d7b0;
        case 0x34d7d8u: goto label_34d7d8;
        case 0x34d7f0u: goto label_34d7f0;
        case 0x34d800u: goto label_34d800;
        case 0x34d80cu: goto label_34d80c;
        case 0x34d820u: goto label_34d820;
        case 0x34d83cu: goto label_34d83c;
        case 0x34d858u: goto label_34d858;
        case 0x34d88cu: goto label_34d88c;
        case 0x34d8c4u: goto label_34d8c4;
        case 0x34d8d8u: goto label_34d8d8;
        case 0x34d8f0u: goto label_34d8f0;
        case 0x34d8fcu: goto label_34d8fc;
        case 0x34d910u: goto label_34d910;
        case 0x34d928u: goto label_34d928;
        case 0x34d960u: goto label_34d960;
        case 0x34d96cu: goto label_34d96c;
        case 0x34d980u: goto label_34d980;
        case 0x34d9a0u: goto label_34d9a0;
        case 0x34d9e0u: goto label_34d9e0;
        case 0x34da48u: goto label_34da48;
        case 0x34da90u: goto label_34da90;
        case 0x34daa4u: goto label_34daa4;
        case 0x34dae8u: goto label_34dae8;
        case 0x34db2cu: goto label_34db2c;
        case 0x34db38u: goto label_34db38;
        case 0x34db50u: goto label_34db50;
        case 0x34db74u: goto label_34db74;
        case 0x34db8cu: goto label_34db8c;
        case 0x34dba0u: goto label_34dba0;
        case 0x34dbf0u: goto label_34dbf0;
        case 0x34dc08u: goto label_34dc08;
        case 0x34dc28u: goto label_34dc28;
        case 0x34dc38u: goto label_34dc38;
        case 0x34dc50u: goto label_34dc50;
        case 0x34dc90u: goto label_34dc90;
        case 0x34dca4u: goto label_34dca4;
        case 0x34dcb8u: goto label_34dcb8;
        case 0x34dcd0u: goto label_34dcd0;
        case 0x34dce0u: goto label_34dce0;
        case 0x34dd24u: goto label_34dd24;
        case 0x34dd8cu: goto label_34dd8c;
        case 0x34dd9cu: goto label_34dd9c;
        case 0x34ddb4u: goto label_34ddb4;
        case 0x34ddc0u: goto label_34ddc0;
        case 0x34ddd0u: goto label_34ddd0;
        case 0x34de3cu: goto label_34de3c;
        case 0x34de44u: goto label_34de44;
        case 0x34de78u: goto label_34de78;
        case 0x34dea0u: goto label_34dea0;
        case 0x34dec0u: goto label_34dec0;
        case 0x34dee4u: goto label_34dee4;
        case 0x34df4cu: goto label_34df4c;
        case 0x34df70u: goto label_34df70;
        case 0x34df7cu: goto label_34df7c;
        case 0x34df90u: goto label_34df90;
        case 0x34dfa0u: goto label_34dfa0;
        case 0x34dfdcu: goto label_34dfdc;
        case 0x34dff8u: goto label_34dff8;
        case 0x34e010u: goto label_34e010;
        case 0x34e060u: goto label_34e060;
        case 0x34e078u: goto label_34e078;
        case 0x34e098u: goto label_34e098;
        case 0x34e0a8u: goto label_34e0a8;
        case 0x34e0c0u: goto label_34e0c0;
        case 0x34e0ccu: goto label_34e0cc;
        case 0x34e0e0u: goto label_34e0e0;
        case 0x34e10cu: goto label_34e10c;
        case 0x34e140u: goto label_34e140;
        case 0x34e14cu: goto label_34e14c;
        case 0x34e160u: goto label_34e160;
        case 0x34e178u: goto label_34e178;
        case 0x34e1bcu: goto label_34e1bc;
        case 0x34e1c8u: goto label_34e1c8;
        default: break;
    }

    ctx->pc = 0x34d2a0u;

    // 0x34d2a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34d2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34d2a4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x34d2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34d2a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34d2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34d2ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34d2acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d2b0: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x34D2B0u;
    SET_GPR_U32(ctx, 31, 0x34D2B8u);
    ctx->pc = 0x34D2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D2B0u;
            // 0x34d2b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (runtime->hasFunction(0x1A3420u)) {
        auto targetFn = runtime->lookupFunction(0x1A3420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D2B8u; }
        if (ctx->pc != 0x34D2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3420_0x1a3420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D2B8u; }
        if (ctx->pc != 0x34D2B8u) { return; }
    }
    ctx->pc = 0x34D2B8u;
label_34d2b8:
    // 0x34d2b8: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x34d2b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x34d2bc: 0x30834000  andi        $v1, $a0, 0x4000
    ctx->pc = 0x34d2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x34d2c0: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x34D2C0u;
    {
        const bool branch_taken_0x34d2c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d2c0) {
            ctx->pc = 0x34D2C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34D2C0u;
            // 0x34d2c4: 0x30830200  andi        $v1, $a0, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
            ctx->pc = 0x34D2FCu;
            goto label_34d2fc;
        }
    }
    ctx->pc = 0x34D2C8u;
    // 0x34d2c8: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x34d2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x34d2cc: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x34D2CCu;
    SET_GPR_U32(ctx, 31, 0x34D2D4u);
    ctx->pc = 0x34D2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D2CCu;
            // 0x34d2d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D2D4u; }
        if (ctx->pc != 0x34D2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D2D4u; }
        if (ctx->pc != 0x34D2D4u) { return; }
    }
    ctx->pc = 0x34D2D4u;
label_34d2d4:
    // 0x34d2d4: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x34d2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x34d2d8: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x34d2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x34d2dc: 0x24847010  addiu       $a0, $a0, 0x7010
    ctx->pc = 0x34d2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28688));
    // 0x34d2e0: 0xc0d0dc0  jal         func_343700
    ctx->pc = 0x34D2E0u;
    SET_GPR_U32(ctx, 31, 0x34D2E8u);
    ctx->pc = 0x34D2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D2E0u;
            // 0x34d2e4: 0x24a5d490  addiu       $a1, $a1, -0x2B70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x343700u;
    if (runtime->hasFunction(0x343700u)) {
        auto targetFn = runtime->lookupFunction(0x343700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D2E8u; }
        if (ctx->pc != 0x34D2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00343700_0x343700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D2E8u; }
        if (ctx->pc != 0x34D2E8u) { return; }
    }
    ctx->pc = 0x34D2E8u;
label_34d2e8:
    // 0x34d2e8: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x34d2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x34d2ec: 0xc0d0d60  jal         func_343580
    ctx->pc = 0x34D2ECu;
    SET_GPR_U32(ctx, 31, 0x34D2F4u);
    ctx->pc = 0x34D2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D2ECu;
            // 0x34d2f0: 0x24843720  addiu       $a0, $a0, 0x3720 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x343580u;
    if (runtime->hasFunction(0x343580u)) {
        auto targetFn = runtime->lookupFunction(0x343580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D2F4u; }
        if (ctx->pc != 0x34D2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00343580_0x343580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D2F4u; }
        if (ctx->pc != 0x34D2F4u) { return; }
    }
    ctx->pc = 0x34D2F4u;
label_34d2f4:
    // 0x34d2f4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x34D2F4u;
    {
        const bool branch_taken_0x34d2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34D2F4u;
            // 0x34d2f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d2f4) {
            ctx->pc = 0x34D384u;
            goto label_34d384;
        }
    }
    ctx->pc = 0x34D2FCu;
label_34d2fc:
    // 0x34d2fc: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x34D2FCu;
    {
        const bool branch_taken_0x34d2fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d2fc) {
            ctx->pc = 0x34D300u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34D2FCu;
            // 0x34d300: 0x30830100  andi        $v1, $a0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
            ctx->pc = 0x34D344u;
            goto label_34d344;
        }
    }
    ctx->pc = 0x34D304u;
    // 0x34d304: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x34d304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x34d308: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x34D308u;
    SET_GPR_U32(ctx, 31, 0x34D310u);
    ctx->pc = 0x34D30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D308u;
            // 0x34d30c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D310u; }
        if (ctx->pc != 0x34D310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D310u; }
        if (ctx->pc != 0x34D310u) { return; }
    }
    ctx->pc = 0x34D310u;
label_34d310:
    // 0x34d310: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34d310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34d314: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x34d314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34d318: 0x8c424370  lw          $v0, 0x4370($v0)
    ctx->pc = 0x34d318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17264)));
    // 0x34d31c: 0x54430002  bnel        $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x34D31Cu;
    {
        const bool branch_taken_0x34d31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x34d31c) {
            ctx->pc = 0x34D320u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34D31Cu;
            // 0x34d320: 0x24430001  addiu       $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34D328u;
            goto label_34d328;
        }
    }
    ctx->pc = 0x34D324u;
    // 0x34d324: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x34d324u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34d328:
    // 0x34d328: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34d328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34d32c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34d32cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34d330: 0x2484cf10  addiu       $a0, $a0, -0x30F0
    ctx->pc = 0x34d330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954768));
    // 0x34d334: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34D334u;
    SET_GPR_U32(ctx, 31, 0x34D33Cu);
    ctx->pc = 0x34D338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D334u;
            // 0x34d338: 0xac434370  sw          $v1, 0x4370($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17264), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D33Cu; }
        if (ctx->pc != 0x34D33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D33Cu; }
        if (ctx->pc != 0x34D33Cu) { return; }
    }
    ctx->pc = 0x34D33Cu;
label_34d33c:
    // 0x34d33c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x34D33Cu;
    {
        const bool branch_taken_0x34d33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d33c) {
            ctx->pc = 0x34D380u;
            goto label_34d380;
        }
    }
    ctx->pc = 0x34D344u;
label_34d344:
    // 0x34d344: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x34D344u;
    {
        const bool branch_taken_0x34d344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d344) {
            ctx->pc = 0x34D380u;
            goto label_34d380;
        }
    }
    ctx->pc = 0x34D34Cu;
    // 0x34d34c: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x34d34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x34d350: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x34D350u;
    SET_GPR_U32(ctx, 31, 0x34D358u);
    ctx->pc = 0x34D354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D350u;
            // 0x34d354: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D358u; }
        if (ctx->pc != 0x34D358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D358u; }
        if (ctx->pc != 0x34D358u) { return; }
    }
    ctx->pc = 0x34D358u;
label_34d358:
    // 0x34d358: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34d358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34d35c: 0x8c424370  lw          $v0, 0x4370($v0)
    ctx->pc = 0x34d35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17264)));
    // 0x34d360: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x34D360u;
    {
        const bool branch_taken_0x34d360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34d360) {
            ctx->pc = 0x34D364u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34D360u;
            // 0x34d364: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34D36Cu;
            goto label_34d36c;
        }
    }
    ctx->pc = 0x34D368u;
    // 0x34d368: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x34d368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_34d36c:
    // 0x34d36c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34d36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34d370: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34d370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34d374: 0x2484cf10  addiu       $a0, $a0, -0x30F0
    ctx->pc = 0x34d374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954768));
    // 0x34d378: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34D378u;
    SET_GPR_U32(ctx, 31, 0x34D380u);
    ctx->pc = 0x34D37Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D378u;
            // 0x34d37c: 0xac434370  sw          $v1, 0x4370($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17264), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D380u; }
        if (ctx->pc != 0x34D380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D380u; }
        if (ctx->pc != 0x34D380u) { return; }
    }
    ctx->pc = 0x34D380u;
label_34d380:
    // 0x34d380: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34d380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34d384:
    // 0x34d384: 0x3e00008  jr          $ra
    ctx->pc = 0x34D384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34D384u;
            // 0x34d388: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34D38Cu;
    // 0x34d38c: 0x0  nop
    ctx->pc = 0x34d38cu;
    // NOP
label_34d390:
    // 0x34d390: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34d390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34d394: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x34d394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x34d398: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34d398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34d39c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34d39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34d3a0: 0xc082918  jal         func_20A460
    ctx->pc = 0x34D3A0u;
    SET_GPR_U32(ctx, 31, 0x34D3A8u);
    ctx->pc = 0x34D3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D3A0u;
            // 0x34d3a4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A460u;
    if (runtime->hasFunction(0x20A460u)) {
        auto targetFn = runtime->lookupFunction(0x20A460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D3A8u; }
        if (ctx->pc != 0x34D3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A460_0x20a460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D3A8u; }
        if (ctx->pc != 0x34D3A8u) { return; }
    }
    ctx->pc = 0x34D3A8u;
label_34d3a8:
    // 0x34d3a8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x34d3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x34d3ac: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x34d3acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x34d3b0: 0x24848e30  addiu       $a0, $a0, -0x71D0
    ctx->pc = 0x34d3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938160));
    // 0x34d3b4: 0xc0838c4  jal         func_20E310
    ctx->pc = 0x34D3B4u;
    SET_GPR_U32(ctx, 31, 0x34D3BCu);
    ctx->pc = 0x34D3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D3B4u;
            // 0x34d3b8: 0x24a58f60  addiu       $a1, $a1, -0x70A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E310u;
    if (runtime->hasFunction(0x20E310u)) {
        auto targetFn = runtime->lookupFunction(0x20E310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D3BCu; }
        if (ctx->pc != 0x34D3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020E310_0x20e310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D3BCu; }
        if (ctx->pc != 0x34D3BCu) { return; }
    }
    ctx->pc = 0x34D3BCu;
label_34d3bc:
    // 0x34d3bc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34d3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34d3c0: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x34d3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x34d3c4: 0x8c444370  lw          $a0, 0x4370($v0)
    ctx->pc = 0x34d3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17264)));
    // 0x34d3c8: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x34d3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x34d3cc: 0x24a58e30  addiu       $a1, $a1, -0x71D0
    ctx->pc = 0x34d3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938160));
    // 0x34d3d0: 0xc083a44  jal         func_20E910
    ctx->pc = 0x34D3D0u;
    SET_GPR_U32(ctx, 31, 0x34D3D8u);
    ctx->pc = 0x34D3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D3D0u;
            // 0x34d3d4: 0x24c68fd0  addiu       $a2, $a2, -0x7030 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E910u;
    if (runtime->hasFunction(0x20E910u)) {
        auto targetFn = runtime->lookupFunction(0x20E910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D3D8u; }
        if (ctx->pc != 0x34D3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020E910_0x20e910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D3D8u; }
        if (ctx->pc != 0x34D3D8u) { return; }
    }
    ctx->pc = 0x34D3D8u;
label_34d3d8:
    // 0x34d3d8: 0x3c07003e  lui         $a3, 0x3E
    ctx->pc = 0x34d3d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)62 << 16));
    // 0x34d3dc: 0x3c08003e  lui         $t0, 0x3E
    ctx->pc = 0x34d3dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)62 << 16));
    // 0x34d3e0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x34d3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x34d3e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34d3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d3e8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x34d3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34d3ec: 0x24e78e30  addiu       $a3, $a3, -0x71D0
    ctx->pc = 0x34d3ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294938160));
    // 0x34d3f0: 0xc0838dc  jal         func_20E370
    ctx->pc = 0x34D3F0u;
    SET_GPR_U32(ctx, 31, 0x34D3F8u);
    ctx->pc = 0x34D3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D3F0u;
            // 0x34d3f4: 0x25089050  addiu       $t0, $t0, -0x6FB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294938704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20E370u;
    if (runtime->hasFunction(0x20E370u)) {
        auto targetFn = runtime->lookupFunction(0x20E370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D3F8u; }
        if (ctx->pc != 0x34D3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020E370_0x20e370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D3F8u; }
        if (ctx->pc != 0x34D3F8u) { return; }
    }
    ctx->pc = 0x34D3F8u;
label_34d3f8:
    // 0x34d3f8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x34d3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34d3fc: 0xc082998  jal         func_20A660
    ctx->pc = 0x34D3FCu;
    SET_GPR_U32(ctx, 31, 0x34D404u);
    ctx->pc = 0x34D400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D3FCu;
            // 0x34d400: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A660u;
    if (runtime->hasFunction(0x20A660u)) {
        auto targetFn = runtime->lookupFunction(0x20A660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D404u; }
        if (ctx->pc != 0x34D404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A660_0x20a660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D404u; }
        if (ctx->pc != 0x34D404u) { return; }
    }
    ctx->pc = 0x34D404u;
label_34d404:
    // 0x34d404: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x34d404u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d408: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x34d408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d40c: 0x24100068  addiu       $s0, $zero, 0x68
    ctx->pc = 0x34d40cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_34d410:
    // 0x34d410: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34d410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34d414: 0x8c634090  lw          $v1, 0x4090($v1)
    ctx->pc = 0x34d414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16528)));
    // 0x34d418: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x34d418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x34d41c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x34d41cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34d420: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x34D420u;
    {
        const bool branch_taken_0x34d420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d420) {
            ctx->pc = 0x34D458u;
            goto label_34d458;
        }
    }
    ctx->pc = 0x34D428u;
    // 0x34d428: 0x24860044  addiu       $a2, $a0, 0x44
    ctx->pc = 0x34d428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 68));
    // 0x34d42c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34d42cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d430: 0xc083768  jal         func_20DDA0
    ctx->pc = 0x34D430u;
    SET_GPR_U32(ctx, 31, 0x34D438u);
    ctx->pc = 0x34D434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D430u;
            // 0x34d434: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20DDA0u;
    if (runtime->hasFunction(0x20DDA0u)) {
        auto targetFn = runtime->lookupFunction(0x20DDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D438u; }
        if (ctx->pc != 0x34D438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020DDA0_0x20dda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D438u; }
        if (ctx->pc != 0x34D438u) { return; }
    }
    ctx->pc = 0x34D438u;
label_34d438:
    // 0x34d438: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34d438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34d43c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x34d43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x34d440: 0x8c424090  lw          $v0, 0x4090($v0)
    ctx->pc = 0x34d440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16528)));
    // 0x34d444: 0x24050190  addiu       $a1, $zero, 0x190
    ctx->pc = 0x34d444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x34d448: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x34d448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d44c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x34d44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x34d450: 0xc083788  jal         func_20DE20
    ctx->pc = 0x34D450u;
    SET_GPR_U32(ctx, 31, 0x34D458u);
    ctx->pc = 0x34D454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D450u;
            // 0x34d454: 0x24470086  addiu       $a3, $v0, 0x86 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 134));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20DE20u;
    if (runtime->hasFunction(0x20DE20u)) {
        auto targetFn = runtime->lookupFunction(0x20DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D458u; }
        if (ctx->pc != 0x34D458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020DE20_0x20de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D458u; }
        if (ctx->pc != 0x34D458u) { return; }
    }
    ctx->pc = 0x34D458u;
label_34d458:
    // 0x34d458: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x34d458u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x34d45c: 0x2a430014  slti        $v1, $s2, 0x14
    ctx->pc = 0x34d45cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x34d460: 0x263100c8  addiu       $s1, $s1, 0xC8
    ctx->pc = 0x34d460u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
    // 0x34d464: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x34D464u;
    {
        const bool branch_taken_0x34d464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34D468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34D464u;
            // 0x34d468: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d464) {
            ctx->pc = 0x34D410u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34d410;
        }
    }
    ctx->pc = 0x34D46Cu;
    // 0x34d46c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x34d46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34d470: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34d470u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34d474: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34d474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34d478: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34d478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d47c: 0x3e00008  jr          $ra
    ctx->pc = 0x34D47Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34D47Cu;
            // 0x34d480: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34D484u;
    // 0x34d484: 0x0  nop
    ctx->pc = 0x34d484u;
    // NOP
label_34d488:
    // 0x34d488: 0x0  nop
    ctx->pc = 0x34d488u;
    // NOP
    // 0x34d48c: 0x0  nop
    ctx->pc = 0x34d48cu;
    // NOP
label_34d490:
    // 0x34d490: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x34d490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x34d494: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34d494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34d498: 0x2484ff04  addiu       $a0, $a0, -0xFC
    ctx->pc = 0x34d498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967044));
    // 0x34d49c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34d49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34d4a0: 0xac44eab8  sw          $a0, -0x1548($v0)
    ctx->pc = 0x34d4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961848), GPR_U32(ctx, 4));
    // 0x34d4a4: 0x24634310  addiu       $v1, $v1, 0x4310
    ctx->pc = 0x34d4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17168));
    // 0x34d4a8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34d4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34d4ac: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34d4acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34d4b0: 0xac43ead0  sw          $v1, -0x1530($v0)
    ctx->pc = 0x34d4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961872), GPR_U32(ctx, 3));
    // 0x34d4b4: 0x24848740  addiu       $a0, $a0, -0x78C0
    ctx->pc = 0x34d4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936384));
    // 0x34d4b8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34d4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34d4bc: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34d4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34d4c0: 0x24631158  addiu       $v1, $v1, 0x1158
    ctx->pc = 0x34d4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4440));
    // 0x34d4c4: 0x8082674  j           func_2099D0
    ctx->pc = 0x34D4C4u;
    ctx->pc = 0x34D4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D4C4u;
            // 0x34d4c8: 0xac4340a0  sw          $v1, 0x40A0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16544), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002099D0_0x2099d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x34D4CCu;
    // 0x34d4cc: 0x0  nop
    ctx->pc = 0x34d4ccu;
    // NOP
label_34d4d0:
    // 0x34d4d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34d4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34d4d4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x34d4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x34d4d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34d4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34d4dc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x34D4DCu;
    SET_GPR_U32(ctx, 31, 0x34D4E4u);
    ctx->pc = 0x34D4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D4DCu;
            // 0x34d4e0: 0x24845240  addiu       $a0, $a0, 0x5240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D4E4u; }
        if (ctx->pc != 0x34D4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D4E4u; }
        if (ctx->pc != 0x34D4E4u) { return; }
    }
    ctx->pc = 0x34D4E4u;
label_34d4e4:
    // 0x34d4e4: 0xc0551c0  jal         func_154700
    ctx->pc = 0x34D4E4u;
    SET_GPR_U32(ctx, 31, 0x34D4ECu);
    ctx->pc = 0x154700u;
    if (runtime->hasFunction(0x154700u)) {
        auto targetFn = runtime->lookupFunction(0x154700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D4ECu; }
        if (ctx->pc != 0x34D4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00154700_0x154700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D4ECu; }
        if (ctx->pc != 0x34D4ECu) { return; }
    }
    ctx->pc = 0x34D4ECu;
label_34d4ec:
    // 0x34d4ec: 0xc0c03cc  jal         func_300F30
    ctx->pc = 0x34D4ECu;
    SET_GPR_U32(ctx, 31, 0x34D4F4u);
    ctx->pc = 0x300F30u;
    if (runtime->hasFunction(0x300F30u)) {
        auto targetFn = runtime->lookupFunction(0x300F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D4F4u; }
        if (ctx->pc != 0x34D4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00300F30_0x300f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D4F4u; }
        if (ctx->pc != 0x34D4F4u) { return; }
    }
    ctx->pc = 0x34D4F4u;
label_34d4f4:
    // 0x34d4f4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x34d4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x34d4f8: 0xc055684  jal         func_155A10
    ctx->pc = 0x34D4F8u;
    SET_GPR_U32(ctx, 31, 0x34D500u);
    ctx->pc = 0x34D4FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D4F8u;
            // 0x34d4fc: 0xa0409738  sb          $zero, -0x68C8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294940472), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155A10u;
    if (runtime->hasFunction(0x155A10u)) {
        auto targetFn = runtime->lookupFunction(0x155A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D500u; }
        if (ctx->pc != 0x34D500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155A10_0x155a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D500u; }
        if (ctx->pc != 0x34D500u) { return; }
    }
    ctx->pc = 0x34D500u;
label_34d500:
    // 0x34d500: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34d500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34d504: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x34d504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x34d508: 0xac40beb0  sw          $zero, -0x4150($v0)
    ctx->pc = 0x34d508u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950576), GPR_U32(ctx, 0));
    // 0x34d50c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x34d50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d510: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34d510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34d514: 0xac60beb4  sw          $zero, -0x414C($v1)
    ctx->pc = 0x34d514u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950580), GPR_U32(ctx, 0));
    // 0x34d518: 0xac40beb8  sw          $zero, -0x4148($v0)
    ctx->pc = 0x34d518u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950584), GPR_U32(ctx, 0));
    // 0x34d51c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34d51cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d520: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x34D520u;
    SET_GPR_U32(ctx, 31, 0x34D528u);
    ctx->pc = 0x34D524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D520u;
            // 0x34d524: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (runtime->hasFunction(0x31E7F0u)) {
        auto targetFn = runtime->lookupFunction(0x31E7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D528u; }
        if (ctx->pc != 0x34D528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031E7F0_0x31e7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D528u; }
        if (ctx->pc != 0x34D528u) { return; }
    }
    ctx->pc = 0x34D528u;
label_34d528:
    // 0x34d528: 0xc05347c  jal         func_14D1F0
    ctx->pc = 0x34D528u;
    SET_GPR_U32(ctx, 31, 0x34D530u);
    ctx->pc = 0x14D1F0u;
    if (runtime->hasFunction(0x14D1F0u)) {
        auto targetFn = runtime->lookupFunction(0x14D1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D530u; }
        if (ctx->pc != 0x34D530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D1F0_0x14d1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D530u; }
        if (ctx->pc != 0x34D530u) { return; }
    }
    ctx->pc = 0x34D530u;
label_34d530:
    // 0x34d530: 0xc053318  jal         func_14CC60
    ctx->pc = 0x34D530u;
    SET_GPR_U32(ctx, 31, 0x34D538u);
    ctx->pc = 0x14CC60u;
    if (runtime->hasFunction(0x14CC60u)) {
        auto targetFn = runtime->lookupFunction(0x14CC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D538u; }
        if (ctx->pc != 0x34D538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014CC60_0x14cc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D538u; }
        if (ctx->pc != 0x34D538u) { return; }
    }
    ctx->pc = 0x34D538u;
label_34d538:
    // 0x34d538: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x34d538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34d53c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x34d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x34d540: 0xac439478  sw          $v1, -0x6B88($v0)
    ctx->pc = 0x34d540u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294939768), GPR_U32(ctx, 3));
    // 0x34d544: 0xc069184  jal         func_1A4610
    ctx->pc = 0x34D544u;
    SET_GPR_U32(ctx, 31, 0x34D54Cu);
    ctx->pc = 0x34D548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D544u;
            // 0x34d548: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4610u;
    if (runtime->hasFunction(0x1A4610u)) {
        auto targetFn = runtime->lookupFunction(0x1A4610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D54Cu; }
        if (ctx->pc != 0x34D54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4610_0x1a4610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D54Cu; }
        if (ctx->pc != 0x34D54Cu) { return; }
    }
    ctx->pc = 0x34D54Cu;
label_34d54c:
    // 0x34d54c: 0xc069244  jal         func_1A4910
    ctx->pc = 0x34D54Cu;
    SET_GPR_U32(ctx, 31, 0x34D554u);
    ctx->pc = 0x1A4910u;
    if (runtime->hasFunction(0x1A4910u)) {
        auto targetFn = runtime->lookupFunction(0x1A4910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D554u; }
        if (ctx->pc != 0x34D554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4910_0x1a4910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D554u; }
        if (ctx->pc != 0x34D554u) { return; }
    }
    ctx->pc = 0x34D554u;
label_34d554:
    // 0x34d554: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x34d554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x34d558: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x34d558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x34d55c: 0x248433f0  addiu       $a0, $a0, 0x33F0
    ctx->pc = 0x34d55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13296));
    // 0x34d560: 0xac40d9c0  sw          $zero, -0x2640($v0)
    ctx->pc = 0x34d560u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957504), GPR_U32(ctx, 0));
    // 0x34d564: 0xc082678  jal         func_2099E0
    ctx->pc = 0x34D564u;
    SET_GPR_U32(ctx, 31, 0x34D56Cu);
    ctx->pc = 0x34D568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D564u;
            // 0x34d568: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (runtime->hasFunction(0x2099E0u)) {
        auto targetFn = runtime->lookupFunction(0x2099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D56Cu; }
        if (ctx->pc != 0x34D56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099E0_0x2099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D56Cu; }
        if (ctx->pc != 0x34D56Cu) { return; }
    }
    ctx->pc = 0x34D56Cu;
label_34d56c:
    // 0x34d56c: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x34d56cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x34d570: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x34d570u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x34d574: 0x24849ab0  addiu       $a0, $a0, -0x6550
    ctx->pc = 0x34d574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941360));
    // 0x34d578: 0xc0558d4  jal         func_156350
    ctx->pc = 0x34D578u;
    SET_GPR_U32(ctx, 31, 0x34D580u);
    ctx->pc = 0x34D57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D578u;
            // 0x34d57c: 0x24a5d590  addiu       $a1, $a1, -0x2A70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (runtime->hasFunction(0x156350u)) {
        auto targetFn = runtime->lookupFunction(0x156350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D580u; }
        if (ctx->pc != 0x34D580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156350_0x156350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D580u; }
        if (ctx->pc != 0x34D580u) { return; }
    }
    ctx->pc = 0x34D580u;
label_34d580:
    // 0x34d580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34d580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d584: 0x3e00008  jr          $ra
    ctx->pc = 0x34D584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34D584u;
            // 0x34d588: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34D58Cu;
    // 0x34d58c: 0x0  nop
    ctx->pc = 0x34d58cu;
    // NOP
label_34d590:
    // 0x34d590: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x34d590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x34d594: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34d594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34d598: 0x2484ff04  addiu       $a0, $a0, -0xFC
    ctx->pc = 0x34d598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967044));
    // 0x34d59c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34d59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34d5a0: 0xac44eab8  sw          $a0, -0x1548($v0)
    ctx->pc = 0x34d5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961848), GPR_U32(ctx, 4));
    // 0x34d5a4: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x34d5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x34d5a8: 0x24634310  addiu       $v1, $v1, 0x4310
    ctx->pc = 0x34d5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17168));
    // 0x34d5ac: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34d5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34d5b0: 0xac43ead0  sw          $v1, -0x1530($v0)
    ctx->pc = 0x34d5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961872), GPR_U32(ctx, 3));
    // 0x34d5b4: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x34d5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x34d5b8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34d5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34d5bc: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34d5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34d5c0: 0x24631158  addiu       $v1, $v1, 0x1158
    ctx->pc = 0x34d5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4440));
    // 0x34d5c4: 0x24846f30  addiu       $a0, $a0, 0x6F30
    ctx->pc = 0x34d5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28464));
    // 0x34d5c8: 0xac4340a0  sw          $v1, 0x40A0($v0)
    ctx->pc = 0x34d5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16544), GPR_U32(ctx, 3));
    // 0x34d5cc: 0x80558d4  j           func_156350
    ctx->pc = 0x34D5CCu;
    ctx->pc = 0x34D5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D5CCu;
            // 0x34d5d0: 0x24a5d5e0  addiu       $a1, $a1, -0x2A20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (runtime->hasFunction(0x156350u)) {
        auto targetFn = runtime->lookupFunction(0x156350u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00156350_0x156350(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x34D5D4u;
    // 0x34d5d4: 0x0  nop
    ctx->pc = 0x34d5d4u;
    // NOP
    // 0x34d5d8: 0x0  nop
    ctx->pc = 0x34d5d8u;
    // NOP
    // 0x34d5dc: 0x0  nop
    ctx->pc = 0x34d5dcu;
    // NOP
label_34d5e0:
    // 0x34d5e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34d5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34d5e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34d5e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d5e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34d5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34d5ec: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x34d5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34d5f0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x34D5F0u;
    SET_GPR_U32(ctx, 31, 0x34D5F8u);
    ctx->pc = 0x34D5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D5F0u;
            // 0x34d5f4: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D5F8u; }
        if (ctx->pc != 0x34D5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D5F8u; }
        if (ctx->pc != 0x34D5F8u) { return; }
    }
    ctx->pc = 0x34D5F8u;
label_34d5f8:
    // 0x34d5f8: 0x3c0501df  lui         $a1, 0x1DF
    ctx->pc = 0x34d5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)479 << 16));
    // 0x34d5fc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x34d5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34d600: 0x24a5dda0  addiu       $a1, $a1, -0x2260
    ctx->pc = 0x34d600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958496));
    // 0x34d604: 0xc049c48  jal         func_127120
    ctx->pc = 0x34D604u;
    SET_GPR_U32(ctx, 31, 0x34D60Cu);
    ctx->pc = 0x34D608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D604u;
            // 0x34d608: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D60Cu; }
        if (ctx->pc != 0x34D60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D60Cu; }
        if (ctx->pc != 0x34D60Cu) { return; }
    }
    ctx->pc = 0x34D60Cu;
label_34d60c:
    // 0x34d60c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x34d60cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x34d610: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x34d610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34d614: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x34D614u;
    SET_GPR_U32(ctx, 31, 0x34D61Cu);
    ctx->pc = 0x34D618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D614u;
            // 0x34d618: 0x24a55200  addiu       $a1, $a1, 0x5200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D61Cu; }
        if (ctx->pc != 0x34D61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D61Cu; }
        if (ctx->pc != 0x34D61Cu) { return; }
    }
    ctx->pc = 0x34D61Cu;
label_34d61c:
    // 0x34d61c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34d61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34d620: 0x24053010  addiu       $a1, $zero, 0x3010
    ctx->pc = 0x34d620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12304));
    // 0x34d624: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x34d624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x34d628: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x34d628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34d62c: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x34D62Cu;
    SET_GPR_U32(ctx, 31, 0x34D634u);
    ctx->pc = 0x34D630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D62Cu;
            // 0x34d630: 0x24070028  addiu       $a3, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (runtime->hasFunction(0x20FE58u)) {
        auto targetFn = runtime->lookupFunction(0x20FE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D634u; }
        if (ctx->pc != 0x34D634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FE58_0x20fe58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D634u; }
        if (ctx->pc != 0x34D634u) { return; }
    }
    ctx->pc = 0x34D634u;
label_34d634:
    // 0x34d634: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34d634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34d638: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x34D638u;
    SET_GPR_U32(ctx, 31, 0x34D640u);
    ctx->pc = 0x34D63Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D638u;
            // 0x34d63c: 0x2484d650  addiu       $a0, $a0, -0x29B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (runtime->hasFunction(0x347260u)) {
        auto targetFn = runtime->lookupFunction(0x347260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D640u; }
        if (ctx->pc != 0x34D640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347260_0x347260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D640u; }
        if (ctx->pc != 0x34D640u) { return; }
    }
    ctx->pc = 0x34D640u;
label_34d640:
    // 0x34d640: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34d640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d644: 0x3e00008  jr          $ra
    ctx->pc = 0x34D644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34D644u;
            // 0x34d648: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34D64Cu;
    // 0x34d64c: 0x0  nop
    ctx->pc = 0x34d64cu;
    // NOP
label_34d650:
    // 0x34d650: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x34d650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x34d654: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34d654u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34d658: 0x8c43ddc0  lw          $v1, -0x2240($v0)
    ctx->pc = 0x34d658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958528)));
    // 0x34d65c: 0x2484d670  addiu       $a0, $a0, -0x2990
    ctx->pc = 0x34d65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956656));
    // 0x34d660: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x34d660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x34d664: 0x8082674  j           func_2099D0
    ctx->pc = 0x34D664u;
    ctx->pc = 0x34D668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D664u;
            // 0x34d668: 0xac43dd80  sw          $v1, -0x2280($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294958464), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002099D0_0x2099d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x34D66Cu;
    // 0x34d66c: 0x0  nop
    ctx->pc = 0x34d66cu;
    // NOP
label_34d670:
    // 0x34d670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34d670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34d674: 0x3c0501df  lui         $a1, 0x1DF
    ctx->pc = 0x34d674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)479 << 16));
    // 0x34d678: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34d678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34d67c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x34d67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34d680: 0x24a5dda0  addiu       $a1, $a1, -0x2260
    ctx->pc = 0x34d680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958496));
    // 0x34d684: 0xc049c48  jal         func_127120
    ctx->pc = 0x34D684u;
    SET_GPR_U32(ctx, 31, 0x34D68Cu);
    ctx->pc = 0x34D688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D684u;
            // 0x34d688: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D68Cu; }
        if (ctx->pc != 0x34D68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D68Cu; }
        if (ctx->pc != 0x34D68Cu) { return; }
    }
    ctx->pc = 0x34D68Cu;
label_34d68c:
    // 0x34d68c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34d690: 0x24053520  addiu       $a1, $zero, 0x3520
    ctx->pc = 0x34d690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13600));
    // 0x34d694: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x34d694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x34d698: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x34d698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34d69c: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x34D69Cu;
    SET_GPR_U32(ctx, 31, 0x34D6A4u);
    ctx->pc = 0x34D6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D69Cu;
            // 0x34d6a0: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (runtime->hasFunction(0x20FE58u)) {
        auto targetFn = runtime->lookupFunction(0x20FE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D6A4u; }
        if (ctx->pc != 0x34D6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FE58_0x20fe58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D6A4u; }
        if (ctx->pc != 0x34D6A4u) { return; }
    }
    ctx->pc = 0x34D6A4u;
label_34d6a4:
    // 0x34d6a4: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34d6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34d6a8: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x34D6A8u;
    SET_GPR_U32(ctx, 31, 0x34D6B0u);
    ctx->pc = 0x34D6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D6A8u;
            // 0x34d6ac: 0x2484d6c0  addiu       $a0, $a0, -0x2940 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (runtime->hasFunction(0x347260u)) {
        auto targetFn = runtime->lookupFunction(0x347260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D6B0u; }
        if (ctx->pc != 0x34D6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347260_0x347260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D6B0u; }
        if (ctx->pc != 0x34D6B0u) { return; }
    }
    ctx->pc = 0x34D6B0u;
label_34d6b0:
    // 0x34d6b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34d6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x34D6B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34D6B4u;
            // 0x34d6b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34D6BCu;
    // 0x34d6bc: 0x0  nop
    ctx->pc = 0x34d6bcu;
    // NOP
label_34d6c0:
    // 0x34d6c0: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x34d6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x34d6c4: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x34d6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x34d6c8: 0x2442ddc0  addiu       $v0, $v0, -0x2240
    ctx->pc = 0x34d6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958528));
    // 0x34d6cc: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x34d6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x34d6d0: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x34d6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x34d6d4: 0x8c47005c  lw          $a3, 0x5C($v0)
    ctx->pc = 0x34d6d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x34d6d8: 0x8c460058  lw          $a2, 0x58($v0)
    ctx->pc = 0x34d6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x34d6dc: 0xa06594f8  sb          $a1, -0x6B08($v1)
    ctx->pc = 0x34d6dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294939896), (uint8_t)GPR_U32(ctx, 5));
    // 0x34d6e0: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x34d6e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x34d6e4: 0xac87eab0  sw          $a3, -0x1550($a0)
    ctx->pc = 0x34d6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961840), GPR_U32(ctx, 7));
    // 0x34d6e8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x34d6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x34d6ec: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x34D6ECu;
    {
        const bool branch_taken_0x34d6ec = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x34D6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34D6ECu;
            // 0x34d6f0: 0xa04694f0  sb          $a2, -0x6B10($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294939888), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d6ec) {
            ctx->pc = 0x34D700u;
            goto label_34d700;
        }
    }
    ctx->pc = 0x34D6F4u;
    // 0x34d6f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34d6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34d6f8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x34d6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x34d6fc: 0xa04594f8  sb          $a1, -0x6B08($v0)
    ctx->pc = 0x34d6fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294939896), (uint8_t)GPR_U32(ctx, 5));
label_34d700:
    // 0x34d700: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x34d700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x34d704: 0x28420064  slti        $v0, $v0, 0x64
    ctx->pc = 0x34d704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x34d708: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34D708u;
    {
        const bool branch_taken_0x34d708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34d708) {
            ctx->pc = 0x34D71Cu;
            goto label_34d71c;
        }
    }
    ctx->pc = 0x34D710u;
    // 0x34d710: 0x24050063  addiu       $a1, $zero, 0x63
    ctx->pc = 0x34d710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x34d714: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x34d714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x34d718: 0xa04594f8  sb          $a1, -0x6B08($v0)
    ctx->pc = 0x34d718u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294939896), (uint8_t)GPR_U32(ctx, 5));
label_34d71c:
    // 0x34d71c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34d71cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34d720: 0x8082674  j           func_2099D0
    ctx->pc = 0x34D720u;
    ctx->pc = 0x34D724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D720u;
            // 0x34d724: 0x2484d730  addiu       $a0, $a0, -0x28D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002099D0_0x2099d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x34D728u;
    // 0x34d728: 0x0  nop
    ctx->pc = 0x34d728u;
    // NOP
    // 0x34d72c: 0x0  nop
    ctx->pc = 0x34d72cu;
    // NOP
label_34d730:
    // 0x34d730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34d730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34d734: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34d734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d738: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34d738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34d73c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x34d73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34d740: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x34D740u;
    SET_GPR_U32(ctx, 31, 0x34D748u);
    ctx->pc = 0x34D744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D740u;
            // 0x34d744: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D748u; }
        if (ctx->pc != 0x34D748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D748u; }
        if (ctx->pc != 0x34D748u) { return; }
    }
    ctx->pc = 0x34D748u;
label_34d748:
    // 0x34d748: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x34d748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x34d74c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x34d74cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x34d750: 0x8c42dd88  lw          $v0, -0x2278($v0)
    ctx->pc = 0x34d750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958472)));
    // 0x34d754: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x34d754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x34d758: 0x24a550c0  addiu       $a1, $a1, 0x50C0
    ctx->pc = 0x34d758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20672));
    // 0x34d75c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x34d75cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x34d760: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x34D760u;
    SET_GPR_U32(ctx, 31, 0x34D768u);
    ctx->pc = 0x34D764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D760u;
            // 0x34d764: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D768u; }
        if (ctx->pc != 0x34D768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D768u; }
        if (ctx->pc != 0x34D768u) { return; }
    }
    ctx->pc = 0x34D768u;
label_34d768:
    // 0x34d768: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x34d768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x34d76c: 0x3c0301df  lui         $v1, 0x1DF
    ctx->pc = 0x34d76cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)479 << 16));
    // 0x34d770: 0x8c48dd88  lw          $t0, -0x2278($v0)
    ctx->pc = 0x34d770u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958472)));
    // 0x34d774: 0x24053130  addiu       $a1, $zero, 0x3130
    ctx->pc = 0x34d774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12592));
    // 0x34d778: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x34d778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34d77c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x34d77cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34d780: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34d780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34d784: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x34d784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x34d788: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x34D788u;
    SET_GPR_U32(ctx, 31, 0x34D790u);
    ctx->pc = 0x34D78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D788u;
            // 0x34d78c: 0xac68dd80  sw          $t0, -0x2280($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294958464), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (runtime->hasFunction(0x20FE58u)) {
        auto targetFn = runtime->lookupFunction(0x20FE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D790u; }
        if (ctx->pc != 0x34D790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FE58_0x20fe58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D790u; }
        if (ctx->pc != 0x34D790u) { return; }
    }
    ctx->pc = 0x34D790u;
label_34d790:
    // 0x34d790: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34d790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34d794: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x34D794u;
    SET_GPR_U32(ctx, 31, 0x34D79Cu);
    ctx->pc = 0x34D798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D794u;
            // 0x34d798: 0x2484d7b0  addiu       $a0, $a0, -0x2850 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (runtime->hasFunction(0x347260u)) {
        auto targetFn = runtime->lookupFunction(0x347260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D79Cu; }
        if (ctx->pc != 0x34D79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347260_0x347260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D79Cu; }
        if (ctx->pc != 0x34D79Cu) { return; }
    }
    ctx->pc = 0x34D79Cu;
label_34d79c:
    // 0x34d79c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34d79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d7a0: 0x3e00008  jr          $ra
    ctx->pc = 0x34D7A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34D7A0u;
            // 0x34d7a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34D7A8u;
    // 0x34d7a8: 0x0  nop
    ctx->pc = 0x34d7a8u;
    // NOP
    // 0x34d7ac: 0x0  nop
    ctx->pc = 0x34d7acu;
    // NOP
label_34d7b0:
    // 0x34d7b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34d7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34d7b4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34d7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34d7b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34d7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34d7bc: 0x8c42fe50  lw          $v0, -0x1B0($v0)
    ctx->pc = 0x34d7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966864)));
    // 0x34d7c0: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x34d7c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x34d7c4: 0x50200006  beql        $at, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x34D7C4u;
    {
        const bool branch_taken_0x34d7c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d7c4) {
            ctx->pc = 0x34D7C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34D7C4u;
            // 0x34d7c8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34D7E0u;
            goto label_34d7e0;
        }
    }
    ctx->pc = 0x34D7CCu;
    // 0x34d7cc: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34d7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34d7d0: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34D7D0u;
    SET_GPR_U32(ctx, 31, 0x34D7D8u);
    ctx->pc = 0x34D7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D7D0u;
            // 0x34d7d4: 0x2484d910  addiu       $a0, $a0, -0x26F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D7D8u; }
        if (ctx->pc != 0x34D7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D7D8u; }
        if (ctx->pc != 0x34D7D8u) { return; }
    }
    ctx->pc = 0x34D7D8u;
label_34d7d8:
    // 0x34d7d8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x34D7D8u;
    {
        const bool branch_taken_0x34d7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34D7D8u;
            // 0x34d7dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d7d8) {
            ctx->pc = 0x34D810u;
            goto label_34d810;
        }
    }
    ctx->pc = 0x34D7E0u;
label_34d7e0:
    // 0x34d7e0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34d7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34d7e4: 0xac434378  sw          $v1, 0x4378($v0)
    ctx->pc = 0x34d7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17272), GPR_U32(ctx, 3));
    // 0x34d7e8: 0xc069230  jal         func_1A48C0
    ctx->pc = 0x34D7E8u;
    SET_GPR_U32(ctx, 31, 0x34D7F0u);
    ctx->pc = 0x34D7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D7E8u;
            // 0x34d7ec: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A48C0u;
    if (runtime->hasFunction(0x1A48C0u)) {
        auto targetFn = runtime->lookupFunction(0x1A48C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D7F0u; }
        if (ctx->pc != 0x34D7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A48C0_0x1a48c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D7F0u; }
        if (ctx->pc != 0x34D7F0u) { return; }
    }
    ctx->pc = 0x34D7F0u;
label_34d7f0:
    // 0x34d7f0: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x34d7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x34d7f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34d7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34d7f8: 0xc082678  jal         func_2099E0
    ctx->pc = 0x34D7F8u;
    SET_GPR_U32(ctx, 31, 0x34D800u);
    ctx->pc = 0x34D7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D7F8u;
            // 0x34d7fc: 0x24844000  addiu       $a0, $a0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (runtime->hasFunction(0x2099E0u)) {
        auto targetFn = runtime->lookupFunction(0x2099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D800u; }
        if (ctx->pc != 0x34D800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099E0_0x2099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D800u; }
        if (ctx->pc != 0x34D800u) { return; }
    }
    ctx->pc = 0x34D800u;
label_34d800:
    // 0x34d800: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34d800u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34d804: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34D804u;
    SET_GPR_U32(ctx, 31, 0x34D80Cu);
    ctx->pc = 0x34D808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D804u;
            // 0x34d808: 0x2484d820  addiu       $a0, $a0, -0x27E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D80Cu; }
        if (ctx->pc != 0x34D80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D80Cu; }
        if (ctx->pc != 0x34D80Cu) { return; }
    }
    ctx->pc = 0x34D80Cu;
label_34d80c:
    // 0x34d80c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34d80cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34d810:
    // 0x34d810: 0x3e00008  jr          $ra
    ctx->pc = 0x34D810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34D810u;
            // 0x34d814: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34D818u;
    // 0x34d818: 0x0  nop
    ctx->pc = 0x34d818u;
    // NOP
    // 0x34d81c: 0x0  nop
    ctx->pc = 0x34d81cu;
    // NOP
label_34d820:
    // 0x34d820: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34d820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34d824: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x34d824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34d828: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34d828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34d82c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34d82cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d830: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34d830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d834: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x34D834u;
    SET_GPR_U32(ctx, 31, 0x34D83Cu);
    ctx->pc = 0x34D838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D834u;
            // 0x34d838: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (runtime->hasFunction(0x1A3420u)) {
        auto targetFn = runtime->lookupFunction(0x1A3420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D83Cu; }
        if (ctx->pc != 0x34D83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3420_0x1a3420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D83Cu; }
        if (ctx->pc != 0x34D83Cu) { return; }
    }
    ctx->pc = 0x34D83Cu;
label_34d83c:
    // 0x34d83c: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x34d83cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x34d840: 0x320300a0  andi        $v1, $s0, 0xA0
    ctx->pc = 0x34d840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)160);
    // 0x34d844: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x34D844u;
    {
        const bool branch_taken_0x34d844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d844) {
            ctx->pc = 0x34D848u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34D844u;
            // 0x34d848: 0x32032000  andi        $v1, $s0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
            ctx->pc = 0x34D874u;
            goto label_34d874;
        }
    }
    ctx->pc = 0x34D84Cu;
    // 0x34d84c: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x34d84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x34d850: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x34D850u;
    SET_GPR_U32(ctx, 31, 0x34D858u);
    ctx->pc = 0x34D854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D850u;
            // 0x34d854: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D858u; }
        if (ctx->pc != 0x34D858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D858u; }
        if (ctx->pc != 0x34D858u) { return; }
    }
    ctx->pc = 0x34D858u;
label_34d858:
    // 0x34d858: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x34d858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x34d85c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34d85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34d860: 0x8c844378  lw          $a0, 0x4378($a0)
    ctx->pc = 0x34d860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 17272)));
    // 0x34d864: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x34d864u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x34d868: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x34d868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x34d86c: 0xac644378  sw          $a0, 0x4378($v1)
    ctx->pc = 0x34d86cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17272), GPR_U32(ctx, 4));
    // 0x34d870: 0x32032000  andi        $v1, $s0, 0x2000
    ctx->pc = 0x34d870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
label_34d874:
    // 0x34d874: 0x50600022  beql        $v1, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x34D874u;
    {
        const bool branch_taken_0x34d874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d874) {
            ctx->pc = 0x34D878u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34D874u;
            // 0x34d878: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34D900u;
            goto label_34d900;
        }
    }
    ctx->pc = 0x34D87Cu;
    // 0x34d87c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x34d87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34d880: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34d880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d884: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x34D884u;
    SET_GPR_U32(ctx, 31, 0x34D88Cu);
    ctx->pc = 0x34D888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D884u;
            // 0x34d888: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D88Cu; }
        if (ctx->pc != 0x34D88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D88Cu; }
        if (ctx->pc != 0x34D88Cu) { return; }
    }
    ctx->pc = 0x34D88Cu;
label_34d88c:
    // 0x34d88c: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x34d88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x34d890: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x34d890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x34d894: 0x8c43dd80  lw          $v1, -0x2280($v0)
    ctx->pc = 0x34d894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958464)));
    // 0x34d898: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x34d898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34d89c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x34d89cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x34d8a0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x34d8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34d8a4: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x34d8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x34d8a8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34d8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34d8ac: 0x8c424378  lw          $v0, 0x4378($v0)
    ctx->pc = 0x34d8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x34d8b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34D8B0u;
    {
        const bool branch_taken_0x34d8b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34D8B0u;
            // 0x34d8b4: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d8b0) {
            ctx->pc = 0x34D8CCu;
            goto label_34d8cc;
        }
    }
    ctx->pc = 0x34D8B8u;
    // 0x34d8b8: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x34d8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x34d8bc: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x34D8BCu;
    SET_GPR_U32(ctx, 31, 0x34D8C4u);
    ctx->pc = 0x34D8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D8BCu;
            // 0x34d8c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D8C4u; }
        if (ctx->pc != 0x34D8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D8C4u; }
        if (ctx->pc != 0x34D8C4u) { return; }
    }
    ctx->pc = 0x34D8C4u;
label_34d8c4:
    // 0x34d8c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x34D8C4u;
    {
        const bool branch_taken_0x34d8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34d8c4) {
            ctx->pc = 0x34D8E0u;
            goto label_34d8e0;
        }
    }
    ctx->pc = 0x34D8CCu;
label_34d8cc:
    // 0x34d8cc: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x34d8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x34d8d0: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x34D8D0u;
    SET_GPR_U32(ctx, 31, 0x34D8D8u);
    ctx->pc = 0x34D8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D8D0u;
            // 0x34d8d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D8D8u; }
        if (ctx->pc != 0x34D8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D8D8u; }
        if (ctx->pc != 0x34D8D8u) { return; }
    }
    ctx->pc = 0x34D8D8u;
label_34d8d8:
    // 0x34d8d8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34d8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34d8dc: 0xac40fe50  sw          $zero, -0x1B0($v0)
    ctx->pc = 0x34d8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966864), GPR_U32(ctx, 0));
label_34d8e0:
    // 0x34d8e0: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x34d8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x34d8e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34d8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34d8e8: 0xc082678  jal         func_2099E0
    ctx->pc = 0x34D8E8u;
    SET_GPR_U32(ctx, 31, 0x34D8F0u);
    ctx->pc = 0x34D8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D8E8u;
            // 0x34d8ec: 0x24844030  addiu       $a0, $a0, 0x4030 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (runtime->hasFunction(0x2099E0u)) {
        auto targetFn = runtime->lookupFunction(0x2099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D8F0u; }
        if (ctx->pc != 0x34D8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099E0_0x2099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D8F0u; }
        if (ctx->pc != 0x34D8F0u) { return; }
    }
    ctx->pc = 0x34D8F0u;
label_34d8f0:
    // 0x34d8f0: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34d8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34d8f4: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34D8F4u;
    SET_GPR_U32(ctx, 31, 0x34D8FCu);
    ctx->pc = 0x34D8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D8F4u;
            // 0x34d8f8: 0x2484d910  addiu       $a0, $a0, -0x26F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D8FCu; }
        if (ctx->pc != 0x34D8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D8FCu; }
        if (ctx->pc != 0x34D8FCu) { return; }
    }
    ctx->pc = 0x34D8FCu;
label_34d8fc:
    // 0x34d8fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34d8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34d900:
    // 0x34d900: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34d900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d904: 0x3e00008  jr          $ra
    ctx->pc = 0x34D904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34D904u;
            // 0x34d908: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34D90Cu;
    // 0x34d90c: 0x0  nop
    ctx->pc = 0x34d90cu;
    // NOP
label_34d910:
    // 0x34d910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34d910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34d914: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34d914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d918: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34d918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34d91c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x34d91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34d920: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x34D920u;
    SET_GPR_U32(ctx, 31, 0x34D928u);
    ctx->pc = 0x34D924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D920u;
            // 0x34d924: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D928u; }
        if (ctx->pc != 0x34D928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D928u; }
        if (ctx->pc != 0x34D928u) { return; }
    }
    ctx->pc = 0x34D928u;
label_34d928:
    // 0x34d928: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x34d928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x34d92c: 0x24053120  addiu       $a1, $zero, 0x3120
    ctx->pc = 0x34d92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12576));
    // 0x34d930: 0x8c43dd80  lw          $v1, -0x2280($v0)
    ctx->pc = 0x34d930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958464)));
    // 0x34d934: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x34d934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34d938: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x34d938u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34d93c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x34d93cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x34d940: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x34d940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34d944: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x34d944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x34d948: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x34d948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34d94c: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x34d94cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x34d950: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34d950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34d954: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x34d954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x34d958: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x34D958u;
    SET_GPR_U32(ctx, 31, 0x34D960u);
    ctx->pc = 0x34D95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D958u;
            // 0x34d95c: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (runtime->hasFunction(0x20FE58u)) {
        auto targetFn = runtime->lookupFunction(0x20FE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D960u; }
        if (ctx->pc != 0x34D960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FE58_0x20fe58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D960u; }
        if (ctx->pc != 0x34D960u) { return; }
    }
    ctx->pc = 0x34D960u;
label_34d960:
    // 0x34d960: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34d960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34d964: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x34D964u;
    SET_GPR_U32(ctx, 31, 0x34D96Cu);
    ctx->pc = 0x34D968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D964u;
            // 0x34d968: 0x2484d980  addiu       $a0, $a0, -0x2680 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (runtime->hasFunction(0x347260u)) {
        auto targetFn = runtime->lookupFunction(0x347260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D96Cu; }
        if (ctx->pc != 0x34D96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347260_0x347260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D96Cu; }
        if (ctx->pc != 0x34D96Cu) { return; }
    }
    ctx->pc = 0x34D96Cu;
label_34d96c:
    // 0x34d96c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34d96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d970: 0x3e00008  jr          $ra
    ctx->pc = 0x34D970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34D970u;
            // 0x34d974: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34D978u;
    // 0x34d978: 0x0  nop
    ctx->pc = 0x34d978u;
    // NOP
    // 0x34d97c: 0x0  nop
    ctx->pc = 0x34d97cu;
    // NOP
label_34d980:
    // 0x34d980: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34d980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34d984: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x34d984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x34d988: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34d988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34d98c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34d98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34d990: 0x3c1201df  lui         $s2, 0x1DF
    ctx->pc = 0x34d990u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)479 << 16));
    // 0x34d994: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34d994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34d998: 0xc0d0c20  jal         func_343080
    ctx->pc = 0x34D998u;
    SET_GPR_U32(ctx, 31, 0x34D9A0u);
    ctx->pc = 0x34D99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34D998u;
            // 0x34d99c: 0x2652ddc0  addiu       $s2, $s2, -0x2240 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294958528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x343080u;
    if (runtime->hasFunction(0x343080u)) {
        auto targetFn = runtime->lookupFunction(0x343080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D9A0u; }
        if (ctx->pc != 0x34D9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00343080_0x343080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34D9A0u; }
        if (ctx->pc != 0x34D9A0u) { return; }
    }
    ctx->pc = 0x34D9A0u;
label_34d9a0:
    // 0x34d9a0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x34d9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34d9a4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34d9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34d9a8: 0xac4342c0  sw          $v1, 0x42C0($v0)
    ctx->pc = 0x34d9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17088), GPR_U32(ctx, 3));
    // 0x34d9ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x34d9acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d9b0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34d9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34d9b4: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x34d9b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x34d9b8: 0xac4342c4  sw          $v1, 0x42C4($v0)
    ctx->pc = 0x34d9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17092), GPR_U32(ctx, 3));
    // 0x34d9bc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34d9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34d9c0: 0xac4342c8  sw          $v1, 0x42C8($v0)
    ctx->pc = 0x34d9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17096), GPR_U32(ctx, 3));
    // 0x34d9c4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34d9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34d9c8: 0xac4342cc  sw          $v1, 0x42CC($v0)
    ctx->pc = 0x34d9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17100), GPR_U32(ctx, 3));
    // 0x34d9cc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34d9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34d9d0: 0xac4342d0  sw          $v1, 0x42D0($v0)
    ctx->pc = 0x34d9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17104), GPR_U32(ctx, 3));
    // 0x34d9d4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34d9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34d9d8: 0x1a00001f  blez        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x34D9D8u;
    {
        const bool branch_taken_0x34d9d8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x34D9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34D9D8u;
            // 0x34d9dc: 0xac4342d4  sw          $v1, 0x42D4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d9d8) {
            ctx->pc = 0x34DA58u;
            goto label_34da58;
        }
    }
    ctx->pc = 0x34D9E0u;
label_34d9e0:
    // 0x34d9e0: 0x8245000c  lb          $a1, 0xC($s2)
    ctx->pc = 0x34d9e0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x34d9e4: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34d9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34d9e8: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x34d9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x34d9ec: 0x8c474068  lw          $a3, 0x4068($v0)
    ctx->pc = 0x34d9ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16488)));
    // 0x34d9f0: 0x248442c0  addiu       $a0, $a0, 0x42C0
    ctx->pc = 0x34d9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17088));
    // 0x34d9f4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x34d9f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34d9f8: 0x24a9ffcf  addiu       $t1, $a1, -0x31
    ctx->pc = 0x34d9f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967247));
    // 0x34d9fc: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34d9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34da00: 0x93080  sll         $a2, $t1, 2
    ctx->pc = 0x34da00u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x34da04: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34da04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34da08: 0xc94821  addu        $t1, $a2, $t1
    ctx->pc = 0x34da08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x34da0c: 0x2645000c  addiu       $a1, $s2, 0xC
    ctx->pc = 0x34da0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x34da10: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x34da10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x34da14: 0x948c0  sll         $t1, $t1, 3
    ctx->pc = 0x34da14u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x34da18: 0xe92021  addu        $a0, $a3, $t1
    ctx->pc = 0x34da18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x34da1c: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x34da1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x34da20: 0x8c634068  lw          $v1, 0x4068($v1)
    ctx->pc = 0x34da20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16488)));
    // 0x34da24: 0x8e470144  lw          $a3, 0x144($s2)
    ctx->pc = 0x34da24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 324)));
    // 0x34da28: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x34da28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x34da2c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x34da2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x34da30: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x34da30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x34da34: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x34da34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x34da38: 0x8c424068  lw          $v0, 0x4068($v0)
    ctx->pc = 0x34da38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16488)));
    // 0x34da3c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x34da3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x34da40: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x34DA40u;
    SET_GPR_U32(ctx, 31, 0x34DA48u);
    ctx->pc = 0x34DA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34DA40u;
            // 0x34da44: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DA48u; }
        if (ctx->pc != 0x34DA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DA48u; }
        if (ctx->pc != 0x34DA48u) { return; }
    }
    ctx->pc = 0x34DA48u;
label_34da48:
    // 0x34da48: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x34da48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x34da4c: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x34da4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x34da50: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x34DA50u;
    {
        const bool branch_taken_0x34da50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34DA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34DA50u;
            // 0x34da54: 0x26520184  addiu       $s2, $s2, 0x184 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 388));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34da50) {
            ctx->pc = 0x34D9E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34d9e0;
        }
    }
    ctx->pc = 0x34DA58u;
label_34da58:
    // 0x34da58: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x34da58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x34da5c: 0x8c44dd90  lw          $a0, -0x2270($v0)
    ctx->pc = 0x34da5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958480)));
    // 0x34da60: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34da60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34da64: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x34da64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x34da68: 0x8c424068  lw          $v0, 0x4068($v0)
    ctx->pc = 0x34da68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16488)));
    // 0x34da6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34da6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34da70: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x34da70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x34da74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34da74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34da78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34da78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34da7c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x34DA7Cu;
    {
        const bool branch_taken_0x34da7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34da7c) {
            ctx->pc = 0x34DA80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34DA7Cu;
            // 0x34da80: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34DA98u;
            goto label_34da98;
        }
    }
    ctx->pc = 0x34DA84u;
    // 0x34da84: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34da84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34da88: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34DA88u;
    SET_GPR_U32(ctx, 31, 0x34DA90u);
    ctx->pc = 0x34DA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34DA88u;
            // 0x34da8c: 0x248487c0  addiu       $a0, $a0, -0x7840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DA90u; }
        if (ctx->pc != 0x34DA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DA90u; }
        if (ctx->pc != 0x34DA90u) { return; }
    }
    ctx->pc = 0x34DA90u;
label_34da90:
    // 0x34da90: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x34DA90u;
    {
        const bool branch_taken_0x34da90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34DA90u;
            // 0x34da94: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34da90) {
            ctx->pc = 0x34DB3Cu;
            goto label_34db3c;
        }
    }
    ctx->pc = 0x34DA98u;
label_34da98:
    // 0x34da98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34da98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34da9c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x34DA9Cu;
    SET_GPR_U32(ctx, 31, 0x34DAA4u);
    ctx->pc = 0x34DAA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34DA9Cu;
            // 0x34daa0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DAA4u; }
        if (ctx->pc != 0x34DAA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DAA4u; }
        if (ctx->pc != 0x34DAA4u) { return; }
    }
    ctx->pc = 0x34DAA4u;
label_34daa4:
    // 0x34daa4: 0x3c0301df  lui         $v1, 0x1DF
    ctx->pc = 0x34daa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)479 << 16));
    // 0x34daa8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34daac: 0x8c66dd90  lw          $a2, -0x2270($v1)
    ctx->pc = 0x34daacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294958480)));
    // 0x34dab0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x34dab0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x34dab4: 0x8c474068  lw          $a3, 0x4068($v0)
    ctx->pc = 0x34dab4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16488)));
    // 0x34dab8: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x34dab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x34dabc: 0x24a550c0  addiu       $a1, $a1, 0x50C0
    ctx->pc = 0x34dabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20672));
    // 0x34dac0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x34dac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x34dac4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x34dac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x34dac8: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x34dac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x34dacc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x34daccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x34dad0: 0x8c42dd80  lw          $v0, -0x2280($v0)
    ctx->pc = 0x34dad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958464)));
    // 0x34dad4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x34dad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x34dad8: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x34dad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x34dadc: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x34dadcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x34dae0: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x34DAE0u;
    SET_GPR_U32(ctx, 31, 0x34DAE8u);
    ctx->pc = 0x34DAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34DAE0u;
            // 0x34dae4: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DAE8u; }
        if (ctx->pc != 0x34DAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DAE8u; }
        if (ctx->pc != 0x34DAE8u) { return; }
    }
    ctx->pc = 0x34DAE8u;
label_34dae8:
    // 0x34dae8: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x34dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x34daec: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34daecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34daf0: 0x8c48dd90  lw          $t0, -0x2270($v0)
    ctx->pc = 0x34daf0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958480)));
    // 0x34daf4: 0x24053130  addiu       $a1, $zero, 0x3130
    ctx->pc = 0x34daf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12592));
    // 0x34daf8: 0x8c694068  lw          $t1, 0x4068($v1)
    ctx->pc = 0x34daf8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16488)));
    // 0x34dafc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x34dafcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34db00: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x34db00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34db04: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34db04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34db08: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x34db08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x34db0c: 0x3c0301df  lui         $v1, 0x1DF
    ctx->pc = 0x34db0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)479 << 16));
    // 0x34db10: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x34db10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x34db14: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x34db14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x34db18: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x34db18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x34db1c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x34db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x34db20: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x34db20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x34db24: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x34DB24u;
    SET_GPR_U32(ctx, 31, 0x34DB2Cu);
    ctx->pc = 0x34DB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34DB24u;
            // 0x34db28: 0xac62dd80  sw          $v0, -0x2280($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294958464), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (runtime->hasFunction(0x20FE58u)) {
        auto targetFn = runtime->lookupFunction(0x20FE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DB2Cu; }
        if (ctx->pc != 0x34DB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FE58_0x20fe58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DB2Cu; }
        if (ctx->pc != 0x34DB2Cu) { return; }
    }
    ctx->pc = 0x34DB2Cu;
label_34db2c:
    // 0x34db2c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34db2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34db30: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x34DB30u;
    SET_GPR_U32(ctx, 31, 0x34DB38u);
    ctx->pc = 0x34DB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34DB30u;
            // 0x34db34: 0x2484db50  addiu       $a0, $a0, -0x24B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (runtime->hasFunction(0x347260u)) {
        auto targetFn = runtime->lookupFunction(0x347260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DB38u; }
        if (ctx->pc != 0x34DB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347260_0x347260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DB38u; }
        if (ctx->pc != 0x34DB38u) { return; }
    }
    ctx->pc = 0x34DB38u;
label_34db38:
    // 0x34db38: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x34db38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_34db3c:
    // 0x34db3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34db3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34db40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34db40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34db44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34db44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34db48: 0x3e00008  jr          $ra
    ctx->pc = 0x34DB48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34DB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34DB48u;
            // 0x34db4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34DB50u;
label_34db50:
    // 0x34db50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34db50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34db54: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x34db54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x34db58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34db58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34db5c: 0x24844420  addiu       $a0, $a0, 0x4420
    ctx->pc = 0x34db5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17440));
    // 0x34db60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34db60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34db64: 0x3c1001df  lui         $s0, 0x1DF
    ctx->pc = 0x34db64u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)479 << 16));
    // 0x34db68: 0x2610ddc0  addiu       $s0, $s0, -0x2240
    ctx->pc = 0x34db68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958528));
    // 0x34db6c: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x34DB6Cu;
    SET_GPR_U32(ctx, 31, 0x34DB74u);
    ctx->pc = 0x34DB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34DB6Cu;
            // 0x34db70: 0x2605000c  addiu       $a1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DB74u; }
        if (ctx->pc != 0x34DB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DB74u; }
        if (ctx->pc != 0x34DB74u) { return; }
    }
    ctx->pc = 0x34DB74u;
label_34db74:
    // 0x34db74: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x34db74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x34db78: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34db78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34db7c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34db7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34db80: 0x2484dba0  addiu       $a0, $a0, -0x2460
    ctx->pc = 0x34db80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957984));
    // 0x34db84: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34DB84u;
    SET_GPR_U32(ctx, 31, 0x34DB8Cu);
    ctx->pc = 0x34DB88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34DB84u;
            // 0x34db88: 0xac434520  sw          $v1, 0x4520($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17696), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DB8Cu; }
        if (ctx->pc != 0x34DB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DB8Cu; }
        if (ctx->pc != 0x34DB8Cu) { return; }
    }
    ctx->pc = 0x34DB8Cu;
label_34db8c:
    // 0x34db8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34db8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34db90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34db90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34db94: 0x3e00008  jr          $ra
    ctx->pc = 0x34DB94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34DB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34DB94u;
            // 0x34db98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34DB9Cu;
    // 0x34db9c: 0x0  nop
    ctx->pc = 0x34db9cu;
    // NOP
label_34dba0:
    // 0x34dba0: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x34dba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34dba4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x34dba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x34dba8: 0xac449478  sw          $a0, -0x6B88($v0)
    ctx->pc = 0x34dba8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294939768), GPR_U32(ctx, 4));
    // 0x34dbac: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34dbacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34dbb0: 0x2463ff88  addiu       $v1, $v1, -0x78
    ctx->pc = 0x34dbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967176));
    // 0x34dbb4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34dbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34dbb8: 0xac43eab8  sw          $v1, -0x1548($v0)
    ctx->pc = 0x34dbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961848), GPR_U32(ctx, 3));
    // 0x34dbbc: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x34dbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x34dbc0: 0x24844420  addiu       $a0, $a0, 0x4420
    ctx->pc = 0x34dbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17440));
    // 0x34dbc4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34dbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34dbc8: 0xac44ead0  sw          $a0, -0x1530($v0)
    ctx->pc = 0x34dbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961872), GPR_U32(ctx, 4));
    // 0x34dbcc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34dbccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34dbd0: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x34dbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x34dbd4: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x34dbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x34dbd8: 0x246321d0  addiu       $v1, $v1, 0x21D0
    ctx->pc = 0x34dbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8656));
    // 0x34dbdc: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34dbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34dbe0: 0xac4340a0  sw          $v1, 0x40A0($v0)
    ctx->pc = 0x34dbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16544), GPR_U32(ctx, 3));
    // 0x34dbe4: 0x24846f30  addiu       $a0, $a0, 0x6F30
    ctx->pc = 0x34dbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28464));
    // 0x34dbe8: 0x80558d4  j           func_156350
    ctx->pc = 0x34DBE8u;
    ctx->pc = 0x34DBECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34DBE8u;
            // 0x34dbec: 0x24a5dbf0  addiu       $a1, $a1, -0x2410 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (runtime->hasFunction(0x156350u)) {
        auto targetFn = runtime->lookupFunction(0x156350u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00156350_0x156350(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x34DBF0u;
label_34dbf0:
    // 0x34dbf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34dbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34dbf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34dbf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34dbf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34dbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34dbfc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x34dbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34dc00: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x34DC00u;
    SET_GPR_U32(ctx, 31, 0x34DC08u);
    ctx->pc = 0x34DC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34DC00u;
            // 0x34dc04: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DC08u; }
        if (ctx->pc != 0x34DC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DC08u; }
        if (ctx->pc != 0x34DC08u) { return; }
    }
    ctx->pc = 0x34DC08u;
label_34dc08:
    // 0x34dc08: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x34dc08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x34dc0c: 0x3c0501df  lui         $a1, 0x1DF
    ctx->pc = 0x34dc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)479 << 16));
    // 0x34dc10: 0x8c42dd80  lw          $v0, -0x2280($v0)
    ctx->pc = 0x34dc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958464)));
    // 0x34dc14: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x34dc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x34dc18: 0x24a5dda0  addiu       $a1, $a1, -0x2260
    ctx->pc = 0x34dc18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958496));
    // 0x34dc1c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x34dc1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x34dc20: 0xc049c48  jal         func_127120
    ctx->pc = 0x34DC20u;
    SET_GPR_U32(ctx, 31, 0x34DC28u);
    ctx->pc = 0x34DC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34DC20u;
            // 0x34dc24: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DC28u; }
        if (ctx->pc != 0x34DC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DC28u; }
        if (ctx->pc != 0x34DC28u) { return; }
    }
    ctx->pc = 0x34DC28u;
label_34dc28:
    // 0x34dc28: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x34dc28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x34dc2c: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x34dc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x34dc30: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x34DC30u;
    SET_GPR_U32(ctx, 31, 0x34DC38u);
    ctx->pc = 0x34DC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34DC30u;
            // 0x34dc34: 0x24a55200  addiu       $a1, $a1, 0x5200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DC38u; }
        if (ctx->pc != 0x34DC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DC38u; }
        if (ctx->pc != 0x34DC38u) { return; }
    }
    ctx->pc = 0x34DC38u;
label_34dc38:
    // 0x34dc38: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34dc38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34dc3c: 0x24051010  addiu       $a1, $zero, 0x1010
    ctx->pc = 0x34dc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4112));
    // 0x34dc40: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x34dc40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x34dc44: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x34dc44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34dc48: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x34DC48u;
    SET_GPR_U32(ctx, 31, 0x34DC50u);
    ctx->pc = 0x34DC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34DC48u;
            // 0x34dc4c: 0x2407002c  addiu       $a3, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (runtime->hasFunction(0x20FE58u)) {
        auto targetFn = runtime->lookupFunction(0x20FE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DC50u; }
        if (ctx->pc != 0x34DC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FE58_0x20fe58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DC50u; }
        if (ctx->pc != 0x34DC50u) { return; }
    }
    ctx->pc = 0x34DC50u;
label_34dc50:
    // 0x34dc50: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34dc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34dc54: 0x8c42fe50  lw          $v0, -0x1B0($v0)
    ctx->pc = 0x34dc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966864)));
    // 0x34dc58: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x34dc58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x34dc5c: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x34DC5Cu;
    {
        const bool branch_taken_0x34dc5c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x34dc5c) {
            ctx->pc = 0x34DCACu;
            goto label_34dcac;
        }
    }
    ctx->pc = 0x34DC64u;
    // 0x34dc64: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34dc64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34dc68: 0x9042bea9  lbu         $v0, -0x4157($v0)
    ctx->pc = 0x34dc68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950569)));
    // 0x34dc6c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x34DC6Cu;
    {
        const bool branch_taken_0x34dc6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34dc6c) {
            ctx->pc = 0x34DC98u;
            goto label_34dc98;
        }
    }
    ctx->pc = 0x34DC74u;
    // 0x34dc74: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x34dc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x34dc78: 0x8c42dd90  lw          $v0, -0x2270($v0)
    ctx->pc = 0x34dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958480)));
    // 0x34dc7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34DC7Cu;
    {
        const bool branch_taken_0x34dc7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34dc7c) {
            ctx->pc = 0x34DC98u;
            goto label_34dc98;
        }
    }
    ctx->pc = 0x34DC84u;
    // 0x34dc84: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34dc84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34dc88: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x34DC88u;
    SET_GPR_U32(ctx, 31, 0x34DC90u);
    ctx->pc = 0x34DC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34DC88u;
            // 0x34dc8c: 0x2484f670  addiu       $a0, $a0, -0x990 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (runtime->hasFunction(0x347260u)) {
        auto targetFn = runtime->lookupFunction(0x347260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DC90u; }
        if (ctx->pc != 0x34DC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347260_0x347260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DC90u; }
        if (ctx->pc != 0x34DC90u) { return; }
    }
    ctx->pc = 0x34DC90u;
label_34dc90:
    // 0x34dc90: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x34DC90u;
    {
        const bool branch_taken_0x34dc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34DC90u;
            // 0x34dc94: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dc90) {
            ctx->pc = 0x34DCBCu;
            goto label_34dcbc;
        }
    }
    ctx->pc = 0x34DC98u;
label_34dc98:
    // 0x34dc98: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34dc98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34dc9c: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x34DC9Cu;
    SET_GPR_U32(ctx, 31, 0x34DCA4u);
    ctx->pc = 0x34DCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34DC9Cu;
            // 0x34dca0: 0x2484dce0  addiu       $a0, $a0, -0x2320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (runtime->hasFunction(0x347260u)) {
        auto targetFn = runtime->lookupFunction(0x347260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DCA4u; }
        if (ctx->pc != 0x34DCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347260_0x347260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DCA4u; }
        if (ctx->pc != 0x34DCA4u) { return; }
    }
    ctx->pc = 0x34DCA4u;
label_34dca4:
    // 0x34dca4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34DCA4u;
    {
        const bool branch_taken_0x34dca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34dca4) {
            ctx->pc = 0x34DCB8u;
            goto label_34dcb8;
        }
    }
    ctx->pc = 0x34DCACu;
label_34dcac:
    // 0x34dcac: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34dcacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34dcb0: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x34DCB0u;
    SET_GPR_U32(ctx, 31, 0x34DCB8u);
    ctx->pc = 0x34DCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34DCB0u;
            // 0x34dcb4: 0x2484dcd0  addiu       $a0, $a0, -0x2330 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (runtime->hasFunction(0x347260u)) {
        auto targetFn = runtime->lookupFunction(0x347260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DCB8u; }
        if (ctx->pc != 0x34DCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347260_0x347260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DCB8u; }
        if (ctx->pc != 0x34DCB8u) { return; }
    }
    ctx->pc = 0x34DCB8u;
label_34dcb8:
    // 0x34dcb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34dcb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34dcbc:
    // 0x34dcbc: 0x3e00008  jr          $ra
    ctx->pc = 0x34DCBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34DCC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34DCBCu;
            // 0x34dcc0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34DCC4u;
    // 0x34dcc4: 0x0  nop
    ctx->pc = 0x34dcc4u;
    // NOP
    // 0x34dcc8: 0x0  nop
    ctx->pc = 0x34dcc8u;
    // NOP
    // 0x34dccc: 0x0  nop
    ctx->pc = 0x34dcccu;
    // NOP
label_34dcd0:
    // 0x34dcd0: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34dcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34dcd4: 0x8082674  j           func_2099D0
    ctx->pc = 0x34DCD4u;
    ctx->pc = 0x34DCD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34DCD4u;
            // 0x34dcd8: 0x2484e0e0  addiu       $a0, $a0, -0x1F20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002099D0_0x2099d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x34DCDCu;
    // 0x34dcdc: 0x0  nop
    ctx->pc = 0x34dcdcu;
    // NOP
label_34dce0:
    // 0x34dce0: 0x27bdfc60  addiu       $sp, $sp, -0x3A0
    ctx->pc = 0x34dce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966368));
    // 0x34dce4: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x34dce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x34dce8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34dce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34dcec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34dcecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34dcf0: 0x8c42dd90  lw          $v0, -0x2270($v0)
    ctx->pc = 0x34dcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958480)));
    // 0x34dcf4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34DCF4u;
    {
        const bool branch_taken_0x34dcf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34dcf4) {
            ctx->pc = 0x34DD08u;
            goto label_34dd08;
        }
    }
    ctx->pc = 0x34DCFCu;
    // 0x34dcfc: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x34dcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x34dd00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x34DD00u;
    {
        const bool branch_taken_0x34dd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DD04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34DD00u;
            // 0x34dd04: 0x904294f0  lbu         $v0, -0x6B10($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939888)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dd00) {
            ctx->pc = 0x34DD10u;
            goto label_34dd10;
        }
    }
    ctx->pc = 0x34DD08u;
label_34dd08:
    // 0x34dd08: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x34dd08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x34dd0c: 0x904294f8  lbu         $v0, -0x6B08($v0)
    ctx->pc = 0x34dd0cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939896)));
label_34dd10:
    // 0x34dd10: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x34dd10u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34dd14: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x34dd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34dd18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34dd18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34dd1c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x34DD1Cu;
    SET_GPR_U32(ctx, 31, 0x34DD24u);
    ctx->pc = 0x34DD20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34DD1Cu;
            // 0x34dd20: 0x2406037c  addiu       $a2, $zero, 0x37C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DD24u; }
        if (ctx->pc != 0x34DD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DD24u; }
        if (ctx->pc != 0x34DD24u) { return; }
    }
    ctx->pc = 0x34DD24u;
label_34dd24:
    // 0x34dd24: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x34dd24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x34dd28: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34dd28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34dd2c: 0x9064beaa  lbu         $a0, -0x4156($v1)
    ctx->pc = 0x34dd2cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950570)));
    // 0x34dd30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x34dd30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34dd34: 0x9046bea9  lbu         $a2, -0x4157($v0)
    ctx->pc = 0x34dd34u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950569)));
    // 0x34dd38: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x34dd38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x34dd3c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x34dd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x34dd40: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x34dd40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x34dd44: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x34dd44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x34dd48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34dd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34dd4c: 0x9063bea8  lbu         $v1, -0x4158($v1)
    ctx->pc = 0x34dd4cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950568)));
    // 0x34dd50: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x34dd50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x34dd54: 0x43a00  sll         $a3, $a0, 8
    ctx->pc = 0x34dd54u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x34dd58: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34dd58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34dd5c: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x34dd5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x34dd60: 0xa0434308  sb          $v1, 0x4308($v0)
    ctx->pc = 0x34dd60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17160), (uint8_t)GPR_U32(ctx, 3));
    // 0x34dd64: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x34dd64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x34dd68: 0x71200  sll         $v0, $a3, 8
    ctx->pc = 0x34dd68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x34dd6c: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x34dd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x34dd70: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x34dd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x34dd74: 0x24a550c0  addiu       $a1, $a1, 0x50C0
    ctx->pc = 0x34dd74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20672));
    // 0x34dd78: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x34dd78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x34dd7c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x34dd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x34dd80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34dd84: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x34DD84u;
    SET_GPR_U32(ctx, 31, 0x34DD8Cu);
    ctx->pc = 0x34DD88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34DD84u;
            // 0x34dd88: 0xafa200fc  sw          $v0, 0xFC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DD8Cu; }
        if (ctx->pc != 0x34DD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DD8Cu; }
        if (ctx->pc != 0x34DD8Cu) { return; }
    }
    ctx->pc = 0x34DD8Cu;
label_34dd8c:
    // 0x34dd8c: 0x3c05009f  lui         $a1, 0x9F
    ctx->pc = 0x34dd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)159 << 16));
    // 0x34dd90: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x34dd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34dd94: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x34DD94u;
    SET_GPR_U32(ctx, 31, 0x34DD9Cu);
    ctx->pc = 0x34DD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34DD94u;
            // 0x34dd98: 0x24a59550  addiu       $a1, $a1, -0x6AB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DD9Cu; }
        if (ctx->pc != 0x34DD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DD9Cu; }
        if (ctx->pc != 0x34DD9Cu) { return; }
    }
    ctx->pc = 0x34DD9Cu;
label_34dd9c:
    // 0x34dd9c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34dd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34dda0: 0x24051110  addiu       $a1, $zero, 0x1110
    ctx->pc = 0x34dda0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4368));
    // 0x34dda4: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x34dda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x34dda8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x34dda8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34ddac: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x34DDACu;
    SET_GPR_U32(ctx, 31, 0x34DDB4u);
    ctx->pc = 0x34DDB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34DDACu;
            // 0x34ddb0: 0x2407037c  addiu       $a3, $zero, 0x37C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (runtime->hasFunction(0x20FE58u)) {
        auto targetFn = runtime->lookupFunction(0x20FE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DDB4u; }
        if (ctx->pc != 0x34DDB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FE58_0x20fe58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DDB4u; }
        if (ctx->pc != 0x34DDB4u) { return; }
    }
    ctx->pc = 0x34DDB4u;
label_34ddb4:
    // 0x34ddb4: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34ddb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34ddb8: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x34DDB8u;
    SET_GPR_U32(ctx, 31, 0x34DDC0u);
    ctx->pc = 0x34DDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34DDB8u;
            // 0x34ddbc: 0x24840150  addiu       $a0, $a0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (runtime->hasFunction(0x347260u)) {
        auto targetFn = runtime->lookupFunction(0x347260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DDC0u; }
        if (ctx->pc != 0x34DDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347260_0x347260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DDC0u; }
        if (ctx->pc != 0x34DDC0u) { return; }
    }
    ctx->pc = 0x34DDC0u;
label_34ddc0:
    // 0x34ddc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34ddc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34ddc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34ddc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34ddc8: 0x3e00008  jr          $ra
    ctx->pc = 0x34DDC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34DDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34DDC8u;
            // 0x34ddcc: 0x27bd03a0  addiu       $sp, $sp, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34DDD0u;
label_34ddd0:
    // 0x34ddd0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x34ddd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x34ddd4: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x34ddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x34ddd8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x34ddd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x34dddc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x34dddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x34dde0: 0x8c43dd90  lw          $v1, -0x2270($v0)
    ctx->pc = 0x34dde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958480)));
    // 0x34dde4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x34dde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34dde8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34DDE8u;
    {
        const bool branch_taken_0x34dde8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x34dde8) {
            ctx->pc = 0x34DDF8u;
            goto label_34ddf8;
        }
    }
    ctx->pc = 0x34DDF0u;
    // 0x34ddf0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x34ddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x34ddf4: 0xac4095a8  sw          $zero, -0x6A58($v0)
    ctx->pc = 0x34ddf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940072), GPR_U32(ctx, 0));
label_34ddf8:
    // 0x34ddf8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x34ddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x34ddfc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x34ddfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34de00: 0x8c4595a0  lw          $a1, -0x6A60($v0)
    ctx->pc = 0x34de00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940064)));
    // 0x34de04: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x34de04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x34de08: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x34de08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x34de0c: 0x8c4495a4  lw          $a0, -0x6A5C($v0)
    ctx->pc = 0x34de0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940068)));
    // 0x34de10: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x34de10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x34de14: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x34de14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x34de18: 0x8c4395a8  lw          $v1, -0x6A58($v0)
    ctx->pc = 0x34de18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940072)));
    // 0x34de1c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x34de1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x34de20: 0x24845260  addiu       $a0, $a0, 0x5260
    ctx->pc = 0x34de20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21088));
    // 0x34de24: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x34de24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x34de28: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x34de28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x34de2c: 0x8c4295ac  lw          $v0, -0x6A54($v0)
    ctx->pc = 0x34de2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940076)));
    // 0x34de30: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x34de30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34de34: 0xc043e52  jal         func_10F948
    ctx->pc = 0x34DE34u;
    SET_GPR_U32(ctx, 31, 0x34DE3Cu);
    ctx->pc = 0x34DE38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34DE34u;
            // 0x34de38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DE3Cu; }
        if (ctx->pc != 0x34DE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DE3Cu; }
        if (ctx->pc != 0x34DE3Cu) { return; }
    }
    ctx->pc = 0x34DE3Cu;
label_34de3c:
    // 0x34de3c: 0xc0d0bac  jal         func_342EB0
    ctx->pc = 0x34DE3Cu;
    SET_GPR_U32(ctx, 31, 0x34DE44u);
    ctx->pc = 0x342EB0u;
    if (runtime->hasFunction(0x342EB0u)) {
        auto targetFn = runtime->lookupFunction(0x342EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DE44u; }
        if (ctx->pc != 0x34DE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00342EB0_0x342eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DE44u; }
        if (ctx->pc != 0x34DE44u) { return; }
    }
    ctx->pc = 0x34DE44u;
label_34de44:
    // 0x34de44: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x34DE44u;
    {
        const bool branch_taken_0x34de44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34de44) {
            ctx->pc = 0x34DE50u;
            goto label_34de50;
        }
    }
    ctx->pc = 0x34DE4Cu;
    // 0x34de4c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x34de4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34de50:
    // 0x34de50: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34de50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34de54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34de54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34de58: 0x8c42fe50  lw          $v0, -0x1B0($v0)
    ctx->pc = 0x34de58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966864)));
    // 0x34de5c: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x34DE5Cu;
    {
        const bool branch_taken_0x34de5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x34de5c) {
            ctx->pc = 0x34DE60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34DE5Cu;
            // 0x34de60: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34DE6Cu;
            goto label_34de6c;
        }
    }
    ctx->pc = 0x34DE64u;
    // 0x34de64: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x34de64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34de68: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x34de68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_34de6c:
    // 0x34de6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34de6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34de70: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x34DE70u;
    SET_GPR_U32(ctx, 31, 0x34DE78u);
    ctx->pc = 0x34DE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34DE70u;
            // 0x34de74: 0x24060054  addiu       $a2, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DE78u; }
        if (ctx->pc != 0x34DE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DE78u; }
        if (ctx->pc != 0x34DE78u) { return; }
    }
    ctx->pc = 0x34DE78u;
label_34de78:
    // 0x34de78: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34de78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34de7c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34de7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34de80: 0x8c6340b0  lw          $v1, 0x40B0($v1)
    ctx->pc = 0x34de80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16560)));
    // 0x34de84: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x34de84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x34de88: 0x8c42fe50  lw          $v0, -0x1B0($v0)
    ctx->pc = 0x34de88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966864)));
    // 0x34de8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34de8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34de90: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x34de90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34de94: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x34de94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x34de98: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x34DE98u;
    SET_GPR_U32(ctx, 31, 0x34DEA0u);
    ctx->pc = 0x34DE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34DE98u;
            // 0x34de9c: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DEA0u; }
        if (ctx->pc != 0x34DEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DEA0u; }
        if (ctx->pc != 0x34DEA0u) { return; }
    }
    ctx->pc = 0x34DEA0u;
label_34dea0:
    // 0x34dea0: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x34dea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x34dea4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x34dea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x34dea8: 0x94429080  lhu         $v0, -0x6F80($v0)
    ctx->pc = 0x34dea8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294938752)));
    // 0x34deac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34deacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34deb0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x34deb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x34deb4: 0xafb0004c  sw          $s0, 0x4C($sp)
    ctx->pc = 0x34deb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 16));
    // 0x34deb8: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x34DEB8u;
    SET_GPR_U32(ctx, 31, 0x34DEC0u);
    ctx->pc = 0x34DEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34DEB8u;
            // 0x34debc: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DEC0u; }
        if (ctx->pc != 0x34DEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DEC0u; }
        if (ctx->pc != 0x34DEC0u) { return; }
    }
    ctx->pc = 0x34DEC0u;
label_34dec0:
    // 0x34dec0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34dec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34dec4: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x34dec4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x34dec8: 0x8c63fe50  lw          $v1, -0x1B0($v1)
    ctx->pc = 0x34dec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966864)));
    // 0x34decc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34deccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34ded0: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x34ded0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x34ded4: 0x24a54318  addiu       $a1, $a1, 0x4318
    ctx->pc = 0x34ded4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17176));
    // 0x34ded8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x34ded8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x34dedc: 0xc049c48  jal         func_127120
    ctx->pc = 0x34DEDCu;
    SET_GPR_U32(ctx, 31, 0x34DEE4u);
    ctx->pc = 0x34DEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34DEDCu;
            // 0x34dee0: 0xa043431c  sb          $v1, 0x431C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 17180), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DEE4u; }
        if (ctx->pc != 0x34DEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DEE4u; }
        if (ctx->pc != 0x34DEE4u) { return; }
    }
    ctx->pc = 0x34DEE4u;
label_34dee4:
    // 0x34dee4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34dee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34dee8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x34dee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x34deec: 0x9063431f  lbu         $v1, 0x431F($v1)
    ctx->pc = 0x34deecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 17183)));
    // 0x34def0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34def0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34def4: 0x3c0a01de  lui         $t2, 0x1DE
    ctx->pc = 0x34def4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)478 << 16));
    // 0x34def8: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x34def8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x34defc: 0x3c0601de  lui         $a2, 0x1DE
    ctx->pc = 0x34defcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)478 << 16));
    // 0x34df00: 0x3c0701de  lui         $a3, 0x1DE
    ctx->pc = 0x34df00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)478 << 16));
    // 0x34df04: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x34df04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x34df08: 0x3c0801de  lui         $t0, 0x1DE
    ctx->pc = 0x34df08u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)478 << 16));
    // 0x34df0c: 0x904b4320  lbu         $t3, 0x4320($v0)
    ctx->pc = 0x34df0cu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17184)));
    // 0x34df10: 0x3c0901de  lui         $t1, 0x1DE
    ctx->pc = 0x34df10u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)478 << 16));
    // 0x34df14: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34df14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34df18: 0xffab0008  sd          $t3, 0x8($sp)
    ctx->pc = 0x34df18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 11));
    // 0x34df1c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34df1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34df20: 0x914a4321  lbu         $t2, 0x4321($t2)
    ctx->pc = 0x34df20u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 17185)));
    // 0x34df24: 0xffaa0010  sd          $t2, 0x10($sp)
    ctx->pc = 0x34df24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 10));
    // 0x34df28: 0x90a54318  lbu         $a1, 0x4318($a1)
    ctx->pc = 0x34df28u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 17176)));
    // 0x34df2c: 0x90c64319  lbu         $a2, 0x4319($a2)
    ctx->pc = 0x34df2cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 17177)));
    // 0x34df30: 0x90e7431a  lbu         $a3, 0x431A($a3)
    ctx->pc = 0x34df30u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 17178)));
    // 0x34df34: 0x9108431b  lbu         $t0, 0x431B($t0)
    ctx->pc = 0x34df34u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 17179)));
    // 0x34df38: 0x9129431c  lbu         $t1, 0x431C($t1)
    ctx->pc = 0x34df38u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 17180)));
    // 0x34df3c: 0x906a431d  lbu         $t2, 0x431D($v1)
    ctx->pc = 0x34df3cu;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 17181)));
    // 0x34df40: 0x904b431e  lbu         $t3, 0x431E($v0)
    ctx->pc = 0x34df40u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17182)));
    // 0x34df44: 0xc043e52  jal         func_10F948
    ctx->pc = 0x34DF44u;
    SET_GPR_U32(ctx, 31, 0x34DF4Cu);
    ctx->pc = 0x34DF48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34DF44u;
            // 0x34df48: 0x24845280  addiu       $a0, $a0, 0x5280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DF4Cu; }
        if (ctx->pc != 0x34DF4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DF4Cu; }
        if (ctx->pc != 0x34DF4Cu) { return; }
    }
    ctx->pc = 0x34DF4Cu;
label_34df4c:
    // 0x34df4c: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x34df4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x34df50: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x34df50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x34df54: 0xac439478  sw          $v1, -0x6B88($v0)
    ctx->pc = 0x34df54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294939768), GPR_U32(ctx, 3));
    // 0x34df58: 0x24051160  addiu       $a1, $zero, 0x1160
    ctx->pc = 0x34df58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4448));
    // 0x34df5c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34df5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34df60: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x34df60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x34df64: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x34df64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x34df68: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x34DF68u;
    SET_GPR_U32(ctx, 31, 0x34DF70u);
    ctx->pc = 0x34DF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34DF68u;
            // 0x34df6c: 0x24070054  addiu       $a3, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (runtime->hasFunction(0x20FE58u)) {
        auto targetFn = runtime->lookupFunction(0x20FE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DF70u; }
        if (ctx->pc != 0x34DF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FE58_0x20fe58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DF70u; }
        if (ctx->pc != 0x34DF70u) { return; }
    }
    ctx->pc = 0x34DF70u;
label_34df70:
    // 0x34df70: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34df70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34df74: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x34DF74u;
    SET_GPR_U32(ctx, 31, 0x34DF7Cu);
    ctx->pc = 0x34DF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34DF74u;
            // 0x34df78: 0x2484df90  addiu       $a0, $a0, -0x2070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (runtime->hasFunction(0x347260u)) {
        auto targetFn = runtime->lookupFunction(0x347260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DF7Cu; }
        if (ctx->pc != 0x34DF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347260_0x347260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DF7Cu; }
        if (ctx->pc != 0x34DF7Cu) { return; }
    }
    ctx->pc = 0x34DF7Cu;
label_34df7c:
    // 0x34df7c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x34df7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34df80: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x34df80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34df84: 0x3e00008  jr          $ra
    ctx->pc = 0x34DF84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34DF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34DF84u;
            // 0x34df88: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34DF8Cu;
    // 0x34df8c: 0x0  nop
    ctx->pc = 0x34df8cu;
    // NOP
label_34df90:
    // 0x34df90: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34df90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34df94: 0x80d1c98  j           func_347260
    ctx->pc = 0x34DF94u;
    ctx->pc = 0x34DF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34DF94u;
            // 0x34df98: 0x2484dfa0  addiu       $a0, $a0, -0x2060 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (runtime->hasFunction(0x347260u)) {
        auto targetFn = runtime->lookupFunction(0x347260u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00347260_0x347260(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x34DF9Cu;
    // 0x34df9c: 0x0  nop
    ctx->pc = 0x34df9cu;
    // NOP
label_34dfa0:
    // 0x34dfa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34dfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34dfa4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34dfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34dfa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34dfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34dfac: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x34dfacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x34dfb0: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x34dfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x34dfb4: 0x8c42fe50  lw          $v0, -0x1B0($v0)
    ctx->pc = 0x34dfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966864)));
    // 0x34dfb8: 0xac649478  sw          $a0, -0x6B88($v1)
    ctx->pc = 0x34dfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294939768), GPR_U32(ctx, 4));
    // 0x34dfbc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34dfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34dfc0: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x34DFC0u;
    {
        const bool branch_taken_0x34dfc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x34dfc0) {
            ctx->pc = 0x34DFE4u;
            goto label_34dfe4;
        }
    }
    ctx->pc = 0x34DFC8u;
    // 0x34dfc8: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x34dfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x34dfcc: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x34dfccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x34dfd0: 0x24847010  addiu       $a0, $a0, 0x7010
    ctx->pc = 0x34dfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28688));
    // 0x34dfd4: 0xc0558d4  jal         func_156350
    ctx->pc = 0x34DFD4u;
    SET_GPR_U32(ctx, 31, 0x34DFDCu);
    ctx->pc = 0x34DFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34DFD4u;
            // 0x34dfd8: 0x24a5d4d0  addiu       $a1, $a1, -0x2B30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (runtime->hasFunction(0x156350u)) {
        auto targetFn = runtime->lookupFunction(0x156350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DFDCu; }
        if (ctx->pc != 0x34DFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156350_0x156350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DFDCu; }
        if (ctx->pc != 0x34DFDCu) { return; }
    }
    ctx->pc = 0x34DFDCu;
label_34dfdc:
    // 0x34dfdc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34DFDCu;
    {
        const bool branch_taken_0x34dfdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34DFDCu;
            // 0x34dfe0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dfdc) {
            ctx->pc = 0x34DFFCu;
            goto label_34dffc;
        }
    }
    ctx->pc = 0x34DFE4u;
label_34dfe4:
    // 0x34dfe4: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x34dfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x34dfe8: 0x3c050016  lui         $a1, 0x16
    ctx->pc = 0x34dfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22 << 16));
    // 0x34dfec: 0x24847010  addiu       $a0, $a0, 0x7010
    ctx->pc = 0x34dfecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28688));
    // 0x34dff0: 0xc0558d4  jal         func_156350
    ctx->pc = 0x34DFF0u;
    SET_GPR_U32(ctx, 31, 0x34DFF8u);
    ctx->pc = 0x34DFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34DFF0u;
            // 0x34dff4: 0x24a5db00  addiu       $a1, $a1, -0x2500 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (runtime->hasFunction(0x156350u)) {
        auto targetFn = runtime->lookupFunction(0x156350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DFF8u; }
        if (ctx->pc != 0x34DFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156350_0x156350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DFF8u; }
        if (ctx->pc != 0x34DFF8u) { return; }
    }
    ctx->pc = 0x34DFF8u;
label_34dff8:
    // 0x34dff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34dff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34dffc:
    // 0x34dffc: 0x3e00008  jr          $ra
    ctx->pc = 0x34DFFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34DFFCu;
            // 0x34e000: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34E004u;
    // 0x34e004: 0x0  nop
    ctx->pc = 0x34e004u;
    // NOP
    // 0x34e008: 0x0  nop
    ctx->pc = 0x34e008u;
    // NOP
    // 0x34e00c: 0x0  nop
    ctx->pc = 0x34e00cu;
    // NOP
label_34e010:
    // 0x34e010: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x34e010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34e014: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x34e014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x34e018: 0xac449478  sw          $a0, -0x6B88($v0)
    ctx->pc = 0x34e018u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294939768), GPR_U32(ctx, 4));
    // 0x34e01c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34e01cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34e020: 0x2463ff88  addiu       $v1, $v1, -0x78
    ctx->pc = 0x34e020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967176));
    // 0x34e024: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34e024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34e028: 0xac43eab8  sw          $v1, -0x1548($v0)
    ctx->pc = 0x34e028u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961848), GPR_U32(ctx, 3));
    // 0x34e02c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x34e02cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x34e030: 0x24844420  addiu       $a0, $a0, 0x4420
    ctx->pc = 0x34e030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17440));
    // 0x34e034: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34e034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34e038: 0xac44ead0  sw          $a0, -0x1530($v0)
    ctx->pc = 0x34e038u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961872), GPR_U32(ctx, 4));
    // 0x34e03c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34e03cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34e040: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x34e040u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x34e044: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x34e044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x34e048: 0x246321d0  addiu       $v1, $v1, 0x21D0
    ctx->pc = 0x34e048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8656));
    // 0x34e04c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34e050: 0xac4340a0  sw          $v1, 0x40A0($v0)
    ctx->pc = 0x34e050u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16544), GPR_U32(ctx, 3));
    // 0x34e054: 0x24846f30  addiu       $a0, $a0, 0x6F30
    ctx->pc = 0x34e054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28464));
    // 0x34e058: 0x80558d4  j           func_156350
    ctx->pc = 0x34E058u;
    ctx->pc = 0x34E05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E058u;
            // 0x34e05c: 0x24a5e060  addiu       $a1, $a1, -0x1FA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (runtime->hasFunction(0x156350u)) {
        auto targetFn = runtime->lookupFunction(0x156350u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00156350_0x156350(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x34E060u;
label_34e060:
    // 0x34e060: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34e060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34e064: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34e064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e068: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34e068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34e06c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x34e06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34e070: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x34E070u;
    SET_GPR_U32(ctx, 31, 0x34E078u);
    ctx->pc = 0x34E074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E070u;
            // 0x34e074: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E078u; }
        if (ctx->pc != 0x34E078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E078u; }
        if (ctx->pc != 0x34E078u) { return; }
    }
    ctx->pc = 0x34E078u;
label_34e078:
    // 0x34e078: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x34e078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x34e07c: 0x3c0501df  lui         $a1, 0x1DF
    ctx->pc = 0x34e07cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)479 << 16));
    // 0x34e080: 0x8c42dd80  lw          $v0, -0x2280($v0)
    ctx->pc = 0x34e080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958464)));
    // 0x34e084: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x34e084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x34e088: 0x24a5dda0  addiu       $a1, $a1, -0x2260
    ctx->pc = 0x34e088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958496));
    // 0x34e08c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x34e08cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x34e090: 0xc049c48  jal         func_127120
    ctx->pc = 0x34E090u;
    SET_GPR_U32(ctx, 31, 0x34E098u);
    ctx->pc = 0x34E094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E090u;
            // 0x34e094: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E098u; }
        if (ctx->pc != 0x34E098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E098u; }
        if (ctx->pc != 0x34E098u) { return; }
    }
    ctx->pc = 0x34E098u;
label_34e098:
    // 0x34e098: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x34e098u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x34e09c: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x34e09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x34e0a0: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x34E0A0u;
    SET_GPR_U32(ctx, 31, 0x34E0A8u);
    ctx->pc = 0x34E0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E0A0u;
            // 0x34e0a4: 0x24a55200  addiu       $a1, $a1, 0x5200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (runtime->hasFunction(0x129F70u)) {
        auto targetFn = runtime->lookupFunction(0x129F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E0A8u; }
        if (ctx->pc != 0x34E0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129F70_0x129f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E0A8u; }
        if (ctx->pc != 0x34E0A8u) { return; }
    }
    ctx->pc = 0x34E0A8u;
label_34e0a8:
    // 0x34e0a8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34e0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34e0ac: 0x24051010  addiu       $a1, $zero, 0x1010
    ctx->pc = 0x34e0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4112));
    // 0x34e0b0: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x34e0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x34e0b4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x34e0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34e0b8: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x34E0B8u;
    SET_GPR_U32(ctx, 31, 0x34E0C0u);
    ctx->pc = 0x34E0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E0B8u;
            // 0x34e0bc: 0x2407002c  addiu       $a3, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (runtime->hasFunction(0x20FE58u)) {
        auto targetFn = runtime->lookupFunction(0x20FE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E0C0u; }
        if (ctx->pc != 0x34E0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FE58_0x20fe58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E0C0u; }
        if (ctx->pc != 0x34E0C0u) { return; }
    }
    ctx->pc = 0x34E0C0u;
label_34e0c0:
    // 0x34e0c0: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34e0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34e0c4: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x34E0C4u;
    SET_GPR_U32(ctx, 31, 0x34E0CCu);
    ctx->pc = 0x34E0C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E0C4u;
            // 0x34e0c8: 0x2484e0e0  addiu       $a0, $a0, -0x1F20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (runtime->hasFunction(0x347260u)) {
        auto targetFn = runtime->lookupFunction(0x347260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E0CCu; }
        if (ctx->pc != 0x34E0CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347260_0x347260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E0CCu; }
        if (ctx->pc != 0x34E0CCu) { return; }
    }
    ctx->pc = 0x34E0CCu;
label_34e0cc:
    // 0x34e0cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34e0ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34e0d0: 0x3e00008  jr          $ra
    ctx->pc = 0x34E0D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34E0D0u;
            // 0x34e0d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34E0D8u;
    // 0x34e0d8: 0x0  nop
    ctx->pc = 0x34e0d8u;
    // NOP
    // 0x34e0dc: 0x0  nop
    ctx->pc = 0x34e0dcu;
    // NOP
label_34e0e0:
    // 0x34e0e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34e0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34e0e4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34e0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34e0e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34e0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34e0ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x34e0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34e0f0: 0xac404370  sw          $zero, 0x4370($v0)
    ctx->pc = 0x34e0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17264), GPR_U32(ctx, 0));
    // 0x34e0f4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x34e0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34e0f8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34e0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34e0fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34e0fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e100: 0xac434378  sw          $v1, 0x4378($v0)
    ctx->pc = 0x34e100u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17272), GPR_U32(ctx, 3));
    // 0x34e104: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x34E104u;
    SET_GPR_U32(ctx, 31, 0x34E10Cu);
    ctx->pc = 0x34E108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E104u;
            // 0x34e108: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E10Cu; }
        if (ctx->pc != 0x34E10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E10Cu; }
        if (ctx->pc != 0x34E10Cu) { return; }
    }
    ctx->pc = 0x34E10Cu;
label_34e10c:
    // 0x34e10c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34e10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34e110: 0x3c0301df  lui         $v1, 0x1DF
    ctx->pc = 0x34e110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)479 << 16));
    // 0x34e114: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x34e114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x34e118: 0x24051410  addiu       $a1, $zero, 0x1410
    ctx->pc = 0x34e118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5136));
    // 0x34e11c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x34e11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x34e120: 0x8c63dd80  lw          $v1, -0x2280($v1)
    ctx->pc = 0x34e120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294958464)));
    // 0x34e124: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x34e124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x34e128: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x34e128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34e12c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34e12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34e130: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x34e130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x34e134: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x34e134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x34e138: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x34E138u;
    SET_GPR_U32(ctx, 31, 0x34E140u);
    ctx->pc = 0x34E13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E138u;
            // 0x34e13c: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (runtime->hasFunction(0x20FE58u)) {
        auto targetFn = runtime->lookupFunction(0x20FE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E140u; }
        if (ctx->pc != 0x34E140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FE58_0x20fe58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E140u; }
        if (ctx->pc != 0x34E140u) { return; }
    }
    ctx->pc = 0x34E140u;
label_34e140:
    // 0x34e140: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34e140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34e144: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x34E144u;
    SET_GPR_U32(ctx, 31, 0x34E14Cu);
    ctx->pc = 0x34E148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E144u;
            // 0x34e148: 0x2484ecb0  addiu       $a0, $a0, -0x1350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (runtime->hasFunction(0x347260u)) {
        auto targetFn = runtime->lookupFunction(0x347260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E14Cu; }
        if (ctx->pc != 0x34E14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347260_0x347260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E14Cu; }
        if (ctx->pc != 0x34E14Cu) { return; }
    }
    ctx->pc = 0x34E14Cu;
label_34e14c:
    // 0x34e14c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34e14cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34e150: 0x3e00008  jr          $ra
    ctx->pc = 0x34E150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34E150u;
            // 0x34e154: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34E158u;
    // 0x34e158: 0x0  nop
    ctx->pc = 0x34e158u;
    // NOP
    // 0x34e15c: 0x0  nop
    ctx->pc = 0x34e15cu;
    // NOP
label_34e160:
    // 0x34e160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34e160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34e164: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34e164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e168: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34e168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34e16c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x34e16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34e170: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x34E170u;
    SET_GPR_U32(ctx, 31, 0x34E178u);
    ctx->pc = 0x34E174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E170u;
            // 0x34e174: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E178u; }
        if (ctx->pc != 0x34E178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E178u; }
        if (ctx->pc != 0x34E178u) { return; }
    }
    ctx->pc = 0x34E178u;
label_34e178:
    // 0x34e178: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x34e178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x34e17c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34e17cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34e180: 0x8c44dd80  lw          $a0, -0x2280($v0)
    ctx->pc = 0x34e180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958464)));
    // 0x34e184: 0x24051410  addiu       $a1, $zero, 0x1410
    ctx->pc = 0x34e184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5136));
    // 0x34e188: 0x8c634370  lw          $v1, 0x4370($v1)
    ctx->pc = 0x34e188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17264)));
    // 0x34e18c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x34e18cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34e190: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x34e190u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x34e194: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x34e194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x34e198: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x34e198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x34e19c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x34e19cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x34e1a0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34e1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34e1a4: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x34e1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x34e1a8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x34e1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x34e1ac: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x34e1acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34e1b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34e1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34e1b4: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x34E1B4u;
    SET_GPR_U32(ctx, 31, 0x34E1BCu);
    ctx->pc = 0x34E1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E1B4u;
            // 0x34e1b8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (runtime->hasFunction(0x20FE58u)) {
        auto targetFn = runtime->lookupFunction(0x20FE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E1BCu; }
        if (ctx->pc != 0x34E1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020FE58_0x20fe58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E1BCu; }
        if (ctx->pc != 0x34E1BCu) { return; }
    }
    ctx->pc = 0x34E1BCu;
label_34e1bc:
    // 0x34e1bc: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34e1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34e1c0: 0xc0d1c98  jal         func_347260
    ctx->pc = 0x34E1C0u;
    SET_GPR_U32(ctx, 31, 0x34E1C8u);
    ctx->pc = 0x34E1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34E1C0u;
            // 0x34e1c4: 0x2484ecb0  addiu       $a0, $a0, -0x1350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347260u;
    if (runtime->hasFunction(0x347260u)) {
        auto targetFn = runtime->lookupFunction(0x347260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E1C8u; }
        if (ctx->pc != 0x34E1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347260_0x347260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34E1C8u; }
        if (ctx->pc != 0x34E1C8u) { return; }
    }
    ctx->pc = 0x34E1C8u;
label_34e1c8:
    // 0x34e1c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34e1c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34e1cc: 0x3e00008  jr          $ra
    ctx->pc = 0x34E1CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34E1CCu;
            // 0x34e1d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34E1D4u;
    // 0x34e1d4: 0x0  nop
    ctx->pc = 0x34e1d4u;
    // NOP
    // 0x34e1d8: 0x0  nop
    ctx->pc = 0x34e1d8u;
    // NOP
    // 0x34e1dc: 0x0  nop
    ctx->pc = 0x34e1dcu;
    // NOP
    ctx->pc = 0x34e1e0u;
}
