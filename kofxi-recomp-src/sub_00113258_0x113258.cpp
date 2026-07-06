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

// Function: sub_00113258
// Address: 0x113258 - 0x1147d8
void sub_00113258_0x113258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113258_0x113258");
#endif

    switch (ctx->pc) {
        case 0x113298u: goto label_113298;
        case 0x1132b0u: goto label_1132b0;
        case 0x1132d8u: goto label_1132d8;
        case 0x113344u: goto label_113344;
        case 0x113384u: goto label_113384;
        case 0x113394u: goto label_113394;
        case 0x11339cu: goto label_11339c;
        case 0x1133b0u: goto label_1133b0;
        case 0x1133c0u: goto label_1133c0;
        case 0x1133d0u: goto label_1133d0;
        case 0x1133d8u: goto label_1133d8;
        case 0x113418u: goto label_113418;
        case 0x113468u: goto label_113468;
        case 0x113480u: goto label_113480;
        case 0x1134a8u: goto label_1134a8;
        case 0x11351cu: goto label_11351c;
        case 0x11355cu: goto label_11355c;
        case 0x11356cu: goto label_11356c;
        case 0x113574u: goto label_113574;
        case 0x113588u: goto label_113588;
        case 0x113598u: goto label_113598;
        case 0x1135a8u: goto label_1135a8;
        case 0x1135b0u: goto label_1135b0;
        case 0x1135f0u: goto label_1135f0;
        case 0x113648u: goto label_113648;
        case 0x113660u: goto label_113660;
        case 0x113680u: goto label_113680;
        case 0x1136e8u: goto label_1136e8;
        case 0x113728u: goto label_113728;
        case 0x113750u: goto label_113750;
        case 0x1137b0u: goto label_1137b0;
        case 0x1137d0u: goto label_1137d0;
        case 0x1137fcu: goto label_1137fc;
        case 0x11380cu: goto label_11380c;
        case 0x113814u: goto label_113814;
        case 0x113828u: goto label_113828;
        case 0x113838u: goto label_113838;
        case 0x113848u: goto label_113848;
        case 0x113850u: goto label_113850;
        case 0x1138acu: goto label_1138ac;
        case 0x1138c4u: goto label_1138c4;
        case 0x1138e8u: goto label_1138e8;
        case 0x113938u: goto label_113938;
        case 0x113948u: goto label_113948;
        case 0x113950u: goto label_113950;
        case 0x113964u: goto label_113964;
        case 0x113974u: goto label_113974;
        case 0x113984u: goto label_113984;
        case 0x11398cu: goto label_11398c;
        case 0x1139c0u: goto label_1139c0;
        case 0x1139f0u: goto label_1139f0;
        case 0x113a08u: goto label_113a08;
        case 0x113a10u: goto label_113a10;
        case 0x113a18u: goto label_113a18;
        case 0x113a34u: goto label_113a34;
        case 0x113a48u: goto label_113a48;
        case 0x113a5cu: goto label_113a5c;
        case 0x113a7cu: goto label_113a7c;
        case 0x113ac0u: goto label_113ac0;
        case 0x113accu: goto label_113acc;
        case 0x113af8u: goto label_113af8;
        case 0x113b24u: goto label_113b24;
        case 0x113b74u: goto label_113b74;
        case 0x113b84u: goto label_113b84;
        case 0x113b8cu: goto label_113b8c;
        case 0x113ba4u: goto label_113ba4;
        case 0x113bb4u: goto label_113bb4;
        case 0x113bc4u: goto label_113bc4;
        case 0x113bccu: goto label_113bcc;
        case 0x113c28u: goto label_113c28;
        case 0x113c34u: goto label_113c34;
        case 0x113c60u: goto label_113c60;
        case 0x113c90u: goto label_113c90;
        case 0x113ce0u: goto label_113ce0;
        case 0x113cf0u: goto label_113cf0;
        case 0x113cf8u: goto label_113cf8;
        case 0x113d0cu: goto label_113d0c;
        case 0x113d1cu: goto label_113d1c;
        case 0x113d2cu: goto label_113d2c;
        case 0x113d34u: goto label_113d34;
        case 0x113d98u: goto label_113d98;
        case 0x113db0u: goto label_113db0;
        case 0x113dd8u: goto label_113dd8;
        case 0x113e48u: goto label_113e48;
        case 0x113e88u: goto label_113e88;
        case 0x113e98u: goto label_113e98;
        case 0x113ea0u: goto label_113ea0;
        case 0x113eb4u: goto label_113eb4;
        case 0x113ec4u: goto label_113ec4;
        case 0x113ed4u: goto label_113ed4;
        case 0x113edcu: goto label_113edc;
        case 0x113f58u: goto label_113f58;
        case 0x113f70u: goto label_113f70;
        case 0x113f98u: goto label_113f98;
        case 0x114088u: goto label_114088;
        case 0x1140a8u: goto label_1140a8;
        case 0x1140d4u: goto label_1140d4;
        case 0x1140e4u: goto label_1140e4;
        case 0x1140ecu: goto label_1140ec;
        case 0x114100u: goto label_114100;
        case 0x114110u: goto label_114110;
        case 0x114120u: goto label_114120;
        case 0x114128u: goto label_114128;
        case 0x11419cu: goto label_11419c;
        case 0x1141b4u: goto label_1141b4;
        case 0x1141e0u: goto label_1141e0;
        case 0x114248u: goto label_114248;
        case 0x11429cu: goto label_11429c;
        case 0x1142bcu: goto label_1142bc;
        case 0x1142e8u: goto label_1142e8;
        case 0x1142f8u: goto label_1142f8;
        case 0x114300u: goto label_114300;
        case 0x114314u: goto label_114314;
        case 0x114324u: goto label_114324;
        case 0x114334u: goto label_114334;
        case 0x11433cu: goto label_11433c;
        case 0x114378u: goto label_114378;
        case 0x1143c4u: goto label_1143c4;
        case 0x1143dcu: goto label_1143dc;
        case 0x114408u: goto label_114408;
        case 0x114474u: goto label_114474;
        case 0x1144b4u: goto label_1144b4;
        case 0x1144c4u: goto label_1144c4;
        case 0x1144ccu: goto label_1144cc;
        case 0x1144e0u: goto label_1144e0;
        case 0x1144f0u: goto label_1144f0;
        case 0x114500u: goto label_114500;
        case 0x114508u: goto label_114508;
        case 0x114588u: goto label_114588;
        case 0x1145a0u: goto label_1145a0;
        case 0x1145c0u: goto label_1145c0;
        case 0x114618u: goto label_114618;
        case 0x114658u: goto label_114658;
        case 0x114680u: goto label_114680;
        case 0x1146e4u: goto label_1146e4;
        case 0x114704u: goto label_114704;
        case 0x114730u: goto label_114730;
        case 0x114740u: goto label_114740;
        case 0x114748u: goto label_114748;
        case 0x11475cu: goto label_11475c;
        case 0x11476cu: goto label_11476c;
        case 0x11477cu: goto label_11477c;
        case 0x114784u: goto label_114784;
        case 0x1147c8u: goto label_1147c8;
        default: break;
    }

    ctx->pc = 0x113258u;

label_113258:
    // 0x113258: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x113258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x11325c: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x11325cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x113260: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x113260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x113264: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x113264u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113268: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x113268u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11326c: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x11326cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x113270: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x113270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x113274: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x113274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113278: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x113278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x11327c: 0x3c170041  lui         $s7, 0x41
    ctx->pc = 0x11327cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65 << 16));
    // 0x113280: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x113280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x113284: 0x26f38280  addiu       $s3, $s7, -0x7D80
    ctx->pc = 0x113284u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 4294935168));
    // 0x113288: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x113288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x11328c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x11328cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x113290: 0xc0446d2  jal         func_111B48
    ctx->pc = 0x113290u;
    SET_GPR_U32(ctx, 31, 0x113298u);
    ctx->pc = 0x113294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113290u;
    // 0x113294: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B48u, 0x113290u, 0x113298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113298u;
label_113298:
    // 0x113298: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x113298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11329c: 0x8c43873c  lw          $v1, -0x78C4($v0)
    ctx->pc = 0x11329cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936380)));
    // 0x1132a0: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1132A0u;
    {
        const bool branch_taken_0x1132a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1132a0) {
            ctx->pc = 0x1132A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1132A0u;
            // 0x1132a4: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1132B4u;
            goto label_1132b4;
        }
    }
    ctx->pc = 0x1132A8u;
    // 0x1132a8: 0xc04471c  jal         func_111C70
    ctx->pc = 0x1132A8u;
    SET_GPR_U32(ctx, 31, 0x1132B0u);
    ctx->pc = 0x111C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111C70u, 0x1132A8u, 0x1132B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1132B0u;
label_1132b0:
    // 0x1132b0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1132b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1132b4:
    // 0x1132b4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1132b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1132b8: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1132b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1132bc: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1132BCu;
    {
        const bool branch_taken_0x1132bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1132C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132BCu;
        // 0x1132c0: 0xa262000c  sb          $v0, 0xC($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1132bc) {
            ctx->pc = 0x113304u;
            goto label_113304;
        }
    }
    ctx->pc = 0x1132C4u;
    // 0x1132c4: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1132c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1132c8: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1132c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1132cc: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1132ccu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x1132d0: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x1132d0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x1132d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1132d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1132d8:
    // 0x1132d8: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x1132d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1132dc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1132DCu;
    {
        const bool branch_taken_0x1132dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1132E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132DCu;
        // 0x1132e0: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1132dc) {
            ctx->pc = 0x113314u;
            goto label_113314;
        }
    }
    ctx->pc = 0x1132E4u;
    // 0x1132e4: 0x2702021  addu        $a0, $s3, $s0
    ctx->pc = 0x1132e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1132e8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1132e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1132ec: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x1132ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x1132f0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1132f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1132f4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1132F4u;
    {
        const bool branch_taken_0x1132f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1132f4) {
            ctx->pc = 0x1132F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1132F4u;
            // 0x1132f8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1132D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1132d8;
        }
    }
    ctx->pc = 0x1132FCu;
    // 0x1132fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1132FCu;
    {
        const bool branch_taken_0x1132fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132FCu;
        // 0x113300: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1132fc) {
            ctx->pc = 0x113318u;
            goto label_113318;
        }
    }
    ctx->pc = 0x113304u;
label_113304:
    // 0x113304: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x113304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x113308: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x113308u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11330c: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x11330cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x113310: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x113310u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
label_113314:
    // 0x113314: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x113314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_113318:
    // 0x113318: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x113318u;
    {
        const bool branch_taken_0x113318 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x11331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113318u;
        // 0x11331c: 0x24a2a908  addiu       $v0, $a1, -0x56F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113318) {
            ctx->pc = 0x113328u;
            goto label_113328;
        }
    }
    ctx->pc = 0x113320u;
    // 0x113320: 0xa260040b  sb          $zero, 0x40B($s3)
    ctx->pc = 0x113320u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1035), (uint8_t)GPR_U32(ctx, 0));
    // 0x113324: 0x241003ff  addiu       $s0, $zero, 0x3FF
    ctx->pc = 0x113324u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_113328:
    // 0x113328: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x113328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11332c: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x11332cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x113330: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x113330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x113334: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x113334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x113338: 0x26948ec0  addiu       $s4, $s4, -0x7140
    ctx->pc = 0x113338u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294938304));
    // 0x11333c: 0xc043318  jal         func_10CC60
    ctx->pc = 0x11333Cu;
    SET_GPR_U32(ctx, 31, 0x113344u);
    ctx->pc = 0x113340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11333Cu;
    // 0x113340: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC60u, 0x11333Cu, 0x113344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113344u;
label_113344:
    // 0x113344: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x113344u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113348: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x113348u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x11334c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x11334cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x113350: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x113350u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x113354: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x113354u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x113358: 0x26a49980  addiu       $a0, $s5, -0x6680
    ctx->pc = 0x113358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941056));
    // 0x11335c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x11335cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113360: 0x26e78280  addiu       $a3, $s7, -0x7D80
    ctx->pc = 0x113360u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294935168));
    // 0x113364: 0x2608000d  addiu       $t0, $s0, 0xD
    ctx->pc = 0x113364u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
    // 0x113368: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x113368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11336c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11336cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x113370: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x113370u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113374: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x113374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x113378: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x113378u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11337c: 0xc044576  jal         func_1115D8
    ctx->pc = 0x11337Cu;
    SET_GPR_U32(ctx, 31, 0x113384u);
    ctx->pc = 0x113380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11337Cu;
    // 0x113380: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1115D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1115D8u, 0x11337Cu, 0x113384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113384u;
label_113384:
    // 0x113384: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x113384u;
    {
        const bool branch_taken_0x113384 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x113388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113384u;
        // 0x113388: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113384) {
            ctx->pc = 0x1133A4u;
            goto label_1133a4;
        }
    }
    ctx->pc = 0x11338Cu;
    // 0x11338c: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x11338Cu;
    SET_GPR_U32(ctx, 31, 0x113394u);
    ctx->pc = 0x113390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11338Cu;
    // 0x113390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x11338Cu, 0x113394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113394u;
label_113394:
    // 0x113394: 0xc0446de  jal         func_111B78
    ctx->pc = 0x113394u;
    SET_GPR_U32(ctx, 31, 0x11339Cu);
    ctx->pc = 0x111B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B78u, 0x113394u, 0x11339Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11339Cu;
label_11339c:
    // 0x11339c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x11339Cu;
    {
        const bool branch_taken_0x11339c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1133A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11339Cu;
        // 0x1133a0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11339c) {
            ctx->pc = 0x1133DCu;
            goto label_1133dc;
        }
    }
    ctx->pc = 0x1133A4u;
label_1133a4:
    // 0x1133a4: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1133a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x1133a8: 0xc0446de  jal         func_111B78
    ctx->pc = 0x1133A8u;
    SET_GPR_U32(ctx, 31, 0x1133B0u);
    ctx->pc = 0x1133ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1133A8u;
    // 0x1133ac: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B78u, 0x1133A8u, 0x1133B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1133B0u;
label_1133b0:
    // 0x1133b0: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1133B0u;
    {
        const bool branch_taken_0x1133b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1133b0) {
            ctx->pc = 0x1133C8u;
            goto label_1133c8;
        }
    }
    ctx->pc = 0x1133B8u;
    // 0x1133b8: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x1133B8u;
    SET_GPR_U32(ctx, 31, 0x1133C0u);
    ctx->pc = 0x1133BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1133B8u;
    // 0x1133bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x1133B8u, 0x1133C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1133C0u;
label_1133c0:
    // 0x1133c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1133C0u;
    {
        const bool branch_taken_0x1133c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1133C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133C0u;
        // 0x1133c4: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1133c0) {
            ctx->pc = 0x1133DCu;
            goto label_1133dc;
        }
    }
    ctx->pc = 0x1133C8u;
label_1133c8:
    // 0x1133c8: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x1133C8u;
    SET_GPR_U32(ctx, 31, 0x1133D0u);
    ctx->pc = 0x1133CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1133C8u;
    // 0x1133cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x1133C8u, 0x1133D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1133D0u;
label_1133d0:
    // 0x1133d0: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x1133D0u;
    SET_GPR_U32(ctx, 31, 0x1133D8u);
    ctx->pc = 0x1133D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1133D0u;
    // 0x1133d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x1133D0u, 0x1133D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1133D8u;
label_1133d8:
    // 0x1133d8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1133d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1133dc:
    // 0x1133dc: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1133dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1133e0: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1133e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1133e4: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1133e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1133e8: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1133e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1133ec: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1133ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1133f0: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1133f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1133f4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1133f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1133f8: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1133f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1133fc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1133fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x113400: 0x3e00008  jr          $ra
    ctx->pc = 0x113400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113400u;
        // 0x113404: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113408u;
    // 0x113408: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x113408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11340c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11340cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113410: 0xc044c96  jal         func_113258
    ctx->pc = 0x113410u;
    SET_GPR_U32(ctx, 31, 0x113418u);
    ctx->pc = 0x113414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113410u;
    // 0x113414: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113258u;
    goto label_113258;
    ctx->pc = 0x113418u;
label_113418:
    // 0x113418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11341c: 0x3e00008  jr          $ra
    ctx->pc = 0x11341Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11341Cu;
        // 0x113420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11341Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113424u;
    // 0x113424: 0x0  nop
    ctx->pc = 0x113424u;
    // NOP
    // 0x113428: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x113428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x11342c: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x11342cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x113430: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x113430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x113434: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x113434u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113438: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x113438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x11343c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x11343cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113440: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x113440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x113444: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x113444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x113448: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x113448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x11344c: 0x3c170041  lui         $s7, 0x41
    ctx->pc = 0x11344cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65 << 16));
    // 0x113450: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x113450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x113454: 0x26f28280  addiu       $s2, $s7, -0x7D80
    ctx->pc = 0x113454u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 4294935168));
    // 0x113458: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x113458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x11345c: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x11345cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x113460: 0xc0446d2  jal         func_111B48
    ctx->pc = 0x113460u;
    SET_GPR_U32(ctx, 31, 0x113468u);
    ctx->pc = 0x113464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113460u;
    // 0x113464: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B48u, 0x113460u, 0x113468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113468u;
label_113468:
    // 0x113468: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x113468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11346c: 0x8c43873c  lw          $v1, -0x78C4($v0)
    ctx->pc = 0x11346cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936380)));
    // 0x113470: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x113470u;
    {
        const bool branch_taken_0x113470 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x113470) {
            ctx->pc = 0x113474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113470u;
            // 0x113474: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113484u;
            goto label_113484;
        }
    }
    ctx->pc = 0x113478u;
    // 0x113478: 0xc04471c  jal         func_111C70
    ctx->pc = 0x113478u;
    SET_GPR_U32(ctx, 31, 0x113480u);
    ctx->pc = 0x111C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111C70u, 0x113478u, 0x113480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113480u;
label_113480:
    // 0x113480: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x113480u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_113484:
    // 0x113484: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x113484u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113488: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x113488u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x11348c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x11348Cu;
    {
        const bool branch_taken_0x11348c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x113490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11348Cu;
        // 0x113490: 0xa2420010  sb          $v0, 0x10($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11348c) {
            ctx->pc = 0x1134D4u;
            goto label_1134d4;
        }
    }
    ctx->pc = 0x113494u;
    // 0x113494: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x113494u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x113498: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x113498u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11349c: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x11349cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x1134a0: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x1134a0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x1134a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1134a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1134a8:
    // 0x1134a8: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x1134a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1134ac: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1134ACu;
    {
        const bool branch_taken_0x1134ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1134B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1134ACu;
        // 0x1134b0: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1134ac) {
            ctx->pc = 0x1134E4u;
            goto label_1134e4;
        }
    }
    ctx->pc = 0x1134B4u;
    // 0x1134b4: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x1134b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1134b8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1134b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1134bc: 0xa0830010  sb          $v1, 0x10($a0)
    ctx->pc = 0x1134bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x1134c0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1134c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1134c4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1134C4u;
    {
        const bool branch_taken_0x1134c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1134c4) {
            ctx->pc = 0x1134C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1134C4u;
            // 0x1134c8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1134A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1134a8;
        }
    }
    ctx->pc = 0x1134CCu;
    // 0x1134cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1134CCu;
    {
        const bool branch_taken_0x1134cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1134D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1134CCu;
        // 0x1134d0: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1134cc) {
            ctx->pc = 0x1134E8u;
            goto label_1134e8;
        }
    }
    ctx->pc = 0x1134D4u;
label_1134d4:
    // 0x1134d4: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1134d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1134d8: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1134d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1134dc: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1134dcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x1134e0: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x1134e0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
label_1134e4:
    // 0x1134e4: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1134e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1134e8:
    // 0x1134e8: 0x56020004  bnel        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1134E8u;
    {
        const bool branch_taken_0x1134e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1134e8) {
            ctx->pc = 0x1134ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1134E8u;
            // 0x1134ec: 0xae56000c  sw          $s6, 0xC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1134FCu;
            goto label_1134fc;
        }
    }
    ctx->pc = 0x1134F0u;
    // 0x1134f0: 0xa240040f  sb          $zero, 0x40F($s2)
    ctx->pc = 0x1134f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1039), (uint8_t)GPR_U32(ctx, 0));
    // 0x1134f4: 0x241003ff  addiu       $s0, $zero, 0x3FF
    ctx->pc = 0x1134f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1134f8: 0xae56000c  sw          $s6, 0xC($s2)
    ctx->pc = 0x1134f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
label_1134fc:
    // 0x1134fc: 0x24a3a920  addiu       $v1, $a1, -0x56E0
    ctx->pc = 0x1134fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945056));
    // 0x113500: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x113500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113504: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x113504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x113508: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x113508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x11350c: 0x26948ec0  addiu       $s4, $s4, -0x7140
    ctx->pc = 0x11350cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294938304));
    // 0x113510: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x113510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x113514: 0xc043318  jal         func_10CC60
    ctx->pc = 0x113514u;
    SET_GPR_U32(ctx, 31, 0x11351Cu);
    ctx->pc = 0x113518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113514u;
    // 0x113518: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC60u, 0x113514u, 0x11351Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11351Cu;
label_11351c:
    // 0x11351c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11351cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113520: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x113520u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x113524: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x113524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x113528: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x113528u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x11352c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x11352cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x113530: 0x26a49980  addiu       $a0, $s5, -0x6680
    ctx->pc = 0x113530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941056));
    // 0x113534: 0x26e78280  addiu       $a3, $s7, -0x7D80
    ctx->pc = 0x113534u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294935168));
    // 0x113538: 0x26080011  addiu       $t0, $s0, 0x11
    ctx->pc = 0x113538u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 17));
    // 0x11353c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11353cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x113540: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x113540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x113544: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x113544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x113548: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x113548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11354c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x11354cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113550: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x113550u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x113554: 0xc044576  jal         func_1115D8
    ctx->pc = 0x113554u;
    SET_GPR_U32(ctx, 31, 0x11355Cu);
    ctx->pc = 0x113558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113554u;
    // 0x113558: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1115D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1115D8u, 0x113554u, 0x11355Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11355Cu;
label_11355c:
    // 0x11355c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11355Cu;
    {
        const bool branch_taken_0x11355c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x113560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11355Cu;
        // 0x113560: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11355c) {
            ctx->pc = 0x11357Cu;
            goto label_11357c;
        }
    }
    ctx->pc = 0x113564u;
    // 0x113564: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x113564u;
    SET_GPR_U32(ctx, 31, 0x11356Cu);
    ctx->pc = 0x113568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113564u;
    // 0x113568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x113564u, 0x11356Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11356Cu;
label_11356c:
    // 0x11356c: 0xc0446de  jal         func_111B78
    ctx->pc = 0x11356Cu;
    SET_GPR_U32(ctx, 31, 0x113574u);
    ctx->pc = 0x111B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B78u, 0x11356Cu, 0x113574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113574u;
label_113574:
    // 0x113574: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x113574u;
    {
        const bool branch_taken_0x113574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113574u;
        // 0x113578: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113574) {
            ctx->pc = 0x1135B4u;
            goto label_1135b4;
        }
    }
    ctx->pc = 0x11357Cu;
label_11357c:
    // 0x11357c: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x11357cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x113580: 0xc0446de  jal         func_111B78
    ctx->pc = 0x113580u;
    SET_GPR_U32(ctx, 31, 0x113588u);
    ctx->pc = 0x113584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113580u;
    // 0x113584: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B78u, 0x113580u, 0x113588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113588u;
label_113588:
    // 0x113588: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x113588u;
    {
        const bool branch_taken_0x113588 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x113588) {
            ctx->pc = 0x1135A0u;
            goto label_1135a0;
        }
    }
    ctx->pc = 0x113590u;
    // 0x113590: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x113590u;
    SET_GPR_U32(ctx, 31, 0x113598u);
    ctx->pc = 0x113594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113590u;
    // 0x113594: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x113590u, 0x113598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113598u;
label_113598:
    // 0x113598: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x113598u;
    {
        const bool branch_taken_0x113598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11359Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113598u;
        // 0x11359c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113598) {
            ctx->pc = 0x1135B4u;
            goto label_1135b4;
        }
    }
    ctx->pc = 0x1135A0u;
label_1135a0:
    // 0x1135a0: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x1135A0u;
    SET_GPR_U32(ctx, 31, 0x1135A8u);
    ctx->pc = 0x1135A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1135A0u;
    // 0x1135a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x1135A0u, 0x1135A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1135A8u;
label_1135a8:
    // 0x1135a8: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x1135A8u;
    SET_GPR_U32(ctx, 31, 0x1135B0u);
    ctx->pc = 0x1135ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1135A8u;
    // 0x1135ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x1135A8u, 0x1135B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1135B0u;
label_1135b0:
    // 0x1135b0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1135b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1135b4:
    // 0x1135b4: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1135b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1135b8: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1135b8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1135bc: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1135bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1135c0: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1135c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1135c4: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1135c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1135c8: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1135c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1135cc: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1135ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1135d0: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1135d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1135d4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1135d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1135d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1135D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1135DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1135D8u;
        // 0x1135dc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1135D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1135E0u;
    // 0x1135e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1135e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1135e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1135e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1135e8: 0xc044c96  jal         func_113258
    ctx->pc = 0x1135E8u;
    SET_GPR_U32(ctx, 31, 0x1135F0u);
    ctx->pc = 0x1135ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1135E8u;
    // 0x1135ec: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113258u;
    goto label_113258;
    ctx->pc = 0x1135F0u;
label_1135f0:
    // 0x1135f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1135f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1135f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1135F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1135F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1135F4u;
        // 0x1135f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1135F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1135FCu;
    // 0x1135fc: 0x0  nop
    ctx->pc = 0x1135fcu;
    // NOP
    // 0x113600: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x113600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x113604: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x113604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x113608: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x113608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x11360c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11360cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113610: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x113610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x113614: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x113614u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113618: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x113618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x11361c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11361cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113620: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x113620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x113624: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x113624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113628: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x113628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x11362c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x11362cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x113630: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x113630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x113634: 0x3c170041  lui         $s7, 0x41
    ctx->pc = 0x113634u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65 << 16));
    // 0x113638: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x113638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x11363c: 0x26f38280  addiu       $s3, $s7, -0x7D80
    ctx->pc = 0x11363cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 4294935168));
    // 0x113640: 0xc0446d2  jal         func_111B48
    ctx->pc = 0x113640u;
    SET_GPR_U32(ctx, 31, 0x113648u);
    ctx->pc = 0x113644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113640u;
    // 0x113644: 0xffb40080  sd          $s4, 0x80($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B48u, 0x113640u, 0x113648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113648u;
label_113648:
    // 0x113648: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x113648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11364c: 0x8c43873c  lw          $v1, -0x78C4($v0)
    ctx->pc = 0x11364cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936380)));
    // 0x113650: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x113650u;
    {
        const bool branch_taken_0x113650 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x113650) {
            ctx->pc = 0x113654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113650u;
            // 0x113654: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113664u;
            goto label_113664;
        }
    }
    ctx->pc = 0x113658u;
    // 0x113658: 0xc04471c  jal         func_111C70
    ctx->pc = 0x113658u;
    SET_GPR_U32(ctx, 31, 0x113660u);
    ctx->pc = 0x111C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111C70u, 0x113658u, 0x113660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113660u;
label_113660:
    // 0x113660: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x113660u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_113664:
    // 0x113664: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x113664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113668: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x113668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x11366c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x11366Cu;
    {
        const bool branch_taken_0x11366c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x113670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11366Cu;
        // 0x113670: 0xa262000c  sb          $v0, 0xC($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11366c) {
            ctx->pc = 0x1136ACu;
            goto label_1136ac;
        }
    }
    ctx->pc = 0x113674u;
    // 0x113674: 0x2a270401  slti        $a3, $s1, 0x401
    ctx->pc = 0x113674u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x113678: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x113678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11367c: 0x0  nop
    ctx->pc = 0x11367cu;
    // NOP
label_113680:
    // 0x113680: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x113680u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x113684: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x113684u;
    {
        const bool branch_taken_0x113684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113684u;
        // 0x113688: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113684) {
            ctx->pc = 0x1136B0u;
            goto label_1136b0;
        }
    }
    ctx->pc = 0x11368Cu;
    // 0x11368c: 0x2652021  addu        $a0, $s3, $a1
    ctx->pc = 0x11368cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x113690: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x113690u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113694: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x113694u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x113698: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x113698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x11369c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11369Cu;
    {
        const bool branch_taken_0x11369c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11369c) {
            ctx->pc = 0x1136A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11369Cu;
            // 0x1136a0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113680u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_113680;
        }
    }
    ctx->pc = 0x1136A4u;
    // 0x1136a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1136A4u;
    {
        const bool branch_taken_0x1136a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1136A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1136A4u;
        // 0x1136a8: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1136a4) {
            ctx->pc = 0x1136B4u;
            goto label_1136b4;
        }
    }
    ctx->pc = 0x1136ACu;
label_1136ac:
    // 0x1136ac: 0x2a270401  slti        $a3, $s1, 0x401
    ctx->pc = 0x1136acu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
label_1136b0:
    // 0x1136b0: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1136b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1136b4:
    // 0x1136b4: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1136B4u;
    {
        const bool branch_taken_0x1136b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1136b4) {
            ctx->pc = 0x1136B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1136B4u;
            // 0x1136b8: 0xa260040b  sb          $zero, 0x40B($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 1035), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1136BCu;
            goto label_1136bc;
        }
    }
    ctx->pc = 0x1136BCu;
label_1136bc:
    // 0x1136bc: 0x56400003  bnel        $s2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1136BCu;
    {
        const bool branch_taken_0x1136bc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1136bc) {
            ctx->pc = 0x1136C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1136BCu;
            // 0x1136c0: 0x92420000  lbu         $v0, 0x0($s2) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1136CCu;
            goto label_1136cc;
        }
    }
    ctx->pc = 0x1136C4u;
    // 0x1136c4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1136C4u;
    {
        const bool branch_taken_0x1136c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1136C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1136C4u;
        // 0x1136c8: 0xa260040c  sb          $zero, 0x40C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1036), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1136c4) {
            ctx->pc = 0x113718u;
            goto label_113718;
        }
    }
    ctx->pc = 0x1136CCu;
label_1136cc:
    // 0x1136cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1136ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1136d0: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1136d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1136d4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1136D4u;
    {
        const bool branch_taken_0x1136d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1136D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1136D4u;
        // 0x1136d8: 0xa262040c  sb          $v0, 0x40C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1136d4) {
            ctx->pc = 0x11370Cu;
            goto label_11370c;
        }
    }
    ctx->pc = 0x1136DCu;
    // 0x1136dc: 0x2666040c  addiu       $a2, $s3, 0x40C
    ctx->pc = 0x1136dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1036));
    // 0x1136e0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1136e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1136e4: 0x0  nop
    ctx->pc = 0x1136e4u;
    // NOP
label_1136e8:
    // 0x1136e8: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1136e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1136ec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1136ECu;
    {
        const bool branch_taken_0x1136ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1136F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1136ECu;
        // 0x1136f0: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1136ec) {
            ctx->pc = 0x11370Cu;
            goto label_11370c;
        }
    }
    ctx->pc = 0x1136F4u;
    // 0x1136f4: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x1136f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1136f8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1136f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1136fc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1136fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x113700: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x113700u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x113704: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x113704u;
    {
        const bool branch_taken_0x113704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x113704) {
            ctx->pc = 0x113708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113704u;
            // 0x113708: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1136E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1136e8;
        }
    }
    ctx->pc = 0x11370Cu;
label_11370c:
    // 0x11370c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x11370cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x113710: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x113710u;
    {
        const bool branch_taken_0x113710 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x113710) {
            ctx->pc = 0x113714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113710u;
            // 0x113714: 0xa260080b  sb          $zero, 0x80B($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 2059), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113718u;
            goto label_113718;
        }
    }
    ctx->pc = 0x113718u;
label_113718:
    // 0x113718: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x113718u;
    {
        const bool branch_taken_0x113718 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x113718) {
            ctx->pc = 0x113730u;
            goto label_113730;
        }
    }
    ctx->pc = 0x113720u;
    // 0x113720: 0xc0446de  jal         func_111B78
    ctx->pc = 0x113720u;
    SET_GPR_U32(ctx, 31, 0x113728u);
    ctx->pc = 0x111B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B78u, 0x113720u, 0x113728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113728u;
label_113728:
    // 0x113728: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x113728u;
    {
        const bool branch_taken_0x113728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113728u;
        // 0x11372c: 0x2402fff9  addiu       $v0, $zero, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113728) {
            ctx->pc = 0x113854u;
            goto label_113854;
        }
    }
    ctx->pc = 0x113730u;
label_113730:
    // 0x113730: 0x1a200011  blez        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x113730u;
    {
        const bool branch_taken_0x113730 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x113734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113730u;
        // 0x113734: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113730) {
            ctx->pc = 0x113778u;
            goto label_113778;
        }
    }
    ctx->pc = 0x113738u;
    // 0x113738: 0x2666080c  addiu       $a2, $s3, 0x80C
    ctx->pc = 0x113738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2060));
    // 0x11373c: 0x3c07003e  lui         $a3, 0x3E
    ctx->pc = 0x11373cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)62 << 16));
    // 0x113740: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x113740u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x113744: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x113744u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x113748: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x113748u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x11374c: 0x0  nop
    ctx->pc = 0x11374cu;
    // NOP
label_113750:
    // 0x113750: 0x2c51021  addu        $v0, $s6, $a1
    ctx->pc = 0x113750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x113754: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x113754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x113758: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x113758u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11375c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11375cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x113760: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x113760u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x113764: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x113764u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x113768: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x113768u;
    {
        const bool branch_taken_0x113768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113768) {
            ctx->pc = 0x113750u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_113750;
        }
    }
    ctx->pc = 0x113770u;
    // 0x113770: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x113770u;
    {
        const bool branch_taken_0x113770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113770u;
        // 0x113774: 0xae710c0c  sw          $s1, 0xC0C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3084), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113770) {
            ctx->pc = 0x11378Cu;
            goto label_11378c;
        }
    }
    ctx->pc = 0x113778u;
label_113778:
    // 0x113778: 0x3c07003e  lui         $a3, 0x3E
    ctx->pc = 0x113778u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)62 << 16));
    // 0x11377c: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x11377cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x113780: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x113780u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x113784: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x113784u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x113788: 0xae710c0c  sw          $s1, 0xC0C($s3)
    ctx->pc = 0x113788u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3084), GPR_U32(ctx, 17));
label_11378c:
    // 0x11378c: 0x24e3a938  addiu       $v1, $a3, -0x56C8
    ctx->pc = 0x11378cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945080));
    // 0x113790: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x113790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113794: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x113794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x113798: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x113798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x11379c: 0x26f08280  addiu       $s0, $s7, -0x7D80
    ctx->pc = 0x11379cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294935168));
    // 0x1137a0: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x1137a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x1137a4: 0x26948ec0  addiu       $s4, $s4, -0x7140
    ctx->pc = 0x1137a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294938304));
    // 0x1137a8: 0xc043318  jal         func_10CC60
    ctx->pc = 0x1137A8u;
    SET_GPR_U32(ctx, 31, 0x1137B0u);
    ctx->pc = 0x1137ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1137A8u;
    // 0x1137ac: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC60u, 0x1137A8u, 0x1137B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1137B0u;
label_1137b0:
    // 0x1137b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1137b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1137b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1137b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1137b8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1137b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1137bc: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x1137bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x1137c0: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x1137c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x1137c4: 0x24050c10  addiu       $a1, $zero, 0xC10
    ctx->pc = 0x1137c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3088));
    // 0x1137c8: 0xc0440be  jal         func_1102F8
    ctx->pc = 0x1137C8u;
    SET_GPR_U32(ctx, 31, 0x1137D0u);
    ctx->pc = 0x1137CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1137C8u;
    // 0x1137cc: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1102F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1102F8u, 0x1137C8u, 0x1137D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1137D0u;
label_1137d0:
    // 0x1137d0: 0x26a49980  addiu       $a0, $s5, -0x6680
    ctx->pc = 0x1137d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941056));
    // 0x1137d4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1137d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1137d8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1137d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1137dc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1137dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1137e0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1137e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1137e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1137e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1137e8: 0x24080c10  addiu       $t0, $zero, 0xC10
    ctx->pc = 0x1137e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3088));
    // 0x1137ec: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1137ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1137f0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1137f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1137f4: 0xc044576  jal         func_1115D8
    ctx->pc = 0x1137F4u;
    SET_GPR_U32(ctx, 31, 0x1137FCu);
    ctx->pc = 0x1137F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1137F4u;
    // 0x1137f8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1115D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1115D8u, 0x1137F4u, 0x1137FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1137FCu;
label_1137fc:
    // 0x1137fc: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1137FCu;
    {
        const bool branch_taken_0x1137fc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x113800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1137FCu;
        // 0x113800: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1137fc) {
            ctx->pc = 0x11381Cu;
            goto label_11381c;
        }
    }
    ctx->pc = 0x113804u;
    // 0x113804: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x113804u;
    SET_GPR_U32(ctx, 31, 0x11380Cu);
    ctx->pc = 0x113808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113804u;
    // 0x113808: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x113804u, 0x11380Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11380Cu;
label_11380c:
    // 0x11380c: 0xc0446de  jal         func_111B78
    ctx->pc = 0x11380Cu;
    SET_GPR_U32(ctx, 31, 0x113814u);
    ctx->pc = 0x111B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B78u, 0x11380Cu, 0x113814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113814u;
label_113814:
    // 0x113814: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x113814u;
    {
        const bool branch_taken_0x113814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113814u;
        // 0x113818: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113814) {
            ctx->pc = 0x113854u;
            goto label_113854;
        }
    }
    ctx->pc = 0x11381Cu;
label_11381c:
    // 0x11381c: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x11381cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x113820: 0xc0446de  jal         func_111B78
    ctx->pc = 0x113820u;
    SET_GPR_U32(ctx, 31, 0x113828u);
    ctx->pc = 0x113824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113820u;
    // 0x113824: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B78u, 0x113820u, 0x113828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113828u;
label_113828:
    // 0x113828: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x113828u;
    {
        const bool branch_taken_0x113828 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x113828) {
            ctx->pc = 0x113840u;
            goto label_113840;
        }
    }
    ctx->pc = 0x113830u;
    // 0x113830: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x113830u;
    SET_GPR_U32(ctx, 31, 0x113838u);
    ctx->pc = 0x113834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113830u;
    // 0x113834: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x113830u, 0x113838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113838u;
label_113838:
    // 0x113838: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x113838u;
    {
        const bool branch_taken_0x113838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113838u;
        // 0x11383c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113838) {
            ctx->pc = 0x113854u;
            goto label_113854;
        }
    }
    ctx->pc = 0x113840u;
label_113840:
    // 0x113840: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x113840u;
    SET_GPR_U32(ctx, 31, 0x113848u);
    ctx->pc = 0x113844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113840u;
    // 0x113844: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x113840u, 0x113848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113848u;
label_113848:
    // 0x113848: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x113848u;
    SET_GPR_U32(ctx, 31, 0x113850u);
    ctx->pc = 0x11384Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113848u;
    // 0x11384c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x113848u, 0x113850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113850u;
label_113850:
    // 0x113850: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x113850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_113854:
    // 0x113854: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x113854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x113858: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x113858u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11385c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x11385cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x113860: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x113860u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x113864: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x113864u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x113868: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x113868u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11386c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x11386cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x113870: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x113870u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x113874: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x113874u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x113878: 0x3e00008  jr          $ra
    ctx->pc = 0x113878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113878u;
        // 0x11387c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113880u;
    // 0x113880: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x113880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x113884: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x113884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x113888: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x113888u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11388c: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x11388cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x113890: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x113890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x113894: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x113894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x113898: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x113898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x11389c: 0x3c130041  lui         $s3, 0x41
    ctx->pc = 0x11389cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65 << 16));
    // 0x1138a0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1138a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1138a4: 0xc0446d2  jal         func_111B48
    ctx->pc = 0x1138A4u;
    SET_GPR_U32(ctx, 31, 0x1138ACu);
    ctx->pc = 0x1138A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1138A4u;
    // 0x1138a8: 0x26708280  addiu       $s0, $s3, -0x7D80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294935168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B48u, 0x1138A4u, 0x1138ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1138ACu;
label_1138ac:
    // 0x1138ac: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1138acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1138b0: 0x8c62873c  lw          $v0, -0x78C4($v1)
    ctx->pc = 0x1138b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936380)));
    // 0x1138b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1138B4u;
    {
        const bool branch_taken_0x1138b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1138B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1138B4u;
        // 0x1138b8: 0x3c02003e  lui         $v0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1138b4) {
            ctx->pc = 0x1138C8u;
            goto label_1138c8;
        }
    }
    ctx->pc = 0x1138BCu;
    // 0x1138bc: 0xc04471c  jal         func_111C70
    ctx->pc = 0x1138BCu;
    SET_GPR_U32(ctx, 31, 0x1138C4u);
    ctx->pc = 0x111C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111C70u, 0x1138BCu, 0x1138C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1138C4u;
label_1138c4:
    // 0x1138c4: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x1138c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_1138c8:
    // 0x1138c8: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x1138c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x1138cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1138ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1138d0: 0x2442a950  addiu       $v0, $v0, -0x56B0
    ctx->pc = 0x1138d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945104));
    // 0x1138d4: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1138d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x1138d8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1138d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1138dc: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x1138dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x1138e0: 0xc043318  jal         func_10CC60
    ctx->pc = 0x1138E0u;
    SET_GPR_U32(ctx, 31, 0x1138E8u);
    ctx->pc = 0x1138E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1138E0u;
    // 0x1138e4: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC60u, 0x1138E0u, 0x1138E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1138E8u;
label_1138e8:
    // 0x1138e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1138e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1138ec: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1138ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1138f0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1138f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1138f4: 0xae718280  sw          $s1, -0x7D80($s3)
    ctx->pc = 0x1138f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294935168), GPR_U32(ctx, 17));
    // 0x1138f8: 0x24528ec0  addiu       $s2, $v0, -0x7140
    ctx->pc = 0x1138f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938304));
    // 0x1138fc: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1138fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x113900: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x113900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x113904: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x113904u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x113908: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x113908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x11390c: 0x24849980  addiu       $a0, $a0, -0x6680
    ctx->pc = 0x11390cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941056));
    // 0x113910: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x113910u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113914: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x113914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x113918: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x113918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11391c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11391cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113920: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x113920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x113924: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x113924u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x113928: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x113928u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11392c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x11392cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x113930: 0xc044576  jal         func_1115D8
    ctx->pc = 0x113930u;
    SET_GPR_U32(ctx, 31, 0x113938u);
    ctx->pc = 0x113934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113930u;
    // 0x113934: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1115D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1115D8u, 0x113930u, 0x113938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113938u;
label_113938:
    // 0x113938: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x113938u;
    {
        const bool branch_taken_0x113938 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113938u;
        // 0x11393c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113938) {
            ctx->pc = 0x113958u;
            goto label_113958;
        }
    }
    ctx->pc = 0x113940u;
    // 0x113940: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x113940u;
    SET_GPR_U32(ctx, 31, 0x113948u);
    ctx->pc = 0x113944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113940u;
    // 0x113944: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x113940u, 0x113948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113948u;
label_113948:
    // 0x113948: 0xc0446de  jal         func_111B78
    ctx->pc = 0x113948u;
    SET_GPR_U32(ctx, 31, 0x113950u);
    ctx->pc = 0x111B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B78u, 0x113948u, 0x113950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113950u;
label_113950:
    // 0x113950: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x113950u;
    {
        const bool branch_taken_0x113950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113950u;
        // 0x113954: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113950) {
            ctx->pc = 0x113990u;
            goto label_113990;
        }
    }
    ctx->pc = 0x113958u;
label_113958:
    // 0x113958: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x113958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x11395c: 0xc0446de  jal         func_111B78
    ctx->pc = 0x11395Cu;
    SET_GPR_U32(ctx, 31, 0x113964u);
    ctx->pc = 0x113960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11395Cu;
    // 0x113960: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B78u, 0x11395Cu, 0x113964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113964u;
label_113964:
    // 0x113964: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x113964u;
    {
        const bool branch_taken_0x113964 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x113964) {
            ctx->pc = 0x11397Cu;
            goto label_11397c;
        }
    }
    ctx->pc = 0x11396Cu;
    // 0x11396c: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x11396Cu;
    SET_GPR_U32(ctx, 31, 0x113974u);
    ctx->pc = 0x113970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11396Cu;
    // 0x113970: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x11396Cu, 0x113974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113974u;
label_113974:
    // 0x113974: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x113974u;
    {
        const bool branch_taken_0x113974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113974u;
        // 0x113978: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113974) {
            ctx->pc = 0x113990u;
            goto label_113990;
        }
    }
    ctx->pc = 0x11397Cu;
label_11397c:
    // 0x11397c: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x11397Cu;
    SET_GPR_U32(ctx, 31, 0x113984u);
    ctx->pc = 0x113980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11397Cu;
    // 0x113980: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x11397Cu, 0x113984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113984u;
label_113984:
    // 0x113984: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x113984u;
    SET_GPR_U32(ctx, 31, 0x11398Cu);
    ctx->pc = 0x113988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113984u;
    // 0x113988: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x113984u, 0x11398Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11398Cu;
label_11398c:
    // 0x11398c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x11398cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_113990:
    // 0x113990: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x113990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x113994: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x113994u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x113998: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x113998u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11399c: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x11399cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1139a0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1139a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1139a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1139A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1139A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1139A4u;
        // 0x1139a8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1139A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1139ACu;
    // 0x1139ac: 0x0  nop
    ctx->pc = 0x1139acu;
    // NOP
    // 0x1139b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1139b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1139b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1139b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1139b8: 0xc044c96  jal         func_113258
    ctx->pc = 0x1139B8u;
    SET_GPR_U32(ctx, 31, 0x1139C0u);
    ctx->pc = 0x1139BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1139B8u;
    // 0x1139bc: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113258u;
    goto label_113258;
    ctx->pc = 0x1139C0u;
label_1139c0:
    // 0x1139c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1139c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1139c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1139C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1139C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1139C4u;
        // 0x1139c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1139C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1139CCu;
    // 0x1139cc: 0x0  nop
    ctx->pc = 0x1139ccu;
    // NOP
    // 0x1139d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1139d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1139d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1139d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1139d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1139d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1139dc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1139dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1139e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1139e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1139e4: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1139e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1139e8: 0xc0446d2  jal         func_111B48
    ctx->pc = 0x1139E8u;
    SET_GPR_U32(ctx, 31, 0x1139F0u);
    ctx->pc = 0x1139ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1139E8u;
    // 0x1139ec: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B48u, 0x1139E8u, 0x1139F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1139F0u;
label_1139f0:
    // 0x1139f0: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1139f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1139f4: 0x8c62873c  lw          $v0, -0x78C4($v1)
    ctx->pc = 0x1139f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936380)));
    // 0x1139f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1139F8u;
    {
        const bool branch_taken_0x1139f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1139f8) {
            ctx->pc = 0x113A08u;
            goto label_113a08;
        }
    }
    ctx->pc = 0x113A00u;
    // 0x113a00: 0xc04471c  jal         func_111C70
    ctx->pc = 0x113A00u;
    SET_GPR_U32(ctx, 31, 0x113A08u);
    ctx->pc = 0x111C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111C70u, 0x113A00u, 0x113A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113A08u;
label_113a08:
    // 0x113a08: 0xc0446de  jal         func_111B78
    ctx->pc = 0x113A08u;
    SET_GPR_U32(ctx, 31, 0x113A10u);
    ctx->pc = 0x111B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B78u, 0x113A08u, 0x113A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113A10u;
label_113a10:
    // 0x113a10: 0xc044554  jal         func_111550
    ctx->pc = 0x113A10u;
    SET_GPR_U32(ctx, 31, 0x113A18u);
    ctx->pc = 0x111550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111550u, 0x113A10u, 0x113A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113A18u;
label_113a18:
    // 0x113a18: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x113a18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a1c: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x113A1Cu;
    {
        const bool branch_taken_0x113a1c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x113A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113A1Cu;
        // 0x113a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113a1c) {
            ctx->pc = 0x113A2Cu;
            goto label_113a2c;
        }
    }
    ctx->pc = 0x113A24u;
    // 0x113a24: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x113A24u;
    {
        const bool branch_taken_0x113a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113A24u;
        // 0x113a28: 0x2402ffed  addiu       $v0, $zero, -0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967277));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113a24) {
            ctx->pc = 0x113A80u;
            goto label_113a80;
        }
    }
    ctx->pc = 0x113A2Cu;
label_113a2c:
    // 0x113a2c: 0xc044c96  jal         func_113258
    ctx->pc = 0x113A2Cu;
    SET_GPR_U32(ctx, 31, 0x113A34u);
    ctx->pc = 0x113A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113A2Cu;
    // 0x113a30: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113258u;
    goto label_113258;
    ctx->pc = 0x113A34u;
label_113a34:
    // 0x113a34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x113a34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a38: 0x6210006  bgez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x113A38u;
    {
        const bool branch_taken_0x113a38 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x113A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113A38u;
        // 0x113a3c: 0x3c100036  lui         $s0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113a38) {
            ctx->pc = 0x113A54u;
            goto label_113a54;
        }
    }
    ctx->pc = 0x113A40u;
    // 0x113a40: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x113A40u;
    SET_GPR_U32(ctx, 31, 0x113A48u);
    ctx->pc = 0x113A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113A40u;
    // 0x113a44: 0x8e048748  lw          $a0, -0x78B8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936392)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x113A40u, 0x113A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113A48u;
label_113a48:
    // 0x113a48: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x113a48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x113a4c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x113A4Cu;
    {
        const bool branch_taken_0x113a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113A4Cu;
        // 0x113a50: 0x8e048748  lw          $a0, -0x78B8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113a4c) {
            ctx->pc = 0x113A74u;
            goto label_113a74;
        }
    }
    ctx->pc = 0x113A54u;
label_113a54:
    // 0x113a54: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x113A54u;
    SET_GPR_U32(ctx, 31, 0x113A5Cu);
    ctx->pc = 0x113A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113A54u;
    // 0x113a58: 0x8e048748  lw          $a0, -0x78B8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936392)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x113A54u, 0x113A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113A5Cu;
label_113a5c:
    // 0x113a5c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x113a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x113a60: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x113a60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x113a64: 0x24639780  addiu       $v1, $v1, -0x6880
    ctx->pc = 0x113a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940544));
    // 0x113a68: 0x8e048748  lw          $a0, -0x78B8($s0)
    ctx->pc = 0x113a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936392)));
    // 0x113a6c: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x113a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x113a70: 0x38903  sra         $s1, $v1, 4
    ctx->pc = 0x113a70u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 4));
label_113a74:
    // 0x113a74: 0xc043320  jal         func_10CC80
    ctx->pc = 0x113A74u;
    SET_GPR_U32(ctx, 31, 0x113A7Cu);
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x113A74u, 0x113A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113A7Cu;
label_113a7c:
    // 0x113a7c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x113a7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_113a80:
    // 0x113a80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x113a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x113a84: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x113a84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113a88: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x113a88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113a8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x113a8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113a90: 0x3e00008  jr          $ra
    ctx->pc = 0x113A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113A90u;
        // 0x113a94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113A98u;
    // 0x113a98: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x113a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x113a9c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x113a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x113aa0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x113aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x113aa4: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x113aa4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x113aa8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x113aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x113aac: 0x26928280  addiu       $s2, $s4, -0x7D80
    ctx->pc = 0x113aacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294935168));
    // 0x113ab0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x113ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x113ab4: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x113ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x113ab8: 0xc0445b2  jal         func_1116C8
    ctx->pc = 0x113AB8u;
    SET_GPR_U32(ctx, 31, 0x113AC0u);
    ctx->pc = 0x113ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113AB8u;
    // 0x113abc: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1116C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1116C8u, 0x113AB8u, 0x113AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113AC0u;
label_113ac0:
    // 0x113ac0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x113ac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113ac4: 0xc0446d2  jal         func_111B48
    ctx->pc = 0x113AC4u;
    SET_GPR_U32(ctx, 31, 0x113ACCu);
    ctx->pc = 0x113AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113AC4u;
    // 0x113ac8: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B48u, 0x113AC4u, 0x113ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113ACCu;
label_113acc:
    // 0x113acc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x113accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x113ad0: 0x8c62873c  lw          $v0, -0x78C4($v1)
    ctx->pc = 0x113ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936380)));
    // 0x113ad4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x113AD4u;
    {
        const bool branch_taken_0x113ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x113ad4) {
            ctx->pc = 0x113AF0u;
            goto label_113af0;
        }
    }
    ctx->pc = 0x113ADCu;
    // 0x113adc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x113ADCu;
    {
        const bool branch_taken_0x113adc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x113adc) {
            ctx->pc = 0x113AF0u;
            goto label_113af0;
        }
    }
    ctx->pc = 0x113AE4u;
    // 0x113ae4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x113ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x113ae8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x113AE8u;
    {
        const bool branch_taken_0x113ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113ae8) {
            ctx->pc = 0x113AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113AE8u;
            // 0x113aec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113B00u;
            goto label_113b00;
        }
    }
    ctx->pc = 0x113AF0u;
label_113af0:
    // 0x113af0: 0xc0446de  jal         func_111B78
    ctx->pc = 0x113AF0u;
    SET_GPR_U32(ctx, 31, 0x113AF8u);
    ctx->pc = 0x111B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B78u, 0x113AF0u, 0x113AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113AF8u;
label_113af8:
    // 0x113af8: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x113AF8u;
    {
        const bool branch_taken_0x113af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113AF8u;
        // 0x113afc: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113af8) {
            ctx->pc = 0x113BDCu;
            goto label_113bdc;
        }
    }
    ctx->pc = 0x113B00u;
label_113b00:
    // 0x113b00: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x113b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x113b04: 0x2442a968  addiu       $v0, $v0, -0x5698
    ctx->pc = 0x113b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945128));
    // 0x113b08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x113b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113b0c: 0xae44000c  sw          $a0, 0xC($s2)
    ctx->pc = 0x113b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 4));
    // 0x113b10: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x113b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x113b14: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x113b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x113b18: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x113b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x113b1c: 0xc043318  jal         func_10CC60
    ctx->pc = 0x113B1Cu;
    SET_GPR_U32(ctx, 31, 0x113B24u);
    ctx->pc = 0x113B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113B1Cu;
    // 0x113b20: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC60u, 0x113B1Cu, 0x113B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113B24u;
label_113b24:
    // 0x113b24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x113b24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113b28: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x113b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x113b2c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x113b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x113b30: 0xae918280  sw          $s1, -0x7D80($s4)
    ctx->pc = 0x113b30u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294935168), GPR_U32(ctx, 17));
    // 0x113b34: 0x24538ec0  addiu       $s3, $v0, -0x7140
    ctx->pc = 0x113b34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938304));
    // 0x113b38: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x113b38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x113b3c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x113b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x113b40: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x113b40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x113b44: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x113b44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x113b48: 0x24849980  addiu       $a0, $a0, -0x6680
    ctx->pc = 0x113b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941056));
    // 0x113b4c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x113b4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113b50: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x113b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x113b54: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x113b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x113b58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x113b58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113b5c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x113b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x113b60: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x113b60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x113b64: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x113b64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113b68: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x113b68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x113b6c: 0xc044576  jal         func_1115D8
    ctx->pc = 0x113B6Cu;
    SET_GPR_U32(ctx, 31, 0x113B74u);
    ctx->pc = 0x113B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113B6Cu;
    // 0x113b70: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1115D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1115D8u, 0x113B6Cu, 0x113B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113B74u;
label_113b74:
    // 0x113b74: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x113B74u;
    {
        const bool branch_taken_0x113b74 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x113b74) {
            ctx->pc = 0x113B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113B74u;
            // 0x113b78: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113B94u;
            goto label_113b94;
        }
    }
    ctx->pc = 0x113B7Cu;
    // 0x113b7c: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x113B7Cu;
    SET_GPR_U32(ctx, 31, 0x113B84u);
    ctx->pc = 0x113B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113B7Cu;
    // 0x113b80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x113B7Cu, 0x113B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113B84u;
label_113b84:
    // 0x113b84: 0xc0446de  jal         func_111B78
    ctx->pc = 0x113B84u;
    SET_GPR_U32(ctx, 31, 0x113B8Cu);
    ctx->pc = 0x111B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B78u, 0x113B84u, 0x113B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113B8Cu;
label_113b8c:
    // 0x113b8c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x113B8Cu;
    {
        const bool branch_taken_0x113b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113B8Cu;
        // 0x113b90: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113b8c) {
            ctx->pc = 0x113BDCu;
            goto label_113bdc;
        }
    }
    ctx->pc = 0x113B94u;
label_113b94:
    // 0x113b94: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x113b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x113b98: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x113b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x113b9c: 0xc0446de  jal         func_111B78
    ctx->pc = 0x113B9Cu;
    SET_GPR_U32(ctx, 31, 0x113BA4u);
    ctx->pc = 0x113BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113B9Cu;
    // 0x113ba0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B78u, 0x113B9Cu, 0x113BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113BA4u;
label_113ba4:
    // 0x113ba4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x113BA4u;
    {
        const bool branch_taken_0x113ba4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x113ba4) {
            ctx->pc = 0x113BBCu;
            goto label_113bbc;
        }
    }
    ctx->pc = 0x113BACu;
    // 0x113bac: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x113BACu;
    SET_GPR_U32(ctx, 31, 0x113BB4u);
    ctx->pc = 0x113BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113BACu;
    // 0x113bb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x113BACu, 0x113BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113BB4u;
label_113bb4:
    // 0x113bb4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x113BB4u;
    {
        const bool branch_taken_0x113bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113BB4u;
        // 0x113bb8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113bb4) {
            ctx->pc = 0x113BDCu;
            goto label_113bdc;
        }
    }
    ctx->pc = 0x113BBCu;
label_113bbc:
    // 0x113bbc: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x113BBCu;
    SET_GPR_U32(ctx, 31, 0x113BC4u);
    ctx->pc = 0x113BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113BBCu;
    // 0x113bc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x113BBCu, 0x113BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113BC4u;
label_113bc4:
    // 0x113bc4: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x113BC4u;
    SET_GPR_U32(ctx, 31, 0x113BCCu);
    ctx->pc = 0x113BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113BC4u;
    // 0x113bc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x113BC4u, 0x113BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113BCCu;
label_113bcc:
    // 0x113bcc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x113bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x113bd0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x113bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x113bd4: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x113bd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x113bd8: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x113bd8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_113bdc:
    // 0x113bdc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x113bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x113be0: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x113be0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x113be4: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x113be4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x113be8: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x113be8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x113bec: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x113becu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x113bf0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x113bf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x113bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x113BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113BF4u;
        // 0x113bf8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113BFCu;
    // 0x113bfc: 0x0  nop
    ctx->pc = 0x113bfcu;
    // NOP
    // 0x113c00: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x113c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x113c04: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x113c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x113c08: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x113c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x113c0c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x113c0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113c10: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x113c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x113c14: 0x3c130041  lui         $s3, 0x41
    ctx->pc = 0x113c14u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65 << 16));
    // 0x113c18: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x113c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x113c1c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x113c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x113c20: 0xc0445b2  jal         func_1116C8
    ctx->pc = 0x113C20u;
    SET_GPR_U32(ctx, 31, 0x113C28u);
    ctx->pc = 0x113C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113C20u;
    // 0x113c24: 0x26728280  addiu       $s2, $s3, -0x7D80 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294935168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1116C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1116C8u, 0x113C20u, 0x113C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113C28u;
label_113c28:
    // 0x113c28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x113c28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113c2c: 0xc0446d2  jal         func_111B48
    ctx->pc = 0x113C2Cu;
    SET_GPR_U32(ctx, 31, 0x113C34u);
    ctx->pc = 0x113C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113C2Cu;
    // 0x113c30: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B48u, 0x113C2Cu, 0x113C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113C34u;
label_113c34:
    // 0x113c34: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x113c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x113c38: 0x8c43873c  lw          $v1, -0x78C4($v0)
    ctx->pc = 0x113c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936380)));
    // 0x113c3c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x113C3Cu;
    {
        const bool branch_taken_0x113c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x113c3c) {
            ctx->pc = 0x113C58u;
            goto label_113c58;
        }
    }
    ctx->pc = 0x113C44u;
    // 0x113c44: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x113C44u;
    {
        const bool branch_taken_0x113c44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x113c44) {
            ctx->pc = 0x113C58u;
            goto label_113c58;
        }
    }
    ctx->pc = 0x113C4Cu;
    // 0x113c4c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x113c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x113c50: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x113C50u;
    {
        const bool branch_taken_0x113c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113c50) {
            ctx->pc = 0x113C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113C50u;
            // 0x113c54: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113C68u;
            goto label_113c68;
        }
    }
    ctx->pc = 0x113C58u;
label_113c58:
    // 0x113c58: 0xc0446de  jal         func_111B78
    ctx->pc = 0x113C58u;
    SET_GPR_U32(ctx, 31, 0x113C60u);
    ctx->pc = 0x111B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B78u, 0x113C58u, 0x113C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113C60u;
label_113c60:
    // 0x113c60: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x113C60u;
    {
        const bool branch_taken_0x113c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C60u;
        // 0x113c64: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c60) {
            ctx->pc = 0x113D38u;
            goto label_113d38;
        }
    }
    ctx->pc = 0x113C68u;
label_113c68:
    // 0x113c68: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x113c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x113c6c: 0xae510010  sw          $s1, 0x10($s2)
    ctx->pc = 0x113c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 17));
    // 0x113c70: 0x2442a980  addiu       $v0, $v0, -0x5680
    ctx->pc = 0x113c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945152));
    // 0x113c74: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x113c74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x113c78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x113c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113c7c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x113c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x113c80: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x113c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x113c84: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x113c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x113c88: 0xc043318  jal         func_10CC60
    ctx->pc = 0x113C88u;
    SET_GPR_U32(ctx, 31, 0x113C90u);
    ctx->pc = 0x113C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113C88u;
    // 0x113c8c: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC60u, 0x113C88u, 0x113C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113C90u;
label_113c90:
    // 0x113c90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x113c90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113c94: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x113c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x113c98: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x113c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x113c9c: 0xae718280  sw          $s1, -0x7D80($s3)
    ctx->pc = 0x113c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294935168), GPR_U32(ctx, 17));
    // 0x113ca0: 0x24508ec0  addiu       $s0, $v0, -0x7140
    ctx->pc = 0x113ca0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938304));
    // 0x113ca4: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x113ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x113ca8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x113ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x113cac: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x113cacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x113cb0: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x113cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x113cb4: 0x24849980  addiu       $a0, $a0, -0x6680
    ctx->pc = 0x113cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941056));
    // 0x113cb8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x113cb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113cbc: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x113cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x113cc0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x113cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x113cc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x113cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113cc8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x113cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x113ccc: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x113cccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x113cd0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x113cd0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113cd4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x113cd4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x113cd8: 0xc044576  jal         func_1115D8
    ctx->pc = 0x113CD8u;
    SET_GPR_U32(ctx, 31, 0x113CE0u);
    ctx->pc = 0x113CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113CD8u;
    // 0x113cdc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1115D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1115D8u, 0x113CD8u, 0x113CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113CE0u;
label_113ce0:
    // 0x113ce0: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x113CE0u;
    {
        const bool branch_taken_0x113ce0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x113CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113CE0u;
        // 0x113ce4: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113ce0) {
            ctx->pc = 0x113D00u;
            goto label_113d00;
        }
    }
    ctx->pc = 0x113CE8u;
    // 0x113ce8: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x113CE8u;
    SET_GPR_U32(ctx, 31, 0x113CF0u);
    ctx->pc = 0x113CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113CE8u;
    // 0x113cec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x113CE8u, 0x113CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113CF0u;
label_113cf0:
    // 0x113cf0: 0xc0446de  jal         func_111B78
    ctx->pc = 0x113CF0u;
    SET_GPR_U32(ctx, 31, 0x113CF8u);
    ctx->pc = 0x111B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B78u, 0x113CF0u, 0x113CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113CF8u;
label_113cf8:
    // 0x113cf8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x113CF8u;
    {
        const bool branch_taken_0x113cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113CF8u;
        // 0x113cfc: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113cf8) {
            ctx->pc = 0x113D38u;
            goto label_113d38;
        }
    }
    ctx->pc = 0x113D00u;
label_113d00:
    // 0x113d00: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x113d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x113d04: 0xc0446de  jal         func_111B78
    ctx->pc = 0x113D04u;
    SET_GPR_U32(ctx, 31, 0x113D0Cu);
    ctx->pc = 0x113D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113D04u;
    // 0x113d08: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B78u, 0x113D04u, 0x113D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113D0Cu;
label_113d0c:
    // 0x113d0c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x113D0Cu;
    {
        const bool branch_taken_0x113d0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x113d0c) {
            ctx->pc = 0x113D24u;
            goto label_113d24;
        }
    }
    ctx->pc = 0x113D14u;
    // 0x113d14: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x113D14u;
    SET_GPR_U32(ctx, 31, 0x113D1Cu);
    ctx->pc = 0x113D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113D14u;
    // 0x113d18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x113D14u, 0x113D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113D1Cu;
label_113d1c:
    // 0x113d1c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x113D1Cu;
    {
        const bool branch_taken_0x113d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D1Cu;
        // 0x113d20: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d1c) {
            ctx->pc = 0x113D38u;
            goto label_113d38;
        }
    }
    ctx->pc = 0x113D24u;
label_113d24:
    // 0x113d24: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x113D24u;
    SET_GPR_U32(ctx, 31, 0x113D2Cu);
    ctx->pc = 0x113D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113D24u;
    // 0x113d28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x113D24u, 0x113D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113D2Cu;
label_113d2c:
    // 0x113d2c: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x113D2Cu;
    SET_GPR_U32(ctx, 31, 0x113D34u);
    ctx->pc = 0x113D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113D2Cu;
    // 0x113d30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x113D2Cu, 0x113D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113D34u;
label_113d34:
    // 0x113d34: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x113d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_113d38:
    // 0x113d38: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x113d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x113d3c: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x113d3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x113d40: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x113d40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x113d44: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x113d44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x113d48: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x113d48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x113d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x113D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D4Cu;
        // 0x113d50: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113D54u;
    // 0x113d54: 0x0  nop
    ctx->pc = 0x113d54u;
    // NOP
    // 0x113d58: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x113d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x113d5c: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x113d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x113d60: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x113d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x113d64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x113d64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113d68: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x113d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x113d6c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x113d6cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113d70: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x113d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x113d74: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x113d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x113d78: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x113d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x113d7c: 0x3c170041  lui         $s7, 0x41
    ctx->pc = 0x113d7cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65 << 16));
    // 0x113d80: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x113d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x113d84: 0x26f28280  addiu       $s2, $s7, -0x7D80
    ctx->pc = 0x113d84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 4294935168));
    // 0x113d88: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x113d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x113d8c: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x113d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x113d90: 0xc0446d2  jal         func_111B48
    ctx->pc = 0x113D90u;
    SET_GPR_U32(ctx, 31, 0x113D98u);
    ctx->pc = 0x113D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113D90u;
    // 0x113d94: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B48u, 0x113D90u, 0x113D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113D98u;
label_113d98:
    // 0x113d98: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x113d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x113d9c: 0x8c43873c  lw          $v1, -0x78C4($v0)
    ctx->pc = 0x113d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936380)));
    // 0x113da0: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x113DA0u;
    {
        const bool branch_taken_0x113da0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x113da0) {
            ctx->pc = 0x113DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113DA0u;
            // 0x113da4: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113DB4u;
            goto label_113db4;
        }
    }
    ctx->pc = 0x113DA8u;
    // 0x113da8: 0xc04471c  jal         func_111C70
    ctx->pc = 0x113DA8u;
    SET_GPR_U32(ctx, 31, 0x113DB0u);
    ctx->pc = 0x111C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111C70u, 0x113DA8u, 0x113DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113DB0u;
label_113db0:
    // 0x113db0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x113db0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_113db4:
    // 0x113db4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x113db4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113db8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x113db8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113dbc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x113DBCu;
    {
        const bool branch_taken_0x113dbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x113DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113DBCu;
        // 0x113dc0: 0xa2420010  sb          $v0, 0x10($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113dbc) {
            ctx->pc = 0x113E00u;
            goto label_113e00;
        }
    }
    ctx->pc = 0x113DC4u;
    // 0x113dc4: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x113dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x113dc8: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x113dc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x113dcc: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x113dccu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x113dd0: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x113dd0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x113dd4: 0x0  nop
    ctx->pc = 0x113dd4u;
    // NOP
label_113dd8:
    // 0x113dd8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x113dd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x113ddc: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x113ddcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x113de0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x113DE0u;
    {
        const bool branch_taken_0x113de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113DE0u;
        // 0x113de4: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113de0) {
            ctx->pc = 0x113E10u;
            goto label_113e10;
        }
    }
    ctx->pc = 0x113DE8u;
    // 0x113de8: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x113de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x113dec: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x113decu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113df0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x113DF0u;
    {
        const bool branch_taken_0x113df0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x113DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113DF0u;
        // 0x113df4: 0xa0830010  sb          $v1, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113df0) {
            ctx->pc = 0x113DD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_113dd8;
        }
    }
    ctx->pc = 0x113DF8u;
    // 0x113df8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x113DF8u;
    {
        const bool branch_taken_0x113df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113DF8u;
        // 0x113dfc: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113df8) {
            ctx->pc = 0x113E14u;
            goto label_113e14;
        }
    }
    ctx->pc = 0x113E00u;
label_113e00:
    // 0x113e00: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x113e00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x113e04: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x113e04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x113e08: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x113e08u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x113e0c: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x113e0cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
label_113e10:
    // 0x113e10: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x113e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_113e14:
    // 0x113e14: 0x56020004  bnel        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x113E14u;
    {
        const bool branch_taken_0x113e14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x113e14) {
            ctx->pc = 0x113E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113E14u;
            // 0x113e18: 0xae56000c  sw          $s6, 0xC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113E28u;
            goto label_113e28;
        }
    }
    ctx->pc = 0x113E1Cu;
    // 0x113e1c: 0xa240040f  sb          $zero, 0x40F($s2)
    ctx->pc = 0x113e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1039), (uint8_t)GPR_U32(ctx, 0));
    // 0x113e20: 0x241003ff  addiu       $s0, $zero, 0x3FF
    ctx->pc = 0x113e20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x113e24: 0xae56000c  sw          $s6, 0xC($s2)
    ctx->pc = 0x113e24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
label_113e28:
    // 0x113e28: 0x24a3a998  addiu       $v1, $a1, -0x5668
    ctx->pc = 0x113e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945176));
    // 0x113e2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x113e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113e30: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x113e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x113e34: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x113e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x113e38: 0x26948ec0  addiu       $s4, $s4, -0x7140
    ctx->pc = 0x113e38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294938304));
    // 0x113e3c: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x113e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x113e40: 0xc043318  jal         func_10CC60
    ctx->pc = 0x113E40u;
    SET_GPR_U32(ctx, 31, 0x113E48u);
    ctx->pc = 0x113E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113E40u;
    // 0x113e44: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC60u, 0x113E40u, 0x113E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113E48u;
label_113e48:
    // 0x113e48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x113e48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113e4c: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x113e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x113e50: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x113e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x113e54: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x113e54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x113e58: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x113e58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x113e5c: 0x26a49980  addiu       $a0, $s5, -0x6680
    ctx->pc = 0x113e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941056));
    // 0x113e60: 0x26e78280  addiu       $a3, $s7, -0x7D80
    ctx->pc = 0x113e60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294935168));
    // 0x113e64: 0x26080011  addiu       $t0, $s0, 0x11
    ctx->pc = 0x113e64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 17));
    // 0x113e68: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x113e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x113e6c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x113e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x113e70: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x113e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x113e74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x113e74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113e78: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x113e78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113e7c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x113e7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x113e80: 0xc044576  jal         func_1115D8
    ctx->pc = 0x113E80u;
    SET_GPR_U32(ctx, 31, 0x113E88u);
    ctx->pc = 0x113E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113E80u;
    // 0x113e84: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1115D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1115D8u, 0x113E80u, 0x113E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113E88u;
label_113e88:
    // 0x113e88: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x113E88u;
    {
        const bool branch_taken_0x113e88 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x113E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E88u;
        // 0x113e8c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e88) {
            ctx->pc = 0x113EA8u;
            goto label_113ea8;
        }
    }
    ctx->pc = 0x113E90u;
    // 0x113e90: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x113E90u;
    SET_GPR_U32(ctx, 31, 0x113E98u);
    ctx->pc = 0x113E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113E90u;
    // 0x113e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x113E90u, 0x113E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113E98u;
label_113e98:
    // 0x113e98: 0xc0446de  jal         func_111B78
    ctx->pc = 0x113E98u;
    SET_GPR_U32(ctx, 31, 0x113EA0u);
    ctx->pc = 0x111B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B78u, 0x113E98u, 0x113EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113EA0u;
label_113ea0:
    // 0x113ea0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x113EA0u;
    {
        const bool branch_taken_0x113ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113EA0u;
        // 0x113ea4: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113ea0) {
            ctx->pc = 0x113EE0u;
            goto label_113ee0;
        }
    }
    ctx->pc = 0x113EA8u;
label_113ea8:
    // 0x113ea8: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x113ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x113eac: 0xc0446de  jal         func_111B78
    ctx->pc = 0x113EACu;
    SET_GPR_U32(ctx, 31, 0x113EB4u);
    ctx->pc = 0x113EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113EACu;
    // 0x113eb0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B78u, 0x113EACu, 0x113EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113EB4u;
label_113eb4:
    // 0x113eb4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x113EB4u;
    {
        const bool branch_taken_0x113eb4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x113eb4) {
            ctx->pc = 0x113ECCu;
            goto label_113ecc;
        }
    }
    ctx->pc = 0x113EBCu;
    // 0x113ebc: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x113EBCu;
    SET_GPR_U32(ctx, 31, 0x113EC4u);
    ctx->pc = 0x113EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113EBCu;
    // 0x113ec0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x113EBCu, 0x113EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113EC4u;
label_113ec4:
    // 0x113ec4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x113EC4u;
    {
        const bool branch_taken_0x113ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113EC4u;
        // 0x113ec8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113ec4) {
            ctx->pc = 0x113EE0u;
            goto label_113ee0;
        }
    }
    ctx->pc = 0x113ECCu;
label_113ecc:
    // 0x113ecc: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x113ECCu;
    SET_GPR_U32(ctx, 31, 0x113ED4u);
    ctx->pc = 0x113ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113ECCu;
    // 0x113ed0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x113ECCu, 0x113ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113ED4u;
label_113ed4:
    // 0x113ed4: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x113ED4u;
    SET_GPR_U32(ctx, 31, 0x113EDCu);
    ctx->pc = 0x113ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113ED4u;
    // 0x113ed8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x113ED4u, 0x113EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113EDCu;
label_113edc:
    // 0x113edc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x113edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_113ee0:
    // 0x113ee0: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x113ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x113ee4: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x113ee4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x113ee8: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x113ee8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x113eec: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x113eecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x113ef0: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x113ef0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x113ef4: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x113ef4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x113ef8: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x113ef8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x113efc: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x113efcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x113f00: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x113f00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x113f04: 0x3e00008  jr          $ra
    ctx->pc = 0x113F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F04u;
        // 0x113f08: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113F0Cu;
    // 0x113f0c: 0x0  nop
    ctx->pc = 0x113f0cu;
    // NOP
    // 0x113f10: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x113f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x113f14: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x113f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x113f18: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x113f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x113f1c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x113f1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113f20: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x113f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x113f24: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x113f24u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113f28: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x113f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x113f2c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x113f2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113f30: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x113f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x113f34: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x113f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x113f38: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x113f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x113f3c: 0x3c1e0041  lui         $fp, 0x41
    ctx->pc = 0x113f3cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65 << 16));
    // 0x113f40: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x113f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x113f44: 0x27d38280  addiu       $s3, $fp, -0x7D80
    ctx->pc = 0x113f44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 4294935168));
    // 0x113f48: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x113f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x113f4c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x113f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x113f50: 0xc0446d2  jal         func_111B48
    ctx->pc = 0x113F50u;
    SET_GPR_U32(ctx, 31, 0x113F58u);
    ctx->pc = 0x113F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113F50u;
    // 0x113f54: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B48u, 0x113F50u, 0x113F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113F58u;
label_113f58:
    // 0x113f58: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x113f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x113f5c: 0x8c62873c  lw          $v0, -0x78C4($v1)
    ctx->pc = 0x113f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936380)));
    // 0x113f60: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x113F60u;
    {
        const bool branch_taken_0x113f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113f60) {
            ctx->pc = 0x113F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113F60u;
            // 0x113f64: 0x92420000  lbu         $v0, 0x0($s2) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113F74u;
            goto label_113f74;
        }
    }
    ctx->pc = 0x113F68u;
    // 0x113f68: 0xc04471c  jal         func_111C70
    ctx->pc = 0x113F68u;
    SET_GPR_U32(ctx, 31, 0x113F70u);
    ctx->pc = 0x111C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111C70u, 0x113F68u, 0x113F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113F70u;
label_113f70:
    // 0x113f70: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x113f70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_113f74:
    // 0x113f74: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x113f74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113f78: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x113f78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113f7c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x113F7Cu;
    {
        const bool branch_taken_0x113f7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x113F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F7Cu;
        // 0x113f80: 0xa2620050  sb          $v0, 0x50($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 80), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113f7c) {
            ctx->pc = 0x113FC0u;
            goto label_113fc0;
        }
    }
    ctx->pc = 0x113F84u;
    // 0x113f84: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x113f84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x113f88: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x113f88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x113f8c: 0x3c160041  lui         $s6, 0x41
    ctx->pc = 0x113f8cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
    // 0x113f90: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x113f90u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x113f94: 0x0  nop
    ctx->pc = 0x113f94u;
    // NOP
label_113f98:
    // 0x113f98: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x113f98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x113f9c: 0x2a220400  slti        $v0, $s1, 0x400
    ctx->pc = 0x113f9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x113fa0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x113FA0u;
    {
        const bool branch_taken_0x113fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FA0u;
        // 0x113fa4: 0x2511021  addu        $v0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113fa0) {
            ctx->pc = 0x113FD0u;
            goto label_113fd0;
        }
    }
    ctx->pc = 0x113FA8u;
    // 0x113fa8: 0x2712021  addu        $a0, $s3, $s1
    ctx->pc = 0x113fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x113fac: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x113facu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113fb0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x113FB0u;
    {
        const bool branch_taken_0x113fb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x113FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FB0u;
        // 0x113fb4: 0xa0830050  sb          $v1, 0x50($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113fb0) {
            ctx->pc = 0x113F98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_113f98;
        }
    }
    ctx->pc = 0x113FB8u;
    // 0x113fb8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x113FB8u;
    {
        const bool branch_taken_0x113fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FB8u;
        // 0x113fbc: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113fb8) {
            ctx->pc = 0x113FD4u;
            goto label_113fd4;
        }
    }
    ctx->pc = 0x113FC0u;
label_113fc0:
    // 0x113fc0: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x113fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x113fc4: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x113fc4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x113fc8: 0x3c160041  lui         $s6, 0x41
    ctx->pc = 0x113fc8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
    // 0x113fcc: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x113fccu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
label_113fd0:
    // 0x113fd0: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x113fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_113fd4:
    // 0x113fd4: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x113FD4u;
    {
        const bool branch_taken_0x113fd4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x113FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FD4u;
        // 0x113fd8: 0x24a3a9b0  addiu       $v1, $a1, -0x5650 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113fd4) {
            ctx->pc = 0x113FE4u;
            goto label_113fe4;
        }
    }
    ctx->pc = 0x113FDCu;
    // 0x113fdc: 0xa260044f  sb          $zero, 0x44F($s3)
    ctx->pc = 0x113fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1103), (uint8_t)GPR_U32(ctx, 0));
    // 0x113fe0: 0x241103ff  addiu       $s1, $zero, 0x3FF
    ctx->pc = 0x113fe0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_113fe4:
    // 0x113fe4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x113fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113fe8: 0x6a040007  ldl         $a0, 0x7($s0)
    ctx->pc = 0x113fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x113fec: 0x6e040000  ldr         $a0, 0x0($s0)
    ctx->pc = 0x113fecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x113ff0: 0x6a05000f  ldl         $a1, 0xF($s0)
    ctx->pc = 0x113ff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x113ff4: 0x6e050008  ldr         $a1, 0x8($s0)
    ctx->pc = 0x113ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x113ff8: 0x6a060017  ldl         $a2, 0x17($s0)
    ctx->pc = 0x113ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x113ffc: 0x6e060010  ldr         $a2, 0x10($s0)
    ctx->pc = 0x113ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x114000: 0x6a07001f  ldl         $a3, 0x1F($s0)
    ctx->pc = 0x114000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x114004: 0x6e070018  ldr         $a3, 0x18($s0)
    ctx->pc = 0x114004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x114008: 0xb2640017  sdl         $a0, 0x17($s3)
    ctx->pc = 0x114008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11400c: 0xb6640010  sdr         $a0, 0x10($s3)
    ctx->pc = 0x11400cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114010: 0xb265001f  sdl         $a1, 0x1F($s3)
    ctx->pc = 0x114010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114014: 0xb6650018  sdr         $a1, 0x18($s3)
    ctx->pc = 0x114014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114018: 0xb2660027  sdl         $a2, 0x27($s3)
    ctx->pc = 0x114018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11401c: 0xb6660020  sdr         $a2, 0x20($s3)
    ctx->pc = 0x11401cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114020: 0xb267002f  sdl         $a3, 0x2F($s3)
    ctx->pc = 0x114020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114024: 0xb6670028  sdr         $a3, 0x28($s3)
    ctx->pc = 0x114024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114028: 0x6a040027  ldl         $a0, 0x27($s0)
    ctx->pc = 0x114028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x11402c: 0x6e040020  ldr         $a0, 0x20($s0)
    ctx->pc = 0x11402cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x114030: 0x6a05002f  ldl         $a1, 0x2F($s0)
    ctx->pc = 0x114030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x114034: 0x6e050028  ldr         $a1, 0x28($s0)
    ctx->pc = 0x114034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x114038: 0x6a060037  ldl         $a2, 0x37($s0)
    ctx->pc = 0x114038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x11403c: 0x6e060030  ldr         $a2, 0x30($s0)
    ctx->pc = 0x11403cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x114040: 0x6a07003f  ldl         $a3, 0x3F($s0)
    ctx->pc = 0x114040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x114044: 0x6e070038  ldr         $a3, 0x38($s0)
    ctx->pc = 0x114044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x114048: 0xb2640037  sdl         $a0, 0x37($s3)
    ctx->pc = 0x114048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11404c: 0xb6640030  sdr         $a0, 0x30($s3)
    ctx->pc = 0x11404cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114050: 0xb265003f  sdl         $a1, 0x3F($s3)
    ctx->pc = 0x114050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114054: 0xb6650038  sdr         $a1, 0x38($s3)
    ctx->pc = 0x114054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114058: 0xb2660047  sdl         $a2, 0x47($s3)
    ctx->pc = 0x114058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11405c: 0xb6660040  sdr         $a2, 0x40($s3)
    ctx->pc = 0x11405cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114060: 0xb267004f  sdl         $a3, 0x4F($s3)
    ctx->pc = 0x114060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114064: 0xb6670048  sdr         $a3, 0x48($s3)
    ctx->pc = 0x114064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x114068: 0x26b58ec0  addiu       $s5, $s5, -0x7140
    ctx->pc = 0x114068u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294938304));
    // 0x11406c: 0xae77000c  sw          $s7, 0xC($s3)
    ctx->pc = 0x11406cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 23));
    // 0x114070: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x114070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x114074: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x114074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x114078: 0x27d08280  addiu       $s0, $fp, -0x7D80
    ctx->pc = 0x114078u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294935168));
    // 0x11407c: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x11407cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x114080: 0xc043318  jal         func_10CC60
    ctx->pc = 0x114080u;
    SET_GPR_U32(ctx, 31, 0x114088u);
    ctx->pc = 0x114084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114080u;
    // 0x114084: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC60u, 0x114080u, 0x114088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114088u;
label_114088:
    // 0x114088: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x114088u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11408c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11408cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114090: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x114090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x114094: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x114094u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
    // 0x114098: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x114098u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x11409c: 0x24050450  addiu       $a1, $zero, 0x450
    ctx->pc = 0x11409cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1104));
    // 0x1140a0: 0xc0440be  jal         func_1102F8
    ctx->pc = 0x1140A0u;
    SET_GPR_U32(ctx, 31, 0x1140A8u);
    ctx->pc = 0x1140A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1140A0u;
    // 0x1140a4: 0xae720000  sw          $s2, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1102F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1102F8u, 0x1140A0u, 0x1140A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1140A8u;
label_1140a8:
    // 0x1140a8: 0x26c49980  addiu       $a0, $s6, -0x6680
    ctx->pc = 0x1140a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941056));
    // 0x1140ac: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1140acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1140b0: 0x26280051  addiu       $t0, $s1, 0x51
    ctx->pc = 0x1140b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 81));
    // 0x1140b4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1140b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1140b8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1140b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1140bc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1140bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1140c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1140c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1140c4: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x1140c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1140c8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1140c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1140cc: 0xc044576  jal         func_1115D8
    ctx->pc = 0x1140CCu;
    SET_GPR_U32(ctx, 31, 0x1140D4u);
    ctx->pc = 0x1140D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1140CCu;
    // 0x1140d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1115D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1115D8u, 0x1140CCu, 0x1140D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1140D4u;
label_1140d4:
    // 0x1140d4: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1140D4u;
    {
        const bool branch_taken_0x1140d4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1140D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1140D4u;
        // 0x1140d8: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1140d4) {
            ctx->pc = 0x1140F4u;
            goto label_1140f4;
        }
    }
    ctx->pc = 0x1140DCu;
    // 0x1140dc: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x1140DCu;
    SET_GPR_U32(ctx, 31, 0x1140E4u);
    ctx->pc = 0x1140E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1140DCu;
    // 0x1140e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x1140DCu, 0x1140E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1140E4u;
label_1140e4:
    // 0x1140e4: 0xc0446de  jal         func_111B78
    ctx->pc = 0x1140E4u;
    SET_GPR_U32(ctx, 31, 0x1140ECu);
    ctx->pc = 0x111B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B78u, 0x1140E4u, 0x1140ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1140ECu;
label_1140ec:
    // 0x1140ec: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1140ECu;
    {
        const bool branch_taken_0x1140ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1140F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1140ECu;
        // 0x1140f0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1140ec) {
            ctx->pc = 0x11412Cu;
            goto label_11412c;
        }
    }
    ctx->pc = 0x1140F4u;
label_1140f4:
    // 0x1140f4: 0x2a21025  or          $v0, $s5, $v0
    ctx->pc = 0x1140f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x1140f8: 0xc0446de  jal         func_111B78
    ctx->pc = 0x1140F8u;
    SET_GPR_U32(ctx, 31, 0x114100u);
    ctx->pc = 0x1140FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1140F8u;
    // 0x1140fc: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B78u, 0x1140F8u, 0x114100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114100u;
label_114100:
    // 0x114100: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x114100u;
    {
        const bool branch_taken_0x114100 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x114100) {
            ctx->pc = 0x114118u;
            goto label_114118;
        }
    }
    ctx->pc = 0x114108u;
    // 0x114108: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x114108u;
    SET_GPR_U32(ctx, 31, 0x114110u);
    ctx->pc = 0x11410Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114108u;
    // 0x11410c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x114108u, 0x114110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114110u;
label_114110:
    // 0x114110: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x114110u;
    {
        const bool branch_taken_0x114110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114110u;
        // 0x114114: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114110) {
            ctx->pc = 0x11412Cu;
            goto label_11412c;
        }
    }
    ctx->pc = 0x114118u;
label_114118:
    // 0x114118: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x114118u;
    SET_GPR_U32(ctx, 31, 0x114120u);
    ctx->pc = 0x11411Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114118u;
    // 0x11411c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x114118u, 0x114120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114120u;
label_114120:
    // 0x114120: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x114120u;
    SET_GPR_U32(ctx, 31, 0x114128u);
    ctx->pc = 0x114124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114120u;
    // 0x114124: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x114120u, 0x114128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114128u;
label_114128:
    // 0x114128: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x114128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_11412c:
    // 0x11412c: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x11412cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x114130: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x114130u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x114134: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x114134u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x114138: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x114138u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11413c: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x11413cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x114140: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x114140u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x114144: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x114144u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x114148: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x114148u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11414c: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x11414cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x114150: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x114150u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x114154: 0x3e00008  jr          $ra
    ctx->pc = 0x114154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114154u;
        // 0x114158: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11415Cu;
    // 0x11415c: 0x0  nop
    ctx->pc = 0x11415cu;
    // NOP
    // 0x114160: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x114160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x114164: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x114164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x114168: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x114168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x11416c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11416cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114170: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x114170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x114174: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x114174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114178: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x114178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x11417c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x11417cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x114180: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x114180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x114184: 0x3c160041  lui         $s6, 0x41
    ctx->pc = 0x114184u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
    // 0x114188: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x114188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x11418c: 0x26d28280  addiu       $s2, $s6, -0x7D80
    ctx->pc = 0x11418cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 4294935168));
    // 0x114190: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x114190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x114194: 0xc0446d2  jal         func_111B48
    ctx->pc = 0x114194u;
    SET_GPR_U32(ctx, 31, 0x11419Cu);
    ctx->pc = 0x114198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114194u;
    // 0x114198: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B48u, 0x114194u, 0x11419Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11419Cu;
label_11419c:
    // 0x11419c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11419cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1141a0: 0x8c43873c  lw          $v1, -0x78C4($v0)
    ctx->pc = 0x1141a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936380)));
    // 0x1141a4: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1141A4u;
    {
        const bool branch_taken_0x1141a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1141a4) {
            ctx->pc = 0x1141A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1141A4u;
            // 0x1141a8: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1141B8u;
            goto label_1141b8;
        }
    }
    ctx->pc = 0x1141ACu;
    // 0x1141ac: 0xc04471c  jal         func_111C70
    ctx->pc = 0x1141ACu;
    SET_GPR_U32(ctx, 31, 0x1141B4u);
    ctx->pc = 0x111C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111C70u, 0x1141ACu, 0x1141B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1141B4u;
label_1141b4:
    // 0x1141b4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1141b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1141b8:
    // 0x1141b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1141b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1141bc: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1141bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1141c0: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1141C0u;
    {
        const bool branch_taken_0x1141c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1141C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1141C0u;
        // 0x1141c4: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1141c0) {
            ctx->pc = 0x11420Cu;
            goto label_11420c;
        }
    }
    ctx->pc = 0x1141C8u;
    // 0x1141c8: 0x3c07003e  lui         $a3, 0x3E
    ctx->pc = 0x1141c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)62 << 16));
    // 0x1141cc: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1141ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1141d0: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1141d0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x1141d4: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x1141d4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x1141d8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1141d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1141dc: 0x0  nop
    ctx->pc = 0x1141dcu;
    // NOP
label_1141e0:
    // 0x1141e0: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1141e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1141e4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1141E4u;
    {
        const bool branch_taken_0x1141e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1141E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1141E4u;
        // 0x1141e8: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1141e4) {
            ctx->pc = 0x11421Cu;
            goto label_11421c;
        }
    }
    ctx->pc = 0x1141ECu;
    // 0x1141ec: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x1141ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1141f0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1141f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1141f4: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x1141f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x1141f8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1141f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1141fc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1141FCu;
    {
        const bool branch_taken_0x1141fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1141fc) {
            ctx->pc = 0x114200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1141FCu;
            // 0x114200: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1141E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1141e0;
        }
    }
    ctx->pc = 0x114204u;
    // 0x114204: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x114204u;
    {
        const bool branch_taken_0x114204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114204u;
        // 0x114208: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114204) {
            ctx->pc = 0x114220u;
            goto label_114220;
        }
    }
    ctx->pc = 0x11420Cu;
label_11420c:
    // 0x11420c: 0x3c07003e  lui         $a3, 0x3E
    ctx->pc = 0x11420cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)62 << 16));
    // 0x114210: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x114210u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x114214: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x114214u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x114218: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x114218u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
label_11421c:
    // 0x11421c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x11421cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_114220:
    // 0x114220: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x114220u;
    {
        const bool branch_taken_0x114220 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x114220) {
            ctx->pc = 0x114224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114220u;
            // 0x114224: 0xa240040b  sb          $zero, 0x40B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114228u;
            goto label_114228;
        }
    }
    ctx->pc = 0x114228u;
label_114228:
    // 0x114228: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x114228u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11422c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11422cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114230: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x114230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x114234: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x114234u;
    {
        const bool branch_taken_0x114234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x114238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114234u;
        // 0x114238: 0xa242040c  sb          $v0, 0x40C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114234) {
            ctx->pc = 0x11426Cu;
            goto label_11426c;
        }
    }
    ctx->pc = 0x11423Cu;
    // 0x11423c: 0x2646040c  addiu       $a2, $s2, 0x40C
    ctx->pc = 0x11423cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1036));
    // 0x114240: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x114240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x114244: 0x0  nop
    ctx->pc = 0x114244u;
    // NOP
label_114248:
    // 0x114248: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x114248u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x11424c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11424Cu;
    {
        const bool branch_taken_0x11424c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11424Cu;
        // 0x114250: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11424c) {
            ctx->pc = 0x11426Cu;
            goto label_11426c;
        }
    }
    ctx->pc = 0x114254u;
    // 0x114254: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x114254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x114258: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x114258u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11425c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x11425cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x114260: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x114260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x114264: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x114264u;
    {
        const bool branch_taken_0x114264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x114264) {
            ctx->pc = 0x114268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114264u;
            // 0x114268: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114248u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_114248;
        }
    }
    ctx->pc = 0x11426Cu;
label_11426c:
    // 0x11426c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x11426cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x114270: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x114270u;
    {
        const bool branch_taken_0x114270 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x114270) {
            ctx->pc = 0x114274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114270u;
            // 0x114274: 0xa240080b  sb          $zero, 0x80B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 2059), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114278u;
            goto label_114278;
        }
    }
    ctx->pc = 0x114278u;
label_114278:
    // 0x114278: 0x24e3a9c8  addiu       $v1, $a3, -0x5638
    ctx->pc = 0x114278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945224));
    // 0x11427c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11427cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x114280: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x114280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x114284: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x114284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x114288: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x114288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x11428c: 0x26d08280  addiu       $s0, $s6, -0x7D80
    ctx->pc = 0x11428cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294935168));
    // 0x114290: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x114290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x114294: 0xc043318  jal         func_10CC60
    ctx->pc = 0x114294u;
    SET_GPR_U32(ctx, 31, 0x11429Cu);
    ctx->pc = 0x114298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114294u;
    // 0x114298: 0x26948ec0  addiu       $s4, $s4, -0x7140 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294938304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC60u, 0x114294u, 0x11429Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11429Cu;
label_11429c:
    // 0x11429c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11429cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1142a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1142a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1142a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1142a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1142a8: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1142a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x1142ac: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1142acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1142b0: 0x2405080c  addiu       $a1, $zero, 0x80C
    ctx->pc = 0x1142b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x1142b4: 0xc0440be  jal         func_1102F8
    ctx->pc = 0x1142B4u;
    SET_GPR_U32(ctx, 31, 0x1142BCu);
    ctx->pc = 0x1142B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1142B4u;
    // 0x1142b8: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1102F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1102F8u, 0x1142B4u, 0x1142BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1142BCu;
label_1142bc:
    // 0x1142bc: 0x26a49980  addiu       $a0, $s5, -0x6680
    ctx->pc = 0x1142bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941056));
    // 0x1142c0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1142c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1142c4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1142c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1142c8: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1142c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1142cc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1142ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1142d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1142d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1142d4: 0x2408080c  addiu       $t0, $zero, 0x80C
    ctx->pc = 0x1142d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x1142d8: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1142d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1142dc: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1142dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1142e0: 0xc044576  jal         func_1115D8
    ctx->pc = 0x1142E0u;
    SET_GPR_U32(ctx, 31, 0x1142E8u);
    ctx->pc = 0x1142E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1142E0u;
    // 0x1142e4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1115D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1115D8u, 0x1142E0u, 0x1142E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1142E8u;
label_1142e8:
    // 0x1142e8: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1142E8u;
    {
        const bool branch_taken_0x1142e8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1142ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1142E8u;
        // 0x1142ec: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1142e8) {
            ctx->pc = 0x114308u;
            goto label_114308;
        }
    }
    ctx->pc = 0x1142F0u;
    // 0x1142f0: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x1142F0u;
    SET_GPR_U32(ctx, 31, 0x1142F8u);
    ctx->pc = 0x1142F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1142F0u;
    // 0x1142f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x1142F0u, 0x1142F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1142F8u;
label_1142f8:
    // 0x1142f8: 0xc0446de  jal         func_111B78
    ctx->pc = 0x1142F8u;
    SET_GPR_U32(ctx, 31, 0x114300u);
    ctx->pc = 0x111B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B78u, 0x1142F8u, 0x114300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114300u;
label_114300:
    // 0x114300: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x114300u;
    {
        const bool branch_taken_0x114300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114300u;
        // 0x114304: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114300) {
            ctx->pc = 0x114340u;
            goto label_114340;
        }
    }
    ctx->pc = 0x114308u;
label_114308:
    // 0x114308: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x114308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x11430c: 0xc0446de  jal         func_111B78
    ctx->pc = 0x11430Cu;
    SET_GPR_U32(ctx, 31, 0x114314u);
    ctx->pc = 0x114310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11430Cu;
    // 0x114310: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B78u, 0x11430Cu, 0x114314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114314u;
label_114314:
    // 0x114314: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x114314u;
    {
        const bool branch_taken_0x114314 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x114314) {
            ctx->pc = 0x11432Cu;
            goto label_11432c;
        }
    }
    ctx->pc = 0x11431Cu;
    // 0x11431c: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x11431Cu;
    SET_GPR_U32(ctx, 31, 0x114324u);
    ctx->pc = 0x114320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11431Cu;
    // 0x114320: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x11431Cu, 0x114324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114324u;
label_114324:
    // 0x114324: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x114324u;
    {
        const bool branch_taken_0x114324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114324u;
        // 0x114328: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114324) {
            ctx->pc = 0x114340u;
            goto label_114340;
        }
    }
    ctx->pc = 0x11432Cu;
label_11432c:
    // 0x11432c: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x11432Cu;
    SET_GPR_U32(ctx, 31, 0x114334u);
    ctx->pc = 0x114330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11432Cu;
    // 0x114330: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x11432Cu, 0x114334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114334u;
label_114334:
    // 0x114334: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x114334u;
    SET_GPR_U32(ctx, 31, 0x11433Cu);
    ctx->pc = 0x114338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114334u;
    // 0x114338: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x114334u, 0x11433Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11433Cu;
label_11433c:
    // 0x11433c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x11433cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_114340:
    // 0x114340: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x114340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x114344: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x114344u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x114348: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x114348u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11434c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x11434cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x114350: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x114350u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x114354: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x114354u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x114358: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x114358u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11435c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x11435cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x114360: 0x3e00008  jr          $ra
    ctx->pc = 0x114360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114360u;
        // 0x114364: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114368u;
    // 0x114368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x114368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11436c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11436cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x114370: 0xc044c96  jal         func_113258
    ctx->pc = 0x114370u;
    SET_GPR_U32(ctx, 31, 0x114378u);
    ctx->pc = 0x114374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114370u;
    // 0x114374: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113258u;
    goto label_113258;
    ctx->pc = 0x114378u;
label_114378:
    // 0x114378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x114378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11437c: 0x3e00008  jr          $ra
    ctx->pc = 0x11437Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11437Cu;
        // 0x114380: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11437Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114384u;
    // 0x114384: 0x0  nop
    ctx->pc = 0x114384u;
    // NOP
    // 0x114388: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x114388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x11438c: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x11438cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x114390: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x114390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x114394: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x114394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114398: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x114398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x11439c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x11439cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1143a0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1143a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1143a4: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x1143a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1143a8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1143a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1143ac: 0x3c160041  lui         $s6, 0x41
    ctx->pc = 0x1143acu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
    // 0x1143b0: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1143b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1143b4: 0x26d08280  addiu       $s0, $s6, -0x7D80
    ctx->pc = 0x1143b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294935168));
    // 0x1143b8: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1143b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1143bc: 0xc0446d2  jal         func_111B48
    ctx->pc = 0x1143BCu;
    SET_GPR_U32(ctx, 31, 0x1143C4u);
    ctx->pc = 0x1143C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1143BCu;
    // 0x1143c0: 0xffb20060  sd          $s2, 0x60($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B48u, 0x1143BCu, 0x1143C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1143C4u;
label_1143c4:
    // 0x1143c4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1143c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1143c8: 0x8c43873c  lw          $v1, -0x78C4($v0)
    ctx->pc = 0x1143c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936380)));
    // 0x1143cc: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1143CCu;
    {
        const bool branch_taken_0x1143cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1143cc) {
            ctx->pc = 0x1143D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1143CCu;
            // 0x1143d0: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1143E0u;
            goto label_1143e0;
        }
    }
    ctx->pc = 0x1143D4u;
    // 0x1143d4: 0xc04471c  jal         func_111C70
    ctx->pc = 0x1143D4u;
    SET_GPR_U32(ctx, 31, 0x1143DCu);
    ctx->pc = 0x111C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111C70u, 0x1143D4u, 0x1143DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1143DCu;
label_1143dc:
    // 0x1143dc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1143dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1143e0:
    // 0x1143e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1143e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1143e4: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1143e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1143e8: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1143E8u;
    {
        const bool branch_taken_0x1143e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1143ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1143E8u;
        // 0x1143ec: 0xa2020014  sb          $v0, 0x14($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1143e8) {
            ctx->pc = 0x114434u;
            goto label_114434;
        }
    }
    ctx->pc = 0x1143F0u;
    // 0x1143f0: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x1143f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x1143f4: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1143f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1143f8: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x1143f8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x1143fc: 0x3c130041  lui         $s3, 0x41
    ctx->pc = 0x1143fcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65 << 16));
    // 0x114400: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x114400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x114404: 0x0  nop
    ctx->pc = 0x114404u;
    // NOP
label_114408:
    // 0x114408: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x114408u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x11440c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11440Cu;
    {
        const bool branch_taken_0x11440c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11440Cu;
        // 0x114410: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11440c) {
            ctx->pc = 0x114444u;
            goto label_114444;
        }
    }
    ctx->pc = 0x114414u;
    // 0x114414: 0x2052021  addu        $a0, $s0, $a1
    ctx->pc = 0x114414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x114418: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x114418u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11441c: 0xa0830014  sb          $v1, 0x14($a0)
    ctx->pc = 0x11441cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x114420: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x114420u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x114424: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x114424u;
    {
        const bool branch_taken_0x114424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x114424) {
            ctx->pc = 0x114428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114424u;
            // 0x114428: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114408u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_114408;
        }
    }
    ctx->pc = 0x11442Cu;
    // 0x11442c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11442Cu;
    {
        const bool branch_taken_0x11442c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11442Cu;
        // 0x114430: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11442c) {
            ctx->pc = 0x114448u;
            goto label_114448;
        }
    }
    ctx->pc = 0x114434u;
label_114434:
    // 0x114434: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x114434u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x114438: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x114438u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11443c: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x11443cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x114440: 0x3c130041  lui         $s3, 0x41
    ctx->pc = 0x114440u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65 << 16));
label_114444:
    // 0x114444: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x114444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_114448:
    // 0x114448: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x114448u;
    {
        const bool branch_taken_0x114448 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x114448) {
            ctx->pc = 0x11444Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114448u;
            // 0x11444c: 0xa2000413  sb          $zero, 0x413($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114450u;
            goto label_114450;
        }
    }
    ctx->pc = 0x114450u;
label_114450:
    // 0x114450: 0xae150010  sw          $s5, 0x10($s0)
    ctx->pc = 0x114450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 21));
    // 0x114454: 0x24c3a9e0  addiu       $v1, $a2, -0x5620
    ctx->pc = 0x114454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945248));
    // 0x114458: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x114458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11445c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x11445cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x114460: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x114460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x114464: 0x26738ec0  addiu       $s3, $s3, -0x7140
    ctx->pc = 0x114464u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294938304));
    // 0x114468: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x114468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x11446c: 0xc043318  jal         func_10CC60
    ctx->pc = 0x11446Cu;
    SET_GPR_U32(ctx, 31, 0x114474u);
    ctx->pc = 0x114470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11446Cu;
    // 0x114470: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC60u, 0x11446Cu, 0x114474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114474u;
label_114474:
    // 0x114474: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x114474u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114478: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x114478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x11447c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x11447cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x114480: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x114480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x114484: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x114484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x114488: 0x26849980  addiu       $a0, $s4, -0x6680
    ctx->pc = 0x114488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941056));
    // 0x11448c: 0x26c78280  addiu       $a3, $s6, -0x7D80
    ctx->pc = 0x11448cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 4294935168));
    // 0x114490: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x114490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x114494: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x114494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x114498: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x114498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11449c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x11449cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1144a0: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1144a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x1144a4: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1144a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1144a8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1144a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1144ac: 0xc044576  jal         func_1115D8
    ctx->pc = 0x1144ACu;
    SET_GPR_U32(ctx, 31, 0x1144B4u);
    ctx->pc = 0x1144B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1144ACu;
    // 0x1144b0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1115D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1115D8u, 0x1144ACu, 0x1144B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1144B4u;
label_1144b4:
    // 0x1144b4: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1144B4u;
    {
        const bool branch_taken_0x1144b4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1144B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1144B4u;
        // 0x1144b8: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1144b4) {
            ctx->pc = 0x1144D4u;
            goto label_1144d4;
        }
    }
    ctx->pc = 0x1144BCu;
    // 0x1144bc: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x1144BCu;
    SET_GPR_U32(ctx, 31, 0x1144C4u);
    ctx->pc = 0x1144C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1144BCu;
    // 0x1144c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x1144BCu, 0x1144C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1144C4u;
label_1144c4:
    // 0x1144c4: 0xc0446de  jal         func_111B78
    ctx->pc = 0x1144C4u;
    SET_GPR_U32(ctx, 31, 0x1144CCu);
    ctx->pc = 0x111B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B78u, 0x1144C4u, 0x1144CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1144CCu;
label_1144cc:
    // 0x1144cc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1144CCu;
    {
        const bool branch_taken_0x1144cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1144D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1144CCu;
        // 0x1144d0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1144cc) {
            ctx->pc = 0x11450Cu;
            goto label_11450c;
        }
    }
    ctx->pc = 0x1144D4u;
label_1144d4:
    // 0x1144d4: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x1144d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x1144d8: 0xc0446de  jal         func_111B78
    ctx->pc = 0x1144D8u;
    SET_GPR_U32(ctx, 31, 0x1144E0u);
    ctx->pc = 0x1144DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1144D8u;
    // 0x1144dc: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B78u, 0x1144D8u, 0x1144E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1144E0u;
label_1144e0:
    // 0x1144e0: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1144E0u;
    {
        const bool branch_taken_0x1144e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1144e0) {
            ctx->pc = 0x1144F8u;
            goto label_1144f8;
        }
    }
    ctx->pc = 0x1144E8u;
    // 0x1144e8: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x1144E8u;
    SET_GPR_U32(ctx, 31, 0x1144F0u);
    ctx->pc = 0x1144ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1144E8u;
    // 0x1144ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x1144E8u, 0x1144F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1144F0u;
label_1144f0:
    // 0x1144f0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1144F0u;
    {
        const bool branch_taken_0x1144f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1144F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1144F0u;
        // 0x1144f4: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1144f0) {
            ctx->pc = 0x11450Cu;
            goto label_11450c;
        }
    }
    ctx->pc = 0x1144F8u;
label_1144f8:
    // 0x1144f8: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x1144F8u;
    SET_GPR_U32(ctx, 31, 0x114500u);
    ctx->pc = 0x1144FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1144F8u;
    // 0x1144fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x1144F8u, 0x114500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114500u;
label_114500:
    // 0x114500: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x114500u;
    SET_GPR_U32(ctx, 31, 0x114508u);
    ctx->pc = 0x114504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114500u;
    // 0x114504: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x114500u, 0x114508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114508u;
label_114508:
    // 0x114508: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x114508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_11450c:
    // 0x11450c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x11450cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x114510: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x114510u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x114514: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x114514u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x114518: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x114518u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11451c: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x11451cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x114520: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x114520u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x114524: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x114524u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x114528: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x114528u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11452c: 0x3e00008  jr          $ra
    ctx->pc = 0x11452Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11452Cu;
        // 0x114530: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11452Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114534u;
    // 0x114534: 0x0  nop
    ctx->pc = 0x114534u;
    // NOP
    // 0x114538: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x114538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x11453c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x11453cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x114540: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x114540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x114544: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x114544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114548: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x114548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x11454c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x11454cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114550: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x114550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x114554: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x114554u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114558: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x114558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x11455c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x11455cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114560: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x114560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x114564: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x114564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114568: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x114568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x11456c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x11456cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x114570: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x114570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x114574: 0x3c1e0041  lui         $fp, 0x41
    ctx->pc = 0x114574u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65 << 16));
    // 0x114578: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x114578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x11457c: 0x27d28280  addiu       $s2, $fp, -0x7D80
    ctx->pc = 0x11457cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 4294935168));
    // 0x114580: 0xc0446d2  jal         func_111B48
    ctx->pc = 0x114580u;
    SET_GPR_U32(ctx, 31, 0x114588u);
    ctx->pc = 0x114584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114580u;
    // 0x114584: 0xffb40080  sd          $s4, 0x80($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B48u, 0x114580u, 0x114588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114588u;
label_114588:
    // 0x114588: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x114588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11458c: 0x8c62873c  lw          $v0, -0x78C4($v1)
    ctx->pc = 0x11458cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936380)));
    // 0x114590: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x114590u;
    {
        const bool branch_taken_0x114590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114590) {
            ctx->pc = 0x114594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114590u;
            // 0x114594: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1145A4u;
            goto label_1145a4;
        }
    }
    ctx->pc = 0x114598u;
    // 0x114598: 0xc04471c  jal         func_111C70
    ctx->pc = 0x114598u;
    SET_GPR_U32(ctx, 31, 0x1145A0u);
    ctx->pc = 0x111C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111C70u, 0x114598u, 0x1145A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1145A0u;
label_1145a0:
    // 0x1145a0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1145a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1145a4:
    // 0x1145a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1145a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1145a8: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1145a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1145ac: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1145ACu;
    {
        const bool branch_taken_0x1145ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1145B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1145ACu;
        // 0x1145b0: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1145ac) {
            ctx->pc = 0x1145ECu;
            goto label_1145ec;
        }
    }
    ctx->pc = 0x1145B4u;
    // 0x1145b4: 0x2a270401  slti        $a3, $s1, 0x401
    ctx->pc = 0x1145b4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x1145b8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1145b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1145bc: 0x0  nop
    ctx->pc = 0x1145bcu;
    // NOP
label_1145c0:
    // 0x1145c0: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x1145c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1145c4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1145C4u;
    {
        const bool branch_taken_0x1145c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1145C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1145C4u;
        // 0x1145c8: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1145c4) {
            ctx->pc = 0x1145F0u;
            goto label_1145f0;
        }
    }
    ctx->pc = 0x1145CCu;
    // 0x1145cc: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x1145ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1145d0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1145d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1145d4: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x1145d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x1145d8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1145d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1145dc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1145DCu;
    {
        const bool branch_taken_0x1145dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1145dc) {
            ctx->pc = 0x1145E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1145DCu;
            // 0x1145e0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1145C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1145c0;
        }
    }
    ctx->pc = 0x1145E4u;
    // 0x1145e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1145E4u;
    {
        const bool branch_taken_0x1145e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1145E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1145E4u;
        // 0x1145e8: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1145e4) {
            ctx->pc = 0x1145F4u;
            goto label_1145f4;
        }
    }
    ctx->pc = 0x1145ECu;
label_1145ec:
    // 0x1145ec: 0x2a270401  slti        $a3, $s1, 0x401
    ctx->pc = 0x1145ecu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1025) ? 1 : 0);
label_1145f0:
    // 0x1145f0: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1145f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1145f4:
    // 0x1145f4: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1145F4u;
    {
        const bool branch_taken_0x1145f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1145f4) {
            ctx->pc = 0x1145F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1145F4u;
            // 0x1145f8: 0xa240040b  sb          $zero, 0x40B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1145FCu;
            goto label_1145fc;
        }
    }
    ctx->pc = 0x1145FCu;
label_1145fc:
    // 0x1145fc: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x1145fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x114600: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x114600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114604: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x114604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x114608: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x114608u;
    {
        const bool branch_taken_0x114608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114608u;
        // 0x11460c: 0xa242040c  sb          $v0, 0x40C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114608) {
            ctx->pc = 0x11463Cu;
            goto label_11463c;
        }
    }
    ctx->pc = 0x114610u;
    // 0x114610: 0x2646040c  addiu       $a2, $s2, 0x40C
    ctx->pc = 0x114610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1036));
    // 0x114614: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x114614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_114618:
    // 0x114618: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x114618u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x11461c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11461Cu;
    {
        const bool branch_taken_0x11461c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11461Cu;
        // 0x114620: 0x2651021  addu        $v0, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11461c) {
            ctx->pc = 0x11463Cu;
            goto label_11463c;
        }
    }
    ctx->pc = 0x114624u;
    // 0x114624: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x114624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x114628: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x114628u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11462c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x11462cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x114630: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x114630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x114634: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x114634u;
    {
        const bool branch_taken_0x114634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x114634) {
            ctx->pc = 0x114638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114634u;
            // 0x114638: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114618u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_114618;
        }
    }
    ctx->pc = 0x11463Cu;
label_11463c:
    // 0x11463c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x11463cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x114640: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x114640u;
    {
        const bool branch_taken_0x114640 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x114640) {
            ctx->pc = 0x114644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114640u;
            // 0x114644: 0xa240080b  sb          $zero, 0x80B($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 2059), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114648u;
            goto label_114648;
        }
    }
    ctx->pc = 0x114648u;
label_114648:
    // 0x114648: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x114648u;
    {
        const bool branch_taken_0x114648 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x114648) {
            ctx->pc = 0x114660u;
            goto label_114660;
        }
    }
    ctx->pc = 0x114650u;
    // 0x114650: 0xc0446de  jal         func_111B78
    ctx->pc = 0x114650u;
    SET_GPR_U32(ctx, 31, 0x114658u);
    ctx->pc = 0x111B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B78u, 0x114650u, 0x114658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114658u;
label_114658:
    // 0x114658: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x114658u;
    {
        const bool branch_taken_0x114658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114658u;
        // 0x11465c: 0x2402fff9  addiu       $v0, $zero, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114658) {
            ctx->pc = 0x114788u;
            goto label_114788;
        }
    }
    ctx->pc = 0x114660u;
label_114660:
    // 0x114660: 0x1a200011  blez        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x114660u;
    {
        const bool branch_taken_0x114660 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x114664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114660u;
        // 0x114664: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114660) {
            ctx->pc = 0x1146A8u;
            goto label_1146a8;
        }
    }
    ctx->pc = 0x114668u;
    // 0x114668: 0x2646080c  addiu       $a2, $s2, 0x80C
    ctx->pc = 0x114668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 2060));
    // 0x11466c: 0x3c07003e  lui         $a3, 0x3E
    ctx->pc = 0x11466cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)62 << 16));
    // 0x114670: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x114670u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x114674: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x114674u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x114678: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x114678u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x11467c: 0x0  nop
    ctx->pc = 0x11467cu;
    // NOP
label_114680:
    // 0x114680: 0x2c51021  addu        $v0, $s6, $a1
    ctx->pc = 0x114680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x114684: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x114684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x114688: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x114688u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11468c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11468cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x114690: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x114690u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x114694: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x114694u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x114698: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x114698u;
    {
        const bool branch_taken_0x114698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114698) {
            ctx->pc = 0x114680u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_114680;
        }
    }
    ctx->pc = 0x1146A0u;
    // 0x1146a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1146A0u;
    {
        const bool branch_taken_0x1146a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1146A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146A0u;
        // 0x1146a4: 0xae510c10  sw          $s1, 0xC10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3088), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1146a0) {
            ctx->pc = 0x1146BCu;
            goto label_1146bc;
        }
    }
    ctx->pc = 0x1146A8u;
label_1146a8:
    // 0x1146a8: 0x3c07003e  lui         $a3, 0x3E
    ctx->pc = 0x1146a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)62 << 16));
    // 0x1146ac: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1146acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1146b0: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1146b0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x1146b4: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x1146b4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x1146b8: 0xae510c10  sw          $s1, 0xC10($s2)
    ctx->pc = 0x1146b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3088), GPR_U32(ctx, 17));
label_1146bc:
    // 0x1146bc: 0x24e3a9f8  addiu       $v1, $a3, -0x5608
    ctx->pc = 0x1146bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945272));
    // 0x1146c0: 0xae570c0c  sw          $s7, 0xC0C($s2)
    ctx->pc = 0x1146c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3084), GPR_U32(ctx, 23));
    // 0x1146c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1146c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1146c8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1146c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1146cc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1146ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1146d0: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x1146d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x1146d4: 0x27d08280  addiu       $s0, $fp, -0x7D80
    ctx->pc = 0x1146d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294935168));
    // 0x1146d8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1146d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1146dc: 0xc043318  jal         func_10CC60
    ctx->pc = 0x1146DCu;
    SET_GPR_U32(ctx, 31, 0x1146E4u);
    ctx->pc = 0x1146E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1146DCu;
    // 0x1146e0: 0x26948ec0  addiu       $s4, $s4, -0x7140 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294938304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC60u, 0x1146DCu, 0x1146E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1146E4u;
label_1146e4:
    // 0x1146e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1146e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1146e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1146e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1146ec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1146ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1146f0: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1146f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x1146f4: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1146f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1146f8: 0x24050c14  addiu       $a1, $zero, 0xC14
    ctx->pc = 0x1146f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3092));
    // 0x1146fc: 0xc0440be  jal         func_1102F8
    ctx->pc = 0x1146FCu;
    SET_GPR_U32(ctx, 31, 0x114704u);
    ctx->pc = 0x114700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1146FCu;
    // 0x114700: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1102F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1102F8u, 0x1146FCu, 0x114704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114704u;
label_114704:
    // 0x114704: 0x26a49980  addiu       $a0, $s5, -0x6680
    ctx->pc = 0x114704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941056));
    // 0x114708: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x114708u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11470c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11470cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x114710: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x114710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x114714: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x114714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x114718: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x114718u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11471c: 0x24080c14  addiu       $t0, $zero, 0xC14
    ctx->pc = 0x11471cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3092));
    // 0x114720: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x114720u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114724: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x114724u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x114728: 0xc044576  jal         func_1115D8
    ctx->pc = 0x114728u;
    SET_GPR_U32(ctx, 31, 0x114730u);
    ctx->pc = 0x11472Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114728u;
    // 0x11472c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1115D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1115D8u, 0x114728u, 0x114730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114730u;
label_114730:
    // 0x114730: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x114730u;
    {
        const bool branch_taken_0x114730 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x114734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114730u;
        // 0x114734: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114730) {
            ctx->pc = 0x114750u;
            goto label_114750;
        }
    }
    ctx->pc = 0x114738u;
    // 0x114738: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x114738u;
    SET_GPR_U32(ctx, 31, 0x114740u);
    ctx->pc = 0x11473Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114738u;
    // 0x11473c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x114738u, 0x114740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114740u;
label_114740:
    // 0x114740: 0xc0446de  jal         func_111B78
    ctx->pc = 0x114740u;
    SET_GPR_U32(ctx, 31, 0x114748u);
    ctx->pc = 0x111B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B78u, 0x114740u, 0x114748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114748u;
label_114748:
    // 0x114748: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x114748u;
    {
        const bool branch_taken_0x114748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114748u;
        // 0x11474c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114748) {
            ctx->pc = 0x114788u;
            goto label_114788;
        }
    }
    ctx->pc = 0x114750u;
label_114750:
    // 0x114750: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x114750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x114754: 0xc0446de  jal         func_111B78
    ctx->pc = 0x114754u;
    SET_GPR_U32(ctx, 31, 0x11475Cu);
    ctx->pc = 0x114758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114754u;
    // 0x114758: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B78u, 0x114754u, 0x11475Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11475Cu;
label_11475c:
    // 0x11475c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11475Cu;
    {
        const bool branch_taken_0x11475c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x11475c) {
            ctx->pc = 0x114774u;
            goto label_114774;
        }
    }
    ctx->pc = 0x114764u;
    // 0x114764: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x114764u;
    SET_GPR_U32(ctx, 31, 0x11476Cu);
    ctx->pc = 0x114768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114764u;
    // 0x114768: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x114764u, 0x11476Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11476Cu;
label_11476c:
    // 0x11476c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11476Cu;
    {
        const bool branch_taken_0x11476c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11476Cu;
        // 0x114770: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11476c) {
            ctx->pc = 0x114788u;
            goto label_114788;
        }
    }
    ctx->pc = 0x114774u;
label_114774:
    // 0x114774: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x114774u;
    SET_GPR_U32(ctx, 31, 0x11477Cu);
    ctx->pc = 0x114778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114774u;
    // 0x114778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x114774u, 0x11477Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11477Cu;
label_11477c:
    // 0x11477c: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x11477Cu;
    SET_GPR_U32(ctx, 31, 0x114784u);
    ctx->pc = 0x114780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11477Cu;
    // 0x114780: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x11477Cu, 0x114784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114784u;
label_114784:
    // 0x114784: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x114784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_114788:
    // 0x114788: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x114788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x11478c: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x11478cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x114790: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x114790u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x114794: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x114794u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x114798: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x114798u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11479c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x11479cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1147a0: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1147a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1147a4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1147a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1147a8: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1147a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1147ac: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1147acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1147b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1147B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1147B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1147B0u;
        // 0x1147b4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1147B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1147B8u;
    // 0x1147b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1147b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1147bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1147bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1147c0: 0xc044c96  jal         func_113258
    ctx->pc = 0x1147C0u;
    SET_GPR_U32(ctx, 31, 0x1147C8u);
    ctx->pc = 0x1147C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1147C0u;
    // 0x1147c4: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113258u;
    goto label_113258;
    ctx->pc = 0x1147C8u;
label_1147c8:
    // 0x1147c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1147c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1147cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1147CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1147D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1147CCu;
        // 0x1147d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1147CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1147D4u;
    // 0x1147d4: 0x0  nop
    ctx->pc = 0x1147d4u;
    // NOP
    if (ctx->pc == 0x1147d4u) { ctx->pc = 0x1147d8u; }
}
