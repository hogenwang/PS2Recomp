#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003328A4
// Address: 0x3328a4 - 0x334c10
void sub_003328A4_0x3328a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003328A4_0x3328a4");
#endif

    switch (ctx->pc) {
        case 0x3328acu: goto label_3328ac;
        case 0x3328c4u: goto label_3328c4;
        case 0x3328ccu: goto label_3328cc;
        case 0x3328e4u: goto label_3328e4;
        case 0x33292cu: goto label_33292c;
        case 0x332944u: goto label_332944;
        case 0x332960u: goto label_332960;
        case 0x332980u: goto label_332980;
        case 0x3329e0u: goto label_3329e0;
        case 0x332a34u: goto label_332a34;
        case 0x332a88u: goto label_332a88;
        case 0x332abcu: goto label_332abc;
        case 0x332af0u: goto label_332af0;
        case 0x332b6cu: goto label_332b6c;
        case 0x332ba0u: goto label_332ba0;
        case 0x332bd4u: goto label_332bd4;
        case 0x332c28u: goto label_332c28;
        case 0x332c48u: goto label_332c48;
        case 0x332c84u: goto label_332c84;
        case 0x332cc8u: goto label_332cc8;
        case 0x332cf0u: goto label_332cf0;
        case 0x332cf8u: goto label_332cf8;
        case 0x332d3cu: goto label_332d3c;
        case 0x332da4u: goto label_332da4;
        case 0x332dc0u: goto label_332dc0;
        case 0x332de0u: goto label_332de0;
        case 0x332e18u: goto label_332e18;
        case 0x332e50u: goto label_332e50;
        case 0x332e64u: goto label_332e64;
        case 0x332e7cu: goto label_332e7c;
        case 0x332ed8u: goto label_332ed8;
        case 0x332f20u: goto label_332f20;
        case 0x332f48u: goto label_332f48;
        case 0x332f8cu: goto label_332f8c;
        case 0x332fb0u: goto label_332fb0;
        case 0x332fc4u: goto label_332fc4;
        case 0x332ffcu: goto label_332ffc;
        case 0x33300cu: goto label_33300c;
        case 0x333050u: goto label_333050;
        case 0x333068u: goto label_333068;
        case 0x33309cu: goto label_33309c;
        case 0x3330b0u: goto label_3330b0;
        case 0x3330c8u: goto label_3330c8;
        case 0x3330e0u: goto label_3330e0;
        case 0x333128u: goto label_333128;
        case 0x333144u: goto label_333144;
        case 0x33315cu: goto label_33315c;
        case 0x333180u: goto label_333180;
        case 0x3331ecu: goto label_3331ec;
        case 0x333234u: goto label_333234;
        case 0x33324cu: goto label_33324c;
        case 0x33326cu: goto label_33326c;
        case 0x3332b4u: goto label_3332b4;
        case 0x3332ccu: goto label_3332cc;
        case 0x3332e8u: goto label_3332e8;
        case 0x333300u: goto label_333300;
        case 0x333378u: goto label_333378;
        case 0x333388u: goto label_333388;
        case 0x33339cu: goto label_33339c;
        case 0x3333e0u: goto label_3333e0;
        case 0x33343cu: goto label_33343c;
        case 0x333468u: goto label_333468;
        case 0x3334e4u: goto label_3334e4;
        case 0x333518u: goto label_333518;
        case 0x33354cu: goto label_33354c;
        case 0x333594u: goto label_333594;
        case 0x3335b4u: goto label_3335b4;
        case 0x3335ecu: goto label_3335ec;
        case 0x333630u: goto label_333630;
        case 0x333658u: goto label_333658;
        case 0x333660u: goto label_333660;
        case 0x3336a4u: goto label_3336a4;
        case 0x33370cu: goto label_33370c;
        case 0x333728u: goto label_333728;
        case 0x333748u: goto label_333748;
        case 0x333780u: goto label_333780;
        case 0x333790u: goto label_333790;
        case 0x3337b8u: goto label_3337b8;
        case 0x3337d0u: goto label_3337d0;
        case 0x3337f4u: goto label_3337f4;
        case 0x33380cu: goto label_33380c;
        case 0x333818u: goto label_333818;
        case 0x333820u: goto label_333820;
        case 0x333870u: goto label_333870;
        case 0x3338acu: goto label_3338ac;
        case 0x3338b8u: goto label_3338b8;
        case 0x3338c4u: goto label_3338c4;
        case 0x3338ccu: goto label_3338cc;
        case 0x3338fcu: goto label_3338fc;
        case 0x333930u: goto label_333930;
        case 0x333980u: goto label_333980;
        case 0x333a14u: goto label_333a14;
        case 0x333a58u: goto label_333a58;
        case 0x333a90u: goto label_333a90;
        case 0x333ac4u: goto label_333ac4;
        case 0x333b34u: goto label_333b34;
        case 0x333b54u: goto label_333b54;
        case 0x333b6cu: goto label_333b6c;
        case 0x333bc8u: goto label_333bc8;
        case 0x333be0u: goto label_333be0;
        case 0x333bfcu: goto label_333bfc;
        case 0x333c10u: goto label_333c10;
        case 0x333c28u: goto label_333c28;
        case 0x333c44u: goto label_333c44;
        case 0x333c58u: goto label_333c58;
        case 0x333c74u: goto label_333c74;
        case 0x333c88u: goto label_333c88;
        case 0x333cccu: goto label_333ccc;
        case 0x333cdcu: goto label_333cdc;
        case 0x333ce4u: goto label_333ce4;
        case 0x333d28u: goto label_333d28;
        case 0x333d60u: goto label_333d60;
        case 0x333d84u: goto label_333d84;
        case 0x333dccu: goto label_333dcc;
        case 0x333de4u: goto label_333de4;
        case 0x333df4u: goto label_333df4;
        case 0x333e14u: goto label_333e14;
        case 0x333e28u: goto label_333e28;
        case 0x333e40u: goto label_333e40;
        case 0x333e50u: goto label_333e50;
        case 0x333e70u: goto label_333e70;
        case 0x333e84u: goto label_333e84;
        case 0x333e9cu: goto label_333e9c;
        case 0x333eacu: goto label_333eac;
        case 0x333ee0u: goto label_333ee0;
        case 0x333ef8u: goto label_333ef8;
        case 0x333f08u: goto label_333f08;
        case 0x333f3cu: goto label_333f3c;
        case 0x333f54u: goto label_333f54;
        case 0x333f64u: goto label_333f64;
        case 0x333fc8u: goto label_333fc8;
        case 0x334010u: goto label_334010;
        case 0x334060u: goto label_334060;
        case 0x3340a8u: goto label_3340a8;
        case 0x3340c0u: goto label_3340c0;
        case 0x3340dcu: goto label_3340dc;
        case 0x334124u: goto label_334124;
        case 0x334140u: goto label_334140;
        case 0x334158u: goto label_334158;
        case 0x334170u: goto label_334170;
        case 0x3341b4u: goto label_3341b4;
        case 0x3341fcu: goto label_3341fc;
        case 0x334214u: goto label_334214;
        case 0x334234u: goto label_334234;
        case 0x33427cu: goto label_33427c;
        case 0x334294u: goto label_334294;
        case 0x3342b0u: goto label_3342b0;
        case 0x3342d0u: goto label_3342d0;
        case 0x334320u: goto label_334320;
        case 0x334344u: goto label_334344;
        case 0x33434cu: goto label_33434c;
        case 0x334354u: goto label_334354;
        case 0x334384u: goto label_334384;
        case 0x334394u: goto label_334394;
        case 0x33439cu: goto label_33439c;
        case 0x334410u: goto label_334410;
        case 0x334444u: goto label_334444;
        case 0x334488u: goto label_334488;
        case 0x3344c0u: goto label_3344c0;
        case 0x3344f4u: goto label_3344f4;
        case 0x334564u: goto label_334564;
        case 0x334584u: goto label_334584;
        case 0x33459cu: goto label_33459c;
        case 0x3345e0u: goto label_3345e0;
        case 0x334608u: goto label_334608;
        case 0x33463cu: goto label_33463c;
        case 0x334664u: goto label_334664;
        case 0x334680u: goto label_334680;
        case 0x33469cu: goto label_33469c;
        case 0x3346b8u: goto label_3346b8;
        case 0x3346dcu: goto label_3346dc;
        case 0x3346e8u: goto label_3346e8;
        case 0x334728u: goto label_334728;
        case 0x334738u: goto label_334738;
        case 0x33477cu: goto label_33477c;
        case 0x3347c0u: goto label_3347c0;
        case 0x3347e4u: goto label_3347e4;
        case 0x33482cu: goto label_33482c;
        case 0x33487cu: goto label_33487c;
        case 0x3348a0u: goto label_3348a0;
        case 0x3348b0u: goto label_3348b0;
        case 0x3348c8u: goto label_3348c8;
        case 0x3348d8u: goto label_3348d8;
        case 0x3348e8u: goto label_3348e8;
        case 0x33491cu: goto label_33491c;
        case 0x334934u: goto label_334934;
        case 0x334944u: goto label_334944;
        case 0x334954u: goto label_334954;
        case 0x334968u: goto label_334968;
        case 0x334980u: goto label_334980;
        case 0x334990u: goto label_334990;
        case 0x3349a0u: goto label_3349a0;
        case 0x3349b4u: goto label_3349b4;
        case 0x3349ccu: goto label_3349cc;
        case 0x3349dcu: goto label_3349dc;
        case 0x334a10u: goto label_334a10;
        case 0x334a28u: goto label_334a28;
        case 0x334a38u: goto label_334a38;
        case 0x334a48u: goto label_334a48;
        case 0x334a84u: goto label_334a84;
        case 0x334a9cu: goto label_334a9c;
        case 0x334aacu: goto label_334aac;
        case 0x334ae8u: goto label_334ae8;
        case 0x334b00u: goto label_334b00;
        case 0x334b10u: goto label_334b10;
        case 0x334b48u: goto label_334b48;
        case 0x334b60u: goto label_334b60;
        case 0x334b78u: goto label_334b78;
        case 0x334bc0u: goto label_334bc0;
        case 0x334bdcu: goto label_334bdc;
        case 0x334bf8u: goto label_334bf8;
        default: break;
    }

    ctx->pc = 0x3328a4u;

    // 0x3328a4: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x3328A4u;
    SET_GPR_U32(ctx, 31, 0x3328ACu);
    ctx->pc = 0x3328A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3328A4u;
            // 0x3328a8: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (runtime->hasFunction(0x302EA0u)) {
        auto targetFn = runtime->lookupFunction(0x302EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3328ACu; }
        if (ctx->pc != 0x3328ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302EA0_0x302ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3328ACu; }
        if (ctx->pc != 0x3328ACu) { return; }
    }
    ctx->pc = 0x3328ACu;
label_3328ac:
    // 0x3328ac: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x3328acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x3328b0: 0x26050060  addiu       $a1, $s0, 0x60
    ctx->pc = 0x3328b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x3328b4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3328b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3328b8: 0x24841cd8  addiu       $a0, $a0, 0x1CD8
    ctx->pc = 0x3328b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7384));
    // 0x3328bc: 0xc0c0b14  jal         func_302C50
    ctx->pc = 0x3328BCu;
    SET_GPR_U32(ctx, 31, 0x3328C4u);
    ctx->pc = 0x3328C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3328BCu;
            // 0x3328c0: 0x2407a829  addiu       $a3, $zero, -0x57D7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302C50u;
    if (runtime->hasFunction(0x302C50u)) {
        auto targetFn = runtime->lookupFunction(0x302C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3328C4u; }
        if (ctx->pc != 0x3328C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302C50_0x302c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3328C4u; }
        if (ctx->pc != 0x3328C4u) { return; }
    }
    ctx->pc = 0x3328C4u;
label_3328c4:
    // 0x3328c4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3328C4u;
    {
        const bool branch_taken_0x3328c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3328c4) {
            ctx->pc = 0x332944u;
            goto label_332944;
        }
    }
    ctx->pc = 0x3328CCu;
label_3328cc:
    // 0x3328cc: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x3328ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x3328d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3328d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3328d4: 0x24841e04  addiu       $a0, $a0, 0x1E04
    ctx->pc = 0x3328d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7684));
    // 0x3328d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3328d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3328dc: 0xc0c0b14  jal         func_302C50
    ctx->pc = 0x3328DCu;
    SET_GPR_U32(ctx, 31, 0x3328E4u);
    ctx->pc = 0x3328E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3328DCu;
            // 0x3328e0: 0x2407a829  addiu       $a3, $zero, -0x57D7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302C50u;
    if (runtime->hasFunction(0x302C50u)) {
        auto targetFn = runtime->lookupFunction(0x302C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3328E4u; }
        if (ctx->pc != 0x3328E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302C50_0x302c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3328E4u; }
        if (ctx->pc != 0x3328E4u) { return; }
    }
    ctx->pc = 0x3328E4u;
label_3328e4:
    // 0x3328e4: 0x3c0b003d  lui         $t3, 0x3D
    ctx->pc = 0x3328e4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)61 << 16));
    // 0x3328e8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3328e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3328ec: 0x256b1e10  addiu       $t3, $t3, 0x1E10
    ctx->pc = 0x3328ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 7696));
    // 0x3328f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3328f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3328f4: 0x95680006  lhu         $t0, 0x6($t3)
    ctx->pc = 0x3328f4u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x3328f8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3328f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3328fc: 0x2625fff0  addiu       $a1, $s1, -0x10
    ctx->pc = 0x3328fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x332900: 0x2406a829  addiu       $a2, $zero, -0x57D7
    ctx->pc = 0x332900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
    // 0x332904: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x332904u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x332908: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x332908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x33290c: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x33290cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x332910: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x332910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x332914: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x332914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x332918: 0x95690000  lhu         $t1, 0x0($t3)
    ctx->pc = 0x332918u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x33291c: 0x956a0002  lhu         $t2, 0x2($t3)
    ctx->pc = 0x33291cu;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x332920: 0x956b0004  lhu         $t3, 0x4($t3)
    ctx->pc = 0x332920u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x332924: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x332924u;
    SET_GPR_U32(ctx, 31, 0x33292Cu);
    ctx->pc = 0x332928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332924u;
            // 0x332928: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (runtime->hasFunction(0x302EA0u)) {
        auto targetFn = runtime->lookupFunction(0x302EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33292Cu; }
        if (ctx->pc != 0x33292Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302EA0_0x302ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33292Cu; }
        if (ctx->pc != 0x33292Cu) { return; }
    }
    ctx->pc = 0x33292Cu;
label_33292c:
    // 0x33292c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33292cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x332930: 0x260501e0  addiu       $a1, $s0, 0x1E0
    ctx->pc = 0x332930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
    // 0x332934: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x332934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332938: 0x24841e1c  addiu       $a0, $a0, 0x1E1C
    ctx->pc = 0x332938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7708));
    // 0x33293c: 0xc0c0b14  jal         func_302C50
    ctx->pc = 0x33293Cu;
    SET_GPR_U32(ctx, 31, 0x332944u);
    ctx->pc = 0x332940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33293Cu;
            // 0x332940: 0x2407a829  addiu       $a3, $zero, -0x57D7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302C50u;
    if (runtime->hasFunction(0x302C50u)) {
        auto targetFn = runtime->lookupFunction(0x302C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332944u; }
        if (ctx->pc != 0x332944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302C50_0x302c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332944u; }
        if (ctx->pc != 0x332944u) { return; }
    }
    ctx->pc = 0x332944u;
label_332944:
    // 0x332944: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x332944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x332948: 0x9063e818  lbu         $v1, -0x17E8($v1)
    ctx->pc = 0x332948u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
    // 0x33294c: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x33294cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x332950: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x332950u;
    {
        const bool branch_taken_0x332950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x332950) {
            ctx->pc = 0x332954u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x332950u;
            // 0x332954: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x332964u;
            goto label_332964;
        }
    }
    ctx->pc = 0x332958u;
    // 0x332958: 0xc055728  jal         func_155CA0
    ctx->pc = 0x332958u;
    SET_GPR_U32(ctx, 31, 0x332960u);
    ctx->pc = 0x33295Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332958u;
            // 0x33295c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332960u; }
        if (ctx->pc != 0x332960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332960u; }
        if (ctx->pc != 0x332960u) { return; }
    }
    ctx->pc = 0x332960u;
label_332960:
    // 0x332960: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x332960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_332964:
    // 0x332964: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x332964u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x332968: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x332968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33296c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x33296cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x332970: 0x3e00008  jr          $ra
    ctx->pc = 0x332970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332970u;
            // 0x332974: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x332978u;
    // 0x332978: 0x0  nop
    ctx->pc = 0x332978u;
    // NOP
    // 0x33297c: 0x0  nop
    ctx->pc = 0x33297cu;
    // NOP
label_332980:
    // 0x332980: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x332980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x332984: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x332984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x332988: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x332988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x33298c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x33298cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x332990: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x332990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x332994: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x332994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x332998: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x332998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33299c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33299cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3329a0: 0x9064e818  lbu         $a0, -0x17E8($v1)
    ctx->pc = 0x3329a0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
    // 0x3329a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3329a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3329a8: 0x10830140  beq         $a0, $v1, . + 4 + (0x140 << 2)
    ctx->pc = 0x3329A8u;
    {
        const bool branch_taken_0x3329a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3329a8) {
            ctx->pc = 0x332EACu;
            goto label_332eac;
        }
    }
    ctx->pc = 0x3329B0u;
    // 0x3329b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3329b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3329b4: 0x508300b2  beql        $a0, $v1, . + 4 + (0xB2 << 2)
    ctx->pc = 0x3329B4u;
    {
        const bool branch_taken_0x3329b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3329b4) {
            ctx->pc = 0x3329B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3329B4u;
            // 0x3329b8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x332C80u;
            goto label_332c80;
        }
    }
    ctx->pc = 0x3329BCu;
    // 0x3329bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3329bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3329c0: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3329C0u;
    {
        const bool branch_taken_0x3329c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3329c0) {
            ctx->pc = 0x332A08u;
            goto label_332a08;
        }
    }
    ctx->pc = 0x3329C8u;
    // 0x3329c8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3329C8u;
    {
        const bool branch_taken_0x3329c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3329c8) {
            ctx->pc = 0x3329D8u;
            goto label_3329d8;
        }
    }
    ctx->pc = 0x3329D0u;
    // 0x3329d0: 0x1000014b  b           . + 4 + (0x14B << 2)
    ctx->pc = 0x3329D0u;
    {
        const bool branch_taken_0x3329d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3329D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3329D0u;
            // 0x3329d4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3329d0) {
            ctx->pc = 0x332F00u;
            goto label_332f00;
        }
    }
    ctx->pc = 0x3329D8u;
label_3329d8:
    // 0x3329d8: 0xc0cbf34  jal         func_32FCD0
    ctx->pc = 0x3329D8u;
    SET_GPR_U32(ctx, 31, 0x3329E0u);
    ctx->pc = 0x32FCD0u;
    if (runtime->hasFunction(0x32FCD0u)) {
        auto targetFn = runtime->lookupFunction(0x32FCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3329E0u; }
        if (ctx->pc != 0x3329E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032FCD0_0x32fcd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3329E0u; }
        if (ctx->pc != 0x3329E0u) { return; }
    }
    ctx->pc = 0x3329E0u;
label_3329e0:
    // 0x3329e0: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3329e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3329e4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3329e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3329e8: 0xac80e7f4  sw          $zero, -0x180C($a0)
    ctx->pc = 0x3329e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961140), GPR_U32(ctx, 0));
    // 0x3329ec: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3329ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3329f0: 0xac60e7f0  sw          $zero, -0x1810($v1)
    ctx->pc = 0x3329f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961136), GPR_U32(ctx, 0));
    // 0x3329f4: 0x9084e818  lbu         $a0, -0x17E8($a0)
    ctx->pc = 0x3329f4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294961176)));
    // 0x3329f8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3329f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3329fc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3329fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x332a00: 0x1000013e  b           . + 4 + (0x13E << 2)
    ctx->pc = 0x332A00u;
    {
        const bool branch_taken_0x332a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332A00u;
            // 0x332a04: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332a00) {
            ctx->pc = 0x332EFCu;
            goto label_332efc;
        }
    }
    ctx->pc = 0x332A08u;
label_332a08:
    // 0x332a08: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x332a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x332a0c: 0x8c63e7d0  lw          $v1, -0x1830($v1)
    ctx->pc = 0x332a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961104)));
    // 0x332a10: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x332a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x332a14: 0x14600074  bnez        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x332A14u;
    {
        const bool branch_taken_0x332a14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x332a14) {
            ctx->pc = 0x332BE8u;
            goto label_332be8;
        }
    }
    ctx->pc = 0x332A1Cu;
    // 0x332a1c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x332a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x332a20: 0x8c63e7c8  lw          $v1, -0x1838($v1)
    ctx->pc = 0x332a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961096)));
    // 0x332a24: 0x2861000d  slti        $at, $v1, 0xD
    ctx->pc = 0x332a24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x332a28: 0x1020006f  beqz        $at, . + 4 + (0x6F << 2)
    ctx->pc = 0x332A28u;
    {
        const bool branch_taken_0x332a28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x332a28) {
            ctx->pc = 0x332BE8u;
            goto label_332be8;
        }
    }
    ctx->pc = 0x332A30u;
    // 0x332a30: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x332a30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_332a34:
    // 0x332a34: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x332a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x332a38: 0x8c63e7c8  lw          $v1, -0x1838($v1)
    ctx->pc = 0x332a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961096)));
    // 0x332a3c: 0x2c61000b  sltiu       $at, $v1, 0xB
    ctx->pc = 0x332a3cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x332a40: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
    ctx->pc = 0x332A40u;
    {
        const bool branch_taken_0x332a40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x332a40) {
            ctx->pc = 0x332B08u;
            goto label_332b08;
        }
    }
    ctx->pc = 0x332A48u;
    // 0x332a48: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x332a48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x332a4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x332a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x332a50: 0x248447b0  addiu       $a0, $a0, 0x47B0
    ctx->pc = 0x332a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18352));
    // 0x332a54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x332a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x332a58: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x332a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x332a5c: 0x600008  jr          $v1
    ctx->pc = 0x332A5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x332A68u: goto label_332a68;
            case 0x332B08u: goto label_332b08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x332A64u;
    // 0x332a64: 0x0  nop
    ctx->pc = 0x332a64u;
    // NOP
label_332a68:
    // 0x332a68: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x332a68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x332a6c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x332a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x332a70: 0x24842f20  addiu       $a0, $a0, 0x2F20
    ctx->pc = 0x332a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12064));
    // 0x332a74: 0x24a54648  addiu       $a1, $a1, 0x4648
    ctx->pc = 0x332a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17992));
    // 0x332a78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x332a78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332a7c: 0x24070034  addiu       $a3, $zero, 0x34
    ctx->pc = 0x332a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x332a80: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x332A80u;
    SET_GPR_U32(ctx, 31, 0x332A88u);
    ctx->pc = 0x332A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332A80u;
            // 0x332a84: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332A88u; }
        if (ctx->pc != 0x332A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332A88u; }
        if (ctx->pc != 0x332A88u) { return; }
    }
    ctx->pc = 0x332A88u;
label_332a88:
    // 0x332a88: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x332a88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x332a8c: 0x14a0000e  bnez        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x332A8Cu;
    {
        const bool branch_taken_0x332a8c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x332a8c) {
            ctx->pc = 0x332AC8u;
            goto label_332ac8;
        }
    }
    ctx->pc = 0x332A94u;
    // 0x332a94: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x332a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x332a98: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x332a98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x332a9c: 0x8c46e7c8  lw          $a2, -0x1838($v0)
    ctx->pc = 0x332a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x332aa0: 0x24842f20  addiu       $a0, $a0, 0x2F20
    ctx->pc = 0x332aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12064));
    // 0x332aa4: 0x2407ff40  addiu       $a3, $zero, -0xC0
    ctx->pc = 0x332aa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967104));
    // 0x332aa8: 0x24090060  addiu       $t1, $zero, 0x60
    ctx->pc = 0x332aa8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x332aac: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x332aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x332ab0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x332ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x332ab4: 0xc0cdba8  jal         func_336EA0
    ctx->pc = 0x332AB4u;
    SET_GPR_U32(ctx, 31, 0x332ABCu);
    ctx->pc = 0x332AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332AB4u;
            // 0x332ab8: 0x24480050  addiu       $t0, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x336EA0u;
    if (runtime->hasFunction(0x336EA0u)) {
        auto targetFn = runtime->lookupFunction(0x336EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332ABCu; }
        if (ctx->pc != 0x332ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00336EA0_0x336ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332ABCu; }
        if (ctx->pc != 0x332ABCu) { return; }
    }
    ctx->pc = 0x332ABCu;
label_332abc:
    // 0x332abc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x332ABCu;
    {
        const bool branch_taken_0x332abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x332abc) {
            ctx->pc = 0x332B08u;
            goto label_332b08;
        }
    }
    ctx->pc = 0x332AC4u;
    // 0x332ac4: 0x0  nop
    ctx->pc = 0x332ac4u;
    // NOP
label_332ac8:
    // 0x332ac8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x332ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x332acc: 0x8c46e7c8  lw          $a2, -0x1838($v0)
    ctx->pc = 0x332accu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x332ad0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x332ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x332ad4: 0x24842f20  addiu       $a0, $a0, 0x2F20
    ctx->pc = 0x332ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12064));
    // 0x332ad8: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x332ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x332adc: 0x24090160  addiu       $t1, $zero, 0x160
    ctx->pc = 0x332adcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x332ae0: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x332ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x332ae4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x332ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x332ae8: 0xc0cdba8  jal         func_336EA0
    ctx->pc = 0x332AE8u;
    SET_GPR_U32(ctx, 31, 0x332AF0u);
    ctx->pc = 0x332AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332AE8u;
            // 0x332aec: 0x24480050  addiu       $t0, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x336EA0u;
    if (runtime->hasFunction(0x336EA0u)) {
        auto targetFn = runtime->lookupFunction(0x336EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332AF0u; }
        if (ctx->pc != 0x332AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00336EA0_0x336ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332AF0u; }
        if (ctx->pc != 0x332AF0u) { return; }
    }
    ctx->pc = 0x332AF0u;
label_332af0:
    // 0x332af0: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x332af0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x332af4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x332af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x332af8: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x332af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x332afc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x332afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x332b00: 0xac64e7c8  sw          $a0, -0x1838($v1)
    ctx->pc = 0x332b00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
    // 0x332b04: 0x0  nop
    ctx->pc = 0x332b04u;
    // NOP
label_332b08:
    // 0x332b08: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x332b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x332b0c: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x332b0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x332b10: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x332b10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x332b14: 0x1460ffc7  bnez        $v1, . + 4 + (-0x39 << 2)
    ctx->pc = 0x332B14u;
    {
        const bool branch_taken_0x332b14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x332b14) {
            ctx->pc = 0x332A34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_332a34;
        }
    }
    ctx->pc = 0x332B1Cu;
    // 0x332b1c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x332b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x332b20: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x332b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x332b24: 0x8c63e7c8  lw          $v1, -0x1838($v1)
    ctx->pc = 0x332b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961096)));
    // 0x332b28: 0x10660023  beq         $v1, $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x332B28u;
    {
        const bool branch_taken_0x332b28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x332b28) {
            ctx->pc = 0x332BB8u;
            goto label_332bb8;
        }
    }
    ctx->pc = 0x332B30u;
    // 0x332b30: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x332b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x332b34: 0x10660013  beq         $v1, $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x332B34u;
    {
        const bool branch_taken_0x332b34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x332b34) {
            ctx->pc = 0x332B84u;
            goto label_332b84;
        }
    }
    ctx->pc = 0x332B3Cu;
    // 0x332b3c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x332B3Cu;
    {
        const bool branch_taken_0x332b3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x332b3c) {
            ctx->pc = 0x332B4Cu;
            goto label_332b4c;
        }
    }
    ctx->pc = 0x332B44u;
    // 0x332b44: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x332B44u;
    {
        const bool branch_taken_0x332b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x332b44) {
            ctx->pc = 0x332BE8u;
            goto label_332be8;
        }
    }
    ctx->pc = 0x332B4Cu;
label_332b4c:
    // 0x332b4c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x332b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x332b50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x332b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x332b54: 0x24842f20  addiu       $a0, $a0, 0x2F20
    ctx->pc = 0x332b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12064));
    // 0x332b58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x332b58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332b5c: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x332b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x332b60: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x332b60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x332b64: 0xc0cbfdc  jal         func_32FF70
    ctx->pc = 0x332B64u;
    SET_GPR_U32(ctx, 31, 0x332B6Cu);
    ctx->pc = 0x332B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332B64u;
            // 0x332b68: 0x24090160  addiu       $t1, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32FF70u;
    if (runtime->hasFunction(0x32FF70u)) {
        auto targetFn = runtime->lookupFunction(0x32FF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332B6Cu; }
        if (ctx->pc != 0x332B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032FF70_0x32ff70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332B6Cu; }
        if (ctx->pc != 0x332B6Cu) { return; }
    }
    ctx->pc = 0x332B6Cu;
label_332b6c:
    // 0x332b6c: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x332b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x332b70: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x332b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x332b74: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x332b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x332b78: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x332b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x332b7c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x332B7Cu;
    {
        const bool branch_taken_0x332b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332B7Cu;
            // 0x332b80: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332b7c) {
            ctx->pc = 0x332BE8u;
            goto label_332be8;
        }
    }
    ctx->pc = 0x332B84u;
label_332b84:
    // 0x332b84: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x332b84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x332b88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x332b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332b8c: 0x24842f20  addiu       $a0, $a0, 0x2F20
    ctx->pc = 0x332b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12064));
    // 0x332b90: 0x2407fe00  addiu       $a3, $zero, -0x200
    ctx->pc = 0x332b90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x332b94: 0x24080190  addiu       $t0, $zero, 0x190
    ctx->pc = 0x332b94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x332b98: 0xc0cc004  jal         func_330010
    ctx->pc = 0x332B98u;
    SET_GPR_U32(ctx, 31, 0x332BA0u);
    ctx->pc = 0x332B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332B98u;
            // 0x332b9c: 0x240900c0  addiu       $t1, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x330010u;
    if (runtime->hasFunction(0x330010u)) {
        auto targetFn = runtime->lookupFunction(0x330010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332BA0u; }
        if (ctx->pc != 0x332BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00330010_0x330010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332BA0u; }
        if (ctx->pc != 0x332BA0u) { return; }
    }
    ctx->pc = 0x332BA0u;
label_332ba0:
    // 0x332ba0: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x332ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x332ba4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x332ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x332ba8: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x332ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x332bac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x332bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x332bb0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x332BB0u;
    {
        const bool branch_taken_0x332bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332BB0u;
            // 0x332bb4: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332bb0) {
            ctx->pc = 0x332BE8u;
            goto label_332be8;
        }
    }
    ctx->pc = 0x332BB8u;
label_332bb8:
    // 0x332bb8: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x332bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x332bbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x332bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x332bc0: 0x24842f20  addiu       $a0, $a0, 0x2F20
    ctx->pc = 0x332bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12064));
    // 0x332bc4: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x332bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x332bc8: 0x24080190  addiu       $t0, $zero, 0x190
    ctx->pc = 0x332bc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x332bcc: 0xc0cbfdc  jal         func_32FF70
    ctx->pc = 0x332BCCu;
    SET_GPR_U32(ctx, 31, 0x332BD4u);
    ctx->pc = 0x332BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332BCCu;
            // 0x332bd0: 0x240901e0  addiu       $t1, $zero, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32FF70u;
    if (runtime->hasFunction(0x32FF70u)) {
        auto targetFn = runtime->lookupFunction(0x32FF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332BD4u; }
        if (ctx->pc != 0x332BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032FF70_0x32ff70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332BD4u; }
        if (ctx->pc != 0x332BD4u) { return; }
    }
    ctx->pc = 0x332BD4u;
label_332bd4:
    // 0x332bd4: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x332bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x332bd8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x332bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x332bdc: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x332bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x332be0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x332be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x332be4: 0xac64e7c8  sw          $a0, -0x1838($v1)
    ctx->pc = 0x332be4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
label_332be8:
    // 0x332be8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x332be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x332bec: 0x9064e810  lbu         $a0, -0x17F0($v1)
    ctx->pc = 0x332becu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x332bf0: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x332bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x332bf4: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x332BF4u;
    {
        const bool branch_taken_0x332bf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x332bf4) {
            ctx->pc = 0x332C68u;
            goto label_332c68;
        }
    }
    ctx->pc = 0x332BFCu;
    // 0x332bfc: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x332bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x332c00: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x332C00u;
    {
        const bool branch_taken_0x332c00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x332c00) {
            ctx->pc = 0x332C68u;
            goto label_332c68;
        }
    }
    ctx->pc = 0x332C08u;
    // 0x332c08: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x332c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x332c0c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x332c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x332c10: 0x9044e818  lbu         $a0, -0x17E8($v0)
    ctx->pc = 0x332c10u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961176)));
    // 0x332c14: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x332c14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332c18: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x332c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x332c1c: 0xa040e810  sb          $zero, -0x17F0($v0)
    ctx->pc = 0x332c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961168), (uint8_t)GPR_U32(ctx, 0));
    // 0x332c20: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x332c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x332c24: 0xa062e818  sb          $v0, -0x17E8($v1)
    ctx->pc = 0x332c24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 2));
label_332c28:
    // 0x332c28: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x332c28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x332c2c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x332c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x332c30: 0x24843180  addiu       $a0, $a0, 0x3180
    ctx->pc = 0x332c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12672));
    // 0x332c34: 0x24a54648  addiu       $a1, $a1, 0x4648
    ctx->pc = 0x332c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17992));
    // 0x332c38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x332c38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332c3c: 0x24070034  addiu       $a3, $zero, 0x34
    ctx->pc = 0x332c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x332c40: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x332C40u;
    SET_GPR_U32(ctx, 31, 0x332C48u);
    ctx->pc = 0x332C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332C40u;
            // 0x332c44: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332C48u; }
        if (ctx->pc != 0x332C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332C48u; }
        if (ctx->pc != 0x332C48u) { return; }
    }
    ctx->pc = 0x332C48u;
label_332c48:
    // 0x332c48: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x332c48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x332c4c: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x332c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x332c50: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x332c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x332c54: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x332c54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x332c58: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x332c58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x332c5c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x332C5Cu;
    {
        const bool branch_taken_0x332c5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x332C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332C5Cu;
            // 0x332c60: 0xac85001c  sw          $a1, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332c5c) {
            ctx->pc = 0x332C28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_332c28;
        }
    }
    ctx->pc = 0x332C64u;
    // 0x332c64: 0x0  nop
    ctx->pc = 0x332c64u;
    // NOP
label_332c68:
    // 0x332c68: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x332c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x332c6c: 0x8c64e7d0  lw          $a0, -0x1830($v1)
    ctx->pc = 0x332c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961104)));
    // 0x332c70: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x332c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x332c74: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x332c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x332c78: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x332C78u;
    {
        const bool branch_taken_0x332c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332C78u;
            // 0x332c7c: 0xac64e7d0  sw          $a0, -0x1830($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961104), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332c78) {
            ctx->pc = 0x332EFCu;
            goto label_332efc;
        }
    }
    ctx->pc = 0x332C80u;
label_332c80:
    // 0x332c80: 0x3214ffff  andi        $s4, $s0, 0xFFFF
    ctx->pc = 0x332c80u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_332c84:
    // 0x332c84: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x332c84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x332c88: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x332c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x332c8c: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x332c8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x332c90: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x332c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x332c94: 0x12363c  dsll32      $a2, $s2, 24
    ctx->pc = 0x332c94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) << (32 + 24));
    // 0x332c98: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x332c98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x332c9c: 0x2484ea20  addiu       $a0, $a0, -0x15E0
    ctx->pc = 0x332c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
    // 0x332ca0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x332ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x332ca4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x332ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x332ca8: 0x94930002  lhu         $s3, 0x2($a0)
    ctx->pc = 0x332ca8u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x332cac: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x332cacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x332cb0: 0x2442e7f0  addiu       $v0, $v0, -0x1810
    ctx->pc = 0x332cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961136));
    // 0x332cb4: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x332cb4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x332cb8: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x332cb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x332cbc: 0x82240000  lb          $a0, 0x0($s1)
    ctx->pc = 0x332cbcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x332cc0: 0xc0cd978  jal         func_3365E0
    ctx->pc = 0x332CC0u;
    SET_GPR_U32(ctx, 31, 0x332CC8u);
    ctx->pc = 0x332CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332CC0u;
            // 0x332cc4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3365E0u;
    if (runtime->hasFunction(0x3365E0u)) {
        auto targetFn = runtime->lookupFunction(0x3365E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332CC8u; }
        if (ctx->pc != 0x332CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003365E0_0x3365e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332CC8u; }
        if (ctx->pc != 0x332CC8u) { return; }
    }
    ctx->pc = 0x332CC8u;
label_332cc8:
    // 0x332cc8: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x332cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x332ccc: 0x3273ffff  andi        $s3, $s3, 0xFFFF
    ctx->pc = 0x332cccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x332cd0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x332cd0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x332cd4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x332cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x332cd8: 0x32630001  andi        $v1, $s3, 0x1
    ctx->pc = 0x332cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x332cdc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x332CDCu;
    {
        const bool branch_taken_0x332cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x332cdc) {
            ctx->pc = 0x332D00u;
            goto label_332d00;
        }
    }
    ctx->pc = 0x332CE4u;
    // 0x332ce4: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x332ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x332ce8: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x332CE8u;
    SET_GPR_U32(ctx, 31, 0x332CF0u);
    ctx->pc = 0x332CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332CE8u;
            // 0x332cec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332CF0u; }
        if (ctx->pc != 0x332CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332CF0u; }
        if (ctx->pc != 0x332CF0u) { return; }
    }
    ctx->pc = 0x332CF0u;
label_332cf0:
    // 0x332cf0: 0xc068b88  jal         func_1A2E20
    ctx->pc = 0x332CF0u;
    SET_GPR_U32(ctx, 31, 0x332CF8u);
    ctx->pc = 0x332CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332CF0u;
            // 0x332cf4: 0x320400ff  andi        $a0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2E20u;
    if (runtime->hasFunction(0x1A2E20u)) {
        auto targetFn = runtime->lookupFunction(0x1A2E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332CF8u; }
        if (ctx->pc != 0x332CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2E20_0x1a2e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332CF8u; }
        if (ctx->pc != 0x332CF8u) { return; }
    }
    ctx->pc = 0x332CF8u;
label_332cf8:
    // 0x332cf8: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x332CF8u;
    {
        const bool branch_taken_0x332cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x332cf8) {
            ctx->pc = 0x332E18u;
            goto label_332e18;
        }
    }
    ctx->pc = 0x332D00u;
label_332d00:
    // 0x332d00: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x332d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x332d04: 0x28810008  slti        $at, $a0, 0x8
    ctx->pc = 0x332d04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x332d08: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x332D08u;
    {
        const bool branch_taken_0x332d08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x332d08) {
            ctx->pc = 0x332D60u;
            goto label_332d60;
        }
    }
    ctx->pc = 0x332D10u;
    // 0x332d10: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x332d10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x332d14: 0x12363c  dsll32      $a2, $s2, 24
    ctx->pc = 0x332d14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) << (32 + 24));
    // 0x332d18: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x332d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x332d1c: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x332d1cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x332d20: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x332d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x332d24: 0x2442b250  addiu       $v0, $v0, -0x4DB0
    ctx->pc = 0x332d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947408));
    // 0x332d28: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x332d28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x332d2c: 0x2441021  addu        $v0, $s2, $a0
    ctx->pc = 0x332d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x332d30: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x332d30u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x332d34: 0xc0cd9b4  jal         func_3366D0
    ctx->pc = 0x332D34u;
    SET_GPR_U32(ctx, 31, 0x332D3Cu);
    ctx->pc = 0x332D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332D34u;
            // 0x332d38: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3366D0u;
    if (runtime->hasFunction(0x3366D0u)) {
        auto targetFn = runtime->lookupFunction(0x3366D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332D3Cu; }
        if (ctx->pc != 0x332D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003366D0_0x3366d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332D3Cu; }
        if (ctx->pc != 0x332D3Cu) { return; }
    }
    ctx->pc = 0x332D3Cu;
label_332d3c:
    // 0x332d3c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x332d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x332d40: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x332d40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x332d44: 0x2463e7f0  addiu       $v1, $v1, -0x1810
    ctx->pc = 0x332d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961136));
    // 0x332d48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x332d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x332d4c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x332d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x332d50: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x332d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x332d54: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x332D54u;
    {
        const bool branch_taken_0x332d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332D54u;
            // 0x332d58: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332d54) {
            ctx->pc = 0x332E18u;
            goto label_332e18;
        }
    }
    ctx->pc = 0x332D5Cu;
    // 0x332d5c: 0x0  nop
    ctx->pc = 0x332d5cu;
    // NOP
label_332d60:
    // 0x332d60: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x332d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x332d64: 0x1483002c  bne         $a0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x332D64u;
    {
        const bool branch_taken_0x332d64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x332d64) {
            ctx->pc = 0x332E18u;
            goto label_332e18;
        }
    }
    ctx->pc = 0x332D6Cu;
    // 0x332d6c: 0x326300a0  andi        $v1, $s3, 0xA0
    ctx->pc = 0x332d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)160);
    // 0x332d70: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x332D70u;
    {
        const bool branch_taken_0x332d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x332d70) {
            ctx->pc = 0x332DC8u;
            goto label_332dc8;
        }
    }
    ctx->pc = 0x332D78u;
    // 0x332d78: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x332d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x332d7c: 0x12363c  dsll32      $a2, $s2, 24
    ctx->pc = 0x332d7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) << (32 + 24));
    // 0x332d80: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x332d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x332d84: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x332d84u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x332d88: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x332d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x332d8c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x332d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x332d90: 0x2442b250  addiu       $v0, $v0, -0x4DB0
    ctx->pc = 0x332d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947408));
    // 0x332d94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x332d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x332d98: 0x80440008  lb          $a0, 0x8($v0)
    ctx->pc = 0x332d98u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x332d9c: 0xc0cd9b4  jal         func_3366D0
    ctx->pc = 0x332D9Cu;
    SET_GPR_U32(ctx, 31, 0x332DA4u);
    ctx->pc = 0x332DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332D9Cu;
            // 0x332da0: 0x24520008  addiu       $s2, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3366D0u;
    if (runtime->hasFunction(0x3366D0u)) {
        auto targetFn = runtime->lookupFunction(0x3366D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332DA4u; }
        if (ctx->pc != 0x332DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003366D0_0x3366d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332DA4u; }
        if (ctx->pc != 0x332DA4u) { return; }
    }
    ctx->pc = 0x332DA4u;
label_332da4:
    // 0x332da4: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x332da4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x332da8: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x332da8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x332dac: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x332DACu;
    {
        const bool branch_taken_0x332dac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x332dac) {
            ctx->pc = 0x332E18u;
            goto label_332e18;
        }
    }
    ctx->pc = 0x332DB4u;
    // 0x332db4: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x332db4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x332db8: 0xc068c3c  jal         func_1A30F0
    ctx->pc = 0x332DB8u;
    SET_GPR_U32(ctx, 31, 0x332DC0u);
    ctx->pc = 0x332DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332DB8u;
            // 0x332dbc: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A30F0u;
    if (runtime->hasFunction(0x1A30F0u)) {
        auto targetFn = runtime->lookupFunction(0x1A30F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332DC0u; }
        if (ctx->pc != 0x332DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A30F0_0x1a30f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332DC0u; }
        if (ctx->pc != 0x332DC0u) { return; }
    }
    ctx->pc = 0x332DC0u;
label_332dc0:
    // 0x332dc0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x332DC0u;
    {
        const bool branch_taken_0x332dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x332dc0) {
            ctx->pc = 0x332E18u;
            goto label_332e18;
        }
    }
    ctx->pc = 0x332DC8u;
label_332dc8:
    // 0x332dc8: 0x32632000  andi        $v1, $s3, 0x2000
    ctx->pc = 0x332dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8192);
    // 0x332dcc: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x332DCCu;
    {
        const bool branch_taken_0x332dcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x332dcc) {
            ctx->pc = 0x332E18u;
            goto label_332e18;
        }
    }
    ctx->pc = 0x332DD4u;
    // 0x332dd4: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x332dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x332dd8: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x332DD8u;
    SET_GPR_U32(ctx, 31, 0x332DE0u);
    ctx->pc = 0x332DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332DD8u;
            // 0x332ddc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332DE0u; }
        if (ctx->pc != 0x332DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332DE0u; }
        if (ctx->pc != 0x332DE0u) { return; }
    }
    ctx->pc = 0x332DE0u;
label_332de0:
    // 0x332de0: 0x1420c0  sll         $a0, $s4, 3
    ctx->pc = 0x332de0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x332de4: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x332de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x332de8: 0x2463b250  addiu       $v1, $v1, -0x4DB0
    ctx->pc = 0x332de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947408));
    // 0x332dec: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x332decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x332df0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x332df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x332df4: 0x90830008  lbu         $v1, 0x8($a0)
    ctx->pc = 0x332df4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x332df8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x332df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x332dfc: 0xa0830008  sb          $v1, 0x8($a0)
    ctx->pc = 0x332dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x332e00: 0x90830008  lbu         $v1, 0x8($a0)
    ctx->pc = 0x332e00u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x332e04: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x332E04u;
    {
        const bool branch_taken_0x332e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x332e04) {
            ctx->pc = 0x332E18u;
            goto label_332e18;
        }
    }
    ctx->pc = 0x332E0Cu;
    // 0x332e0c: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x332e0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x332e10: 0xc068c3c  jal         func_1A30F0
    ctx->pc = 0x332E10u;
    SET_GPR_U32(ctx, 31, 0x332E18u);
    ctx->pc = 0x332E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332E10u;
            // 0x332e14: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A30F0u;
    if (runtime->hasFunction(0x1A30F0u)) {
        auto targetFn = runtime->lookupFunction(0x1A30F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332E18u; }
        if (ctx->pc != 0x332E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A30F0_0x1a30f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332E18u; }
        if (ctx->pc != 0x332E18u) { return; }
    }
    ctx->pc = 0x332E18u;
label_332e18:
    // 0x332e18: 0x32722000  andi        $s2, $s3, 0x2000
    ctx->pc = 0x332e18u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8192);
    // 0x332e1c: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x332E1Cu;
    {
        const bool branch_taken_0x332e1c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x332e1c) {
            ctx->pc = 0x332E38u;
            goto label_332e38;
        }
    }
    ctx->pc = 0x332E24u;
    // 0x332e24: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x332e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x332e28: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x332e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x332e2c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x332E2Cu;
    {
        const bool branch_taken_0x332e2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x332e2c) {
            ctx->pc = 0x332E48u;
            goto label_332e48;
        }
    }
    ctx->pc = 0x332E34u;
    // 0x332e34: 0x0  nop
    ctx->pc = 0x332e34u;
    // NOP
label_332e38:
    // 0x332e38: 0x32634000  andi        $v1, $s3, 0x4000
    ctx->pc = 0x332e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16384);
    // 0x332e3c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x332E3Cu;
    {
        const bool branch_taken_0x332e3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x332e3c) {
            ctx->pc = 0x332E90u;
            goto label_332e90;
        }
    }
    ctx->pc = 0x332E44u;
    // 0x332e44: 0x0  nop
    ctx->pc = 0x332e44u;
    // NOP
label_332e48:
    // 0x332e48: 0xc068c60  jal         func_1A3180
    ctx->pc = 0x332E48u;
    SET_GPR_U32(ctx, 31, 0x332E50u);
    ctx->pc = 0x1A3180u;
    if (runtime->hasFunction(0x1A3180u)) {
        auto targetFn = runtime->lookupFunction(0x1A3180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332E50u; }
        if (ctx->pc != 0x332E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3180_0x1a3180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332E50u; }
        if (ctx->pc != 0x332E50u) { return; }
    }
    ctx->pc = 0x332E50u;
label_332e50:
    // 0x332e50: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x332E50u;
    {
        const bool branch_taken_0x332e50 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x332e50) {
            ctx->pc = 0x332E70u;
            goto label_332e70;
        }
    }
    ctx->pc = 0x332E58u;
    // 0x332e58: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x332e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x332e5c: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x332E5Cu;
    SET_GPR_U32(ctx, 31, 0x332E64u);
    ctx->pc = 0x332E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332E5Cu;
            // 0x332e60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332E64u; }
        if (ctx->pc != 0x332E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332E64u; }
        if (ctx->pc != 0x332E64u) { return; }
    }
    ctx->pc = 0x332E64u;
label_332e64:
    // 0x332e64: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x332E64u;
    {
        const bool branch_taken_0x332e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x332e64) {
            ctx->pc = 0x332E80u;
            goto label_332e80;
        }
    }
    ctx->pc = 0x332E6Cu;
    // 0x332e6c: 0x0  nop
    ctx->pc = 0x332e6cu;
    // NOP
label_332e70:
    // 0x332e70: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x332e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x332e74: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x332E74u;
    SET_GPR_U32(ctx, 31, 0x332E7Cu);
    ctx->pc = 0x332E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332E74u;
            // 0x332e78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332E7Cu; }
        if (ctx->pc != 0x332E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332E7Cu; }
        if (ctx->pc != 0x332E7Cu) { return; }
    }
    ctx->pc = 0x332E7Cu;
label_332e7c:
    // 0x332e7c: 0x0  nop
    ctx->pc = 0x332e7cu;
    // NOP
label_332e80:
    // 0x332e80: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x332e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x332e84: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x332e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x332e88: 0xa064e818  sb          $a0, -0x17E8($v1)
    ctx->pc = 0x332e88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
    // 0x332e8c: 0x0  nop
    ctx->pc = 0x332e8cu;
    // NOP
label_332e90:
    // 0x332e90: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x332e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x332e94: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x332e94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x332e98: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x332e98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x332e9c: 0x5460ff79  bnel        $v1, $zero, . + 4 + (-0x87 << 2)
    ctx->pc = 0x332E9Cu;
    {
        const bool branch_taken_0x332e9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x332e9c) {
            ctx->pc = 0x332EA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x332E9Cu;
            // 0x332ea0: 0x3214ffff  andi        $s4, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x332C84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_332c84;
        }
    }
    ctx->pc = 0x332EA4u;
    // 0x332ea4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x332EA4u;
    {
        const bool branch_taken_0x332ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x332ea4) {
            ctx->pc = 0x332EFCu;
            goto label_332efc;
        }
    }
    ctx->pc = 0x332EACu;
label_332eac:
    // 0x332eac: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x332eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x332eb0: 0x9064e810  lbu         $a0, -0x17F0($v1)
    ctx->pc = 0x332eb0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x332eb4: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x332eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x332eb8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x332EB8u;
    {
        const bool branch_taken_0x332eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x332eb8) {
            ctx->pc = 0x332EFCu;
            goto label_332efc;
        }
    }
    ctx->pc = 0x332EC0u;
    // 0x332ec0: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x332ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x332ec4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x332EC4u;
    {
        const bool branch_taken_0x332ec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x332ec4) {
            ctx->pc = 0x332EFCu;
            goto label_332efc;
        }
    }
    ctx->pc = 0x332ECCu;
    // 0x332ecc: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x332eccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x332ed0: 0xc0558e0  jal         func_156380
    ctx->pc = 0x332ED0u;
    SET_GPR_U32(ctx, 31, 0x332ED8u);
    ctx->pc = 0x332ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332ED0u;
            // 0x332ed4: 0x24841760  addiu       $a0, $a0, 0x1760 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (runtime->hasFunction(0x156380u)) {
        auto targetFn = runtime->lookupFunction(0x156380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332ED8u; }
        if (ctx->pc != 0x332ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156380_0x156380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332ED8u; }
        if (ctx->pc != 0x332ED8u) { return; }
    }
    ctx->pc = 0x332ED8u;
label_332ed8:
    // 0x332ed8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x332ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x332edc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x332edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x332ee0: 0xa064e820  sb          $a0, -0x17E0($v1)
    ctx->pc = 0x332ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961184), (uint8_t)GPR_U32(ctx, 4));
    // 0x332ee4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x332ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x332ee8: 0xac64e800  sw          $a0, -0x1800($v1)
    ctx->pc = 0x332ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961152), GPR_U32(ctx, 4));
    // 0x332eec: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x332eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x332ef0: 0xac60e7f8  sw          $zero, -0x1808($v1)
    ctx->pc = 0x332ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961144), GPR_U32(ctx, 0));
    // 0x332ef4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x332ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x332ef8: 0xa060e818  sb          $zero, -0x17E8($v1)
    ctx->pc = 0x332ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 0));
label_332efc:
    // 0x332efc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x332efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_332f00:
    // 0x332f00: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x332f00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x332f04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x332f04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x332f08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x332f08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x332f0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x332f0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x332f10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x332f10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x332f14: 0x3e00008  jr          $ra
    ctx->pc = 0x332F14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332F14u;
            // 0x332f18: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x332F1Cu;
    // 0x332f1c: 0x0  nop
    ctx->pc = 0x332f1cu;
    // NOP
label_332f20:
    // 0x332f20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x332f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x332f24: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x332f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x332f28: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x332f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x332f2c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x332f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x332f30: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x332f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x332f34: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x332f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x332f38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x332f38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332f3c: 0x3c10003d  lui         $s0, 0x3D
    ctx->pc = 0x332f3cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)61 << 16));
    // 0x332f40: 0xc0cc088  jal         func_330220
    ctx->pc = 0x332F40u;
    SET_GPR_U32(ctx, 31, 0x332F48u);
    ctx->pc = 0x332F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332F40u;
            // 0x332f44: 0x26101ef0  addiu       $s0, $s0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x330220u;
    if (runtime->hasFunction(0x330220u)) {
        auto targetFn = runtime->lookupFunction(0x330220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332F48u; }
        if (ctx->pc != 0x332F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00330220_0x330220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332F48u; }
        if (ctx->pc != 0x332F48u) { return; }
    }
    ctx->pc = 0x332F48u;
label_332f48:
    // 0x332f48: 0x8e330010  lw          $s3, 0x10($s1)
    ctx->pc = 0x332f48u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x332f4c: 0x82650000  lb          $a1, 0x0($s3)
    ctx->pc = 0x332f4cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x332f50: 0x86720004  lh          $s2, 0x4($s3)
    ctx->pc = 0x332f50u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x332f54: 0x2ca1000d  sltiu       $at, $a1, 0xD
    ctx->pc = 0x332f54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x332f58: 0x10200080  beqz        $at, . + 4 + (0x80 << 2)
    ctx->pc = 0x332F58u;
    {
        const bool branch_taken_0x332f58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x332F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332F58u;
            // 0x332f5c: 0x86710002  lh          $s1, 0x2($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332f58) {
            ctx->pc = 0x33315Cu;
            goto label_33315c;
        }
    }
    ctx->pc = 0x332F60u;
    // 0x332f60: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x332f60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x332f64: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x332f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x332f68: 0x248447e0  addiu       $a0, $a0, 0x47E0
    ctx->pc = 0x332f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18400));
    // 0x332f6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x332f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x332f70: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x332f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x332f74: 0x600008  jr          $v1
    ctx->pc = 0x332F74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x332F7Cu: goto label_332f7c;
            case 0x332F94u: goto label_332f94;
            case 0x332FCCu: goto label_332fcc;
            case 0x333058u: goto label_333058;
            case 0x3330B8u: goto label_3330b8;
            case 0x33314Cu: goto label_33314c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x332F7Cu;
label_332f7c:
    // 0x332f7c: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x332f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x332f80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x332f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332f84: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x332F84u;
    SET_GPR_U32(ctx, 31, 0x332F8Cu);
    ctx->pc = 0x332F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332F84u;
            // 0x332f88: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332F8Cu; }
        if (ctx->pc != 0x332F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332F8Cu; }
        if (ctx->pc != 0x332F8Cu) { return; }
    }
    ctx->pc = 0x332F8Cu;
label_332f8c:
    // 0x332f8c: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x332F8Cu;
    {
        const bool branch_taken_0x332f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332F8Cu;
            // 0x332f90: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332f8c) {
            ctx->pc = 0x333160u;
            goto label_333160;
        }
    }
    ctx->pc = 0x332F94u;
label_332f94:
    // 0x332f94: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x332f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x332f98: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x332F98u;
    {
        const bool branch_taken_0x332f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x332f98) {
            ctx->pc = 0x332F9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x332F98u;
            // 0x332f9c: 0x26040138  addiu       $a0, $s0, 0x138 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 312));
        ctx->in_delay_slot = false;
            ctx->pc = 0x332FB8u;
            goto label_332fb8;
        }
    }
    ctx->pc = 0x332FA0u;
    // 0x332fa0: 0x2604012c  addiu       $a0, $s0, 0x12C
    ctx->pc = 0x332fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 300));
    // 0x332fa4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x332fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332fa8: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x332FA8u;
    SET_GPR_U32(ctx, 31, 0x332FB0u);
    ctx->pc = 0x332FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332FA8u;
            // 0x332fac: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332FB0u; }
        if (ctx->pc != 0x332FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332FB0u; }
        if (ctx->pc != 0x332FB0u) { return; }
    }
    ctx->pc = 0x332FB0u;
label_332fb0:
    // 0x332fb0: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x332FB0u;
    {
        const bool branch_taken_0x332fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x332fb0) {
            ctx->pc = 0x33315Cu;
            goto label_33315c;
        }
    }
    ctx->pc = 0x332FB8u;
label_332fb8:
    // 0x332fb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x332fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332fbc: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x332FBCu;
    SET_GPR_U32(ctx, 31, 0x332FC4u);
    ctx->pc = 0x332FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332FBCu;
            // 0x332fc0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332FC4u; }
        if (ctx->pc != 0x332FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332FC4u; }
        if (ctx->pc != 0x332FC4u) { return; }
    }
    ctx->pc = 0x332FC4u;
label_332fc4:
    // 0x332fc4: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x332FC4u;
    {
        const bool branch_taken_0x332fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x332fc4) {
            ctx->pc = 0x33315Cu;
            goto label_33315c;
        }
    }
    ctx->pc = 0x332FCCu;
label_332fcc:
    // 0x332fcc: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x332fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x332fd0: 0x24a3fffe  addiu       $v1, $a1, -0x2
    ctx->pc = 0x332fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x332fd4: 0x244220c8  addiu       $v0, $v0, 0x20C8
    ctx->pc = 0x332fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8392));
    // 0x332fd8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x332fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332fdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x332fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x332fe0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x332fe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332fe4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x332fe4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x332fe8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x332fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x332fec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x332fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x332ff0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x332ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x332ff4: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x332FF4u;
    SET_GPR_U32(ctx, 31, 0x332FFCu);
    ctx->pc = 0x332FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x332FF4u;
            // 0x332ff8: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332FFCu; }
        if (ctx->pc != 0x332FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x332FFCu; }
        if (ctx->pc != 0x332FFCu) { return; }
    }
    ctx->pc = 0x332FFCu;
label_332ffc:
    // 0x332ffc: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x332ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x333000: 0x260401a4  addiu       $a0, $s0, 0x1A4
    ctx->pc = 0x333000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 420));
    // 0x333004: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x333004u;
    SET_GPR_U32(ctx, 31, 0x33300Cu);
    ctx->pc = 0x333008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333004u;
            // 0x333008: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33300Cu; }
        if (ctx->pc != 0x33300Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33300Cu; }
        if (ctx->pc != 0x33300Cu) { return; }
    }
    ctx->pc = 0x33300Cu;
label_33300c:
    // 0x33300c: 0x8e67001c  lw          $a3, 0x1C($s3)
    ctx->pc = 0x33300cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x333010: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x333010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x333014: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x333014u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x333018: 0x2463b250  addiu       $v1, $v1, -0x4DB0
    ctx->pc = 0x333018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947408));
    // 0x33301c: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x33301cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x333020: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x333020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333024: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x333024u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x333028: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x333028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x33302c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x33302cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x333030: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x333030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x333034: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x333034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x333038: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x333038u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33303c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x33303cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x333040: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x333040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x333044: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x333044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x333048: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x333048u;
    SET_GPR_U32(ctx, 31, 0x333050u);
    ctx->pc = 0x33304Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333048u;
            // 0x33304c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333050u; }
        if (ctx->pc != 0x333050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333050u; }
        if (ctx->pc != 0x333050u) { return; }
    }
    ctx->pc = 0x333050u;
label_333050:
    // 0x333050: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x333050u;
    {
        const bool branch_taken_0x333050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333050) {
            ctx->pc = 0x33315Cu;
            goto label_33315c;
        }
    }
    ctx->pc = 0x333058u;
label_333058:
    // 0x333058: 0x260400fc  addiu       $a0, $s0, 0xFC
    ctx->pc = 0x333058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 252));
    // 0x33305c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33305cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333060: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x333060u;
    SET_GPR_U32(ctx, 31, 0x333068u);
    ctx->pc = 0x333064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333060u;
            // 0x333064: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333068u; }
        if (ctx->pc != 0x333068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333068u; }
        if (ctx->pc != 0x333068u) { return; }
    }
    ctx->pc = 0x333068u;
label_333068:
    // 0x333068: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x333068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x33306c: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x33306cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x333070: 0x2442b258  addiu       $v0, $v0, -0x4DA8
    ctx->pc = 0x333070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947416));
    // 0x333074: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x333074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x333078: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x333078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33307c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33307cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x333080: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x333080u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x333084: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x333084u;
    {
        const bool branch_taken_0x333084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x333084) {
            ctx->pc = 0x333088u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x333084u;
            // 0x333088: 0x26250080  addiu       $a1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3330A4u;
            goto label_3330a4;
        }
    }
    ctx->pc = 0x33308Cu;
    // 0x33308c: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x33308cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x333090: 0x26040108  addiu       $a0, $s0, 0x108
    ctx->pc = 0x333090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 264));
    // 0x333094: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x333094u;
    SET_GPR_U32(ctx, 31, 0x33309Cu);
    ctx->pc = 0x333098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333094u;
            // 0x333098: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33309Cu; }
        if (ctx->pc != 0x33309Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33309Cu; }
        if (ctx->pc != 0x33309Cu) { return; }
    }
    ctx->pc = 0x33309Cu;
label_33309c:
    // 0x33309c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x33309Cu;
    {
        const bool branch_taken_0x33309c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33309c) {
            ctx->pc = 0x33315Cu;
            goto label_33315c;
        }
    }
    ctx->pc = 0x3330A4u;
label_3330a4:
    // 0x3330a4: 0x26040114  addiu       $a0, $s0, 0x114
    ctx->pc = 0x3330a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 276));
    // 0x3330a8: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x3330A8u;
    SET_GPR_U32(ctx, 31, 0x3330B0u);
    ctx->pc = 0x3330ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3330A8u;
            // 0x3330ac: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3330B0u; }
        if (ctx->pc != 0x3330B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3330B0u; }
        if (ctx->pc != 0x3330B0u) { return; }
    }
    ctx->pc = 0x3330B0u;
label_3330b0:
    // 0x3330b0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x3330B0u;
    {
        const bool branch_taken_0x3330b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3330b0) {
            ctx->pc = 0x33315Cu;
            goto label_33315c;
        }
    }
    ctx->pc = 0x3330B8u;
label_3330b8:
    // 0x3330b8: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x3330b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3330bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3330bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3330c0: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x3330C0u;
    SET_GPR_U32(ctx, 31, 0x3330C8u);
    ctx->pc = 0x3330C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3330C0u;
            // 0x3330c4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3330C8u; }
        if (ctx->pc != 0x3330C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3330C8u; }
        if (ctx->pc != 0x3330C8u) { return; }
    }
    ctx->pc = 0x3330C8u;
label_3330c8:
    // 0x3330c8: 0x26040180  addiu       $a0, $s0, 0x180
    ctx->pc = 0x3330c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x3330cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3330ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3330d0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3330d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3330d4: 0x2407a828  addiu       $a3, $zero, -0x57D8
    ctx->pc = 0x3330d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944808));
    // 0x3330d8: 0xc0c0b2c  jal         func_302CB0
    ctx->pc = 0x3330D8u;
    SET_GPR_U32(ctx, 31, 0x3330E0u);
    ctx->pc = 0x3330DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3330D8u;
            // 0x3330dc: 0x240800a0  addiu       $t0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302CB0u;
    if (runtime->hasFunction(0x302CB0u)) {
        auto targetFn = runtime->lookupFunction(0x302CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3330E0u; }
        if (ctx->pc != 0x3330E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302CB0_0x302cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3330E0u; }
        if (ctx->pc != 0x3330E0u) { return; }
    }
    ctx->pc = 0x3330E0u;
label_3330e0:
    // 0x3330e0: 0x3c0b003d  lui         $t3, 0x3D
    ctx->pc = 0x3330e0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)61 << 16));
    // 0x3330e4: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x3330e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x3330e8: 0x256b207c  addiu       $t3, $t3, 0x207C
    ctx->pc = 0x3330e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8316));
    // 0x3330ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3330ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3330f0: 0x95680006  lhu         $t0, 0x6($t3)
    ctx->pc = 0x3330f0u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x3330f4: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3330f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3330f8: 0x2645fff0  addiu       $a1, $s2, -0x10
    ctx->pc = 0x3330f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
    // 0x3330fc: 0x2406a828  addiu       $a2, $zero, -0x57D8
    ctx->pc = 0x3330fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944808));
    // 0x333100: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x333100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x333104: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x333104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x333108: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x333108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x33310c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x33310cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x333110: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x333110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x333114: 0x95690000  lhu         $t1, 0x0($t3)
    ctx->pc = 0x333114u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x333118: 0x956a0002  lhu         $t2, 0x2($t3)
    ctx->pc = 0x333118u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x33311c: 0x956b0004  lhu         $t3, 0x4($t3)
    ctx->pc = 0x33311cu;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x333120: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x333120u;
    SET_GPR_U32(ctx, 31, 0x333128u);
    ctx->pc = 0x333124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333120u;
            // 0x333124: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (runtime->hasFunction(0x302EA0u)) {
        auto targetFn = runtime->lookupFunction(0x302EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333128u; }
        if (ctx->pc != 0x333128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302EA0_0x302ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333128u; }
        if (ctx->pc != 0x333128u) { return; }
    }
    ctx->pc = 0x333128u;
label_333128:
    // 0x333128: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x333128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x33312c: 0x26250060  addiu       $a1, $s1, 0x60
    ctx->pc = 0x33312cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x333130: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x333130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333134: 0x24842088  addiu       $a0, $a0, 0x2088
    ctx->pc = 0x333134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8328));
    // 0x333138: 0x2407a828  addiu       $a3, $zero, -0x57D8
    ctx->pc = 0x333138u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944808));
    // 0x33313c: 0xc0c0b2c  jal         func_302CB0
    ctx->pc = 0x33313Cu;
    SET_GPR_U32(ctx, 31, 0x333144u);
    ctx->pc = 0x333140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33313Cu;
            // 0x333140: 0x240800a0  addiu       $t0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302CB0u;
    if (runtime->hasFunction(0x302CB0u)) {
        auto targetFn = runtime->lookupFunction(0x302CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333144u; }
        if (ctx->pc != 0x333144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302CB0_0x302cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333144u; }
        if (ctx->pc != 0x333144u) { return; }
    }
    ctx->pc = 0x333144u;
label_333144:
    // 0x333144: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x333144u;
    {
        const bool branch_taken_0x333144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333144) {
            ctx->pc = 0x33315Cu;
            goto label_33315c;
        }
    }
    ctx->pc = 0x33314Cu;
label_33314c:
    // 0x33314c: 0x26040144  addiu       $a0, $s0, 0x144
    ctx->pc = 0x33314cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 324));
    // 0x333150: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x333150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333154: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x333154u;
    SET_GPR_U32(ctx, 31, 0x33315Cu);
    ctx->pc = 0x333158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333154u;
            // 0x333158: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33315Cu; }
        if (ctx->pc != 0x33315Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33315Cu; }
        if (ctx->pc != 0x33315Cu) { return; }
    }
    ctx->pc = 0x33315Cu;
label_33315c:
    // 0x33315c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x33315cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_333160:
    // 0x333160: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x333160u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x333164: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x333164u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x333168: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x333168u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33316c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x33316cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x333170: 0x3e00008  jr          $ra
    ctx->pc = 0x333170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x333170u;
            // 0x333174: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x333178u;
    // 0x333178: 0x0  nop
    ctx->pc = 0x333178u;
    // NOP
    // 0x33317c: 0x0  nop
    ctx->pc = 0x33317cu;
    // NOP
label_333180:
    // 0x333180: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x333180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x333184: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x333184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x333188: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x333188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x33318c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x33318cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x333190: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x333190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x333194: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x333194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x333198: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x333198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x33319c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33319Cu;
    {
        const bool branch_taken_0x33319c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3331A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33319Cu;
            // 0x3331a0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33319c) {
            ctx->pc = 0x3331ACu;
            goto label_3331ac;
        }
    }
    ctx->pc = 0x3331A4u;
    // 0x3331a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3331A4u;
    {
        const bool branch_taken_0x3331a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3331A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3331A4u;
            // 0x3331a8: 0x24100154  addiu       $s0, $zero, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3331a4) {
            ctx->pc = 0x3331B0u;
            goto label_3331b0;
        }
    }
    ctx->pc = 0x3331ACu;
label_3331ac:
    // 0x3331ac: 0x24100054  addiu       $s0, $zero, 0x54
    ctx->pc = 0x3331acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_3331b0:
    // 0x3331b0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3331b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3331b4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3331b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3331b8: 0x2442e7f0  addiu       $v0, $v0, -0x1810
    ctx->pc = 0x3331b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961136));
    // 0x3331bc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3331bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3331c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3331c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3331c4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3331c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3331c8: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x3331c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x3331cc: 0x14820021  bne         $a0, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3331CCu;
    {
        const bool branch_taken_0x3331cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3331D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3331CCu;
            // 0x3331d0: 0x2471006f  addiu       $s1, $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 111));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3331cc) {
            ctx->pc = 0x333254u;
            goto label_333254;
        }
    }
    ctx->pc = 0x3331D4u;
    // 0x3331d4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x3331d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x3331d8: 0x240501e0  addiu       $a1, $zero, 0x1E0
    ctx->pc = 0x3331d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x3331dc: 0x2484204c  addiu       $a0, $a0, 0x204C
    ctx->pc = 0x3331dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8268));
    // 0x3331e0: 0x24060190  addiu       $a2, $zero, 0x190
    ctx->pc = 0x3331e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x3331e4: 0xc0c0b14  jal         func_302C50
    ctx->pc = 0x3331E4u;
    SET_GPR_U32(ctx, 31, 0x3331ECu);
    ctx->pc = 0x3331E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3331E4u;
            // 0x3331e8: 0x2407a829  addiu       $a3, $zero, -0x57D7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302C50u;
    if (runtime->hasFunction(0x302C50u)) {
        auto targetFn = runtime->lookupFunction(0x302C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3331ECu; }
        if (ctx->pc != 0x3331ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302C50_0x302c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3331ECu; }
        if (ctx->pc != 0x3331ECu) { return; }
    }
    ctx->pc = 0x3331ECu;
label_3331ec:
    // 0x3331ec: 0x3c0b003d  lui         $t3, 0x3D
    ctx->pc = 0x3331ecu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)61 << 16));
    // 0x3331f0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3331f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3331f4: 0x256b2058  addiu       $t3, $t3, 0x2058
    ctx->pc = 0x3331f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8280));
    // 0x3331f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3331f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3331fc: 0x95680006  lhu         $t0, 0x6($t3)
    ctx->pc = 0x3331fcu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x333200: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x333200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x333204: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x333204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x333208: 0x2406a829  addiu       $a2, $zero, -0x57D7
    ctx->pc = 0x333208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
    // 0x33320c: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x33320cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x333210: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x333210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x333214: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x333214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x333218: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x333218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x33321c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x33321cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x333220: 0x95690000  lhu         $t1, 0x0($t3)
    ctx->pc = 0x333220u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x333224: 0x956a0002  lhu         $t2, 0x2($t3)
    ctx->pc = 0x333224u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x333228: 0x956b0004  lhu         $t3, 0x4($t3)
    ctx->pc = 0x333228u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x33322c: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x33322Cu;
    SET_GPR_U32(ctx, 31, 0x333234u);
    ctx->pc = 0x333230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33322Cu;
            // 0x333230: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (runtime->hasFunction(0x302EA0u)) {
        auto targetFn = runtime->lookupFunction(0x302EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333234u; }
        if (ctx->pc != 0x333234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302EA0_0x302ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333234u; }
        if (ctx->pc != 0x333234u) { return; }
    }
    ctx->pc = 0x333234u;
label_333234:
    // 0x333234: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x333234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x333238: 0x24050240  addiu       $a1, $zero, 0x240
    ctx->pc = 0x333238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    // 0x33323c: 0x24842064  addiu       $a0, $a0, 0x2064
    ctx->pc = 0x33323cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8292));
    // 0x333240: 0x24060190  addiu       $a2, $zero, 0x190
    ctx->pc = 0x333240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x333244: 0xc0c0b14  jal         func_302C50
    ctx->pc = 0x333244u;
    SET_GPR_U32(ctx, 31, 0x33324Cu);
    ctx->pc = 0x333248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333244u;
            // 0x333248: 0x2407a829  addiu       $a3, $zero, -0x57D7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302C50u;
    if (runtime->hasFunction(0x302C50u)) {
        auto targetFn = runtime->lookupFunction(0x302C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33324Cu; }
        if (ctx->pc != 0x33324Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302C50_0x302c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33324Cu; }
        if (ctx->pc != 0x33324Cu) { return; }
    }
    ctx->pc = 0x33324Cu;
label_33324c:
    // 0x33324c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x33324Cu;
    {
        const bool branch_taken_0x33324c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33324c) {
            ctx->pc = 0x3332CCu;
            goto label_3332cc;
        }
    }
    ctx->pc = 0x333254u;
label_333254:
    // 0x333254: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x333254u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x333258: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x333258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33325c: 0x248420a0  addiu       $a0, $a0, 0x20A0
    ctx->pc = 0x33325cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8352));
    // 0x333260: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x333260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333264: 0xc0c0b14  jal         func_302C50
    ctx->pc = 0x333264u;
    SET_GPR_U32(ctx, 31, 0x33326Cu);
    ctx->pc = 0x333268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333264u;
            // 0x333268: 0x2407a829  addiu       $a3, $zero, -0x57D7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302C50u;
    if (runtime->hasFunction(0x302C50u)) {
        auto targetFn = runtime->lookupFunction(0x302C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33326Cu; }
        if (ctx->pc != 0x33326Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302C50_0x302c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33326Cu; }
        if (ctx->pc != 0x33326Cu) { return; }
    }
    ctx->pc = 0x33326Cu;
label_33326c:
    // 0x33326c: 0x3c0b003d  lui         $t3, 0x3D
    ctx->pc = 0x33326cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)61 << 16));
    // 0x333270: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x333270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x333274: 0x256b20ac  addiu       $t3, $t3, 0x20AC
    ctx->pc = 0x333274u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8364));
    // 0x333278: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x333278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33327c: 0x95680006  lhu         $t0, 0x6($t3)
    ctx->pc = 0x33327cu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x333280: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x333280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x333284: 0x2625fff0  addiu       $a1, $s1, -0x10
    ctx->pc = 0x333284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x333288: 0x2406a829  addiu       $a2, $zero, -0x57D7
    ctx->pc = 0x333288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
    // 0x33328c: 0x240700b0  addiu       $a3, $zero, 0xB0
    ctx->pc = 0x33328cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x333290: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x333290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x333294: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x333294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x333298: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x333298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x33329c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x33329cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x3332a0: 0x95690000  lhu         $t1, 0x0($t3)
    ctx->pc = 0x3332a0u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3332a4: 0x956a0002  lhu         $t2, 0x2($t3)
    ctx->pc = 0x3332a4u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x3332a8: 0x956b0004  lhu         $t3, 0x4($t3)
    ctx->pc = 0x3332a8u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x3332ac: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x3332ACu;
    SET_GPR_U32(ctx, 31, 0x3332B4u);
    ctx->pc = 0x3332B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3332ACu;
            // 0x3332b0: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (runtime->hasFunction(0x302EA0u)) {
        auto targetFn = runtime->lookupFunction(0x302EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3332B4u; }
        if (ctx->pc != 0x3332B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302EA0_0x302ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3332B4u; }
        if (ctx->pc != 0x3332B4u) { return; }
    }
    ctx->pc = 0x3332B4u;
label_3332b4:
    // 0x3332b4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x3332b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x3332b8: 0x260500d0  addiu       $a1, $s0, 0xD0
    ctx->pc = 0x3332b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x3332bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3332bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3332c0: 0x248420b8  addiu       $a0, $a0, 0x20B8
    ctx->pc = 0x3332c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8376));
    // 0x3332c4: 0xc0c0b14  jal         func_302C50
    ctx->pc = 0x3332C4u;
    SET_GPR_U32(ctx, 31, 0x3332CCu);
    ctx->pc = 0x3332C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3332C4u;
            // 0x3332c8: 0x2407a829  addiu       $a3, $zero, -0x57D7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302C50u;
    if (runtime->hasFunction(0x302C50u)) {
        auto targetFn = runtime->lookupFunction(0x302C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3332CCu; }
        if (ctx->pc != 0x3332CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302C50_0x302c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3332CCu; }
        if (ctx->pc != 0x3332CCu) { return; }
    }
    ctx->pc = 0x3332CCu;
label_3332cc:
    // 0x3332cc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3332ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3332d0: 0x9063e818  lbu         $v1, -0x17E8($v1)
    ctx->pc = 0x3332d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
    // 0x3332d4: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x3332d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3332d8: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3332D8u;
    {
        const bool branch_taken_0x3332d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3332d8) {
            ctx->pc = 0x3332DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3332D8u;
            // 0x3332dc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3332ECu;
            goto label_3332ec;
        }
    }
    ctx->pc = 0x3332E0u;
    // 0x3332e0: 0xc055728  jal         func_155CA0
    ctx->pc = 0x3332E0u;
    SET_GPR_U32(ctx, 31, 0x3332E8u);
    ctx->pc = 0x3332E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3332E0u;
            // 0x3332e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3332E8u; }
        if (ctx->pc != 0x3332E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3332E8u; }
        if (ctx->pc != 0x3332E8u) { return; }
    }
    ctx->pc = 0x3332E8u;
label_3332e8:
    // 0x3332e8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3332e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3332ec:
    // 0x3332ec: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3332ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3332f0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3332f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3332f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3332f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3332f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3332F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3332FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3332F8u;
            // 0x3332fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x333300u;
label_333300:
    // 0x333300: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x333300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x333304: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x333304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x333308: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x333308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x33330c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x33330cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x333310: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x333310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x333314: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x333314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x333318: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x333318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33331c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33331cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x333320: 0x9064e818  lbu         $a0, -0x17E8($v1)
    ctx->pc = 0x333320u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
    // 0x333324: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x333324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x333328: 0x10830148  beq         $a0, $v1, . + 4 + (0x148 << 2)
    ctx->pc = 0x333328u;
    {
        const bool branch_taken_0x333328 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x333328) {
            ctx->pc = 0x33384Cu;
            goto label_33384c;
        }
    }
    ctx->pc = 0x333330u;
    // 0x333330: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x333330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x333334: 0x508300ac  beql        $a0, $v1, . + 4 + (0xAC << 2)
    ctx->pc = 0x333334u;
    {
        const bool branch_taken_0x333334 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x333334) {
            ctx->pc = 0x333338u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x333334u;
            // 0x333338: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3335E8u;
            goto label_3335e8;
        }
    }
    ctx->pc = 0x33333Cu;
    // 0x33333c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33333cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x333340: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x333340u;
    {
        const bool branch_taken_0x333340 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x333340) {
            ctx->pc = 0x3333B4u;
            goto label_3333b4;
        }
    }
    ctx->pc = 0x333348u;
    // 0x333348: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x333348u;
    {
        const bool branch_taken_0x333348 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x333348) {
            ctx->pc = 0x333358u;
            goto label_333358;
        }
    }
    ctx->pc = 0x333350u;
    // 0x333350: 0x10000170  b           . + 4 + (0x170 << 2)
    ctx->pc = 0x333350u;
    {
        const bool branch_taken_0x333350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x333350u;
            // 0x333354: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333350) {
            ctx->pc = 0x333914u;
            goto label_333914;
        }
    }
    ctx->pc = 0x333358u;
label_333358:
    // 0x333358: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x333358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33335c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x33335cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x333360: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x333360u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x333364: 0x50430006  beql        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x333364u;
    {
        const bool branch_taken_0x333364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x333364) {
            ctx->pc = 0x333368u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x333364u;
            // 0x333368: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x333380u;
            goto label_333380;
        }
    }
    ctx->pc = 0x33336Cu;
    // 0x33336c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x33336cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333370: 0xc0c06b8  jal         func_301AE0
    ctx->pc = 0x333370u;
    SET_GPR_U32(ctx, 31, 0x333378u);
    ctx->pc = 0x333374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333370u;
            // 0x333374: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301AE0u;
    if (runtime->hasFunction(0x301AE0u)) {
        auto targetFn = runtime->lookupFunction(0x301AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333378u; }
        if (ctx->pc != 0x333378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301AE0_0x301ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333378u; }
        if (ctx->pc != 0x333378u) { return; }
    }
    ctx->pc = 0x333378u;
label_333378:
    // 0x333378: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x333378u;
    {
        const bool branch_taken_0x333378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333378) {
            ctx->pc = 0x333388u;
            goto label_333388;
        }
    }
    ctx->pc = 0x333380u;
label_333380:
    // 0x333380: 0xc0c06b8  jal         func_301AE0
    ctx->pc = 0x333380u;
    SET_GPR_U32(ctx, 31, 0x333388u);
    ctx->pc = 0x333384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333380u;
            // 0x333384: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301AE0u;
    if (runtime->hasFunction(0x301AE0u)) {
        auto targetFn = runtime->lookupFunction(0x301AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333388u; }
        if (ctx->pc != 0x333388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301AE0_0x301ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333388u; }
        if (ctx->pc != 0x333388u) { return; }
    }
    ctx->pc = 0x333388u;
label_333388:
    // 0x333388: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x333388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33338c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33338cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x333390: 0xac60e7f4  sw          $zero, -0x180C($v1)
    ctx->pc = 0x333390u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961140), GPR_U32(ctx, 0));
    // 0x333394: 0xc0cc0bc  jal         func_3302F0
    ctx->pc = 0x333394u;
    SET_GPR_U32(ctx, 31, 0x33339Cu);
    ctx->pc = 0x333398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333394u;
            // 0x333398: 0xac40e7f0  sw          $zero, -0x1810($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3302F0u;
    if (runtime->hasFunction(0x3302F0u)) {
        auto targetFn = runtime->lookupFunction(0x3302F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33339Cu; }
        if (ctx->pc != 0x33339Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003302F0_0x3302f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33339Cu; }
        if (ctx->pc != 0x33339Cu) { return; }
    }
    ctx->pc = 0x33339Cu;
label_33339c:
    // 0x33339c: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33339cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3333a0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3333a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3333a4: 0x9084e818  lbu         $a0, -0x17E8($a0)
    ctx->pc = 0x3333a4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294961176)));
    // 0x3333a8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3333a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3333ac: 0x10000158  b           . + 4 + (0x158 << 2)
    ctx->pc = 0x3333ACu;
    {
        const bool branch_taken_0x3333ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3333B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3333ACu;
            // 0x3333b0: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3333ac) {
            ctx->pc = 0x333910u;
            goto label_333910;
        }
    }
    ctx->pc = 0x3333B4u;
label_3333b4:
    // 0x3333b4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3333b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3333b8: 0x8c63e7d0  lw          $v1, -0x1830($v1)
    ctx->pc = 0x3333b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961104)));
    // 0x3333bc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3333bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3333c0: 0x14600067  bnez        $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x3333C0u;
    {
        const bool branch_taken_0x3333c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3333c0) {
            ctx->pc = 0x333560u;
            goto label_333560;
        }
    }
    ctx->pc = 0x3333C8u;
    // 0x3333c8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3333c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3333cc: 0x8c63e7c8  lw          $v1, -0x1838($v1)
    ctx->pc = 0x3333ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961096)));
    // 0x3333d0: 0x2861000d  slti        $at, $v1, 0xD
    ctx->pc = 0x3333d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x3333d4: 0x10200062  beqz        $at, . + 4 + (0x62 << 2)
    ctx->pc = 0x3333D4u;
    {
        const bool branch_taken_0x3333d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3333d4) {
            ctx->pc = 0x333560u;
            goto label_333560;
        }
    }
    ctx->pc = 0x3333DCu;
    // 0x3333dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3333dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3333e0:
    // 0x3333e0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3333e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3333e4: 0x8c66e7c8  lw          $a2, -0x1838($v1)
    ctx->pc = 0x3333e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961096)));
    // 0x3333e8: 0x2cc1000b  sltiu       $at, $a2, 0xB
    ctx->pc = 0x3333e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x3333ec: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x3333ECu;
    {
        const bool branch_taken_0x3333ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3333ec) {
            ctx->pc = 0x333480u;
            goto label_333480;
        }
    }
    ctx->pc = 0x3333F4u;
    // 0x3333f4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3333f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3333f8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3333f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3333fc: 0x24844820  addiu       $a0, $a0, 0x4820
    ctx->pc = 0x3333fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    // 0x333400: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x333400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x333404: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x333404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x333408: 0x600008  jr          $v1
    ctx->pc = 0x333408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x333410u: goto label_333410;
            case 0x333480u: goto label_333480;
            default: break;
        }
        return;
    }
    ctx->pc = 0x333410u;
label_333410:
    // 0x333410: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x333410u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x333414: 0x14a0000c  bnez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x333414u;
    {
        const bool branch_taken_0x333414 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x333414) {
            ctx->pc = 0x333448u;
            goto label_333448;
        }
    }
    ctx->pc = 0x33341Cu;
    // 0x33341c: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x33341cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x333420: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x333420u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x333424: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x333424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x333428: 0x24842f20  addiu       $a0, $a0, 0x2F20
    ctx->pc = 0x333428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12064));
    // 0x33342c: 0x2407ff40  addiu       $a3, $zero, -0xC0
    ctx->pc = 0x33342cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967104));
    // 0x333430: 0x24480050  addiu       $t0, $v0, 0x50
    ctx->pc = 0x333430u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x333434: 0xc0cdba8  jal         func_336EA0
    ctx->pc = 0x333434u;
    SET_GPR_U32(ctx, 31, 0x33343Cu);
    ctx->pc = 0x333438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333434u;
            // 0x333438: 0x24090060  addiu       $t1, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x336EA0u;
    if (runtime->hasFunction(0x336EA0u)) {
        auto targetFn = runtime->lookupFunction(0x336EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33343Cu; }
        if (ctx->pc != 0x33343Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00336EA0_0x336ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33343Cu; }
        if (ctx->pc != 0x33343Cu) { return; }
    }
    ctx->pc = 0x33343Cu;
label_33343c:
    // 0x33343c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x33343Cu;
    {
        const bool branch_taken_0x33343c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33343c) {
            ctx->pc = 0x333480u;
            goto label_333480;
        }
    }
    ctx->pc = 0x333444u;
    // 0x333444: 0x0  nop
    ctx->pc = 0x333444u;
    // NOP
label_333448:
    // 0x333448: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x333448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x33344c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x33344cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x333450: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x333450u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x333454: 0x24842f20  addiu       $a0, $a0, 0x2F20
    ctx->pc = 0x333454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12064));
    // 0x333458: 0x24480050  addiu       $t0, $v0, 0x50
    ctx->pc = 0x333458u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x33345c: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x33345cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x333460: 0xc0cdba8  jal         func_336EA0
    ctx->pc = 0x333460u;
    SET_GPR_U32(ctx, 31, 0x333468u);
    ctx->pc = 0x333464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333460u;
            // 0x333464: 0x24090160  addiu       $t1, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x336EA0u;
    if (runtime->hasFunction(0x336EA0u)) {
        auto targetFn = runtime->lookupFunction(0x336EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333468u; }
        if (ctx->pc != 0x333468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00336EA0_0x336ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333468u; }
        if (ctx->pc != 0x333468u) { return; }
    }
    ctx->pc = 0x333468u;
label_333468:
    // 0x333468: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x333468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33346c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33346cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x333470: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x333470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x333474: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x333474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x333478: 0xac64e7c8  sw          $a0, -0x1838($v1)
    ctx->pc = 0x333478u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
    // 0x33347c: 0x0  nop
    ctx->pc = 0x33347cu;
    // NOP
label_333480:
    // 0x333480: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x333480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x333484: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x333484u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x333488: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x333488u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x33348c: 0x1460ffd4  bnez        $v1, . + 4 + (-0x2C << 2)
    ctx->pc = 0x33348Cu;
    {
        const bool branch_taken_0x33348c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33348c) {
            ctx->pc = 0x3333E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3333e0;
        }
    }
    ctx->pc = 0x333494u;
    // 0x333494: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x333494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x333498: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x333498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x33349c: 0x8c63e7c8  lw          $v1, -0x1838($v1)
    ctx->pc = 0x33349cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961096)));
    // 0x3334a0: 0x10660023  beq         $v1, $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x3334A0u;
    {
        const bool branch_taken_0x3334a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x3334a0) {
            ctx->pc = 0x333530u;
            goto label_333530;
        }
    }
    ctx->pc = 0x3334A8u;
    // 0x3334a8: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x3334a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3334ac: 0x10660013  beq         $v1, $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x3334ACu;
    {
        const bool branch_taken_0x3334ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x3334ac) {
            ctx->pc = 0x3334FCu;
            goto label_3334fc;
        }
    }
    ctx->pc = 0x3334B4u;
    // 0x3334b4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3334B4u;
    {
        const bool branch_taken_0x3334b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3334b4) {
            ctx->pc = 0x3334C4u;
            goto label_3334c4;
        }
    }
    ctx->pc = 0x3334BCu;
    // 0x3334bc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x3334BCu;
    {
        const bool branch_taken_0x3334bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3334bc) {
            ctx->pc = 0x333560u;
            goto label_333560;
        }
    }
    ctx->pc = 0x3334C4u;
label_3334c4:
    // 0x3334c4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x3334c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x3334c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3334c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3334cc: 0x24842f20  addiu       $a0, $a0, 0x2F20
    ctx->pc = 0x3334ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12064));
    // 0x3334d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3334d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3334d4: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x3334d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x3334d8: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x3334d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3334dc: 0xc0cdba8  jal         func_336EA0
    ctx->pc = 0x3334DCu;
    SET_GPR_U32(ctx, 31, 0x3334E4u);
    ctx->pc = 0x3334E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3334DCu;
            // 0x3334e0: 0x24090160  addiu       $t1, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x336EA0u;
    if (runtime->hasFunction(0x336EA0u)) {
        auto targetFn = runtime->lookupFunction(0x336EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3334E4u; }
        if (ctx->pc != 0x3334E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00336EA0_0x336ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3334E4u; }
        if (ctx->pc != 0x3334E4u) { return; }
    }
    ctx->pc = 0x3334E4u;
label_3334e4:
    // 0x3334e4: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3334e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3334e8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3334e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3334ec: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x3334ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x3334f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3334f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3334f4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3334F4u;
    {
        const bool branch_taken_0x3334f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3334F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3334F4u;
            // 0x3334f8: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3334f4) {
            ctx->pc = 0x333560u;
            goto label_333560;
        }
    }
    ctx->pc = 0x3334FCu;
label_3334fc:
    // 0x3334fc: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x3334fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x333500: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x333500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333504: 0x24842f20  addiu       $a0, $a0, 0x2F20
    ctx->pc = 0x333504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12064));
    // 0x333508: 0x2407fe00  addiu       $a3, $zero, -0x200
    ctx->pc = 0x333508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x33350c: 0x24080190  addiu       $t0, $zero, 0x190
    ctx->pc = 0x33350cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x333510: 0xc0cdbd0  jal         func_336F40
    ctx->pc = 0x333510u;
    SET_GPR_U32(ctx, 31, 0x333518u);
    ctx->pc = 0x333514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333510u;
            // 0x333514: 0x240900c0  addiu       $t1, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x336F40u;
    if (runtime->hasFunction(0x336F40u)) {
        auto targetFn = runtime->lookupFunction(0x336F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333518u; }
        if (ctx->pc != 0x333518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00336F40_0x336f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333518u; }
        if (ctx->pc != 0x333518u) { return; }
    }
    ctx->pc = 0x333518u;
label_333518:
    // 0x333518: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x333518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33351c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33351cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x333520: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x333520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x333524: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x333524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x333528: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x333528u;
    {
        const bool branch_taken_0x333528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33352Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x333528u;
            // 0x33352c: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333528) {
            ctx->pc = 0x333560u;
            goto label_333560;
        }
    }
    ctx->pc = 0x333530u;
label_333530:
    // 0x333530: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x333530u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x333534: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x333534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x333538: 0x24842f20  addiu       $a0, $a0, 0x2F20
    ctx->pc = 0x333538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12064));
    // 0x33353c: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x33353cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x333540: 0x24080190  addiu       $t0, $zero, 0x190
    ctx->pc = 0x333540u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x333544: 0xc0cdba8  jal         func_336EA0
    ctx->pc = 0x333544u;
    SET_GPR_U32(ctx, 31, 0x33354Cu);
    ctx->pc = 0x333548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333544u;
            // 0x333548: 0x240901e0  addiu       $t1, $zero, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x336EA0u;
    if (runtime->hasFunction(0x336EA0u)) {
        auto targetFn = runtime->lookupFunction(0x336EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33354Cu; }
        if (ctx->pc != 0x33354Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00336EA0_0x336ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33354Cu; }
        if (ctx->pc != 0x33354Cu) { return; }
    }
    ctx->pc = 0x33354Cu;
label_33354c:
    // 0x33354c: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33354cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x333550: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x333550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x333554: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x333554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x333558: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x333558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33355c: 0xac64e7c8  sw          $a0, -0x1838($v1)
    ctx->pc = 0x33355cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
label_333560:
    // 0x333560: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x333560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x333564: 0x8c63e7d0  lw          $v1, -0x1830($v1)
    ctx->pc = 0x333564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961104)));
    // 0x333568: 0x28610033  slti        $at, $v1, 0x33
    ctx->pc = 0x333568u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x33356c: 0x14200018  bnez        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x33356Cu;
    {
        const bool branch_taken_0x33356c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33356c) {
            ctx->pc = 0x3335D0u;
            goto label_3335d0;
        }
    }
    ctx->pc = 0x333574u;
    // 0x333574: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x333574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x333578: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x333578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33357c: 0x9044e818  lbu         $a0, -0x17E8($v0)
    ctx->pc = 0x33357cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961176)));
    // 0x333580: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x333580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333584: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x333584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x333588: 0xa040e810  sb          $zero, -0x17F0($v0)
    ctx->pc = 0x333588u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961168), (uint8_t)GPR_U32(ctx, 0));
    // 0x33358c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x33358cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x333590: 0xa062e818  sb          $v0, -0x17E8($v1)
    ctx->pc = 0x333590u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 2));
label_333594:
    // 0x333594: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x333594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x333598: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x333598u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x33359c: 0x24843180  addiu       $a0, $a0, 0x3180
    ctx->pc = 0x33359cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12672));
    // 0x3335a0: 0x24a54650  addiu       $a1, $a1, 0x4650
    ctx->pc = 0x3335a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18000));
    // 0x3335a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3335a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3335a8: 0x24070034  addiu       $a3, $zero, 0x34
    ctx->pc = 0x3335a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x3335ac: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x3335ACu;
    SET_GPR_U32(ctx, 31, 0x3335B4u);
    ctx->pc = 0x3335B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3335ACu;
            // 0x3335b0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3335B4u; }
        if (ctx->pc != 0x3335B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3335B4u; }
        if (ctx->pc != 0x3335B4u) { return; }
    }
    ctx->pc = 0x3335B4u;
label_3335b4:
    // 0x3335b4: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x3335b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3335b8: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x3335b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3335bc: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x3335bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3335c0: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x3335c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3335c4: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x3335c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3335c8: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x3335C8u;
    {
        const bool branch_taken_0x3335c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3335CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3335C8u;
            // 0x3335cc: 0xac85001c  sw          $a1, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3335c8) {
            ctx->pc = 0x333594u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_333594;
        }
    }
    ctx->pc = 0x3335D0u;
label_3335d0:
    // 0x3335d0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3335d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3335d4: 0x8c64e7d0  lw          $a0, -0x1830($v1)
    ctx->pc = 0x3335d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961104)));
    // 0x3335d8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3335d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3335dc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3335dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3335e0: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x3335E0u;
    {
        const bool branch_taken_0x3335e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3335E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3335E0u;
            // 0x3335e4: 0xac64e7d0  sw          $a0, -0x1830($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961104), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3335e0) {
            ctx->pc = 0x333910u;
            goto label_333910;
        }
    }
    ctx->pc = 0x3335E8u;
label_3335e8:
    // 0x3335e8: 0x3272ffff  andi        $s2, $s3, 0xFFFF
    ctx->pc = 0x3335e8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
label_3335ec:
    // 0x3335ec: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x3335ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x3335f0: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x3335f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x3335f4: 0x26510001  addiu       $s1, $s2, 0x1
    ctx->pc = 0x3335f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3335f8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3335f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3335fc: 0x11363c  dsll32      $a2, $s1, 24
    ctx->pc = 0x3335fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 24));
    // 0x333600: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x333600u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x333604: 0x2484ea20  addiu       $a0, $a0, -0x15E0
    ctx->pc = 0x333604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
    // 0x333608: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x333608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33360c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33360cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x333610: 0x94900002  lhu         $s0, 0x2($a0)
    ctx->pc = 0x333610u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x333614: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x333614u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x333618: 0x2442e7f0  addiu       $v0, $v0, -0x1810
    ctx->pc = 0x333618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961136));
    // 0x33361c: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x33361cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x333620: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x333620u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x333624: 0x82840000  lb          $a0, 0x0($s4)
    ctx->pc = 0x333624u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x333628: 0xc0cd978  jal         func_3365E0
    ctx->pc = 0x333628u;
    SET_GPR_U32(ctx, 31, 0x333630u);
    ctx->pc = 0x33362Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333628u;
            // 0x33362c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3365E0u;
    if (runtime->hasFunction(0x3365E0u)) {
        auto targetFn = runtime->lookupFunction(0x3365E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333630u; }
        if (ctx->pc != 0x333630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003365E0_0x3365e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333630u; }
        if (ctx->pc != 0x333630u) { return; }
    }
    ctx->pc = 0x333630u;
label_333630:
    // 0x333630: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x333630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x333634: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x333634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x333638: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x333638u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x33363c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x33363cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x333640: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x333640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x333644: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x333644u;
    {
        const bool branch_taken_0x333644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x333644) {
            ctx->pc = 0x333668u;
            goto label_333668;
        }
    }
    ctx->pc = 0x33364Cu;
    // 0x33364c: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x33364cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x333650: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x333650u;
    SET_GPR_U32(ctx, 31, 0x333658u);
    ctx->pc = 0x333654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333650u;
            // 0x333654: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333658u; }
        if (ctx->pc != 0x333658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333658u; }
        if (ctx->pc != 0x333658u) { return; }
    }
    ctx->pc = 0x333658u;
label_333658:
    // 0x333658: 0xc068b88  jal         func_1A2E20
    ctx->pc = 0x333658u;
    SET_GPR_U32(ctx, 31, 0x333660u);
    ctx->pc = 0x33365Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333658u;
            // 0x33365c: 0x326400ff  andi        $a0, $s3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2E20u;
    if (runtime->hasFunction(0x1A2E20u)) {
        auto targetFn = runtime->lookupFunction(0x1A2E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333660u; }
        if (ctx->pc != 0x333660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2E20_0x1a2e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333660u; }
        if (ctx->pc != 0x333660u) { return; }
    }
    ctx->pc = 0x333660u;
label_333660:
    // 0x333660: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x333660u;
    {
        const bool branch_taken_0x333660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333660) {
            ctx->pc = 0x333780u;
            goto label_333780;
        }
    }
    ctx->pc = 0x333668u;
label_333668:
    // 0x333668: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x333668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x33366c: 0x28810008  slti        $at, $a0, 0x8
    ctx->pc = 0x33366cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x333670: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x333670u;
    {
        const bool branch_taken_0x333670 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x333670) {
            ctx->pc = 0x3336C8u;
            goto label_3336c8;
        }
    }
    ctx->pc = 0x333678u;
    // 0x333678: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x333678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x33367c: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x33367cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x333680: 0x2442b250  addiu       $v0, $v0, -0x4DB0
    ctx->pc = 0x333680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947408));
    // 0x333684: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x333684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x333688: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x333688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33368c: 0x11363c  dsll32      $a2, $s1, 24
    ctx->pc = 0x33368cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 24));
    // 0x333690: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x333690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x333694: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x333694u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x333698: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x333698u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33369c: 0xc0cd9b4  jal         func_3366D0
    ctx->pc = 0x33369Cu;
    SET_GPR_U32(ctx, 31, 0x3336A4u);
    ctx->pc = 0x3336A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33369Cu;
            // 0x3336a0: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3366D0u;
    if (runtime->hasFunction(0x3366D0u)) {
        auto targetFn = runtime->lookupFunction(0x3366D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3336A4u; }
        if (ctx->pc != 0x3336A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003366D0_0x3366d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3336A4u; }
        if (ctx->pc != 0x3336A4u) { return; }
    }
    ctx->pc = 0x3336A4u;
label_3336a4:
    // 0x3336a4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3336a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3336a8: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x3336a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x3336ac: 0x2463e7f0  addiu       $v1, $v1, -0x1810
    ctx->pc = 0x3336acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961136));
    // 0x3336b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3336b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3336b4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3336b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3336b8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x3336b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3336bc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x3336BCu;
    {
        const bool branch_taken_0x3336bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3336C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3336BCu;
            // 0x3336c0: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3336bc) {
            ctx->pc = 0x333780u;
            goto label_333780;
        }
    }
    ctx->pc = 0x3336C4u;
    // 0x3336c4: 0x0  nop
    ctx->pc = 0x3336c4u;
    // NOP
label_3336c8:
    // 0x3336c8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3336c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3336cc: 0x1482002c  bne         $a0, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3336CCu;
    {
        const bool branch_taken_0x3336cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3336cc) {
            ctx->pc = 0x333780u;
            goto label_333780;
        }
    }
    ctx->pc = 0x3336D4u;
    // 0x3336d4: 0x306200a0  andi        $v0, $v1, 0xA0
    ctx->pc = 0x3336d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)160);
    // 0x3336d8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3336D8u;
    {
        const bool branch_taken_0x3336d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3336d8) {
            ctx->pc = 0x333730u;
            goto label_333730;
        }
    }
    ctx->pc = 0x3336E0u;
    // 0x3336e0: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x3336e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x3336e4: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x3336e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x3336e8: 0x2442b250  addiu       $v0, $v0, -0x4DB0
    ctx->pc = 0x3336e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947408));
    // 0x3336ec: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3336ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3336f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3336f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3336f4: 0x11363c  dsll32      $a2, $s1, 24
    ctx->pc = 0x3336f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 24));
    // 0x3336f8: 0x80440008  lb          $a0, 0x8($v0)
    ctx->pc = 0x3336f8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3336fc: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x3336fcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x333700: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x333700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x333704: 0xc0cd9b4  jal         func_3366D0
    ctx->pc = 0x333704u;
    SET_GPR_U32(ctx, 31, 0x33370Cu);
    ctx->pc = 0x333708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333704u;
            // 0x333708: 0x24500008  addiu       $s0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3366D0u;
    if (runtime->hasFunction(0x3366D0u)) {
        auto targetFn = runtime->lookupFunction(0x3366D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33370Cu; }
        if (ctx->pc != 0x33370Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003366D0_0x3366d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33370Cu; }
        if (ctx->pc != 0x33370Cu) { return; }
    }
    ctx->pc = 0x33370Cu;
label_33370c:
    // 0x33370c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x33370cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x333710: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x333710u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x333714: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x333714u;
    {
        const bool branch_taken_0x333714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x333714) {
            ctx->pc = 0x333780u;
            goto label_333780;
        }
    }
    ctx->pc = 0x33371Cu;
    // 0x33371c: 0x326400ff  andi        $a0, $s3, 0xFF
    ctx->pc = 0x33371cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x333720: 0xc068c3c  jal         func_1A30F0
    ctx->pc = 0x333720u;
    SET_GPR_U32(ctx, 31, 0x333728u);
    ctx->pc = 0x333724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333720u;
            // 0x333724: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A30F0u;
    if (runtime->hasFunction(0x1A30F0u)) {
        auto targetFn = runtime->lookupFunction(0x1A30F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333728u; }
        if (ctx->pc != 0x333728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A30F0_0x1a30f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333728u; }
        if (ctx->pc != 0x333728u) { return; }
    }
    ctx->pc = 0x333728u;
label_333728:
    // 0x333728: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x333728u;
    {
        const bool branch_taken_0x333728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333728) {
            ctx->pc = 0x333780u;
            goto label_333780;
        }
    }
    ctx->pc = 0x333730u;
label_333730:
    // 0x333730: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x333730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x333734: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x333734u;
    {
        const bool branch_taken_0x333734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x333734) {
            ctx->pc = 0x333780u;
            goto label_333780;
        }
    }
    ctx->pc = 0x33373Cu;
    // 0x33373c: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x33373cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x333740: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x333740u;
    SET_GPR_U32(ctx, 31, 0x333748u);
    ctx->pc = 0x333744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333740u;
            // 0x333744: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333748u; }
        if (ctx->pc != 0x333748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333748u; }
        if (ctx->pc != 0x333748u) { return; }
    }
    ctx->pc = 0x333748u;
label_333748:
    // 0x333748: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x333748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x33374c: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x33374cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x333750: 0x2442b250  addiu       $v0, $v0, -0x4DB0
    ctx->pc = 0x333750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947408));
    // 0x333754: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x333754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x333758: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x333758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33375c: 0x90620008  lbu         $v0, 0x8($v1)
    ctx->pc = 0x33375cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x333760: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x333760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x333764: 0xa0620008  sb          $v0, 0x8($v1)
    ctx->pc = 0x333764u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x333768: 0x90620008  lbu         $v0, 0x8($v1)
    ctx->pc = 0x333768u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x33376c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33376Cu;
    {
        const bool branch_taken_0x33376c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33376c) {
            ctx->pc = 0x333780u;
            goto label_333780;
        }
    }
    ctx->pc = 0x333774u;
    // 0x333774: 0x326400ff  andi        $a0, $s3, 0xFF
    ctx->pc = 0x333774u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x333778: 0xc068c3c  jal         func_1A30F0
    ctx->pc = 0x333778u;
    SET_GPR_U32(ctx, 31, 0x333780u);
    ctx->pc = 0x33377Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333778u;
            // 0x33377c: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A30F0u;
    if (runtime->hasFunction(0x1A30F0u)) {
        auto targetFn = runtime->lookupFunction(0x1A30F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333780u; }
        if (ctx->pc != 0x333780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A30F0_0x1a30f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333780u; }
        if (ctx->pc != 0x333780u) { return; }
    }
    ctx->pc = 0x333780u;
label_333780:
    // 0x333780: 0x112e3c  dsll32      $a1, $s1, 24
    ctx->pc = 0x333780u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 24));
    // 0x333784: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x333784u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x333788: 0xc0cda84  jal         func_336A10
    ctx->pc = 0x333788u;
    SET_GPR_U32(ctx, 31, 0x333790u);
    ctx->pc = 0x33378Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333788u;
            // 0x33378c: 0x24042000  addiu       $a0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x336A10u;
    if (runtime->hasFunction(0x336A10u)) {
        auto targetFn = runtime->lookupFunction(0x336A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333790u; }
        if (ctx->pc != 0x333790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00336A10_0x336a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333790u; }
        if (ctx->pc != 0x333790u) { return; }
    }
    ctx->pc = 0x333790u;
label_333790:
    // 0x333790: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x333790u;
    {
        const bool branch_taken_0x333790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x333790) {
            ctx->pc = 0x3337A8u;
            goto label_3337a8;
        }
    }
    ctx->pc = 0x333798u;
    // 0x333798: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x333798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x33379c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x33379cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3337a0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3337A0u;
    {
        const bool branch_taken_0x3337a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3337a0) {
            ctx->pc = 0x3337C0u;
            goto label_3337c0;
        }
    }
    ctx->pc = 0x3337A8u;
label_3337a8:
    // 0x3337a8: 0x112e3c  dsll32      $a1, $s1, 24
    ctx->pc = 0x3337a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 24));
    // 0x3337ac: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x3337acu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x3337b0: 0xc0cda84  jal         func_336A10
    ctx->pc = 0x3337B0u;
    SET_GPR_U32(ctx, 31, 0x3337B8u);
    ctx->pc = 0x3337B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3337B0u;
            // 0x3337b4: 0x24044000  addiu       $a0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x336A10u;
    if (runtime->hasFunction(0x336A10u)) {
        auto targetFn = runtime->lookupFunction(0x336A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3337B8u; }
        if (ctx->pc != 0x3337B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00336A10_0x336a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3337B8u; }
        if (ctx->pc != 0x3337B8u) { return; }
    }
    ctx->pc = 0x3337B8u;
label_3337b8:
    // 0x3337b8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3337B8u;
    {
        const bool branch_taken_0x3337b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3337b8) {
            ctx->pc = 0x333830u;
            goto label_333830;
        }
    }
    ctx->pc = 0x3337C0u;
label_3337c0:
    // 0x3337c0: 0x112e3c  dsll32      $a1, $s1, 24
    ctx->pc = 0x3337c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 24));
    // 0x3337c4: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x3337c4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x3337c8: 0xc0cda84  jal         func_336A10
    ctx->pc = 0x3337C8u;
    SET_GPR_U32(ctx, 31, 0x3337D0u);
    ctx->pc = 0x3337CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3337C8u;
            // 0x3337cc: 0x24042000  addiu       $a0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x336A10u;
    if (runtime->hasFunction(0x336A10u)) {
        auto targetFn = runtime->lookupFunction(0x336A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3337D0u; }
        if (ctx->pc != 0x3337D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00336A10_0x336a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3337D0u; }
        if (ctx->pc != 0x3337D0u) { return; }
    }
    ctx->pc = 0x3337D0u;
label_3337d0:
    // 0x3337d0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3337D0u;
    {
        const bool branch_taken_0x3337d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3337d0) {
            ctx->pc = 0x333800u;
            goto label_333800;
        }
    }
    ctx->pc = 0x3337D8u;
    // 0x3337d8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3337d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3337dc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3337dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3337e0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3337E0u;
    {
        const bool branch_taken_0x3337e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3337e0) {
            ctx->pc = 0x333800u;
            goto label_333800;
        }
    }
    ctx->pc = 0x3337E8u;
    // 0x3337e8: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x3337e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x3337ec: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x3337ECu;
    SET_GPR_U32(ctx, 31, 0x3337F4u);
    ctx->pc = 0x3337F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3337ECu;
            // 0x3337f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3337F4u; }
        if (ctx->pc != 0x3337F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3337F4u; }
        if (ctx->pc != 0x3337F4u) { return; }
    }
    ctx->pc = 0x3337F4u;
label_3337f4:
    // 0x3337f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3337F4u;
    {
        const bool branch_taken_0x3337f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3337f4) {
            ctx->pc = 0x333810u;
            goto label_333810;
        }
    }
    ctx->pc = 0x3337FCu;
    // 0x3337fc: 0x0  nop
    ctx->pc = 0x3337fcu;
    // NOP
label_333800:
    // 0x333800: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x333800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x333804: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x333804u;
    SET_GPR_U32(ctx, 31, 0x33380Cu);
    ctx->pc = 0x333808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333804u;
            // 0x333808: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33380Cu; }
        if (ctx->pc != 0x33380Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33380Cu; }
        if (ctx->pc != 0x33380Cu) { return; }
    }
    ctx->pc = 0x33380Cu;
label_33380c:
    // 0x33380c: 0x0  nop
    ctx->pc = 0x33380cu;
    // NOP
label_333810:
    // 0x333810: 0xc068c60  jal         func_1A3180
    ctx->pc = 0x333810u;
    SET_GPR_U32(ctx, 31, 0x333818u);
    ctx->pc = 0x1A3180u;
    if (runtime->hasFunction(0x1A3180u)) {
        auto targetFn = runtime->lookupFunction(0x1A3180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333818u; }
        if (ctx->pc != 0x333818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3180_0x1a3180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333818u; }
        if (ctx->pc != 0x333818u) { return; }
    }
    ctx->pc = 0x333818u;
label_333818:
    // 0x333818: 0xc0cc0bc  jal         func_3302F0
    ctx->pc = 0x333818u;
    SET_GPR_U32(ctx, 31, 0x333820u);
    ctx->pc = 0x3302F0u;
    if (runtime->hasFunction(0x3302F0u)) {
        auto targetFn = runtime->lookupFunction(0x3302F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333820u; }
        if (ctx->pc != 0x333820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003302F0_0x3302f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333820u; }
        if (ctx->pc != 0x333820u) { return; }
    }
    ctx->pc = 0x333820u;
label_333820:
    // 0x333820: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x333820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x333824: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x333824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x333828: 0xa064e818  sb          $a0, -0x17E8($v1)
    ctx->pc = 0x333828u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
    // 0x33382c: 0x0  nop
    ctx->pc = 0x33382cu;
    // NOP
label_333830:
    // 0x333830: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x333830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x333834: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x333834u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x333838: 0x2a630002  slti        $v1, $s3, 0x2
    ctx->pc = 0x333838u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x33383c: 0x5460ff6b  bnel        $v1, $zero, . + 4 + (-0x95 << 2)
    ctx->pc = 0x33383Cu;
    {
        const bool branch_taken_0x33383c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33383c) {
            ctx->pc = 0x333840u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33383Cu;
            // 0x333840: 0x3272ffff  andi        $s2, $s3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3335ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3335ec;
        }
    }
    ctx->pc = 0x333844u;
    // 0x333844: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x333844u;
    {
        const bool branch_taken_0x333844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333844) {
            ctx->pc = 0x333910u;
            goto label_333910;
        }
    }
    ctx->pc = 0x33384Cu;
label_33384c:
    // 0x33384c: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33384cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x333850: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x333850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x333854: 0x8c85e7d0  lw          $a1, -0x1830($a0)
    ctx->pc = 0x333854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961104)));
    // 0x333858: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x333858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x33385c: 0x28a1001f  slti        $at, $a1, 0x1F
    ctx->pc = 0x33385cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x333860: 0x1420002b  bnez        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x333860u;
    {
        const bool branch_taken_0x333860 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x333864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x333860u;
            // 0x333864: 0xac64e7d0  sw          $a0, -0x1830($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961104), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333860) {
            ctx->pc = 0x333910u;
            goto label_333910;
        }
    }
    ctx->pc = 0x333868u;
    // 0x333868: 0xc0cc0bc  jal         func_3302F0
    ctx->pc = 0x333868u;
    SET_GPR_U32(ctx, 31, 0x333870u);
    ctx->pc = 0x3302F0u;
    if (runtime->hasFunction(0x3302F0u)) {
        auto targetFn = runtime->lookupFunction(0x3302F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333870u; }
        if (ctx->pc != 0x333870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003302F0_0x3302f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333870u; }
        if (ctx->pc != 0x333870u) { return; }
    }
    ctx->pc = 0x333870u;
label_333870:
    // 0x333870: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x333870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x333874: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x333874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x333878: 0xac43e800  sw          $v1, -0x1800($v0)
    ctx->pc = 0x333878u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961152), GPR_U32(ctx, 3));
    // 0x33387c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33387cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x333880: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x333880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x333884: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x333884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x333888: 0xac40e7f8  sw          $zero, -0x1808($v0)
    ctx->pc = 0x333888u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961144), GPR_U32(ctx, 0));
    // 0x33388c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33388cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x333890: 0xa064e818  sb          $a0, -0x17E8($v1)
    ctx->pc = 0x333890u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
    // 0x333894: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x333894u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x333898: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x333898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33389c: 0x14430014  bne         $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x33389Cu;
    {
        const bool branch_taken_0x33389c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33389c) {
            ctx->pc = 0x3338F0u;
            goto label_3338f0;
        }
    }
    ctx->pc = 0x3338A4u;
    // 0x3338a4: 0xc0ce64c  jal         func_339930
    ctx->pc = 0x3338A4u;
    SET_GPR_U32(ctx, 31, 0x3338ACu);
    ctx->pc = 0x339930u;
    if (runtime->hasFunction(0x339930u)) {
        auto targetFn = runtime->lookupFunction(0x339930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3338ACu; }
        if (ctx->pc != 0x3338ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00339930_0x339930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3338ACu; }
        if (ctx->pc != 0x3338ACu) { return; }
    }
    ctx->pc = 0x3338ACu;
label_3338ac:
    // 0x3338ac: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x3338acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x3338b0: 0xc0c1678  jal         func_3059E0
    ctx->pc = 0x3338B0u;
    SET_GPR_U32(ctx, 31, 0x3338B8u);
    ctx->pc = 0x3338B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3338B0u;
            // 0x3338b4: 0x24847e70  addiu       $a0, $a0, 0x7E70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3059E0u;
    if (runtime->hasFunction(0x3059E0u)) {
        auto targetFn = runtime->lookupFunction(0x3059E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3338B8u; }
        if (ctx->pc != 0x3338B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003059E0_0x3059e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3338B8u; }
        if (ctx->pc != 0x3338B8u) { return; }
    }
    ctx->pc = 0x3338B8u;
label_3338b8:
    // 0x3338b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3338b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3338bc: 0xc0c06b8  jal         func_301AE0
    ctx->pc = 0x3338BCu;
    SET_GPR_U32(ctx, 31, 0x3338C4u);
    ctx->pc = 0x3338C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3338BCu;
            // 0x3338c0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301AE0u;
    if (runtime->hasFunction(0x301AE0u)) {
        auto targetFn = runtime->lookupFunction(0x301AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3338C4u; }
        if (ctx->pc != 0x3338C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301AE0_0x301ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3338C4u; }
        if (ctx->pc != 0x3338C4u) { return; }
    }
    ctx->pc = 0x3338C4u;
label_3338c4:
    // 0x3338c4: 0xc0cc0bc  jal         func_3302F0
    ctx->pc = 0x3338C4u;
    SET_GPR_U32(ctx, 31, 0x3338CCu);
    ctx->pc = 0x3302F0u;
    if (runtime->hasFunction(0x3302F0u)) {
        auto targetFn = runtime->lookupFunction(0x3302F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3338CCu; }
        if (ctx->pc != 0x3338CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003302F0_0x3302f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3338CCu; }
        if (ctx->pc != 0x3338CCu) { return; }
    }
    ctx->pc = 0x3338CCu;
label_3338cc:
    // 0x3338cc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3338ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3338d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3338d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3338d4: 0x9066e810  lbu         $a2, -0x17F0($v1)
    ctx->pc = 0x3338d4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x3338d8: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3338d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3338dc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3338dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3338e0: 0xa065e818  sb          $a1, -0x17E8($v1)
    ctx->pc = 0x3338e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 5));
    // 0x3338e4: 0x34c30001  ori         $v1, $a2, 0x1
    ctx->pc = 0x3338e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x3338e8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3338E8u;
    {
        const bool branch_taken_0x3338e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3338ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3338E8u;
            // 0x3338ec: 0xa083e810  sb          $v1, -0x17F0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4294961168), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3338e8) {
            ctx->pc = 0x333910u;
            goto label_333910;
        }
    }
    ctx->pc = 0x3338F0u;
label_3338f0:
    // 0x3338f0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x3338f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x3338f4: 0xc0c1678  jal         func_3059E0
    ctx->pc = 0x3338F4u;
    SET_GPR_U32(ctx, 31, 0x3338FCu);
    ctx->pc = 0x3338F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3338F4u;
            // 0x3338f8: 0x24846c90  addiu       $a0, $a0, 0x6C90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3059E0u;
    if (runtime->hasFunction(0x3059E0u)) {
        auto targetFn = runtime->lookupFunction(0x3059E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3338FCu; }
        if (ctx->pc != 0x3338FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003059E0_0x3059e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3338FCu; }
        if (ctx->pc != 0x3338FCu) { return; }
    }
    ctx->pc = 0x3338FCu;
label_3338fc:
    // 0x3338fc: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3338fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x333900: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x333900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x333904: 0x9084e810  lbu         $a0, -0x17F0($a0)
    ctx->pc = 0x333904u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294961168)));
    // 0x333908: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x333908u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x33390c: 0xa064e810  sb          $a0, -0x17F0($v1)
    ctx->pc = 0x33390cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961168), (uint8_t)GPR_U32(ctx, 4));
label_333910:
    // 0x333910: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x333910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_333914:
    // 0x333914: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x333914u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x333918: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x333918u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33391c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33391cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x333920: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x333920u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x333924: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x333924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x333928: 0x3e00008  jr          $ra
    ctx->pc = 0x333928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33392Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x333928u;
            // 0x33392c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x333930u;
label_333930:
    // 0x333930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x333930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x333934: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x333934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x333938: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x333938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33393c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33393cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x333940: 0x9066e818  lbu         $a2, -0x17E8($v1)
    ctx->pc = 0x333940u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
    // 0x333944: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x333944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x333948: 0x10c300ec  beq         $a2, $v1, . + 4 + (0xEC << 2)
    ctx->pc = 0x333948u;
    {
        const bool branch_taken_0x333948 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x333948) {
            ctx->pc = 0x333CFCu;
            goto label_333cfc;
        }
    }
    ctx->pc = 0x333950u;
    // 0x333950: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x333950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x333954: 0x50c4007d  beql        $a2, $a0, . + 4 + (0x7D << 2)
    ctx->pc = 0x333954u;
    {
        const bool branch_taken_0x333954 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x333954) {
            ctx->pc = 0x333958u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x333954u;
            // 0x333958: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x333B4Cu;
            goto label_333b4c;
        }
    }
    ctx->pc = 0x33395Cu;
    // 0x33395c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33395cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x333960: 0x10c50011  beq         $a2, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x333960u;
    {
        const bool branch_taken_0x333960 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x333960) {
            ctx->pc = 0x3339A8u;
            goto label_3339a8;
        }
    }
    ctx->pc = 0x333968u;
    // 0x333968: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x333968u;
    {
        const bool branch_taken_0x333968 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x333968) {
            ctx->pc = 0x333978u;
            goto label_333978;
        }
    }
    ctx->pc = 0x333970u;
    // 0x333970: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x333970u;
    {
        const bool branch_taken_0x333970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x333970u;
            // 0x333974: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333970) {
            ctx->pc = 0x333D54u;
            goto label_333d54;
        }
    }
    ctx->pc = 0x333978u;
label_333978:
    // 0x333978: 0xc0cbf34  jal         func_32FCD0
    ctx->pc = 0x333978u;
    SET_GPR_U32(ctx, 31, 0x333980u);
    ctx->pc = 0x32FCD0u;
    if (runtime->hasFunction(0x32FCD0u)) {
        auto targetFn = runtime->lookupFunction(0x32FCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333980u; }
        if (ctx->pc != 0x333980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032FCD0_0x32fcd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333980u; }
        if (ctx->pc != 0x333980u) { return; }
    }
    ctx->pc = 0x333980u;
label_333980:
    // 0x333980: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x333980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x333984: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x333984u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x333988: 0x8c66e800  lw          $a2, -0x1800($v1)
    ctx->pc = 0x333988u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961152)));
    // 0x33398c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33398cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x333990: 0xac86e808  sw          $a2, -0x17F8($a0)
    ctx->pc = 0x333990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961160), GPR_U32(ctx, 6));
    // 0x333994: 0x9065e818  lbu         $a1, -0x17E8($v1)
    ctx->pc = 0x333994u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
    // 0x333998: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x333998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33399c: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x33399cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3339a0: 0x100000eb  b           . + 4 + (0xEB << 2)
    ctx->pc = 0x3339A0u;
    {
        const bool branch_taken_0x3339a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3339A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3339A0u;
            // 0x3339a4: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3339a0) {
            ctx->pc = 0x333D50u;
            goto label_333d50;
        }
    }
    ctx->pc = 0x3339A8u;
label_3339a8:
    // 0x3339a8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3339a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3339ac: 0x8c63e7d0  lw          $v1, -0x1830($v1)
    ctx->pc = 0x3339acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961104)));
    // 0x3339b0: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x3339b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x3339b4: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x3339B4u;
    {
        const bool branch_taken_0x3339b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3339b4) {
            ctx->pc = 0x333AD8u;
            goto label_333ad8;
        }
    }
    ctx->pc = 0x3339BCu;
    // 0x3339bc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3339bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3339c0: 0x8c67e7c8  lw          $a3, -0x1838($v1)
    ctx->pc = 0x3339c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961096)));
    // 0x3339c4: 0x28e10008  slti        $at, $a3, 0x8
    ctx->pc = 0x3339c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x3339c8: 0x10200043  beqz        $at, . + 4 + (0x43 << 2)
    ctx->pc = 0x3339C8u;
    {
        const bool branch_taken_0x3339c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3339c8) {
            ctx->pc = 0x333AD8u;
            goto label_333ad8;
        }
    }
    ctx->pc = 0x3339D0u;
    // 0x3339d0: 0x2ce10008  sltiu       $at, $a3, 0x8
    ctx->pc = 0x3339d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3339d4: 0x10200040  beqz        $at, . + 4 + (0x40 << 2)
    ctx->pc = 0x3339D4u;
    {
        const bool branch_taken_0x3339d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3339d4) {
            ctx->pc = 0x333AD8u;
            goto label_333ad8;
        }
    }
    ctx->pc = 0x3339DCu;
    // 0x3339dc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3339dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3339e0: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x3339e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x3339e4: 0x24844850  addiu       $a0, $a0, 0x4850
    ctx->pc = 0x3339e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18512));
    // 0x3339e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3339e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3339ec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3339ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3339f0: 0x600008  jr          $v1
    ctx->pc = 0x3339F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3339F8u: goto label_3339f8;
            case 0x333A2Cu: goto label_333a2c;
            case 0x333A70u: goto label_333a70;
            case 0x333AA8u: goto label_333aa8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3339F8u;
label_3339f8:
    // 0x3339f8: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x3339f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x3339fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3339fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333a00: 0x24843d60  addiu       $a0, $a0, 0x3D60
    ctx->pc = 0x333a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15712));
    // 0x333a04: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x333a04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x333a08: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x333a08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x333a0c: 0xc0cbfdc  jal         func_32FF70
    ctx->pc = 0x333A0Cu;
    SET_GPR_U32(ctx, 31, 0x333A14u);
    ctx->pc = 0x333A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333A0Cu;
            // 0x333a10: 0x24090160  addiu       $t1, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32FF70u;
    if (runtime->hasFunction(0x32FF70u)) {
        auto targetFn = runtime->lookupFunction(0x32FF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333A14u; }
        if (ctx->pc != 0x333A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032FF70_0x32ff70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333A14u; }
        if (ctx->pc != 0x333A14u) { return; }
    }
    ctx->pc = 0x333A14u;
label_333a14:
    // 0x333a14: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x333a14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x333a18: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x333a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x333a1c: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x333a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x333a20: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x333a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x333a24: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x333A24u;
    {
        const bool branch_taken_0x333a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x333A24u;
            // 0x333a28: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333a24) {
            ctx->pc = 0x333AD8u;
            goto label_333ad8;
        }
    }
    ctx->pc = 0x333A2Cu;
label_333a2c:
    // 0x333a2c: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x333a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x333a30: 0x7363c  dsll32      $a2, $a3, 24
    ctx->pc = 0x333a30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 24));
    // 0x333a34: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x333a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x333a38: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x333a38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x333a3c: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x333a3cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x333a40: 0x24843d60  addiu       $a0, $a0, 0x3D60
    ctx->pc = 0x333a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15712));
    // 0x333a44: 0x24480090  addiu       $t0, $v0, 0x90
    ctx->pc = 0x333a44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x333a48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x333a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333a4c: 0x2407fe00  addiu       $a3, $zero, -0x200
    ctx->pc = 0x333a4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x333a50: 0xc0cbfdc  jal         func_32FF70
    ctx->pc = 0x333A50u;
    SET_GPR_U32(ctx, 31, 0x333A58u);
    ctx->pc = 0x333A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333A50u;
            // 0x333a54: 0x2409012c  addiu       $t1, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32FF70u;
    if (runtime->hasFunction(0x32FF70u)) {
        auto targetFn = runtime->lookupFunction(0x32FF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333A58u; }
        if (ctx->pc != 0x333A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032FF70_0x32ff70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333A58u; }
        if (ctx->pc != 0x333A58u) { return; }
    }
    ctx->pc = 0x333A58u;
label_333a58:
    // 0x333a58: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x333a58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x333a5c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x333a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x333a60: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x333a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x333a64: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x333a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x333a68: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x333A68u;
    {
        const bool branch_taken_0x333a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x333A68u;
            // 0x333a6c: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333a68) {
            ctx->pc = 0x333AD8u;
            goto label_333ad8;
        }
    }
    ctx->pc = 0x333A70u;
label_333a70:
    // 0x333a70: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x333a70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x333a74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x333a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333a78: 0x24843d60  addiu       $a0, $a0, 0x3D60
    ctx->pc = 0x333a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15712));
    // 0x333a7c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x333a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x333a80: 0x2407fe00  addiu       $a3, $zero, -0x200
    ctx->pc = 0x333a80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x333a84: 0x24080190  addiu       $t0, $zero, 0x190
    ctx->pc = 0x333a84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x333a88: 0xc0cc004  jal         func_330010
    ctx->pc = 0x333A88u;
    SET_GPR_U32(ctx, 31, 0x333A90u);
    ctx->pc = 0x333A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333A88u;
            // 0x333a8c: 0x240900c0  addiu       $t1, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x330010u;
    if (runtime->hasFunction(0x330010u)) {
        auto targetFn = runtime->lookupFunction(0x330010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333A90u; }
        if (ctx->pc != 0x333A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00330010_0x330010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333A90u; }
        if (ctx->pc != 0x333A90u) { return; }
    }
    ctx->pc = 0x333A90u;
label_333a90:
    // 0x333a90: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x333a90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x333a94: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x333a94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x333a98: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x333a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x333a9c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x333a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x333aa0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x333AA0u;
    {
        const bool branch_taken_0x333aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x333AA0u;
            // 0x333aa4: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333aa0) {
            ctx->pc = 0x333AD8u;
            goto label_333ad8;
        }
    }
    ctx->pc = 0x333AA8u;
label_333aa8:
    // 0x333aa8: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x333aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x333aac: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x333aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x333ab0: 0x24843d60  addiu       $a0, $a0, 0x3D60
    ctx->pc = 0x333ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15712));
    // 0x333ab4: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x333ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x333ab8: 0x24080190  addiu       $t0, $zero, 0x190
    ctx->pc = 0x333ab8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x333abc: 0xc0cbfdc  jal         func_32FF70
    ctx->pc = 0x333ABCu;
    SET_GPR_U32(ctx, 31, 0x333AC4u);
    ctx->pc = 0x333AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333ABCu;
            // 0x333ac0: 0x240901e0  addiu       $t1, $zero, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32FF70u;
    if (runtime->hasFunction(0x32FF70u)) {
        auto targetFn = runtime->lookupFunction(0x32FF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333AC4u; }
        if (ctx->pc != 0x333AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032FF70_0x32ff70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333AC4u; }
        if (ctx->pc != 0x333AC4u) { return; }
    }
    ctx->pc = 0x333AC4u;
label_333ac4:
    // 0x333ac4: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x333ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x333ac8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x333ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x333acc: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x333accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x333ad0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x333ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x333ad4: 0xac64e7c8  sw          $a0, -0x1838($v1)
    ctx->pc = 0x333ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
label_333ad8:
    // 0x333ad8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x333ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x333adc: 0x9064e810  lbu         $a0, -0x17F0($v1)
    ctx->pc = 0x333adcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x333ae0: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x333ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x333ae4: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x333AE4u;
    {
        const bool branch_taken_0x333ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x333ae4) {
            ctx->pc = 0x333B34u;
            goto label_333b34;
        }
    }
    ctx->pc = 0x333AECu;
    // 0x333aec: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x333aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x333af0: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x333AF0u;
    {
        const bool branch_taken_0x333af0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x333af0) {
            ctx->pc = 0x333B34u;
            goto label_333b34;
        }
    }
    ctx->pc = 0x333AF8u;
    // 0x333af8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x333af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x333afc: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x333afcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x333b00: 0x9047e818  lbu         $a3, -0x17E8($v0)
    ctx->pc = 0x333b00u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961176)));
    // 0x333b04: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x333b04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x333b08: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x333b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x333b0c: 0x24844170  addiu       $a0, $a0, 0x4170
    ctx->pc = 0x333b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16752));
    // 0x333b10: 0x24a54648  addiu       $a1, $a1, 0x4648
    ctx->pc = 0x333b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17992));
    // 0x333b14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x333b14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333b18: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x333b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x333b1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x333b1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333b20: 0xa040e810  sb          $zero, -0x17F0($v0)
    ctx->pc = 0x333b20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961168), (uint8_t)GPR_U32(ctx, 0));
    // 0x333b24: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x333b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x333b28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x333b28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333b2c: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x333B2Cu;
    SET_GPR_U32(ctx, 31, 0x333B34u);
    ctx->pc = 0x333B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333B2Cu;
            // 0x333b30: 0xa062e818  sb          $v0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333B34u; }
        if (ctx->pc != 0x333B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333B34u; }
        if (ctx->pc != 0x333B34u) { return; }
    }
    ctx->pc = 0x333B34u;
label_333b34:
    // 0x333b34: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x333b34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x333b38: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x333b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x333b3c: 0x8c84e7d0  lw          $a0, -0x1830($a0)
    ctx->pc = 0x333b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961104)));
    // 0x333b40: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x333b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x333b44: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x333B44u;
    {
        const bool branch_taken_0x333b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x333B44u;
            // 0x333b48: 0xac64e7d0  sw          $a0, -0x1830($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961104), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333b44) {
            ctx->pc = 0x333D50u;
            goto label_333d50;
        }
    }
    ctx->pc = 0x333B4Cu;
label_333b4c:
    // 0x333b4c: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x333B4Cu;
    SET_GPR_U32(ctx, 31, 0x333B54u);
    ctx->pc = 0x333B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333B4Cu;
            // 0x333b50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (runtime->hasFunction(0x1A3420u)) {
        auto targetFn = runtime->lookupFunction(0x1A3420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333B54u; }
        if (ctx->pc != 0x333B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3420_0x1a3420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333B54u; }
        if (ctx->pc != 0x333B54u) { return; }
    }
    ctx->pc = 0x333B54u;
label_333b54:
    // 0x333b54: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x333b54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x333b58: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x333b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x333b5c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x333b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x333b60: 0x8044e808  lb          $a0, -0x17F8($v0)
    ctx->pc = 0x333b60u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961160)));
    // 0x333b64: 0xc0cd948  jal         func_336520
    ctx->pc = 0x333B64u;
    SET_GPR_U32(ctx, 31, 0x333B6Cu);
    ctx->pc = 0x333B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333B64u;
            // 0x333b68: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x336520u;
    if (runtime->hasFunction(0x336520u)) {
        auto targetFn = runtime->lookupFunction(0x336520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333B6Cu; }
        if (ctx->pc != 0x333B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00336520_0x336520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333B6Cu; }
        if (ctx->pc != 0x333B6Cu) { return; }
    }
    ctx->pc = 0x333B6Cu;
label_333b6c:
    // 0x333b6c: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x333b6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x333b70: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x333b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x333b74: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x333b74u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x333b78: 0xac64e808  sw          $a0, -0x17F8($v1)
    ctx->pc = 0x333b78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961160), GPR_U32(ctx, 4));
    // 0x333b7c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x333b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x333b80: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x333B80u;
    {
        const bool branch_taken_0x333b80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x333b80) {
            ctx->pc = 0x333C18u;
            goto label_333c18;
        }
    }
    ctx->pc = 0x333B88u;
    // 0x333b88: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x333b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x333b8c: 0x1083001e  beq         $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x333B8Cu;
    {
        const bool branch_taken_0x333b8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x333b8c) {
            ctx->pc = 0x333C08u;
            goto label_333c08;
        }
    }
    ctx->pc = 0x333B94u;
    // 0x333b94: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x333b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x333b98: 0x10850014  beq         $a0, $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x333B98u;
    {
        const bool branch_taken_0x333b98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x333b98) {
            ctx->pc = 0x333BECu;
            goto label_333bec;
        }
    }
    ctx->pc = 0x333BA0u;
    // 0x333ba0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x333ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x333ba4: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x333BA4u;
    {
        const bool branch_taken_0x333ba4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x333ba4) {
            ctx->pc = 0x333BD4u;
            goto label_333bd4;
        }
    }
    ctx->pc = 0x333BACu;
    // 0x333bac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x333BACu;
    {
        const bool branch_taken_0x333bac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x333bac) {
            ctx->pc = 0x333BBCu;
            goto label_333bbc;
        }
    }
    ctx->pc = 0x333BB4u;
    // 0x333bb4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x333BB4u;
    {
        const bool branch_taken_0x333bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x333BB4u;
            // 0x333bb8: 0x10343c  dsll32      $a2, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333bb4) {
            ctx->pc = 0x333C5Cu;
            goto label_333c5c;
        }
    }
    ctx->pc = 0x333BBCu;
label_333bbc:
    // 0x333bbc: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x333bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x333bc0: 0xc0cd9f0  jal         func_3367C0
    ctx->pc = 0x333BC0u;
    SET_GPR_U32(ctx, 31, 0x333BC8u);
    ctx->pc = 0x333BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333BC0u;
            // 0x333bc4: 0x8044b268  lb          $a0, -0x4D98($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947432)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3367C0u;
    if (runtime->hasFunction(0x3367C0u)) {
        auto targetFn = runtime->lookupFunction(0x3367C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333BC8u; }
        if (ctx->pc != 0x333BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003367C0_0x3367c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333BC8u; }
        if (ctx->pc != 0x333BC8u) { return; }
    }
    ctx->pc = 0x333BC8u;
label_333bc8:
    // 0x333bc8: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x333bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x333bcc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x333BCCu;
    {
        const bool branch_taken_0x333bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x333BCCu;
            // 0x333bd0: 0xa062b268  sb          $v0, -0x4D98($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294947432), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333bcc) {
            ctx->pc = 0x333C58u;
            goto label_333c58;
        }
    }
    ctx->pc = 0x333BD4u;
label_333bd4:
    // 0x333bd4: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x333bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x333bd8: 0xc0cd9f0  jal         func_3367C0
    ctx->pc = 0x333BD8u;
    SET_GPR_U32(ctx, 31, 0x333BE0u);
    ctx->pc = 0x333BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333BD8u;
            // 0x333bdc: 0x8044b269  lb          $a0, -0x4D97($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947433)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3367C0u;
    if (runtime->hasFunction(0x3367C0u)) {
        auto targetFn = runtime->lookupFunction(0x3367C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333BE0u; }
        if (ctx->pc != 0x333BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003367C0_0x3367c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333BE0u; }
        if (ctx->pc != 0x333BE0u) { return; }
    }
    ctx->pc = 0x333BE0u;
label_333be0:
    // 0x333be0: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x333be0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x333be4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x333BE4u;
    {
        const bool branch_taken_0x333be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x333BE4u;
            // 0x333be8: 0xa062b269  sb          $v0, -0x4D97($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294947433), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333be4) {
            ctx->pc = 0x333C58u;
            goto label_333c58;
        }
    }
    ctx->pc = 0x333BECu;
label_333bec:
    // 0x333bec: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x333becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x333bf0: 0x8044b26a  lb          $a0, -0x4D96($v0)
    ctx->pc = 0x333bf0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947434)));
    // 0x333bf4: 0xc0cd9f0  jal         func_3367C0
    ctx->pc = 0x333BF4u;
    SET_GPR_U32(ctx, 31, 0x333BFCu);
    ctx->pc = 0x333BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333BF4u;
            // 0x333bf8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3367C0u;
    if (runtime->hasFunction(0x3367C0u)) {
        auto targetFn = runtime->lookupFunction(0x3367C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333BFCu; }
        if (ctx->pc != 0x333BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003367C0_0x3367c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333BFCu; }
        if (ctx->pc != 0x333BFCu) { return; }
    }
    ctx->pc = 0x333BFCu;
label_333bfc:
    // 0x333bfc: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x333bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x333c00: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x333C00u;
    {
        const bool branch_taken_0x333c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x333C00u;
            // 0x333c04: 0xa062b26a  sb          $v0, -0x4D96($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294947434), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333c00) {
            ctx->pc = 0x333C58u;
            goto label_333c58;
        }
    }
    ctx->pc = 0x333C08u;
label_333c08:
    // 0x333c08: 0xc0cda20  jal         func_336880
    ctx->pc = 0x333C08u;
    SET_GPR_U32(ctx, 31, 0x333C10u);
    ctx->pc = 0x336880u;
    if (runtime->hasFunction(0x336880u)) {
        auto targetFn = runtime->lookupFunction(0x336880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333C10u; }
        if (ctx->pc != 0x333C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00336880_0x336880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333C10u; }
        if (ctx->pc != 0x333C10u) { return; }
    }
    ctx->pc = 0x333C10u;
label_333c10:
    // 0x333c10: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x333C10u;
    {
        const bool branch_taken_0x333c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333c10) {
            ctx->pc = 0x333C58u;
            goto label_333c58;
        }
    }
    ctx->pc = 0x333C18u;
label_333c18:
    // 0x333c18: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x333c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x333c1c: 0x8044e7f8  lb          $a0, -0x1808($v0)
    ctx->pc = 0x333c1cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961144)));
    // 0x333c20: 0xc0cd9f0  jal         func_3367C0
    ctx->pc = 0x333C20u;
    SET_GPR_U32(ctx, 31, 0x333C28u);
    ctx->pc = 0x333C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333C20u;
            // 0x333c24: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3367C0u;
    if (runtime->hasFunction(0x3367C0u)) {
        auto targetFn = runtime->lookupFunction(0x3367C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333C28u; }
        if (ctx->pc != 0x333C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003367C0_0x3367c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333C28u; }
        if (ctx->pc != 0x333C28u) { return; }
    }
    ctx->pc = 0x333C28u;
label_333c28:
    // 0x333c28: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x333c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x333c2c: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x333c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x333c30: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x333c30u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x333c34: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x333c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x333c38: 0xac43e7f8  sw          $v1, -0x1808($v0)
    ctx->pc = 0x333c38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961144), GPR_U32(ctx, 3));
    // 0x333c3c: 0xc0cda68  jal         func_3369A0
    ctx->pc = 0x333C3Cu;
    SET_GPR_U32(ctx, 31, 0x333C44u);
    ctx->pc = 0x333C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333C3Cu;
            // 0x333c40: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3369A0u;
    if (runtime->hasFunction(0x3369A0u)) {
        auto targetFn = runtime->lookupFunction(0x3369A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333C44u; }
        if (ctx->pc != 0x333C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003369A0_0x3369a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333C44u; }
        if (ctx->pc != 0x333C44u) { return; }
    }
    ctx->pc = 0x333C44u;
label_333c44:
    // 0x333c44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x333C44u;
    {
        const bool branch_taken_0x333c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x333c44) {
            ctx->pc = 0x333C58u;
            goto label_333c58;
        }
    }
    ctx->pc = 0x333C4Cu;
    // 0x333c4c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x333c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x333c50: 0xc0532bc  jal         func_14CAF0
    ctx->pc = 0x333C50u;
    SET_GPR_U32(ctx, 31, 0x333C58u);
    ctx->pc = 0x333C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333C50u;
            // 0x333c54: 0x8c44e7f8  lw          $a0, -0x1808($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961144)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14CAF0u;
    if (runtime->hasFunction(0x14CAF0u)) {
        auto targetFn = runtime->lookupFunction(0x14CAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333C58u; }
        if (ctx->pc != 0x333C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014CAF0_0x14caf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333C58u; }
        if (ctx->pc != 0x333C58u) { return; }
    }
    ctx->pc = 0x333C58u;
label_333c58:
    // 0x333c58: 0x10343c  dsll32      $a2, $s0, 16
    ctx->pc = 0x333c58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 16));
label_333c5c:
    // 0x333c5c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x333c5cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x333c60: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x333c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x333c64: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x333C64u;
    {
        const bool branch_taken_0x333c64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x333c64) {
            ctx->pc = 0x333C68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x333C64u;
            // 0x333c68: 0x30c52000  andi        $a1, $a2, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
            ctx->pc = 0x333C90u;
            goto label_333c90;
        }
    }
    ctx->pc = 0x333C6Cu;
    // 0x333c6c: 0xc0cdb40  jal         func_336D00
    ctx->pc = 0x333C6Cu;
    SET_GPR_U32(ctx, 31, 0x333C74u);
    ctx->pc = 0x336D00u;
    if (runtime->hasFunction(0x336D00u)) {
        auto targetFn = runtime->lookupFunction(0x336D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333C74u; }
        if (ctx->pc != 0x333C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00336D00_0x336d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333C74u; }
        if (ctx->pc != 0x333C74u) { return; }
    }
    ctx->pc = 0x333C74u;
label_333c74:
    // 0x333c74: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x333c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x333c78: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x333c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x333c7c: 0xac40e7f8  sw          $zero, -0x1808($v0)
    ctx->pc = 0x333c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961144), GPR_U32(ctx, 0));
    // 0x333c80: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x333C80u;
    SET_GPR_U32(ctx, 31, 0x333C88u);
    ctx->pc = 0x333C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333C80u;
            // 0x333c84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333C88u; }
        if (ctx->pc != 0x333C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333C88u; }
        if (ctx->pc != 0x333C88u) { return; }
    }
    ctx->pc = 0x333C88u;
label_333c88:
    // 0x333c88: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x333C88u;
    {
        const bool branch_taken_0x333c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333c88) {
            ctx->pc = 0x333D50u;
            goto label_333d50;
        }
    }
    ctx->pc = 0x333C90u;
label_333c90:
    // 0x333c90: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x333C90u;
    {
        const bool branch_taken_0x333c90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x333c90) {
            ctx->pc = 0x333C94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x333C90u;
            // 0x333c94: 0x30c34000  andi        $v1, $a2, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
            ctx->pc = 0x333CB0u;
            goto label_333cb0;
        }
    }
    ctx->pc = 0x333C98u;
    // 0x333c98: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x333c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x333c9c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x333c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x333ca0: 0x8c63e808  lw          $v1, -0x17F8($v1)
    ctx->pc = 0x333ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961160)));
    // 0x333ca4: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x333CA4u;
    {
        const bool branch_taken_0x333ca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x333ca4) {
            ctx->pc = 0x333CB8u;
            goto label_333cb8;
        }
    }
    ctx->pc = 0x333CACu;
    // 0x333cac: 0x30c34000  andi        $v1, $a2, 0x4000
    ctx->pc = 0x333cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
label_333cb0:
    // 0x333cb0: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x333CB0u;
    {
        const bool branch_taken_0x333cb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x333cb0) {
            ctx->pc = 0x333D50u;
            goto label_333d50;
        }
    }
    ctx->pc = 0x333CB8u;
label_333cb8:
    // 0x333cb8: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x333CB8u;
    {
        const bool branch_taken_0x333cb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x333cb8) {
            ctx->pc = 0x333CBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x333CB8u;
            // 0x333cbc: 0x2404013e  addiu       $a0, $zero, 0x13E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
        ctx->in_delay_slot = false;
            ctx->pc = 0x333CD4u;
            goto label_333cd4;
        }
    }
    ctx->pc = 0x333CC0u;
    // 0x333cc0: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x333cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x333cc4: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x333CC4u;
    SET_GPR_U32(ctx, 31, 0x333CCCu);
    ctx->pc = 0x333CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333CC4u;
            // 0x333cc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333CCCu; }
        if (ctx->pc != 0x333CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333CCCu; }
        if (ctx->pc != 0x333CCCu) { return; }
    }
    ctx->pc = 0x333CCCu;
label_333ccc:
    // 0x333ccc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x333CCCu;
    {
        const bool branch_taken_0x333ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333ccc) {
            ctx->pc = 0x333CDCu;
            goto label_333cdc;
        }
    }
    ctx->pc = 0x333CD4u;
label_333cd4:
    // 0x333cd4: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x333CD4u;
    SET_GPR_U32(ctx, 31, 0x333CDCu);
    ctx->pc = 0x333CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333CD4u;
            // 0x333cd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333CDCu; }
        if (ctx->pc != 0x333CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333CDCu; }
        if (ctx->pc != 0x333CDCu) { return; }
    }
    ctx->pc = 0x333CDCu;
label_333cdc:
    // 0x333cdc: 0xc053318  jal         func_14CC60
    ctx->pc = 0x333CDCu;
    SET_GPR_U32(ctx, 31, 0x333CE4u);
    ctx->pc = 0x14CC60u;
    if (runtime->hasFunction(0x14CC60u)) {
        auto targetFn = runtime->lookupFunction(0x14CC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333CE4u; }
        if (ctx->pc != 0x333CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014CC60_0x14cc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333CE4u; }
        if (ctx->pc != 0x333CE4u) { return; }
    }
    ctx->pc = 0x333CE4u;
label_333ce4:
    // 0x333ce4: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x333ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x333ce8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x333ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x333cec: 0x9084e818  lbu         $a0, -0x17E8($a0)
    ctx->pc = 0x333cecu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294961176)));
    // 0x333cf0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x333cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x333cf4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x333CF4u;
    {
        const bool branch_taken_0x333cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x333CF4u;
            // 0x333cf8: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333cf4) {
            ctx->pc = 0x333D50u;
            goto label_333d50;
        }
    }
    ctx->pc = 0x333CFCu;
label_333cfc:
    // 0x333cfc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x333cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x333d00: 0x9064e810  lbu         $a0, -0x17F0($v1)
    ctx->pc = 0x333d00u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x333d04: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x333d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x333d08: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x333D08u;
    {
        const bool branch_taken_0x333d08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x333d08) {
            ctx->pc = 0x333D50u;
            goto label_333d50;
        }
    }
    ctx->pc = 0x333D10u;
    // 0x333d10: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x333d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x333d14: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x333D14u;
    {
        const bool branch_taken_0x333d14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x333d14) {
            ctx->pc = 0x333D50u;
            goto label_333d50;
        }
    }
    ctx->pc = 0x333D1Cu;
    // 0x333d1c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x333d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x333d20: 0xc0558e0  jal         func_156380
    ctx->pc = 0x333D20u;
    SET_GPR_U32(ctx, 31, 0x333D28u);
    ctx->pc = 0x333D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333D20u;
            // 0x333d24: 0x24841760  addiu       $a0, $a0, 0x1760 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (runtime->hasFunction(0x156380u)) {
        auto targetFn = runtime->lookupFunction(0x156380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333D28u; }
        if (ctx->pc != 0x333D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156380_0x156380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333D28u; }
        if (ctx->pc != 0x333D28u) { return; }
    }
    ctx->pc = 0x333D28u;
label_333d28:
    // 0x333d28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x333d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x333d2c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x333d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x333d30: 0xa064e820  sb          $a0, -0x17E0($v1)
    ctx->pc = 0x333d30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961184), (uint8_t)GPR_U32(ctx, 4));
    // 0x333d34: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x333d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x333d38: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x333d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x333d3c: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x333d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x333d40: 0xac65e800  sw          $a1, -0x1800($v1)
    ctx->pc = 0x333d40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961152), GPR_U32(ctx, 5));
    // 0x333d44: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x333d44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x333d48: 0xac80e7f8  sw          $zero, -0x1808($a0)
    ctx->pc = 0x333d48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961144), GPR_U32(ctx, 0));
    // 0x333d4c: 0xa060e818  sb          $zero, -0x17E8($v1)
    ctx->pc = 0x333d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 0));
label_333d50:
    // 0x333d50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x333d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_333d54:
    // 0x333d54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x333d54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x333d58: 0x3e00008  jr          $ra
    ctx->pc = 0x333D58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x333D58u;
            // 0x333d5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x333D60u;
label_333d60:
    // 0x333d60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x333d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x333d64: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x333d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x333d68: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x333d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x333d6c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x333d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x333d70: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x333d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x333d74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x333d74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333d78: 0x3c10003d  lui         $s0, 0x3D
    ctx->pc = 0x333d78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)61 << 16));
    // 0x333d7c: 0xc0cc088  jal         func_330220
    ctx->pc = 0x333D7Cu;
    SET_GPR_U32(ctx, 31, 0x333D84u);
    ctx->pc = 0x333D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333D7Cu;
            // 0x333d80: 0x26101b10  addiu       $s0, $s0, 0x1B10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x330220u;
    if (runtime->hasFunction(0x330220u)) {
        auto targetFn = runtime->lookupFunction(0x330220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333D84u; }
        if (ctx->pc != 0x333D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00330220_0x330220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333D84u; }
        if (ctx->pc != 0x333D84u) { return; }
    }
    ctx->pc = 0x333D84u;
label_333d84:
    // 0x333d84: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x333d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x333d88: 0x84720002  lh          $s2, 0x2($v1)
    ctx->pc = 0x333d88u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x333d8c: 0x84710004  lh          $s1, 0x4($v1)
    ctx->pc = 0x333d8cu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x333d90: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x333d90u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x333d94: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x333d94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x333d98: 0x502000f0  beql        $at, $zero, . + 4 + (0xF0 << 2)
    ctx->pc = 0x333D98u;
    {
        const bool branch_taken_0x333d98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x333d98) {
            ctx->pc = 0x333D9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x333D98u;
            // 0x333d9c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33415Cu;
            goto label_33415c;
        }
    }
    ctx->pc = 0x333DA0u;
    // 0x333da0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x333da0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x333da4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x333da4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x333da8: 0x24844870  addiu       $a0, $a0, 0x4870
    ctx->pc = 0x333da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18544));
    // 0x333dac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x333dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x333db0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x333db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x333db4: 0x600008  jr          $v1
    ctx->pc = 0x333DB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x333DBCu: goto label_333dbc;
            case 0x333DD4u: goto label_333dd4;
            case 0x333E30u: goto label_333e30;
            case 0x333E8Cu: goto label_333e8c;
            case 0x333EE8u: goto label_333ee8;
            case 0x333F44u: goto label_333f44;
            case 0x3340B0u: goto label_3340b0;
            case 0x334148u: goto label_334148;
            default: break;
        }
        return;
    }
    ctx->pc = 0x333DBCu;
label_333dbc:
    // 0x333dbc: 0x260401f8  addiu       $a0, $s0, 0x1F8
    ctx->pc = 0x333dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 504));
    // 0x333dc0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x333dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333dc4: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x333DC4u;
    SET_GPR_U32(ctx, 31, 0x333DCCu);
    ctx->pc = 0x333DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333DC4u;
            // 0x333dc8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333DCCu; }
        if (ctx->pc != 0x333DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333DCCu; }
        if (ctx->pc != 0x333DCCu) { return; }
    }
    ctx->pc = 0x333DCCu;
label_333dcc:
    // 0x333dcc: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x333DCCu;
    {
        const bool branch_taken_0x333dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333dcc) {
            ctx->pc = 0x334158u;
            goto label_334158;
        }
    }
    ctx->pc = 0x333DD4u;
label_333dd4:
    // 0x333dd4: 0x2645ff80  addiu       $a1, $s2, -0x80
    ctx->pc = 0x333dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967168));
    // 0x333dd8: 0x26040204  addiu       $a0, $s0, 0x204
    ctx->pc = 0x333dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 516));
    // 0x333ddc: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x333DDCu;
    SET_GPR_U32(ctx, 31, 0x333DE4u);
    ctx->pc = 0x333DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333DDCu;
            // 0x333de0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333DE4u; }
        if (ctx->pc != 0x333DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333DE4u; }
        if (ctx->pc != 0x333DE4u) { return; }
    }
    ctx->pc = 0x333DE4u;
label_333de4:
    // 0x333de4: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x333de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x333de8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x333de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333dec: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x333DECu;
    SET_GPR_U32(ctx, 31, 0x333DF4u);
    ctx->pc = 0x333DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333DECu;
            // 0x333df0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333DF4u; }
        if (ctx->pc != 0x333DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333DF4u; }
        if (ctx->pc != 0x333DF4u) { return; }
    }
    ctx->pc = 0x333DF4u;
label_333df4:
    // 0x333df4: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x333df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x333df8: 0x9042b268  lbu         $v0, -0x4D98($v0)
    ctx->pc = 0x333df8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947432)));
    // 0x333dfc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x333DFCu;
    {
        const bool branch_taken_0x333dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x333dfc) {
            ctx->pc = 0x333E00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x333DFCu;
            // 0x333e00: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x333E1Cu;
            goto label_333e1c;
        }
    }
    ctx->pc = 0x333E04u;
    // 0x333e04: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x333e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x333e08: 0x26040234  addiu       $a0, $s0, 0x234
    ctx->pc = 0x333e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 564));
    // 0x333e0c: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x333E0Cu;
    SET_GPR_U32(ctx, 31, 0x333E14u);
    ctx->pc = 0x333E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333E0Cu;
            // 0x333e10: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333E14u; }
        if (ctx->pc != 0x333E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333E14u; }
        if (ctx->pc != 0x333E14u) { return; }
    }
    ctx->pc = 0x333E14u;
label_333e14:
    // 0x333e14: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x333E14u;
    {
        const bool branch_taken_0x333e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333e14) {
            ctx->pc = 0x334158u;
            goto label_334158;
        }
    }
    ctx->pc = 0x333E1Cu;
label_333e1c:
    // 0x333e1c: 0x26040240  addiu       $a0, $s0, 0x240
    ctx->pc = 0x333e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
    // 0x333e20: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x333E20u;
    SET_GPR_U32(ctx, 31, 0x333E28u);
    ctx->pc = 0x333E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333E20u;
            // 0x333e24: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333E28u; }
        if (ctx->pc != 0x333E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333E28u; }
        if (ctx->pc != 0x333E28u) { return; }
    }
    ctx->pc = 0x333E28u;
label_333e28:
    // 0x333e28: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x333E28u;
    {
        const bool branch_taken_0x333e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333e28) {
            ctx->pc = 0x334158u;
            goto label_334158;
        }
    }
    ctx->pc = 0x333E30u;
label_333e30:
    // 0x333e30: 0x2645ffc0  addiu       $a1, $s2, -0x40
    ctx->pc = 0x333e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967232));
    // 0x333e34: 0x2604024c  addiu       $a0, $s0, 0x24C
    ctx->pc = 0x333e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 588));
    // 0x333e38: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x333E38u;
    SET_GPR_U32(ctx, 31, 0x333E40u);
    ctx->pc = 0x333E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333E38u;
            // 0x333e3c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333E40u; }
        if (ctx->pc != 0x333E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333E40u; }
        if (ctx->pc != 0x333E40u) { return; }
    }
    ctx->pc = 0x333E40u;
label_333e40:
    // 0x333e40: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x333e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x333e44: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x333e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333e48: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x333E48u;
    SET_GPR_U32(ctx, 31, 0x333E50u);
    ctx->pc = 0x333E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333E48u;
            // 0x333e4c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333E50u; }
        if (ctx->pc != 0x333E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333E50u; }
        if (ctx->pc != 0x333E50u) { return; }
    }
    ctx->pc = 0x333E50u;
label_333e50:
    // 0x333e50: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x333e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x333e54: 0x9042b269  lbu         $v0, -0x4D97($v0)
    ctx->pc = 0x333e54u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947433)));
    // 0x333e58: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x333E58u;
    {
        const bool branch_taken_0x333e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x333e58) {
            ctx->pc = 0x333E5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x333E58u;
            // 0x333e5c: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x333E78u;
            goto label_333e78;
        }
    }
    ctx->pc = 0x333E60u;
    // 0x333e60: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x333e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x333e64: 0x26040258  addiu       $a0, $s0, 0x258
    ctx->pc = 0x333e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 600));
    // 0x333e68: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x333E68u;
    SET_GPR_U32(ctx, 31, 0x333E70u);
    ctx->pc = 0x333E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333E68u;
            // 0x333e6c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333E70u; }
        if (ctx->pc != 0x333E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333E70u; }
        if (ctx->pc != 0x333E70u) { return; }
    }
    ctx->pc = 0x333E70u;
label_333e70:
    // 0x333e70: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x333E70u;
    {
        const bool branch_taken_0x333e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333e70) {
            ctx->pc = 0x334158u;
            goto label_334158;
        }
    }
    ctx->pc = 0x333E78u;
label_333e78:
    // 0x333e78: 0x26040264  addiu       $a0, $s0, 0x264
    ctx->pc = 0x333e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 612));
    // 0x333e7c: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x333E7Cu;
    SET_GPR_U32(ctx, 31, 0x333E84u);
    ctx->pc = 0x333E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333E7Cu;
            // 0x333e80: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333E84u; }
        if (ctx->pc != 0x333E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333E84u; }
        if (ctx->pc != 0x333E84u) { return; }
    }
    ctx->pc = 0x333E84u;
label_333e84:
    // 0x333e84: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x333E84u;
    {
        const bool branch_taken_0x333e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333e84) {
            ctx->pc = 0x334158u;
            goto label_334158;
        }
    }
    ctx->pc = 0x333E8Cu;
label_333e8c:
    // 0x333e8c: 0x2645ff60  addiu       $a1, $s2, -0xA0
    ctx->pc = 0x333e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967136));
    // 0x333e90: 0x26040210  addiu       $a0, $s0, 0x210
    ctx->pc = 0x333e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x333e94: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x333E94u;
    SET_GPR_U32(ctx, 31, 0x333E9Cu);
    ctx->pc = 0x333E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333E94u;
            // 0x333e98: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333E9Cu; }
        if (ctx->pc != 0x333E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333E9Cu; }
        if (ctx->pc != 0x333E9Cu) { return; }
    }
    ctx->pc = 0x333E9Cu;
label_333e9c:
    // 0x333e9c: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x333e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x333ea0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x333ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333ea4: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x333EA4u;
    SET_GPR_U32(ctx, 31, 0x333EACu);
    ctx->pc = 0x333EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333EA4u;
            // 0x333ea8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333EACu; }
        if (ctx->pc != 0x333EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333EACu; }
        if (ctx->pc != 0x333EACu) { return; }
    }
    ctx->pc = 0x333EACu;
label_333eac:
    // 0x333eac: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x333eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x333eb0: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x333eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x333eb4: 0x9042b26a  lbu         $v0, -0x4D96($v0)
    ctx->pc = 0x333eb4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947434)));
    // 0x333eb8: 0x24631e58  addiu       $v1, $v1, 0x1E58
    ctx->pc = 0x333eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7768));
    // 0x333ebc: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x333ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x333ec0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x333ec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333ec4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x333ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x333ec8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x333ec8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x333ecc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x333eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x333ed0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x333ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x333ed4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x333ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x333ed8: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x333ED8u;
    SET_GPR_U32(ctx, 31, 0x333EE0u);
    ctx->pc = 0x333EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333ED8u;
            // 0x333edc: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333EE0u; }
        if (ctx->pc != 0x333EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333EE0u; }
        if (ctx->pc != 0x333EE0u) { return; }
    }
    ctx->pc = 0x333EE0u;
label_333ee0:
    // 0x333ee0: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x333EE0u;
    {
        const bool branch_taken_0x333ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333ee0) {
            ctx->pc = 0x334158u;
            goto label_334158;
        }
    }
    ctx->pc = 0x333EE8u;
label_333ee8:
    // 0x333ee8: 0x2645ff80  addiu       $a1, $s2, -0x80
    ctx->pc = 0x333ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967168));
    // 0x333eec: 0x2604021c  addiu       $a0, $s0, 0x21C
    ctx->pc = 0x333eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 540));
    // 0x333ef0: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x333EF0u;
    SET_GPR_U32(ctx, 31, 0x333EF8u);
    ctx->pc = 0x333EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333EF0u;
            // 0x333ef4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333EF8u; }
        if (ctx->pc != 0x333EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333EF8u; }
        if (ctx->pc != 0x333EF8u) { return; }
    }
    ctx->pc = 0x333EF8u;
label_333ef8:
    // 0x333ef8: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x333ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x333efc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x333efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333f00: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x333F00u;
    SET_GPR_U32(ctx, 31, 0x333F08u);
    ctx->pc = 0x333F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333F00u;
            // 0x333f04: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333F08u; }
        if (ctx->pc != 0x333F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333F08u; }
        if (ctx->pc != 0x333F08u) { return; }
    }
    ctx->pc = 0x333F08u;
label_333f08:
    // 0x333f08: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x333f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x333f0c: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x333f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x333f10: 0x9042b26b  lbu         $v0, -0x4D95($v0)
    ctx->pc = 0x333f10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947435)));
    // 0x333f14: 0x24631e58  addiu       $v1, $v1, 0x1E58
    ctx->pc = 0x333f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7768));
    // 0x333f18: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x333f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x333f1c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x333f1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333f20: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x333f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x333f24: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x333f24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x333f28: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x333f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x333f2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x333f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x333f30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x333f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x333f34: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x333F34u;
    SET_GPR_U32(ctx, 31, 0x333F3Cu);
    ctx->pc = 0x333F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333F34u;
            // 0x333f38: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333F3Cu; }
        if (ctx->pc != 0x333F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333F3Cu; }
        if (ctx->pc != 0x333F3Cu) { return; }
    }
    ctx->pc = 0x333F3Cu;
label_333f3c:
    // 0x333f3c: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x333F3Cu;
    {
        const bool branch_taken_0x333f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333f3c) {
            ctx->pc = 0x334158u;
            goto label_334158;
        }
    }
    ctx->pc = 0x333F44u;
label_333f44:
    // 0x333f44: 0x2645ff60  addiu       $a1, $s2, -0xA0
    ctx->pc = 0x333f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967136));
    // 0x333f48: 0x26040228  addiu       $a0, $s0, 0x228
    ctx->pc = 0x333f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 552));
    // 0x333f4c: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x333F4Cu;
    SET_GPR_U32(ctx, 31, 0x333F54u);
    ctx->pc = 0x333F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333F4Cu;
            // 0x333f50: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333F54u; }
        if (ctx->pc != 0x333F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333F54u; }
        if (ctx->pc != 0x333F54u) { return; }
    }
    ctx->pc = 0x333F54u;
label_333f54:
    // 0x333f54: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x333f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x333f58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x333f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333f5c: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x333F5Cu;
    SET_GPR_U32(ctx, 31, 0x333F64u);
    ctx->pc = 0x333F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333F5Cu;
            // 0x333f60: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333F64u; }
        if (ctx->pc != 0x333F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333F64u; }
        if (ctx->pc != 0x333F64u) { return; }
    }
    ctx->pc = 0x333F64u;
label_333f64:
    // 0x333f64: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x333f64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x333f68: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x333f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x333f6c: 0x8c63e7f8  lw          $v1, -0x1808($v1)
    ctx->pc = 0x333f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961144)));
    // 0x333f70: 0x9042e068  lbu         $v0, -0x1F98($v0)
    ctx->pc = 0x333f70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294959208)));
    // 0x333f74: 0x50620028  beql        $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x333F74u;
    {
        const bool branch_taken_0x333f74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x333f74) {
            ctx->pc = 0x333F78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x333F74u;
            // 0x333f78: 0x3c026666  lui         $v0, 0x6666 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x334018u;
            goto label_334018;
        }
    }
    ctx->pc = 0x333F7Cu;
    // 0x333f7c: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x333f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x333f80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x333f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x333f84: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x333f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x333f88: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x333f88u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x333f8c: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x333f8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x333f90: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x333f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x333f94: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x333f94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333f98: 0x1810  mfhi        $v1
    ctx->pc = 0x333f98u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x333f9c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x333f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x333fa0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x333fa0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x333fa4: 0x24421e58  addiu       $v0, $v0, 0x1E58
    ctx->pc = 0x333fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7768));
    // 0x333fa8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x333fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x333fac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x333facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x333fb0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x333fb0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x333fb4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x333fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x333fb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x333fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x333fbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x333fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x333fc0: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x333FC0u;
    SET_GPR_U32(ctx, 31, 0x333FC8u);
    ctx->pc = 0x333FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x333FC0u;
            // 0x333fc4: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333FC8u; }
        if (ctx->pc != 0x333FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x333FC8u; }
        if (ctx->pc != 0x333FC8u) { return; }
    }
    ctx->pc = 0x333FC8u;
label_333fc8:
    // 0x333fc8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x333fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x333fcc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x333fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x333fd0: 0x8c44e7f8  lw          $a0, -0x1808($v0)
    ctx->pc = 0x333fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961144)));
    // 0x333fd4: 0x26450034  addiu       $a1, $s2, 0x34
    ctx->pc = 0x333fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
    // 0x333fd8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x333fd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333fdc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x333fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x333fe0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x333fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x333fe4: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x333fe4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x333fe8: 0x24421e58  addiu       $v0, $v0, 0x1E58
    ctx->pc = 0x333fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7768));
    // 0x333fec: 0x0  nop
    ctx->pc = 0x333fecu;
    // NOP
    // 0x333ff0: 0x1810  mfhi        $v1
    ctx->pc = 0x333ff0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x333ff4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x333ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x333ff8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x333ff8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x333ffc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x333ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x334000: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x334000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x334004: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x334004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x334008: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x334008u;
    SET_GPR_U32(ctx, 31, 0x334010u);
    ctx->pc = 0x33400Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334008u;
            // 0x33400c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334010u; }
        if (ctx->pc != 0x334010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334010u; }
        if (ctx->pc != 0x334010u) { return; }
    }
    ctx->pc = 0x334010u;
label_334010:
    // 0x334010: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x334010u;
    {
        const bool branch_taken_0x334010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x334010) {
            ctx->pc = 0x334158u;
            goto label_334158;
        }
    }
    ctx->pc = 0x334018u;
label_334018:
    // 0x334018: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x334018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33401c: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x33401cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x334020: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x334020u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x334024: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x334024u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x334028: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x334028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x33402c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33402cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334030: 0x1810  mfhi        $v1
    ctx->pc = 0x334030u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x334034: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x334034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x334038: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x334038u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x33403c: 0x24421e68  addiu       $v0, $v0, 0x1E68
    ctx->pc = 0x33403cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7784));
    // 0x334040: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x334040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x334044: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x334044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x334048: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x334048u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33404c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x33404cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x334050: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x334050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x334054: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x334054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x334058: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x334058u;
    SET_GPR_U32(ctx, 31, 0x334060u);
    ctx->pc = 0x33405Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334058u;
            // 0x33405c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334060u; }
        if (ctx->pc != 0x334060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334060u; }
        if (ctx->pc != 0x334060u) { return; }
    }
    ctx->pc = 0x334060u;
label_334060:
    // 0x334060: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x334060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x334064: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x334064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x334068: 0x8c44e7f8  lw          $a0, -0x1808($v0)
    ctx->pc = 0x334068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961144)));
    // 0x33406c: 0x26450034  addiu       $a1, $s2, 0x34
    ctx->pc = 0x33406cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
    // 0x334070: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x334070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334074: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x334074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x334078: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x334078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x33407c: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x33407cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x334080: 0x24421e68  addiu       $v0, $v0, 0x1E68
    ctx->pc = 0x334080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7784));
    // 0x334084: 0x0  nop
    ctx->pc = 0x334084u;
    // NOP
    // 0x334088: 0x1810  mfhi        $v1
    ctx->pc = 0x334088u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x33408c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33408cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x334090: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x334090u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x334094: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x334094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x334098: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x334098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33409c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33409cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3340a0: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x3340A0u;
    SET_GPR_U32(ctx, 31, 0x3340A8u);
    ctx->pc = 0x3340A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3340A0u;
            // 0x3340a4: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3340A8u; }
        if (ctx->pc != 0x3340A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3340A8u; }
        if (ctx->pc != 0x3340A8u) { return; }
    }
    ctx->pc = 0x3340A8u;
label_3340a8:
    // 0x3340a8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x3340A8u;
    {
        const bool branch_taken_0x3340a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3340a8) {
            ctx->pc = 0x334158u;
            goto label_334158;
        }
    }
    ctx->pc = 0x3340B0u;
label_3340b0:
    // 0x3340b0: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x3340b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x3340b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3340b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3340b8: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x3340B8u;
    SET_GPR_U32(ctx, 31, 0x3340C0u);
    ctx->pc = 0x3340BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3340B8u;
            // 0x3340bc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3340C0u; }
        if (ctx->pc != 0x3340C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3340C0u; }
        if (ctx->pc != 0x3340C0u) { return; }
    }
    ctx->pc = 0x3340C0u;
label_3340c0:
    // 0x3340c0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x3340c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x3340c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3340c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3340c8: 0x24841ce4  addiu       $a0, $a0, 0x1CE4
    ctx->pc = 0x3340c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7396));
    // 0x3340cc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3340ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3340d0: 0x2407a828  addiu       $a3, $zero, -0x57D8
    ctx->pc = 0x3340d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944808));
    // 0x3340d4: 0xc0c0b2c  jal         func_302CB0
    ctx->pc = 0x3340D4u;
    SET_GPR_U32(ctx, 31, 0x3340DCu);
    ctx->pc = 0x3340D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3340D4u;
            // 0x3340d8: 0x240800a0  addiu       $t0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302CB0u;
    if (runtime->hasFunction(0x302CB0u)) {
        auto targetFn = runtime->lookupFunction(0x302CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3340DCu; }
        if (ctx->pc != 0x3340DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302CB0_0x302cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3340DCu; }
        if (ctx->pc != 0x3340DCu) { return; }
    }
    ctx->pc = 0x3340DCu;
label_3340dc:
    // 0x3340dc: 0x3c0b003d  lui         $t3, 0x3D
    ctx->pc = 0x3340dcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)61 << 16));
    // 0x3340e0: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x3340e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x3340e4: 0x256b1cf0  addiu       $t3, $t3, 0x1CF0
    ctx->pc = 0x3340e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 7408));
    // 0x3340e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3340e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3340ec: 0x95680006  lhu         $t0, 0x6($t3)
    ctx->pc = 0x3340ecu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x3340f0: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x3340f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3340f4: 0x2625fff0  addiu       $a1, $s1, -0x10
    ctx->pc = 0x3340f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x3340f8: 0x2406a828  addiu       $a2, $zero, -0x57D8
    ctx->pc = 0x3340f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944808));
    // 0x3340fc: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x3340fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x334100: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x334100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x334104: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x334104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x334108: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x334108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x33410c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x33410cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x334110: 0x95690000  lhu         $t1, 0x0($t3)
    ctx->pc = 0x334110u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x334114: 0x956a0002  lhu         $t2, 0x2($t3)
    ctx->pc = 0x334114u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x334118: 0x956b0004  lhu         $t3, 0x4($t3)
    ctx->pc = 0x334118u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x33411c: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x33411Cu;
    SET_GPR_U32(ctx, 31, 0x334124u);
    ctx->pc = 0x334120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33411Cu;
            // 0x334120: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (runtime->hasFunction(0x302EA0u)) {
        auto targetFn = runtime->lookupFunction(0x302EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334124u; }
        if (ctx->pc != 0x334124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302EA0_0x302ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334124u; }
        if (ctx->pc != 0x334124u) { return; }
    }
    ctx->pc = 0x334124u;
label_334124:
    // 0x334124: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x334124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x334128: 0x26450060  addiu       $a1, $s2, 0x60
    ctx->pc = 0x334128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x33412c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33412cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334130: 0x24841cfc  addiu       $a0, $a0, 0x1CFC
    ctx->pc = 0x334130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7420));
    // 0x334134: 0x2407a828  addiu       $a3, $zero, -0x57D8
    ctx->pc = 0x334134u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944808));
    // 0x334138: 0xc0c0b2c  jal         func_302CB0
    ctx->pc = 0x334138u;
    SET_GPR_U32(ctx, 31, 0x334140u);
    ctx->pc = 0x33413Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334138u;
            // 0x33413c: 0x240800a0  addiu       $t0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302CB0u;
    if (runtime->hasFunction(0x302CB0u)) {
        auto targetFn = runtime->lookupFunction(0x302CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334140u; }
        if (ctx->pc != 0x334140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302CB0_0x302cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334140u; }
        if (ctx->pc != 0x334140u) { return; }
    }
    ctx->pc = 0x334140u;
label_334140:
    // 0x334140: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x334140u;
    {
        const bool branch_taken_0x334140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x334140) {
            ctx->pc = 0x334158u;
            goto label_334158;
        }
    }
    ctx->pc = 0x334148u;
label_334148:
    // 0x334148: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x334148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x33414c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33414cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334150: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x334150u;
    SET_GPR_U32(ctx, 31, 0x334158u);
    ctx->pc = 0x334154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334150u;
            // 0x334154: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334158u; }
        if (ctx->pc != 0x334158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334158u; }
        if (ctx->pc != 0x334158u) { return; }
    }
    ctx->pc = 0x334158u;
label_334158:
    // 0x334158: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x334158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_33415c:
    // 0x33415c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x33415cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x334160: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x334160u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x334164: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x334164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x334168: 0x3e00008  jr          $ra
    ctx->pc = 0x334168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33416Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334168u;
            // 0x33416c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x334170u;
label_334170:
    // 0x334170: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x334170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x334174: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x334174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x334178: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x334178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x33417c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x33417cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x334180: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x334180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x334184: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x334184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x334188: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x334188u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33418c: 0x8c44e808  lw          $a0, -0x17F8($v0)
    ctx->pc = 0x33418cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961160)));
    // 0x334190: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x334190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x334194: 0x14830021  bne         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x334194u;
    {
        const bool branch_taken_0x334194 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x334198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334194u;
            // 0x334198: 0x24500090  addiu       $s0, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334194) {
            ctx->pc = 0x33421Cu;
            goto label_33421c;
        }
    }
    ctx->pc = 0x33419Cu;
    // 0x33419c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33419cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x3341a0: 0x240501e0  addiu       $a1, $zero, 0x1E0
    ctx->pc = 0x3341a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x3341a4: 0x24841cc0  addiu       $a0, $a0, 0x1CC0
    ctx->pc = 0x3341a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7360));
    // 0x3341a8: 0x24060190  addiu       $a2, $zero, 0x190
    ctx->pc = 0x3341a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x3341ac: 0xc0c0b14  jal         func_302C50
    ctx->pc = 0x3341ACu;
    SET_GPR_U32(ctx, 31, 0x3341B4u);
    ctx->pc = 0x3341B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3341ACu;
            // 0x3341b0: 0x2407a829  addiu       $a3, $zero, -0x57D7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302C50u;
    if (runtime->hasFunction(0x302C50u)) {
        auto targetFn = runtime->lookupFunction(0x302C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3341B4u; }
        if (ctx->pc != 0x3341B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302C50_0x302c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3341B4u; }
        if (ctx->pc != 0x3341B4u) { return; }
    }
    ctx->pc = 0x3341B4u;
label_3341b4:
    // 0x3341b4: 0x3c0b003d  lui         $t3, 0x3D
    ctx->pc = 0x3341b4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)61 << 16));
    // 0x3341b8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3341b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3341bc: 0x256b1ccc  addiu       $t3, $t3, 0x1CCC
    ctx->pc = 0x3341bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 7372));
    // 0x3341c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3341c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3341c4: 0x95680006  lhu         $t0, 0x6($t3)
    ctx->pc = 0x3341c4u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x3341c8: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x3341c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3341cc: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x3341ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x3341d0: 0x2406a829  addiu       $a2, $zero, -0x57D7
    ctx->pc = 0x3341d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
    // 0x3341d4: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x3341d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3341d8: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x3341d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x3341dc: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x3341dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x3341e0: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x3341e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x3341e4: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x3341e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x3341e8: 0x95690000  lhu         $t1, 0x0($t3)
    ctx->pc = 0x3341e8u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3341ec: 0x956a0002  lhu         $t2, 0x2($t3)
    ctx->pc = 0x3341ecu;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x3341f0: 0x956b0004  lhu         $t3, 0x4($t3)
    ctx->pc = 0x3341f0u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x3341f4: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x3341F4u;
    SET_GPR_U32(ctx, 31, 0x3341FCu);
    ctx->pc = 0x3341F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3341F4u;
            // 0x3341f8: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (runtime->hasFunction(0x302EA0u)) {
        auto targetFn = runtime->lookupFunction(0x302EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3341FCu; }
        if (ctx->pc != 0x3341FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302EA0_0x302ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3341FCu; }
        if (ctx->pc != 0x3341FCu) { return; }
    }
    ctx->pc = 0x3341FCu;
label_3341fc:
    // 0x3341fc: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x3341fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x334200: 0x24050240  addiu       $a1, $zero, 0x240
    ctx->pc = 0x334200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    // 0x334204: 0x24841cd8  addiu       $a0, $a0, 0x1CD8
    ctx->pc = 0x334204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7384));
    // 0x334208: 0x24060190  addiu       $a2, $zero, 0x190
    ctx->pc = 0x334208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x33420c: 0xc0c0b14  jal         func_302C50
    ctx->pc = 0x33420Cu;
    SET_GPR_U32(ctx, 31, 0x334214u);
    ctx->pc = 0x334210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33420Cu;
            // 0x334210: 0x2407a829  addiu       $a3, $zero, -0x57D7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302C50u;
    if (runtime->hasFunction(0x302C50u)) {
        auto targetFn = runtime->lookupFunction(0x302C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334214u; }
        if (ctx->pc != 0x334214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302C50_0x302c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334214u; }
        if (ctx->pc != 0x334214u) { return; }
    }
    ctx->pc = 0x334214u;
label_334214:
    // 0x334214: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x334214u;
    {
        const bool branch_taken_0x334214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x334214) {
            ctx->pc = 0x334294u;
            goto label_334294;
        }
    }
    ctx->pc = 0x33421Cu;
label_33421c:
    // 0x33421c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33421cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x334220: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x334220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x334224: 0x24841e04  addiu       $a0, $a0, 0x1E04
    ctx->pc = 0x334224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7684));
    // 0x334228: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x334228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33422c: 0xc0c0b14  jal         func_302C50
    ctx->pc = 0x33422Cu;
    SET_GPR_U32(ctx, 31, 0x334234u);
    ctx->pc = 0x334230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33422Cu;
            // 0x334230: 0x2407a829  addiu       $a3, $zero, -0x57D7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302C50u;
    if (runtime->hasFunction(0x302C50u)) {
        auto targetFn = runtime->lookupFunction(0x302C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334234u; }
        if (ctx->pc != 0x334234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302C50_0x302c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334234u; }
        if (ctx->pc != 0x334234u) { return; }
    }
    ctx->pc = 0x334234u;
label_334234:
    // 0x334234: 0x3c0b003d  lui         $t3, 0x3D
    ctx->pc = 0x334234u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)61 << 16));
    // 0x334238: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x334238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33423c: 0x256b1e10  addiu       $t3, $t3, 0x1E10
    ctx->pc = 0x33423cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 7696));
    // 0x334240: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x334240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x334244: 0x95680006  lhu         $t0, 0x6($t3)
    ctx->pc = 0x334244u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x334248: 0x2605fff0  addiu       $a1, $s0, -0x10
    ctx->pc = 0x334248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x33424c: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x33424cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x334250: 0x2406a829  addiu       $a2, $zero, -0x57D7
    ctx->pc = 0x334250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
    // 0x334254: 0x24070140  addiu       $a3, $zero, 0x140
    ctx->pc = 0x334254u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x334258: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x334258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x33425c: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x33425cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x334260: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x334260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x334264: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x334264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x334268: 0x95690000  lhu         $t1, 0x0($t3)
    ctx->pc = 0x334268u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x33426c: 0x956a0002  lhu         $t2, 0x2($t3)
    ctx->pc = 0x33426cu;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x334270: 0x956b0004  lhu         $t3, 0x4($t3)
    ctx->pc = 0x334270u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x334274: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x334274u;
    SET_GPR_U32(ctx, 31, 0x33427Cu);
    ctx->pc = 0x334278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334274u;
            // 0x334278: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (runtime->hasFunction(0x302EA0u)) {
        auto targetFn = runtime->lookupFunction(0x302EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33427Cu; }
        if (ctx->pc != 0x33427Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302EA0_0x302ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33427Cu; }
        if (ctx->pc != 0x33427Cu) { return; }
    }
    ctx->pc = 0x33427Cu;
label_33427c:
    // 0x33427c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x33427cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x334280: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x334280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334284: 0x24841e1c  addiu       $a0, $a0, 0x1E1C
    ctx->pc = 0x334284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7708));
    // 0x334288: 0x240501e0  addiu       $a1, $zero, 0x1E0
    ctx->pc = 0x334288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x33428c: 0xc0c0b14  jal         func_302C50
    ctx->pc = 0x33428Cu;
    SET_GPR_U32(ctx, 31, 0x334294u);
    ctx->pc = 0x334290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33428Cu;
            // 0x334290: 0x2407a829  addiu       $a3, $zero, -0x57D7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944809));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302C50u;
    if (runtime->hasFunction(0x302C50u)) {
        auto targetFn = runtime->lookupFunction(0x302C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334294u; }
        if (ctx->pc != 0x334294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302C50_0x302c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334294u; }
        if (ctx->pc != 0x334294u) { return; }
    }
    ctx->pc = 0x334294u;
label_334294:
    // 0x334294: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x334294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x334298: 0x9063e818  lbu         $v1, -0x17E8($v1)
    ctx->pc = 0x334298u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
    // 0x33429c: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x33429cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3342a0: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3342A0u;
    {
        const bool branch_taken_0x3342a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3342a0) {
            ctx->pc = 0x3342A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3342A0u;
            // 0x3342a4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3342B4u;
            goto label_3342b4;
        }
    }
    ctx->pc = 0x3342A8u;
    // 0x3342a8: 0xc055728  jal         func_155CA0
    ctx->pc = 0x3342A8u;
    SET_GPR_U32(ctx, 31, 0x3342B0u);
    ctx->pc = 0x3342ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3342A8u;
            // 0x3342ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3342B0u; }
        if (ctx->pc != 0x3342B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3342B0u; }
        if (ctx->pc != 0x3342B0u) { return; }
    }
    ctx->pc = 0x3342B0u;
label_3342b0:
    // 0x3342b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3342b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3342b4:
    // 0x3342b4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3342b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3342b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3342b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3342bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3342BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3342C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3342BCu;
            // 0x3342c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3342C4u;
    // 0x3342c4: 0x0  nop
    ctx->pc = 0x3342c4u;
    // NOP
    // 0x3342c8: 0x0  nop
    ctx->pc = 0x3342c8u;
    // NOP
    // 0x3342cc: 0x0  nop
    ctx->pc = 0x3342ccu;
    // NOP
label_3342d0:
    // 0x3342d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3342d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3342d4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3342d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3342d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3342d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3342dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3342dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3342e0: 0x9066e818  lbu         $a2, -0x17E8($v1)
    ctx->pc = 0x3342e0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
    // 0x3342e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3342e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3342e8: 0x10c30119  beq         $a2, $v1, . + 4 + (0x119 << 2)
    ctx->pc = 0x3342E8u;
    {
        const bool branch_taken_0x3342e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3342e8) {
            ctx->pc = 0x334750u;
            goto label_334750;
        }
    }
    ctx->pc = 0x3342F0u;
    // 0x3342f0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3342f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3342f4: 0x50c400a1  beql        $a2, $a0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x3342F4u;
    {
        const bool branch_taken_0x3342f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x3342f4) {
            ctx->pc = 0x3342F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3342F4u;
            // 0x3342f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33457Cu;
            goto label_33457c;
        }
    }
    ctx->pc = 0x3342FCu;
    // 0x3342fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3342fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x334300: 0x10c50028  beq         $a2, $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x334300u;
    {
        const bool branch_taken_0x334300 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x334300) {
            ctx->pc = 0x3343A4u;
            goto label_3343a4;
        }
    }
    ctx->pc = 0x334308u;
    // 0x334308: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x334308u;
    {
        const bool branch_taken_0x334308 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x334308) {
            ctx->pc = 0x334318u;
            goto label_334318;
        }
    }
    ctx->pc = 0x334310u;
    // 0x334310: 0x10000125  b           . + 4 + (0x125 << 2)
    ctx->pc = 0x334310u;
    {
        const bool branch_taken_0x334310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334310u;
            // 0x334314: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334310) {
            ctx->pc = 0x3347A8u;
            goto label_3347a8;
        }
    }
    ctx->pc = 0x334318u;
label_334318:
    // 0x334318: 0xc0cbf34  jal         func_32FCD0
    ctx->pc = 0x334318u;
    SET_GPR_U32(ctx, 31, 0x334320u);
    ctx->pc = 0x32FCD0u;
    if (runtime->hasFunction(0x32FCD0u)) {
        auto targetFn = runtime->lookupFunction(0x32FCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334320u; }
        if (ctx->pc != 0x334320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032FCD0_0x32fcd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334320u; }
        if (ctx->pc != 0x334320u) { return; }
    }
    ctx->pc = 0x334320u;
label_334320:
    // 0x334320: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x334320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x334324: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x334324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x334328: 0x9063e818  lbu         $v1, -0x17E8($v1)
    ctx->pc = 0x334328u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
    // 0x33432c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33432cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x334330: 0xac40e808  sw          $zero, -0x17F8($v0)
    ctx->pc = 0x334330u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961160), GPR_U32(ctx, 0));
    // 0x334334: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x334334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x334338: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x334338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33433c: 0xc069184  jal         func_1A4610
    ctx->pc = 0x33433Cu;
    SET_GPR_U32(ctx, 31, 0x334344u);
    ctx->pc = 0x334340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33433Cu;
            // 0x334340: 0xa043e818  sb          $v1, -0x17E8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4610u;
    if (runtime->hasFunction(0x1A4610u)) {
        auto targetFn = runtime->lookupFunction(0x1A4610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334344u; }
        if (ctx->pc != 0x334344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4610_0x1a4610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334344u; }
        if (ctx->pc != 0x334344u) { return; }
    }
    ctx->pc = 0x334344u;
label_334344:
    // 0x334344: 0xc069254  jal         func_1A4950
    ctx->pc = 0x334344u;
    SET_GPR_U32(ctx, 31, 0x33434Cu);
    ctx->pc = 0x1A4950u;
    if (runtime->hasFunction(0x1A4950u)) {
        auto targetFn = runtime->lookupFunction(0x1A4950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33434Cu; }
        if (ctx->pc != 0x33434Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4950_0x1a4950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33434Cu; }
        if (ctx->pc != 0x33434Cu) { return; }
    }
    ctx->pc = 0x33434Cu;
label_33434c:
    // 0x33434c: 0xc04a3be  jal         func_128EF8
    ctx->pc = 0x33434Cu;
    SET_GPR_U32(ctx, 31, 0x334354u);
    ctx->pc = 0x128EF8u;
    if (runtime->hasFunction(0x128EF8u)) {
        auto targetFn = runtime->lookupFunction(0x128EF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334354u; }
        if (ctx->pc != 0x334354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00128EF8_0x128ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334354u; }
        if (ctx->pc != 0x334354u) { return; }
    }
    ctx->pc = 0x334354u;
label_334354:
    // 0x334354: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x334354u;
    {
        const bool branch_taken_0x334354 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x334358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334354u;
            // 0x334358: 0x3044001f  andi        $a0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x334354) {
            ctx->pc = 0x334368u;
            goto label_334368;
        }
    }
    ctx->pc = 0x33435Cu;
    // 0x33435c: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x33435Cu;
    {
        const bool branch_taken_0x33435c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x33435c) {
            ctx->pc = 0x334368u;
            goto label_334368;
        }
    }
    ctx->pc = 0x334364u;
    // 0x334364: 0x2484ffe0  addiu       $a0, $a0, -0x20
    ctx->pc = 0x334364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
label_334368:
    // 0x334368: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x334368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x33436c: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x33436cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x334370: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x334370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x334374: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x334374u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x334378: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x334378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x33437c: 0xc081068  jal         func_2041A0
    ctx->pc = 0x33437Cu;
    SET_GPR_U32(ctx, 31, 0x334384u);
    ctx->pc = 0x334380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33437Cu;
            // 0x334380: 0xa0400064  sb          $zero, 0x64($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 100), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2041A0u;
    if (runtime->hasFunction(0x2041A0u)) {
        auto targetFn = runtime->lookupFunction(0x2041A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334384u; }
        if (ctx->pc != 0x334384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002041A0_0x2041a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334384u; }
        if (ctx->pc != 0x334384u) { return; }
    }
    ctx->pc = 0x334384u;
label_334384:
    // 0x334384: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x334384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x334388: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x334388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x33438c: 0xc080fa8  jal         func_203EA0
    ctx->pc = 0x33438Cu;
    SET_GPR_U32(ctx, 31, 0x334394u);
    ctx->pc = 0x334390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33438Cu;
            // 0x334390: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x203EA0u;
    if (runtime->hasFunction(0x203EA0u)) {
        auto targetFn = runtime->lookupFunction(0x203EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334394u; }
        if (ctx->pc != 0x334394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00203EA0_0x203ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334394u; }
        if (ctx->pc != 0x334394u) { return; }
    }
    ctx->pc = 0x334394u;
label_334394:
    // 0x334394: 0xc081504  jal         func_205410
    ctx->pc = 0x334394u;
    SET_GPR_U32(ctx, 31, 0x33439Cu);
    ctx->pc = 0x205410u;
    if (runtime->hasFunction(0x205410u)) {
        auto targetFn = runtime->lookupFunction(0x205410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33439Cu; }
        if (ctx->pc != 0x33439Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00205410_0x205410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33439Cu; }
        if (ctx->pc != 0x33439Cu) { return; }
    }
    ctx->pc = 0x33439Cu;
label_33439c:
    // 0x33439c: 0x10000101  b           . + 4 + (0x101 << 2)
    ctx->pc = 0x33439Cu;
    {
        const bool branch_taken_0x33439c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33439c) {
            ctx->pc = 0x3347A4u;
            goto label_3347a4;
        }
    }
    ctx->pc = 0x3343A4u;
label_3343a4:
    // 0x3343a4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3343a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3343a8: 0x8c63e7d0  lw          $v1, -0x1830($v1)
    ctx->pc = 0x3343a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961104)));
    // 0x3343ac: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x3343acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x3343b0: 0x14600055  bnez        $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x3343B0u;
    {
        const bool branch_taken_0x3343b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3343b0) {
            ctx->pc = 0x334508u;
            goto label_334508;
        }
    }
    ctx->pc = 0x3343B8u;
    // 0x3343b8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3343b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3343bc: 0x8c67e7c8  lw          $a3, -0x1838($v1)
    ctx->pc = 0x3343bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961096)));
    // 0x3343c0: 0x28e1000b  slti        $at, $a3, 0xB
    ctx->pc = 0x3343c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x3343c4: 0x10200050  beqz        $at, . + 4 + (0x50 << 2)
    ctx->pc = 0x3343C4u;
    {
        const bool branch_taken_0x3343c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3343c4) {
            ctx->pc = 0x334508u;
            goto label_334508;
        }
    }
    ctx->pc = 0x3343CCu;
    // 0x3343cc: 0x2ce1000b  sltiu       $at, $a3, 0xB
    ctx->pc = 0x3343ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x3343d0: 0x1020004d  beqz        $at, . + 4 + (0x4D << 2)
    ctx->pc = 0x3343D0u;
    {
        const bool branch_taken_0x3343d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3343d0) {
            ctx->pc = 0x334508u;
            goto label_334508;
        }
    }
    ctx->pc = 0x3343D8u;
    // 0x3343d8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3343d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3343dc: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x3343dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x3343e0: 0x248448b0  addiu       $a0, $a0, 0x48B0
    ctx->pc = 0x3343e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18608));
    // 0x3343e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3343e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3343e8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3343e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3343ec: 0x600008  jr          $v1
    ctx->pc = 0x3343ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3343F4u: goto label_3343f4;
            case 0x334428u: goto label_334428;
            case 0x33445Cu: goto label_33445c;
            case 0x3344A0u: goto label_3344a0;
            case 0x3344D8u: goto label_3344d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3343F4u;
label_3343f4:
    // 0x3343f4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x3343f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x3343f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3343f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3343fc: 0x248447c0  addiu       $a0, $a0, 0x47C0
    ctx->pc = 0x3343fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18368));
    // 0x334400: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x334400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x334404: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x334404u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x334408: 0xc0cbfdc  jal         func_32FF70
    ctx->pc = 0x334408u;
    SET_GPR_U32(ctx, 31, 0x334410u);
    ctx->pc = 0x33440Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334408u;
            // 0x33440c: 0x24090168  addiu       $t1, $zero, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32FF70u;
    if (runtime->hasFunction(0x32FF70u)) {
        auto targetFn = runtime->lookupFunction(0x32FF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334410u; }
        if (ctx->pc != 0x334410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032FF70_0x32ff70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334410u; }
        if (ctx->pc != 0x334410u) { return; }
    }
    ctx->pc = 0x334410u;
label_334410:
    // 0x334410: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x334410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x334414: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x334414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x334418: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x334418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x33441c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33441cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x334420: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x334420u;
    {
        const bool branch_taken_0x334420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334420u;
            // 0x334424: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334420) {
            ctx->pc = 0x334508u;
            goto label_334508;
        }
    }
    ctx->pc = 0x334428u;
label_334428:
    // 0x334428: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x334428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x33442c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x33442cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334430: 0x248447c0  addiu       $a0, $a0, 0x47C0
    ctx->pc = 0x334430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18368));
    // 0x334434: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x334434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x334438: 0x24080060  addiu       $t0, $zero, 0x60
    ctx->pc = 0x334438u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x33443c: 0xc0cbfdc  jal         func_32FF70
    ctx->pc = 0x33443Cu;
    SET_GPR_U32(ctx, 31, 0x334444u);
    ctx->pc = 0x334440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33443Cu;
            // 0x334440: 0x24090158  addiu       $t1, $zero, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32FF70u;
    if (runtime->hasFunction(0x32FF70u)) {
        auto targetFn = runtime->lookupFunction(0x32FF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334444u; }
        if (ctx->pc != 0x334444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032FF70_0x32ff70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334444u; }
        if (ctx->pc != 0x334444u) { return; }
    }
    ctx->pc = 0x334444u;
label_334444:
    // 0x334444: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x334444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x334448: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x334448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33444c: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x33444cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x334450: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x334450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x334454: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x334454u;
    {
        const bool branch_taken_0x334454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334454u;
            // 0x334458: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334454) {
            ctx->pc = 0x334508u;
            goto label_334508;
        }
    }
    ctx->pc = 0x33445Cu;
label_33445c:
    // 0x33445c: 0x24e2fffe  addiu       $v0, $a3, -0x2
    ctx->pc = 0x33445cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
    // 0x334460: 0x7363c  dsll32      $a2, $a3, 24
    ctx->pc = 0x334460u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 24));
    // 0x334464: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x334464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x334468: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x334468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x33446c: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x33446cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x334470: 0x248447c0  addiu       $a0, $a0, 0x47C0
    ctx->pc = 0x334470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18368));
    // 0x334474: 0x244800a0  addiu       $t0, $v0, 0xA0
    ctx->pc = 0x334474u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x334478: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x334478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33447c: 0x2407fea0  addiu       $a3, $zero, -0x160
    ctx->pc = 0x33447cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966944));
    // 0x334480: 0xc0cbfdc  jal         func_32FF70
    ctx->pc = 0x334480u;
    SET_GPR_U32(ctx, 31, 0x334488u);
    ctx->pc = 0x334484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334480u;
            // 0x334484: 0x240900c8  addiu       $t1, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32FF70u;
    if (runtime->hasFunction(0x32FF70u)) {
        auto targetFn = runtime->lookupFunction(0x32FF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334488u; }
        if (ctx->pc != 0x334488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032FF70_0x32ff70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334488u; }
        if (ctx->pc != 0x334488u) { return; }
    }
    ctx->pc = 0x334488u;
label_334488:
    // 0x334488: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x334488u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33448c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33448cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x334490: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x334490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x334494: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x334494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x334498: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x334498u;
    {
        const bool branch_taken_0x334498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33449Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334498u;
            // 0x33449c: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334498) {
            ctx->pc = 0x334508u;
            goto label_334508;
        }
    }
    ctx->pc = 0x3344A0u;
label_3344a0:
    // 0x3344a0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x3344a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x3344a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3344a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3344a8: 0x248447c0  addiu       $a0, $a0, 0x47C0
    ctx->pc = 0x3344a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18368));
    // 0x3344ac: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x3344acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3344b0: 0x2407fea0  addiu       $a3, $zero, -0x160
    ctx->pc = 0x3344b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966944));
    // 0x3344b4: 0x24080190  addiu       $t0, $zero, 0x190
    ctx->pc = 0x3344b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x3344b8: 0xc0cc004  jal         func_330010
    ctx->pc = 0x3344B8u;
    SET_GPR_U32(ctx, 31, 0x3344C0u);
    ctx->pc = 0x3344BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3344B8u;
            // 0x3344bc: 0x240900c8  addiu       $t1, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x330010u;
    if (runtime->hasFunction(0x330010u)) {
        auto targetFn = runtime->lookupFunction(0x330010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3344C0u; }
        if (ctx->pc != 0x3344C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00330010_0x330010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3344C0u; }
        if (ctx->pc != 0x3344C0u) { return; }
    }
    ctx->pc = 0x3344C0u;
label_3344c0:
    // 0x3344c0: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3344c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3344c4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3344c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3344c8: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x3344c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x3344cc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3344ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3344d0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3344D0u;
    {
        const bool branch_taken_0x3344d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3344D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3344D0u;
            // 0x3344d4: 0xac64e7c8  sw          $a0, -0x1838($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3344d0) {
            ctx->pc = 0x334508u;
            goto label_334508;
        }
    }
    ctx->pc = 0x3344D8u;
label_3344d8:
    // 0x3344d8: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x3344d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x3344dc: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x3344dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3344e0: 0x248447c0  addiu       $a0, $a0, 0x47C0
    ctx->pc = 0x3344e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18368));
    // 0x3344e4: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x3344e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x3344e8: 0x24080190  addiu       $t0, $zero, 0x190
    ctx->pc = 0x3344e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x3344ec: 0xc0cbfdc  jal         func_32FF70
    ctx->pc = 0x3344ECu;
    SET_GPR_U32(ctx, 31, 0x3344F4u);
    ctx->pc = 0x3344F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3344ECu;
            // 0x3344f0: 0x240901e0  addiu       $t1, $zero, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32FF70u;
    if (runtime->hasFunction(0x32FF70u)) {
        auto targetFn = runtime->lookupFunction(0x32FF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3344F4u; }
        if (ctx->pc != 0x3344F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032FF70_0x32ff70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3344F4u; }
        if (ctx->pc != 0x3344F4u) { return; }
    }
    ctx->pc = 0x3344F4u;
label_3344f4:
    // 0x3344f4: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3344f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3344f8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3344f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3344fc: 0x8c84e7c8  lw          $a0, -0x1838($a0)
    ctx->pc = 0x3344fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961096)));
    // 0x334500: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x334500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x334504: 0xac64e7c8  sw          $a0, -0x1838($v1)
    ctx->pc = 0x334504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 4));
label_334508:
    // 0x334508: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x334508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33450c: 0x9064e810  lbu         $a0, -0x17F0($v1)
    ctx->pc = 0x33450cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x334510: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x334510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x334514: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x334514u;
    {
        const bool branch_taken_0x334514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x334514) {
            ctx->pc = 0x334564u;
            goto label_334564;
        }
    }
    ctx->pc = 0x33451Cu;
    // 0x33451c: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x33451cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x334520: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x334520u;
    {
        const bool branch_taken_0x334520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x334520) {
            ctx->pc = 0x334564u;
            goto label_334564;
        }
    }
    ctx->pc = 0x334528u;
    // 0x334528: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x334528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33452c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x33452cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x334530: 0x9047e818  lbu         $a3, -0x17E8($v0)
    ctx->pc = 0x334530u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961176)));
    // 0x334534: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x334534u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x334538: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x334538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33453c: 0x24844e00  addiu       $a0, $a0, 0x4E00
    ctx->pc = 0x33453cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19968));
    // 0x334540: 0x24a54648  addiu       $a1, $a1, 0x4648
    ctx->pc = 0x334540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17992));
    // 0x334544: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x334544u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334548: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x334548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33454c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x33454cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334550: 0xa040e810  sb          $zero, -0x17F0($v0)
    ctx->pc = 0x334550u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961168), (uint8_t)GPR_U32(ctx, 0));
    // 0x334554: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x334554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x334558: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x334558u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33455c: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x33455Cu;
    SET_GPR_U32(ctx, 31, 0x334564u);
    ctx->pc = 0x334560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33455Cu;
            // 0x334560: 0xa062e818  sb          $v0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334564u; }
        if (ctx->pc != 0x334564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334564u; }
        if (ctx->pc != 0x334564u) { return; }
    }
    ctx->pc = 0x334564u;
label_334564:
    // 0x334564: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x334564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x334568: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x334568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33456c: 0x8c84e7d0  lw          $a0, -0x1830($a0)
    ctx->pc = 0x33456cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961104)));
    // 0x334570: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x334570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x334574: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x334574u;
    {
        const bool branch_taken_0x334574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334574u;
            // 0x334578: 0xac64e7d0  sw          $a0, -0x1830($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961104), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334574) {
            ctx->pc = 0x3347A4u;
            goto label_3347a4;
        }
    }
    ctx->pc = 0x33457Cu;
label_33457c:
    // 0x33457c: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x33457Cu;
    SET_GPR_U32(ctx, 31, 0x334584u);
    ctx->pc = 0x334580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33457Cu;
            // 0x334580: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (runtime->hasFunction(0x1A3420u)) {
        auto targetFn = runtime->lookupFunction(0x1A3420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334584u; }
        if (ctx->pc != 0x334584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3420_0x1a3420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334584u; }
        if (ctx->pc != 0x334584u) { return; }
    }
    ctx->pc = 0x334584u;
label_334584:
    // 0x334584: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x334584u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x334588: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x334588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33458c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33458cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x334590: 0x8044e808  lb          $a0, -0x17F8($v0)
    ctx->pc = 0x334590u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961160)));
    // 0x334594: 0xc0cd948  jal         func_336520
    ctx->pc = 0x334594u;
    SET_GPR_U32(ctx, 31, 0x33459Cu);
    ctx->pc = 0x334598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334594u;
            // 0x334598: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x336520u;
    if (runtime->hasFunction(0x336520u)) {
        auto targetFn = runtime->lookupFunction(0x336520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33459Cu; }
        if (ctx->pc != 0x33459Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00336520_0x336520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33459Cu; }
        if (ctx->pc != 0x33459Cu) { return; }
    }
    ctx->pc = 0x33459Cu;
label_33459c:
    // 0x33459c: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x33459cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3345a0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3345a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3345a4: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x3345a4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x3345a8: 0x2c810007  sltiu       $at, $a0, 0x7
    ctx->pc = 0x3345a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x3345ac: 0x10200044  beqz        $at, . + 4 + (0x44 << 2)
    ctx->pc = 0x3345ACu;
    {
        const bool branch_taken_0x3345ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3345B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3345ACu;
            // 0x3345b0: 0xac64e808  sw          $a0, -0x17F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961160), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3345ac) {
            ctx->pc = 0x3346C0u;
            goto label_3346c0;
        }
    }
    ctx->pc = 0x3345B4u;
    // 0x3345b4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3345b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3345b8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3345b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3345bc: 0x24844890  addiu       $a0, $a0, 0x4890
    ctx->pc = 0x3345bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18576));
    // 0x3345c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3345c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3345c4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3345c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3345c8: 0x600008  jr          $v1
    ctx->pc = 0x3345C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3345D0u: goto label_3345d0;
            case 0x3345ECu: goto label_3345ec;
            case 0x334620u: goto label_334620;
            case 0x334654u: goto label_334654;
            case 0x334670u: goto label_334670;
            case 0x33468Cu: goto label_33468c;
            case 0x3346A8u: goto label_3346a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3345D0u;
label_3345d0:
    // 0x3345d0: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x3345d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x3345d4: 0x8044b280  lb          $a0, -0x4D80($v0)
    ctx->pc = 0x3345d4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947456)));
    // 0x3345d8: 0xc0cd9f0  jal         func_3367C0
    ctx->pc = 0x3345D8u;
    SET_GPR_U32(ctx, 31, 0x3345E0u);
    ctx->pc = 0x3345DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3345D8u;
            // 0x3345dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3367C0u;
    if (runtime->hasFunction(0x3367C0u)) {
        auto targetFn = runtime->lookupFunction(0x3367C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3345E0u; }
        if (ctx->pc != 0x3345E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003367C0_0x3367c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3345E0u; }
        if (ctx->pc != 0x3345E0u) { return; }
    }
    ctx->pc = 0x3345E0u;
label_3345e0:
    // 0x3345e0: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x3345e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x3345e4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x3345E4u;
    {
        const bool branch_taken_0x3345e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3345E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3345E4u;
            // 0x3345e8: 0xa062b280  sb          $v0, -0x4D80($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294947456), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3345e4) {
            ctx->pc = 0x3346C0u;
            goto label_3346c0;
        }
    }
    ctx->pc = 0x3345ECu;
label_3345ec:
    // 0x3345ec: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x3345ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x3345f0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3345f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3345f4: 0x8063b283  lb          $v1, -0x4D7D($v1)
    ctx->pc = 0x3345f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947459)));
    // 0x3345f8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3345f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3345fc: 0x24640018  addiu       $a0, $v1, 0x18
    ctx->pc = 0x3345fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x334600: 0xc0cda48  jal         func_336920
    ctx->pc = 0x334600u;
    SET_GPR_U32(ctx, 31, 0x334608u);
    ctx->pc = 0x334604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334600u;
            // 0x334604: 0xac44e7f8  sw          $a0, -0x1808($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961144), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x336920u;
    if (runtime->hasFunction(0x336920u)) {
        auto targetFn = runtime->lookupFunction(0x336920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334608u; }
        if (ctx->pc != 0x334608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00336920_0x336920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334608u; }
        if (ctx->pc != 0x334608u) { return; }
    }
    ctx->pc = 0x334608u;
label_334608:
    // 0x334608: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x334608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33460c: 0x2444ffe8  addiu       $a0, $v0, -0x18
    ctx->pc = 0x33460cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x334610: 0xac62e7f8  sw          $v0, -0x1808($v1)
    ctx->pc = 0x334610u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961144), GPR_U32(ctx, 2));
    // 0x334614: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x334614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x334618: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x334618u;
    {
        const bool branch_taken_0x334618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33461Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334618u;
            // 0x33461c: 0xa064b283  sb          $a0, -0x4D7D($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294947459), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334618) {
            ctx->pc = 0x3346C0u;
            goto label_3346c0;
        }
    }
    ctx->pc = 0x334620u;
label_334620:
    // 0x334620: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x334620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x334624: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x334624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x334628: 0x8063b284  lb          $v1, -0x4D7C($v1)
    ctx->pc = 0x334628u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947460)));
    // 0x33462c: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x33462cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x334630: 0x24640018  addiu       $a0, $v1, 0x18
    ctx->pc = 0x334630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x334634: 0xc0cda48  jal         func_336920
    ctx->pc = 0x334634u;
    SET_GPR_U32(ctx, 31, 0x33463Cu);
    ctx->pc = 0x334638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334634u;
            // 0x334638: 0xac44e7f8  sw          $a0, -0x1808($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961144), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x336920u;
    if (runtime->hasFunction(0x336920u)) {
        auto targetFn = runtime->lookupFunction(0x336920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33463Cu; }
        if (ctx->pc != 0x33463Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00336920_0x336920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33463Cu; }
        if (ctx->pc != 0x33463Cu) { return; }
    }
    ctx->pc = 0x33463Cu;
label_33463c:
    // 0x33463c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33463cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x334640: 0x2444ffe8  addiu       $a0, $v0, -0x18
    ctx->pc = 0x334640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x334644: 0xac62e7f8  sw          $v0, -0x1808($v1)
    ctx->pc = 0x334644u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961144), GPR_U32(ctx, 2));
    // 0x334648: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x334648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x33464c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x33464Cu;
    {
        const bool branch_taken_0x33464c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33464Cu;
            // 0x334650: 0xa064b284  sb          $a0, -0x4D7C($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294947460), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33464c) {
            ctx->pc = 0x3346C0u;
            goto label_3346c0;
        }
    }
    ctx->pc = 0x334654u;
label_334654:
    // 0x334654: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x334654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x334658: 0x8044b282  lb          $a0, -0x4D7E($v0)
    ctx->pc = 0x334658u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947458)));
    // 0x33465c: 0xc0cd9f0  jal         func_3367C0
    ctx->pc = 0x33465Cu;
    SET_GPR_U32(ctx, 31, 0x334664u);
    ctx->pc = 0x334660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33465Cu;
            // 0x334660: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3367C0u;
    if (runtime->hasFunction(0x3367C0u)) {
        auto targetFn = runtime->lookupFunction(0x3367C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334664u; }
        if (ctx->pc != 0x334664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003367C0_0x3367c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334664u; }
        if (ctx->pc != 0x334664u) { return; }
    }
    ctx->pc = 0x334664u;
label_334664:
    // 0x334664: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x334664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x334668: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x334668u;
    {
        const bool branch_taken_0x334668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33466Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334668u;
            // 0x33466c: 0xa062b282  sb          $v0, -0x4D7E($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294947458), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334668) {
            ctx->pc = 0x3346C0u;
            goto label_3346c0;
        }
    }
    ctx->pc = 0x334670u;
label_334670:
    // 0x334670: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x334670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x334674: 0x8044b281  lb          $a0, -0x4D7F($v0)
    ctx->pc = 0x334674u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947457)));
    // 0x334678: 0xc0cd9f0  jal         func_3367C0
    ctx->pc = 0x334678u;
    SET_GPR_U32(ctx, 31, 0x334680u);
    ctx->pc = 0x33467Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334678u;
            // 0x33467c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3367C0u;
    if (runtime->hasFunction(0x3367C0u)) {
        auto targetFn = runtime->lookupFunction(0x3367C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334680u; }
        if (ctx->pc != 0x334680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003367C0_0x3367c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334680u; }
        if (ctx->pc != 0x334680u) { return; }
    }
    ctx->pc = 0x334680u;
label_334680:
    // 0x334680: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x334680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x334684: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x334684u;
    {
        const bool branch_taken_0x334684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334684u;
            // 0x334688: 0xa062b281  sb          $v0, -0x4D7F($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294947457), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334684) {
            ctx->pc = 0x3346C0u;
            goto label_3346c0;
        }
    }
    ctx->pc = 0x33468Cu;
label_33468c:
    // 0x33468c: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x33468cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x334690: 0x8044b285  lb          $a0, -0x4D7B($v0)
    ctx->pc = 0x334690u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947461)));
    // 0x334694: 0xc0cd9f0  jal         func_3367C0
    ctx->pc = 0x334694u;
    SET_GPR_U32(ctx, 31, 0x33469Cu);
    ctx->pc = 0x334698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334694u;
            // 0x334698: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3367C0u;
    if (runtime->hasFunction(0x3367C0u)) {
        auto targetFn = runtime->lookupFunction(0x3367C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33469Cu; }
        if (ctx->pc != 0x33469Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003367C0_0x3367c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33469Cu; }
        if (ctx->pc != 0x33469Cu) { return; }
    }
    ctx->pc = 0x33469Cu;
label_33469c:
    // 0x33469c: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x33469cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x3346a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3346A0u;
    {
        const bool branch_taken_0x3346a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3346A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3346A0u;
            // 0x3346a4: 0xa062b285  sb          $v0, -0x4D7B($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294947461), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3346a0) {
            ctx->pc = 0x3346C0u;
            goto label_3346c0;
        }
    }
    ctx->pc = 0x3346A8u;
label_3346a8:
    // 0x3346a8: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x3346a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x3346ac: 0x8044b286  lb          $a0, -0x4D7A($v0)
    ctx->pc = 0x3346acu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947462)));
    // 0x3346b0: 0xc0cd9f0  jal         func_3367C0
    ctx->pc = 0x3346B0u;
    SET_GPR_U32(ctx, 31, 0x3346B8u);
    ctx->pc = 0x3346B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3346B0u;
            // 0x3346b4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3367C0u;
    if (runtime->hasFunction(0x3367C0u)) {
        auto targetFn = runtime->lookupFunction(0x3367C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3346B8u; }
        if (ctx->pc != 0x3346B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003367C0_0x3367c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3346B8u; }
        if (ctx->pc != 0x3346B8u) { return; }
    }
    ctx->pc = 0x3346B8u;
label_3346b8:
    // 0x3346b8: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x3346b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x3346bc: 0xa062b286  sb          $v0, -0x4D7A($v1)
    ctx->pc = 0x3346bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294947462), (uint8_t)GPR_U32(ctx, 2));
label_3346c0:
    // 0x3346c0: 0x10843c  dsll32      $s0, $s0, 16
    ctx->pc = 0x3346c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 16));
    // 0x3346c4: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x3346c4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x3346c8: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x3346c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3346cc: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3346CCu;
    {
        const bool branch_taken_0x3346cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3346cc) {
            ctx->pc = 0x3346D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3346CCu;
            // 0x3346d0: 0x32052000  andi        $a1, $s0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3346ECu;
            goto label_3346ec;
        }
    }
    ctx->pc = 0x3346D4u;
    // 0x3346d4: 0xc0cdb28  jal         func_336CA0
    ctx->pc = 0x3346D4u;
    SET_GPR_U32(ctx, 31, 0x3346DCu);
    ctx->pc = 0x336CA0u;
    if (runtime->hasFunction(0x336CA0u)) {
        auto targetFn = runtime->lookupFunction(0x336CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3346DCu; }
        if (ctx->pc != 0x3346DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00336CA0_0x336ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3346DCu; }
        if (ctx->pc != 0x3346DCu) { return; }
    }
    ctx->pc = 0x3346DCu;
label_3346dc:
    // 0x3346dc: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x3346dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x3346e0: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x3346E0u;
    SET_GPR_U32(ctx, 31, 0x3346E8u);
    ctx->pc = 0x3346E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3346E0u;
            // 0x3346e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3346E8u; }
        if (ctx->pc != 0x3346E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3346E8u; }
        if (ctx->pc != 0x3346E8u) { return; }
    }
    ctx->pc = 0x3346E8u;
label_3346e8:
    // 0x3346e8: 0x32052000  andi        $a1, $s0, 0x2000
    ctx->pc = 0x3346e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
label_3346ec:
    // 0x3346ec: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3346ECu;
    {
        const bool branch_taken_0x3346ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3346ec) {
            ctx->pc = 0x3346F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3346ECu;
            // 0x3346f0: 0x32034000  andi        $v1, $s0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
            ctx->pc = 0x33470Cu;
            goto label_33470c;
        }
    }
    ctx->pc = 0x3346F4u;
    // 0x3346f4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3346f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3346f8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x3346f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3346fc: 0x8c63e808  lw          $v1, -0x17F8($v1)
    ctx->pc = 0x3346fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961160)));
    // 0x334700: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x334700u;
    {
        const bool branch_taken_0x334700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x334700) {
            ctx->pc = 0x334714u;
            goto label_334714;
        }
    }
    ctx->pc = 0x334708u;
    // 0x334708: 0x32034000  andi        $v1, $s0, 0x4000
    ctx->pc = 0x334708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16384);
label_33470c:
    // 0x33470c: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x33470Cu;
    {
        const bool branch_taken_0x33470c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33470c) {
            ctx->pc = 0x3347A4u;
            goto label_3347a4;
        }
    }
    ctx->pc = 0x334714u;
label_334714:
    // 0x334714: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x334714u;
    {
        const bool branch_taken_0x334714 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x334714) {
            ctx->pc = 0x334718u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x334714u;
            // 0x334718: 0x2404013e  addiu       $a0, $zero, 0x13E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
        ctx->in_delay_slot = false;
            ctx->pc = 0x334730u;
            goto label_334730;
        }
    }
    ctx->pc = 0x33471Cu;
    // 0x33471c: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x33471cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x334720: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x334720u;
    SET_GPR_U32(ctx, 31, 0x334728u);
    ctx->pc = 0x334724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334720u;
            // 0x334724: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334728u; }
        if (ctx->pc != 0x334728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334728u; }
        if (ctx->pc != 0x334728u) { return; }
    }
    ctx->pc = 0x334728u;
label_334728:
    // 0x334728: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x334728u;
    {
        const bool branch_taken_0x334728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x334728) {
            ctx->pc = 0x334738u;
            goto label_334738;
        }
    }
    ctx->pc = 0x334730u;
label_334730:
    // 0x334730: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x334730u;
    SET_GPR_U32(ctx, 31, 0x334738u);
    ctx->pc = 0x334734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334730u;
            // 0x334734: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334738u; }
        if (ctx->pc != 0x334738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334738u; }
        if (ctx->pc != 0x334738u) { return; }
    }
    ctx->pc = 0x334738u;
label_334738:
    // 0x334738: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x334738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33473c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33473cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x334740: 0x9084e818  lbu         $a0, -0x17E8($a0)
    ctx->pc = 0x334740u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294961176)));
    // 0x334744: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x334744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x334748: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x334748u;
    {
        const bool branch_taken_0x334748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33474Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334748u;
            // 0x33474c: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334748) {
            ctx->pc = 0x3347A4u;
            goto label_3347a4;
        }
    }
    ctx->pc = 0x334750u;
label_334750:
    // 0x334750: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x334750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x334754: 0x9064e810  lbu         $a0, -0x17F0($v1)
    ctx->pc = 0x334754u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
    // 0x334758: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x334758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x33475c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x33475Cu;
    {
        const bool branch_taken_0x33475c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33475c) {
            ctx->pc = 0x3347A4u;
            goto label_3347a4;
        }
    }
    ctx->pc = 0x334764u;
    // 0x334764: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x334764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x334768: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x334768u;
    {
        const bool branch_taken_0x334768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x334768) {
            ctx->pc = 0x3347A4u;
            goto label_3347a4;
        }
    }
    ctx->pc = 0x334770u;
    // 0x334770: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x334770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x334774: 0xc0558e0  jal         func_156380
    ctx->pc = 0x334774u;
    SET_GPR_U32(ctx, 31, 0x33477Cu);
    ctx->pc = 0x334778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334774u;
            // 0x334778: 0x24841760  addiu       $a0, $a0, 0x1760 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (runtime->hasFunction(0x156380u)) {
        auto targetFn = runtime->lookupFunction(0x156380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33477Cu; }
        if (ctx->pc != 0x33477Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156380_0x156380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33477Cu; }
        if (ctx->pc != 0x33477Cu) { return; }
    }
    ctx->pc = 0x33477Cu;
label_33477c:
    // 0x33477c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33477cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x334780: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x334780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x334784: 0xa064e820  sb          $a0, -0x17E0($v1)
    ctx->pc = 0x334784u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961184), (uint8_t)GPR_U32(ctx, 4));
    // 0x334788: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x334788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33478c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33478cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x334790: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x334790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x334794: 0xac65e800  sw          $a1, -0x1800($v1)
    ctx->pc = 0x334794u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961152), GPR_U32(ctx, 5));
    // 0x334798: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x334798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33479c: 0xac80e7f8  sw          $zero, -0x1808($a0)
    ctx->pc = 0x33479cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961144), GPR_U32(ctx, 0));
    // 0x3347a0: 0xa060e818  sb          $zero, -0x17E8($v1)
    ctx->pc = 0x3347a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 0));
label_3347a4:
    // 0x3347a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3347a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3347a8:
    // 0x3347a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3347a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3347ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3347ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3347B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3347ACu;
            // 0x3347b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3347B4u;
    // 0x3347b4: 0x0  nop
    ctx->pc = 0x3347b4u;
    // NOP
    // 0x3347b8: 0x0  nop
    ctx->pc = 0x3347b8u;
    // NOP
    // 0x3347bc: 0x0  nop
    ctx->pc = 0x3347bcu;
    // NOP
label_3347c0:
    // 0x3347c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3347c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3347c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3347c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3347c8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3347c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3347cc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3347ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3347d0: 0x3c12003d  lui         $s2, 0x3D
    ctx->pc = 0x3347d0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)61 << 16));
    // 0x3347d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3347d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3347d8: 0x265220d0  addiu       $s2, $s2, 0x20D0
    ctx->pc = 0x3347d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8400));
    // 0x3347dc: 0xc0cc088  jal         func_330220
    ctx->pc = 0x3347DCu;
    SET_GPR_U32(ctx, 31, 0x3347E4u);
    ctx->pc = 0x3347E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3347DCu;
            // 0x3347e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x330220u;
    if (runtime->hasFunction(0x330220u)) {
        auto targetFn = runtime->lookupFunction(0x330220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3347E4u; }
        if (ctx->pc != 0x3347E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00330220_0x330220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3347E4u; }
        if (ctx->pc != 0x3347E4u) { return; }
    }
    ctx->pc = 0x3347E4u;
label_3347e4:
    // 0x3347e4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3347e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3347e8: 0x84710002  lh          $s1, 0x2($v1)
    ctx->pc = 0x3347e8u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3347ec: 0x84700004  lh          $s0, 0x4($v1)
    ctx->pc = 0x3347ecu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3347f0: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x3347f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3347f4: 0x2c61000b  sltiu       $at, $v1, 0xB
    ctx->pc = 0x3347f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x3347f8: 0x50200100  beql        $at, $zero, . + 4 + (0x100 << 2)
    ctx->pc = 0x3347F8u;
    {
        const bool branch_taken_0x3347f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3347f8) {
            ctx->pc = 0x3347FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3347F8u;
            // 0x3347fc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x334BFCu;
            goto label_334bfc;
        }
    }
    ctx->pc = 0x334800u;
    // 0x334800: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x334800u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x334804: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x334804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x334808: 0x248448e0  addiu       $a0, $a0, 0x48E0
    ctx->pc = 0x334808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18656));
    // 0x33480c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33480cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x334810: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x334810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x334814: 0x600008  jr          $v1
    ctx->pc = 0x334814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x33481Cu: goto label_33481c;
            case 0x334834u: goto label_334834;
            case 0x3348B8u: goto label_3348b8;
            case 0x334924u: goto label_334924;
            case 0x334970u: goto label_334970;
            case 0x3349BCu: goto label_3349bc;
            case 0x334A18u: goto label_334a18;
            case 0x334A8Cu: goto label_334a8c;
            case 0x334AF0u: goto label_334af0;
            case 0x334B50u: goto label_334b50;
            case 0x334BE4u: goto label_334be4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x33481Cu;
label_33481c:
    // 0x33481c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33481cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334820: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x334820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334824: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x334824u;
    SET_GPR_U32(ctx, 31, 0x33482Cu);
    ctx->pc = 0x334828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334824u;
            // 0x334828: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33482Cu; }
        if (ctx->pc != 0x33482Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33482Cu; }
        if (ctx->pc != 0x33482Cu) { return; }
    }
    ctx->pc = 0x33482Cu;
label_33482c:
    // 0x33482c: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x33482Cu;
    {
        const bool branch_taken_0x33482c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33482c) {
            ctx->pc = 0x334BF8u;
            goto label_334bf8;
        }
    }
    ctx->pc = 0x334834u;
label_334834:
    // 0x334834: 0x3c0b003d  lui         $t3, 0x3D
    ctx->pc = 0x334834u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)61 << 16));
    // 0x334838: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x334838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33483c: 0x256b21d8  addiu       $t3, $t3, 0x21D8
    ctx->pc = 0x33483cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8664));
    // 0x334840: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x334840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x334844: 0x95690006  lhu         $t1, 0x6($t3)
    ctx->pc = 0x334844u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x334848: 0x2605fff0  addiu       $a1, $s0, -0x10
    ctx->pc = 0x334848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x33484c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33484cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334850: 0x2406a833  addiu       $a2, $zero, -0x57CD
    ctx->pc = 0x334850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x334854: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x334854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x334858: 0xffa90000  sd          $t1, 0x0($sp)
    ctx->pc = 0x334858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 9));
    // 0x33485c: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x33485cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x334860: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x334860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x334864: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x334864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x334868: 0x95690000  lhu         $t1, 0x0($t3)
    ctx->pc = 0x334868u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x33486c: 0x956a0002  lhu         $t2, 0x2($t3)
    ctx->pc = 0x33486cu;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x334870: 0x956b0004  lhu         $t3, 0x4($t3)
    ctx->pc = 0x334870u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x334874: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x334874u;
    SET_GPR_U32(ctx, 31, 0x33487Cu);
    ctx->pc = 0x334878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334874u;
            // 0x334878: 0x24080120  addiu       $t0, $zero, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (runtime->hasFunction(0x302EA0u)) {
        auto targetFn = runtime->lookupFunction(0x302EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33487Cu; }
        if (ctx->pc != 0x33487Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302EA0_0x302ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33487Cu; }
        if (ctx->pc != 0x33487Cu) { return; }
    }
    ctx->pc = 0x33487Cu;
label_33487c:
    // 0x33487c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33487cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x334880: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x334880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x334884: 0x9063e818  lbu         $v1, -0x17E8($v1)
    ctx->pc = 0x334884u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
    // 0x334888: 0x146400db  bne         $v1, $a0, . + 4 + (0xDB << 2)
    ctx->pc = 0x334888u;
    {
        const bool branch_taken_0x334888 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x334888) {
            ctx->pc = 0x334BF8u;
            goto label_334bf8;
        }
    }
    ctx->pc = 0x334890u;
    // 0x334890: 0x240401d0  addiu       $a0, $zero, 0x1D0
    ctx->pc = 0x334890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    // 0x334894: 0x2405017c  addiu       $a1, $zero, 0x17C
    ctx->pc = 0x334894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 380));
    // 0x334898: 0xc080e50  jal         func_203940
    ctx->pc = 0x334898u;
    SET_GPR_U32(ctx, 31, 0x3348A0u);
    ctx->pc = 0x33489Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334898u;
            // 0x33489c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x203940u;
    if (runtime->hasFunction(0x203940u)) {
        auto targetFn = runtime->lookupFunction(0x203940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3348A0u; }
        if (ctx->pc != 0x3348A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00203940_0x203940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3348A0u; }
        if (ctx->pc != 0x3348A0u) { return; }
    }
    ctx->pc = 0x3348A0u;
label_3348a0:
    // 0x3348a0: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x3348a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x3348a4: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x3348a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x3348a8: 0xc081db0  jal         func_2076C0
    ctx->pc = 0x3348A8u;
    SET_GPR_U32(ctx, 31, 0x3348B0u);
    ctx->pc = 0x3348ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3348A8u;
            // 0x3348ac: 0xa04008b0  sb          $zero, 0x8B0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2224), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2076C0u;
    if (runtime->hasFunction(0x2076C0u)) {
        auto targetFn = runtime->lookupFunction(0x2076C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3348B0u; }
        if (ctx->pc != 0x3348B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002076C0_0x2076c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3348B0u; }
        if (ctx->pc != 0x3348B0u) { return; }
    }
    ctx->pc = 0x3348B0u;
label_3348b0:
    // 0x3348b0: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x3348B0u;
    {
        const bool branch_taken_0x3348b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3348b0) {
            ctx->pc = 0x334BF8u;
            goto label_334bf8;
        }
    }
    ctx->pc = 0x3348B8u;
label_3348b8:
    // 0x3348b8: 0x2625ffa0  addiu       $a1, $s1, -0x60
    ctx->pc = 0x3348b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967200));
    // 0x3348bc: 0x2644000c  addiu       $a0, $s2, 0xC
    ctx->pc = 0x3348bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x3348c0: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x3348C0u;
    SET_GPR_U32(ctx, 31, 0x3348C8u);
    ctx->pc = 0x3348C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3348C0u;
            // 0x3348c4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3348C8u; }
        if (ctx->pc != 0x3348C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3348C8u; }
        if (ctx->pc != 0x3348C8u) { return; }
    }
    ctx->pc = 0x3348C8u;
label_3348c8:
    // 0x3348c8: 0x264400a8  addiu       $a0, $s2, 0xA8
    ctx->pc = 0x3348c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 168));
    // 0x3348cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3348ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3348d0: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x3348D0u;
    SET_GPR_U32(ctx, 31, 0x3348D8u);
    ctx->pc = 0x3348D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3348D0u;
            // 0x3348d4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3348D8u; }
        if (ctx->pc != 0x3348D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3348D8u; }
        if (ctx->pc != 0x3348D8u) { return; }
    }
    ctx->pc = 0x3348D8u;
label_3348d8:
    // 0x3348d8: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x3348d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3348dc: 0x26440054  addiu       $a0, $s2, 0x54
    ctx->pc = 0x3348dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 84));
    // 0x3348e0: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x3348E0u;
    SET_GPR_U32(ctx, 31, 0x3348E8u);
    ctx->pc = 0x3348E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3348E0u;
            // 0x3348e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3348E8u; }
        if (ctx->pc != 0x3348E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3348E8u; }
        if (ctx->pc != 0x3348E8u) { return; }
    }
    ctx->pc = 0x3348E8u;
label_3348e8:
    // 0x3348e8: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x3348e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x3348ec: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x3348ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x3348f0: 0x9042b280  lbu         $v0, -0x4D80($v0)
    ctx->pc = 0x3348f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947456)));
    // 0x3348f4: 0x24632218  addiu       $v1, $v1, 0x2218
    ctx->pc = 0x3348f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8728));
    // 0x3348f8: 0x26250060  addiu       $a1, $s1, 0x60
    ctx->pc = 0x3348f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x3348fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3348fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334900: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x334900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x334904: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x334904u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x334908: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x334908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33490c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33490cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x334910: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x334910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x334914: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x334914u;
    SET_GPR_U32(ctx, 31, 0x33491Cu);
    ctx->pc = 0x334918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334914u;
            // 0x334918: 0x2422021  addu        $a0, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33491Cu; }
        if (ctx->pc != 0x33491Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33491Cu; }
        if (ctx->pc != 0x33491Cu) { return; }
    }
    ctx->pc = 0x33491Cu;
label_33491c:
    // 0x33491c: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x33491Cu;
    {
        const bool branch_taken_0x33491c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33491c) {
            ctx->pc = 0x334BF8u;
            goto label_334bf8;
        }
    }
    ctx->pc = 0x334924u;
label_334924:
    // 0x334924: 0x2625ff60  addiu       $a1, $s1, -0xA0
    ctx->pc = 0x334924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967136));
    // 0x334928: 0x26440018  addiu       $a0, $s2, 0x18
    ctx->pc = 0x334928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x33492c: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33492Cu;
    SET_GPR_U32(ctx, 31, 0x334934u);
    ctx->pc = 0x334930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33492Cu;
            // 0x334930: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334934u; }
        if (ctx->pc != 0x334934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334934u; }
        if (ctx->pc != 0x334934u) { return; }
    }
    ctx->pc = 0x334934u;
label_334934:
    // 0x334934: 0x2625ffe0  addiu       $a1, $s1, -0x20
    ctx->pc = 0x334934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
    // 0x334938: 0x26440024  addiu       $a0, $s2, 0x24
    ctx->pc = 0x334938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x33493c: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33493Cu;
    SET_GPR_U32(ctx, 31, 0x334944u);
    ctx->pc = 0x334940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33493Cu;
            // 0x334940: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334944u; }
        if (ctx->pc != 0x334944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334944u; }
        if (ctx->pc != 0x334944u) { return; }
    }
    ctx->pc = 0x334944u;
label_334944:
    // 0x334944: 0x264400a8  addiu       $a0, $s2, 0xA8
    ctx->pc = 0x334944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 168));
    // 0x334948: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x334948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33494c: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x33494Cu;
    SET_GPR_U32(ctx, 31, 0x334954u);
    ctx->pc = 0x334950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33494Cu;
            // 0x334950: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334954u; }
        if (ctx->pc != 0x334954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334954u; }
        if (ctx->pc != 0x334954u) { return; }
    }
    ctx->pc = 0x334954u;
label_334954:
    // 0x334954: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x334954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x334958: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x334958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x33495c: 0x8044b283  lb          $a0, -0x4D7D($v0)
    ctx->pc = 0x33495cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947459)));
    // 0x334960: 0xc0cd304  jal         func_334C10
    ctx->pc = 0x334960u;
    SET_GPR_U32(ctx, 31, 0x334968u);
    ctx->pc = 0x334964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334960u;
            // 0x334964: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x334C10u;
    if (runtime->hasFunction(0x334C10u)) {
        auto targetFn = runtime->lookupFunction(0x334C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334968u; }
        if (ctx->pc != 0x334968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00334C10_0x334c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334968u; }
        if (ctx->pc != 0x334968u) { return; }
    }
    ctx->pc = 0x334968u;
label_334968:
    // 0x334968: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x334968u;
    {
        const bool branch_taken_0x334968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x334968) {
            ctx->pc = 0x334BF8u;
            goto label_334bf8;
        }
    }
    ctx->pc = 0x334970u;
label_334970:
    // 0x334970: 0x2625ff60  addiu       $a1, $s1, -0xA0
    ctx->pc = 0x334970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967136));
    // 0x334974: 0x26440018  addiu       $a0, $s2, 0x18
    ctx->pc = 0x334974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x334978: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x334978u;
    SET_GPR_U32(ctx, 31, 0x334980u);
    ctx->pc = 0x33497Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334978u;
            // 0x33497c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334980u; }
        if (ctx->pc != 0x334980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334980u; }
        if (ctx->pc != 0x334980u) { return; }
    }
    ctx->pc = 0x334980u;
label_334980:
    // 0x334980: 0x2625ffe0  addiu       $a1, $s1, -0x20
    ctx->pc = 0x334980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
    // 0x334984: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x334984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x334988: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x334988u;
    SET_GPR_U32(ctx, 31, 0x334990u);
    ctx->pc = 0x33498Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334988u;
            // 0x33498c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334990u; }
        if (ctx->pc != 0x334990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334990u; }
        if (ctx->pc != 0x334990u) { return; }
    }
    ctx->pc = 0x334990u;
label_334990:
    // 0x334990: 0x264400a8  addiu       $a0, $s2, 0xA8
    ctx->pc = 0x334990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 168));
    // 0x334994: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x334994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334998: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x334998u;
    SET_GPR_U32(ctx, 31, 0x3349A0u);
    ctx->pc = 0x33499Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334998u;
            // 0x33499c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3349A0u; }
        if (ctx->pc != 0x3349A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3349A0u; }
        if (ctx->pc != 0x3349A0u) { return; }
    }
    ctx->pc = 0x3349A0u;
label_3349a0:
    // 0x3349a0: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x3349a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x3349a4: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x3349a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3349a8: 0x8044b284  lb          $a0, -0x4D7C($v0)
    ctx->pc = 0x3349a8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947460)));
    // 0x3349ac: 0xc0cd304  jal         func_334C10
    ctx->pc = 0x3349ACu;
    SET_GPR_U32(ctx, 31, 0x3349B4u);
    ctx->pc = 0x3349B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3349ACu;
            // 0x3349b0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x334C10u;
    if (runtime->hasFunction(0x334C10u)) {
        auto targetFn = runtime->lookupFunction(0x334C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3349B4u; }
        if (ctx->pc != 0x3349B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00334C10_0x334c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3349B4u; }
        if (ctx->pc != 0x3349B4u) { return; }
    }
    ctx->pc = 0x3349B4u;
label_3349b4:
    // 0x3349b4: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x3349B4u;
    {
        const bool branch_taken_0x3349b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3349b4) {
            ctx->pc = 0x334BF8u;
            goto label_334bf8;
        }
    }
    ctx->pc = 0x3349BCu;
label_3349bc:
    // 0x3349bc: 0x2625ffa0  addiu       $a1, $s1, -0x60
    ctx->pc = 0x3349bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967200));
    // 0x3349c0: 0x2644003c  addiu       $a0, $s2, 0x3C
    ctx->pc = 0x3349c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
    // 0x3349c4: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x3349C4u;
    SET_GPR_U32(ctx, 31, 0x3349CCu);
    ctx->pc = 0x3349C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3349C4u;
            // 0x3349c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3349CCu; }
        if (ctx->pc != 0x3349CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3349CCu; }
        if (ctx->pc != 0x3349CCu) { return; }
    }
    ctx->pc = 0x3349CCu;
label_3349cc:
    // 0x3349cc: 0x264400a8  addiu       $a0, $s2, 0xA8
    ctx->pc = 0x3349ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 168));
    // 0x3349d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3349d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3349d4: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x3349D4u;
    SET_GPR_U32(ctx, 31, 0x3349DCu);
    ctx->pc = 0x3349D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3349D4u;
            // 0x3349d8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3349DCu; }
        if (ctx->pc != 0x3349DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3349DCu; }
        if (ctx->pc != 0x3349DCu) { return; }
    }
    ctx->pc = 0x3349DCu;
label_3349dc:
    // 0x3349dc: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x3349dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x3349e0: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x3349e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x3349e4: 0x9042b282  lbu         $v0, -0x4D7E($v0)
    ctx->pc = 0x3349e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947458)));
    // 0x3349e8: 0x24632220  addiu       $v1, $v1, 0x2220
    ctx->pc = 0x3349e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8736));
    // 0x3349ec: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x3349ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3349f0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3349f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3349f4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3349f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3349f8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3349f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3349fc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3349fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x334a00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x334a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x334a04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x334a04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x334a08: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x334A08u;
    SET_GPR_U32(ctx, 31, 0x334A10u);
    ctx->pc = 0x334A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334A08u;
            // 0x334a0c: 0x2422021  addu        $a0, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334A10u; }
        if (ctx->pc != 0x334A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334A10u; }
        if (ctx->pc != 0x334A10u) { return; }
    }
    ctx->pc = 0x334A10u;
label_334a10:
    // 0x334a10: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x334A10u;
    {
        const bool branch_taken_0x334a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x334a10) {
            ctx->pc = 0x334BF8u;
            goto label_334bf8;
        }
    }
    ctx->pc = 0x334A18u;
label_334a18:
    // 0x334a18: 0x2625ff60  addiu       $a1, $s1, -0xA0
    ctx->pc = 0x334a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967136));
    // 0x334a1c: 0x26440048  addiu       $a0, $s2, 0x48
    ctx->pc = 0x334a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
    // 0x334a20: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x334A20u;
    SET_GPR_U32(ctx, 31, 0x334A28u);
    ctx->pc = 0x334A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334A20u;
            // 0x334a24: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334A28u; }
        if (ctx->pc != 0x334A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334A28u; }
        if (ctx->pc != 0x334A28u) { return; }
    }
    ctx->pc = 0x334A28u;
label_334a28:
    // 0x334a28: 0x264400a8  addiu       $a0, $s2, 0xA8
    ctx->pc = 0x334a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 168));
    // 0x334a2c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x334a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334a30: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x334A30u;
    SET_GPR_U32(ctx, 31, 0x334A38u);
    ctx->pc = 0x334A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334A30u;
            // 0x334a34: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334A38u; }
        if (ctx->pc != 0x334A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334A38u; }
        if (ctx->pc != 0x334A38u) { return; }
    }
    ctx->pc = 0x334A38u;
label_334a38:
    // 0x334a38: 0x26440054  addiu       $a0, $s2, 0x54
    ctx->pc = 0x334a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 84));
    // 0x334a3c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x334a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x334a40: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x334A40u;
    SET_GPR_U32(ctx, 31, 0x334A48u);
    ctx->pc = 0x334A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334A40u;
            // 0x334a44: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334A48u; }
        if (ctx->pc != 0x334A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334A48u; }
        if (ctx->pc != 0x334A48u) { return; }
    }
    ctx->pc = 0x334A48u;
label_334a48:
    // 0x334a48: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x334a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x334a4c: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x334a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x334a50: 0x9044b281  lbu         $a0, -0x4D7F($v0)
    ctx->pc = 0x334a50u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947457)));
    // 0x334a54: 0x24631e48  addiu       $v1, $v1, 0x1E48
    ctx->pc = 0x334a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7752));
    // 0x334a58: 0x26250060  addiu       $a1, $s1, 0x60
    ctx->pc = 0x334a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x334a5c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x334a5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334a60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x334a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x334a64: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x334a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x334a68: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x334a68u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x334a6c: 0x24421b10  addiu       $v0, $v0, 0x1B10
    ctx->pc = 0x334a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6928));
    // 0x334a70: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x334a70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x334a74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x334a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x334a78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x334a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x334a7c: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x334A7Cu;
    SET_GPR_U32(ctx, 31, 0x334A84u);
    ctx->pc = 0x334A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334A7Cu;
            // 0x334a80: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334A84u; }
        if (ctx->pc != 0x334A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334A84u; }
        if (ctx->pc != 0x334A84u) { return; }
    }
    ctx->pc = 0x334A84u;
label_334a84:
    // 0x334a84: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x334A84u;
    {
        const bool branch_taken_0x334a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x334a84) {
            ctx->pc = 0x334BF8u;
            goto label_334bf8;
        }
    }
    ctx->pc = 0x334A8Cu;
label_334a8c:
    // 0x334a8c: 0x2625ff60  addiu       $a1, $s1, -0xA0
    ctx->pc = 0x334a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967136));
    // 0x334a90: 0x26440114  addiu       $a0, $s2, 0x114
    ctx->pc = 0x334a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 276));
    // 0x334a94: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x334A94u;
    SET_GPR_U32(ctx, 31, 0x334A9Cu);
    ctx->pc = 0x334A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334A94u;
            // 0x334a98: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334A9Cu; }
        if (ctx->pc != 0x334A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334A9Cu; }
        if (ctx->pc != 0x334A9Cu) { return; }
    }
    ctx->pc = 0x334A9Cu;
label_334a9c:
    // 0x334a9c: 0x264400a8  addiu       $a0, $s2, 0xA8
    ctx->pc = 0x334a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 168));
    // 0x334aa0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x334aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334aa4: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x334AA4u;
    SET_GPR_U32(ctx, 31, 0x334AACu);
    ctx->pc = 0x334AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334AA4u;
            // 0x334aa8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334AACu; }
        if (ctx->pc != 0x334AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334AACu; }
        if (ctx->pc != 0x334AACu) { return; }
    }
    ctx->pc = 0x334AACu;
label_334aac:
    // 0x334aac: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x334aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x334ab0: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x334ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x334ab4: 0x9044b285  lbu         $a0, -0x4D7B($v0)
    ctx->pc = 0x334ab4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947461)));
    // 0x334ab8: 0x24631e80  addiu       $v1, $v1, 0x1E80
    ctx->pc = 0x334ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7808));
    // 0x334abc: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x334abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x334ac0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x334ac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334ac4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x334ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x334ac8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x334ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x334acc: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x334accu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x334ad0: 0x24421b10  addiu       $v0, $v0, 0x1B10
    ctx->pc = 0x334ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6928));
    // 0x334ad4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x334ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x334ad8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x334ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x334adc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x334adcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x334ae0: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x334AE0u;
    SET_GPR_U32(ctx, 31, 0x334AE8u);
    ctx->pc = 0x334AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334AE0u;
            // 0x334ae4: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334AE8u; }
        if (ctx->pc != 0x334AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334AE8u; }
        if (ctx->pc != 0x334AE8u) { return; }
    }
    ctx->pc = 0x334AE8u;
label_334ae8:
    // 0x334ae8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x334AE8u;
    {
        const bool branch_taken_0x334ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x334ae8) {
            ctx->pc = 0x334BF8u;
            goto label_334bf8;
        }
    }
    ctx->pc = 0x334AF0u;
label_334af0:
    // 0x334af0: 0x2625ff60  addiu       $a1, $s1, -0xA0
    ctx->pc = 0x334af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967136));
    // 0x334af4: 0x26440120  addiu       $a0, $s2, 0x120
    ctx->pc = 0x334af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
    // 0x334af8: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x334AF8u;
    SET_GPR_U32(ctx, 31, 0x334B00u);
    ctx->pc = 0x334AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334AF8u;
            // 0x334afc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334B00u; }
        if (ctx->pc != 0x334B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334B00u; }
        if (ctx->pc != 0x334B00u) { return; }
    }
    ctx->pc = 0x334B00u;
label_334b00:
    // 0x334b00: 0x264400a8  addiu       $a0, $s2, 0xA8
    ctx->pc = 0x334b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 168));
    // 0x334b04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x334b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334b08: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x334B08u;
    SET_GPR_U32(ctx, 31, 0x334B10u);
    ctx->pc = 0x334B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334B08u;
            // 0x334b0c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334B10u; }
        if (ctx->pc != 0x334B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334B10u; }
        if (ctx->pc != 0x334B10u) { return; }
    }
    ctx->pc = 0x334B10u;
label_334b10:
    // 0x334b10: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x334b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x334b14: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x334b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x334b18: 0x9044b286  lbu         $a0, -0x4D7A($v0)
    ctx->pc = 0x334b18u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947462)));
    // 0x334b1c: 0x24632228  addiu       $v1, $v1, 0x2228
    ctx->pc = 0x334b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8744));
    // 0x334b20: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x334b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x334b24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x334b24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334b28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x334b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x334b2c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x334b2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334b30: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x334b30u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x334b34: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x334b34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x334b38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x334b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x334b3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x334b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x334b40: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x334B40u;
    SET_GPR_U32(ctx, 31, 0x334B48u);
    ctx->pc = 0x334B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334B40u;
            // 0x334b44: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334B48u; }
        if (ctx->pc != 0x334B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334B48u; }
        if (ctx->pc != 0x334B48u) { return; }
    }
    ctx->pc = 0x334B48u;
label_334b48:
    // 0x334b48: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x334B48u;
    {
        const bool branch_taken_0x334b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x334b48) {
            ctx->pc = 0x334BF8u;
            goto label_334bf8;
        }
    }
    ctx->pc = 0x334B50u;
label_334b50:
    // 0x334b50: 0x264400b4  addiu       $a0, $s2, 0xB4
    ctx->pc = 0x334b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 180));
    // 0x334b54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x334b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334b58: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x334B58u;
    SET_GPR_U32(ctx, 31, 0x334B60u);
    ctx->pc = 0x334B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334B58u;
            // 0x334b5c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334B60u; }
        if (ctx->pc != 0x334B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334B60u; }
        if (ctx->pc != 0x334B60u) { return; }
    }
    ctx->pc = 0x334B60u;
label_334b60:
    // 0x334b60: 0x264400e4  addiu       $a0, $s2, 0xE4
    ctx->pc = 0x334b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 228));
    // 0x334b64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x334b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334b68: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x334b68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334b6c: 0x2407a828  addiu       $a3, $zero, -0x57D8
    ctx->pc = 0x334b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944808));
    // 0x334b70: 0xc0c0b2c  jal         func_302CB0
    ctx->pc = 0x334B70u;
    SET_GPR_U32(ctx, 31, 0x334B78u);
    ctx->pc = 0x334B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334B70u;
            // 0x334b74: 0x240800a0  addiu       $t0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302CB0u;
    if (runtime->hasFunction(0x302CB0u)) {
        auto targetFn = runtime->lookupFunction(0x302CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334B78u; }
        if (ctx->pc != 0x334B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302CB0_0x302cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334B78u; }
        if (ctx->pc != 0x334B78u) { return; }
    }
    ctx->pc = 0x334B78u;
label_334b78:
    // 0x334b78: 0x3c0b003d  lui         $t3, 0x3D
    ctx->pc = 0x334b78u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)61 << 16));
    // 0x334b7c: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x334b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x334b80: 0x256b21c0  addiu       $t3, $t3, 0x21C0
    ctx->pc = 0x334b80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8640));
    // 0x334b84: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x334b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x334b88: 0x95680006  lhu         $t0, 0x6($t3)
    ctx->pc = 0x334b88u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x334b8c: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x334b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x334b90: 0x2605fff0  addiu       $a1, $s0, -0x10
    ctx->pc = 0x334b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x334b94: 0x2406a828  addiu       $a2, $zero, -0x57D8
    ctx->pc = 0x334b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944808));
    // 0x334b98: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x334b98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x334b9c: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x334b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x334ba0: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x334ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x334ba4: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x334ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x334ba8: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x334ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x334bac: 0x95690000  lhu         $t1, 0x0($t3)
    ctx->pc = 0x334bacu;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x334bb0: 0x956a0002  lhu         $t2, 0x2($t3)
    ctx->pc = 0x334bb0u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x334bb4: 0x956b0004  lhu         $t3, 0x4($t3)
    ctx->pc = 0x334bb4u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x334bb8: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x334BB8u;
    SET_GPR_U32(ctx, 31, 0x334BC0u);
    ctx->pc = 0x334BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334BB8u;
            // 0x334bbc: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (runtime->hasFunction(0x302EA0u)) {
        auto targetFn = runtime->lookupFunction(0x302EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334BC0u; }
        if (ctx->pc != 0x334BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302EA0_0x302ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334BC0u; }
        if (ctx->pc != 0x334BC0u) { return; }
    }
    ctx->pc = 0x334BC0u;
label_334bc0:
    // 0x334bc0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x334bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x334bc4: 0x26250060  addiu       $a1, $s1, 0x60
    ctx->pc = 0x334bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x334bc8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x334bc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334bcc: 0x248421cc  addiu       $a0, $a0, 0x21CC
    ctx->pc = 0x334bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8652));
    // 0x334bd0: 0x2407a828  addiu       $a3, $zero, -0x57D8
    ctx->pc = 0x334bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944808));
    // 0x334bd4: 0xc0c0b2c  jal         func_302CB0
    ctx->pc = 0x334BD4u;
    SET_GPR_U32(ctx, 31, 0x334BDCu);
    ctx->pc = 0x334BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334BD4u;
            // 0x334bd8: 0x240800a0  addiu       $t0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302CB0u;
    if (runtime->hasFunction(0x302CB0u)) {
        auto targetFn = runtime->lookupFunction(0x302CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334BDCu; }
        if (ctx->pc != 0x334BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302CB0_0x302cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334BDCu; }
        if (ctx->pc != 0x334BDCu) { return; }
    }
    ctx->pc = 0x334BDCu;
label_334bdc:
    // 0x334bdc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x334BDCu;
    {
        const bool branch_taken_0x334bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x334bdc) {
            ctx->pc = 0x334BF8u;
            goto label_334bf8;
        }
    }
    ctx->pc = 0x334BE4u;
label_334be4:
    // 0x334be4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x334be4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x334be8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x334be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334bec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x334becu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334bf0: 0xc0c0ab8  jal         func_302AE0
    ctx->pc = 0x334BF0u;
    SET_GPR_U32(ctx, 31, 0x334BF8u);
    ctx->pc = 0x334BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x334BF0u;
            // 0x334bf4: 0x24841b88  addiu       $a0, $a0, 0x1B88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302AE0u;
    if (runtime->hasFunction(0x302AE0u)) {
        auto targetFn = runtime->lookupFunction(0x302AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334BF8u; }
        if (ctx->pc != 0x334BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302AE0_0x302ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x334BF8u; }
        if (ctx->pc != 0x334BF8u) { return; }
    }
    ctx->pc = 0x334BF8u;
label_334bf8:
    // 0x334bf8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x334bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_334bfc:
    // 0x334bfc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x334bfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x334c00: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x334c00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x334c04: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x334c04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x334c08: 0x3e00008  jr          $ra
    ctx->pc = 0x334C08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334C08u;
            // 0x334c0c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x334C10u;
    ctx->pc = 0x334c10u;
}
