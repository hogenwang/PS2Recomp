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

// Function: sub_002F1150
// Address: 0x2f1150 - 0x2f1498
void sub_002F1150_0x2f1150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1150_0x2f1150");
#endif

    switch (ctx->pc) {
        case 0x2f1150u: goto label_2f1150;
        case 0x2f1154u: goto label_2f1154;
        case 0x2f1158u: goto label_2f1158;
        case 0x2f115cu: goto label_2f115c;
        case 0x2f1160u: goto label_2f1160;
        case 0x2f1164u: goto label_2f1164;
        case 0x2f1168u: goto label_2f1168;
        case 0x2f116cu: goto label_2f116c;
        case 0x2f1170u: goto label_2f1170;
        case 0x2f1174u: goto label_2f1174;
        case 0x2f1178u: goto label_2f1178;
        case 0x2f117cu: goto label_2f117c;
        case 0x2f1180u: goto label_2f1180;
        case 0x2f1184u: goto label_2f1184;
        case 0x2f1188u: goto label_2f1188;
        case 0x2f118cu: goto label_2f118c;
        case 0x2f1190u: goto label_2f1190;
        case 0x2f1194u: goto label_2f1194;
        case 0x2f1198u: goto label_2f1198;
        case 0x2f119cu: goto label_2f119c;
        case 0x2f11a0u: goto label_2f11a0;
        case 0x2f11a4u: goto label_2f11a4;
        case 0x2f11a8u: goto label_2f11a8;
        case 0x2f11acu: goto label_2f11ac;
        case 0x2f11b0u: goto label_2f11b0;
        case 0x2f11b4u: goto label_2f11b4;
        case 0x2f11b8u: goto label_2f11b8;
        case 0x2f11bcu: goto label_2f11bc;
        case 0x2f11c0u: goto label_2f11c0;
        case 0x2f11c4u: goto label_2f11c4;
        case 0x2f11c8u: goto label_2f11c8;
        case 0x2f11ccu: goto label_2f11cc;
        case 0x2f11d0u: goto label_2f11d0;
        case 0x2f11d4u: goto label_2f11d4;
        case 0x2f11d8u: goto label_2f11d8;
        case 0x2f11dcu: goto label_2f11dc;
        case 0x2f11e0u: goto label_2f11e0;
        case 0x2f11e4u: goto label_2f11e4;
        case 0x2f11e8u: goto label_2f11e8;
        case 0x2f11ecu: goto label_2f11ec;
        case 0x2f11f0u: goto label_2f11f0;
        case 0x2f11f4u: goto label_2f11f4;
        case 0x2f11f8u: goto label_2f11f8;
        case 0x2f11fcu: goto label_2f11fc;
        case 0x2f1200u: goto label_2f1200;
        case 0x2f1204u: goto label_2f1204;
        case 0x2f1208u: goto label_2f1208;
        case 0x2f120cu: goto label_2f120c;
        case 0x2f1210u: goto label_2f1210;
        case 0x2f1214u: goto label_2f1214;
        case 0x2f1218u: goto label_2f1218;
        case 0x2f121cu: goto label_2f121c;
        case 0x2f1220u: goto label_2f1220;
        case 0x2f1224u: goto label_2f1224;
        case 0x2f1228u: goto label_2f1228;
        case 0x2f122cu: goto label_2f122c;
        case 0x2f1230u: goto label_2f1230;
        case 0x2f1234u: goto label_2f1234;
        case 0x2f1238u: goto label_2f1238;
        case 0x2f123cu: goto label_2f123c;
        case 0x2f1240u: goto label_2f1240;
        case 0x2f1244u: goto label_2f1244;
        case 0x2f1248u: goto label_2f1248;
        case 0x2f124cu: goto label_2f124c;
        case 0x2f1250u: goto label_2f1250;
        case 0x2f1254u: goto label_2f1254;
        case 0x2f1258u: goto label_2f1258;
        case 0x2f125cu: goto label_2f125c;
        case 0x2f1260u: goto label_2f1260;
        case 0x2f1264u: goto label_2f1264;
        case 0x2f1268u: goto label_2f1268;
        case 0x2f126cu: goto label_2f126c;
        case 0x2f1270u: goto label_2f1270;
        case 0x2f1274u: goto label_2f1274;
        case 0x2f1278u: goto label_2f1278;
        case 0x2f127cu: goto label_2f127c;
        case 0x2f1280u: goto label_2f1280;
        case 0x2f1284u: goto label_2f1284;
        case 0x2f1288u: goto label_2f1288;
        case 0x2f128cu: goto label_2f128c;
        case 0x2f1290u: goto label_2f1290;
        case 0x2f1294u: goto label_2f1294;
        case 0x2f1298u: goto label_2f1298;
        case 0x2f129cu: goto label_2f129c;
        case 0x2f12a0u: goto label_2f12a0;
        case 0x2f12a4u: goto label_2f12a4;
        case 0x2f12a8u: goto label_2f12a8;
        case 0x2f12acu: goto label_2f12ac;
        case 0x2f12b0u: goto label_2f12b0;
        case 0x2f12b4u: goto label_2f12b4;
        case 0x2f12b8u: goto label_2f12b8;
        case 0x2f12bcu: goto label_2f12bc;
        case 0x2f12c0u: goto label_2f12c0;
        case 0x2f12c4u: goto label_2f12c4;
        case 0x2f12c8u: goto label_2f12c8;
        case 0x2f12ccu: goto label_2f12cc;
        case 0x2f12d0u: goto label_2f12d0;
        case 0x2f12d4u: goto label_2f12d4;
        case 0x2f12d8u: goto label_2f12d8;
        case 0x2f12dcu: goto label_2f12dc;
        case 0x2f12e0u: goto label_2f12e0;
        case 0x2f12e4u: goto label_2f12e4;
        case 0x2f12e8u: goto label_2f12e8;
        case 0x2f12ecu: goto label_2f12ec;
        case 0x2f12f0u: goto label_2f12f0;
        case 0x2f12f4u: goto label_2f12f4;
        case 0x2f12f8u: goto label_2f12f8;
        case 0x2f12fcu: goto label_2f12fc;
        case 0x2f1300u: goto label_2f1300;
        case 0x2f1304u: goto label_2f1304;
        case 0x2f1308u: goto label_2f1308;
        case 0x2f130cu: goto label_2f130c;
        case 0x2f1310u: goto label_2f1310;
        case 0x2f1314u: goto label_2f1314;
        case 0x2f1318u: goto label_2f1318;
        case 0x2f131cu: goto label_2f131c;
        case 0x2f1320u: goto label_2f1320;
        case 0x2f1324u: goto label_2f1324;
        case 0x2f1328u: goto label_2f1328;
        case 0x2f132cu: goto label_2f132c;
        case 0x2f1330u: goto label_2f1330;
        case 0x2f1334u: goto label_2f1334;
        case 0x2f1338u: goto label_2f1338;
        case 0x2f133cu: goto label_2f133c;
        case 0x2f1340u: goto label_2f1340;
        case 0x2f1344u: goto label_2f1344;
        case 0x2f1348u: goto label_2f1348;
        case 0x2f134cu: goto label_2f134c;
        case 0x2f1350u: goto label_2f1350;
        case 0x2f1354u: goto label_2f1354;
        case 0x2f1358u: goto label_2f1358;
        case 0x2f135cu: goto label_2f135c;
        case 0x2f1360u: goto label_2f1360;
        case 0x2f1364u: goto label_2f1364;
        case 0x2f1368u: goto label_2f1368;
        case 0x2f136cu: goto label_2f136c;
        case 0x2f1370u: goto label_2f1370;
        case 0x2f1374u: goto label_2f1374;
        case 0x2f1378u: goto label_2f1378;
        case 0x2f137cu: goto label_2f137c;
        case 0x2f1380u: goto label_2f1380;
        case 0x2f1384u: goto label_2f1384;
        case 0x2f1388u: goto label_2f1388;
        case 0x2f138cu: goto label_2f138c;
        case 0x2f1390u: goto label_2f1390;
        case 0x2f1394u: goto label_2f1394;
        case 0x2f1398u: goto label_2f1398;
        case 0x2f139cu: goto label_2f139c;
        case 0x2f13a0u: goto label_2f13a0;
        case 0x2f13a4u: goto label_2f13a4;
        case 0x2f13a8u: goto label_2f13a8;
        case 0x2f13acu: goto label_2f13ac;
        case 0x2f13b0u: goto label_2f13b0;
        case 0x2f13b4u: goto label_2f13b4;
        case 0x2f13b8u: goto label_2f13b8;
        case 0x2f13bcu: goto label_2f13bc;
        case 0x2f13c0u: goto label_2f13c0;
        case 0x2f13c4u: goto label_2f13c4;
        case 0x2f13c8u: goto label_2f13c8;
        case 0x2f13ccu: goto label_2f13cc;
        case 0x2f13d0u: goto label_2f13d0;
        case 0x2f13d4u: goto label_2f13d4;
        case 0x2f13d8u: goto label_2f13d8;
        case 0x2f13dcu: goto label_2f13dc;
        case 0x2f13e0u: goto label_2f13e0;
        case 0x2f13e4u: goto label_2f13e4;
        case 0x2f13e8u: goto label_2f13e8;
        case 0x2f13ecu: goto label_2f13ec;
        case 0x2f13f0u: goto label_2f13f0;
        case 0x2f13f4u: goto label_2f13f4;
        case 0x2f13f8u: goto label_2f13f8;
        case 0x2f13fcu: goto label_2f13fc;
        case 0x2f1400u: goto label_2f1400;
        case 0x2f1404u: goto label_2f1404;
        case 0x2f1408u: goto label_2f1408;
        case 0x2f140cu: goto label_2f140c;
        case 0x2f1410u: goto label_2f1410;
        case 0x2f1414u: goto label_2f1414;
        case 0x2f1418u: goto label_2f1418;
        case 0x2f141cu: goto label_2f141c;
        case 0x2f1420u: goto label_2f1420;
        case 0x2f1424u: goto label_2f1424;
        case 0x2f1428u: goto label_2f1428;
        case 0x2f142cu: goto label_2f142c;
        case 0x2f1430u: goto label_2f1430;
        case 0x2f1434u: goto label_2f1434;
        case 0x2f1438u: goto label_2f1438;
        case 0x2f143cu: goto label_2f143c;
        case 0x2f1440u: goto label_2f1440;
        case 0x2f1444u: goto label_2f1444;
        case 0x2f1448u: goto label_2f1448;
        case 0x2f144cu: goto label_2f144c;
        case 0x2f1450u: goto label_2f1450;
        case 0x2f1454u: goto label_2f1454;
        case 0x2f1458u: goto label_2f1458;
        case 0x2f145cu: goto label_2f145c;
        case 0x2f1460u: goto label_2f1460;
        case 0x2f1464u: goto label_2f1464;
        case 0x2f1468u: goto label_2f1468;
        case 0x2f146cu: goto label_2f146c;
        case 0x2f1470u: goto label_2f1470;
        case 0x2f1474u: goto label_2f1474;
        case 0x2f1478u: goto label_2f1478;
        case 0x2f147cu: goto label_2f147c;
        case 0x2f1480u: goto label_2f1480;
        case 0x2f1484u: goto label_2f1484;
        case 0x2f1488u: goto label_2f1488;
        case 0x2f148cu: goto label_2f148c;
        case 0x2f1490u: goto label_2f1490;
        case 0x2f1494u: goto label_2f1494;
        default: break;
    }

    ctx->pc = 0x2f1150u;

label_2f1150:
    // 0x2f1150: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f1150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2f1154:
    // 0x2f1154: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f1154u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1158:
    // 0x2f1158: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f1158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2f115c:
    // 0x2f115c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f115cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2f1160:
    // 0x2f1160: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2f1160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2f1164:
    // 0x2f1164: 0x309000ff  andi        $s0, $a0, 0xFF
    ctx->pc = 0x2f1164u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2f1168:
    // 0x2f1168: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2f1168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2f116c:
    // 0x2f116c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2f116cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2f1170:
    // 0x2f1170: 0x30b400ff  andi        $s4, $a1, 0xFF
    ctx->pc = 0x2f1170u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2f1174:
    // 0x2f1174: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f1174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2f1178:
    // 0x2f1178: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2f1178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2f117c:
    // 0x2f117c: 0x30f300ff  andi        $s3, $a3, 0xFF
    ctx->pc = 0x2f117cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_2f1180:
    // 0x2f1180: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f1180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2f1184:
    // 0x2f1184: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f1184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f1188:
    // 0x2f1188: 0x1260003b  beqz        $s3, . + 4 + (0x3B << 2)
label_2f118c:
    if (ctx->pc == 0x2F118Cu) {
        ctx->pc = 0x2F118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1188u;
        // 0x2f118c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1190u;
        goto label_2f1190;
    }
    ctx->pc = 0x2F1188u;
    {
        const bool branch_taken_0x2f1188 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1188u;
        // 0x2f118c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1188) {
            ctx->pc = 0x2F1278u;
            goto label_2f1278;
        }
    }
    ctx->pc = 0x2F1190u;
label_2f1190:
    // 0x2f1190: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2f1190u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
label_2f1194:
    // 0x2f1194: 0x25f5eca8  addiu       $s5, $t7, -0x1358
    ctx->pc = 0x2f1194u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
label_2f1198:
    // 0x2f1198: 0xc0bc3d6  jal         func_2F0F58
label_2f119c:
    if (ctx->pc == 0x2F119Cu) {
        ctx->pc = 0x2F119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1198u;
        // 0x2f119c: 0x8ea40070  lw          $a0, 0x70($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F11A0u;
        goto label_2f11a0;
    }
    ctx->pc = 0x2F1198u;
    SET_GPR_U32(ctx, 31, 0x2F11A0u);
    ctx->pc = 0x2F119Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1198u;
    // 0x2f119c: 0x8ea40070  lw          $a0, 0x70($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F58u, 0x2F1198u, 0x2F11A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F11A0u;
label_2f11a0:
    // 0x2f11a0: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2f11a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_2f11a4:
    // 0x2f11a4: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2f11a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
label_2f11a8:
    // 0x2f11a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f11a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f11ac:
    // 0x2f11ac: 0x320e000f  andi        $t6, $s0, 0xF
    ctx->pc = 0x2f11acu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
label_2f11b0:
    // 0x2f11b0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2f11b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2f11b4:
    // 0x2f11b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f11b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f11b8:
    // 0x2f11b8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f11b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f11bc:
    // 0x2f11bc: 0x25081888  addiu       $t0, $t0, 0x1888
    ctx->pc = 0x2f11bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6280));
label_2f11c0:
    // 0x2f11c0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_2f11c4:
    if (ctx->pc == 0x2F11C4u) {
        ctx->pc = 0x2F11C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F11C0u;
        // 0x2f11c4: 0x34e763bd  ori         $a3, $a3, 0x63BD (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)25533);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F11C8u;
        goto label_2f11c8;
    }
    ctx->pc = 0x2F11C0u;
    {
        const bool branch_taken_0x2f11c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F11C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F11C0u;
        // 0x2f11c4: 0x34e763bd  ori         $a3, $a3, 0x63BD (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)25533);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f11c0) {
            ctx->pc = 0x2F11FCu;
            goto label_2f11fc;
        }
    }
    ctx->pc = 0x2F11C8u;
label_2f11c8:
    // 0x2f11c8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2f11c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_2f11cc:
    // 0x2f11cc: 0x24050f07  addiu       $a1, $zero, 0xF07
    ctx->pc = 0x2f11ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3847));
label_2f11d0:
    // 0x2f11d0: 0x248418a8  addiu       $a0, $a0, 0x18A8
    ctx->pc = 0x2f11d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6312));
label_2f11d4:
    // 0x2f11d4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f11d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f11d8:
    // 0x2f11d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f11d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f11dc:
    // 0x2f11dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f11dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2f11e0:
    // 0x2f11e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f11e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f11e4:
    // 0x2f11e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2f11e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2f11e8:
    // 0x2f11e8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2f11e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f11ec:
    // 0x2f11ec: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2f11ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2f11f0:
    // 0x2f11f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f11f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f11f4:
    // 0x2f11f4: 0x80bc73e  j           func_2F1CF8
label_2f11f8:
    if (ctx->pc == 0x2F11F8u) {
        ctx->pc = 0x2F11F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F11F4u;
        // 0x2f11f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F11FCu;
        goto label_2f11fc;
    }
    ctx->pc = 0x2F11F4u;
    ctx->pc = 0x2F11F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F11F4u;
    // 0x2f11f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    sub_002F1CF8_0x2f1cf8(rdram, ctx, runtime); return;
    ctx->pc = 0x2F11FCu;
label_2f11fc:
    // 0x2f11fc: 0x904f0000  lbu         $t7, 0x0($v0)
    ctx->pc = 0x2f11fcu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2f1200:
    // 0x2f1200: 0xa0540002  sb          $s4, 0x2($v0)
    ctx->pc = 0x2f1200u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 20));
label_2f1204:
    // 0x2f1204: 0x31ef00f0  andi        $t7, $t7, 0xF0
    ctx->pc = 0x2f1204u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)240);
label_2f1208:
    // 0x2f1208: 0xa0530001  sb          $s3, 0x1($v0)
    ctx->pc = 0x2f1208u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 19));
label_2f120c:
    // 0x2f120c: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x2f120cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
label_2f1210:
    // 0x2f1210: 0x35ef0010  ori         $t7, $t7, 0x10
    ctx->pc = 0x2f1210u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)16);
label_2f1214:
    // 0x2f1214: 0xc049c48  jal         func_127120
label_2f1218:
    if (ctx->pc == 0x2F1218u) {
        ctx->pc = 0x2F1218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1214u;
        // 0x2f1218: 0xa04f0000  sb          $t7, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F121Cu;
        goto label_2f121c;
    }
    ctx->pc = 0x2F1214u;
    SET_GPR_U32(ctx, 31, 0x2F121Cu);
    ctx->pc = 0x2F1218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1214u;
    // 0x2f1218: 0xa04f0000  sb          $t7, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2F1214u, 0x2F121Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F121Cu;
label_2f121c:
    // 0x2f121c: 0x922e0003  lbu         $t6, 0x3($s1)
    ctx->pc = 0x2f121cu;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_2f1220:
    // 0x2f1220: 0x26a40070  addiu       $a0, $s5, 0x70
    ctx->pc = 0x2f1220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
label_2f1224:
    // 0x2f1224: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x2f1224u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f1228:
    // 0x2f1228: 0x15cf0010  bne         $t6, $t7, . + 4 + (0x10 << 2)
label_2f122c:
    if (ctx->pc == 0x2F122Cu) {
        ctx->pc = 0x2F122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1228u;
        // 0x2f122c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1230u;
        goto label_2f1230;
    }
    ctx->pc = 0x2F1228u;
    {
        const bool branch_taken_0x2f1228 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x2F122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1228u;
        // 0x2f122c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1228) {
            ctx->pc = 0x2F126Cu;
            goto label_2f126c;
        }
    }
    ctx->pc = 0x2F1230u;
label_2f1230:
    // 0x2f1230: 0xc0bc424  jal         func_2F1090
label_2f1234:
    if (ctx->pc == 0x2F1234u) {
        ctx->pc = 0x2F1238u;
        goto label_2f1238;
    }
    ctx->pc = 0x2F1230u;
    SET_GPR_U32(ctx, 31, 0x2F1238u);
    ctx->pc = 0x2F1090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1090u, 0x2F1230u, 0x2F1238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1238u;
label_2f1238:
    // 0x2f1238: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2f1238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_2f123c:
    // 0x2f123c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2f123cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_2f1240:
    // 0x2f1240: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2f1240u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
label_2f1244:
    // 0x2f1244: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2f1244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_2f1248:
    // 0x2f1248: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2f1248u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2f124c:
    // 0x2f124c: 0x250818c8  addiu       $t0, $t0, 0x18C8
    ctx->pc = 0x2f124cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6344));
label_2f1250:
    // 0x2f1250: 0x24050f17  addiu       $a1, $zero, 0xF17
    ctx->pc = 0x2f1250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3863));
label_2f1254:
    // 0x2f1254: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f1254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f1258:
    // 0x2f1258: 0x248418a8  addiu       $a0, $a0, 0x18A8
    ctx->pc = 0x2f1258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6312));
label_2f125c:
    // 0x2f125c: 0x1040ffde  beqz        $v0, . + 4 + (-0x22 << 2)
label_2f1260:
    if (ctx->pc == 0x2F1260u) {
        ctx->pc = 0x2F1260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F125Cu;
        // 0x2f1260: 0x34e763bd  ori         $a3, $a3, 0x63BD (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)25533);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1264u;
        goto label_2f1264;
    }
    ctx->pc = 0x2F125Cu;
    {
        const bool branch_taken_0x2f125c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F125Cu;
        // 0x2f1260: 0x34e763bd  ori         $a3, $a3, 0x63BD (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)25533);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f125c) {
            ctx->pc = 0x2F11D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f11d8;
        }
    }
    ctx->pc = 0x2F1264u;
label_2f1264:
    // 0x2f1264: 0xc0bc43c  jal         func_2F10F0
label_2f1268:
    if (ctx->pc == 0x2F1268u) {
        ctx->pc = 0x2F1268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1264u;
        // 0x2f1268: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F126Cu;
        goto label_2f126c;
    }
    ctx->pc = 0x2F1264u;
    SET_GPR_U32(ctx, 31, 0x2F126Cu);
    ctx->pc = 0x2F1268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1264u;
    // 0x2f1268: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F10F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F10F0u, 0x2F1264u, 0x2F126Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F126Cu;
label_2f126c:
    // 0x2f126c: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x2f126cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f1270:
    // 0x2f1270: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2f1270u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f1274:
    // 0x2f1274: 0xa22f0003  sb          $t7, 0x3($s1)
    ctx->pc = 0x2f1274u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 15));
label_2f1278:
    // 0x2f1278: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f1278u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f127c:
    // 0x2f127c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f127cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2f1280:
    // 0x2f1280: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f1280u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f1284:
    // 0x2f1284: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2f1284u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2f1288:
    // 0x2f1288: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2f1288u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f128c:
    // 0x2f128c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2f128cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2f1290:
    // 0x2f1290: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f1290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f1294:
    // 0x2f1294: 0x3e00008  jr          $ra
label_2f1298:
    if (ctx->pc == 0x2F1298u) {
        ctx->pc = 0x2F1298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1294u;
        // 0x2f1298: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F129Cu;
        goto label_2f129c;
    }
    ctx->pc = 0x2F1294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1294u;
        // 0x2f1298: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F129Cu;
label_2f129c:
    // 0x2f129c: 0x0  nop
    ctx->pc = 0x2f129cu;
    // NOP
label_2f12a0:
    // 0x2f12a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f12a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2f12a4:
    // 0x2f12a4: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x2f12a4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f12a8:
    // 0x2f12a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f12a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2f12ac:
    // 0x2f12ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f12acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2f12b0:
    // 0x2f12b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2f12b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2f12b4:
    // 0x2f12b4: 0x30f100ff  andi        $s1, $a3, 0xFF
    ctx->pc = 0x2f12b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_2f12b8:
    // 0x2f12b8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2f12b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2f12bc:
    // 0x2f12bc: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2f12bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2f12c0:
    // 0x2f12c0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2f12c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2f12c4:
    // 0x2f12c4: 0x309300ff  andi        $s3, $a0, 0xFF
    ctx->pc = 0x2f12c4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2f12c8:
    // 0x2f12c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f12c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2f12cc:
    // 0x2f12cc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2f12ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2f12d0:
    // 0x2f12d0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f12d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2f12d4:
    // 0x2f12d4: 0x12200059  beqz        $s1, . + 4 + (0x59 << 2)
label_2f12d8:
    if (ctx->pc == 0x2F12D8u) {
        ctx->pc = 0x2F12D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F12D4u;
        // 0x2f12d8: 0x30b500ff  andi        $s5, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F12DCu;
        goto label_2f12dc;
    }
    ctx->pc = 0x2F12D4u;
    {
        const bool branch_taken_0x2f12d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F12D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F12D4u;
        // 0x2f12d8: 0x30b500ff  andi        $s5, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f12d4) {
            ctx->pc = 0x2F143Cu;
            goto label_2f143c;
        }
    }
    ctx->pc = 0x2F12DCu;
label_2f12dc:
    // 0x2f12dc: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2f12dcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
label_2f12e0:
    // 0x2f12e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f12e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f12e4:
    // 0x2f12e4: 0x8de4ed20  lw          $a0, -0x12E0($t7)
    ctx->pc = 0x2f12e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294962464)));
label_2f12e8:
    // 0x2f12e8: 0xc0bc3d6  jal         func_2F0F58
label_2f12ec:
    if (ctx->pc == 0x2F12ECu) {
        ctx->pc = 0x2F12ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F12E8u;
        // 0x2f12ec: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F12F0u;
        goto label_2f12f0;
    }
    ctx->pc = 0x2F12E8u;
    SET_GPR_U32(ctx, 31, 0x2F12F0u);
    ctx->pc = 0x2F12ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F12E8u;
    // 0x2f12ec: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F58u, 0x2F12E8u, 0x2F12F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F12F0u;
label_2f12f0:
    // 0x2f12f0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_2f12f4:
    if (ctx->pc == 0x2F12F4u) {
        ctx->pc = 0x2F12F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F12F0u;
        // 0x2f12f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F12F8u;
        goto label_2f12f8;
    }
    ctx->pc = 0x2F12F0u;
    {
        const bool branch_taken_0x2f12f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F12F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F12F0u;
        // 0x2f12f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f12f0) {
            ctx->pc = 0x2F133Cu;
            goto label_2f133c;
        }
    }
    ctx->pc = 0x2F12F8u;
label_2f12f8:
    // 0x2f12f8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2f12f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_2f12fc:
    // 0x2f12fc: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2f12fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
label_2f1300:
    // 0x2f1300: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2f1300u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_2f1304:
    // 0x2f1304: 0x248418e8  addiu       $a0, $a0, 0x18E8
    ctx->pc = 0x2f1304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6376));
label_2f1308:
    // 0x2f1308: 0x250817a8  addiu       $t0, $t0, 0x17A8
    ctx->pc = 0x2f1308u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6056));
label_2f130c:
    // 0x2f130c: 0x24050f38  addiu       $a1, $zero, 0xF38
    ctx->pc = 0x2f130cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3896));
label_2f1310:
    // 0x2f1310: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f1310u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f1314:
    // 0x2f1314: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f1314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f1318:
    // 0x2f1318: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f1318u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2f131c:
    // 0x2f131c: 0x34e763bd  ori         $a3, $a3, 0x63BD
    ctx->pc = 0x2f131cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)25533);
label_2f1320:
    // 0x2f1320: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f1320u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f1324:
    // 0x2f1324: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2f1324u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2f1328:
    // 0x2f1328: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2f1328u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f132c:
    // 0x2f132c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2f132cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2f1330:
    // 0x2f1330: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f1330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f1334:
    // 0x2f1334: 0x80bc73e  j           func_2F1CF8
label_2f1338:
    if (ctx->pc == 0x2F1338u) {
        ctx->pc = 0x2F1338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1334u;
        // 0x2f1338: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F133Cu;
        goto label_2f133c;
    }
    ctx->pc = 0x2F1334u;
    ctx->pc = 0x2F1338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1334u;
    // 0x2f1338: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    sub_002F1CF8_0x2f1cf8(rdram, ctx, runtime); return;
    ctx->pc = 0x2F133Cu;
label_2f133c:
    // 0x2f133c: 0x904e0003  lbu         $t6, 0x3($v0)
    ctx->pc = 0x2f133cu;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_2f1340:
    // 0x2f1340: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x2f1340u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f1344:
    // 0x2f1344: 0x51cf001c  beql        $t6, $t7, . + 4 + (0x1C << 2)
label_2f1348:
    if (ctx->pc == 0x2F1348u) {
        ctx->pc = 0x2F1348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1344u;
        // 0x2f1348: 0x26120004  addiu       $s2, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F134Cu;
        goto label_2f134c;
    }
    ctx->pc = 0x2F1344u;
    {
        const bool branch_taken_0x2f1344 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        if (branch_taken_0x2f1344) {
            ctx->pc = 0x2F1348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1344u;
            // 0x2f1348: 0x26120004  addiu       $s2, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F13B8u;
            goto label_2f13b8;
        }
    }
    ctx->pc = 0x2F134Cu;
label_2f134c:
    // 0x2f134c: 0x5240001a  beql        $s2, $zero, . + 4 + (0x1A << 2)
label_2f1350:
    if (ctx->pc == 0x2F1350u) {
        ctx->pc = 0x2F1350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F134Cu;
        // 0x2f1350: 0x26120004  addiu       $s2, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1354u;
        goto label_2f1354;
    }
    ctx->pc = 0x2F134Cu;
    {
        const bool branch_taken_0x2f134c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f134c) {
            ctx->pc = 0x2F1350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F134Cu;
            // 0x2f1350: 0x26120004  addiu       $s2, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F13B8u;
            goto label_2f13b8;
        }
    }
    ctx->pc = 0x2F1354u;
label_2f1354:
    // 0x2f1354: 0x904e0000  lbu         $t6, 0x0($v0)
    ctx->pc = 0x2f1354u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2f1358:
    // 0x2f1358: 0x31cf0010  andi        $t7, $t6, 0x10
    ctx->pc = 0x2f1358u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)16);
label_2f135c:
    // 0x2f135c: 0x11e0000c  beqz        $t7, . + 4 + (0xC << 2)
label_2f1360:
    if (ctx->pc == 0x2F1360u) {
        ctx->pc = 0x2F1360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F135Cu;
        // 0x2f1360: 0x31cf000f  andi        $t7, $t6, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1364u;
        goto label_2f1364;
    }
    ctx->pc = 0x2F135Cu;
    {
        const bool branch_taken_0x2f135c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F135Cu;
        // 0x2f1360: 0x31cf000f  andi        $t7, $t6, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f135c) {
            ctx->pc = 0x2F1390u;
            goto label_2f1390;
        }
    }
    ctx->pc = 0x2F1364u;
label_2f1364:
    // 0x2f1364: 0x166f000b  bne         $s3, $t7, . + 4 + (0xB << 2)
label_2f1368:
    if (ctx->pc == 0x2F1368u) {
        ctx->pc = 0x2F1368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1364u;
        // 0x2f1368: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F136Cu;
        goto label_2f136c;
    }
    ctx->pc = 0x2F1364u;
    {
        const bool branch_taken_0x2f1364 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 15));
        ctx->pc = 0x2F1368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1364u;
        // 0x2f1368: 0x3c0f003c  lui         $t7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1364) {
            ctx->pc = 0x2F1394u;
            goto label_2f1394;
        }
    }
    ctx->pc = 0x2F136Cu;
label_2f136c:
    // 0x2f136c: 0x904f0001  lbu         $t7, 0x1($v0)
    ctx->pc = 0x2f136cu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2f1370:
    // 0x2f1370: 0x11f10007  beq         $t7, $s1, . + 4 + (0x7 << 2)
label_2f1374:
    if (ctx->pc == 0x2F1374u) {
        ctx->pc = 0x2F1374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1370u;
        // 0x2f1374: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1378u;
        goto label_2f1378;
    }
    ctx->pc = 0x2F1370u;
    {
        const bool branch_taken_0x2f1370 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 17));
        ctx->pc = 0x2F1374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1370u;
        // 0x2f1374: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1370) {
            ctx->pc = 0x2F1390u;
            goto label_2f1390;
        }
    }
    ctx->pc = 0x2F1378u;
label_2f1378:
    // 0x2f1378: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2f1378u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
label_2f137c:
    // 0x2f137c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2f137cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_2f1380:
    // 0x2f1380: 0x248418e8  addiu       $a0, $a0, 0x18E8
    ctx->pc = 0x2f1380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6376));
label_2f1384:
    // 0x2f1384: 0x25081908  addiu       $t0, $t0, 0x1908
    ctx->pc = 0x2f1384u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6408));
label_2f1388:
    // 0x2f1388: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
label_2f138c:
    if (ctx->pc == 0x2F138Cu) {
        ctx->pc = 0x2F138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1388u;
        // 0x2f138c: 0x24050f4b  addiu       $a1, $zero, 0xF4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3915));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1390u;
        goto label_2f1390;
    }
    ctx->pc = 0x2F1388u;
    {
        const bool branch_taken_0x2f1388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1388u;
        // 0x2f138c: 0x24050f4b  addiu       $a1, $zero, 0xF4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3915));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1388) {
            ctx->pc = 0x2F1310u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f1310;
        }
    }
    ctx->pc = 0x2F1390u;
label_2f1390:
    // 0x2f1390: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2f1390u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
label_2f1394:
    // 0x2f1394: 0x8deff06c  lw          $t7, -0xF94($t7)
    ctx->pc = 0x2f1394u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963308)));
label_2f1398:
    // 0x2f1398: 0x15e00038  bnez        $t7, . + 4 + (0x38 << 2)
label_2f139c:
    if (ctx->pc == 0x2F139Cu) {
        ctx->pc = 0x2F139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1398u;
        // 0x2f139c: 0x26120004  addiu       $s2, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F13A0u;
        goto label_2f13a0;
    }
    ctx->pc = 0x2F1398u;
    {
        const bool branch_taken_0x2f1398 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1398u;
        // 0x2f139c: 0x26120004  addiu       $s2, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1398) {
            ctx->pc = 0x2F147Cu;
            goto label_2f147c;
        }
    }
    ctx->pc = 0x2F13A0u;
label_2f13a0:
    // 0x2f13a0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f13a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f13a4:
    // 0x2f13a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f13a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f13a8:
    // 0x2f13a8: 0xc0bc1d8  jal         func_2F0760
label_2f13ac:
    if (ctx->pc == 0x2F13ACu) {
        ctx->pc = 0x2F13ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F13A8u;
        // 0x2f13ac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F13B0u;
        goto label_2f13b0;
    }
    ctx->pc = 0x2F13A8u;
    SET_GPR_U32(ctx, 31, 0x2F13B0u);
    ctx->pc = 0x2F13ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F13A8u;
    // 0x2f13ac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0760u, 0x2F13A8u, 0x2F13B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F13B0u;
label_2f13b0:
    // 0x2f13b0: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_2f13b4:
    if (ctx->pc == 0x2F13B4u) {
        ctx->pc = 0x2F13B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F13B0u;
        // 0x2f13b4: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F13B8u;
        goto label_2f13b8;
    }
    ctx->pc = 0x2F13B0u;
    {
        const bool branch_taken_0x2f13b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F13B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F13B0u;
        // 0x2f13b4: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f13b0) {
            ctx->pc = 0x2F143Cu;
            goto label_2f143c;
        }
    }
    ctx->pc = 0x2F13B8u;
label_2f13b8:
    // 0x2f13b8: 0x920f0000  lbu         $t7, 0x0($s0)
    ctx->pc = 0x2f13b8u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2f13bc:
    // 0x2f13bc: 0x326e000f  andi        $t6, $s3, 0xF
    ctx->pc = 0x2f13bcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
label_2f13c0:
    // 0x2f13c0: 0xa2150002  sb          $s5, 0x2($s0)
    ctx->pc = 0x2f13c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 21));
label_2f13c4:
    // 0x2f13c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f13c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f13c8:
    // 0x2f13c8: 0x31ef00f0  andi        $t7, $t7, 0xF0
    ctx->pc = 0x2f13c8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)240);
label_2f13cc:
    // 0x2f13cc: 0xa2110001  sb          $s1, 0x1($s0)
    ctx->pc = 0x2f13ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 17));
label_2f13d0:
    // 0x2f13d0: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x2f13d0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
label_2f13d4:
    // 0x2f13d4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f13d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f13d8:
    // 0x2f13d8: 0x35ef0010  ori         $t7, $t7, 0x10
    ctx->pc = 0x2f13d8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)16);
label_2f13dc:
    // 0x2f13dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f13dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f13e0:
    // 0x2f13e0: 0xc049c48  jal         func_127120
label_2f13e4:
    if (ctx->pc == 0x2F13E4u) {
        ctx->pc = 0x2F13E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F13E0u;
        // 0x2f13e4: 0xa20f0000  sb          $t7, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F13E8u;
        goto label_2f13e8;
    }
    ctx->pc = 0x2F13E0u;
    SET_GPR_U32(ctx, 31, 0x2F13E8u);
    ctx->pc = 0x2F13E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F13E0u;
    // 0x2f13e4: 0xa20f0000  sb          $t7, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2F13E0u, 0x2F13E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F13E8u;
label_2f13e8:
    // 0x2f13e8: 0x920e0003  lbu         $t6, 0x3($s0)
    ctx->pc = 0x2f13e8u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_2f13ec:
    // 0x2f13ec: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x2f13ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f13f0:
    // 0x2f13f0: 0x15cf001f  bne         $t6, $t7, . + 4 + (0x1F << 2)
label_2f13f4:
    if (ctx->pc == 0x2F13F4u) {
        ctx->pc = 0x2F13F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F13F0u;
        // 0x2f13f4: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F13F8u;
        goto label_2f13f8;
    }
    ctx->pc = 0x2F13F0u;
    {
        const bool branch_taken_0x2f13f0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x2F13F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F13F0u;
        // 0x2f13f4: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f13f0) {
            ctx->pc = 0x2F1470u;
            goto label_2f1470;
        }
    }
    ctx->pc = 0x2F13F8u;
label_2f13f8:
    // 0x2f13f8: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2f13f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
label_2f13fc:
    // 0x2f13fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f13fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1400:
    // 0x2f1400: 0xc0bc424  jal         func_2F1090
label_2f1404:
    if (ctx->pc == 0x2F1404u) {
        ctx->pc = 0x2F1404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1400u;
        // 0x2f1404: 0x2484ed20  addiu       $a0, $a0, -0x12E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1408u;
        goto label_2f1408;
    }
    ctx->pc = 0x2F1400u;
    SET_GPR_U32(ctx, 31, 0x2F1408u);
    ctx->pc = 0x2F1404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1400u;
    // 0x2f1404: 0x2484ed20  addiu       $a0, $a0, -0x12E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1090u, 0x2F1400u, 0x2F1408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1408u;
label_2f1408:
    // 0x2f1408: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2f1408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_2f140c:
    // 0x2f140c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2f140cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2f1410:
    // 0x2f1410: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_2f1414:
    if (ctx->pc == 0x2F1414u) {
        ctx->pc = 0x2F1414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1410u;
        // 0x2f1414: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1418u;
        goto label_2f1418;
    }
    ctx->pc = 0x2F1410u;
    {
        const bool branch_taken_0x2f1410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1410u;
        // 0x2f1414: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1410) {
            ctx->pc = 0x2F1464u;
            goto label_2f1464;
        }
    }
    ctx->pc = 0x2F1418u;
label_2f1418:
    // 0x2f1418: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2f1418u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_2f141c:
    // 0x2f141c: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2f141cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
label_2f1420:
    // 0x2f1420: 0x248418e8  addiu       $a0, $a0, 0x18E8
    ctx->pc = 0x2f1420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6376));
label_2f1424:
    // 0x2f1424: 0x25081928  addiu       $t0, $t0, 0x1928
    ctx->pc = 0x2f1424u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6440));
label_2f1428:
    // 0x2f1428: 0x24050f71  addiu       $a1, $zero, 0xF71
    ctx->pc = 0x2f1428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3953));
label_2f142c:
    // 0x2f142c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f142cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f1430:
    // 0x2f1430: 0xc0bc73e  jal         func_2F1CF8
label_2f1434:
    if (ctx->pc == 0x2F1434u) {
        ctx->pc = 0x2F1434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1430u;
        // 0x2f1434: 0x34e763bd  ori         $a3, $a3, 0x63BD (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)25533);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1438u;
        goto label_2f1438;
    }
    ctx->pc = 0x2F1430u;
    SET_GPR_U32(ctx, 31, 0x2F1438u);
    ctx->pc = 0x2F1434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1430u;
    // 0x2f1434: 0x34e763bd  ori         $a3, $a3, 0x63BD (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)25533);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1CF8u, 0x2F1430u, 0x2F1438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1438u;
label_2f1438:
    // 0x2f1438: 0x220702d  daddu       $t6, $s1, $zero
    ctx->pc = 0x2f1438u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f143c:
    // 0x2f143c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f143cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f1440:
    // 0x2f1440: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x2f1440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_2f1444:
    // 0x2f1444: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f1444u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2f1448:
    // 0x2f1448: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f1448u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f144c:
    // 0x2f144c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2f144cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2f1450:
    // 0x2f1450: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2f1450u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f1454:
    // 0x2f1454: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2f1454u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2f1458:
    // 0x2f1458: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f1458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f145c:
    // 0x2f145c: 0x3e00008  jr          $ra
label_2f1460:
    if (ctx->pc == 0x2F1460u) {
        ctx->pc = 0x2F1460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F145Cu;
        // 0x2f1460: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1464u;
        goto label_2f1464;
    }
    ctx->pc = 0x2F145Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F145Cu;
        // 0x2f1460: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F145Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1464u;
label_2f1464:
    // 0x2f1464: 0xc0bc43c  jal         func_2F10F0
label_2f1468:
    if (ctx->pc == 0x2F1468u) {
        ctx->pc = 0x2F1468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1464u;
        // 0x2f1468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F146Cu;
        goto label_2f146c;
    }
    ctx->pc = 0x2F1464u;
    SET_GPR_U32(ctx, 31, 0x2F146Cu);
    ctx->pc = 0x2F1468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1464u;
    // 0x2f1468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F10F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F10F0u, 0x2F1464u, 0x2F146Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F146Cu;
label_2f146c:
    // 0x2f146c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x2f146cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f1470:
    // 0x2f1470: 0x220702d  daddu       $t6, $s1, $zero
    ctx->pc = 0x2f1470u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f1474:
    // 0x2f1474: 0x1000fff1  b           . + 4 + (-0xF << 2)
label_2f1478:
    if (ctx->pc == 0x2F1478u) {
        ctx->pc = 0x2F1478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1474u;
        // 0x2f1478: 0xa20f0003  sb          $t7, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F147Cu;
        goto label_2f147c;
    }
    ctx->pc = 0x2F1474u;
    {
        const bool branch_taken_0x2f1474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1474u;
        // 0x2f1478: 0xa20f0003  sb          $t7, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1474) {
            ctx->pc = 0x2F143Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f143c;
        }
    }
    ctx->pc = 0x2F147Cu;
label_2f147c:
    // 0x2f147c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f147cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f1480:
    // 0x2f1480: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f1480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f1484:
    // 0x2f1484: 0x1e0f809  jalr        $t7
label_2f1488:
    if (ctx->pc == 0x2F1488u) {
        ctx->pc = 0x2F1488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1484u;
        // 0x2f1488: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F148Cu;
        goto label_2f148c;
    }
    ctx->pc = 0x2F1484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 15);
        SET_GPR_U32(ctx, 31, 0x2F148Cu);
        ctx->pc = 0x2F1488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1484u;
        // 0x2f1488: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1484u, 0x2F148Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F148Cu;
label_2f148c:
    // 0x2f148c: 0x1000ffc8  b           . + 4 + (-0x38 << 2)
label_2f1490:
    if (ctx->pc == 0x2F1490u) {
        ctx->pc = 0x2F1494u;
        goto label_2f1494;
    }
    ctx->pc = 0x2F148Cu;
    {
        const bool branch_taken_0x2f148c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f148c) {
            ctx->pc = 0x2F13B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f13b0;
        }
    }
    ctx->pc = 0x2F1494u;
label_2f1494:
    // 0x2f1494: 0x0  nop
    ctx->pc = 0x2f1494u;
    // NOP
}
