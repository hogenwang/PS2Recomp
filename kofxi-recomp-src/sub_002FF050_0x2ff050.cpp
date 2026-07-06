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

// Function: sub_002FF050
// Address: 0x2ff050 - 0x3005e4
void sub_002FF050_0x2ff050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF050_0x2ff050");
#endif

    switch (ctx->pc) {
        case 0x2ff070u: goto label_2ff070;
        case 0x2ff080u: goto label_2ff080;
        case 0x2ff0a0u: goto label_2ff0a0;
        case 0x2ff0ccu: goto label_2ff0cc;
        case 0x2ff0ecu: goto label_2ff0ec;
        case 0x2ff120u: goto label_2ff120;
        case 0x2ff130u: goto label_2ff130;
        case 0x2ff14cu: goto label_2ff14c;
        case 0x2ff15cu: goto label_2ff15c;
        case 0x2ff188u: goto label_2ff188;
        case 0x2ff1a0u: goto label_2ff1a0;
        case 0x2ff1c0u: goto label_2ff1c0;
        case 0x2ff1d4u: goto label_2ff1d4;
        case 0x2ff1e4u: goto label_2ff1e4;
        case 0x2ff200u: goto label_2ff200;
        case 0x2ff210u: goto label_2ff210;
        case 0x2ff21cu: goto label_2ff21c;
        case 0x2ff260u: goto label_2ff260;
        case 0x2ff264u: goto label_2ff264;
        case 0x2ff278u: goto label_2ff278;
        case 0x2ff288u: goto label_2ff288;
        case 0x2ff2b4u: goto label_2ff2b4;
        case 0x2ff30cu: goto label_2ff30c;
        case 0x2ff34cu: goto label_2ff34c;
        case 0x2ff360u: goto label_2ff360;
        case 0x2ff38cu: goto label_2ff38c;
        case 0x2ff3b4u: goto label_2ff3b4;
        case 0x2ff3f8u: goto label_2ff3f8;
        case 0x2ff408u: goto label_2ff408;
        case 0x2ff428u: goto label_2ff428;
        case 0x2ff448u: goto label_2ff448;
        case 0x2ff45cu: goto label_2ff45c;
        case 0x2ff480u: goto label_2ff480;
        case 0x2ff484u: goto label_2ff484;
        case 0x2ff498u: goto label_2ff498;
        case 0x2ff4a8u: goto label_2ff4a8;
        case 0x2ff4c8u: goto label_2ff4c8;
        case 0x2ff50cu: goto label_2ff50c;
        case 0x2ff53cu: goto label_2ff53c;
        case 0x2ff564u: goto label_2ff564;
        case 0x2ff574u: goto label_2ff574;
        case 0x2ff594u: goto label_2ff594;
        case 0x2ff5b4u: goto label_2ff5b4;
        case 0x2ff5ccu: goto label_2ff5cc;
        case 0x2ff5f8u: goto label_2ff5f8;
        case 0x2ff624u: goto label_2ff624;
        case 0x2ff650u: goto label_2ff650;
        case 0x2ff664u: goto label_2ff664;
        case 0x2ff67cu: goto label_2ff67c;
        case 0x2ff6b4u: goto label_2ff6b4;
        case 0x2ff6c4u: goto label_2ff6c4;
        case 0x2ff6dcu: goto label_2ff6dc;
        case 0x2ff6e8u: goto label_2ff6e8;
        case 0x2ff714u: goto label_2ff714;
        case 0x2ff718u: goto label_2ff718;
        case 0x2ff72cu: goto label_2ff72c;
        case 0x2ff73cu: goto label_2ff73c;
        case 0x2ff768u: goto label_2ff768;
        case 0x2ff7c8u: goto label_2ff7c8;
        case 0x2ff7ecu: goto label_2ff7ec;
        case 0x2ff7fcu: goto label_2ff7fc;
        case 0x2ff820u: goto label_2ff820;
        case 0x2ff864u: goto label_2ff864;
        case 0x2ff888u: goto label_2ff888;
        case 0x2ff89cu: goto label_2ff89c;
        case 0x2ff8e0u: goto label_2ff8e0;
        case 0x2ff910u: goto label_2ff910;
        case 0x2ff924u: goto label_2ff924;
        case 0x2ff980u: goto label_2ff980;
        case 0x2ff990u: goto label_2ff990;
        case 0x2ff9b0u: goto label_2ff9b0;
        case 0x2ff9e8u: goto label_2ff9e8;
        case 0x2ffa1cu: goto label_2ffa1c;
        case 0x2ffa34u: goto label_2ffa34;
        case 0x2ffa54u: goto label_2ffa54;
        case 0x2ffa64u: goto label_2ffa64;
        case 0x2ffa80u: goto label_2ffa80;
        case 0x2ffa98u: goto label_2ffa98;
        case 0x2ffad8u: goto label_2ffad8;
        case 0x2ffae8u: goto label_2ffae8;
        case 0x2ffb0cu: goto label_2ffb0c;
        case 0x2ffb20u: goto label_2ffb20;
        case 0x2ffb40u: goto label_2ffb40;
        case 0x2ffb44u: goto label_2ffb44;
        case 0x2ffb58u: goto label_2ffb58;
        case 0x2ffb68u: goto label_2ffb68;
        case 0x2ffbb8u: goto label_2ffbb8;
        case 0x2ffbecu: goto label_2ffbec;
        case 0x2ffc18u: goto label_2ffc18;
        case 0x2ffc3cu: goto label_2ffc3c;
        case 0x2ffc70u: goto label_2ffc70;
        case 0x2ffca4u: goto label_2ffca4;
        case 0x2ffcb4u: goto label_2ffcb4;
        case 0x2ffcc8u: goto label_2ffcc8;
        case 0x2ffcf4u: goto label_2ffcf4;
        case 0x2ffd08u: goto label_2ffd08;
        case 0x2ffd20u: goto label_2ffd20;
        case 0x2ffd34u: goto label_2ffd34;
        case 0x2ffd48u: goto label_2ffd48;
        case 0x2ffd90u: goto label_2ffd90;
        case 0x2ffda0u: goto label_2ffda0;
        case 0x2ffdc0u: goto label_2ffdc0;
        case 0x2ffde4u: goto label_2ffde4;
        case 0x2ffe18u: goto label_2ffe18;
        case 0x2ffe28u: goto label_2ffe28;
        case 0x2ffe44u: goto label_2ffe44;
        case 0x2ffe54u: goto label_2ffe54;
        case 0x2ffe80u: goto label_2ffe80;
        case 0x2ffe90u: goto label_2ffe90;
        case 0x2ffea4u: goto label_2ffea4;
        case 0x2ffebcu: goto label_2ffebc;
        case 0x2fff10u: goto label_2fff10;
        case 0x2fff18u: goto label_2fff18;
        case 0x2fff30u: goto label_2fff30;
        case 0x2fff3cu: goto label_2fff3c;
        case 0x2fff60u: goto label_2fff60;
        case 0x2fff78u: goto label_2fff78;
        case 0x2fffa4u: goto label_2fffa4;
        case 0x2fffb8u: goto label_2fffb8;
        case 0x2fffc8u: goto label_2fffc8;
        case 0x300000u: goto label_300000;
        case 0x300050u: goto label_300050;
        case 0x30007cu: goto label_30007c;
        case 0x300090u: goto label_300090;
        case 0x3000acu: goto label_3000ac;
        case 0x3000c8u: goto label_3000c8;
        case 0x3000e0u: goto label_3000e0;
        case 0x300110u: goto label_300110;
        case 0x300120u: goto label_300120;
        case 0x300144u: goto label_300144;
        case 0x300188u: goto label_300188;
        case 0x30019cu: goto label_30019c;
        case 0x3001b4u: goto label_3001b4;
        case 0x3001d0u: goto label_3001d0;
        case 0x3001f0u: goto label_3001f0;
        case 0x300200u: goto label_300200;
        case 0x300220u: goto label_300220;
        case 0x300248u: goto label_300248;
        case 0x30025cu: goto label_30025c;
        case 0x300284u: goto label_300284;
        case 0x300298u: goto label_300298;
        case 0x3002a8u: goto label_3002a8;
        case 0x3002c8u: goto label_3002c8;
        case 0x30030cu: goto label_30030c;
        case 0x30032cu: goto label_30032c;
        case 0x30035cu: goto label_30035c;
        case 0x300374u: goto label_300374;
        case 0x300388u: goto label_300388;
        case 0x3003b0u: goto label_3003b0;
        case 0x3003c4u: goto label_3003c4;
        case 0x3003ecu: goto label_3003ec;
        case 0x3003fcu: goto label_3003fc;
        case 0x300424u: goto label_300424;
        case 0x30043cu: goto label_30043c;
        case 0x300460u: goto label_300460;
        case 0x300478u: goto label_300478;
        case 0x3004a4u: goto label_3004a4;
        case 0x3004b8u: goto label_3004b8;
        case 0x3004c8u: goto label_3004c8;
        case 0x300500u: goto label_300500;
        case 0x300550u: goto label_300550;
        case 0x30057cu: goto label_30057c;
        case 0x300590u: goto label_300590;
        case 0x3005acu: goto label_3005ac;
        case 0x3005c8u: goto label_3005c8;
        case 0x3005e0u: goto label_3005e0;
        default: break;
    }

    ctx->pc = 0x2ff050u;

    // 0x2ff050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ff050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ff054: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ff054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff058: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ff058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ff05c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ff05cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff060: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x2ff060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2ff064: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x2ff064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ff068: 0xc047b8e  jal         func_11EE38
    ctx->pc = 0x2FF068u;
    SET_GPR_U32(ctx, 31, 0x2FF070u);
    ctx->pc = 0x2FF06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF068u;
    // 0x2ff06c: 0x27a80018  addiu       $t0, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE38u, 0x2FF068u, 0x2FF070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF070u;
label_2ff070:
    // 0x2ff070: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ff070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff074: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ff074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff078: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FF078u;
    SET_GPR_U32(ctx, 31, 0x2FF080u);
    ctx->pc = 0x2FF07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF078u;
    // 0x2ff07c: 0x27a60014  addiu       $a2, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED18u, 0x2FF078u, 0x2FF080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF080u;
label_2ff080:
    // 0x2ff080: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x2ff080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2ff084: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2ff084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ff088: 0x50440007  beql        $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FF088u;
    {
        const bool branch_taken_0x2ff088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2ff088) {
            ctx->pc = 0x2FF08Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF088u;
            // 0x2ff08c: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF0A8u;
            goto label_2ff0a8;
        }
    }
    ctx->pc = 0x2FF090u;
    // 0x2ff090: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ff090u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ff094: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2ff094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2ff098: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x2FF098u;
    SET_GPR_U32(ctx, 31, 0x2FF0A0u);
    ctx->pc = 0x2FF09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF098u;
    // 0x2ff09c: 0x24a5ec50  addiu       $a1, $a1, -0x13B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x2FF098u, 0x2FF0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF0A0u;
label_2ff0a0:
    // 0x2ff0a0: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2FF0A0u;
    {
        const bool branch_taken_0x2ff0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF0A0u;
        // 0x2ff0a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff0a0) {
            ctx->pc = 0x2FF1A4u;
            goto label_2ff1a4;
        }
    }
    ctx->pc = 0x2FF0A8u;
label_2ff0a8:
    // 0x2ff0a8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2ff0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2ff0ac: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x2ff0acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ff0b0: 0x50200008  beql        $at, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FF0B0u;
    {
        const bool branch_taken_0x2ff0b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff0b0) {
            ctx->pc = 0x2FF0B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF0B0u;
            // 0x2ff0b4: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF0D4u;
            goto label_2ff0d4;
        }
    }
    ctx->pc = 0x2FF0B8u;
    // 0x2ff0b8: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ff0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ff0bc: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2ff0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2ff0c0: 0x24a5ec70  addiu       $a1, $a1, -0x1390
    ctx->pc = 0x2ff0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962288));
    // 0x2ff0c4: 0xc0bf89c  jal         func_2FE270
    ctx->pc = 0x2FF0C4u;
    SET_GPR_U32(ctx, 31, 0x2FF0CCu);
    ctx->pc = 0x2FF0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF0C4u;
    // 0x2ff0c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE270u, 0x2FF0C4u, 0x2FF0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF0CCu;
label_2ff0cc:
    // 0x2ff0cc: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2FF0CCu;
    {
        const bool branch_taken_0x2ff0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff0cc) {
            ctx->pc = 0x2FF1A0u;
            goto label_2ff1a0;
        }
    }
    ctx->pc = 0x2FF0D4u;
label_2ff0d4:
    // 0x2ff0d4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FF0D4u;
    {
        const bool branch_taken_0x2ff0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ff0d4) {
            ctx->pc = 0x2FF0D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF0D4u;
            // 0x2ff0d8: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF0F4u;
            goto label_2ff0f4;
        }
    }
    ctx->pc = 0x2FF0DCu;
    // 0x2ff0dc: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ff0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ff0e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ff0e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff0e4: 0xc0bf89c  jal         func_2FE270
    ctx->pc = 0x2FF0E4u;
    SET_GPR_U32(ctx, 31, 0x2FF0ECu);
    ctx->pc = 0x2FF0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF0E4u;
    // 0x2ff0e8: 0x24a5ee10  addiu       $a1, $a1, -0x11F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE270u, 0x2FF0E4u, 0x2FF0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF0ECu;
label_2ff0ec:
    // 0x2ff0ec: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2FF0ECu;
    {
        const bool branch_taken_0x2ff0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff0ec) {
            ctx->pc = 0x2FF1A0u;
            goto label_2ff1a0;
        }
    }
    ctx->pc = 0x2FF0F4u;
label_2ff0f4:
    // 0x2ff0f4: 0x284100e1  slti        $at, $v0, 0xE1
    ctx->pc = 0x2ff0f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)225) ? 1 : 0);
    // 0x2ff0f8: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
    ctx->pc = 0x2FF0F8u;
    {
        const bool branch_taken_0x2ff0f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff0f8) {
            ctx->pc = 0x2FF190u;
            goto label_2ff190;
        }
    }
    ctx->pc = 0x2FF100u;
    // 0x2ff100: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2ff100u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2ff104: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ff104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff108: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ff108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff10c: 0x24c630e0  addiu       $a2, $a2, 0x30E0
    ctx->pc = 0x2ff10cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12512));
    // 0x2ff110: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ff110u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff114: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2ff114u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ff118: 0xc047c0a  jal         func_11F028
    ctx->pc = 0x2FF118u;
    SET_GPR_U32(ctx, 31, 0x2FF120u);
    ctx->pc = 0x2FF11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF118u;
    // 0x2ff11c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F028u, 0x2FF118u, 0x2FF120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF120u;
label_2ff120:
    // 0x2ff120: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ff120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff124: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ff124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff128: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FF128u;
    SET_GPR_U32(ctx, 31, 0x2FF130u);
    ctx->pc = 0x2FF12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF128u;
    // 0x2ff12c: 0x27a60014  addiu       $a2, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED18u, 0x2FF128u, 0x2FF130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF130u;
label_2ff130:
    // 0x2ff130: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2ff130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2ff134: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FF134u;
    {
        const bool branch_taken_0x2ff134 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2ff134) {
            ctx->pc = 0x2FF154u;
            goto label_2ff154;
        }
    }
    ctx->pc = 0x2FF13Cu;
    // 0x2ff13c: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ff13cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ff140: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2ff140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ff144: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x2FF144u;
    SET_GPR_U32(ctx, 31, 0x2FF14Cu);
    ctx->pc = 0x2FF148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF144u;
    // 0x2ff148: 0x24a5ec50  addiu       $a1, $a1, -0x13B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x2FF144u, 0x2FF14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF14Cu;
label_2ff14c:
    // 0x2ff14c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2FF14Cu;
    {
        const bool branch_taken_0x2ff14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff14c) {
            ctx->pc = 0x2FF1A0u;
            goto label_2ff1a0;
        }
    }
    ctx->pc = 0x2FF154u;
label_2ff154:
    // 0x2ff154: 0xc0bfaa0  jal         func_2FEA80
    ctx->pc = 0x2FF154u;
    SET_GPR_U32(ctx, 31, 0x2FF15Cu);
    ctx->pc = 0x2FEA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEA80u, 0x2FF154u, 0x2FF15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF15Cu;
label_2ff15c:
    // 0x2ff15c: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2FF15Cu;
    {
        const bool branch_taken_0x2ff15c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2ff15c) {
            ctx->pc = 0x2FF190u;
            goto label_2ff190;
        }
    }
    ctx->pc = 0x2FF164u;
    // 0x2ff164: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2ff164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ff168: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ff168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ff16c: 0x284100e1  slti        $at, $v0, 0xE1
    ctx->pc = 0x2ff16cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)225) ? 1 : 0);
    // 0x2ff170: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FF170u;
    {
        const bool branch_taken_0x2ff170 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff170) {
            ctx->pc = 0x2FF190u;
            goto label_2ff190;
        }
    }
    ctx->pc = 0x2FF178u;
    // 0x2ff178: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ff178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ff17c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2ff17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ff180: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x2FF180u;
    SET_GPR_U32(ctx, 31, 0x2FF188u);
    ctx->pc = 0x2FF184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF180u;
    // 0x2ff184: 0x24a5ec50  addiu       $a1, $a1, -0x13B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x2FF180u, 0x2FF188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF188u;
label_2ff188:
    // 0x2ff188: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FF188u;
    {
        const bool branch_taken_0x2ff188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff188) {
            ctx->pc = 0x2FF1A0u;
            goto label_2ff1a0;
        }
    }
    ctx->pc = 0x2FF190u;
label_2ff190:
    // 0x2ff190: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ff190u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ff194: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2ff194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ff198: 0xc0bf7fc  jal         func_2FDFF0
    ctx->pc = 0x2FF198u;
    SET_GPR_U32(ctx, 31, 0x2FF1A0u);
    ctx->pc = 0x2FF19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF198u;
    // 0x2ff19c: 0x24a5f1b0  addiu       $a1, $a1, -0xE50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDFF0u, 0x2FF198u, 0x2FF1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF1A0u;
label_2ff1a0:
    // 0x2ff1a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ff1a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ff1a4:
    // 0x2ff1a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF1A4u;
        // 0x2ff1a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF1A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF1ACu;
    // 0x2ff1ac: 0x0  nop
    ctx->pc = 0x2ff1acu;
    // NOP
    // 0x2ff1b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ff1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ff1b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ff1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ff1b8: 0xc0bf918  jal         func_2FE460
    ctx->pc = 0x2FF1B8u;
    SET_GPR_U32(ctx, 31, 0x2FF1C0u);
    ctx->pc = 0x2FE460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE460u, 0x2FF1B8u, 0x2FF1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF1C0u;
label_2ff1c0:
    // 0x2ff1c0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FF1C0u;
    {
        const bool branch_taken_0x2ff1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff1c0) {
            ctx->pc = 0x2FF1C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF1C0u;
            // 0x2ff1c4: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF1DCu;
            goto label_2ff1dc;
        }
    }
    ctx->pc = 0x2FF1C8u;
    // 0x2ff1c8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2ff1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ff1cc: 0xc0bf818  jal         func_2FE060
    ctx->pc = 0x2FF1CCu;
    SET_GPR_U32(ctx, 31, 0x2FF1D4u);
    ctx->pc = 0x2FF1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF1CCu;
    // 0x2ff1d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE060u, 0x2FF1CCu, 0x2FF1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF1D4u;
label_2ff1d4:
    // 0x2ff1d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2FF1D4u;
    {
        const bool branch_taken_0x2ff1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF1D4u;
        // 0x2ff1d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff1d4) {
            ctx->pc = 0x2FF1E8u;
            goto label_2ff1e8;
        }
    }
    ctx->pc = 0x2FF1DCu;
label_2ff1dc:
    // 0x2ff1dc: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x2FF1DCu;
    SET_GPR_U32(ctx, 31, 0x2FF1E4u);
    ctx->pc = 0x2FF1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF1DCu;
    // 0x2ff1e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x2FF1DCu, 0x2FF1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF1E4u;
label_2ff1e4:
    // 0x2ff1e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ff1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ff1e8:
    // 0x2ff1e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF1E8u;
        // 0x2ff1ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF1E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF1F0u;
    // 0x2ff1f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ff1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ff1f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ff1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ff1f8: 0xc069184  jal         func_1A4610
    ctx->pc = 0x2FF1F8u;
    SET_GPR_U32(ctx, 31, 0x2FF200u);
    ctx->pc = 0x2FF1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF1F8u;
    // 0x2ff1fc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4610u, 0x2FF1F8u, 0x2FF200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF200u;
label_2ff200:
    // 0x2ff200: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ff200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ff204: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x2ff204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x2ff208: 0xc0bf40c  jal         func_2FD030
    ctx->pc = 0x2FF208u;
    SET_GPR_U32(ctx, 31, 0x2FF210u);
    ctx->pc = 0x2FF20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF208u;
    // 0x2ff20c: 0xac439728  sw          $v1, -0x68D8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940456), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD030u, 0x2FF208u, 0x2FF210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF210u;
label_2ff210:
    // 0x2ff210: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x2ff210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x2ff214: 0xc0bf7e8  jal         func_2FDFA0
    ctx->pc = 0x2FF214u;
    SET_GPR_U32(ctx, 31, 0x2FF21Cu);
    ctx->pc = 0x2FF218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF214u;
    // 0x2ff218: 0x2484f230  addiu       $a0, $a0, -0xDD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDFA0u, 0x2FF214u, 0x2FF21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF21Cu;
label_2ff21c:
    // 0x2ff21c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ff21cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ff220: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF220u;
        // 0x2ff224: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF228u;
    // 0x2ff228: 0x0  nop
    ctx->pc = 0x2ff228u;
    // NOP
    // 0x2ff22c: 0x0  nop
    ctx->pc = 0x2ff22cu;
    // NOP
    // 0x2ff230: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ff230u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ff234: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x2ff234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2ff238: 0x24a5f250  addiu       $a1, $a1, -0xDB0
    ctx->pc = 0x2ff238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963792));
    // 0x2ff23c: 0x80bf89c  j           func_2FE270
    ctx->pc = 0x2FF23Cu;
    ctx->pc = 0x2FF240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF23Cu;
    // 0x2ff240: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE270u;
    sub_002FE270_0x2fe270(rdram, ctx, runtime); return;
    ctx->pc = 0x2FF244u;
    // 0x2ff244: 0x0  nop
    ctx->pc = 0x2ff244u;
    // NOP
    // 0x2ff248: 0x0  nop
    ctx->pc = 0x2ff248u;
    // NOP
    // 0x2ff24c: 0x0  nop
    ctx->pc = 0x2ff24cu;
    // NOP
    // 0x2ff250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ff250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ff254: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ff254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ff258: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ff258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ff25c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ff25cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ff260:
    // 0x2ff260: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ff260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ff264:
    // 0x2ff264: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ff264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff268: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x2ff268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2ff26c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ff26cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff270: 0xc047b8e  jal         func_11EE38
    ctx->pc = 0x2FF270u;
    SET_GPR_U32(ctx, 31, 0x2FF278u);
    ctx->pc = 0x2FF274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF270u;
    // 0x2ff274: 0x27a80028  addiu       $t0, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE38u, 0x2FF270u, 0x2FF278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF278u;
label_2ff278:
    // 0x2ff278: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ff278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff27c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ff27cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff280: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FF280u;
    SET_GPR_U32(ctx, 31, 0x2FF288u);
    ctx->pc = 0x2FF284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF280u;
    // 0x2ff284: 0x27a60024  addiu       $a2, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED18u, 0x2FF280u, 0x2FF288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF288u;
label_2ff288:
    // 0x2ff288: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x2ff288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2ff28c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ff28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ff290: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2FF290u;
    {
        const bool branch_taken_0x2ff290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ff290) {
            ctx->pc = 0x2FF294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF290u;
            // 0x2ff294: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF2BCu;
            goto label_2ff2bc;
        }
    }
    ctx->pc = 0x2FF298u;
    // 0x2ff298: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ff298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ff29c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ff29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ff2a0: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2ff2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2ff2a4: 0x24a5f230  addiu       $a1, $a1, -0xDD0
    ctx->pc = 0x2ff2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963760));
    // 0x2ff2a8: 0xa0430c20  sb          $v1, 0xC20($v0)
    ctx->pc = 0x2ff2a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3104), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ff2ac: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x2FF2ACu;
    SET_GPR_U32(ctx, 31, 0x2FF2B4u);
    ctx->pc = 0x2FF2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF2ACu;
    // 0x2ff2b0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x2FF2ACu, 0x2FF2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF2B4u;
label_2ff2b4:
    // 0x2ff2b4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2FF2B4u;
    {
        const bool branch_taken_0x2ff2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF2B4u;
        // 0x2ff2b8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff2b4) {
            ctx->pc = 0x2FF3B8u;
            goto label_2ff3b8;
        }
    }
    ctx->pc = 0x2FF2BCu;
label_2ff2bc:
    // 0x2ff2bc: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2ff2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2ff2c0: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2FF2C0u;
    {
        const bool branch_taken_0x2ff2c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ff2c0) {
            ctx->pc = 0x2FF368u;
            goto label_2ff368;
        }
    }
    ctx->pc = 0x2FF2C8u;
    // 0x2ff2c8: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2FF2C8u;
    {
        const bool branch_taken_0x2ff2c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff2c8) {
            ctx->pc = 0x2FF320u;
            goto label_2ff320;
        }
    }
    ctx->pc = 0x2FF2D0u;
    // 0x2ff2d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ff2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ff2d4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FF2D4u;
    {
        const bool branch_taken_0x2ff2d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ff2d4) {
            ctx->pc = 0x2FF2E8u;
            goto label_2ff2e8;
        }
    }
    ctx->pc = 0x2FF2DCu;
    // 0x2ff2dc: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2FF2DCu;
    {
        const bool branch_taken_0x2ff2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF2DCu;
        // 0x2ff2e0: 0x3c050030  lui         $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff2dc) {
            ctx->pc = 0x2FF3A8u;
            goto label_2ff3a8;
        }
    }
    ctx->pc = 0x2FF2E4u;
    // 0x2ff2e4: 0x0  nop
    ctx->pc = 0x2ff2e4u;
    // NOP
label_2ff2e8:
    // 0x2ff2e8: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2ff2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2ff2ec: 0x90420c20  lbu         $v0, 0xC20($v0)
    ctx->pc = 0x2ff2ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3104)));
    // 0x2ff2f0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FF2F0u;
    {
        const bool branch_taken_0x2ff2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff2f0) {
            ctx->pc = 0x2FF2F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF2F0u;
            // 0x2ff2f4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF314u;
            goto label_2ff314;
        }
    }
    ctx->pc = 0x2FF2F8u;
    // 0x2ff2f8: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ff2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ff2fc: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x2ff2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2ff300: 0x24a5f250  addiu       $a1, $a1, -0xDB0
    ctx->pc = 0x2ff300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963792));
    // 0x2ff304: 0xc0bf89c  jal         func_2FE270
    ctx->pc = 0x2FF304u;
    SET_GPR_U32(ctx, 31, 0x2FF30Cu);
    ctx->pc = 0x2FF308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF304u;
    // 0x2ff308: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE270u, 0x2FF304u, 0x2FF30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF30Cu;
label_2ff30c:
    // 0x2ff30c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2FF30Cu;
    {
        const bool branch_taken_0x2ff30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff30c) {
            ctx->pc = 0x2FF3B4u;
            goto label_2ff3b4;
        }
    }
    ctx->pc = 0x2FF314u;
label_2ff314:
    // 0x2ff314: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2ff314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2ff318: 0xa0430c20  sb          $v1, 0xC20($v0)
    ctx->pc = 0x2ff318u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3104), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ff31c: 0x0  nop
    ctx->pc = 0x2ff31cu;
    // NOP
label_2ff320:
    // 0x2ff320: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2ff320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ff324: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2FF324u;
    {
        const bool branch_taken_0x2ff324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ff324) {
            ctx->pc = 0x2FF354u;
            goto label_2ff354;
        }
    }
    ctx->pc = 0x2FF32Cu;
    // 0x2ff32c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ff32cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2ff330: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x2ff330u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2ff334: 0x5440ffcb  bnel        $v0, $zero, . + 4 + (-0x35 << 2)
    ctx->pc = 0x2FF334u;
    {
        const bool branch_taken_0x2ff334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ff334) {
            ctx->pc = 0x2FF338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF334u;
            // 0x2ff338: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF264u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ff264;
        }
    }
    ctx->pc = 0x2FF33Cu;
    // 0x2ff33c: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ff33cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ff340: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2ff340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2ff344: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x2FF344u;
    SET_GPR_U32(ctx, 31, 0x2FF34Cu);
    ctx->pc = 0x2FF348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF344u;
    // 0x2ff348: 0x24a5f230  addiu       $a1, $a1, -0xDD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x2FF344u, 0x2FF34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF34Cu;
label_2ff34c:
    // 0x2ff34c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2FF34Cu;
    {
        const bool branch_taken_0x2ff34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff34c) {
            ctx->pc = 0x2FF3B4u;
            goto label_2ff3b4;
        }
    }
    ctx->pc = 0x2FF354u;
label_2ff354:
    // 0x2ff354: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x2ff354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x2ff358: 0xc082674  jal         func_2099D0
    ctx->pc = 0x2FF358u;
    SET_GPR_U32(ctx, 31, 0x2FF360u);
    ctx->pc = 0x2FF35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF358u;
    // 0x2ff35c: 0x2484f3d0  addiu       $a0, $a0, -0xC30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x2FF358u, 0x2FF360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF360u;
label_2ff360:
    // 0x2ff360: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2FF360u;
    {
        const bool branch_taken_0x2ff360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff360) {
            ctx->pc = 0x2FF3B4u;
            goto label_2ff3b4;
        }
    }
    ctx->pc = 0x2FF368u;
label_2ff368:
    // 0x2ff368: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2ff368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2ff36c: 0x90420c20  lbu         $v0, 0xC20($v0)
    ctx->pc = 0x2ff36cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3104)));
    // 0x2ff370: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FF370u;
    {
        const bool branch_taken_0x2ff370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff370) {
            ctx->pc = 0x2FF374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF370u;
            // 0x2ff374: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF394u;
            goto label_2ff394;
        }
    }
    ctx->pc = 0x2FF378u;
    // 0x2ff378: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ff378u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ff37c: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x2ff37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2ff380: 0x24a5f250  addiu       $a1, $a1, -0xDB0
    ctx->pc = 0x2ff380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963792));
    // 0x2ff384: 0xc0bf89c  jal         func_2FE270
    ctx->pc = 0x2FF384u;
    SET_GPR_U32(ctx, 31, 0x2FF38Cu);
    ctx->pc = 0x2FF388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF384u;
    // 0x2ff388: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE270u, 0x2FF384u, 0x2FF38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF38Cu;
label_2ff38c:
    // 0x2ff38c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2FF38Cu;
    {
        const bool branch_taken_0x2ff38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff38c) {
            ctx->pc = 0x2FF3A0u;
            goto label_2ff3a0;
        }
    }
    ctx->pc = 0x2FF394u;
label_2ff394:
    // 0x2ff394: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2ff394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2ff398: 0x1000ffb1  b           . + 4 + (-0x4F << 2)
    ctx->pc = 0x2FF398u;
    {
        const bool branch_taken_0x2ff398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF398u;
        // 0x2ff39c: 0xa0430c20  sb          $v1, 0xC20($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 3104), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff398) {
            ctx->pc = 0x2FF260u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ff260;
        }
    }
    ctx->pc = 0x2FF3A0u;
label_2ff3a0:
    // 0x2ff3a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2FF3A0u;
    {
        const bool branch_taken_0x2ff3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff3a0) {
            ctx->pc = 0x2FF3B4u;
            goto label_2ff3b4;
        }
    }
    ctx->pc = 0x2FF3A8u;
label_2ff3a8:
    // 0x2ff3a8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2ff3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ff3ac: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x2FF3ACu;
    SET_GPR_U32(ctx, 31, 0x2FF3B4u);
    ctx->pc = 0x2FF3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF3ACu;
    // 0x2ff3b0: 0x24a5f230  addiu       $a1, $a1, -0xDD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x2FF3ACu, 0x2FF3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF3B4u;
label_2ff3b4:
    // 0x2ff3b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ff3b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ff3b8:
    // 0x2ff3b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ff3b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ff3bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF3BCu;
        // 0x2ff3c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF3BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF3C4u;
    // 0x2ff3c4: 0x0  nop
    ctx->pc = 0x2ff3c4u;
    // NOP
    // 0x2ff3c8: 0x0  nop
    ctx->pc = 0x2ff3c8u;
    // NOP
    // 0x2ff3cc: 0x0  nop
    ctx->pc = 0x2ff3ccu;
    // NOP
    // 0x2ff3d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ff3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ff3d4: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2ff3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2ff3d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ff3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ff3dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ff3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff3e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ff3e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff3e4: 0x24c630e0  addiu       $a2, $a2, 0x30E0
    ctx->pc = 0x2ff3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12512));
    // 0x2ff3e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ff3e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff3ec: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2ff3ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ff3f0: 0xc047c0a  jal         func_11F028
    ctx->pc = 0x2FF3F0u;
    SET_GPR_U32(ctx, 31, 0x2FF3F8u);
    ctx->pc = 0x2FF3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF3F0u;
    // 0x2ff3f4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F028u, 0x2FF3F0u, 0x2FF3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF3F8u;
label_2ff3f8:
    // 0x2ff3f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ff3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff3fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ff3fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff400: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FF400u;
    SET_GPR_U32(ctx, 31, 0x2FF408u);
    ctx->pc = 0x2FF404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF400u;
    // 0x2ff404: 0x27a6001c  addiu       $a2, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED18u, 0x2FF400u, 0x2FF408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF408u;
label_2ff408:
    // 0x2ff408: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x2ff408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2ff40c: 0x2841fff6  slti        $at, $v0, -0xA
    ctx->pc = 0x2ff40cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967286) ? 1 : 0);
    // 0x2ff410: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FF410u;
    {
        const bool branch_taken_0x2ff410 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff410) {
            ctx->pc = 0x2FF430u;
            goto label_2ff430;
        }
    }
    ctx->pc = 0x2FF418u;
    // 0x2ff418: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ff418u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ff41c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x2ff41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2ff420: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x2FF420u;
    SET_GPR_U32(ctx, 31, 0x2FF428u);
    ctx->pc = 0x2FF424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF420u;
    // 0x2ff424: 0x24a5f230  addiu       $a1, $a1, -0xDD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x2FF420u, 0x2FF428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF428u;
label_2ff428:
    // 0x2ff428: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2FF428u;
    {
        const bool branch_taken_0x2ff428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF428u;
        // 0x2ff42c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff428) {
            ctx->pc = 0x2FF460u;
            goto label_2ff460;
        }
    }
    ctx->pc = 0x2FF430u;
label_2ff430:
    // 0x2ff430: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FF430u;
    {
        const bool branch_taken_0x2ff430 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2ff430) {
            ctx->pc = 0x2FF450u;
            goto label_2ff450;
        }
    }
    ctx->pc = 0x2FF438u;
    // 0x2ff438: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ff438u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ff43c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2ff43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2ff440: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x2FF440u;
    SET_GPR_U32(ctx, 31, 0x2FF448u);
    ctx->pc = 0x2FF444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF440u;
    // 0x2ff444: 0x24a5f230  addiu       $a1, $a1, -0xDD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x2FF440u, 0x2FF448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF448u;
label_2ff448:
    // 0x2ff448: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2FF448u;
    {
        const bool branch_taken_0x2ff448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff448) {
            ctx->pc = 0x2FF45Cu;
            goto label_2ff45c;
        }
    }
    ctx->pc = 0x2FF450u;
label_2ff450:
    // 0x2ff450: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x2ff450u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x2ff454: 0xc082674  jal         func_2099D0
    ctx->pc = 0x2FF454u;
    SET_GPR_U32(ctx, 31, 0x2FF45Cu);
    ctx->pc = 0x2FF458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF454u;
    // 0x2ff458: 0x2484f470  addiu       $a0, $a0, -0xB90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x2FF454u, 0x2FF45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF45Cu;
label_2ff45c:
    // 0x2ff45c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ff45cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ff460:
    // 0x2ff460: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF460u;
        // 0x2ff464: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF468u;
    // 0x2ff468: 0x0  nop
    ctx->pc = 0x2ff468u;
    // NOP
    // 0x2ff46c: 0x0  nop
    ctx->pc = 0x2ff46cu;
    // NOP
    // 0x2ff470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ff470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ff474: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ff474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ff478: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ff478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ff47c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ff47cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ff480:
    // 0x2ff480: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ff480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ff484:
    // 0x2ff484: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ff484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff488: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x2ff488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2ff48c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ff48cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff490: 0xc047b8e  jal         func_11EE38
    ctx->pc = 0x2FF490u;
    SET_GPR_U32(ctx, 31, 0x2FF498u);
    ctx->pc = 0x2FF494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF490u;
    // 0x2ff494: 0x27a80028  addiu       $t0, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE38u, 0x2FF490u, 0x2FF498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF498u;
label_2ff498:
    // 0x2ff498: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ff498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff49c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ff49cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff4a0: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FF4A0u;
    SET_GPR_U32(ctx, 31, 0x2FF4A8u);
    ctx->pc = 0x2FF4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF4A0u;
    // 0x2ff4a4: 0x27a60024  addiu       $a2, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED18u, 0x2FF4A0u, 0x2FF4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF4A8u;
label_2ff4a8:
    // 0x2ff4a8: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x2ff4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2ff4ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ff4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ff4b0: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FF4B0u;
    {
        const bool branch_taken_0x2ff4b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ff4b0) {
            ctx->pc = 0x2FF4B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF4B0u;
            // 0x2ff4b4: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF4D0u;
            goto label_2ff4d0;
        }
    }
    ctx->pc = 0x2FF4B8u;
    // 0x2ff4b8: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ff4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ff4bc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2ff4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ff4c0: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x2FF4C0u;
    SET_GPR_U32(ctx, 31, 0x2FF4C8u);
    ctx->pc = 0x2FF4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF4C0u;
    // 0x2ff4c4: 0x24a5f230  addiu       $a1, $a1, -0xDD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x2FF4C0u, 0x2FF4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF4C8u;
label_2ff4c8:
    // 0x2ff4c8: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x2FF4C8u;
    {
        const bool branch_taken_0x2ff4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF4C8u;
        // 0x2ff4cc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff4c8) {
            ctx->pc = 0x2FF628u;
            goto label_2ff628;
        }
    }
    ctx->pc = 0x2FF4D0u;
label_2ff4d0:
    // 0x2ff4d0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2ff4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2ff4d4: 0x1062003f  beq         $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2FF4D4u;
    {
        const bool branch_taken_0x2ff4d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ff4d4) {
            ctx->pc = 0x2FF5D4u;
            goto label_2ff5d4;
        }
    }
    ctx->pc = 0x2FF4DCu;
    // 0x2ff4dc: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2FF4DCu;
    {
        const bool branch_taken_0x2ff4dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff4dc) {
            ctx->pc = 0x2FF4E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF4DCu;
            // 0x2ff4e0: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF514u;
            goto label_2ff514;
        }
    }
    ctx->pc = 0x2FF4E4u;
    // 0x2ff4e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ff4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ff4e8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FF4E8u;
    {
        const bool branch_taken_0x2ff4e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ff4e8) {
            ctx->pc = 0x2FF4F8u;
            goto label_2ff4f8;
        }
    }
    ctx->pc = 0x2FF4F0u;
    // 0x2ff4f0: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2FF4F0u;
    {
        const bool branch_taken_0x2ff4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF4F0u;
        // 0x2ff4f4: 0x3c050030  lui         $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff4f0) {
            ctx->pc = 0x2FF618u;
            goto label_2ff618;
        }
    }
    ctx->pc = 0x2FF4F8u;
label_2ff4f8:
    // 0x2ff4f8: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ff4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ff4fc: 0x24a5f250  addiu       $a1, $a1, -0xDB0
    ctx->pc = 0x2ff4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963792));
    // 0x2ff500: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x2ff500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2ff504: 0xc0bf89c  jal         func_2FE270
    ctx->pc = 0x2FF504u;
    SET_GPR_U32(ctx, 31, 0x2FF50Cu);
    ctx->pc = 0x2FF508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF504u;
    // 0x2ff508: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE270u, 0x2FF504u, 0x2FF50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF50Cu;
label_2ff50c:
    // 0x2ff50c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2FF50Cu;
    {
        const bool branch_taken_0x2ff50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff50c) {
            ctx->pc = 0x2FF624u;
            goto label_2ff624;
        }
    }
    ctx->pc = 0x2FF514u;
label_2ff514:
    // 0x2ff514: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2FF514u;
    {
        const bool branch_taken_0x2ff514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ff514) {
            ctx->pc = 0x2FF544u;
            goto label_2ff544;
        }
    }
    ctx->pc = 0x2FF51Cu;
    // 0x2ff51c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ff51cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2ff520: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x2ff520u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2ff524: 0x5440ffd7  bnel        $v0, $zero, . + 4 + (-0x29 << 2)
    ctx->pc = 0x2FF524u;
    {
        const bool branch_taken_0x2ff524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ff524) {
            ctx->pc = 0x2FF528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF524u;
            // 0x2ff528: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF484u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ff484;
        }
    }
    ctx->pc = 0x2FF52Cu;
    // 0x2ff52c: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ff52cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ff530: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2ff530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2ff534: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x2FF534u;
    SET_GPR_U32(ctx, 31, 0x2FF53Cu);
    ctx->pc = 0x2FF538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF534u;
    // 0x2ff538: 0x24a5f230  addiu       $a1, $a1, -0xDD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x2FF534u, 0x2FF53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF53Cu;
label_2ff53c:
    // 0x2ff53c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2FF53Cu;
    {
        const bool branch_taken_0x2ff53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff53c) {
            ctx->pc = 0x2FF624u;
            goto label_2ff624;
        }
    }
    ctx->pc = 0x2FF544u;
label_2ff544:
    // 0x2ff544: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2ff544u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2ff548: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ff548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff54c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ff54cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff550: 0x24c630e0  addiu       $a2, $a2, 0x30E0
    ctx->pc = 0x2ff550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12512));
    // 0x2ff554: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ff554u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff558: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2ff558u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ff55c: 0xc047c0a  jal         func_11F028
    ctx->pc = 0x2FF55Cu;
    SET_GPR_U32(ctx, 31, 0x2FF564u);
    ctx->pc = 0x2FF560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF55Cu;
    // 0x2ff560: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F028u, 0x2FF55Cu, 0x2FF564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF564u;
label_2ff564:
    // 0x2ff564: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ff564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff568: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ff568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff56c: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FF56Cu;
    SET_GPR_U32(ctx, 31, 0x2FF574u);
    ctx->pc = 0x2FF570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF56Cu;
    // 0x2ff570: 0x27a60024  addiu       $a2, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED18u, 0x2FF56Cu, 0x2FF574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF574u;
label_2ff574:
    // 0x2ff574: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x2ff574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2ff578: 0x2841fff6  slti        $at, $v0, -0xA
    ctx->pc = 0x2ff578u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967286) ? 1 : 0);
    // 0x2ff57c: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FF57Cu;
    {
        const bool branch_taken_0x2ff57c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff57c) {
            ctx->pc = 0x2FF59Cu;
            goto label_2ff59c;
        }
    }
    ctx->pc = 0x2FF584u;
    // 0x2ff584: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ff584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ff588: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x2ff588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2ff58c: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x2FF58Cu;
    SET_GPR_U32(ctx, 31, 0x2FF594u);
    ctx->pc = 0x2FF590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF58Cu;
    // 0x2ff590: 0x24a5f230  addiu       $a1, $a1, -0xDD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x2FF58Cu, 0x2FF594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF594u;
label_2ff594:
    // 0x2ff594: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2FF594u;
    {
        const bool branch_taken_0x2ff594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff594) {
            ctx->pc = 0x2FF624u;
            goto label_2ff624;
        }
    }
    ctx->pc = 0x2FF59Cu;
label_2ff59c:
    // 0x2ff59c: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FF59Cu;
    {
        const bool branch_taken_0x2ff59c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2ff59c) {
            ctx->pc = 0x2FF5BCu;
            goto label_2ff5bc;
        }
    }
    ctx->pc = 0x2FF5A4u;
    // 0x2ff5a4: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ff5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ff5a8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2ff5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2ff5ac: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x2FF5ACu;
    SET_GPR_U32(ctx, 31, 0x2FF5B4u);
    ctx->pc = 0x2FF5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF5ACu;
    // 0x2ff5b0: 0x24a5f230  addiu       $a1, $a1, -0xDD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x2FF5ACu, 0x2FF5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF5B4u;
label_2ff5b4:
    // 0x2ff5b4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2FF5B4u;
    {
        const bool branch_taken_0x2ff5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff5b4) {
            ctx->pc = 0x2FF624u;
            goto label_2ff624;
        }
    }
    ctx->pc = 0x2FF5BCu;
label_2ff5bc:
    // 0x2ff5bc: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ff5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ff5c0: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2ff5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2ff5c4: 0xc0bf7fc  jal         func_2FDFF0
    ctx->pc = 0x2FF5C4u;
    SET_GPR_U32(ctx, 31, 0x2FF5CCu);
    ctx->pc = 0x2FF5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF5C4u;
    // 0x2ff5c8: 0x24a5f640  addiu       $a1, $a1, -0x9C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDFF0u, 0x2FF5C4u, 0x2FF5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF5CCu;
label_2ff5cc:
    // 0x2ff5cc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2FF5CCu;
    {
        const bool branch_taken_0x2ff5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff5cc) {
            ctx->pc = 0x2FF624u;
            goto label_2ff624;
        }
    }
    ctx->pc = 0x2FF5D4u;
label_2ff5d4:
    // 0x2ff5d4: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2ff5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2ff5d8: 0x90420c20  lbu         $v0, 0xC20($v0)
    ctx->pc = 0x2ff5d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3104)));
    // 0x2ff5dc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FF5DCu;
    {
        const bool branch_taken_0x2ff5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff5dc) {
            ctx->pc = 0x2FF5E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF5DCu;
            // 0x2ff5e0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF600u;
            goto label_2ff600;
        }
    }
    ctx->pc = 0x2FF5E4u;
    // 0x2ff5e4: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ff5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ff5e8: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x2ff5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2ff5ec: 0x24a5f250  addiu       $a1, $a1, -0xDB0
    ctx->pc = 0x2ff5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963792));
    // 0x2ff5f0: 0xc0bf89c  jal         func_2FE270
    ctx->pc = 0x2FF5F0u;
    SET_GPR_U32(ctx, 31, 0x2FF5F8u);
    ctx->pc = 0x2FF5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF5F0u;
    // 0x2ff5f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE270u, 0x2FF5F0u, 0x2FF5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF5F8u;
label_2ff5f8:
    // 0x2ff5f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FF5F8u;
    {
        const bool branch_taken_0x2ff5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff5f8) {
            ctx->pc = 0x2FF610u;
            goto label_2ff610;
        }
    }
    ctx->pc = 0x2FF600u;
label_2ff600:
    // 0x2ff600: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2ff600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2ff604: 0x1000ff9e  b           . + 4 + (-0x62 << 2)
    ctx->pc = 0x2FF604u;
    {
        const bool branch_taken_0x2ff604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF604u;
        // 0x2ff608: 0xa0430c20  sb          $v1, 0xC20($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 3104), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff604) {
            ctx->pc = 0x2FF480u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ff480;
        }
    }
    ctx->pc = 0x2FF60Cu;
    // 0x2ff60c: 0x0  nop
    ctx->pc = 0x2ff60cu;
    // NOP
label_2ff610:
    // 0x2ff610: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2FF610u;
    {
        const bool branch_taken_0x2ff610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff610) {
            ctx->pc = 0x2FF624u;
            goto label_2ff624;
        }
    }
    ctx->pc = 0x2FF618u;
label_2ff618:
    // 0x2ff618: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2ff618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ff61c: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x2FF61Cu;
    SET_GPR_U32(ctx, 31, 0x2FF624u);
    ctx->pc = 0x2FF620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF61Cu;
    // 0x2ff620: 0x24a5f230  addiu       $a1, $a1, -0xDD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x2FF61Cu, 0x2FF624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF624u;
label_2ff624:
    // 0x2ff624: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ff624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ff628:
    // 0x2ff628: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ff628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ff62c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF62Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF62Cu;
        // 0x2ff630: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF62Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF634u;
    // 0x2ff634: 0x0  nop
    ctx->pc = 0x2ff634u;
    // NOP
    // 0x2ff638: 0x0  nop
    ctx->pc = 0x2ff638u;
    // NOP
    // 0x2ff63c: 0x0  nop
    ctx->pc = 0x2ff63cu;
    // NOP
    // 0x2ff640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ff640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ff644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ff644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ff648: 0xc0bf9dc  jal         func_2FE770
    ctx->pc = 0x2FF648u;
    SET_GPR_U32(ctx, 31, 0x2FF650u);
    ctx->pc = 0x2FE770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE770u, 0x2FF648u, 0x2FF650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF650u;
label_2ff650:
    // 0x2ff650: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FF650u;
    {
        const bool branch_taken_0x2ff650 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ff650) {
            ctx->pc = 0x2FF66Cu;
            goto label_2ff66c;
        }
    }
    ctx->pc = 0x2FF658u;
    // 0x2ff658: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2ff658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2ff65c: 0xc0bf818  jal         func_2FE060
    ctx->pc = 0x2FF65Cu;
    SET_GPR_U32(ctx, 31, 0x2FF664u);
    ctx->pc = 0x2FF660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF65Cu;
    // 0x2ff660: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE060u, 0x2FF65Cu, 0x2FF664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF664u;
label_2ff664:
    // 0x2ff664: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FF664u;
    {
        const bool branch_taken_0x2ff664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF664u;
        // 0x2ff668: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff664) {
            ctx->pc = 0x2FF680u;
            goto label_2ff680;
        }
    }
    ctx->pc = 0x2FF66Cu;
label_2ff66c:
    // 0x2ff66c: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ff66cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ff670: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x2ff670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2ff674: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x2FF674u;
    SET_GPR_U32(ctx, 31, 0x2FF67Cu);
    ctx->pc = 0x2FF678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF674u;
    // 0x2ff678: 0x24a5f230  addiu       $a1, $a1, -0xDD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x2FF674u, 0x2FF67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF67Cu;
label_2ff67c:
    // 0x2ff67c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ff67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ff680:
    // 0x2ff680: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF680u;
        // 0x2ff684: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF688u;
    // 0x2ff688: 0x0  nop
    ctx->pc = 0x2ff688u;
    // NOP
    // 0x2ff68c: 0x0  nop
    ctx->pc = 0x2ff68cu;
    // NOP
    // 0x2ff690: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ff690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ff694: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x2ff694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x2ff698: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ff698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ff69c: 0x9042b288  lbu         $v0, -0x4D78($v0)
    ctx->pc = 0x2ff69cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947464)));
    // 0x2ff6a0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FF6A0u;
    {
        const bool branch_taken_0x2ff6a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ff6a0) {
            ctx->pc = 0x2FF6A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF6A0u;
            // 0x2ff6a4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF6BCu;
            goto label_2ff6bc;
        }
    }
    ctx->pc = 0x2FF6A8u;
    // 0x2ff6a8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x2ff6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x2ff6ac: 0xc082674  jal         func_2099D0
    ctx->pc = 0x2FF6ACu;
    SET_GPR_U32(ctx, 31, 0x2FF6B4u);
    ctx->pc = 0x2FF6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF6ACu;
    // 0x2ff6b0: 0x2484da10  addiu       $a0, $a0, -0x25F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x2FF6ACu, 0x2FF6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF6B4u;
label_2ff6b4:
    // 0x2ff6b4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2FF6B4u;
    {
        const bool branch_taken_0x2ff6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF6B4u;
        // 0x2ff6b8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff6b4) {
            ctx->pc = 0x2FF6ECu;
            goto label_2ff6ec;
        }
    }
    ctx->pc = 0x2FF6BCu;
label_2ff6bc:
    // 0x2ff6bc: 0xc069184  jal         func_1A4610
    ctx->pc = 0x2FF6BCu;
    SET_GPR_U32(ctx, 31, 0x2FF6C4u);
    ctx->pc = 0x1A4610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4610u, 0x2FF6BCu, 0x2FF6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF6C4u;
label_2ff6c4:
    // 0x2ff6c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ff6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ff6c8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x2ff6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x2ff6cc: 0xac439728  sw          $v1, -0x68D8($v0)
    ctx->pc = 0x2ff6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940456), GPR_U32(ctx, 3));
    // 0x2ff6d0: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2ff6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2ff6d4: 0xc0bf40c  jal         func_2FD030
    ctx->pc = 0x2FF6D4u;
    SET_GPR_U32(ctx, 31, 0x2FF6DCu);
    ctx->pc = 0x2FF6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF6D4u;
    // 0x2ff6d8: 0xa0400c28  sb          $zero, 0xC28($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 3112), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD030u, 0x2FF6D4u, 0x2FF6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF6DCu;
label_2ff6dc:
    // 0x2ff6dc: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x2ff6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x2ff6e0: 0xc0bf7e8  jal         func_2FDFA0
    ctx->pc = 0x2FF6E0u;
    SET_GPR_U32(ctx, 31, 0x2FF6E8u);
    ctx->pc = 0x2FF6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF6E0u;
    // 0x2ff6e4: 0x2484f700  addiu       $a0, $a0, -0x900 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDFA0u, 0x2FF6E0u, 0x2FF6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF6E8u;
label_2ff6e8:
    // 0x2ff6e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ff6e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ff6ec:
    // 0x2ff6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF6ECu;
        // 0x2ff6f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF6F4u;
    // 0x2ff6f4: 0x0  nop
    ctx->pc = 0x2ff6f4u;
    // NOP
    // 0x2ff6f8: 0x0  nop
    ctx->pc = 0x2ff6f8u;
    // NOP
    // 0x2ff6fc: 0x0  nop
    ctx->pc = 0x2ff6fcu;
    // NOP
    // 0x2ff700: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ff700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ff704: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ff704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ff708: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ff708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ff70c: 0xc0bf528  jal         func_2FD4A0
    ctx->pc = 0x2FF70Cu;
    SET_GPR_U32(ctx, 31, 0x2FF714u);
    ctx->pc = 0x2FF710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF70Cu;
    // 0x2ff710: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD4A0u, 0x2FF70Cu, 0x2FF714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF714u;
label_2ff714:
    // 0x2ff714: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ff714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ff718:
    // 0x2ff718: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ff718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff71c: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x2ff71cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2ff720: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ff720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff724: 0xc047b8e  jal         func_11EE38
    ctx->pc = 0x2FF724u;
    SET_GPR_U32(ctx, 31, 0x2FF72Cu);
    ctx->pc = 0x2FF728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF724u;
    // 0x2ff728: 0x27a80028  addiu       $t0, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE38u, 0x2FF724u, 0x2FF72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF72Cu;
label_2ff72c:
    // 0x2ff72c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ff72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff730: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ff730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff734: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FF734u;
    SET_GPR_U32(ctx, 31, 0x2FF73Cu);
    ctx->pc = 0x2FF738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF734u;
    // 0x2ff738: 0x27a60024  addiu       $a2, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED18u, 0x2FF734u, 0x2FF73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF73Cu;
label_2ff73c:
    // 0x2ff73c: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x2ff73cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2ff740: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2ff740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ff744: 0x50a4000a  beql        $a1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2FF744u;
    {
        const bool branch_taken_0x2ff744 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2ff744) {
            ctx->pc = 0x2FF748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF744u;
            // 0x2ff748: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF770u;
            goto label_2ff770;
        }
    }
    ctx->pc = 0x2FF74Cu;
    // 0x2ff74c: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ff74cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ff750: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ff750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ff754: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2ff754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2ff758: 0x24a5fed0  addiu       $a1, $a1, -0x130
    ctx->pc = 0x2ff758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966992));
    // 0x2ff75c: 0xa0430c20  sb          $v1, 0xC20($v0)
    ctx->pc = 0x2ff75cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3104), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ff760: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x2FF760u;
    SET_GPR_U32(ctx, 31, 0x2FF768u);
    ctx->pc = 0x2FF764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF760u;
    // 0x2ff764: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x2FF760u, 0x2FF768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF768u;
label_2ff768:
    // 0x2ff768: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x2FF768u;
    {
        const bool branch_taken_0x2ff768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF768u;
        // 0x2ff76c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff768) {
            ctx->pc = 0x2FF928u;
            goto label_2ff928;
        }
    }
    ctx->pc = 0x2FF770u;
label_2ff770:
    // 0x2ff770: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2ff770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2ff774: 0x1062004b  beq         $v1, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x2FF774u;
    {
        const bool branch_taken_0x2ff774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ff774) {
            ctx->pc = 0x2FF8A4u;
            goto label_2ff8a4;
        }
    }
    ctx->pc = 0x2FF77Cu;
    // 0x2ff77c: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2FF77Cu;
    {
        const bool branch_taken_0x2ff77c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff77c) {
            ctx->pc = 0x2FF830u;
            goto label_2ff830;
        }
    }
    ctx->pc = 0x2FF784u;
    // 0x2ff784: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2ff784u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ff788: 0x10680003  beq         $v1, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FF788u;
    {
        const bool branch_taken_0x2ff788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        if (branch_taken_0x2ff788) {
            ctx->pc = 0x2FF798u;
            goto label_2ff798;
        }
    }
    ctx->pc = 0x2FF790u;
    // 0x2ff790: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2FF790u;
    {
        const bool branch_taken_0x2ff790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF790u;
        // 0x2ff794: 0x3c050030  lui         $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff790) {
            ctx->pc = 0x2FF918u;
            goto label_2ff918;
        }
    }
    ctx->pc = 0x2FF798u;
label_2ff798:
    // 0x2ff798: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2ff798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2ff79c: 0x90420c20  lbu         $v0, 0xC20($v0)
    ctx->pc = 0x2ff79cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3104)));
    // 0x2ff7a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ff7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ff7a4: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x2ff7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x2ff7a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FF7A8u;
    {
        const bool branch_taken_0x2ff7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF7A8u;
        // 0x2ff7ac: 0xa0640c28  sb          $a0, 0xC28($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 3112), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff7a8) {
            ctx->pc = 0x2FF7D0u;
            goto label_2ff7d0;
        }
    }
    ctx->pc = 0x2FF7B0u;
    // 0x2ff7b0: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ff7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ff7b4: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x2ff7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x2ff7b8: 0x24a5fab0  addiu       $a1, $a1, -0x550
    ctx->pc = 0x2ff7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965936));
    // 0x2ff7bc: 0x24c6fed0  addiu       $a2, $a2, -0x130
    ctx->pc = 0x2ff7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966992));
    // 0x2ff7c0: 0xc0bf89c  jal         func_2FE270
    ctx->pc = 0x2FF7C0u;
    SET_GPR_U32(ctx, 31, 0x2FF7C8u);
    ctx->pc = 0x2FF7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF7C0u;
    // 0x2ff7c4: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE270u, 0x2FF7C0u, 0x2FF7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF7C8u;
label_2ff7c8:
    // 0x2ff7c8: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x2FF7C8u;
    {
        const bool branch_taken_0x2ff7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff7c8) {
            ctx->pc = 0x2FF924u;
            goto label_2ff924;
        }
    }
    ctx->pc = 0x2FF7D0u;
label_2ff7d0:
    // 0x2ff7d0: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2ff7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2ff7d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ff7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff7d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ff7d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff7dc: 0x24c630e0  addiu       $a2, $a2, 0x30E0
    ctx->pc = 0x2ff7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12512));
    // 0x2ff7e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ff7e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff7e4: 0xc047c0a  jal         func_11F028
    ctx->pc = 0x2FF7E4u;
    SET_GPR_U32(ctx, 31, 0x2FF7ECu);
    ctx->pc = 0x2FF7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF7E4u;
    // 0x2ff7e8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F028u, 0x2FF7E4u, 0x2FF7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF7ECu;
label_2ff7ec:
    // 0x2ff7ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ff7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff7f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ff7f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff7f4: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FF7F4u;
    SET_GPR_U32(ctx, 31, 0x2FF7FCu);
    ctx->pc = 0x2FF7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF7F4u;
    // 0x2ff7f8: 0x27a60024  addiu       $a2, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED18u, 0x2FF7F4u, 0x2FF7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF7FCu;
label_2ff7fc:
    // 0x2ff7fc: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x2ff7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2ff800: 0x58400009  blezl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FF800u;
    {
        const bool branch_taken_0x2ff800 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ff800) {
            ctx->pc = 0x2FF804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF800u;
            // 0x2ff804: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF828u;
            goto label_2ff828;
        }
    }
    ctx->pc = 0x2FF808u;
    // 0x2ff808: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ff808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ff80c: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x2ff80cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x2ff810: 0x24a5fb30  addiu       $a1, $a1, -0x4D0
    ctx->pc = 0x2ff810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966064));
    // 0x2ff814: 0x24c6fed0  addiu       $a2, $a2, -0x130
    ctx->pc = 0x2ff814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966992));
    // 0x2ff818: 0xc0bf89c  jal         func_2FE270
    ctx->pc = 0x2FF818u;
    SET_GPR_U32(ctx, 31, 0x2FF820u);
    ctx->pc = 0x2FF81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF818u;
    // 0x2ff81c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE270u, 0x2FF818u, 0x2FF820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF820u;
label_2ff820:
    // 0x2ff820: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2FF820u;
    {
        const bool branch_taken_0x2ff820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff820) {
            ctx->pc = 0x2FF924u;
            goto label_2ff924;
        }
    }
    ctx->pc = 0x2FF828u;
label_2ff828:
    // 0x2ff828: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2ff828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2ff82c: 0xa0430c20  sb          $v1, 0xC20($v0)
    ctx->pc = 0x2ff82cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3104), (uint8_t)GPR_U32(ctx, 3));
label_2ff830:
    // 0x2ff830: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2ff830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ff834: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2FF834u;
    {
        const bool branch_taken_0x2ff834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ff834) {
            ctx->pc = 0x2FF86Cu;
            goto label_2ff86c;
        }
    }
    ctx->pc = 0x2FF83Cu;
    // 0x2ff83c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ff83cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2ff840: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x2ff840u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2ff844: 0x5440ffb4  bnel        $v0, $zero, . + 4 + (-0x4C << 2)
    ctx->pc = 0x2FF844u;
    {
        const bool branch_taken_0x2ff844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ff844) {
            ctx->pc = 0x2FF848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF844u;
            // 0x2ff848: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF718u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ff718;
        }
    }
    ctx->pc = 0x2FF84Cu;
    // 0x2ff84c: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ff84cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ff850: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x2ff850u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x2ff854: 0x24a5f960  addiu       $a1, $a1, -0x6A0
    ctx->pc = 0x2ff854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965600));
    // 0x2ff858: 0x24c6fed0  addiu       $a2, $a2, -0x130
    ctx->pc = 0x2ff858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966992));
    // 0x2ff85c: 0xc0bf89c  jal         func_2FE270
    ctx->pc = 0x2FF85Cu;
    SET_GPR_U32(ctx, 31, 0x2FF864u);
    ctx->pc = 0x2FF860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF85Cu;
    // 0x2ff860: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE270u, 0x2FF85Cu, 0x2FF864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF864u;
label_2ff864:
    // 0x2ff864: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2FF864u;
    {
        const bool branch_taken_0x2ff864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff864) {
            ctx->pc = 0x2FF924u;
            goto label_2ff924;
        }
    }
    ctx->pc = 0x2FF86Cu;
label_2ff86c:
    // 0x2ff86c: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2ff86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2ff870: 0x90420c28  lbu         $v0, 0xC28($v0)
    ctx->pc = 0x2ff870u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3112)));
    // 0x2ff874: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FF874u;
    {
        const bool branch_taken_0x2ff874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff874) {
            ctx->pc = 0x2FF890u;
            goto label_2ff890;
        }
    }
    ctx->pc = 0x2FF87Cu;
    // 0x2ff87c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x2ff87cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x2ff880: 0xc082674  jal         func_2099D0
    ctx->pc = 0x2FF880u;
    SET_GPR_U32(ctx, 31, 0x2FF888u);
    ctx->pc = 0x2FF884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF880u;
    // 0x2ff884: 0x2484fab0  addiu       $a0, $a0, -0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x2FF880u, 0x2FF888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF888u;
label_2ff888:
    // 0x2ff888: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2FF888u;
    {
        const bool branch_taken_0x2ff888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff888) {
            ctx->pc = 0x2FF924u;
            goto label_2ff924;
        }
    }
    ctx->pc = 0x2FF890u;
label_2ff890:
    // 0x2ff890: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x2ff890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x2ff894: 0xc082674  jal         func_2099D0
    ctx->pc = 0x2FF894u;
    SET_GPR_U32(ctx, 31, 0x2FF89Cu);
    ctx->pc = 0x2FF898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF894u;
    // 0x2ff898: 0x2484fb30  addiu       $a0, $a0, -0x4D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x2FF894u, 0x2FF89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF89Cu;
label_2ff89c:
    // 0x2ff89c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2FF89Cu;
    {
        const bool branch_taken_0x2ff89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff89c) {
            ctx->pc = 0x2FF924u;
            goto label_2ff924;
        }
    }
    ctx->pc = 0x2FF8A4u;
label_2ff8a4:
    // 0x2ff8a4: 0x14a40016  bne         $a1, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2FF8A4u;
    {
        const bool branch_taken_0x2ff8a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x2ff8a4) {
            ctx->pc = 0x2FF900u;
            goto label_2ff900;
        }
    }
    ctx->pc = 0x2FF8ACu;
    // 0x2ff8ac: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2ff8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2ff8b0: 0x90420c20  lbu         $v0, 0xC20($v0)
    ctx->pc = 0x2ff8b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3104)));
    // 0x2ff8b4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2FF8B4u;
    {
        const bool branch_taken_0x2ff8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff8b4) {
            ctx->pc = 0x2FF8B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF8B4u;
            // 0x2ff8b8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF8E8u;
            goto label_2ff8e8;
        }
    }
    ctx->pc = 0x2FF8BCu;
    // 0x2ff8bc: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ff8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ff8c0: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x2ff8c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x2ff8c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ff8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ff8c8: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2ff8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2ff8cc: 0xa0430c28  sb          $v1, 0xC28($v0)
    ctx->pc = 0x2ff8ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3112), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ff8d0: 0x24a5f700  addiu       $a1, $a1, -0x900
    ctx->pc = 0x2ff8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964992));
    // 0x2ff8d4: 0x24c6fed0  addiu       $a2, $a2, -0x130
    ctx->pc = 0x2ff8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966992));
    // 0x2ff8d8: 0xc0bf89c  jal         func_2FE270
    ctx->pc = 0x2FF8D8u;
    SET_GPR_U32(ctx, 31, 0x2FF8E0u);
    ctx->pc = 0x2FF8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF8D8u;
    // 0x2ff8dc: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE270u, 0x2FF8D8u, 0x2FF8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF8E0u;
label_2ff8e0:
    // 0x2ff8e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FF8E0u;
    {
        const bool branch_taken_0x2ff8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff8e0) {
            ctx->pc = 0x2FF8F8u;
            goto label_2ff8f8;
        }
    }
    ctx->pc = 0x2FF8E8u;
label_2ff8e8:
    // 0x2ff8e8: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2ff8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2ff8ec: 0x1000ff89  b           . + 4 + (-0x77 << 2)
    ctx->pc = 0x2FF8ECu;
    {
        const bool branch_taken_0x2ff8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF8ECu;
        // 0x2ff8f0: 0xa0430c20  sb          $v1, 0xC20($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 3104), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff8ec) {
            ctx->pc = 0x2FF714u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ff714;
        }
    }
    ctx->pc = 0x2FF8F4u;
    // 0x2ff8f4: 0x0  nop
    ctx->pc = 0x2ff8f4u;
    // NOP
label_2ff8f8:
    // 0x2ff8f8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2FF8F8u;
    {
        const bool branch_taken_0x2ff8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff8f8) {
            ctx->pc = 0x2FF924u;
            goto label_2ff924;
        }
    }
    ctx->pc = 0x2FF900u;
label_2ff900:
    // 0x2ff900: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ff900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ff904: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2ff904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2ff908: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x2FF908u;
    SET_GPR_U32(ctx, 31, 0x2FF910u);
    ctx->pc = 0x2FF90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF908u;
    // 0x2ff90c: 0x24a5fed0  addiu       $a1, $a1, -0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x2FF908u, 0x2FF910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF910u;
label_2ff910:
    // 0x2ff910: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2FF910u;
    {
        const bool branch_taken_0x2ff910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff910) {
            ctx->pc = 0x2FF924u;
            goto label_2ff924;
        }
    }
    ctx->pc = 0x2FF918u;
label_2ff918:
    // 0x2ff918: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2ff918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2ff91c: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x2FF91Cu;
    SET_GPR_U32(ctx, 31, 0x2FF924u);
    ctx->pc = 0x2FF920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF91Cu;
    // 0x2ff920: 0x24a5fed0  addiu       $a1, $a1, -0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x2FF91Cu, 0x2FF924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF924u;
label_2ff924:
    // 0x2ff924: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ff924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ff928:
    // 0x2ff928: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ff928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ff92c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF92Cu;
        // 0x2ff930: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF92Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF934u;
    // 0x2ff934: 0x0  nop
    ctx->pc = 0x2ff934u;
    // NOP
    // 0x2ff938: 0x0  nop
    ctx->pc = 0x2ff938u;
    // NOP
    // 0x2ff93c: 0x0  nop
    ctx->pc = 0x2ff93cu;
    // NOP
    // 0x2ff940: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x2ff940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x2ff944: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x2ff944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x2ff948: 0xa040b288  sb          $zero, -0x4D78($v0)
    ctx->pc = 0x2ff948u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294947464), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ff94c: 0x8082674  j           func_2099D0
    ctx->pc = 0x2FF94Cu;
    ctx->pc = 0x2FF950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF94Cu;
    // 0x2ff950: 0x2484da10  addiu       $a0, $a0, -0x25F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    sub_002099D0_0x2099d0(rdram, ctx, runtime); return;
    ctx->pc = 0x2FF954u;
    // 0x2ff954: 0x0  nop
    ctx->pc = 0x2ff954u;
    // NOP
    // 0x2ff958: 0x0  nop
    ctx->pc = 0x2ff958u;
    // NOP
    // 0x2ff95c: 0x0  nop
    ctx->pc = 0x2ff95cu;
    // NOP
    // 0x2ff960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ff960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ff964: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ff964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff968: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ff968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ff96c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ff96cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff970: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x2ff970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2ff974: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ff974u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff978: 0xc047b8e  jal         func_11EE38
    ctx->pc = 0x2FF978u;
    SET_GPR_U32(ctx, 31, 0x2FF980u);
    ctx->pc = 0x2FF97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF978u;
    // 0x2ff97c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE38u, 0x2FF978u, 0x2FF980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF980u;
label_2ff980:
    // 0x2ff980: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ff980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff984: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ff984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff988: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FF988u;
    SET_GPR_U32(ctx, 31, 0x2FF990u);
    ctx->pc = 0x2FF98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF988u;
    // 0x2ff98c: 0x27a60018  addiu       $a2, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED18u, 0x2FF988u, 0x2FF990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF990u;
label_2ff990:
    // 0x2ff990: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x2ff990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2ff994: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ff994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ff998: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FF998u;
    {
        const bool branch_taken_0x2ff998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ff998) {
            ctx->pc = 0x2FF99Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF998u;
            // 0x2ff99c: 0x8fa30018  lw          $v1, 0x18($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF9B8u;
            goto label_2ff9b8;
        }
    }
    ctx->pc = 0x2FF9A0u;
    // 0x2ff9a0: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ff9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ff9a4: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x2ff9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2ff9a8: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x2FF9A8u;
    SET_GPR_U32(ctx, 31, 0x2FF9B0u);
    ctx->pc = 0x2FF9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF9A8u;
    // 0x2ff9ac: 0x24a5fed0  addiu       $a1, $a1, -0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x2FF9A8u, 0x2FF9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF9B0u;
label_2ff9b0:
    // 0x2ff9b0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2FF9B0u;
    {
        const bool branch_taken_0x2ff9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF9B0u;
        // 0x2ff9b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff9b0) {
            ctx->pc = 0x2FFA38u;
            goto label_2ffa38;
        }
    }
    ctx->pc = 0x2FF9B8u;
label_2ff9b8:
    // 0x2ff9b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ff9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ff9bc: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2FF9BCu;
    {
        const bool branch_taken_0x2ff9bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ff9bc) {
            ctx->pc = 0x2FF9C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF9BCu;
            // 0x2ff9c0: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FF9F0u;
            goto label_2ff9f0;
        }
    }
    ctx->pc = 0x2FF9C4u;
    // 0x2ff9c4: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ff9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ff9c8: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x2ff9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x2ff9cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ff9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ff9d0: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2ff9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2ff9d4: 0xa0430c28  sb          $v1, 0xC28($v0)
    ctx->pc = 0x2ff9d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3112), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ff9d8: 0x24a5fab0  addiu       $a1, $a1, -0x550
    ctx->pc = 0x2ff9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965936));
    // 0x2ff9dc: 0x24c6f940  addiu       $a2, $a2, -0x6C0
    ctx->pc = 0x2ff9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965568));
    // 0x2ff9e0: 0xc0bf89c  jal         func_2FE270
    ctx->pc = 0x2FF9E0u;
    SET_GPR_U32(ctx, 31, 0x2FF9E8u);
    ctx->pc = 0x2FF9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF9E0u;
    // 0x2ff9e4: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE270u, 0x2FF9E0u, 0x2FF9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF9E8u;
label_2ff9e8:
    // 0x2ff9e8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2FF9E8u;
    {
        const bool branch_taken_0x2ff9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff9e8) {
            ctx->pc = 0x2FFA34u;
            goto label_2ffa34;
        }
    }
    ctx->pc = 0x2FF9F0u;
label_2ff9f0:
    // 0x2ff9f0: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2FF9F0u;
    {
        const bool branch_taken_0x2ff9f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ff9f0) {
            ctx->pc = 0x2FFA24u;
            goto label_2ffa24;
        }
    }
    ctx->pc = 0x2FF9F8u;
    // 0x2ff9f8: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ff9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ff9fc: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x2ff9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x2ffa00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ffa00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ffa04: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2ffa04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2ffa08: 0xa0430c28  sb          $v1, 0xC28($v0)
    ctx->pc = 0x2ffa08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3112), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ffa0c: 0x24a5fab0  addiu       $a1, $a1, -0x550
    ctx->pc = 0x2ffa0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965936));
    // 0x2ffa10: 0x24c6f940  addiu       $a2, $a2, -0x6C0
    ctx->pc = 0x2ffa10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965568));
    // 0x2ffa14: 0xc0bf89c  jal         func_2FE270
    ctx->pc = 0x2FFA14u;
    SET_GPR_U32(ctx, 31, 0x2FFA1Cu);
    ctx->pc = 0x2FFA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFA14u;
    // 0x2ffa18: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE270u, 0x2FFA14u, 0x2FFA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFA1Cu;
label_2ffa1c:
    // 0x2ffa1c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FFA1Cu;
    {
        const bool branch_taken_0x2ffa1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffa1c) {
            ctx->pc = 0x2FFA34u;
            goto label_2ffa34;
        }
    }
    ctx->pc = 0x2FFA24u;
label_2ffa24:
    // 0x2ffa24: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ffa24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ffa28: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2ffa28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ffa2c: 0xc0bf7fc  jal         func_2FDFF0
    ctx->pc = 0x2FFA2Cu;
    SET_GPR_U32(ctx, 31, 0x2FFA34u);
    ctx->pc = 0x2FFA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFA2Cu;
    // 0x2ffa30: 0x24a5fa40  addiu       $a1, $a1, -0x5C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDFF0u, 0x2FFA2Cu, 0x2FFA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFA34u;
label_2ffa34:
    // 0x2ffa34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ffa34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ffa38:
    // 0x2ffa38: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFA38u;
        // 0x2ffa3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFA38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFA40u;
    // 0x2ffa40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ffa40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ffa44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ffa44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffa48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ffa48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ffa4c: 0xc047cd2  jal         func_11F348
    ctx->pc = 0x2FFA4Cu;
    SET_GPR_U32(ctx, 31, 0x2FFA54u);
    ctx->pc = 0x2FFA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFA4Cu;
    // 0x2ffa50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F348u, 0x2FFA4Cu, 0x2FFA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFA54u;
label_2ffa54:
    // 0x2ffa54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ffa54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffa58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ffa58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffa5c: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FFA5Cu;
    SET_GPR_U32(ctx, 31, 0x2FFA64u);
    ctx->pc = 0x2FFA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFA5Cu;
    // 0x2ffa60: 0x27a6001c  addiu       $a2, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED18u, 0x2FFA5Cu, 0x2FFA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFA64u;
label_2ffa64:
    // 0x2ffa64: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x2ffa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2ffa68: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FFA68u;
    {
        const bool branch_taken_0x2ffa68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ffa68) {
            ctx->pc = 0x2FFA88u;
            goto label_2ffa88;
        }
    }
    ctx->pc = 0x2FFA70u;
    // 0x2ffa70: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ffa70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ffa74: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2ffa74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ffa78: 0xc0bf818  jal         func_2FE060
    ctx->pc = 0x2FFA78u;
    SET_GPR_U32(ctx, 31, 0x2FFA80u);
    ctx->pc = 0x2FFA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFA78u;
    // 0x2ffa7c: 0x24a5fd60  addiu       $a1, $a1, -0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE060u, 0x2FFA78u, 0x2FFA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFA80u;
label_2ffa80:
    // 0x2ffa80: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FFA80u;
    {
        const bool branch_taken_0x2ffa80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFA80u;
        // 0x2ffa84: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffa80) {
            ctx->pc = 0x2FFA9Cu;
            goto label_2ffa9c;
        }
    }
    ctx->pc = 0x2FFA88u;
label_2ffa88:
    // 0x2ffa88: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ffa88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ffa8c: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x2ffa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2ffa90: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x2FFA90u;
    SET_GPR_U32(ctx, 31, 0x2FFA98u);
    ctx->pc = 0x2FFA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFA90u;
    // 0x2ffa94: 0x24a5fed0  addiu       $a1, $a1, -0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x2FFA90u, 0x2FFA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFA98u;
label_2ffa98:
    // 0x2ffa98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ffa98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ffa9c:
    // 0x2ffa9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFA9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFA9Cu;
        // 0x2ffaa0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFA9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFAA4u;
    // 0x2ffaa4: 0x0  nop
    ctx->pc = 0x2ffaa4u;
    // NOP
    // 0x2ffaa8: 0x0  nop
    ctx->pc = 0x2ffaa8u;
    // NOP
    // 0x2ffaac: 0x0  nop
    ctx->pc = 0x2ffaacu;
    // NOP
    // 0x2ffab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ffab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ffab4: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2ffab4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2ffab8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ffab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ffabc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ffabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffac0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ffac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffac4: 0x24c630e0  addiu       $a2, $a2, 0x30E0
    ctx->pc = 0x2ffac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12512));
    // 0x2ffac8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ffac8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffacc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2ffaccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ffad0: 0xc047c0a  jal         func_11F028
    ctx->pc = 0x2FFAD0u;
    SET_GPR_U32(ctx, 31, 0x2FFAD8u);
    ctx->pc = 0x2FFAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFAD0u;
    // 0x2ffad4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F028u, 0x2FFAD0u, 0x2FFAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFAD8u;
label_2ffad8:
    // 0x2ffad8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ffad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffadc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ffadcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffae0: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FFAE0u;
    SET_GPR_U32(ctx, 31, 0x2FFAE8u);
    ctx->pc = 0x2FFAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFAE0u;
    // 0x2ffae4: 0x27a6001c  addiu       $a2, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED18u, 0x2FFAE0u, 0x2FFAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFAE8u;
label_2ffae8:
    // 0x2ffae8: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x2ffae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2ffaec: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FFAECu;
    {
        const bool branch_taken_0x2ffaec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ffaec) {
            ctx->pc = 0x2FFB14u;
            goto label_2ffb14;
        }
    }
    ctx->pc = 0x2FFAF4u;
    // 0x2ffaf4: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ffaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ffaf8: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x2ffaf8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x2ffafc: 0x24a5fb30  addiu       $a1, $a1, -0x4D0
    ctx->pc = 0x2ffafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966064));
    // 0x2ffb00: 0x24c6fed0  addiu       $a2, $a2, -0x130
    ctx->pc = 0x2ffb00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966992));
    // 0x2ffb04: 0xc0bf89c  jal         func_2FE270
    ctx->pc = 0x2FFB04u;
    SET_GPR_U32(ctx, 31, 0x2FFB0Cu);
    ctx->pc = 0x2FFB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFB04u;
    // 0x2ffb08: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE270u, 0x2FFB04u, 0x2FFB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFB0Cu;
label_2ffb0c:
    // 0x2ffb0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FFB0Cu;
    {
        const bool branch_taken_0x2ffb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB0Cu;
        // 0x2ffb10: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffb0c) {
            ctx->pc = 0x2FFB24u;
            goto label_2ffb24;
        }
    }
    ctx->pc = 0x2FFB14u;
label_2ffb14:
    // 0x2ffb14: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x2ffb14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x2ffb18: 0xc0bf7e8  jal         func_2FDFA0
    ctx->pc = 0x2FFB18u;
    SET_GPR_U32(ctx, 31, 0x2FFB20u);
    ctx->pc = 0x2FFB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFB18u;
    // 0x2ffb1c: 0x2484fb30  addiu       $a0, $a0, -0x4D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDFA0u, 0x2FFB18u, 0x2FFB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFB20u;
label_2ffb20:
    // 0x2ffb20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ffb20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ffb24:
    // 0x2ffb24: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB24u;
        // 0x2ffb28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFB24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFB2Cu;
    // 0x2ffb2c: 0x0  nop
    ctx->pc = 0x2ffb2cu;
    // NOP
    // 0x2ffb30: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2ffb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2ffb34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ffb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ffb38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ffb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ffb3c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ffb3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ffb40:
    // 0x2ffb40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ffb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ffb44:
    // 0x2ffb44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ffb44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffb48: 0x27a60098  addiu       $a2, $sp, 0x98
    ctx->pc = 0x2ffb48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x2ffb4c: 0x27a70094  addiu       $a3, $sp, 0x94
    ctx->pc = 0x2ffb4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x2ffb50: 0xc047b8e  jal         func_11EE38
    ctx->pc = 0x2FFB50u;
    SET_GPR_U32(ctx, 31, 0x2FFB58u);
    ctx->pc = 0x2FFB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFB50u;
    // 0x2ffb54: 0x27a80090  addiu       $t0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE38u, 0x2FFB50u, 0x2FFB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFB58u;
label_2ffb58:
    // 0x2ffb58: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ffb58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffb5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ffb5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffb60: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FFB60u;
    SET_GPR_U32(ctx, 31, 0x2FFB68u);
    ctx->pc = 0x2FFB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFB60u;
    // 0x2ffb64: 0x27a6009c  addiu       $a2, $sp, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED18u, 0x2FFB60u, 0x2FFB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFB68u;
label_2ffb68:
    // 0x2ffb68: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x2ffb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x2ffb6c: 0x5060002c  beql        $v1, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x2FFB6Cu;
    {
        const bool branch_taken_0x2ffb6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffb6c) {
            ctx->pc = 0x2FFB70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFB6Cu;
            // 0x2ffb70: 0x8fa20098  lw          $v0, 0x98($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FFC20u;
            goto label_2ffc20;
        }
    }
    ctx->pc = 0x2FFB74u;
    // 0x2ffb74: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2ffb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2ffb78: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FFB78u;
    {
        const bool branch_taken_0x2ffb78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ffb78) {
            ctx->pc = 0x2FFB98u;
            goto label_2ffb98;
        }
    }
    ctx->pc = 0x2FFB80u;
    // 0x2ffb80: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ffb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ffb84: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FFB84u;
    {
        const bool branch_taken_0x2ffb84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ffb84) {
            ctx->pc = 0x2FFB98u;
            goto label_2ffb98;
        }
    }
    ctx->pc = 0x2FFB8Cu;
    // 0x2ffb8c: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x2FFB8Cu;
    {
        const bool branch_taken_0x2ffb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB8Cu;
        // 0x2ffb90: 0x3c050030  lui         $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffb8c) {
            ctx->pc = 0x2FFD3Cu;
            goto label_2ffd3c;
        }
    }
    ctx->pc = 0x2FFB94u;
    // 0x2ffb94: 0x0  nop
    ctx->pc = 0x2ffb94u;
    // NOP
label_2ffb98:
    // 0x2ffb98: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2ffb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2ffb9c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2ffb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ffba0: 0x50440007  beql        $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FFBA0u;
    {
        const bool branch_taken_0x2ffba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2ffba0) {
            ctx->pc = 0x2FFBA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFBA0u;
            // 0x2ffba4: 0x8fa20090  lw          $v0, 0x90($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FFBC0u;
            goto label_2ffbc0;
        }
    }
    ctx->pc = 0x2FFBA8u;
    // 0x2ffba8: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ffba8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ffbac: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2ffbacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2ffbb0: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x2FFBB0u;
    SET_GPR_U32(ctx, 31, 0x2FFBB8u);
    ctx->pc = 0x2FFBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFBB0u;
    // 0x2ffbb4: 0x24a5fed0  addiu       $a1, $a1, -0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x2FFBB0u, 0x2FFBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFBB8u;
label_2ffbb8:
    // 0x2ffbb8: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x2FFBB8u;
    {
        const bool branch_taken_0x2ffbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFBB8u;
        // 0x2ffbbc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffbb8) {
            ctx->pc = 0x2FFD4Cu;
            goto label_2ffd4c;
        }
    }
    ctx->pc = 0x2FFBC0u;
label_2ffbc0:
    // 0x2ffbc0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2FFBC0u;
    {
        const bool branch_taken_0x2ffbc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ffbc0) {
            ctx->pc = 0x2FFBF4u;
            goto label_2ffbf4;
        }
    }
    ctx->pc = 0x2FFBC8u;
    // 0x2ffbc8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ffbc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2ffbcc: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x2ffbccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2ffbd0: 0x5440ffdc  bnel        $v0, $zero, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2FFBD0u;
    {
        const bool branch_taken_0x2ffbd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ffbd0) {
            ctx->pc = 0x2FFBD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFBD0u;
            // 0x2ffbd4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FFB44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ffb44;
        }
    }
    ctx->pc = 0x2FFBD8u;
    // 0x2ffbd8: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ffbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ffbdc: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x2ffbdcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x2ffbe0: 0x24a5f960  addiu       $a1, $a1, -0x6A0
    ctx->pc = 0x2ffbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965600));
    // 0x2ffbe4: 0xc0bf89c  jal         func_2FE270
    ctx->pc = 0x2FFBE4u;
    SET_GPR_U32(ctx, 31, 0x2FFBECu);
    ctx->pc = 0x2FFBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFBE4u;
    // 0x2ffbe8: 0x24c6fed0  addiu       $a2, $a2, -0x130 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE270u, 0x2FFBE4u, 0x2FFBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFBECu;
label_2ffbec:
    // 0x2ffbec: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x2FFBECu;
    {
        const bool branch_taken_0x2ffbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffbec) {
            ctx->pc = 0x2FFD48u;
            goto label_2ffd48;
        }
    }
    ctx->pc = 0x2FFBF4u;
label_2ffbf4:
    // 0x2ffbf4: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ffbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ffbf8: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x2ffbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x2ffbfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ffbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ffc00: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2ffc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2ffc04: 0xa0430c28  sb          $v1, 0xC28($v0)
    ctx->pc = 0x2ffc04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3112), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ffc08: 0x24a5fab0  addiu       $a1, $a1, -0x550
    ctx->pc = 0x2ffc08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965936));
    // 0x2ffc0c: 0x24c6fed0  addiu       $a2, $a2, -0x130
    ctx->pc = 0x2ffc0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966992));
    // 0x2ffc10: 0xc0bf89c  jal         func_2FE270
    ctx->pc = 0x2FFC10u;
    SET_GPR_U32(ctx, 31, 0x2FFC18u);
    ctx->pc = 0x2FFC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFC10u;
    // 0x2ffc14: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE270u, 0x2FFC10u, 0x2FFC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFC18u;
label_2ffc18:
    // 0x2ffc18: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x2FFC18u;
    {
        const bool branch_taken_0x2ffc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffc18) {
            ctx->pc = 0x2FFD48u;
            goto label_2ffd48;
        }
    }
    ctx->pc = 0x2FFC20u;
label_2ffc20:
    // 0x2ffc20: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2ffc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ffc24: 0x50440007  beql        $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FFC24u;
    {
        const bool branch_taken_0x2ffc24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2ffc24) {
            ctx->pc = 0x2FFC28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFC24u;
            // 0x2ffc28: 0x8fa20090  lw          $v0, 0x90($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FFC44u;
            goto label_2ffc44;
        }
    }
    ctx->pc = 0x2FFC2Cu;
    // 0x2ffc2c: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ffc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ffc30: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2ffc30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2ffc34: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x2FFC34u;
    SET_GPR_U32(ctx, 31, 0x2FFC3Cu);
    ctx->pc = 0x2FFC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFC34u;
    // 0x2ffc38: 0x24a5fed0  addiu       $a1, $a1, -0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x2FFC34u, 0x2FFC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFC3Cu;
label_2ffc3c:
    // 0x2ffc3c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2FFC3Cu;
    {
        const bool branch_taken_0x2ffc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffc3c) {
            ctx->pc = 0x2FFD48u;
            goto label_2ffd48;
        }
    }
    ctx->pc = 0x2FFC44u;
label_2ffc44:
    // 0x2ffc44: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2FFC44u;
    {
        const bool branch_taken_0x2ffc44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ffc44) {
            ctx->pc = 0x2FFC48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFC44u;
            // 0x2ffc48: 0x8fa20094  lw          $v0, 0x94($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FFC78u;
            goto label_2ffc78;
        }
    }
    ctx->pc = 0x2FFC4Cu;
    // 0x2ffc4c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ffc4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2ffc50: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x2ffc50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2ffc54: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x2FFC54u;
    {
        const bool branch_taken_0x2ffc54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ffc54) {
            ctx->pc = 0x2FFB40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ffb40;
        }
    }
    ctx->pc = 0x2FFC5Cu;
    // 0x2ffc5c: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ffc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ffc60: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x2ffc60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x2ffc64: 0x24a5f960  addiu       $a1, $a1, -0x6A0
    ctx->pc = 0x2ffc64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965600));
    // 0x2ffc68: 0xc0bf89c  jal         func_2FE270
    ctx->pc = 0x2FFC68u;
    SET_GPR_U32(ctx, 31, 0x2FFC70u);
    ctx->pc = 0x2FFC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFC68u;
    // 0x2ffc6c: 0x24c6fed0  addiu       $a2, $a2, -0x130 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE270u, 0x2FFC68u, 0x2FFC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFC70u;
label_2ffc70:
    // 0x2ffc70: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2FFC70u;
    {
        const bool branch_taken_0x2ffc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffc70) {
            ctx->pc = 0x2FFD48u;
            goto label_2ffd48;
        }
    }
    ctx->pc = 0x2FFC78u;
label_2ffc78:
    // 0x2ffc78: 0x284100e1  slti        $at, $v0, 0xE1
    ctx->pc = 0x2ffc78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)225) ? 1 : 0);
    // 0x2ffc7c: 0x1020002a  beqz        $at, . + 4 + (0x2A << 2)
    ctx->pc = 0x2FFC7Cu;
    {
        const bool branch_taken_0x2ffc7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffc7c) {
            ctx->pc = 0x2FFD28u;
            goto label_2ffd28;
        }
    }
    ctx->pc = 0x2FFC84u;
    // 0x2ffc84: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2ffc84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2ffc88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ffc88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffc8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ffc8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffc90: 0x24c630e0  addiu       $a2, $a2, 0x30E0
    ctx->pc = 0x2ffc90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12512));
    // 0x2ffc94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ffc94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffc98: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ffc98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ffc9c: 0xc047c0a  jal         func_11F028
    ctx->pc = 0x2FFC9Cu;
    SET_GPR_U32(ctx, 31, 0x2FFCA4u);
    ctx->pc = 0x2FFCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFC9Cu;
    // 0x2ffca0: 0x27a90020  addiu       $t1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F028u, 0x2FFC9Cu, 0x2FFCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFCA4u;
label_2ffca4:
    // 0x2ffca4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ffca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffca8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ffca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffcac: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FFCACu;
    SET_GPR_U32(ctx, 31, 0x2FFCB4u);
    ctx->pc = 0x2FFCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFCACu;
    // 0x2ffcb0: 0x27a6009c  addiu       $a2, $sp, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED18u, 0x2FFCACu, 0x2FFCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFCB4u;
label_2ffcb4:
    // 0x2ffcb4: 0x8fa2009c  lw          $v0, 0x9C($sp)
    ctx->pc = 0x2ffcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x2ffcb8: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2FFCB8u;
    {
        const bool branch_taken_0x2ffcb8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ffcb8) {
            ctx->pc = 0x2FFD10u;
            goto label_2ffd10;
        }
    }
    ctx->pc = 0x2FFCC0u;
    // 0x2ffcc0: 0xc0bfaa0  jal         func_2FEA80
    ctx->pc = 0x2FFCC0u;
    SET_GPR_U32(ctx, 31, 0x2FFCC8u);
    ctx->pc = 0x2FEA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEA80u, 0x2FFCC0u, 0x2FFCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFCC8u;
label_2ffcc8:
    // 0x2ffcc8: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2FFCC8u;
    {
        const bool branch_taken_0x2ffcc8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2ffcc8) {
            ctx->pc = 0x2FFCFCu;
            goto label_2ffcfc;
        }
    }
    ctx->pc = 0x2FFCD0u;
    // 0x2ffcd0: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x2ffcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x2ffcd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ffcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ffcd8: 0x284100e1  slti        $at, $v0, 0xE1
    ctx->pc = 0x2ffcd8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)225) ? 1 : 0);
    // 0x2ffcdc: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FFCDCu;
    {
        const bool branch_taken_0x2ffcdc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffcdc) {
            ctx->pc = 0x2FFCFCu;
            goto label_2ffcfc;
        }
    }
    ctx->pc = 0x2FFCE4u;
    // 0x2ffce4: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ffce4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ffce8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2ffce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ffcec: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x2FFCECu;
    SET_GPR_U32(ctx, 31, 0x2FFCF4u);
    ctx->pc = 0x2FFCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFCECu;
    // 0x2ffcf0: 0x24a5fed0  addiu       $a1, $a1, -0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x2FFCECu, 0x2FFCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFCF4u;
label_2ffcf4:
    // 0x2ffcf4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2FFCF4u;
    {
        const bool branch_taken_0x2ffcf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffcf4) {
            ctx->pc = 0x2FFD48u;
            goto label_2ffd48;
        }
    }
    ctx->pc = 0x2FFCFCu;
label_2ffcfc:
    // 0x2ffcfc: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x2ffcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x2ffd00: 0xc082674  jal         func_2099D0
    ctx->pc = 0x2FFD00u;
    SET_GPR_U32(ctx, 31, 0x2FFD08u);
    ctx->pc = 0x2FFD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFD00u;
    // 0x2ffd04: 0x2484fd60  addiu       $a0, $a0, -0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x2FFD00u, 0x2FFD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFD08u;
label_2ffd08:
    // 0x2ffd08: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2FFD08u;
    {
        const bool branch_taken_0x2ffd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffd08) {
            ctx->pc = 0x2FFD48u;
            goto label_2ffd48;
        }
    }
    ctx->pc = 0x2FFD10u;
label_2ffd10:
    // 0x2ffd10: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ffd10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ffd14: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2ffd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ffd18: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x2FFD18u;
    SET_GPR_U32(ctx, 31, 0x2FFD20u);
    ctx->pc = 0x2FFD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFD18u;
    // 0x2ffd1c: 0x24a5fed0  addiu       $a1, $a1, -0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x2FFD18u, 0x2FFD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFD20u;
label_2ffd20:
    // 0x2ffd20: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2FFD20u;
    {
        const bool branch_taken_0x2ffd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffd20) {
            ctx->pc = 0x2FFD48u;
            goto label_2ffd48;
        }
    }
    ctx->pc = 0x2FFD28u;
label_2ffd28:
    // 0x2ffd28: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x2ffd28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x2ffd2c: 0xc082674  jal         func_2099D0
    ctx->pc = 0x2FFD2Cu;
    SET_GPR_U32(ctx, 31, 0x2FFD34u);
    ctx->pc = 0x2FFD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFD2Cu;
    // 0x2ffd30: 0x2484fd60  addiu       $a0, $a0, -0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x2FFD2Cu, 0x2FFD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFD34u;
label_2ffd34:
    // 0x2ffd34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2FFD34u;
    {
        const bool branch_taken_0x2ffd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffd34) {
            ctx->pc = 0x2FFD48u;
            goto label_2ffd48;
        }
    }
    ctx->pc = 0x2FFD3Cu;
label_2ffd3c:
    // 0x2ffd3c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2ffd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2ffd40: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x2FFD40u;
    SET_GPR_U32(ctx, 31, 0x2FFD48u);
    ctx->pc = 0x2FFD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFD40u;
    // 0x2ffd44: 0x24a5fed0  addiu       $a1, $a1, -0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x2FFD40u, 0x2FFD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFD48u;
label_2ffd48:
    // 0x2ffd48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ffd48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ffd4c:
    // 0x2ffd4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ffd4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ffd50: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFD50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD50u;
        // 0x2ffd54: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFD50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFD58u;
    // 0x2ffd58: 0x0  nop
    ctx->pc = 0x2ffd58u;
    // NOP
    // 0x2ffd5c: 0x0  nop
    ctx->pc = 0x2ffd5cu;
    // NOP
    // 0x2ffd60: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ffd60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ffd64: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2ffd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ffd68: 0x80bf7fc  j           func_2FDFF0
    ctx->pc = 0x2FFD68u;
    ctx->pc = 0x2FFD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFD68u;
    // 0x2ffd6c: 0x24a5fd70  addiu       $a1, $a1, -0x290 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDFF0u;
    sub_002FDFF0_0x2fdff0(rdram, ctx, runtime); return;
    ctx->pc = 0x2FFD70u;
    // 0x2ffd70: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2ffd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2ffd74: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ffd74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffd78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ffd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ffd7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ffd7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffd80: 0x27a6008c  addiu       $a2, $sp, 0x8C
    ctx->pc = 0x2ffd80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x2ffd84: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x2ffd84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2ffd88: 0xc047b8e  jal         func_11EE38
    ctx->pc = 0x2FFD88u;
    SET_GPR_U32(ctx, 31, 0x2FFD90u);
    ctx->pc = 0x2FFD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFD88u;
    // 0x2ffd8c: 0x27a80088  addiu       $t0, $sp, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE38u, 0x2FFD88u, 0x2FFD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFD90u;
label_2ffd90:
    // 0x2ffd90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ffd90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffd94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ffd94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffd98: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FFD98u;
    SET_GPR_U32(ctx, 31, 0x2FFDA0u);
    ctx->pc = 0x2FFD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFD98u;
    // 0x2ffd9c: 0x27a60084  addiu       $a2, $sp, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED18u, 0x2FFD98u, 0x2FFDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFDA0u;
label_2ffda0:
    // 0x2ffda0: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x2ffda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x2ffda4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2ffda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ffda8: 0x50440007  beql        $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FFDA8u;
    {
        const bool branch_taken_0x2ffda8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2ffda8) {
            ctx->pc = 0x2FFDACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFDA8u;
            // 0x2ffdac: 0x8fa20088  lw          $v0, 0x88($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FFDC8u;
            goto label_2ffdc8;
        }
    }
    ctx->pc = 0x2FFDB0u;
    // 0x2ffdb0: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ffdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ffdb4: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2ffdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2ffdb8: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x2FFDB8u;
    SET_GPR_U32(ctx, 31, 0x2FFDC0u);
    ctx->pc = 0x2FFDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFDB8u;
    // 0x2ffdbc: 0x24a5fed0  addiu       $a1, $a1, -0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x2FFDB8u, 0x2FFDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFDC0u;
label_2ffdc0:
    // 0x2ffdc0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2FFDC0u;
    {
        const bool branch_taken_0x2ffdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFDC0u;
        // 0x2ffdc4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffdc0) {
            ctx->pc = 0x2FFEC0u;
            goto label_2ffec0;
        }
    }
    ctx->pc = 0x2FFDC8u;
label_2ffdc8:
    // 0x2ffdc8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FFDC8u;
    {
        const bool branch_taken_0x2ffdc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ffdc8) {
            ctx->pc = 0x2FFDCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFDC8u;
            // 0x2ffdcc: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FFDECu;
            goto label_2ffdec;
        }
    }
    ctx->pc = 0x2FFDD0u;
    // 0x2ffdd0: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ffdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ffdd4: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x2ffdd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x2ffdd8: 0x24a5f960  addiu       $a1, $a1, -0x6A0
    ctx->pc = 0x2ffdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965600));
    // 0x2ffddc: 0xc0bf89c  jal         func_2FE270
    ctx->pc = 0x2FFDDCu;
    SET_GPR_U32(ctx, 31, 0x2FFDE4u);
    ctx->pc = 0x2FFDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFDDCu;
    // 0x2ffde0: 0x24c6fed0  addiu       $a2, $a2, -0x130 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE270u, 0x2FFDDCu, 0x2FFDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFDE4u;
label_2ffde4:
    // 0x2ffde4: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2FFDE4u;
    {
        const bool branch_taken_0x2ffde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffde4) {
            ctx->pc = 0x2FFEBCu;
            goto label_2ffebc;
        }
    }
    ctx->pc = 0x2FFDECu;
label_2ffdec:
    // 0x2ffdec: 0x284100e1  slti        $at, $v0, 0xE1
    ctx->pc = 0x2ffdecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)225) ? 1 : 0);
    // 0x2ffdf0: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
    ctx->pc = 0x2FFDF0u;
    {
        const bool branch_taken_0x2ffdf0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffdf0) {
            ctx->pc = 0x2FFE88u;
            goto label_2ffe88;
        }
    }
    ctx->pc = 0x2FFDF8u;
    // 0x2ffdf8: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x2ffdf8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x2ffdfc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ffdfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffe00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ffe00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffe04: 0x24c630e0  addiu       $a2, $a2, 0x30E0
    ctx->pc = 0x2ffe04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12512));
    // 0x2ffe08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ffe08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffe0c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ffe0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ffe10: 0xc047c0a  jal         func_11F028
    ctx->pc = 0x2FFE10u;
    SET_GPR_U32(ctx, 31, 0x2FFE18u);
    ctx->pc = 0x2FFE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFE10u;
    // 0x2ffe14: 0x27a90010  addiu       $t1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F028u, 0x2FFE10u, 0x2FFE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFE18u;
label_2ffe18:
    // 0x2ffe18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ffe18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffe1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ffe1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffe20: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FFE20u;
    SET_GPR_U32(ctx, 31, 0x2FFE28u);
    ctx->pc = 0x2FFE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFE20u;
    // 0x2ffe24: 0x27a60084  addiu       $a2, $sp, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED18u, 0x2FFE20u, 0x2FFE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFE28u;
label_2ffe28:
    // 0x2ffe28: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x2ffe28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x2ffe2c: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FFE2Cu;
    {
        const bool branch_taken_0x2ffe2c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2ffe2c) {
            ctx->pc = 0x2FFE4Cu;
            goto label_2ffe4c;
        }
    }
    ctx->pc = 0x2FFE34u;
    // 0x2ffe34: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ffe34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ffe38: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2ffe38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ffe3c: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x2FFE3Cu;
    SET_GPR_U32(ctx, 31, 0x2FFE44u);
    ctx->pc = 0x2FFE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFE3Cu;
    // 0x2ffe40: 0x24a5fed0  addiu       $a1, $a1, -0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x2FFE3Cu, 0x2FFE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFE44u;
label_2ffe44:
    // 0x2ffe44: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2FFE44u;
    {
        const bool branch_taken_0x2ffe44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffe44) {
            ctx->pc = 0x2FFEBCu;
            goto label_2ffebc;
        }
    }
    ctx->pc = 0x2FFE4Cu;
label_2ffe4c:
    // 0x2ffe4c: 0xc0bfaa0  jal         func_2FEA80
    ctx->pc = 0x2FFE4Cu;
    SET_GPR_U32(ctx, 31, 0x2FFE54u);
    ctx->pc = 0x2FEA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEA80u, 0x2FFE4Cu, 0x2FFE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFE54u;
label_2ffe54:
    // 0x2ffe54: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2FFE54u;
    {
        const bool branch_taken_0x2ffe54 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2ffe54) {
            ctx->pc = 0x2FFE88u;
            goto label_2ffe88;
        }
    }
    ctx->pc = 0x2FFE5Cu;
    // 0x2ffe5c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2ffe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ffe60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ffe60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ffe64: 0x284100e1  slti        $at, $v0, 0xE1
    ctx->pc = 0x2ffe64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)225) ? 1 : 0);
    // 0x2ffe68: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FFE68u;
    {
        const bool branch_taken_0x2ffe68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffe68) {
            ctx->pc = 0x2FFE88u;
            goto label_2ffe88;
        }
    }
    ctx->pc = 0x2FFE70u;
    // 0x2ffe70: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ffe70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ffe74: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2ffe74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ffe78: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x2FFE78u;
    SET_GPR_U32(ctx, 31, 0x2FFE80u);
    ctx->pc = 0x2FFE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFE78u;
    // 0x2ffe7c: 0x24a5fed0  addiu       $a1, $a1, -0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x2FFE78u, 0x2FFE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFE80u;
label_2ffe80:
    // 0x2ffe80: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2FFE80u;
    {
        const bool branch_taken_0x2ffe80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffe80) {
            ctx->pc = 0x2FFEBCu;
            goto label_2ffebc;
        }
    }
    ctx->pc = 0x2FFE88u;
label_2ffe88:
    // 0x2ffe88: 0xc0bf918  jal         func_2FE460
    ctx->pc = 0x2FFE88u;
    SET_GPR_U32(ctx, 31, 0x2FFE90u);
    ctx->pc = 0x2FE460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE460u, 0x2FFE88u, 0x2FFE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFE90u;
label_2ffe90:
    // 0x2ffe90: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FFE90u;
    {
        const bool branch_taken_0x2ffe90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffe90) {
            ctx->pc = 0x2FFEACu;
            goto label_2ffeac;
        }
    }
    ctx->pc = 0x2FFE98u;
    // 0x2ffe98: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2ffe98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ffe9c: 0xc0bf818  jal         func_2FE060
    ctx->pc = 0x2FFE9Cu;
    SET_GPR_U32(ctx, 31, 0x2FFEA4u);
    ctx->pc = 0x2FFEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFE9Cu;
    // 0x2ffea0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE060u, 0x2FFE9Cu, 0x2FFEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFEA4u;
label_2ffea4:
    // 0x2ffea4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FFEA4u;
    {
        const bool branch_taken_0x2ffea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffea4) {
            ctx->pc = 0x2FFEBCu;
            goto label_2ffebc;
        }
    }
    ctx->pc = 0x2FFEACu;
label_2ffeac:
    // 0x2ffeac: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ffeacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ffeb0: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2ffeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2ffeb4: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x2FFEB4u;
    SET_GPR_U32(ctx, 31, 0x2FFEBCu);
    ctx->pc = 0x2FFEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFEB4u;
    // 0x2ffeb8: 0x24a5fed0  addiu       $a1, $a1, -0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x2FFEB4u, 0x2FFEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFEBCu;
label_2ffebc:
    // 0x2ffebc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ffebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ffec0:
    // 0x2ffec0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFEC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFEC0u;
        // 0x2ffec4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFEC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFEC8u;
    // 0x2ffec8: 0x0  nop
    ctx->pc = 0x2ffec8u;
    // NOP
    // 0x2ffecc: 0x0  nop
    ctx->pc = 0x2ffeccu;
    // NOP
    // 0x2ffed0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x2ffed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x2ffed4: 0x80bf7e8  j           func_2FDFA0
    ctx->pc = 0x2FFED4u;
    ctx->pc = 0x2FFED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFED4u;
    // 0x2ffed8: 0x2484fee0  addiu       $a0, $a0, -0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDFA0u;
    sub_002FDFA0_0x2fdfa0(rdram, ctx, runtime); return;
    ctx->pc = 0x2FFEDCu;
    // 0x2ffedc: 0x0  nop
    ctx->pc = 0x2ffedcu;
    // NOP
    // 0x2ffee0: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x2ffee0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x2ffee4: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x2ffee4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x2ffee8: 0x24a5f700  addiu       $a1, $a1, -0x900
    ctx->pc = 0x2ffee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964992));
    // 0x2ffeec: 0x24c6f940  addiu       $a2, $a2, -0x6C0
    ctx->pc = 0x2ffeecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965568));
    // 0x2ffef0: 0x80bf86c  j           func_2FE1B0
    ctx->pc = 0x2FFEF0u;
    ctx->pc = 0x2FFEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFEF0u;
    // 0x2ffef4: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE1B0u;
    sub_002FE1B0_0x2fe1b0(rdram, ctx, runtime); return;
    ctx->pc = 0x2FFEF8u;
    // 0x2ffef8: 0x0  nop
    ctx->pc = 0x2ffef8u;
    // NOP
    // 0x2ffefc: 0x0  nop
    ctx->pc = 0x2ffefcu;
    // NOP
    // 0x2fff00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fff00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fff04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fff04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fff08: 0xc0530b8  jal         func_14C2E0
    ctx->pc = 0x2FFF08u;
    SET_GPR_U32(ctx, 31, 0x2FFF10u);
    ctx->pc = 0x14C2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C2E0u, 0x2FFF08u, 0x2FFF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFF10u;
label_2fff10:
    // 0x2fff10: 0xc069184  jal         func_1A4610
    ctx->pc = 0x2FFF10u;
    SET_GPR_U32(ctx, 31, 0x2FFF18u);
    ctx->pc = 0x2FFF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFF10u;
    // 0x2fff14: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4610u, 0x2FFF10u, 0x2FFF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFF18u;
label_2fff18:
    // 0x2fff18: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x2fff18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x2fff1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fff1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fff20: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x2fff20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x2fff24: 0x248479c0  addiu       $a0, $a0, 0x79C0
    ctx->pc = 0x2fff24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31168));
    // 0x2fff28: 0xc0558d0  jal         func_156340
    ctx->pc = 0x2FFF28u;
    SET_GPR_U32(ctx, 31, 0x2FFF30u);
    ctx->pc = 0x2FFF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFF28u;
    // 0x2fff2c: 0xac439728  sw          $v1, -0x68D8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940456), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156340u, 0x2FFF28u, 0x2FFF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFF30u;
label_2fff30:
    // 0x2fff30: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x2fff30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x2fff34: 0xc0bf7e8  jal         func_2FDFA0
    ctx->pc = 0x2FFF34u;
    SET_GPR_U32(ctx, 31, 0x2FFF3Cu);
    ctx->pc = 0x2FFF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFF34u;
    // 0x2fff38: 0x2484ff90  addiu       $a0, $a0, -0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDFA0u, 0x2FFF34u, 0x2FFF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFF3Cu;
label_2fff3c:
    // 0x2fff3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fff3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fff40: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF40u;
        // 0x2fff44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFF40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFF48u;
    // 0x2fff48: 0x0  nop
    ctx->pc = 0x2fff48u;
    // NOP
    // 0x2fff4c: 0x0  nop
    ctx->pc = 0x2fff4cu;
    // NOP
    // 0x2fff50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fff50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fff54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fff54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fff58: 0xc069184  jal         func_1A4610
    ctx->pc = 0x2FFF58u;
    SET_GPR_U32(ctx, 31, 0x2FFF60u);
    ctx->pc = 0x2FFF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFF58u;
    // 0x2fff5c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4610u, 0x2FFF58u, 0x2FFF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFF60u;
label_2fff60:
    // 0x2fff60: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x2fff60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x2fff64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fff64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fff68: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x2fff68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x2fff6c: 0x2484ff90  addiu       $a0, $a0, -0x70
    ctx->pc = 0x2fff6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967184));
    // 0x2fff70: 0xc0bf7e8  jal         func_2FDFA0
    ctx->pc = 0x2FFF70u;
    SET_GPR_U32(ctx, 31, 0x2FFF78u);
    ctx->pc = 0x2FFF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFF70u;
    // 0x2fff74: 0xac439728  sw          $v1, -0x68D8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940456), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDFA0u, 0x2FFF70u, 0x2FFF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFF78u;
label_2fff78:
    // 0x2fff78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fff78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fff7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF7Cu;
        // 0x2fff80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFF7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFF84u;
    // 0x2fff84: 0x0  nop
    ctx->pc = 0x2fff84u;
    // NOP
    // 0x2fff88: 0x0  nop
    ctx->pc = 0x2fff88u;
    // NOP
    // 0x2fff8c: 0x0  nop
    ctx->pc = 0x2fff8cu;
    // NOP
    // 0x2fff90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fff90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fff94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fff94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fff98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fff98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fff9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2fff9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fffa0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fffa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fffa4:
    // 0x2fffa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fffa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fffa8: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x2fffa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2fffac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fffacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fffb0: 0xc047b8e  jal         func_11EE38
    ctx->pc = 0x2FFFB0u;
    SET_GPR_U32(ctx, 31, 0x2FFFB8u);
    ctx->pc = 0x2FFFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFFB0u;
    // 0x2fffb4: 0x27a80028  addiu       $t0, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE38u, 0x2FFFB0u, 0x2FFFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFFB8u;
label_2fffb8:
    // 0x2fffb8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fffb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fffbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fffbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fffc0: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x2FFFC0u;
    SET_GPR_U32(ctx, 31, 0x2FFFC8u);
    ctx->pc = 0x2FFFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFFC0u;
    // 0x2fffc4: 0x27a60024  addiu       $a2, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED18u, 0x2FFFC0u, 0x2FFFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFFC8u;
label_2fffc8:
    // 0x2fffc8: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x2fffc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2fffcc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FFFCCu;
    {
        const bool branch_taken_0x2fffcc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fffcc) {
            ctx->pc = 0x2FFFE0u;
            goto label_2fffe0;
        }
    }
    ctx->pc = 0x2FFFD4u;
    // 0x2fffd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fffd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fffd8: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2fffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2fffdc: 0xa0430c20  sb          $v1, 0xC20($v0)
    ctx->pc = 0x2fffdcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3104), (uint8_t)GPR_U32(ctx, 3));
label_2fffe0:
    // 0x2fffe0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2fffe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fffe4: 0x50a40008  beql        $a1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FFFE4u;
    {
        const bool branch_taken_0x2fffe4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2fffe4) {
            ctx->pc = 0x2FFFE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFFE4u;
            // 0x2fffe8: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300008u;
            goto label_300008;
        }
    }
    ctx->pc = 0x2FFFECu;
    // 0x2fffec: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x2fffecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x2ffff0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ffff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffff4: 0x24c6ff90  addiu       $a2, $a2, -0x70
    ctx->pc = 0x2ffff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967184));
    // 0x2ffff8: 0xc0bf89c  jal         func_2FE270
    ctx->pc = 0x2FFFF8u;
    SET_GPR_U32(ctx, 31, 0x300000u);
    ctx->pc = 0x2FFFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFFF8u;
    // 0x2ffffc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE270u, 0x2FFFF8u, 0x300000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300000u;
label_300000:
    // 0x300000: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x300000u;
    {
        const bool branch_taken_0x300000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300000u;
        // 0x300004: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300000) {
            ctx->pc = 0x3000E4u;
            goto label_3000e4;
        }
    }
    ctx->pc = 0x300008u;
label_300008:
    // 0x300008: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x300008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x30000c: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x30000Cu;
    {
        const bool branch_taken_0x30000c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30000c) {
            ctx->pc = 0x300098u;
            goto label_300098;
        }
    }
    ctx->pc = 0x300014u;
    // 0x300014: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x300014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x300018: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x300018u;
    {
        const bool branch_taken_0x300018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x300018) {
            ctx->pc = 0x300030u;
            goto label_300030;
        }
    }
    ctx->pc = 0x300020u;
    // 0x300020: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x300020u;
    {
        const bool branch_taken_0x300020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x300020) {
            ctx->pc = 0x300030u;
            goto label_300030;
        }
    }
    ctx->pc = 0x300028u;
    // 0x300028: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x300028u;
    {
        const bool branch_taken_0x300028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30002Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300028u;
        // 0x30002c: 0x3c060030  lui         $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300028) {
            ctx->pc = 0x3000D0u;
            goto label_3000d0;
        }
    }
    ctx->pc = 0x300030u;
label_300030:
    // 0x300030: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x300030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x300034: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x300034u;
    {
        const bool branch_taken_0x300034 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x300034) {
            ctx->pc = 0x300038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300034u;
            // 0x300038: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300058u;
            goto label_300058;
        }
    }
    ctx->pc = 0x30003Cu;
    // 0x30003c: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x30003cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x300040: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x300040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300044: 0x24c6ff90  addiu       $a2, $a2, -0x70
    ctx->pc = 0x300044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967184));
    // 0x300048: 0xc0bf89c  jal         func_2FE270
    ctx->pc = 0x300048u;
    SET_GPR_U32(ctx, 31, 0x300050u);
    ctx->pc = 0x30004Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300048u;
    // 0x30004c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE270u, 0x300048u, 0x300050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300050u;
label_300050:
    // 0x300050: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x300050u;
    {
        const bool branch_taken_0x300050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300050) {
            ctx->pc = 0x3000E0u;
            goto label_3000e0;
        }
    }
    ctx->pc = 0x300058u;
label_300058:
    // 0x300058: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x300058u;
    {
        const bool branch_taken_0x300058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x300058) {
            ctx->pc = 0x300084u;
            goto label_300084;
        }
    }
    ctx->pc = 0x300060u;
    // 0x300060: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x300060u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x300064: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x300064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x300068: 0x5440ffce  bnel        $v0, $zero, . + 4 + (-0x32 << 2)
    ctx->pc = 0x300068u;
    {
        const bool branch_taken_0x300068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x300068) {
            ctx->pc = 0x30006Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300068u;
            // 0x30006c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FFFA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fffa4;
        }
    }
    ctx->pc = 0x300070u;
    // 0x300070: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x300070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x300074: 0xc082674  jal         func_2099D0
    ctx->pc = 0x300074u;
    SET_GPR_U32(ctx, 31, 0x30007Cu);
    ctx->pc = 0x300078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300074u;
    // 0x300078: 0x2484da10  addiu       $a0, $a0, -0x25F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x300074u, 0x30007Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30007Cu;
label_30007c:
    // 0x30007c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x30007Cu;
    {
        const bool branch_taken_0x30007c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30007c) {
            ctx->pc = 0x3000E0u;
            goto label_3000e0;
        }
    }
    ctx->pc = 0x300084u;
label_300084:
    // 0x300084: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x300084u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x300088: 0xc082674  jal         func_2099D0
    ctx->pc = 0x300088u;
    SET_GPR_U32(ctx, 31, 0x300090u);
    ctx->pc = 0x30008Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300088u;
    // 0x30008c: 0x248400f0  addiu       $a0, $a0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x300088u, 0x300090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300090u;
label_300090:
    // 0x300090: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x300090u;
    {
        const bool branch_taken_0x300090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300090) {
            ctx->pc = 0x3000E0u;
            goto label_3000e0;
        }
    }
    ctx->pc = 0x300098u;
label_300098:
    // 0x300098: 0x14a40006  bne         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x300098u;
    {
        const bool branch_taken_0x300098 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x300098) {
            ctx->pc = 0x3000B4u;
            goto label_3000b4;
        }
    }
    ctx->pc = 0x3000A0u;
    // 0x3000a0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x3000a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x3000a4: 0xc082674  jal         func_2099D0
    ctx->pc = 0x3000A4u;
    SET_GPR_U32(ctx, 31, 0x3000ACu);
    ctx->pc = 0x3000A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3000A4u;
    // 0x3000a8: 0x2484da10  addiu       $a0, $a0, -0x25F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x3000A4u, 0x3000ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3000ACu;
label_3000ac:
    // 0x3000ac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3000ACu;
    {
        const bool branch_taken_0x3000ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3000ac) {
            ctx->pc = 0x3000E0u;
            goto label_3000e0;
        }
    }
    ctx->pc = 0x3000B4u;
label_3000b4:
    // 0x3000b4: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x3000b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x3000b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3000b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3000bc: 0x24c6ff90  addiu       $a2, $a2, -0x70
    ctx->pc = 0x3000bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967184));
    // 0x3000c0: 0xc0bf89c  jal         func_2FE270
    ctx->pc = 0x3000C0u;
    SET_GPR_U32(ctx, 31, 0x3000C8u);
    ctx->pc = 0x3000C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3000C0u;
    // 0x3000c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE270u, 0x3000C0u, 0x3000C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3000C8u;
label_3000c8:
    // 0x3000c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3000C8u;
    {
        const bool branch_taken_0x3000c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3000c8) {
            ctx->pc = 0x3000E0u;
            goto label_3000e0;
        }
    }
    ctx->pc = 0x3000D0u;
label_3000d0:
    // 0x3000d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3000d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3000d4: 0x24c6ff90  addiu       $a2, $a2, -0x70
    ctx->pc = 0x3000d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967184));
    // 0x3000d8: 0xc0bf89c  jal         func_2FE270
    ctx->pc = 0x3000D8u;
    SET_GPR_U32(ctx, 31, 0x3000E0u);
    ctx->pc = 0x3000DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3000D8u;
    // 0x3000dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE270u, 0x3000D8u, 0x3000E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3000E0u;
label_3000e0:
    // 0x3000e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3000e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3000e4:
    // 0x3000e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3000e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3000e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3000E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3000ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3000E8u;
        // 0x3000ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3000E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3000F0u;
    // 0x3000f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3000f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3000f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3000f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3000f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3000f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3000fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3000fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300100: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x300100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x300104: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x300104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x300108: 0xc047b8e  jal         func_11EE38
    ctx->pc = 0x300108u;
    SET_GPR_U32(ctx, 31, 0x300110u);
    ctx->pc = 0x30010Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300108u;
    // 0x30010c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE38u, 0x300108u, 0x300110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300110u;
label_300110:
    // 0x300110: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x300110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300114: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x300114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300118: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x300118u;
    SET_GPR_U32(ctx, 31, 0x300120u);
    ctx->pc = 0x30011Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300118u;
    // 0x30011c: 0x27a6001c  addiu       $a2, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED18u, 0x300118u, 0x300120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300120u;
label_300120:
    // 0x300120: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x300120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x300124: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x300124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x300128: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x300128u;
    {
        const bool branch_taken_0x300128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x300128) {
            ctx->pc = 0x30012Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300128u;
            // 0x30012c: 0x8fa3001c  lw          $v1, 0x1C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30014Cu;
            goto label_30014c;
        }
    }
    ctx->pc = 0x300130u;
    // 0x300130: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x300130u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x300134: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x300134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300138: 0x24c600f0  addiu       $a2, $a2, 0xF0
    ctx->pc = 0x300138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 240));
    // 0x30013c: 0xc0bf89c  jal         func_2FE270
    ctx->pc = 0x30013Cu;
    SET_GPR_U32(ctx, 31, 0x300144u);
    ctx->pc = 0x300140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30013Cu;
    // 0x300140: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE270u, 0x30013Cu, 0x300144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300144u;
label_300144:
    // 0x300144: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x300144u;
    {
        const bool branch_taken_0x300144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300144u;
        // 0x300148: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300144) {
            ctx->pc = 0x300260u;
            goto label_300260;
        }
    }
    ctx->pc = 0x30014Cu;
label_30014c:
    // 0x30014c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x30014cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x300150: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x300150u;
    {
        const bool branch_taken_0x300150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x300150) {
            ctx->pc = 0x300190u;
            goto label_300190;
        }
    }
    ctx->pc = 0x300158u;
    // 0x300158: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x300158u;
    {
        const bool branch_taken_0x300158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x300158) {
            ctx->pc = 0x3001BCu;
            goto label_3001bc;
        }
    }
    ctx->pc = 0x300160u;
    // 0x300160: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x300160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x300164: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x300164u;
    {
        const bool branch_taken_0x300164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x300164) {
            ctx->pc = 0x300174u;
            goto label_300174;
        }
    }
    ctx->pc = 0x30016Cu;
    // 0x30016c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x30016Cu;
    {
        const bool branch_taken_0x30016c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30016Cu;
        // 0x300170: 0x3c060030  lui         $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30016c) {
            ctx->pc = 0x3001A4u;
            goto label_3001a4;
        }
    }
    ctx->pc = 0x300174u;
label_300174:
    // 0x300174: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x300174u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x300178: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x300178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x30017c: 0x24a50270  addiu       $a1, $a1, 0x270
    ctx->pc = 0x30017cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 624));
    // 0x300180: 0xc0bf86c  jal         func_2FE1B0
    ctx->pc = 0x300180u;
    SET_GPR_U32(ctx, 31, 0x300188u);
    ctx->pc = 0x300184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300180u;
    // 0x300184: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE1B0u, 0x300180u, 0x300188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300188u;
label_300188:
    // 0x300188: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x300188u;
    {
        const bool branch_taken_0x300188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300188) {
            ctx->pc = 0x30025Cu;
            goto label_30025c;
        }
    }
    ctx->pc = 0x300190u;
label_300190:
    // 0x300190: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x300190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x300194: 0xc082674  jal         func_2099D0
    ctx->pc = 0x300194u;
    SET_GPR_U32(ctx, 31, 0x30019Cu);
    ctx->pc = 0x300198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300194u;
    // 0x300198: 0x2484da10  addiu       $a0, $a0, -0x25F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x300194u, 0x30019Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30019Cu;
label_30019c:
    // 0x30019c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x30019Cu;
    {
        const bool branch_taken_0x30019c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30019c) {
            ctx->pc = 0x30025Cu;
            goto label_30025c;
        }
    }
    ctx->pc = 0x3001A4u;
label_3001a4:
    // 0x3001a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3001a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3001a8: 0x24c6ff90  addiu       $a2, $a2, -0x70
    ctx->pc = 0x3001a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967184));
    // 0x3001ac: 0xc0bf89c  jal         func_2FE270
    ctx->pc = 0x3001ACu;
    SET_GPR_U32(ctx, 31, 0x3001B4u);
    ctx->pc = 0x3001B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3001ACu;
    // 0x3001b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE270u, 0x3001ACu, 0x3001B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3001B4u;
label_3001b4:
    // 0x3001b4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x3001B4u;
    {
        const bool branch_taken_0x3001b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3001b4) {
            ctx->pc = 0x30025Cu;
            goto label_30025c;
        }
    }
    ctx->pc = 0x3001BCu;
label_3001bc:
    // 0x3001bc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3001bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3001c0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x3001c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x3001c4: 0x24843150  addiu       $a0, $a0, 0x3150
    ctx->pc = 0x3001c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12624));
    // 0x3001c8: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x3001C8u;
    SET_GPR_U32(ctx, 31, 0x3001D0u);
    ctx->pc = 0x3001CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3001C8u;
    // 0x3001cc: 0x24a530e0  addiu       $a1, $a1, 0x30E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x3001C8u, 0x3001D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3001D0u;
label_3001d0:
    // 0x3001d0: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x3001d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x3001d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3001d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3001d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3001d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3001dc: 0x24c630e0  addiu       $a2, $a2, 0x30E0
    ctx->pc = 0x3001dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12512));
    // 0x3001e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3001e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3001e4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x3001e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3001e8: 0xc047c0a  jal         func_11F028
    ctx->pc = 0x3001E8u;
    SET_GPR_U32(ctx, 31, 0x3001F0u);
    ctx->pc = 0x3001ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3001E8u;
    // 0x3001ec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F028u, 0x3001E8u, 0x3001F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3001F0u;
label_3001f0:
    // 0x3001f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3001f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3001f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3001f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3001f8: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x3001F8u;
    SET_GPR_U32(ctx, 31, 0x300200u);
    ctx->pc = 0x3001FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3001F8u;
    // 0x3001fc: 0x27a6001c  addiu       $a2, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED18u, 0x3001F8u, 0x300200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300200u;
label_300200:
    // 0x300200: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x300200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x300204: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x300204u;
    {
        const bool branch_taken_0x300204 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x300204) {
            ctx->pc = 0x300208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300204u;
            // 0x300208: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300228u;
            goto label_300228;
        }
    }
    ctx->pc = 0x30020Cu;
    // 0x30020c: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x30020cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x300210: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x300210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x300214: 0x24a50270  addiu       $a1, $a1, 0x270
    ctx->pc = 0x300214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 624));
    // 0x300218: 0xc0bf86c  jal         func_2FE1B0
    ctx->pc = 0x300218u;
    SET_GPR_U32(ctx, 31, 0x300220u);
    ctx->pc = 0x30021Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300218u;
    // 0x30021c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE1B0u, 0x300218u, 0x300220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300220u;
label_300220:
    // 0x300220: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x300220u;
    {
        const bool branch_taken_0x300220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300220) {
            ctx->pc = 0x30025Cu;
            goto label_30025c;
        }
    }
    ctx->pc = 0x300228u;
label_300228:
    // 0x300228: 0x284100e1  slti        $at, $v0, 0xE1
    ctx->pc = 0x300228u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)225) ? 1 : 0);
    // 0x30022c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x30022Cu;
    {
        const bool branch_taken_0x30022c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30022c) {
            ctx->pc = 0x300250u;
            goto label_300250;
        }
    }
    ctx->pc = 0x300234u;
    // 0x300234: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x300234u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x300238: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x300238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30023c: 0x24c6ff90  addiu       $a2, $a2, -0x70
    ctx->pc = 0x30023cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967184));
    // 0x300240: 0xc0bf89c  jal         func_2FE270
    ctx->pc = 0x300240u;
    SET_GPR_U32(ctx, 31, 0x300248u);
    ctx->pc = 0x300244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300240u;
    // 0x300244: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE270u, 0x300240u, 0x300248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300248u;
label_300248:
    // 0x300248: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x300248u;
    {
        const bool branch_taken_0x300248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300248) {
            ctx->pc = 0x30025Cu;
            goto label_30025c;
        }
    }
    ctx->pc = 0x300250u;
label_300250:
    // 0x300250: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x300250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x300254: 0xc082674  jal         func_2099D0
    ctx->pc = 0x300254u;
    SET_GPR_U32(ctx, 31, 0x30025Cu);
    ctx->pc = 0x300258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300254u;
    // 0x300258: 0x2484da10  addiu       $a0, $a0, -0x25F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x300254u, 0x30025Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30025Cu;
label_30025c:
    // 0x30025c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30025cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_300260:
    // 0x300260: 0x3e00008  jr          $ra
    ctx->pc = 0x300260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300260u;
        // 0x300264: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300268u;
    // 0x300268: 0x0  nop
    ctx->pc = 0x300268u;
    // NOP
    // 0x30026c: 0x0  nop
    ctx->pc = 0x30026cu;
    // NOP
    // 0x300270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x300270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x300274: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x300274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x300278: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x300278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30027c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30027cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300280: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x300280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_300284:
    // 0x300284: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x300284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300288: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x300288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x30028c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30028cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300290: 0xc047b8e  jal         func_11EE38
    ctx->pc = 0x300290u;
    SET_GPR_U32(ctx, 31, 0x300298u);
    ctx->pc = 0x300294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300290u;
    // 0x300294: 0x27a80028  addiu       $t0, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE38u, 0x300290u, 0x300298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300298u;
label_300298:
    // 0x300298: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x300298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30029c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30029cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3002a0: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x3002A0u;
    SET_GPR_U32(ctx, 31, 0x3002A8u);
    ctx->pc = 0x3002A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3002A0u;
    // 0x3002a4: 0x27a60024  addiu       $a2, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED18u, 0x3002A0u, 0x3002A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3002A8u;
label_3002a8:
    // 0x3002a8: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x3002a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x3002ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3002acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3002b0: 0x50820007  beql        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3002B0u;
    {
        const bool branch_taken_0x3002b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3002b0) {
            ctx->pc = 0x3002B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3002B0u;
            // 0x3002b4: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3002D0u;
            goto label_3002d0;
        }
    }
    ctx->pc = 0x3002B8u;
    // 0x3002b8: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x3002b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x3002bc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x3002bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3002c0: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x3002C0u;
    SET_GPR_U32(ctx, 31, 0x3002C8u);
    ctx->pc = 0x3002C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3002C0u;
    // 0x3002c4: 0x24a5ff90  addiu       $a1, $a1, -0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x3002C0u, 0x3002C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3002C8u;
label_3002c8:
    // 0x3002c8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x3002C8u;
    {
        const bool branch_taken_0x3002c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3002CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3002C8u;
        // 0x3002cc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3002c8) {
            ctx->pc = 0x30038Cu;
            goto label_30038c;
        }
    }
    ctx->pc = 0x3002D0u;
label_3002d0:
    // 0x3002d0: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3002D0u;
    {
        const bool branch_taken_0x3002d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3002d0) {
            ctx->pc = 0x300314u;
            goto label_300314;
        }
    }
    ctx->pc = 0x3002D8u;
    // 0x3002d8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3002d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3002dc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3002DCu;
    {
        const bool branch_taken_0x3002dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3002dc) {
            ctx->pc = 0x3002F8u;
            goto label_3002f8;
        }
    }
    ctx->pc = 0x3002E4u;
    // 0x3002e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3002e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3002e8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3002E8u;
    {
        const bool branch_taken_0x3002e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3002e8) {
            ctx->pc = 0x3002F8u;
            goto label_3002f8;
        }
    }
    ctx->pc = 0x3002F0u;
    // 0x3002f0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3002F0u;
    {
        const bool branch_taken_0x3002f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3002F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3002F0u;
        // 0x3002f4: 0x3c050030  lui         $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3002f0) {
            ctx->pc = 0x30037Cu;
            goto label_30037c;
        }
    }
    ctx->pc = 0x3002F8u;
label_3002f8:
    // 0x3002f8: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x3002f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x3002fc: 0x24a50270  addiu       $a1, $a1, 0x270
    ctx->pc = 0x3002fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 624));
    // 0x300300: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x300300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x300304: 0xc0bf86c  jal         func_2FE1B0
    ctx->pc = 0x300304u;
    SET_GPR_U32(ctx, 31, 0x30030Cu);
    ctx->pc = 0x300308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300304u;
    // 0x300308: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE1B0u, 0x300304u, 0x30030Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30030Cu;
label_30030c:
    // 0x30030c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x30030Cu;
    {
        const bool branch_taken_0x30030c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30030c) {
            ctx->pc = 0x300388u;
            goto label_300388;
        }
    }
    ctx->pc = 0x300314u;
label_300314:
    // 0x300314: 0x50820007  beql        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x300314u;
    {
        const bool branch_taken_0x300314 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x300314) {
            ctx->pc = 0x300318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300314u;
            // 0x300318: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300334u;
            goto label_300334;
        }
    }
    ctx->pc = 0x30031Cu;
    // 0x30031c: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x30031cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x300320: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x300320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x300324: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x300324u;
    SET_GPR_U32(ctx, 31, 0x30032Cu);
    ctx->pc = 0x300328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300324u;
    // 0x300328: 0x24a5ff90  addiu       $a1, $a1, -0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x300324u, 0x30032Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30032Cu;
label_30032c:
    // 0x30032c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x30032Cu;
    {
        const bool branch_taken_0x30032c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30032c) {
            ctx->pc = 0x300388u;
            goto label_300388;
        }
    }
    ctx->pc = 0x300334u;
label_300334:
    // 0x300334: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x300334u;
    {
        const bool branch_taken_0x300334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x300334) {
            ctx->pc = 0x300364u;
            goto label_300364;
        }
    }
    ctx->pc = 0x30033Cu;
    // 0x30033c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x30033cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x300340: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x300340u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x300344: 0x5440ffcf  bnel        $v0, $zero, . + 4 + (-0x31 << 2)
    ctx->pc = 0x300344u;
    {
        const bool branch_taken_0x300344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x300344) {
            ctx->pc = 0x300348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300344u;
            // 0x300348: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300284u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_300284;
        }
    }
    ctx->pc = 0x30034Cu;
    // 0x30034c: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x30034cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x300350: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x300350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x300354: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x300354u;
    SET_GPR_U32(ctx, 31, 0x30035Cu);
    ctx->pc = 0x300358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300354u;
    // 0x300358: 0x24a5ff90  addiu       $a1, $a1, -0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x300354u, 0x30035Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30035Cu;
label_30035c:
    // 0x30035c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x30035Cu;
    {
        const bool branch_taken_0x30035c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30035c) {
            ctx->pc = 0x300388u;
            goto label_300388;
        }
    }
    ctx->pc = 0x300364u;
label_300364:
    // 0x300364: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x300364u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x300368: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x300368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x30036c: 0xc0bf7fc  jal         func_2FDFF0
    ctx->pc = 0x30036Cu;
    SET_GPR_U32(ctx, 31, 0x300374u);
    ctx->pc = 0x300370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30036Cu;
    // 0x300370: 0x24a503a0  addiu       $a1, $a1, 0x3A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDFF0u, 0x30036Cu, 0x300374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300374u;
label_300374:
    // 0x300374: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x300374u;
    {
        const bool branch_taken_0x300374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300374) {
            ctx->pc = 0x300388u;
            goto label_300388;
        }
    }
    ctx->pc = 0x30037Cu;
label_30037c:
    // 0x30037c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x30037cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x300380: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x300380u;
    SET_GPR_U32(ctx, 31, 0x300388u);
    ctx->pc = 0x300384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300380u;
    // 0x300384: 0x24a5ff90  addiu       $a1, $a1, -0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x300380u, 0x300388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300388u;
label_300388:
    // 0x300388: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x300388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_30038c:
    // 0x30038c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30038cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x300390: 0x3e00008  jr          $ra
    ctx->pc = 0x300390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300390u;
        // 0x300394: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300398u;
    // 0x300398: 0x0  nop
    ctx->pc = 0x300398u;
    // NOP
    // 0x30039c: 0x0  nop
    ctx->pc = 0x30039cu;
    // NOP
    // 0x3003a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3003a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3003a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3003a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3003a8: 0xc0bf9dc  jal         func_2FE770
    ctx->pc = 0x3003A8u;
    SET_GPR_U32(ctx, 31, 0x3003B0u);
    ctx->pc = 0x2FE770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE770u, 0x3003A8u, 0x3003B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3003B0u;
label_3003b0:
    // 0x3003b0: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3003B0u;
    {
        const bool branch_taken_0x3003b0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3003B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3003B0u;
        // 0x3003b4: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3003b0) {
            ctx->pc = 0x3003CCu;
            goto label_3003cc;
        }
    }
    ctx->pc = 0x3003B8u;
    // 0x3003b8: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x3003b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3003bc: 0xc0bf818  jal         func_2FE060
    ctx->pc = 0x3003BCu;
    SET_GPR_U32(ctx, 31, 0x3003C4u);
    ctx->pc = 0x3003C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3003BCu;
    // 0x3003c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE060u, 0x3003BCu, 0x3003C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3003C4u;
label_3003c4:
    // 0x3003c4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3003C4u;
    {
        const bool branch_taken_0x3003c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3003C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3003C4u;
        // 0x3003c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3003c4) {
            ctx->pc = 0x300440u;
            goto label_300440;
        }
    }
    ctx->pc = 0x3003CCu;
label_3003cc:
    // 0x3003cc: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x3003ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x3003d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3003d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3003d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3003d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3003d8: 0x24c630e0  addiu       $a2, $a2, 0x30E0
    ctx->pc = 0x3003d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12512));
    // 0x3003dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3003dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3003e0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x3003e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3003e4: 0xc047c0a  jal         func_11F028
    ctx->pc = 0x3003E4u;
    SET_GPR_U32(ctx, 31, 0x3003ECu);
    ctx->pc = 0x3003E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3003E4u;
    // 0x3003e8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F028u, 0x3003E4u, 0x3003ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3003ECu;
label_3003ec:
    // 0x3003ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3003ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3003f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3003f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3003f4: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x3003F4u;
    SET_GPR_U32(ctx, 31, 0x3003FCu);
    ctx->pc = 0x3003F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3003F4u;
    // 0x3003f8: 0x27a6001c  addiu       $a2, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED18u, 0x3003F4u, 0x3003FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3003FCu;
label_3003fc:
    // 0x3003fc: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x3003fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x300400: 0x2862fff6  slti        $v0, $v1, -0xA
    ctx->pc = 0x300400u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967286) ? 1 : 0);
    // 0x300404: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x300404u;
    {
        const bool branch_taken_0x300404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x300404) {
            ctx->pc = 0x30042Cu;
            goto label_30042c;
        }
    }
    ctx->pc = 0x30040Cu;
    // 0x30040c: 0x1c600007  bgtz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x30040Cu;
    {
        const bool branch_taken_0x30040c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x30040c) {
            ctx->pc = 0x30042Cu;
            goto label_30042c;
        }
    }
    ctx->pc = 0x300414u;
    // 0x300414: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x300414u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x300418: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x300418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x30041c: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x30041Cu;
    SET_GPR_U32(ctx, 31, 0x300424u);
    ctx->pc = 0x300420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30041Cu;
    // 0x300420: 0x24a5ff90  addiu       $a1, $a1, -0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x30041Cu, 0x300424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300424u;
label_300424:
    // 0x300424: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x300424u;
    {
        const bool branch_taken_0x300424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300424) {
            ctx->pc = 0x30043Cu;
            goto label_30043c;
        }
    }
    ctx->pc = 0x30042Cu;
label_30042c:
    // 0x30042c: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x30042cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x300430: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x300430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x300434: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x300434u;
    SET_GPR_U32(ctx, 31, 0x30043Cu);
    ctx->pc = 0x300438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300434u;
    // 0x300438: 0x24a5ff90  addiu       $a1, $a1, -0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D0u, 0x300434u, 0x30043Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30043Cu;
label_30043c:
    // 0x30043c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30043cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_300440:
    // 0x300440: 0x3e00008  jr          $ra
    ctx->pc = 0x300440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300440u;
        // 0x300444: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300448u;
    // 0x300448: 0x0  nop
    ctx->pc = 0x300448u;
    // NOP
    // 0x30044c: 0x0  nop
    ctx->pc = 0x30044cu;
    // NOP
    // 0x300450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x300450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x300454: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x300454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x300458: 0xc069184  jal         func_1A4610
    ctx->pc = 0x300458u;
    SET_GPR_U32(ctx, 31, 0x300460u);
    ctx->pc = 0x30045Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300458u;
    // 0x30045c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4610u, 0x300458u, 0x300460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300460u;
label_300460:
    // 0x300460: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x300460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x300464: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x300464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300468: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x300468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x30046c: 0x24840490  addiu       $a0, $a0, 0x490
    ctx->pc = 0x30046cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1168));
    // 0x300470: 0xc0bf7e8  jal         func_2FDFA0
    ctx->pc = 0x300470u;
    SET_GPR_U32(ctx, 31, 0x300478u);
    ctx->pc = 0x300474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300470u;
    // 0x300474: 0xac439728  sw          $v1, -0x68D8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940456), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDFA0u, 0x300470u, 0x300478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300478u;
label_300478:
    // 0x300478: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x300478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30047c: 0x3e00008  jr          $ra
    ctx->pc = 0x30047Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30047Cu;
        // 0x300480: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30047Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300484u;
    // 0x300484: 0x0  nop
    ctx->pc = 0x300484u;
    // NOP
    // 0x300488: 0x0  nop
    ctx->pc = 0x300488u;
    // NOP
    // 0x30048c: 0x0  nop
    ctx->pc = 0x30048cu;
    // NOP
    // 0x300490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x300490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x300494: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x300494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x300498: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x300498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30049c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30049cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3004a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3004a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3004a4:
    // 0x3004a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3004a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3004a8: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x3004a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x3004ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3004acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3004b0: 0xc047b8e  jal         func_11EE38
    ctx->pc = 0x3004B0u;
    SET_GPR_U32(ctx, 31, 0x3004B8u);
    ctx->pc = 0x3004B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3004B0u;
    // 0x3004b4: 0x27a80028  addiu       $t0, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE38u, 0x3004B0u, 0x3004B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3004B8u;
label_3004b8:
    // 0x3004b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3004b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3004bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3004bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3004c0: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x3004C0u;
    SET_GPR_U32(ctx, 31, 0x3004C8u);
    ctx->pc = 0x3004C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3004C0u;
    // 0x3004c4: 0x27a60024  addiu       $a2, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED18u, 0x3004C0u, 0x3004C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3004C8u;
label_3004c8:
    // 0x3004c8: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x3004c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x3004cc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3004CCu;
    {
        const bool branch_taken_0x3004cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3004cc) {
            ctx->pc = 0x3004E0u;
            goto label_3004e0;
        }
    }
    ctx->pc = 0x3004D4u;
    // 0x3004d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3004d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3004d8: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x3004d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x3004dc: 0xa0430c20  sb          $v1, 0xC20($v0)
    ctx->pc = 0x3004dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3104), (uint8_t)GPR_U32(ctx, 3));
label_3004e0:
    // 0x3004e0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3004e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3004e4: 0x50a40008  beql        $a1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3004E4u;
    {
        const bool branch_taken_0x3004e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x3004e4) {
            ctx->pc = 0x3004E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3004E4u;
            // 0x3004e8: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300508u;
            goto label_300508;
        }
    }
    ctx->pc = 0x3004ECu;
    // 0x3004ec: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x3004ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x3004f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3004f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3004f4: 0x24c60450  addiu       $a2, $a2, 0x450
    ctx->pc = 0x3004f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1104));
    // 0x3004f8: 0xc0bf89c  jal         func_2FE270
    ctx->pc = 0x3004F8u;
    SET_GPR_U32(ctx, 31, 0x300500u);
    ctx->pc = 0x3004FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3004F8u;
    // 0x3004fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE270u, 0x3004F8u, 0x300500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300500u;
label_300500:
    // 0x300500: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x300500u;
    {
        const bool branch_taken_0x300500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300500u;
        // 0x300504: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300500) {
            ctx->pc = 0x3005E4u;
            return;
        }
    }
    ctx->pc = 0x300508u;
label_300508:
    // 0x300508: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x300508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x30050c: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x30050Cu;
    {
        const bool branch_taken_0x30050c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30050c) {
            ctx->pc = 0x300598u;
            goto label_300598;
        }
    }
    ctx->pc = 0x300514u;
    // 0x300514: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x300514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x300518: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x300518u;
    {
        const bool branch_taken_0x300518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x300518) {
            ctx->pc = 0x300530u;
            goto label_300530;
        }
    }
    ctx->pc = 0x300520u;
    // 0x300520: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x300520u;
    {
        const bool branch_taken_0x300520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x300520) {
            ctx->pc = 0x300530u;
            goto label_300530;
        }
    }
    ctx->pc = 0x300528u;
    // 0x300528: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x300528u;
    {
        const bool branch_taken_0x300528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30052Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300528u;
        // 0x30052c: 0x3c060030  lui         $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300528) {
            ctx->pc = 0x3005D0u;
            goto label_3005d0;
        }
    }
    ctx->pc = 0x300530u;
label_300530:
    // 0x300530: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x300530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x300534: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x300534u;
    {
        const bool branch_taken_0x300534 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x300534) {
            ctx->pc = 0x300538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300534u;
            // 0x300538: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300558u;
            goto label_300558;
        }
    }
    ctx->pc = 0x30053Cu;
    // 0x30053c: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x30053cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x300540: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x300540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300544: 0x24c60490  addiu       $a2, $a2, 0x490
    ctx->pc = 0x300544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1168));
    // 0x300548: 0xc0bf89c  jal         func_2FE270
    ctx->pc = 0x300548u;
    SET_GPR_U32(ctx, 31, 0x300550u);
    ctx->pc = 0x30054Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300548u;
    // 0x30054c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE270u, 0x300548u, 0x300550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300550u;
label_300550:
    // 0x300550: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x300550u;
    {
        const bool branch_taken_0x300550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300550) {
            ctx->pc = 0x3005E0u;
            goto label_3005e0;
        }
    }
    ctx->pc = 0x300558u;
label_300558:
    // 0x300558: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x300558u;
    {
        const bool branch_taken_0x300558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x300558) {
            ctx->pc = 0x300584u;
            goto label_300584;
        }
    }
    ctx->pc = 0x300560u;
    // 0x300560: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x300560u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x300564: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x300564u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x300568: 0x5440ffce  bnel        $v0, $zero, . + 4 + (-0x32 << 2)
    ctx->pc = 0x300568u;
    {
        const bool branch_taken_0x300568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x300568) {
            ctx->pc = 0x30056Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300568u;
            // 0x30056c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3004A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3004a4;
        }
    }
    ctx->pc = 0x300570u;
    // 0x300570: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x300570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x300574: 0xc082674  jal         func_2099D0
    ctx->pc = 0x300574u;
    SET_GPR_U32(ctx, 31, 0x30057Cu);
    ctx->pc = 0x300578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300574u;
    // 0x300578: 0x2484da10  addiu       $a0, $a0, -0x25F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x300574u, 0x30057Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30057Cu;
label_30057c:
    // 0x30057c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x30057Cu;
    {
        const bool branch_taken_0x30057c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30057c) {
            ctx->pc = 0x3005E0u;
            goto label_3005e0;
        }
    }
    ctx->pc = 0x300584u;
label_300584:
    // 0x300584: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x300584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x300588: 0xc082674  jal         func_2099D0
    ctx->pc = 0x300588u;
    SET_GPR_U32(ctx, 31, 0x300590u);
    ctx->pc = 0x30058Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300588u;
    // 0x30058c: 0x248405f0  addiu       $a0, $a0, 0x5F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x300588u, 0x300590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300590u;
label_300590:
    // 0x300590: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x300590u;
    {
        const bool branch_taken_0x300590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300590) {
            ctx->pc = 0x3005E0u;
            goto label_3005e0;
        }
    }
    ctx->pc = 0x300598u;
label_300598:
    // 0x300598: 0x14a40006  bne         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x300598u;
    {
        const bool branch_taken_0x300598 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x300598) {
            ctx->pc = 0x3005B4u;
            goto label_3005b4;
        }
    }
    ctx->pc = 0x3005A0u;
    // 0x3005a0: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x3005a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x3005a4: 0xc082674  jal         func_2099D0
    ctx->pc = 0x3005A4u;
    SET_GPR_U32(ctx, 31, 0x3005ACu);
    ctx->pc = 0x3005A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3005A4u;
    // 0x3005a8: 0x2484da10  addiu       $a0, $a0, -0x25F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x3005A4u, 0x3005ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3005ACu;
label_3005ac:
    // 0x3005ac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3005ACu;
    {
        const bool branch_taken_0x3005ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3005ac) {
            ctx->pc = 0x3005E0u;
            goto label_3005e0;
        }
    }
    ctx->pc = 0x3005B4u;
label_3005b4:
    // 0x3005b4: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x3005b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x3005b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3005b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3005bc: 0x24c60490  addiu       $a2, $a2, 0x490
    ctx->pc = 0x3005bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1168));
    // 0x3005c0: 0xc0bf89c  jal         func_2FE270
    ctx->pc = 0x3005C0u;
    SET_GPR_U32(ctx, 31, 0x3005C8u);
    ctx->pc = 0x3005C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3005C0u;
    // 0x3005c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE270u, 0x3005C0u, 0x3005C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3005C8u;
label_3005c8:
    // 0x3005c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3005C8u;
    {
        const bool branch_taken_0x3005c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3005c8) {
            ctx->pc = 0x3005E0u;
            goto label_3005e0;
        }
    }
    ctx->pc = 0x3005D0u;
label_3005d0:
    // 0x3005d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3005d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3005d4: 0x24c60490  addiu       $a2, $a2, 0x490
    ctx->pc = 0x3005d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1168));
    // 0x3005d8: 0xc0bf89c  jal         func_2FE270
    ctx->pc = 0x3005D8u;
    SET_GPR_U32(ctx, 31, 0x3005E0u);
    ctx->pc = 0x3005DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3005D8u;
    // 0x3005dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE270u, 0x3005D8u, 0x3005E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3005E0u;
label_3005e0:
    // 0x3005e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3005e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
}
