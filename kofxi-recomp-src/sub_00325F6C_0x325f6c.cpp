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

// Function: sub_00325F6C
// Address: 0x325f6c - 0x327240
void sub_00325F6C_0x325f6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325F6C_0x325f6c");
#endif

    switch (ctx->pc) {
        case 0x325f78u: goto label_325f78;
        case 0x325f84u: goto label_325f84;
        case 0x325f94u: goto label_325f94;
        case 0x325fa0u: goto label_325fa0;
        case 0x325fb0u: goto label_325fb0;
        case 0x325fbcu: goto label_325fbc;
        case 0x325fccu: goto label_325fcc;
        case 0x325fd8u: goto label_325fd8;
        case 0x325fe8u: goto label_325fe8;
        case 0x325ff4u: goto label_325ff4;
        case 0x326004u: goto label_326004;
        case 0x326010u: goto label_326010;
        case 0x326020u: goto label_326020;
        case 0x32602cu: goto label_32602c;
        case 0x32603cu: goto label_32603c;
        case 0x326048u: goto label_326048;
        case 0x326058u: goto label_326058;
        case 0x326064u: goto label_326064;
        case 0x326074u: goto label_326074;
        case 0x326080u: goto label_326080;
        case 0x326090u: goto label_326090;
        case 0x32609cu: goto label_32609c;
        case 0x3260acu: goto label_3260ac;
        case 0x3260b8u: goto label_3260b8;
        case 0x3260c8u: goto label_3260c8;
        case 0x3260d4u: goto label_3260d4;
        case 0x3260e4u: goto label_3260e4;
        case 0x3260f0u: goto label_3260f0;
        case 0x326100u: goto label_326100;
        case 0x32610cu: goto label_32610c;
        case 0x32611cu: goto label_32611c;
        case 0x326128u: goto label_326128;
        case 0x326138u: goto label_326138;
        case 0x326144u: goto label_326144;
        case 0x326154u: goto label_326154;
        case 0x326160u: goto label_326160;
        case 0x326170u: goto label_326170;
        case 0x32617cu: goto label_32617c;
        case 0x32618cu: goto label_32618c;
        case 0x326198u: goto label_326198;
        case 0x3261a8u: goto label_3261a8;
        case 0x3261b4u: goto label_3261b4;
        case 0x3261c4u: goto label_3261c4;
        case 0x3261d0u: goto label_3261d0;
        case 0x3261e0u: goto label_3261e0;
        case 0x3261ecu: goto label_3261ec;
        case 0x3261fcu: goto label_3261fc;
        case 0x326208u: goto label_326208;
        case 0x326218u: goto label_326218;
        case 0x326224u: goto label_326224;
        case 0x326234u: goto label_326234;
        case 0x326240u: goto label_326240;
        case 0x326250u: goto label_326250;
        case 0x32625cu: goto label_32625c;
        case 0x32626cu: goto label_32626c;
        case 0x326278u: goto label_326278;
        case 0x326288u: goto label_326288;
        case 0x326294u: goto label_326294;
        case 0x3262a4u: goto label_3262a4;
        case 0x3262b0u: goto label_3262b0;
        case 0x3262c0u: goto label_3262c0;
        case 0x3262ccu: goto label_3262cc;
        case 0x3262dcu: goto label_3262dc;
        case 0x3262e8u: goto label_3262e8;
        case 0x3262f8u: goto label_3262f8;
        case 0x326304u: goto label_326304;
        case 0x326314u: goto label_326314;
        case 0x326320u: goto label_326320;
        case 0x326330u: goto label_326330;
        case 0x32633cu: goto label_32633c;
        case 0x32634cu: goto label_32634c;
        case 0x326358u: goto label_326358;
        case 0x326368u: goto label_326368;
        case 0x326374u: goto label_326374;
        case 0x326384u: goto label_326384;
        case 0x326390u: goto label_326390;
        case 0x3263a0u: goto label_3263a0;
        case 0x3263acu: goto label_3263ac;
        case 0x3263bcu: goto label_3263bc;
        case 0x3263c8u: goto label_3263c8;
        case 0x3263d8u: goto label_3263d8;
        case 0x3263e4u: goto label_3263e4;
        case 0x3263f4u: goto label_3263f4;
        case 0x326400u: goto label_326400;
        case 0x326410u: goto label_326410;
        case 0x32641cu: goto label_32641c;
        case 0x32642cu: goto label_32642c;
        case 0x326438u: goto label_326438;
        case 0x326448u: goto label_326448;
        case 0x326454u: goto label_326454;
        case 0x326464u: goto label_326464;
        case 0x326470u: goto label_326470;
        case 0x326480u: goto label_326480;
        case 0x32648cu: goto label_32648c;
        case 0x32649cu: goto label_32649c;
        case 0x3264a8u: goto label_3264a8;
        case 0x3264b8u: goto label_3264b8;
        case 0x3264c4u: goto label_3264c4;
        case 0x3264d4u: goto label_3264d4;
        case 0x3264e0u: goto label_3264e0;
        case 0x3264f0u: goto label_3264f0;
        case 0x3264fcu: goto label_3264fc;
        case 0x32650cu: goto label_32650c;
        case 0x326518u: goto label_326518;
        case 0x326528u: goto label_326528;
        case 0x326534u: goto label_326534;
        case 0x326544u: goto label_326544;
        case 0x326550u: goto label_326550;
        case 0x326560u: goto label_326560;
        case 0x32656cu: goto label_32656c;
        case 0x32657cu: goto label_32657c;
        case 0x326588u: goto label_326588;
        case 0x326598u: goto label_326598;
        case 0x3265a4u: goto label_3265a4;
        case 0x3265b4u: goto label_3265b4;
        case 0x3265c0u: goto label_3265c0;
        case 0x3265d0u: goto label_3265d0;
        case 0x3265dcu: goto label_3265dc;
        case 0x3265ecu: goto label_3265ec;
        case 0x3265f8u: goto label_3265f8;
        case 0x326608u: goto label_326608;
        case 0x326614u: goto label_326614;
        case 0x326624u: goto label_326624;
        case 0x326630u: goto label_326630;
        case 0x326640u: goto label_326640;
        case 0x32664cu: goto label_32664c;
        case 0x32665cu: goto label_32665c;
        case 0x326668u: goto label_326668;
        case 0x326678u: goto label_326678;
        case 0x326684u: goto label_326684;
        case 0x326694u: goto label_326694;
        case 0x3266a0u: goto label_3266a0;
        case 0x3266b0u: goto label_3266b0;
        case 0x3266bcu: goto label_3266bc;
        case 0x3266ccu: goto label_3266cc;
        case 0x3266d8u: goto label_3266d8;
        case 0x3266e8u: goto label_3266e8;
        case 0x3266f4u: goto label_3266f4;
        case 0x326704u: goto label_326704;
        case 0x326710u: goto label_326710;
        case 0x326720u: goto label_326720;
        case 0x32672cu: goto label_32672c;
        case 0x32673cu: goto label_32673c;
        case 0x326748u: goto label_326748;
        case 0x326758u: goto label_326758;
        case 0x326764u: goto label_326764;
        case 0x326774u: goto label_326774;
        case 0x326780u: goto label_326780;
        case 0x3267a0u: goto label_3267a0;
        case 0x3267c0u: goto label_3267c0;
        case 0x3267e0u: goto label_3267e0;
        case 0x326800u: goto label_326800;
        case 0x326820u: goto label_326820;
        case 0x326840u: goto label_326840;
        case 0x326860u: goto label_326860;
        case 0x326880u: goto label_326880;
        case 0x3268a0u: goto label_3268a0;
        case 0x3268c0u: goto label_3268c0;
        case 0x3268e0u: goto label_3268e0;
        case 0x326900u: goto label_326900;
        case 0x326920u: goto label_326920;
        case 0x326940u: goto label_326940;
        case 0x326960u: goto label_326960;
        case 0x326980u: goto label_326980;
        case 0x3269a0u: goto label_3269a0;
        case 0x3269c0u: goto label_3269c0;
        case 0x3269e0u: goto label_3269e0;
        case 0x326a00u: goto label_326a00;
        case 0x326a20u: goto label_326a20;
        case 0x326a40u: goto label_326a40;
        case 0x326a60u: goto label_326a60;
        case 0x326a80u: goto label_326a80;
        case 0x326aa0u: goto label_326aa0;
        case 0x326ac0u: goto label_326ac0;
        case 0x326ae0u: goto label_326ae0;
        case 0x326b00u: goto label_326b00;
        case 0x326b20u: goto label_326b20;
        case 0x326b40u: goto label_326b40;
        case 0x326b54u: goto label_326b54;
        case 0x326b68u: goto label_326b68;
        case 0x326b7cu: goto label_326b7c;
        case 0x326b90u: goto label_326b90;
        case 0x326ba4u: goto label_326ba4;
        case 0x326bb8u: goto label_326bb8;
        case 0x326bccu: goto label_326bcc;
        case 0x326be0u: goto label_326be0;
        case 0x326bf4u: goto label_326bf4;
        case 0x326c08u: goto label_326c08;
        case 0x326c1cu: goto label_326c1c;
        case 0x326c30u: goto label_326c30;
        case 0x326c44u: goto label_326c44;
        case 0x326c58u: goto label_326c58;
        case 0x326c6cu: goto label_326c6c;
        case 0x326c80u: goto label_326c80;
        case 0x326c94u: goto label_326c94;
        case 0x326ca8u: goto label_326ca8;
        case 0x326cbcu: goto label_326cbc;
        case 0x326cd0u: goto label_326cd0;
        case 0x326ce4u: goto label_326ce4;
        case 0x326cf8u: goto label_326cf8;
        case 0x326d0cu: goto label_326d0c;
        case 0x326d20u: goto label_326d20;
        case 0x326d34u: goto label_326d34;
        case 0x326d48u: goto label_326d48;
        case 0x326d5cu: goto label_326d5c;
        case 0x326d70u: goto label_326d70;
        case 0x326d84u: goto label_326d84;
        case 0x326d98u: goto label_326d98;
        case 0x326da8u: goto label_326da8;
        case 0x326db4u: goto label_326db4;
        case 0x326dc4u: goto label_326dc4;
        case 0x326dd0u: goto label_326dd0;
        case 0x326de0u: goto label_326de0;
        case 0x326decu: goto label_326dec;
        case 0x326dfcu: goto label_326dfc;
        case 0x326e08u: goto label_326e08;
        case 0x326e18u: goto label_326e18;
        case 0x326e24u: goto label_326e24;
        case 0x326e34u: goto label_326e34;
        case 0x326e40u: goto label_326e40;
        case 0x326e50u: goto label_326e50;
        case 0x326e5cu: goto label_326e5c;
        case 0x326e6cu: goto label_326e6c;
        case 0x326e78u: goto label_326e78;
        case 0x326e88u: goto label_326e88;
        case 0x326e94u: goto label_326e94;
        case 0x326ea4u: goto label_326ea4;
        case 0x326eb0u: goto label_326eb0;
        case 0x326ec0u: goto label_326ec0;
        case 0x326eccu: goto label_326ecc;
        case 0x326edcu: goto label_326edc;
        case 0x326ee8u: goto label_326ee8;
        case 0x326ef8u: goto label_326ef8;
        case 0x326f04u: goto label_326f04;
        case 0x326f14u: goto label_326f14;
        case 0x326f20u: goto label_326f20;
        case 0x326f30u: goto label_326f30;
        case 0x326f3cu: goto label_326f3c;
        case 0x326f4cu: goto label_326f4c;
        case 0x326f58u: goto label_326f58;
        case 0x326f68u: goto label_326f68;
        case 0x326f74u: goto label_326f74;
        case 0x326f84u: goto label_326f84;
        case 0x326f90u: goto label_326f90;
        case 0x326fa0u: goto label_326fa0;
        case 0x326facu: goto label_326fac;
        case 0x326fbcu: goto label_326fbc;
        case 0x326fc8u: goto label_326fc8;
        case 0x326fd8u: goto label_326fd8;
        case 0x326fe4u: goto label_326fe4;
        case 0x326ff4u: goto label_326ff4;
        case 0x327000u: goto label_327000;
        case 0x327038u: goto label_327038;
        case 0x327070u: goto label_327070;
        case 0x3270ccu: goto label_3270cc;
        case 0x327128u: goto label_327128;
        case 0x327134u: goto label_327134;
        case 0x327174u: goto label_327174;
        case 0x3271b4u: goto label_3271b4;
        case 0x3271c8u: goto label_3271c8;
        case 0x3271d8u: goto label_3271d8;
        case 0x3271e4u: goto label_3271e4;
        case 0x3271f4u: goto label_3271f4;
        case 0x327210u: goto label_327210;
        case 0x327220u: goto label_327220;
        case 0x327228u: goto label_327228;
        default: break;
    }

    ctx->pc = 0x325f6cu;

    // 0x325f6c: 0x8c44ee9c  lw          $a0, -0x1164($v0)
    ctx->pc = 0x325f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962844)));
    // 0x325f70: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x325F70u;
    SET_GPR_U32(ctx, 31, 0x325F78u);
    ctx->pc = 0x325F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325F70u;
    // 0x325f74: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x325F70u, 0x325F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325F78u;
label_325f78:
    // 0x325f78: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x325f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x325f7c: 0x100004aa  b           . + 4 + (0x4AA << 2)
    ctx->pc = 0x325F7Cu;
    {
        const bool branch_taken_0x325f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325F7Cu;
        // 0x325f80: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325f7c) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x325F84u;
label_325f84:
    // 0x325f84: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325f88: 0x8c44ee9c  lw          $a0, -0x1164($v0)
    ctx->pc = 0x325f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962844)));
    // 0x325f8c: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x325F8Cu;
    SET_GPR_U32(ctx, 31, 0x325F94u);
    ctx->pc = 0x325F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325F8Cu;
    // 0x325f90: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x325F8Cu, 0x325F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325F94u;
label_325f94:
    // 0x325f94: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x325f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x325f98: 0x100004a3  b           . + 4 + (0x4A3 << 2)
    ctx->pc = 0x325F98u;
    {
        const bool branch_taken_0x325f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325F98u;
        // 0x325f9c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325f98) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x325FA0u;
label_325fa0:
    // 0x325fa0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325fa4: 0x8c44eeac  lw          $a0, -0x1154($v0)
    ctx->pc = 0x325fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962860)));
    // 0x325fa8: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x325FA8u;
    SET_GPR_U32(ctx, 31, 0x325FB0u);
    ctx->pc = 0x325FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325FA8u;
    // 0x325fac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x325FA8u, 0x325FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325FB0u;
label_325fb0:
    // 0x325fb0: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x325fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x325fb4: 0x1000049c  b           . + 4 + (0x49C << 2)
    ctx->pc = 0x325FB4u;
    {
        const bool branch_taken_0x325fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325FB4u;
        // 0x325fb8: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325fb4) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x325FBCu;
label_325fbc:
    // 0x325fbc: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325fc0: 0x8c44eeac  lw          $a0, -0x1154($v0)
    ctx->pc = 0x325fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962860)));
    // 0x325fc4: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x325FC4u;
    SET_GPR_U32(ctx, 31, 0x325FCCu);
    ctx->pc = 0x325FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325FC4u;
    // 0x325fc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x325FC4u, 0x325FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325FCCu;
label_325fcc:
    // 0x325fcc: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x325fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x325fd0: 0x10000495  b           . + 4 + (0x495 << 2)
    ctx->pc = 0x325FD0u;
    {
        const bool branch_taken_0x325fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325FD0u;
        // 0x325fd4: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325fd0) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x325FD8u;
label_325fd8:
    // 0x325fd8: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325fdc: 0x8c44eeac  lw          $a0, -0x1154($v0)
    ctx->pc = 0x325fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962860)));
    // 0x325fe0: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x325FE0u;
    SET_GPR_U32(ctx, 31, 0x325FE8u);
    ctx->pc = 0x325FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325FE0u;
    // 0x325fe4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x325FE0u, 0x325FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325FE8u;
label_325fe8:
    // 0x325fe8: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x325fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x325fec: 0x1000048e  b           . + 4 + (0x48E << 2)
    ctx->pc = 0x325FECu;
    {
        const bool branch_taken_0x325fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325FECu;
        // 0x325ff0: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x325fec) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x325FF4u;
label_325ff4:
    // 0x325ff4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x325ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x325ff8: 0x8c44eeac  lw          $a0, -0x1154($v0)
    ctx->pc = 0x325ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962860)));
    // 0x325ffc: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x325FFCu;
    SET_GPR_U32(ctx, 31, 0x326004u);
    ctx->pc = 0x326000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325FFCu;
    // 0x326000: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x325FFCu, 0x326004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326004u;
label_326004:
    // 0x326004: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326008: 0x10000487  b           . + 4 + (0x487 << 2)
    ctx->pc = 0x326008u;
    {
        const bool branch_taken_0x326008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326008u;
        // 0x32600c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326008) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326010u;
label_326010:
    // 0x326010: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326014: 0x8c44eeac  lw          $a0, -0x1154($v0)
    ctx->pc = 0x326014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962860)));
    // 0x326018: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326018u;
    SET_GPR_U32(ctx, 31, 0x326020u);
    ctx->pc = 0x32601Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326018u;
    // 0x32601c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326018u, 0x326020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326020u;
label_326020:
    // 0x326020: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326024: 0x10000480  b           . + 4 + (0x480 << 2)
    ctx->pc = 0x326024u;
    {
        const bool branch_taken_0x326024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326024u;
        // 0x326028: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326024) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x32602Cu;
label_32602c:
    // 0x32602c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x32602cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326030: 0x8c44eeac  lw          $a0, -0x1154($v0)
    ctx->pc = 0x326030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962860)));
    // 0x326034: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326034u;
    SET_GPR_U32(ctx, 31, 0x32603Cu);
    ctx->pc = 0x326038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326034u;
    // 0x326038: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326034u, 0x32603Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32603Cu;
label_32603c:
    // 0x32603c: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x32603cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326040: 0x10000479  b           . + 4 + (0x479 << 2)
    ctx->pc = 0x326040u;
    {
        const bool branch_taken_0x326040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326040u;
        // 0x326044: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326040) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326048u;
label_326048:
    // 0x326048: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x32604c: 0x8c44eeac  lw          $a0, -0x1154($v0)
    ctx->pc = 0x32604cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962860)));
    // 0x326050: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326050u;
    SET_GPR_U32(ctx, 31, 0x326058u);
    ctx->pc = 0x326054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326050u;
    // 0x326054: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326050u, 0x326058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326058u;
label_326058:
    // 0x326058: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x32605c: 0x10000472  b           . + 4 + (0x472 << 2)
    ctx->pc = 0x32605Cu;
    {
        const bool branch_taken_0x32605c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32605Cu;
        // 0x326060: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32605c) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326064u;
label_326064:
    // 0x326064: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326068: 0x8c44eeac  lw          $a0, -0x1154($v0)
    ctx->pc = 0x326068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962860)));
    // 0x32606c: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x32606Cu;
    SET_GPR_U32(ctx, 31, 0x326074u);
    ctx->pc = 0x326070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32606Cu;
    // 0x326070: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x32606Cu, 0x326074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326074u;
label_326074:
    // 0x326074: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326078: 0x1000046b  b           . + 4 + (0x46B << 2)
    ctx->pc = 0x326078u;
    {
        const bool branch_taken_0x326078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326078u;
        // 0x32607c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326078) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326080u;
label_326080:
    // 0x326080: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326084: 0x8c44eebc  lw          $a0, -0x1144($v0)
    ctx->pc = 0x326084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962876)));
    // 0x326088: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326088u;
    SET_GPR_U32(ctx, 31, 0x326090u);
    ctx->pc = 0x32608Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326088u;
    // 0x32608c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326088u, 0x326090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326090u;
label_326090:
    // 0x326090: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326094: 0x10000464  b           . + 4 + (0x464 << 2)
    ctx->pc = 0x326094u;
    {
        const bool branch_taken_0x326094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326094u;
        // 0x326098: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326094) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x32609Cu;
label_32609c:
    // 0x32609c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x32609cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3260a0: 0x8c44eebc  lw          $a0, -0x1144($v0)
    ctx->pc = 0x3260a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962876)));
    // 0x3260a4: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x3260A4u;
    SET_GPR_U32(ctx, 31, 0x3260ACu);
    ctx->pc = 0x3260A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3260A4u;
    // 0x3260a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x3260A4u, 0x3260ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3260ACu;
label_3260ac:
    // 0x3260ac: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x3260acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x3260b0: 0x1000045d  b           . + 4 + (0x45D << 2)
    ctx->pc = 0x3260B0u;
    {
        const bool branch_taken_0x3260b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3260B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3260B0u;
        // 0x3260b4: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3260b0) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x3260B8u;
label_3260b8:
    // 0x3260b8: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3260b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3260bc: 0x8c44eebc  lw          $a0, -0x1144($v0)
    ctx->pc = 0x3260bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962876)));
    // 0x3260c0: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x3260C0u;
    SET_GPR_U32(ctx, 31, 0x3260C8u);
    ctx->pc = 0x3260C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3260C0u;
    // 0x3260c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x3260C0u, 0x3260C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3260C8u;
label_3260c8:
    // 0x3260c8: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x3260c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x3260cc: 0x10000456  b           . + 4 + (0x456 << 2)
    ctx->pc = 0x3260CCu;
    {
        const bool branch_taken_0x3260cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3260D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3260CCu;
        // 0x3260d0: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3260cc) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x3260D4u;
label_3260d4:
    // 0x3260d4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3260d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3260d8: 0x8c44eebc  lw          $a0, -0x1144($v0)
    ctx->pc = 0x3260d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962876)));
    // 0x3260dc: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x3260DCu;
    SET_GPR_U32(ctx, 31, 0x3260E4u);
    ctx->pc = 0x3260E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3260DCu;
    // 0x3260e0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x3260DCu, 0x3260E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3260E4u;
label_3260e4:
    // 0x3260e4: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x3260e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x3260e8: 0x1000044f  b           . + 4 + (0x44F << 2)
    ctx->pc = 0x3260E8u;
    {
        const bool branch_taken_0x3260e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3260ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3260E8u;
        // 0x3260ec: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3260e8) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x3260F0u;
label_3260f0:
    // 0x3260f0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3260f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3260f4: 0x8c44eebc  lw          $a0, -0x1144($v0)
    ctx->pc = 0x3260f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962876)));
    // 0x3260f8: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x3260F8u;
    SET_GPR_U32(ctx, 31, 0x326100u);
    ctx->pc = 0x3260FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3260F8u;
    // 0x3260fc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x3260F8u, 0x326100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326100u;
label_326100:
    // 0x326100: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326104: 0x10000448  b           . + 4 + (0x448 << 2)
    ctx->pc = 0x326104u;
    {
        const bool branch_taken_0x326104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326104u;
        // 0x326108: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326104) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x32610Cu;
label_32610c:
    // 0x32610c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x32610cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326110: 0x8c44eebc  lw          $a0, -0x1144($v0)
    ctx->pc = 0x326110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962876)));
    // 0x326114: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326114u;
    SET_GPR_U32(ctx, 31, 0x32611Cu);
    ctx->pc = 0x326118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326114u;
    // 0x326118: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326114u, 0x32611Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32611Cu;
label_32611c:
    // 0x32611c: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x32611cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326120: 0x10000441  b           . + 4 + (0x441 << 2)
    ctx->pc = 0x326120u;
    {
        const bool branch_taken_0x326120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326120u;
        // 0x326124: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326120) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326128u;
label_326128:
    // 0x326128: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x32612c: 0x8c44eebc  lw          $a0, -0x1144($v0)
    ctx->pc = 0x32612cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962876)));
    // 0x326130: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326130u;
    SET_GPR_U32(ctx, 31, 0x326138u);
    ctx->pc = 0x326134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326130u;
    // 0x326134: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326130u, 0x326138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326138u;
label_326138:
    // 0x326138: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x32613c: 0x1000043a  b           . + 4 + (0x43A << 2)
    ctx->pc = 0x32613Cu;
    {
        const bool branch_taken_0x32613c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32613Cu;
        // 0x326140: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32613c) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326144u;
label_326144:
    // 0x326144: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326148: 0x8c44eebc  lw          $a0, -0x1144($v0)
    ctx->pc = 0x326148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962876)));
    // 0x32614c: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x32614Cu;
    SET_GPR_U32(ctx, 31, 0x326154u);
    ctx->pc = 0x326150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32614Cu;
    // 0x326150: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x32614Cu, 0x326154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326154u;
label_326154:
    // 0x326154: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326158: 0x10000433  b           . + 4 + (0x433 << 2)
    ctx->pc = 0x326158u;
    {
        const bool branch_taken_0x326158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326158u;
        // 0x32615c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326158) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326160u;
label_326160:
    // 0x326160: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326164: 0x8c44eecc  lw          $a0, -0x1134($v0)
    ctx->pc = 0x326164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962892)));
    // 0x326168: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326168u;
    SET_GPR_U32(ctx, 31, 0x326170u);
    ctx->pc = 0x32616Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326168u;
    // 0x32616c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326168u, 0x326170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326170u;
label_326170:
    // 0x326170: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326174: 0x1000042c  b           . + 4 + (0x42C << 2)
    ctx->pc = 0x326174u;
    {
        const bool branch_taken_0x326174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326174u;
        // 0x326178: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326174) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x32617Cu;
label_32617c:
    // 0x32617c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x32617cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326180: 0x8c44eecc  lw          $a0, -0x1134($v0)
    ctx->pc = 0x326180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962892)));
    // 0x326184: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326184u;
    SET_GPR_U32(ctx, 31, 0x32618Cu);
    ctx->pc = 0x326188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326184u;
    // 0x326188: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326184u, 0x32618Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32618Cu;
label_32618c:
    // 0x32618c: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x32618cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326190: 0x10000425  b           . + 4 + (0x425 << 2)
    ctx->pc = 0x326190u;
    {
        const bool branch_taken_0x326190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326190u;
        // 0x326194: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326190) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326198u;
label_326198:
    // 0x326198: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x32619c: 0x8c44eecc  lw          $a0, -0x1134($v0)
    ctx->pc = 0x32619cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962892)));
    // 0x3261a0: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x3261A0u;
    SET_GPR_U32(ctx, 31, 0x3261A8u);
    ctx->pc = 0x3261A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3261A0u;
    // 0x3261a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x3261A0u, 0x3261A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3261A8u;
label_3261a8:
    // 0x3261a8: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x3261a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x3261ac: 0x1000041e  b           . + 4 + (0x41E << 2)
    ctx->pc = 0x3261ACu;
    {
        const bool branch_taken_0x3261ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3261B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3261ACu;
        // 0x3261b0: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3261ac) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x3261B4u;
label_3261b4:
    // 0x3261b4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3261b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3261b8: 0x8c44eecc  lw          $a0, -0x1134($v0)
    ctx->pc = 0x3261b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962892)));
    // 0x3261bc: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x3261BCu;
    SET_GPR_U32(ctx, 31, 0x3261C4u);
    ctx->pc = 0x3261C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3261BCu;
    // 0x3261c0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x3261BCu, 0x3261C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3261C4u;
label_3261c4:
    // 0x3261c4: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x3261c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x3261c8: 0x10000417  b           . + 4 + (0x417 << 2)
    ctx->pc = 0x3261C8u;
    {
        const bool branch_taken_0x3261c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3261CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3261C8u;
        // 0x3261cc: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3261c8) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x3261D0u;
label_3261d0:
    // 0x3261d0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3261d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3261d4: 0x8c44eecc  lw          $a0, -0x1134($v0)
    ctx->pc = 0x3261d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962892)));
    // 0x3261d8: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x3261D8u;
    SET_GPR_U32(ctx, 31, 0x3261E0u);
    ctx->pc = 0x3261DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3261D8u;
    // 0x3261dc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x3261D8u, 0x3261E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3261E0u;
label_3261e0:
    // 0x3261e0: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x3261e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x3261e4: 0x10000410  b           . + 4 + (0x410 << 2)
    ctx->pc = 0x3261E4u;
    {
        const bool branch_taken_0x3261e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3261E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3261E4u;
        // 0x3261e8: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3261e4) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x3261ECu;
label_3261ec:
    // 0x3261ec: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3261ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3261f0: 0x8c44eecc  lw          $a0, -0x1134($v0)
    ctx->pc = 0x3261f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962892)));
    // 0x3261f4: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x3261F4u;
    SET_GPR_U32(ctx, 31, 0x3261FCu);
    ctx->pc = 0x3261F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3261F4u;
    // 0x3261f8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x3261F4u, 0x3261FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3261FCu;
label_3261fc:
    // 0x3261fc: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x3261fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326200: 0x10000409  b           . + 4 + (0x409 << 2)
    ctx->pc = 0x326200u;
    {
        const bool branch_taken_0x326200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326200u;
        // 0x326204: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326200) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326208u;
label_326208:
    // 0x326208: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x32620c: 0x8c44eecc  lw          $a0, -0x1134($v0)
    ctx->pc = 0x32620cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962892)));
    // 0x326210: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326210u;
    SET_GPR_U32(ctx, 31, 0x326218u);
    ctx->pc = 0x326214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326210u;
    // 0x326214: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326210u, 0x326218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326218u;
label_326218:
    // 0x326218: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x32621c: 0x10000402  b           . + 4 + (0x402 << 2)
    ctx->pc = 0x32621Cu;
    {
        const bool branch_taken_0x32621c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32621Cu;
        // 0x326220: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32621c) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326224u;
label_326224:
    // 0x326224: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326228: 0x8c44eecc  lw          $a0, -0x1134($v0)
    ctx->pc = 0x326228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962892)));
    // 0x32622c: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x32622Cu;
    SET_GPR_U32(ctx, 31, 0x326234u);
    ctx->pc = 0x326230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32622Cu;
    // 0x326230: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x32622Cu, 0x326234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326234u;
label_326234:
    // 0x326234: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326238: 0x100003fb  b           . + 4 + (0x3FB << 2)
    ctx->pc = 0x326238u;
    {
        const bool branch_taken_0x326238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326238u;
        // 0x32623c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326238) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326240u;
label_326240:
    // 0x326240: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326244: 0x8c44eedc  lw          $a0, -0x1124($v0)
    ctx->pc = 0x326244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962908)));
    // 0x326248: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326248u;
    SET_GPR_U32(ctx, 31, 0x326250u);
    ctx->pc = 0x32624Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326248u;
    // 0x32624c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326248u, 0x326250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326250u;
label_326250:
    // 0x326250: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326254: 0x100003f4  b           . + 4 + (0x3F4 << 2)
    ctx->pc = 0x326254u;
    {
        const bool branch_taken_0x326254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326254u;
        // 0x326258: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326254) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x32625Cu;
label_32625c:
    // 0x32625c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x32625cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326260: 0x8c44eedc  lw          $a0, -0x1124($v0)
    ctx->pc = 0x326260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962908)));
    // 0x326264: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326264u;
    SET_GPR_U32(ctx, 31, 0x32626Cu);
    ctx->pc = 0x326268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326264u;
    // 0x326268: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326264u, 0x32626Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32626Cu;
label_32626c:
    // 0x32626c: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x32626cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326270: 0x100003ed  b           . + 4 + (0x3ED << 2)
    ctx->pc = 0x326270u;
    {
        const bool branch_taken_0x326270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326270u;
        // 0x326274: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326270) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326278u;
label_326278:
    // 0x326278: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x32627c: 0x8c44eedc  lw          $a0, -0x1124($v0)
    ctx->pc = 0x32627cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962908)));
    // 0x326280: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326280u;
    SET_GPR_U32(ctx, 31, 0x326288u);
    ctx->pc = 0x326284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326280u;
    // 0x326284: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326280u, 0x326288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326288u;
label_326288:
    // 0x326288: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x32628c: 0x100003e6  b           . + 4 + (0x3E6 << 2)
    ctx->pc = 0x32628Cu;
    {
        const bool branch_taken_0x32628c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32628Cu;
        // 0x326290: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32628c) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326294u;
label_326294:
    // 0x326294: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326298: 0x8c44eedc  lw          $a0, -0x1124($v0)
    ctx->pc = 0x326298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962908)));
    // 0x32629c: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x32629Cu;
    SET_GPR_U32(ctx, 31, 0x3262A4u);
    ctx->pc = 0x3262A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32629Cu;
    // 0x3262a0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x32629Cu, 0x3262A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3262A4u;
label_3262a4:
    // 0x3262a4: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x3262a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x3262a8: 0x100003df  b           . + 4 + (0x3DF << 2)
    ctx->pc = 0x3262A8u;
    {
        const bool branch_taken_0x3262a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3262ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3262A8u;
        // 0x3262ac: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3262a8) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x3262B0u;
label_3262b0:
    // 0x3262b0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3262b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3262b4: 0x8c44eedc  lw          $a0, -0x1124($v0)
    ctx->pc = 0x3262b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962908)));
    // 0x3262b8: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x3262B8u;
    SET_GPR_U32(ctx, 31, 0x3262C0u);
    ctx->pc = 0x3262BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3262B8u;
    // 0x3262bc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x3262B8u, 0x3262C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3262C0u;
label_3262c0:
    // 0x3262c0: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x3262c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x3262c4: 0x100003d8  b           . + 4 + (0x3D8 << 2)
    ctx->pc = 0x3262C4u;
    {
        const bool branch_taken_0x3262c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3262C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3262C4u;
        // 0x3262c8: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3262c4) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x3262CCu;
label_3262cc:
    // 0x3262cc: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3262ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3262d0: 0x8c44eedc  lw          $a0, -0x1124($v0)
    ctx->pc = 0x3262d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962908)));
    // 0x3262d4: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x3262D4u;
    SET_GPR_U32(ctx, 31, 0x3262DCu);
    ctx->pc = 0x3262D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3262D4u;
    // 0x3262d8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x3262D4u, 0x3262DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3262DCu;
label_3262dc:
    // 0x3262dc: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x3262dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x3262e0: 0x100003d1  b           . + 4 + (0x3D1 << 2)
    ctx->pc = 0x3262E0u;
    {
        const bool branch_taken_0x3262e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3262E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3262E0u;
        // 0x3262e4: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3262e0) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x3262E8u;
label_3262e8:
    // 0x3262e8: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3262e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3262ec: 0x8c44eedc  lw          $a0, -0x1124($v0)
    ctx->pc = 0x3262ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962908)));
    // 0x3262f0: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x3262F0u;
    SET_GPR_U32(ctx, 31, 0x3262F8u);
    ctx->pc = 0x3262F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3262F0u;
    // 0x3262f4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x3262F0u, 0x3262F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3262F8u;
label_3262f8:
    // 0x3262f8: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x3262f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x3262fc: 0x100003ca  b           . + 4 + (0x3CA << 2)
    ctx->pc = 0x3262FCu;
    {
        const bool branch_taken_0x3262fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3262FCu;
        // 0x326300: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3262fc) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326304u;
label_326304:
    // 0x326304: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326308: 0x8c44eedc  lw          $a0, -0x1124($v0)
    ctx->pc = 0x326308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962908)));
    // 0x32630c: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x32630Cu;
    SET_GPR_U32(ctx, 31, 0x326314u);
    ctx->pc = 0x326310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32630Cu;
    // 0x326310: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x32630Cu, 0x326314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326314u;
label_326314:
    // 0x326314: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326318: 0x100003c3  b           . + 4 + (0x3C3 << 2)
    ctx->pc = 0x326318u;
    {
        const bool branch_taken_0x326318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326318u;
        // 0x32631c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326318) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326320u;
label_326320:
    // 0x326320: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326324: 0x8c44eeec  lw          $a0, -0x1114($v0)
    ctx->pc = 0x326324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962924)));
    // 0x326328: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326328u;
    SET_GPR_U32(ctx, 31, 0x326330u);
    ctx->pc = 0x32632Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326328u;
    // 0x32632c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326328u, 0x326330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326330u;
label_326330:
    // 0x326330: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326334: 0x100003bc  b           . + 4 + (0x3BC << 2)
    ctx->pc = 0x326334u;
    {
        const bool branch_taken_0x326334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326334u;
        // 0x326338: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326334) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x32633Cu;
label_32633c:
    // 0x32633c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x32633cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326340: 0x8c44eeec  lw          $a0, -0x1114($v0)
    ctx->pc = 0x326340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962924)));
    // 0x326344: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326344u;
    SET_GPR_U32(ctx, 31, 0x32634Cu);
    ctx->pc = 0x326348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326344u;
    // 0x326348: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326344u, 0x32634Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32634Cu;
label_32634c:
    // 0x32634c: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x32634cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326350: 0x100003b5  b           . + 4 + (0x3B5 << 2)
    ctx->pc = 0x326350u;
    {
        const bool branch_taken_0x326350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326350u;
        // 0x326354: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326350) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326358u;
label_326358:
    // 0x326358: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x32635c: 0x8c44eeec  lw          $a0, -0x1114($v0)
    ctx->pc = 0x32635cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962924)));
    // 0x326360: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326360u;
    SET_GPR_U32(ctx, 31, 0x326368u);
    ctx->pc = 0x326364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326360u;
    // 0x326364: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326360u, 0x326368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326368u;
label_326368:
    // 0x326368: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x32636c: 0x100003ae  b           . + 4 + (0x3AE << 2)
    ctx->pc = 0x32636Cu;
    {
        const bool branch_taken_0x32636c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32636Cu;
        // 0x326370: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32636c) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326374u;
label_326374:
    // 0x326374: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326378: 0x8c44eeec  lw          $a0, -0x1114($v0)
    ctx->pc = 0x326378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962924)));
    // 0x32637c: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x32637Cu;
    SET_GPR_U32(ctx, 31, 0x326384u);
    ctx->pc = 0x326380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32637Cu;
    // 0x326380: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x32637Cu, 0x326384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326384u;
label_326384:
    // 0x326384: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326388: 0x100003a7  b           . + 4 + (0x3A7 << 2)
    ctx->pc = 0x326388u;
    {
        const bool branch_taken_0x326388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32638Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326388u;
        // 0x32638c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326388) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326390u;
label_326390:
    // 0x326390: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326394: 0x8c44eeec  lw          $a0, -0x1114($v0)
    ctx->pc = 0x326394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962924)));
    // 0x326398: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326398u;
    SET_GPR_U32(ctx, 31, 0x3263A0u);
    ctx->pc = 0x32639Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326398u;
    // 0x32639c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326398u, 0x3263A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3263A0u;
label_3263a0:
    // 0x3263a0: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x3263a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x3263a4: 0x100003a0  b           . + 4 + (0x3A0 << 2)
    ctx->pc = 0x3263A4u;
    {
        const bool branch_taken_0x3263a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3263A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3263A4u;
        // 0x3263a8: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3263a4) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x3263ACu;
label_3263ac:
    // 0x3263ac: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3263acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3263b0: 0x8c44eeec  lw          $a0, -0x1114($v0)
    ctx->pc = 0x3263b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962924)));
    // 0x3263b4: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x3263B4u;
    SET_GPR_U32(ctx, 31, 0x3263BCu);
    ctx->pc = 0x3263B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3263B4u;
    // 0x3263b8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x3263B4u, 0x3263BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3263BCu;
label_3263bc:
    // 0x3263bc: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x3263bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x3263c0: 0x10000399  b           . + 4 + (0x399 << 2)
    ctx->pc = 0x3263C0u;
    {
        const bool branch_taken_0x3263c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3263C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3263C0u;
        // 0x3263c4: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3263c0) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x3263C8u;
label_3263c8:
    // 0x3263c8: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3263c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3263cc: 0x8c44eeec  lw          $a0, -0x1114($v0)
    ctx->pc = 0x3263ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962924)));
    // 0x3263d0: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x3263D0u;
    SET_GPR_U32(ctx, 31, 0x3263D8u);
    ctx->pc = 0x3263D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3263D0u;
    // 0x3263d4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x3263D0u, 0x3263D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3263D8u;
label_3263d8:
    // 0x3263d8: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x3263d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x3263dc: 0x10000392  b           . + 4 + (0x392 << 2)
    ctx->pc = 0x3263DCu;
    {
        const bool branch_taken_0x3263dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3263E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3263DCu;
        // 0x3263e0: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3263dc) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x3263E4u;
label_3263e4:
    // 0x3263e4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3263e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3263e8: 0x8c44eeec  lw          $a0, -0x1114($v0)
    ctx->pc = 0x3263e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962924)));
    // 0x3263ec: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x3263ECu;
    SET_GPR_U32(ctx, 31, 0x3263F4u);
    ctx->pc = 0x3263F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3263ECu;
    // 0x3263f0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x3263ECu, 0x3263F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3263F4u;
label_3263f4:
    // 0x3263f4: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x3263f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x3263f8: 0x1000038b  b           . + 4 + (0x38B << 2)
    ctx->pc = 0x3263F8u;
    {
        const bool branch_taken_0x3263f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3263FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3263F8u;
        // 0x3263fc: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3263f8) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326400u;
label_326400:
    // 0x326400: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326404: 0x8c44eefc  lw          $a0, -0x1104($v0)
    ctx->pc = 0x326404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962940)));
    // 0x326408: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326408u;
    SET_GPR_U32(ctx, 31, 0x326410u);
    ctx->pc = 0x32640Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326408u;
    // 0x32640c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326408u, 0x326410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326410u;
label_326410:
    // 0x326410: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326414: 0x10000384  b           . + 4 + (0x384 << 2)
    ctx->pc = 0x326414u;
    {
        const bool branch_taken_0x326414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326414u;
        // 0x326418: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326414) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x32641Cu;
label_32641c:
    // 0x32641c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x32641cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326420: 0x8c44eefc  lw          $a0, -0x1104($v0)
    ctx->pc = 0x326420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962940)));
    // 0x326424: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326424u;
    SET_GPR_U32(ctx, 31, 0x32642Cu);
    ctx->pc = 0x326428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326424u;
    // 0x326428: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326424u, 0x32642Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32642Cu;
label_32642c:
    // 0x32642c: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x32642cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326430: 0x1000037d  b           . + 4 + (0x37D << 2)
    ctx->pc = 0x326430u;
    {
        const bool branch_taken_0x326430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326430u;
        // 0x326434: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326430) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326438u;
label_326438:
    // 0x326438: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x32643c: 0x8c44eefc  lw          $a0, -0x1104($v0)
    ctx->pc = 0x32643cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962940)));
    // 0x326440: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326440u;
    SET_GPR_U32(ctx, 31, 0x326448u);
    ctx->pc = 0x326444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326440u;
    // 0x326444: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326440u, 0x326448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326448u;
label_326448:
    // 0x326448: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x32644c: 0x10000376  b           . + 4 + (0x376 << 2)
    ctx->pc = 0x32644Cu;
    {
        const bool branch_taken_0x32644c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32644Cu;
        // 0x326450: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32644c) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326454u;
label_326454:
    // 0x326454: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326458: 0x8c44eefc  lw          $a0, -0x1104($v0)
    ctx->pc = 0x326458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962940)));
    // 0x32645c: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x32645Cu;
    SET_GPR_U32(ctx, 31, 0x326464u);
    ctx->pc = 0x326460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32645Cu;
    // 0x326460: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x32645Cu, 0x326464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326464u;
label_326464:
    // 0x326464: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326468: 0x1000036f  b           . + 4 + (0x36F << 2)
    ctx->pc = 0x326468u;
    {
        const bool branch_taken_0x326468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32646Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326468u;
        // 0x32646c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326468) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326470u;
label_326470:
    // 0x326470: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326474: 0x8c44eefc  lw          $a0, -0x1104($v0)
    ctx->pc = 0x326474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962940)));
    // 0x326478: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326478u;
    SET_GPR_U32(ctx, 31, 0x326480u);
    ctx->pc = 0x32647Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326478u;
    // 0x32647c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326478u, 0x326480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326480u;
label_326480:
    // 0x326480: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326484: 0x10000368  b           . + 4 + (0x368 << 2)
    ctx->pc = 0x326484u;
    {
        const bool branch_taken_0x326484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326484u;
        // 0x326488: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326484) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x32648Cu;
label_32648c:
    // 0x32648c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x32648cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326490: 0x8c44eefc  lw          $a0, -0x1104($v0)
    ctx->pc = 0x326490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962940)));
    // 0x326494: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326494u;
    SET_GPR_U32(ctx, 31, 0x32649Cu);
    ctx->pc = 0x326498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326494u;
    // 0x326498: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326494u, 0x32649Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32649Cu;
label_32649c:
    // 0x32649c: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x32649cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x3264a0: 0x10000361  b           . + 4 + (0x361 << 2)
    ctx->pc = 0x3264A0u;
    {
        const bool branch_taken_0x3264a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3264A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3264A0u;
        // 0x3264a4: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3264a0) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x3264A8u;
label_3264a8:
    // 0x3264a8: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3264a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3264ac: 0x8c44eefc  lw          $a0, -0x1104($v0)
    ctx->pc = 0x3264acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962940)));
    // 0x3264b0: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x3264B0u;
    SET_GPR_U32(ctx, 31, 0x3264B8u);
    ctx->pc = 0x3264B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3264B0u;
    // 0x3264b4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x3264B0u, 0x3264B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3264B8u;
label_3264b8:
    // 0x3264b8: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x3264b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x3264bc: 0x1000035a  b           . + 4 + (0x35A << 2)
    ctx->pc = 0x3264BCu;
    {
        const bool branch_taken_0x3264bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3264C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3264BCu;
        // 0x3264c0: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3264bc) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x3264C4u;
label_3264c4:
    // 0x3264c4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3264c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3264c8: 0x8c44eefc  lw          $a0, -0x1104($v0)
    ctx->pc = 0x3264c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962940)));
    // 0x3264cc: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x3264CCu;
    SET_GPR_U32(ctx, 31, 0x3264D4u);
    ctx->pc = 0x3264D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3264CCu;
    // 0x3264d0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x3264CCu, 0x3264D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3264D4u;
label_3264d4:
    // 0x3264d4: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x3264d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x3264d8: 0x10000353  b           . + 4 + (0x353 << 2)
    ctx->pc = 0x3264D8u;
    {
        const bool branch_taken_0x3264d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3264DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3264D8u;
        // 0x3264dc: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3264d8) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x3264E0u;
label_3264e0:
    // 0x3264e0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3264e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3264e4: 0x8c44ef0c  lw          $a0, -0x10F4($v0)
    ctx->pc = 0x3264e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962956)));
    // 0x3264e8: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x3264E8u;
    SET_GPR_U32(ctx, 31, 0x3264F0u);
    ctx->pc = 0x3264ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3264E8u;
    // 0x3264ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x3264E8u, 0x3264F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3264F0u;
label_3264f0:
    // 0x3264f0: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x3264f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x3264f4: 0x1000034c  b           . + 4 + (0x34C << 2)
    ctx->pc = 0x3264F4u;
    {
        const bool branch_taken_0x3264f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3264F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3264F4u;
        // 0x3264f8: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3264f4) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x3264FCu;
label_3264fc:
    // 0x3264fc: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3264fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326500: 0x8c44ef0c  lw          $a0, -0x10F4($v0)
    ctx->pc = 0x326500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962956)));
    // 0x326504: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326504u;
    SET_GPR_U32(ctx, 31, 0x32650Cu);
    ctx->pc = 0x326508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326504u;
    // 0x326508: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326504u, 0x32650Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32650Cu;
label_32650c:
    // 0x32650c: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x32650cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326510: 0x10000345  b           . + 4 + (0x345 << 2)
    ctx->pc = 0x326510u;
    {
        const bool branch_taken_0x326510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326510u;
        // 0x326514: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326510) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326518u;
label_326518:
    // 0x326518: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x32651c: 0x8c44ef0c  lw          $a0, -0x10F4($v0)
    ctx->pc = 0x32651cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962956)));
    // 0x326520: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326520u;
    SET_GPR_U32(ctx, 31, 0x326528u);
    ctx->pc = 0x326524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326520u;
    // 0x326524: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326520u, 0x326528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326528u;
label_326528:
    // 0x326528: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x32652c: 0x1000033e  b           . + 4 + (0x33E << 2)
    ctx->pc = 0x32652Cu;
    {
        const bool branch_taken_0x32652c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32652Cu;
        // 0x326530: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32652c) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326534u;
label_326534:
    // 0x326534: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326538: 0x8c44ef0c  lw          $a0, -0x10F4($v0)
    ctx->pc = 0x326538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962956)));
    // 0x32653c: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x32653Cu;
    SET_GPR_U32(ctx, 31, 0x326544u);
    ctx->pc = 0x326540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32653Cu;
    // 0x326540: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x32653Cu, 0x326544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326544u;
label_326544:
    // 0x326544: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326548: 0x10000337  b           . + 4 + (0x337 << 2)
    ctx->pc = 0x326548u;
    {
        const bool branch_taken_0x326548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32654Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326548u;
        // 0x32654c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326548) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326550u;
label_326550:
    // 0x326550: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326554: 0x8c44ef0c  lw          $a0, -0x10F4($v0)
    ctx->pc = 0x326554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962956)));
    // 0x326558: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326558u;
    SET_GPR_U32(ctx, 31, 0x326560u);
    ctx->pc = 0x32655Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326558u;
    // 0x32655c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326558u, 0x326560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326560u;
label_326560:
    // 0x326560: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326564: 0x10000330  b           . + 4 + (0x330 << 2)
    ctx->pc = 0x326564u;
    {
        const bool branch_taken_0x326564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326564u;
        // 0x326568: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326564) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x32656Cu;
label_32656c:
    // 0x32656c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x32656cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326570: 0x8c44ef0c  lw          $a0, -0x10F4($v0)
    ctx->pc = 0x326570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962956)));
    // 0x326574: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326574u;
    SET_GPR_U32(ctx, 31, 0x32657Cu);
    ctx->pc = 0x326578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326574u;
    // 0x326578: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326574u, 0x32657Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32657Cu;
label_32657c:
    // 0x32657c: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x32657cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326580: 0x10000329  b           . + 4 + (0x329 << 2)
    ctx->pc = 0x326580u;
    {
        const bool branch_taken_0x326580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326580u;
        // 0x326584: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326580) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326588u;
label_326588:
    // 0x326588: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x32658c: 0x8c44ef0c  lw          $a0, -0x10F4($v0)
    ctx->pc = 0x32658cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962956)));
    // 0x326590: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326590u;
    SET_GPR_U32(ctx, 31, 0x326598u);
    ctx->pc = 0x326594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326590u;
    // 0x326594: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326590u, 0x326598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326598u;
label_326598:
    // 0x326598: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x32659c: 0x10000322  b           . + 4 + (0x322 << 2)
    ctx->pc = 0x32659Cu;
    {
        const bool branch_taken_0x32659c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3265A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32659Cu;
        // 0x3265a0: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32659c) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x3265A4u;
label_3265a4:
    // 0x3265a4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3265a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3265a8: 0x8c44ef0c  lw          $a0, -0x10F4($v0)
    ctx->pc = 0x3265a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962956)));
    // 0x3265ac: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x3265ACu;
    SET_GPR_U32(ctx, 31, 0x3265B4u);
    ctx->pc = 0x3265B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3265ACu;
    // 0x3265b0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x3265ACu, 0x3265B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3265B4u;
label_3265b4:
    // 0x3265b4: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x3265b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x3265b8: 0x1000031b  b           . + 4 + (0x31B << 2)
    ctx->pc = 0x3265B8u;
    {
        const bool branch_taken_0x3265b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3265BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3265B8u;
        // 0x3265bc: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3265b8) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x3265C0u;
label_3265c0:
    // 0x3265c0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3265c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3265c4: 0x8c44ef1c  lw          $a0, -0x10E4($v0)
    ctx->pc = 0x3265c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962972)));
    // 0x3265c8: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x3265C8u;
    SET_GPR_U32(ctx, 31, 0x3265D0u);
    ctx->pc = 0x3265CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3265C8u;
    // 0x3265cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x3265C8u, 0x3265D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3265D0u;
label_3265d0:
    // 0x3265d0: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x3265d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x3265d4: 0x10000314  b           . + 4 + (0x314 << 2)
    ctx->pc = 0x3265D4u;
    {
        const bool branch_taken_0x3265d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3265D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3265D4u;
        // 0x3265d8: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3265d4) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x3265DCu;
label_3265dc:
    // 0x3265dc: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3265dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3265e0: 0x8c44ef1c  lw          $a0, -0x10E4($v0)
    ctx->pc = 0x3265e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962972)));
    // 0x3265e4: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x3265E4u;
    SET_GPR_U32(ctx, 31, 0x3265ECu);
    ctx->pc = 0x3265E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3265E4u;
    // 0x3265e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x3265E4u, 0x3265ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3265ECu;
label_3265ec:
    // 0x3265ec: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x3265ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x3265f0: 0x1000030d  b           . + 4 + (0x30D << 2)
    ctx->pc = 0x3265F0u;
    {
        const bool branch_taken_0x3265f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3265F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3265F0u;
        // 0x3265f4: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3265f0) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x3265F8u;
label_3265f8:
    // 0x3265f8: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3265f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3265fc: 0x8c44ef1c  lw          $a0, -0x10E4($v0)
    ctx->pc = 0x3265fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962972)));
    // 0x326600: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326600u;
    SET_GPR_U32(ctx, 31, 0x326608u);
    ctx->pc = 0x326604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326600u;
    // 0x326604: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326600u, 0x326608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326608u;
label_326608:
    // 0x326608: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x32660c: 0x10000306  b           . + 4 + (0x306 << 2)
    ctx->pc = 0x32660Cu;
    {
        const bool branch_taken_0x32660c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32660Cu;
        // 0x326610: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32660c) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326614u;
label_326614:
    // 0x326614: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326618: 0x8c44ef1c  lw          $a0, -0x10E4($v0)
    ctx->pc = 0x326618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962972)));
    // 0x32661c: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x32661Cu;
    SET_GPR_U32(ctx, 31, 0x326624u);
    ctx->pc = 0x326620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32661Cu;
    // 0x326620: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x32661Cu, 0x326624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326624u;
label_326624:
    // 0x326624: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326628: 0x100002ff  b           . + 4 + (0x2FF << 2)
    ctx->pc = 0x326628u;
    {
        const bool branch_taken_0x326628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32662Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326628u;
        // 0x32662c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326628) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326630u;
label_326630:
    // 0x326630: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326634: 0x8c44ef1c  lw          $a0, -0x10E4($v0)
    ctx->pc = 0x326634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962972)));
    // 0x326638: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326638u;
    SET_GPR_U32(ctx, 31, 0x326640u);
    ctx->pc = 0x32663Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326638u;
    // 0x32663c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326638u, 0x326640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326640u;
label_326640:
    // 0x326640: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326644: 0x100002f8  b           . + 4 + (0x2F8 << 2)
    ctx->pc = 0x326644u;
    {
        const bool branch_taken_0x326644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326644u;
        // 0x326648: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326644) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x32664Cu;
label_32664c:
    // 0x32664c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x32664cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326650: 0x8c44ef1c  lw          $a0, -0x10E4($v0)
    ctx->pc = 0x326650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962972)));
    // 0x326654: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326654u;
    SET_GPR_U32(ctx, 31, 0x32665Cu);
    ctx->pc = 0x326658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326654u;
    // 0x326658: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326654u, 0x32665Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32665Cu;
label_32665c:
    // 0x32665c: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x32665cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326660: 0x100002f1  b           . + 4 + (0x2F1 << 2)
    ctx->pc = 0x326660u;
    {
        const bool branch_taken_0x326660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326660u;
        // 0x326664: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326660) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326668u;
label_326668:
    // 0x326668: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x32666c: 0x8c44ef1c  lw          $a0, -0x10E4($v0)
    ctx->pc = 0x32666cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962972)));
    // 0x326670: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326670u;
    SET_GPR_U32(ctx, 31, 0x326678u);
    ctx->pc = 0x326674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326670u;
    // 0x326674: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326670u, 0x326678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326678u;
label_326678:
    // 0x326678: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x32667c: 0x100002ea  b           . + 4 + (0x2EA << 2)
    ctx->pc = 0x32667Cu;
    {
        const bool branch_taken_0x32667c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32667Cu;
        // 0x326680: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32667c) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326684u;
label_326684:
    // 0x326684: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326688: 0x8c44ef1c  lw          $a0, -0x10E4($v0)
    ctx->pc = 0x326688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962972)));
    // 0x32668c: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x32668Cu;
    SET_GPR_U32(ctx, 31, 0x326694u);
    ctx->pc = 0x326690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32668Cu;
    // 0x326690: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x32668Cu, 0x326694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326694u;
label_326694:
    // 0x326694: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326698: 0x100002e3  b           . + 4 + (0x2E3 << 2)
    ctx->pc = 0x326698u;
    {
        const bool branch_taken_0x326698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32669Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326698u;
        // 0x32669c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326698) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x3266A0u;
label_3266a0:
    // 0x3266a0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3266a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3266a4: 0x8c44ef2c  lw          $a0, -0x10D4($v0)
    ctx->pc = 0x3266a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962988)));
    // 0x3266a8: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x3266A8u;
    SET_GPR_U32(ctx, 31, 0x3266B0u);
    ctx->pc = 0x3266ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3266A8u;
    // 0x3266ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x3266A8u, 0x3266B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3266B0u;
label_3266b0:
    // 0x3266b0: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x3266b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x3266b4: 0x100002dc  b           . + 4 + (0x2DC << 2)
    ctx->pc = 0x3266B4u;
    {
        const bool branch_taken_0x3266b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3266B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3266B4u;
        // 0x3266b8: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3266b4) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x3266BCu;
label_3266bc:
    // 0x3266bc: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3266bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3266c0: 0x8c44ef2c  lw          $a0, -0x10D4($v0)
    ctx->pc = 0x3266c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962988)));
    // 0x3266c4: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x3266C4u;
    SET_GPR_U32(ctx, 31, 0x3266CCu);
    ctx->pc = 0x3266C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3266C4u;
    // 0x3266c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x3266C4u, 0x3266CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3266CCu;
label_3266cc:
    // 0x3266cc: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x3266ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x3266d0: 0x100002d5  b           . + 4 + (0x2D5 << 2)
    ctx->pc = 0x3266D0u;
    {
        const bool branch_taken_0x3266d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3266D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3266D0u;
        // 0x3266d4: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3266d0) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x3266D8u;
label_3266d8:
    // 0x3266d8: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3266d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3266dc: 0x8c44ef2c  lw          $a0, -0x10D4($v0)
    ctx->pc = 0x3266dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962988)));
    // 0x3266e0: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x3266E0u;
    SET_GPR_U32(ctx, 31, 0x3266E8u);
    ctx->pc = 0x3266E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3266E0u;
    // 0x3266e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x3266E0u, 0x3266E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3266E8u;
label_3266e8:
    // 0x3266e8: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x3266e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x3266ec: 0x100002ce  b           . + 4 + (0x2CE << 2)
    ctx->pc = 0x3266ECu;
    {
        const bool branch_taken_0x3266ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3266F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3266ECu;
        // 0x3266f0: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3266ec) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x3266F4u;
label_3266f4:
    // 0x3266f4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3266f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3266f8: 0x8c44ef2c  lw          $a0, -0x10D4($v0)
    ctx->pc = 0x3266f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962988)));
    // 0x3266fc: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x3266FCu;
    SET_GPR_U32(ctx, 31, 0x326704u);
    ctx->pc = 0x326700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3266FCu;
    // 0x326700: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x3266FCu, 0x326704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326704u;
label_326704:
    // 0x326704: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326708: 0x100002c7  b           . + 4 + (0x2C7 << 2)
    ctx->pc = 0x326708u;
    {
        const bool branch_taken_0x326708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326708u;
        // 0x32670c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326708) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326710u;
label_326710:
    // 0x326710: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326714: 0x8c44ef2c  lw          $a0, -0x10D4($v0)
    ctx->pc = 0x326714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962988)));
    // 0x326718: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326718u;
    SET_GPR_U32(ctx, 31, 0x326720u);
    ctx->pc = 0x32671Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326718u;
    // 0x32671c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326718u, 0x326720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326720u;
label_326720:
    // 0x326720: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326724: 0x100002c0  b           . + 4 + (0x2C0 << 2)
    ctx->pc = 0x326724u;
    {
        const bool branch_taken_0x326724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326724u;
        // 0x326728: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326724) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x32672Cu;
label_32672c:
    // 0x32672c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x32672cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326730: 0x8c44ef2c  lw          $a0, -0x10D4($v0)
    ctx->pc = 0x326730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962988)));
    // 0x326734: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326734u;
    SET_GPR_U32(ctx, 31, 0x32673Cu);
    ctx->pc = 0x326738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326734u;
    // 0x326738: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326734u, 0x32673Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32673Cu;
label_32673c:
    // 0x32673c: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x32673cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326740: 0x100002b9  b           . + 4 + (0x2B9 << 2)
    ctx->pc = 0x326740u;
    {
        const bool branch_taken_0x326740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326740u;
        // 0x326744: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326740) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326748u;
label_326748:
    // 0x326748: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x32674c: 0x8c44ef2c  lw          $a0, -0x10D4($v0)
    ctx->pc = 0x32674cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962988)));
    // 0x326750: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326750u;
    SET_GPR_U32(ctx, 31, 0x326758u);
    ctx->pc = 0x326754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326750u;
    // 0x326754: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326750u, 0x326758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326758u;
label_326758:
    // 0x326758: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x32675c: 0x100002b2  b           . + 4 + (0x2B2 << 2)
    ctx->pc = 0x32675Cu;
    {
        const bool branch_taken_0x32675c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32675Cu;
        // 0x326760: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32675c) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326764u;
label_326764:
    // 0x326764: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326768: 0x8c44ef2c  lw          $a0, -0x10D4($v0)
    ctx->pc = 0x326768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962988)));
    // 0x32676c: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x32676Cu;
    SET_GPR_U32(ctx, 31, 0x326774u);
    ctx->pc = 0x326770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32676Cu;
    // 0x326770: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x32676Cu, 0x326774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326774u;
label_326774:
    // 0x326774: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326778: 0x100002ab  b           . + 4 + (0x2AB << 2)
    ctx->pc = 0x326778u;
    {
        const bool branch_taken_0x326778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326778u;
        // 0x32677c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326778) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326780u;
label_326780:
    // 0x326780: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326784: 0x8443ecd0  lh          $v1, -0x1330($v0)
    ctx->pc = 0x326784u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962384)));
    // 0x326788: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x326788u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x32678c: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x32678Cu;
    {
        const bool branch_taken_0x32678c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32678c) {
            ctx->pc = 0x326790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32678Cu;
            // 0x326790: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326798u;
            goto label_326798;
        }
    }
    ctx->pc = 0x326794u;
    // 0x326794: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x326794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_326798:
    // 0x326798: 0x100002a3  b           . + 4 + (0x2A3 << 2)
    ctx->pc = 0x326798u;
    {
        const bool branch_taken_0x326798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326798u;
        // 0x32679c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326798) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x3267A0u;
label_3267a0:
    // 0x3267a0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3267a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3267a4: 0x8443ecd2  lh          $v1, -0x132E($v0)
    ctx->pc = 0x3267a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962386)));
    // 0x3267a8: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x3267a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x3267ac: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3267ACu;
    {
        const bool branch_taken_0x3267ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3267ac) {
            ctx->pc = 0x3267B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3267ACu;
            // 0x3267b0: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3267B8u;
            goto label_3267b8;
        }
    }
    ctx->pc = 0x3267B4u;
    // 0x3267b4: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x3267b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_3267b8:
    // 0x3267b8: 0x1000029b  b           . + 4 + (0x29B << 2)
    ctx->pc = 0x3267B8u;
    {
        const bool branch_taken_0x3267b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3267BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3267B8u;
        // 0x3267bc: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3267b8) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x3267C0u;
label_3267c0:
    // 0x3267c0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3267c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3267c4: 0x8443ecd4  lh          $v1, -0x132C($v0)
    ctx->pc = 0x3267c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962388)));
    // 0x3267c8: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x3267c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x3267cc: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3267CCu;
    {
        const bool branch_taken_0x3267cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3267cc) {
            ctx->pc = 0x3267D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3267CCu;
            // 0x3267d0: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3267D8u;
            goto label_3267d8;
        }
    }
    ctx->pc = 0x3267D4u;
    // 0x3267d4: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x3267d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_3267d8:
    // 0x3267d8: 0x10000293  b           . + 4 + (0x293 << 2)
    ctx->pc = 0x3267D8u;
    {
        const bool branch_taken_0x3267d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3267DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3267D8u;
        // 0x3267dc: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3267d8) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x3267E0u;
label_3267e0:
    // 0x3267e0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3267e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3267e4: 0x8443ecdc  lh          $v1, -0x1324($v0)
    ctx->pc = 0x3267e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962396)));
    // 0x3267e8: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x3267e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x3267ec: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3267ECu;
    {
        const bool branch_taken_0x3267ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3267ec) {
            ctx->pc = 0x3267F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3267ECu;
            // 0x3267f0: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3267F8u;
            goto label_3267f8;
        }
    }
    ctx->pc = 0x3267F4u;
    // 0x3267f4: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x3267f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_3267f8:
    // 0x3267f8: 0x1000028b  b           . + 4 + (0x28B << 2)
    ctx->pc = 0x3267F8u;
    {
        const bool branch_taken_0x3267f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3267FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3267F8u;
        // 0x3267fc: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3267f8) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326800u;
label_326800:
    // 0x326800: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326804: 0x8443ecde  lh          $v1, -0x1322($v0)
    ctx->pc = 0x326804u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962398)));
    // 0x326808: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x326808u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x32680c: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x32680Cu;
    {
        const bool branch_taken_0x32680c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32680c) {
            ctx->pc = 0x326810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32680Cu;
            // 0x326810: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326818u;
            goto label_326818;
        }
    }
    ctx->pc = 0x326814u;
    // 0x326814: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x326814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_326818:
    // 0x326818: 0x10000283  b           . + 4 + (0x283 << 2)
    ctx->pc = 0x326818u;
    {
        const bool branch_taken_0x326818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326818u;
        // 0x32681c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326818) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326820u;
label_326820:
    // 0x326820: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326824: 0x8443ece0  lh          $v1, -0x1320($v0)
    ctx->pc = 0x326824u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962400)));
    // 0x326828: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x326828u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x32682c: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x32682Cu;
    {
        const bool branch_taken_0x32682c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32682c) {
            ctx->pc = 0x326830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32682Cu;
            // 0x326830: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326838u;
            goto label_326838;
        }
    }
    ctx->pc = 0x326834u;
    // 0x326834: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x326834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_326838:
    // 0x326838: 0x1000027b  b           . + 4 + (0x27B << 2)
    ctx->pc = 0x326838u;
    {
        const bool branch_taken_0x326838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326838u;
        // 0x32683c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326838) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326840u;
label_326840:
    // 0x326840: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326844: 0x8443ece8  lh          $v1, -0x1318($v0)
    ctx->pc = 0x326844u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962408)));
    // 0x326848: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x326848u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x32684c: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x32684Cu;
    {
        const bool branch_taken_0x32684c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32684c) {
            ctx->pc = 0x326850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32684Cu;
            // 0x326850: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326858u;
            goto label_326858;
        }
    }
    ctx->pc = 0x326854u;
    // 0x326854: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x326854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_326858:
    // 0x326858: 0x10000273  b           . + 4 + (0x273 << 2)
    ctx->pc = 0x326858u;
    {
        const bool branch_taken_0x326858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32685Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326858u;
        // 0x32685c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326858) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326860u;
label_326860:
    // 0x326860: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326864: 0x8443ecea  lh          $v1, -0x1316($v0)
    ctx->pc = 0x326864u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962410)));
    // 0x326868: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x326868u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x32686c: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x32686Cu;
    {
        const bool branch_taken_0x32686c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32686c) {
            ctx->pc = 0x326870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32686Cu;
            // 0x326870: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326878u;
            goto label_326878;
        }
    }
    ctx->pc = 0x326874u;
    // 0x326874: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x326874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_326878:
    // 0x326878: 0x1000026b  b           . + 4 + (0x26B << 2)
    ctx->pc = 0x326878u;
    {
        const bool branch_taken_0x326878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326878u;
        // 0x32687c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326878) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326880u;
label_326880:
    // 0x326880: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326884: 0x8443ecec  lh          $v1, -0x1314($v0)
    ctx->pc = 0x326884u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962412)));
    // 0x326888: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x326888u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x32688c: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x32688Cu;
    {
        const bool branch_taken_0x32688c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32688c) {
            ctx->pc = 0x326890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32688Cu;
            // 0x326890: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326898u;
            goto label_326898;
        }
    }
    ctx->pc = 0x326894u;
    // 0x326894: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x326894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_326898:
    // 0x326898: 0x10000263  b           . + 4 + (0x263 << 2)
    ctx->pc = 0x326898u;
    {
        const bool branch_taken_0x326898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326898u;
        // 0x32689c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326898) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x3268A0u;
label_3268a0:
    // 0x3268a0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3268a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3268a4: 0x8443ecf4  lh          $v1, -0x130C($v0)
    ctx->pc = 0x3268a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962420)));
    // 0x3268a8: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x3268a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x3268ac: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3268ACu;
    {
        const bool branch_taken_0x3268ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3268ac) {
            ctx->pc = 0x3268B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3268ACu;
            // 0x3268b0: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3268B8u;
            goto label_3268b8;
        }
    }
    ctx->pc = 0x3268B4u;
    // 0x3268b4: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x3268b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_3268b8:
    // 0x3268b8: 0x1000025b  b           . + 4 + (0x25B << 2)
    ctx->pc = 0x3268B8u;
    {
        const bool branch_taken_0x3268b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3268BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3268B8u;
        // 0x3268bc: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3268b8) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x3268C0u;
label_3268c0:
    // 0x3268c0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3268c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3268c4: 0x8443ecf6  lh          $v1, -0x130A($v0)
    ctx->pc = 0x3268c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962422)));
    // 0x3268c8: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x3268c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x3268cc: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3268CCu;
    {
        const bool branch_taken_0x3268cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3268cc) {
            ctx->pc = 0x3268D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3268CCu;
            // 0x3268d0: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3268D8u;
            goto label_3268d8;
        }
    }
    ctx->pc = 0x3268D4u;
    // 0x3268d4: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x3268d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_3268d8:
    // 0x3268d8: 0x10000253  b           . + 4 + (0x253 << 2)
    ctx->pc = 0x3268D8u;
    {
        const bool branch_taken_0x3268d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3268DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3268D8u;
        // 0x3268dc: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3268d8) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x3268E0u;
label_3268e0:
    // 0x3268e0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3268e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3268e4: 0x8443ecf8  lh          $v1, -0x1308($v0)
    ctx->pc = 0x3268e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962424)));
    // 0x3268e8: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x3268e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x3268ec: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3268ECu;
    {
        const bool branch_taken_0x3268ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3268ec) {
            ctx->pc = 0x3268F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3268ECu;
            // 0x3268f0: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3268F8u;
            goto label_3268f8;
        }
    }
    ctx->pc = 0x3268F4u;
    // 0x3268f4: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x3268f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_3268f8:
    // 0x3268f8: 0x1000024b  b           . + 4 + (0x24B << 2)
    ctx->pc = 0x3268F8u;
    {
        const bool branch_taken_0x3268f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3268FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3268F8u;
        // 0x3268fc: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3268f8) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326900u;
label_326900:
    // 0x326900: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326904: 0x8443ed00  lh          $v1, -0x1300($v0)
    ctx->pc = 0x326904u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962432)));
    // 0x326908: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x326908u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x32690c: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x32690Cu;
    {
        const bool branch_taken_0x32690c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32690c) {
            ctx->pc = 0x326910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32690Cu;
            // 0x326910: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326918u;
            goto label_326918;
        }
    }
    ctx->pc = 0x326914u;
    // 0x326914: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x326914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_326918:
    // 0x326918: 0x10000243  b           . + 4 + (0x243 << 2)
    ctx->pc = 0x326918u;
    {
        const bool branch_taken_0x326918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326918u;
        // 0x32691c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326918) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326920u;
label_326920:
    // 0x326920: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326924: 0x8443ed02  lh          $v1, -0x12FE($v0)
    ctx->pc = 0x326924u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962434)));
    // 0x326928: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x326928u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x32692c: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x32692Cu;
    {
        const bool branch_taken_0x32692c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32692c) {
            ctx->pc = 0x326930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32692Cu;
            // 0x326930: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326938u;
            goto label_326938;
        }
    }
    ctx->pc = 0x326934u;
    // 0x326934: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x326934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_326938:
    // 0x326938: 0x1000023b  b           . + 4 + (0x23B << 2)
    ctx->pc = 0x326938u;
    {
        const bool branch_taken_0x326938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326938u;
        // 0x32693c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326938) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326940u;
label_326940:
    // 0x326940: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326944: 0x8443ed04  lh          $v1, -0x12FC($v0)
    ctx->pc = 0x326944u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962436)));
    // 0x326948: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x326948u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x32694c: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x32694Cu;
    {
        const bool branch_taken_0x32694c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32694c) {
            ctx->pc = 0x326950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32694Cu;
            // 0x326950: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326958u;
            goto label_326958;
        }
    }
    ctx->pc = 0x326954u;
    // 0x326954: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x326954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_326958:
    // 0x326958: 0x10000233  b           . + 4 + (0x233 << 2)
    ctx->pc = 0x326958u;
    {
        const bool branch_taken_0x326958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326958u;
        // 0x32695c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326958) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326960u;
label_326960:
    // 0x326960: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326964: 0x8443ed0c  lh          $v1, -0x12F4($v0)
    ctx->pc = 0x326964u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962444)));
    // 0x326968: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x326968u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x32696c: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x32696Cu;
    {
        const bool branch_taken_0x32696c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32696c) {
            ctx->pc = 0x326970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32696Cu;
            // 0x326970: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326978u;
            goto label_326978;
        }
    }
    ctx->pc = 0x326974u;
    // 0x326974: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x326974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_326978:
    // 0x326978: 0x1000022b  b           . + 4 + (0x22B << 2)
    ctx->pc = 0x326978u;
    {
        const bool branch_taken_0x326978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326978u;
        // 0x32697c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326978) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326980u;
label_326980:
    // 0x326980: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326984: 0x8443ed0e  lh          $v1, -0x12F2($v0)
    ctx->pc = 0x326984u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962446)));
    // 0x326988: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x326988u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x32698c: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x32698Cu;
    {
        const bool branch_taken_0x32698c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32698c) {
            ctx->pc = 0x326990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32698Cu;
            // 0x326990: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326998u;
            goto label_326998;
        }
    }
    ctx->pc = 0x326994u;
    // 0x326994: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x326994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_326998:
    // 0x326998: 0x10000223  b           . + 4 + (0x223 << 2)
    ctx->pc = 0x326998u;
    {
        const bool branch_taken_0x326998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32699Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326998u;
        // 0x32699c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326998) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x3269A0u;
label_3269a0:
    // 0x3269a0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3269a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3269a4: 0x8443ed10  lh          $v1, -0x12F0($v0)
    ctx->pc = 0x3269a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962448)));
    // 0x3269a8: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x3269a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x3269ac: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3269ACu;
    {
        const bool branch_taken_0x3269ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3269ac) {
            ctx->pc = 0x3269B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3269ACu;
            // 0x3269b0: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3269B8u;
            goto label_3269b8;
        }
    }
    ctx->pc = 0x3269B4u;
    // 0x3269b4: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x3269b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_3269b8:
    // 0x3269b8: 0x1000021b  b           . + 4 + (0x21B << 2)
    ctx->pc = 0x3269B8u;
    {
        const bool branch_taken_0x3269b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3269BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3269B8u;
        // 0x3269bc: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3269b8) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x3269C0u;
label_3269c0:
    // 0x3269c0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3269c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3269c4: 0x8443ed18  lh          $v1, -0x12E8($v0)
    ctx->pc = 0x3269c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962456)));
    // 0x3269c8: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x3269c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x3269cc: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3269CCu;
    {
        const bool branch_taken_0x3269cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3269cc) {
            ctx->pc = 0x3269D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3269CCu;
            // 0x3269d0: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3269D8u;
            goto label_3269d8;
        }
    }
    ctx->pc = 0x3269D4u;
    // 0x3269d4: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x3269d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_3269d8:
    // 0x3269d8: 0x10000213  b           . + 4 + (0x213 << 2)
    ctx->pc = 0x3269D8u;
    {
        const bool branch_taken_0x3269d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3269DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3269D8u;
        // 0x3269dc: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3269d8) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x3269E0u;
label_3269e0:
    // 0x3269e0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x3269e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x3269e4: 0x8443ed1a  lh          $v1, -0x12E6($v0)
    ctx->pc = 0x3269e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962458)));
    // 0x3269e8: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x3269e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x3269ec: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3269ECu;
    {
        const bool branch_taken_0x3269ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3269ec) {
            ctx->pc = 0x3269F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3269ECu;
            // 0x3269f0: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3269F8u;
            goto label_3269f8;
        }
    }
    ctx->pc = 0x3269F4u;
    // 0x3269f4: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x3269f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_3269f8:
    // 0x3269f8: 0x1000020b  b           . + 4 + (0x20B << 2)
    ctx->pc = 0x3269F8u;
    {
        const bool branch_taken_0x3269f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3269FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3269F8u;
        // 0x3269fc: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3269f8) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326A00u;
label_326a00:
    // 0x326a00: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326a04: 0x8443ed1c  lh          $v1, -0x12E4($v0)
    ctx->pc = 0x326a04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962460)));
    // 0x326a08: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x326a08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x326a0c: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x326A0Cu;
    {
        const bool branch_taken_0x326a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x326a0c) {
            ctx->pc = 0x326A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326A0Cu;
            // 0x326a10: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326A18u;
            goto label_326a18;
        }
    }
    ctx->pc = 0x326A14u;
    // 0x326a14: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x326a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_326a18:
    // 0x326a18: 0x10000203  b           . + 4 + (0x203 << 2)
    ctx->pc = 0x326A18u;
    {
        const bool branch_taken_0x326a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326A18u;
        // 0x326a1c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326a18) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326A20u;
label_326a20:
    // 0x326a20: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326a24: 0x8443ed24  lh          $v1, -0x12DC($v0)
    ctx->pc = 0x326a24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962468)));
    // 0x326a28: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x326a28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x326a2c: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x326A2Cu;
    {
        const bool branch_taken_0x326a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x326a2c) {
            ctx->pc = 0x326A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326A2Cu;
            // 0x326a30: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326A38u;
            goto label_326a38;
        }
    }
    ctx->pc = 0x326A34u;
    // 0x326a34: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x326a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_326a38:
    // 0x326a38: 0x100001fb  b           . + 4 + (0x1FB << 2)
    ctx->pc = 0x326A38u;
    {
        const bool branch_taken_0x326a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326A38u;
        // 0x326a3c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326a38) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326A40u;
label_326a40:
    // 0x326a40: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326a44: 0x8443ed26  lh          $v1, -0x12DA($v0)
    ctx->pc = 0x326a44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962470)));
    // 0x326a48: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x326a48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x326a4c: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x326A4Cu;
    {
        const bool branch_taken_0x326a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x326a4c) {
            ctx->pc = 0x326A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326A4Cu;
            // 0x326a50: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326A58u;
            goto label_326a58;
        }
    }
    ctx->pc = 0x326A54u;
    // 0x326a54: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x326a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_326a58:
    // 0x326a58: 0x100001f3  b           . + 4 + (0x1F3 << 2)
    ctx->pc = 0x326A58u;
    {
        const bool branch_taken_0x326a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326A58u;
        // 0x326a5c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326a58) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326A60u;
label_326a60:
    // 0x326a60: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326a64: 0x8443ed28  lh          $v1, -0x12D8($v0)
    ctx->pc = 0x326a64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962472)));
    // 0x326a68: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x326a68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x326a6c: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x326A6Cu;
    {
        const bool branch_taken_0x326a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x326a6c) {
            ctx->pc = 0x326A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326A6Cu;
            // 0x326a70: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326A78u;
            goto label_326a78;
        }
    }
    ctx->pc = 0x326A74u;
    // 0x326a74: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x326a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_326a78:
    // 0x326a78: 0x100001eb  b           . + 4 + (0x1EB << 2)
    ctx->pc = 0x326A78u;
    {
        const bool branch_taken_0x326a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326A78u;
        // 0x326a7c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326a78) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326A80u;
label_326a80:
    // 0x326a80: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326a84: 0x8443ed30  lh          $v1, -0x12D0($v0)
    ctx->pc = 0x326a84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962480)));
    // 0x326a88: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x326a88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x326a8c: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x326A8Cu;
    {
        const bool branch_taken_0x326a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x326a8c) {
            ctx->pc = 0x326A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326A8Cu;
            // 0x326a90: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326A98u;
            goto label_326a98;
        }
    }
    ctx->pc = 0x326A94u;
    // 0x326a94: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x326a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_326a98:
    // 0x326a98: 0x100001e3  b           . + 4 + (0x1E3 << 2)
    ctx->pc = 0x326A98u;
    {
        const bool branch_taken_0x326a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326A98u;
        // 0x326a9c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326a98) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326AA0u;
label_326aa0:
    // 0x326aa0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326aa4: 0x8443ed32  lh          $v1, -0x12CE($v0)
    ctx->pc = 0x326aa4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962482)));
    // 0x326aa8: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x326aa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x326aac: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x326AACu;
    {
        const bool branch_taken_0x326aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x326aac) {
            ctx->pc = 0x326AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326AACu;
            // 0x326ab0: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326AB8u;
            goto label_326ab8;
        }
    }
    ctx->pc = 0x326AB4u;
    // 0x326ab4: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x326ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_326ab8:
    // 0x326ab8: 0x100001db  b           . + 4 + (0x1DB << 2)
    ctx->pc = 0x326AB8u;
    {
        const bool branch_taken_0x326ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326AB8u;
        // 0x326abc: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326ab8) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326AC0u;
label_326ac0:
    // 0x326ac0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326ac4: 0x8443ed34  lh          $v1, -0x12CC($v0)
    ctx->pc = 0x326ac4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962484)));
    // 0x326ac8: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x326ac8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x326acc: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x326ACCu;
    {
        const bool branch_taken_0x326acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x326acc) {
            ctx->pc = 0x326AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326ACCu;
            // 0x326ad0: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326AD8u;
            goto label_326ad8;
        }
    }
    ctx->pc = 0x326AD4u;
    // 0x326ad4: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x326ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_326ad8:
    // 0x326ad8: 0x100001d3  b           . + 4 + (0x1D3 << 2)
    ctx->pc = 0x326AD8u;
    {
        const bool branch_taken_0x326ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326AD8u;
        // 0x326adc: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326ad8) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326AE0u;
label_326ae0:
    // 0x326ae0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326ae4: 0x8443ed3c  lh          $v1, -0x12C4($v0)
    ctx->pc = 0x326ae4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962492)));
    // 0x326ae8: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x326ae8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x326aec: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x326AECu;
    {
        const bool branch_taken_0x326aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x326aec) {
            ctx->pc = 0x326AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326AECu;
            // 0x326af0: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326AF8u;
            goto label_326af8;
        }
    }
    ctx->pc = 0x326AF4u;
    // 0x326af4: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x326af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_326af8:
    // 0x326af8: 0x100001cb  b           . + 4 + (0x1CB << 2)
    ctx->pc = 0x326AF8u;
    {
        const bool branch_taken_0x326af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326AF8u;
        // 0x326afc: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326af8) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326B00u;
label_326b00:
    // 0x326b00: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326b04: 0x8443ed3e  lh          $v1, -0x12C2($v0)
    ctx->pc = 0x326b04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962494)));
    // 0x326b08: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x326b08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x326b0c: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x326B0Cu;
    {
        const bool branch_taken_0x326b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x326b0c) {
            ctx->pc = 0x326B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326B0Cu;
            // 0x326b10: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326B18u;
            goto label_326b18;
        }
    }
    ctx->pc = 0x326B14u;
    // 0x326b14: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x326b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_326b18:
    // 0x326b18: 0x100001c3  b           . + 4 + (0x1C3 << 2)
    ctx->pc = 0x326B18u;
    {
        const bool branch_taken_0x326b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B18u;
        // 0x326b1c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326b18) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326B20u;
label_326b20:
    // 0x326b20: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326b24: 0x8443ed40  lh          $v1, -0x12C0($v0)
    ctx->pc = 0x326b24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962496)));
    // 0x326b28: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x326b28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x326b2c: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x326B2Cu;
    {
        const bool branch_taken_0x326b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x326b2c) {
            ctx->pc = 0x326B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326B2Cu;
            // 0x326b30: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326B38u;
            goto label_326b38;
        }
    }
    ctx->pc = 0x326B34u;
    // 0x326b34: 0x246201ef  addiu       $v0, $v1, 0x1EF
    ctx->pc = 0x326b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 495));
label_326b38:
    // 0x326b38: 0x100001bb  b           . + 4 + (0x1BB << 2)
    ctx->pc = 0x326B38u;
    {
        const bool branch_taken_0x326b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B38u;
        // 0x326b3c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326b38) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326B40u;
label_326b40:
    // 0x326b40: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326b44: 0x8042ecd6  lb          $v0, -0x132A($v0)
    ctx->pc = 0x326b44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962390)));
    // 0x326b48: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x326b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x326b4c: 0x100001b6  b           . + 4 + (0x1B6 << 2)
    ctx->pc = 0x326B4Cu;
    {
        const bool branch_taken_0x326b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B4Cu;
        // 0x326b50: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326b4c) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326B54u;
label_326b54:
    // 0x326b54: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326b58: 0x8042ecd7  lb          $v0, -0x1329($v0)
    ctx->pc = 0x326b58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962391)));
    // 0x326b5c: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x326b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x326b60: 0x100001b1  b           . + 4 + (0x1B1 << 2)
    ctx->pc = 0x326B60u;
    {
        const bool branch_taken_0x326b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B60u;
        // 0x326b64: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326b60) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326B68u;
label_326b68:
    // 0x326b68: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326b6c: 0x8042ecd8  lb          $v0, -0x1328($v0)
    ctx->pc = 0x326b6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962392)));
    // 0x326b70: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x326b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x326b74: 0x100001ac  b           . + 4 + (0x1AC << 2)
    ctx->pc = 0x326B74u;
    {
        const bool branch_taken_0x326b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B74u;
        // 0x326b78: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326b74) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326B7Cu;
label_326b7c:
    // 0x326b7c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326b80: 0x8042ece2  lb          $v0, -0x131E($v0)
    ctx->pc = 0x326b80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962402)));
    // 0x326b84: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x326b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x326b88: 0x100001a7  b           . + 4 + (0x1A7 << 2)
    ctx->pc = 0x326B88u;
    {
        const bool branch_taken_0x326b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B88u;
        // 0x326b8c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326b88) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326B90u;
label_326b90:
    // 0x326b90: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326b94: 0x8042ece3  lb          $v0, -0x131D($v0)
    ctx->pc = 0x326b94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962403)));
    // 0x326b98: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x326b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x326b9c: 0x100001a2  b           . + 4 + (0x1A2 << 2)
    ctx->pc = 0x326B9Cu;
    {
        const bool branch_taken_0x326b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B9Cu;
        // 0x326ba0: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326b9c) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326BA4u;
label_326ba4:
    // 0x326ba4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326ba8: 0x8042ece4  lb          $v0, -0x131C($v0)
    ctx->pc = 0x326ba8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962404)));
    // 0x326bac: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x326bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x326bb0: 0x1000019d  b           . + 4 + (0x19D << 2)
    ctx->pc = 0x326BB0u;
    {
        const bool branch_taken_0x326bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326BB0u;
        // 0x326bb4: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326bb0) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326BB8u;
label_326bb8:
    // 0x326bb8: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326bbc: 0x8042ecee  lb          $v0, -0x1312($v0)
    ctx->pc = 0x326bbcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962414)));
    // 0x326bc0: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x326bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x326bc4: 0x10000198  b           . + 4 + (0x198 << 2)
    ctx->pc = 0x326BC4u;
    {
        const bool branch_taken_0x326bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326BC4u;
        // 0x326bc8: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326bc4) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326BCCu;
label_326bcc:
    // 0x326bcc: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326bd0: 0x8042ecef  lb          $v0, -0x1311($v0)
    ctx->pc = 0x326bd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962415)));
    // 0x326bd4: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x326bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x326bd8: 0x10000193  b           . + 4 + (0x193 << 2)
    ctx->pc = 0x326BD8u;
    {
        const bool branch_taken_0x326bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326BD8u;
        // 0x326bdc: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326bd8) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326BE0u;
label_326be0:
    // 0x326be0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326be4: 0x8042ecf0  lb          $v0, -0x1310($v0)
    ctx->pc = 0x326be4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962416)));
    // 0x326be8: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x326be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x326bec: 0x1000018e  b           . + 4 + (0x18E << 2)
    ctx->pc = 0x326BECu;
    {
        const bool branch_taken_0x326bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326BECu;
        // 0x326bf0: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326bec) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326BF4u;
label_326bf4:
    // 0x326bf4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326bf8: 0x8042ecfa  lb          $v0, -0x1306($v0)
    ctx->pc = 0x326bf8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962426)));
    // 0x326bfc: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x326bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x326c00: 0x10000189  b           . + 4 + (0x189 << 2)
    ctx->pc = 0x326C00u;
    {
        const bool branch_taken_0x326c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326C00u;
        // 0x326c04: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326c00) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326C08u;
label_326c08:
    // 0x326c08: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326c0c: 0x8042ecfb  lb          $v0, -0x1305($v0)
    ctx->pc = 0x326c0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962427)));
    // 0x326c10: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x326c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x326c14: 0x10000184  b           . + 4 + (0x184 << 2)
    ctx->pc = 0x326C14u;
    {
        const bool branch_taken_0x326c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326C14u;
        // 0x326c18: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326c14) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326C1Cu;
label_326c1c:
    // 0x326c1c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326c20: 0x8042ecfc  lb          $v0, -0x1304($v0)
    ctx->pc = 0x326c20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962428)));
    // 0x326c24: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x326c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x326c28: 0x1000017f  b           . + 4 + (0x17F << 2)
    ctx->pc = 0x326C28u;
    {
        const bool branch_taken_0x326c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326C28u;
        // 0x326c2c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326c28) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326C30u;
label_326c30:
    // 0x326c30: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326c34: 0x8042ed06  lb          $v0, -0x12FA($v0)
    ctx->pc = 0x326c34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962438)));
    // 0x326c38: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x326c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x326c3c: 0x1000017a  b           . + 4 + (0x17A << 2)
    ctx->pc = 0x326C3Cu;
    {
        const bool branch_taken_0x326c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326C3Cu;
        // 0x326c40: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326c3c) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326C44u;
label_326c44:
    // 0x326c44: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326c48: 0x8042ed07  lb          $v0, -0x12F9($v0)
    ctx->pc = 0x326c48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962439)));
    // 0x326c4c: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x326c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x326c50: 0x10000175  b           . + 4 + (0x175 << 2)
    ctx->pc = 0x326C50u;
    {
        const bool branch_taken_0x326c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326C50u;
        // 0x326c54: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326c50) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326C58u;
label_326c58:
    // 0x326c58: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326c5c: 0x8042ed08  lb          $v0, -0x12F8($v0)
    ctx->pc = 0x326c5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962440)));
    // 0x326c60: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x326c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x326c64: 0x10000170  b           . + 4 + (0x170 << 2)
    ctx->pc = 0x326C64u;
    {
        const bool branch_taken_0x326c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326C64u;
        // 0x326c68: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326c64) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326C6Cu;
label_326c6c:
    // 0x326c6c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326c70: 0x8042ed12  lb          $v0, -0x12EE($v0)
    ctx->pc = 0x326c70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962450)));
    // 0x326c74: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x326c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x326c78: 0x1000016b  b           . + 4 + (0x16B << 2)
    ctx->pc = 0x326C78u;
    {
        const bool branch_taken_0x326c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326C78u;
        // 0x326c7c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326c78) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326C80u;
label_326c80:
    // 0x326c80: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326c84: 0x8042ed13  lb          $v0, -0x12ED($v0)
    ctx->pc = 0x326c84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962451)));
    // 0x326c88: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x326c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x326c8c: 0x10000166  b           . + 4 + (0x166 << 2)
    ctx->pc = 0x326C8Cu;
    {
        const bool branch_taken_0x326c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326C8Cu;
        // 0x326c90: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326c8c) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326C94u;
label_326c94:
    // 0x326c94: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326c98: 0x8042ed14  lb          $v0, -0x12EC($v0)
    ctx->pc = 0x326c98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962452)));
    // 0x326c9c: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x326c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x326ca0: 0x10000161  b           . + 4 + (0x161 << 2)
    ctx->pc = 0x326CA0u;
    {
        const bool branch_taken_0x326ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326CA0u;
        // 0x326ca4: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326ca0) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326CA8u;
label_326ca8:
    // 0x326ca8: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326cac: 0x8042ed1e  lb          $v0, -0x12E2($v0)
    ctx->pc = 0x326cacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962462)));
    // 0x326cb0: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x326cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x326cb4: 0x1000015c  b           . + 4 + (0x15C << 2)
    ctx->pc = 0x326CB4u;
    {
        const bool branch_taken_0x326cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326CB4u;
        // 0x326cb8: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326cb4) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326CBCu;
label_326cbc:
    // 0x326cbc: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326cc0: 0x8042ed1f  lb          $v0, -0x12E1($v0)
    ctx->pc = 0x326cc0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962463)));
    // 0x326cc4: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x326cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x326cc8: 0x10000157  b           . + 4 + (0x157 << 2)
    ctx->pc = 0x326CC8u;
    {
        const bool branch_taken_0x326cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326CC8u;
        // 0x326ccc: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326cc8) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326CD0u;
label_326cd0:
    // 0x326cd0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326cd4: 0x8042ed20  lb          $v0, -0x12E0($v0)
    ctx->pc = 0x326cd4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962464)));
    // 0x326cd8: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x326cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x326cdc: 0x10000152  b           . + 4 + (0x152 << 2)
    ctx->pc = 0x326CDCu;
    {
        const bool branch_taken_0x326cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326CDCu;
        // 0x326ce0: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326cdc) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326CE4u;
label_326ce4:
    // 0x326ce4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326ce8: 0x8042ed2a  lb          $v0, -0x12D6($v0)
    ctx->pc = 0x326ce8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962474)));
    // 0x326cec: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x326cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x326cf0: 0x1000014d  b           . + 4 + (0x14D << 2)
    ctx->pc = 0x326CF0u;
    {
        const bool branch_taken_0x326cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326CF0u;
        // 0x326cf4: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326cf0) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326CF8u;
label_326cf8:
    // 0x326cf8: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326cfc: 0x8042ed2b  lb          $v0, -0x12D5($v0)
    ctx->pc = 0x326cfcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962475)));
    // 0x326d00: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x326d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x326d04: 0x10000148  b           . + 4 + (0x148 << 2)
    ctx->pc = 0x326D04u;
    {
        const bool branch_taken_0x326d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326D04u;
        // 0x326d08: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326d04) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326D0Cu;
label_326d0c:
    // 0x326d0c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326d10: 0x8042ed2c  lb          $v0, -0x12D4($v0)
    ctx->pc = 0x326d10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962476)));
    // 0x326d14: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x326d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x326d18: 0x10000143  b           . + 4 + (0x143 << 2)
    ctx->pc = 0x326D18u;
    {
        const bool branch_taken_0x326d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326D18u;
        // 0x326d1c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326d18) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326D20u;
label_326d20:
    // 0x326d20: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326d24: 0x8042ed36  lb          $v0, -0x12CA($v0)
    ctx->pc = 0x326d24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962486)));
    // 0x326d28: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x326d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x326d2c: 0x1000013e  b           . + 4 + (0x13E << 2)
    ctx->pc = 0x326D2Cu;
    {
        const bool branch_taken_0x326d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326D2Cu;
        // 0x326d30: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326d2c) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326D34u;
label_326d34:
    // 0x326d34: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326d38: 0x8042ed37  lb          $v0, -0x12C9($v0)
    ctx->pc = 0x326d38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962487)));
    // 0x326d3c: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x326d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x326d40: 0x10000139  b           . + 4 + (0x139 << 2)
    ctx->pc = 0x326D40u;
    {
        const bool branch_taken_0x326d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326D40u;
        // 0x326d44: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326d40) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326D48u;
label_326d48:
    // 0x326d48: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326d4c: 0x8042ed38  lb          $v0, -0x12C8($v0)
    ctx->pc = 0x326d4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962488)));
    // 0x326d50: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x326d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x326d54: 0x10000134  b           . + 4 + (0x134 << 2)
    ctx->pc = 0x326D54u;
    {
        const bool branch_taken_0x326d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326D54u;
        // 0x326d58: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326d54) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326D5Cu;
label_326d5c:
    // 0x326d5c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326d60: 0x8042ed42  lb          $v0, -0x12BE($v0)
    ctx->pc = 0x326d60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962498)));
    // 0x326d64: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x326d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x326d68: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x326D68u;
    {
        const bool branch_taken_0x326d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326D68u;
        // 0x326d6c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326d68) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326D70u;
label_326d70:
    // 0x326d70: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326d74: 0x8042ed43  lb          $v0, -0x12BD($v0)
    ctx->pc = 0x326d74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962499)));
    // 0x326d78: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x326d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x326d7c: 0x1000012a  b           . + 4 + (0x12A << 2)
    ctx->pc = 0x326D7Cu;
    {
        const bool branch_taken_0x326d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326D7Cu;
        // 0x326d80: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326d7c) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326D84u;
label_326d84:
    // 0x326d84: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326d88: 0x8042ed44  lb          $v0, -0x12BC($v0)
    ctx->pc = 0x326d88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962500)));
    // 0x326d8c: 0x24420029  addiu       $v0, $v0, 0x29
    ctx->pc = 0x326d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 41));
    // 0x326d90: 0x10000125  b           . + 4 + (0x125 << 2)
    ctx->pc = 0x326D90u;
    {
        const bool branch_taken_0x326d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326D90u;
        // 0x326d94: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326d90) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326D98u;
label_326d98:
    // 0x326d98: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326d9c: 0x9444ecda  lhu         $a0, -0x1326($v0)
    ctx->pc = 0x326d9cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962394)));
    // 0x326da0: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326DA0u;
    SET_GPR_U32(ctx, 31, 0x326DA8u);
    ctx->pc = 0x326DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326DA0u;
    // 0x326da4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326DA0u, 0x326DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326DA8u;
label_326da8:
    // 0x326da8: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326dac: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x326DACu;
    {
        const bool branch_taken_0x326dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326DACu;
        // 0x326db0: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326dac) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326DB4u;
label_326db4:
    // 0x326db4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326db8: 0x9444ecda  lhu         $a0, -0x1326($v0)
    ctx->pc = 0x326db8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962394)));
    // 0x326dbc: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326DBCu;
    SET_GPR_U32(ctx, 31, 0x326DC4u);
    ctx->pc = 0x326DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326DBCu;
    // 0x326dc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326DBCu, 0x326DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326DC4u;
label_326dc4:
    // 0x326dc4: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326dc8: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x326DC8u;
    {
        const bool branch_taken_0x326dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326DC8u;
        // 0x326dcc: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326dc8) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326DD0u;
label_326dd0:
    // 0x326dd0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326dd4: 0x9444ece6  lhu         $a0, -0x131A($v0)
    ctx->pc = 0x326dd4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962406)));
    // 0x326dd8: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326DD8u;
    SET_GPR_U32(ctx, 31, 0x326DE0u);
    ctx->pc = 0x326DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326DD8u;
    // 0x326ddc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326DD8u, 0x326DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326DE0u;
label_326de0:
    // 0x326de0: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326de4: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x326DE4u;
    {
        const bool branch_taken_0x326de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326DE4u;
        // 0x326de8: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326de4) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326DECu;
label_326dec:
    // 0x326dec: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326df0: 0x9444ece6  lhu         $a0, -0x131A($v0)
    ctx->pc = 0x326df0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962406)));
    // 0x326df4: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326DF4u;
    SET_GPR_U32(ctx, 31, 0x326DFCu);
    ctx->pc = 0x326DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326DF4u;
    // 0x326df8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326DF4u, 0x326DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326DFCu;
label_326dfc:
    // 0x326dfc: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326e00: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x326E00u;
    {
        const bool branch_taken_0x326e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E00u;
        // 0x326e04: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326e00) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326E08u;
label_326e08:
    // 0x326e08: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326e0c: 0x9444ecf2  lhu         $a0, -0x130E($v0)
    ctx->pc = 0x326e0cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962418)));
    // 0x326e10: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326E10u;
    SET_GPR_U32(ctx, 31, 0x326E18u);
    ctx->pc = 0x326E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326E10u;
    // 0x326e14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326E10u, 0x326E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326E18u;
label_326e18:
    // 0x326e18: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326e1c: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x326E1Cu;
    {
        const bool branch_taken_0x326e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E1Cu;
        // 0x326e20: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326e1c) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326E24u;
label_326e24:
    // 0x326e24: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326e28: 0x9444ecf2  lhu         $a0, -0x130E($v0)
    ctx->pc = 0x326e28u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962418)));
    // 0x326e2c: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326E2Cu;
    SET_GPR_U32(ctx, 31, 0x326E34u);
    ctx->pc = 0x326E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326E2Cu;
    // 0x326e30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326E2Cu, 0x326E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326E34u;
label_326e34:
    // 0x326e34: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326e38: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x326E38u;
    {
        const bool branch_taken_0x326e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E38u;
        // 0x326e3c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326e38) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326E40u;
label_326e40:
    // 0x326e40: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326e44: 0x9444ecfe  lhu         $a0, -0x1302($v0)
    ctx->pc = 0x326e44u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962430)));
    // 0x326e48: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326E48u;
    SET_GPR_U32(ctx, 31, 0x326E50u);
    ctx->pc = 0x326E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326E48u;
    // 0x326e4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326E48u, 0x326E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326E50u;
label_326e50:
    // 0x326e50: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326e54: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x326E54u;
    {
        const bool branch_taken_0x326e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E54u;
        // 0x326e58: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326e54) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326E5Cu;
label_326e5c:
    // 0x326e5c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326e60: 0x9444ecfe  lhu         $a0, -0x1302($v0)
    ctx->pc = 0x326e60u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962430)));
    // 0x326e64: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326E64u;
    SET_GPR_U32(ctx, 31, 0x326E6Cu);
    ctx->pc = 0x326E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326E64u;
    // 0x326e68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326E64u, 0x326E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326E6Cu;
label_326e6c:
    // 0x326e6c: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326e70: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x326E70u;
    {
        const bool branch_taken_0x326e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E70u;
        // 0x326e74: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326e70) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326E78u;
label_326e78:
    // 0x326e78: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326e7c: 0x9444ed0a  lhu         $a0, -0x12F6($v0)
    ctx->pc = 0x326e7cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962442)));
    // 0x326e80: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326E80u;
    SET_GPR_U32(ctx, 31, 0x326E88u);
    ctx->pc = 0x326E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326E80u;
    // 0x326e84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326E80u, 0x326E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326E88u;
label_326e88:
    // 0x326e88: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326e8c: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x326E8Cu;
    {
        const bool branch_taken_0x326e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E8Cu;
        // 0x326e90: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326e8c) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326E94u;
label_326e94:
    // 0x326e94: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326e98: 0x9444ed0a  lhu         $a0, -0x12F6($v0)
    ctx->pc = 0x326e98u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962442)));
    // 0x326e9c: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326E9Cu;
    SET_GPR_U32(ctx, 31, 0x326EA4u);
    ctx->pc = 0x326EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326E9Cu;
    // 0x326ea0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326E9Cu, 0x326EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326EA4u;
label_326ea4:
    // 0x326ea4: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326ea8: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x326EA8u;
    {
        const bool branch_taken_0x326ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326EA8u;
        // 0x326eac: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326ea8) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326EB0u;
label_326eb0:
    // 0x326eb0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326eb4: 0x9444ed16  lhu         $a0, -0x12EA($v0)
    ctx->pc = 0x326eb4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962454)));
    // 0x326eb8: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326EB8u;
    SET_GPR_U32(ctx, 31, 0x326EC0u);
    ctx->pc = 0x326EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326EB8u;
    // 0x326ebc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326EB8u, 0x326EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326EC0u;
label_326ec0:
    // 0x326ec0: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326ec4: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x326EC4u;
    {
        const bool branch_taken_0x326ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326EC4u;
        // 0x326ec8: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326ec4) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326ECCu;
label_326ecc:
    // 0x326ecc: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326ed0: 0x9444ed16  lhu         $a0, -0x12EA($v0)
    ctx->pc = 0x326ed0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962454)));
    // 0x326ed4: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326ED4u;
    SET_GPR_U32(ctx, 31, 0x326EDCu);
    ctx->pc = 0x326ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326ED4u;
    // 0x326ed8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326ED4u, 0x326EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326EDCu;
label_326edc:
    // 0x326edc: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326ee0: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x326EE0u;
    {
        const bool branch_taken_0x326ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326EE0u;
        // 0x326ee4: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326ee0) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326EE8u;
label_326ee8:
    // 0x326ee8: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326eec: 0x9444ed22  lhu         $a0, -0x12DE($v0)
    ctx->pc = 0x326eecu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962466)));
    // 0x326ef0: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326EF0u;
    SET_GPR_U32(ctx, 31, 0x326EF8u);
    ctx->pc = 0x326EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326EF0u;
    // 0x326ef4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326EF0u, 0x326EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326EF8u;
label_326ef8:
    // 0x326ef8: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326efc: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x326EFCu;
    {
        const bool branch_taken_0x326efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326EFCu;
        // 0x326f00: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326efc) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326F04u;
label_326f04:
    // 0x326f04: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326f08: 0x9444ed22  lhu         $a0, -0x12DE($v0)
    ctx->pc = 0x326f08u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962466)));
    // 0x326f0c: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326F0Cu;
    SET_GPR_U32(ctx, 31, 0x326F14u);
    ctx->pc = 0x326F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326F0Cu;
    // 0x326f10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326F0Cu, 0x326F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326F14u;
label_326f14:
    // 0x326f14: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326f18: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x326F18u;
    {
        const bool branch_taken_0x326f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326F18u;
        // 0x326f1c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326f18) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326F20u;
label_326f20:
    // 0x326f20: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326f24: 0x9444ed2e  lhu         $a0, -0x12D2($v0)
    ctx->pc = 0x326f24u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962478)));
    // 0x326f28: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326F28u;
    SET_GPR_U32(ctx, 31, 0x326F30u);
    ctx->pc = 0x326F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326F28u;
    // 0x326f2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326F28u, 0x326F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326F30u;
label_326f30:
    // 0x326f30: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326f34: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x326F34u;
    {
        const bool branch_taken_0x326f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326F34u;
        // 0x326f38: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326f34) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326F3Cu;
label_326f3c:
    // 0x326f3c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326f40: 0x9444ed2e  lhu         $a0, -0x12D2($v0)
    ctx->pc = 0x326f40u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962478)));
    // 0x326f44: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326F44u;
    SET_GPR_U32(ctx, 31, 0x326F4Cu);
    ctx->pc = 0x326F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326F44u;
    // 0x326f48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326F44u, 0x326F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326F4Cu;
label_326f4c:
    // 0x326f4c: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326f50: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x326F50u;
    {
        const bool branch_taken_0x326f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326F50u;
        // 0x326f54: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326f50) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326F58u;
label_326f58:
    // 0x326f58: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326f5c: 0x9444ed3a  lhu         $a0, -0x12C6($v0)
    ctx->pc = 0x326f5cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962490)));
    // 0x326f60: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326F60u;
    SET_GPR_U32(ctx, 31, 0x326F68u);
    ctx->pc = 0x326F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326F60u;
    // 0x326f64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326F60u, 0x326F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326F68u;
label_326f68:
    // 0x326f68: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326f6c: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x326F6Cu;
    {
        const bool branch_taken_0x326f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326F6Cu;
        // 0x326f70: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326f6c) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326F74u;
label_326f74:
    // 0x326f74: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326f78: 0x9444ed3a  lhu         $a0, -0x12C6($v0)
    ctx->pc = 0x326f78u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962490)));
    // 0x326f7c: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326F7Cu;
    SET_GPR_U32(ctx, 31, 0x326F84u);
    ctx->pc = 0x326F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326F7Cu;
    // 0x326f80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326F7Cu, 0x326F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326F84u;
label_326f84:
    // 0x326f84: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326f88: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x326F88u;
    {
        const bool branch_taken_0x326f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326F88u;
        // 0x326f8c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326f88) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326F90u;
label_326f90:
    // 0x326f90: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326f94: 0x9444ed46  lhu         $a0, -0x12BA($v0)
    ctx->pc = 0x326f94u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962502)));
    // 0x326f98: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326F98u;
    SET_GPR_U32(ctx, 31, 0x326FA0u);
    ctx->pc = 0x326F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326F98u;
    // 0x326f9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326F98u, 0x326FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326FA0u;
label_326fa0:
    // 0x326fa0: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326fa4: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x326FA4u;
    {
        const bool branch_taken_0x326fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326FA4u;
        // 0x326fa8: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326fa4) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326FACu;
label_326fac:
    // 0x326fac: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x326facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x326fb0: 0x9444ed46  lhu         $a0, -0x12BA($v0)
    ctx->pc = 0x326fb0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962502)));
    // 0x326fb4: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326FB4u;
    SET_GPR_U32(ctx, 31, 0x326FBCu);
    ctx->pc = 0x326FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326FB4u;
    // 0x326fb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326FB4u, 0x326FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326FBCu;
label_326fbc:
    // 0x326fbc: 0x24420059  addiu       $v0, $v0, 0x59
    ctx->pc = 0x326fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 89));
    // 0x326fc0: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x326FC0u;
    {
        const bool branch_taken_0x326fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326FC0u;
        // 0x326fc4: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326fc0) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326FC8u;
label_326fc8:
    // 0x326fc8: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x326fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x326fcc: 0x8c444860  lw          $a0, 0x4860($v0)
    ctx->pc = 0x326fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18528)));
    // 0x326fd0: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326FD0u;
    SET_GPR_U32(ctx, 31, 0x326FD8u);
    ctx->pc = 0x326FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326FD0u;
    // 0x326fd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326FD0u, 0x326FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326FD8u;
label_326fd8:
    // 0x326fd8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x326fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x326fdc: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x326FDCu;
    {
        const bool branch_taken_0x326fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326FDCu;
        // 0x326fe0: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326fdc) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x326FE4u;
label_326fe4:
    // 0x326fe4: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x326fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x326fe8: 0x8c444860  lw          $a0, 0x4860($v0)
    ctx->pc = 0x326fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18528)));
    // 0x326fec: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x326FECu;
    SET_GPR_U32(ctx, 31, 0x326FF4u);
    ctx->pc = 0x326FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326FECu;
    // 0x326ff0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x326FECu, 0x326FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326FF4u;
label_326ff4:
    // 0x326ff4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x326ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x326ff8: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x326FF8u;
    {
        const bool branch_taken_0x326ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326FF8u;
        // 0x326ffc: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326ff8) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x327000u;
label_327000:
    // 0x327000: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x327000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x327004: 0x3c039249  lui         $v1, 0x9249
    ctx->pc = 0x327004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37449 << 16));
    // 0x327008: 0x8c44db88  lw          $a0, -0x2478($v0)
    ctx->pc = 0x327008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957960)));
    // 0x32700c: 0x34622493  ori         $v0, $v1, 0x2493
    ctx->pc = 0x32700cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9363);
    // 0x327010: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x327010u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x327014: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x327014u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x327018: 0x0  nop
    ctx->pc = 0x327018u;
    // NOP
    // 0x32701c: 0x1010  mfhi        $v0
    ctx->pc = 0x32701cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x327020: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x327020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x327024: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x327024u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x327028: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x327028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32702c: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x32702cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x327030: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x327030u;
    {
        const bool branch_taken_0x327030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327030u;
        // 0x327034: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x327030) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x327038u;
label_327038:
    // 0x327038: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x327038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x32703c: 0x3c039249  lui         $v1, 0x9249
    ctx->pc = 0x32703cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37449 << 16));
    // 0x327040: 0x8c44ddd0  lw          $a0, -0x2230($v0)
    ctx->pc = 0x327040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958544)));
    // 0x327044: 0x34622493  ori         $v0, $v1, 0x2493
    ctx->pc = 0x327044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9363);
    // 0x327048: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x327048u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32704c: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x32704cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x327050: 0x0  nop
    ctx->pc = 0x327050u;
    // NOP
    // 0x327054: 0x1010  mfhi        $v0
    ctx->pc = 0x327054u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x327058: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x327058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x32705c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x32705cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x327060: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x327060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327064: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x327064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x327068: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x327068u;
    {
        const bool branch_taken_0x327068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327068u;
        // 0x32706c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x327068) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x327070u;
label_327070:
    // 0x327070: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x327070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x327074: 0x3c039249  lui         $v1, 0x9249
    ctx->pc = 0x327074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37449 << 16));
    // 0x327078: 0x8c45db8c  lw          $a1, -0x2474($v0)
    ctx->pc = 0x327078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957964)));
    // 0x32707c: 0x34632493  ori         $v1, $v1, 0x2493
    ctx->pc = 0x32707cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9363);
    // 0x327080: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x327080u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x327084: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x327084u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x327088: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x327088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32708c: 0x1810  mfhi        $v1
    ctx->pc = 0x32708cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x327090: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x327090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x327094: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x327094u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
    // 0x327098: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x327098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32709c: 0x50620062  beql        $v1, $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x32709Cu;
    {
        const bool branch_taken_0x32709c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32709c) {
            ctx->pc = 0x3270A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32709Cu;
            // 0x3270a0: 0x6402000c  daddiu      $v0, $zero, 0xC (Delay Slot)
            SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)12);
            ctx->in_delay_slot = false;
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x3270A4u;
    // 0x3270a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3270a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3270a8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3270A8u;
    {
        const bool branch_taken_0x3270a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3270a8) {
            ctx->pc = 0x3270B8u;
            goto label_3270b8;
        }
    }
    ctx->pc = 0x3270B0u;
    // 0x3270b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3270B0u;
    {
        const bool branch_taken_0x3270b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3270B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3270B0u;
        // 0x3270b4: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3270b0) {
            ctx->pc = 0x3270C4u;
            goto label_3270c4;
        }
    }
    ctx->pc = 0x3270B8u;
label_3270b8:
    // 0x3270b8: 0x6402000c  daddiu      $v0, $zero, 0xC
    ctx->pc = 0x3270b8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)12);
    // 0x3270bc: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x3270BCu;
    {
        const bool branch_taken_0x3270bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3270bc) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x3270C4u;
label_3270c4:
    // 0x3270c4: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x3270C4u;
    {
        const bool branch_taken_0x3270c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3270C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3270C4u;
        // 0x3270c8: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3270c4) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x3270CCu;
label_3270cc:
    // 0x3270cc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3270ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3270d0: 0x3c039249  lui         $v1, 0x9249
    ctx->pc = 0x3270d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37449 << 16));
    // 0x3270d4: 0x8c45ddd4  lw          $a1, -0x222C($v0)
    ctx->pc = 0x3270d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958548)));
    // 0x3270d8: 0x34632493  ori         $v1, $v1, 0x2493
    ctx->pc = 0x3270d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9363);
    // 0x3270dc: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x3270dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3270e0: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x3270e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x3270e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3270e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3270e8: 0x1810  mfhi        $v1
    ctx->pc = 0x3270e8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3270ec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3270ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3270f0: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x3270f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
    // 0x3270f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3270f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3270f8: 0x5062004b  beql        $v1, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x3270F8u;
    {
        const bool branch_taken_0x3270f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3270f8) {
            ctx->pc = 0x3270FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3270F8u;
            // 0x3270fc: 0x6402000c  daddiu      $v0, $zero, 0xC (Delay Slot)
            SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)12);
            ctx->in_delay_slot = false;
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x327100u;
    // 0x327100: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x327100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x327104: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x327104u;
    {
        const bool branch_taken_0x327104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x327104) {
            ctx->pc = 0x327114u;
            goto label_327114;
        }
    }
    ctx->pc = 0x32710Cu;
    // 0x32710c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32710Cu;
    {
        const bool branch_taken_0x32710c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32710Cu;
        // 0x327110: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32710c) {
            ctx->pc = 0x327120u;
            goto label_327120;
        }
    }
    ctx->pc = 0x327114u;
label_327114:
    // 0x327114: 0x6402000c  daddiu      $v0, $zero, 0xC
    ctx->pc = 0x327114u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)12);
    // 0x327118: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x327118u;
    {
        const bool branch_taken_0x327118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327118) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x327120u;
label_327120:
    // 0x327120: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x327120u;
    {
        const bool branch_taken_0x327120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327120u;
        // 0x327124: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x327120) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x327128u;
label_327128:
    // 0x327128: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x327128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x32712c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x32712Cu;
    {
        const bool branch_taken_0x32712c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32712Cu;
        // 0x327130: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32712c) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x327134u;
label_327134:
    // 0x327134: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x327134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x327138: 0x3c039249  lui         $v1, 0x9249
    ctx->pc = 0x327138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37449 << 16));
    // 0x32713c: 0x8c45db8c  lw          $a1, -0x2474($v0)
    ctx->pc = 0x32713cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957964)));
    // 0x327140: 0x34632493  ori         $v1, $v1, 0x2493
    ctx->pc = 0x327140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9363);
    // 0x327144: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x327144u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x327148: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x327148u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x32714c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32714cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x327150: 0x1810  mfhi        $v1
    ctx->pc = 0x327150u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x327154: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x327154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x327158: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x327158u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
    // 0x32715c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32715cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x327160: 0x50620031  beql        $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x327160u;
    {
        const bool branch_taken_0x327160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x327160) {
            ctx->pc = 0x327164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327160u;
            // 0x327164: 0x6402000d  daddiu      $v0, $zero, 0xD (Delay Slot)
            SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)13);
            ctx->in_delay_slot = false;
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x327168u;
    // 0x327168: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x327168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x32716c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x32716Cu;
    {
        const bool branch_taken_0x32716c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32716Cu;
        // 0x327170: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32716c) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x327174u;
label_327174:
    // 0x327174: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x327174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x327178: 0x3c039249  lui         $v1, 0x9249
    ctx->pc = 0x327178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37449 << 16));
    // 0x32717c: 0x8c45ddd4  lw          $a1, -0x222C($v0)
    ctx->pc = 0x32717cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958548)));
    // 0x327180: 0x34632493  ori         $v1, $v1, 0x2493
    ctx->pc = 0x327180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9363);
    // 0x327184: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x327184u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x327188: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x327188u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x32718c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32718cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x327190: 0x1810  mfhi        $v1
    ctx->pc = 0x327190u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x327194: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x327194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x327198: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x327198u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
    // 0x32719c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32719cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3271a0: 0x50620021  beql        $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3271A0u;
    {
        const bool branch_taken_0x3271a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3271a0) {
            ctx->pc = 0x3271A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3271A0u;
            // 0x3271a4: 0x6402000d  daddiu      $v0, $zero, 0xD (Delay Slot)
            SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)13);
            ctx->in_delay_slot = false;
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x3271A8u;
    // 0x3271a8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3271a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3271ac: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3271ACu;
    {
        const bool branch_taken_0x3271ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3271B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3271ACu;
        // 0x3271b0: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3271ac) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x3271B4u;
label_3271b4:
    // 0x3271b4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3271b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3271b8: 0x84425978  lh          $v0, 0x5978($v0)
    ctx->pc = 0x3271b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22904)));
    // 0x3271bc: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x3271bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x3271c0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3271C0u;
    {
        const bool branch_taken_0x3271c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3271C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3271C0u;
        // 0x3271c4: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3271c0) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x3271C8u;
label_3271c8:
    // 0x3271c8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3271c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3271cc: 0x84445970  lh          $a0, 0x5970($v0)
    ctx->pc = 0x3271ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22896)));
    // 0x3271d0: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x3271D0u;
    SET_GPR_U32(ctx, 31, 0x3271D8u);
    ctx->pc = 0x3271D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3271D0u;
    // 0x3271d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x3271D0u, 0x3271D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3271D8u;
label_3271d8:
    // 0x3271d8: 0x24420039  addiu       $v0, $v0, 0x39
    ctx->pc = 0x3271d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 57));
    // 0x3271dc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3271DCu;
    {
        const bool branch_taken_0x3271dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3271E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3271DCu;
        // 0x3271e0: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3271dc) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x3271E4u;
label_3271e4:
    // 0x3271e4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3271e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3271e8: 0x84445970  lh          $a0, 0x5970($v0)
    ctx->pc = 0x3271e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22896)));
    // 0x3271ec: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x3271ECu;
    SET_GPR_U32(ctx, 31, 0x3271F4u);
    ctx->pc = 0x3271F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3271ECu;
    // 0x3271f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x3271ECu, 0x3271F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3271F4u;
label_3271f4:
    // 0x3271f4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3271F4u;
    {
        const bool branch_taken_0x3271f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3271f4) {
            ctx->pc = 0x3271F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3271F4u;
            // 0x3271f8: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x327208u;
            goto label_327208;
        }
    }
    ctx->pc = 0x3271FCu;
    // 0x3271fc: 0x24420039  addiu       $v0, $v0, 0x39
    ctx->pc = 0x3271fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 57));
    // 0x327200: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x327200u;
    {
        const bool branch_taken_0x327200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327200u;
        // 0x327204: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x327200) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x327208u;
label_327208:
    // 0x327208: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x327208u;
    {
        const bool branch_taken_0x327208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327208u;
        // 0x32720c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x327208) {
            ctx->pc = 0x327228u;
            goto label_327228;
        }
    }
    ctx->pc = 0x327210u;
label_327210:
    // 0x327210: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x327210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x327214: 0x8c444860  lw          $a0, 0x4860($v0)
    ctx->pc = 0x327214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18528)));
    // 0x327218: 0xc0c87b0  jal         func_321EC0
    ctx->pc = 0x327218u;
    SET_GPR_U32(ctx, 31, 0x327220u);
    ctx->pc = 0x32721Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327218u;
    // 0x32721c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321EC0u, 0x327218u, 0x327220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327220u;
label_327220:
    // 0x327220: 0x24420011  addiu       $v0, $v0, 0x11
    ctx->pc = 0x327220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17));
    // 0x327224: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x327224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_327228:
    // 0x327228: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x327228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32722c: 0x3e00008  jr          $ra
    ctx->pc = 0x32722Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32722Cu;
        // 0x327230: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32722Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327234u;
    // 0x327234: 0x0  nop
    ctx->pc = 0x327234u;
    // NOP
    // 0x327238: 0x0  nop
    ctx->pc = 0x327238u;
    // NOP
    // 0x32723c: 0x0  nop
    ctx->pc = 0x32723cu;
    // NOP
    if (ctx->pc == 0x32723cu) { ctx->pc = 0x327240u; }
}
