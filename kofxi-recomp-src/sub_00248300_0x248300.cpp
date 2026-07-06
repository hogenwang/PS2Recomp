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

// Function: sub_00248300
// Address: 0x248300 - 0x2485b8
void sub_00248300_0x248300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248300_0x248300");
#endif

    switch (ctx->pc) {
        case 0x248300u: goto label_248300;
        case 0x248304u: goto label_248304;
        case 0x248308u: goto label_248308;
        case 0x24830cu: goto label_24830c;
        case 0x248310u: goto label_248310;
        case 0x248314u: goto label_248314;
        case 0x248318u: goto label_248318;
        case 0x24831cu: goto label_24831c;
        case 0x248320u: goto label_248320;
        case 0x248324u: goto label_248324;
        case 0x248328u: goto label_248328;
        case 0x24832cu: goto label_24832c;
        case 0x248330u: goto label_248330;
        case 0x248334u: goto label_248334;
        case 0x248338u: goto label_248338;
        case 0x24833cu: goto label_24833c;
        case 0x248340u: goto label_248340;
        case 0x248344u: goto label_248344;
        case 0x248348u: goto label_248348;
        case 0x24834cu: goto label_24834c;
        case 0x248350u: goto label_248350;
        case 0x248354u: goto label_248354;
        case 0x248358u: goto label_248358;
        case 0x24835cu: goto label_24835c;
        case 0x248360u: goto label_248360;
        case 0x248364u: goto label_248364;
        case 0x248368u: goto label_248368;
        case 0x24836cu: goto label_24836c;
        case 0x248370u: goto label_248370;
        case 0x248374u: goto label_248374;
        case 0x248378u: goto label_248378;
        case 0x24837cu: goto label_24837c;
        case 0x248380u: goto label_248380;
        case 0x248384u: goto label_248384;
        case 0x248388u: goto label_248388;
        case 0x24838cu: goto label_24838c;
        case 0x248390u: goto label_248390;
        case 0x248394u: goto label_248394;
        case 0x248398u: goto label_248398;
        case 0x24839cu: goto label_24839c;
        case 0x2483a0u: goto label_2483a0;
        case 0x2483a4u: goto label_2483a4;
        case 0x2483a8u: goto label_2483a8;
        case 0x2483acu: goto label_2483ac;
        case 0x2483b0u: goto label_2483b0;
        case 0x2483b4u: goto label_2483b4;
        case 0x2483b8u: goto label_2483b8;
        case 0x2483bcu: goto label_2483bc;
        case 0x2483c0u: goto label_2483c0;
        case 0x2483c4u: goto label_2483c4;
        case 0x2483c8u: goto label_2483c8;
        case 0x2483ccu: goto label_2483cc;
        case 0x2483d0u: goto label_2483d0;
        case 0x2483d4u: goto label_2483d4;
        case 0x2483d8u: goto label_2483d8;
        case 0x2483dcu: goto label_2483dc;
        case 0x2483e0u: goto label_2483e0;
        case 0x2483e4u: goto label_2483e4;
        case 0x2483e8u: goto label_2483e8;
        case 0x2483ecu: goto label_2483ec;
        case 0x2483f0u: goto label_2483f0;
        case 0x2483f4u: goto label_2483f4;
        case 0x2483f8u: goto label_2483f8;
        case 0x2483fcu: goto label_2483fc;
        case 0x248400u: goto label_248400;
        case 0x248404u: goto label_248404;
        case 0x248408u: goto label_248408;
        case 0x24840cu: goto label_24840c;
        case 0x248410u: goto label_248410;
        case 0x248414u: goto label_248414;
        case 0x248418u: goto label_248418;
        case 0x24841cu: goto label_24841c;
        case 0x248420u: goto label_248420;
        case 0x248424u: goto label_248424;
        case 0x248428u: goto label_248428;
        case 0x24842cu: goto label_24842c;
        case 0x248430u: goto label_248430;
        case 0x248434u: goto label_248434;
        case 0x248438u: goto label_248438;
        case 0x24843cu: goto label_24843c;
        case 0x248440u: goto label_248440;
        case 0x248444u: goto label_248444;
        case 0x248448u: goto label_248448;
        case 0x24844cu: goto label_24844c;
        case 0x248450u: goto label_248450;
        case 0x248454u: goto label_248454;
        case 0x248458u: goto label_248458;
        case 0x24845cu: goto label_24845c;
        case 0x248460u: goto label_248460;
        case 0x248464u: goto label_248464;
        case 0x248468u: goto label_248468;
        case 0x24846cu: goto label_24846c;
        case 0x248470u: goto label_248470;
        case 0x248474u: goto label_248474;
        case 0x248478u: goto label_248478;
        case 0x24847cu: goto label_24847c;
        case 0x248480u: goto label_248480;
        case 0x248484u: goto label_248484;
        case 0x248488u: goto label_248488;
        case 0x24848cu: goto label_24848c;
        case 0x248490u: goto label_248490;
        case 0x248494u: goto label_248494;
        case 0x248498u: goto label_248498;
        case 0x24849cu: goto label_24849c;
        case 0x2484a0u: goto label_2484a0;
        case 0x2484a4u: goto label_2484a4;
        case 0x2484a8u: goto label_2484a8;
        case 0x2484acu: goto label_2484ac;
        case 0x2484b0u: goto label_2484b0;
        case 0x2484b4u: goto label_2484b4;
        case 0x2484b8u: goto label_2484b8;
        case 0x2484bcu: goto label_2484bc;
        case 0x2484c0u: goto label_2484c0;
        case 0x2484c4u: goto label_2484c4;
        case 0x2484c8u: goto label_2484c8;
        case 0x2484ccu: goto label_2484cc;
        case 0x2484d0u: goto label_2484d0;
        case 0x2484d4u: goto label_2484d4;
        case 0x2484d8u: goto label_2484d8;
        case 0x2484dcu: goto label_2484dc;
        case 0x2484e0u: goto label_2484e0;
        case 0x2484e4u: goto label_2484e4;
        case 0x2484e8u: goto label_2484e8;
        case 0x2484ecu: goto label_2484ec;
        case 0x2484f0u: goto label_2484f0;
        case 0x2484f4u: goto label_2484f4;
        case 0x2484f8u: goto label_2484f8;
        case 0x2484fcu: goto label_2484fc;
        case 0x248500u: goto label_248500;
        case 0x248504u: goto label_248504;
        case 0x248508u: goto label_248508;
        case 0x24850cu: goto label_24850c;
        case 0x248510u: goto label_248510;
        case 0x248514u: goto label_248514;
        case 0x248518u: goto label_248518;
        case 0x24851cu: goto label_24851c;
        case 0x248520u: goto label_248520;
        case 0x248524u: goto label_248524;
        case 0x248528u: goto label_248528;
        case 0x24852cu: goto label_24852c;
        case 0x248530u: goto label_248530;
        case 0x248534u: goto label_248534;
        case 0x248538u: goto label_248538;
        case 0x24853cu: goto label_24853c;
        case 0x248540u: goto label_248540;
        case 0x248544u: goto label_248544;
        case 0x248548u: goto label_248548;
        case 0x24854cu: goto label_24854c;
        case 0x248550u: goto label_248550;
        case 0x248554u: goto label_248554;
        case 0x248558u: goto label_248558;
        case 0x24855cu: goto label_24855c;
        case 0x248560u: goto label_248560;
        case 0x248564u: goto label_248564;
        case 0x248568u: goto label_248568;
        case 0x24856cu: goto label_24856c;
        case 0x248570u: goto label_248570;
        case 0x248574u: goto label_248574;
        case 0x248578u: goto label_248578;
        case 0x24857cu: goto label_24857c;
        case 0x248580u: goto label_248580;
        case 0x248584u: goto label_248584;
        case 0x248588u: goto label_248588;
        case 0x24858cu: goto label_24858c;
        case 0x248590u: goto label_248590;
        case 0x248594u: goto label_248594;
        case 0x248598u: goto label_248598;
        case 0x24859cu: goto label_24859c;
        case 0x2485a0u: goto label_2485a0;
        case 0x2485a4u: goto label_2485a4;
        case 0x2485a8u: goto label_2485a8;
        case 0x2485acu: goto label_2485ac;
        case 0x2485b0u: goto label_2485b0;
        case 0x2485b4u: goto label_2485b4;
        default: break;
    }

    ctx->pc = 0x248300u;

label_248300:
    // 0x248300: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x248300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_248304:
    // 0x248304: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x248304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248308:
    // 0x248308: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x248308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_24830c:
    // 0x24830c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24830cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_248310:
    // 0x248310: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x248310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_248314:
    // 0x248314: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x248314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_248318:
    // 0x248318: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x248318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24831c:
    // 0x24831c: 0xc08a946  jal         func_22A518
label_248320:
    if (ctx->pc == 0x248320u) {
        ctx->pc = 0x248320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24831Cu;
        // 0x248320: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248324u;
        goto label_248324;
    }
    ctx->pc = 0x24831Cu;
    SET_GPR_U32(ctx, 31, 0x248324u);
    ctx->pc = 0x248320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24831Cu;
    // 0x248320: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A518u, 0x24831Cu, 0x248324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248324u;
label_248324:
    // 0x248324: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x248324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248328:
    // 0x248328: 0x1220003b  beqz        $s1, . + 4 + (0x3B << 2)
label_24832c:
    if (ctx->pc == 0x24832Cu) {
        ctx->pc = 0x24832Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248328u;
        // 0x24832c: 0x240200e0  addiu       $v0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248330u;
        goto label_248330;
    }
    ctx->pc = 0x248328u;
    {
        const bool branch_taken_0x248328 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x24832Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248328u;
        // 0x24832c: 0x240200e0  addiu       $v0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248328) {
            ctx->pc = 0x248418u;
            goto label_248418;
        }
    }
    ctx->pc = 0x248330u;
label_248330:
    // 0x248330: 0x92450039  lbu         $a1, 0x39($s2)
    ctx->pc = 0x248330u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 57)));
label_248334:
    // 0x248334: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x248334u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_248338:
    // 0x248338: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x248338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_24833c:
    // 0x24833c: 0xae25000c  sw          $a1, 0xC($s1)
    ctx->pc = 0x24833cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 5));
label_248340:
    // 0x248340: 0xae250018  sw          $a1, 0x18($s1)
    ctx->pc = 0x248340u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 5));
label_248344:
    // 0x248344: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x248344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_248348:
    // 0x248348: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x248348u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_24834c:
    // 0x24834c: 0x3463fff8  ori         $v1, $v1, 0xFFF8
    ctx->pc = 0x24834cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65528);
label_248350:
    // 0x248350: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x248350u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_248354:
    // 0x248354: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x248354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_248358:
    // 0x248358: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x248358u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_24835c:
    // 0x24835c: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x24835cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
label_248360:
    // 0x248360: 0xc048c96  jal         func_123258
label_248364:
    if (ctx->pc == 0x248364u) {
        ctx->pc = 0x248364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248360u;
        // 0x248364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248368u;
        goto label_248368;
    }
    ctx->pc = 0x248360u;
    SET_GPR_U32(ctx, 31, 0x248368u);
    ctx->pc = 0x248364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248360u;
    // 0x248364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123258u, 0x248360u, 0x248368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248368u;
label_248368:
    // 0x248368: 0xc08a262  jal         func_228988
label_24836c:
    if (ctx->pc == 0x24836Cu) {
        ctx->pc = 0x24836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248368u;
        // 0x24836c: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248370u;
        goto label_248370;
    }
    ctx->pc = 0x248368u;
    SET_GPR_U32(ctx, 31, 0x248370u);
    ctx->pc = 0x24836Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248368u;
    // 0x24836c: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x248368u, 0x248370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248370u;
label_248370:
    // 0x248370: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x248370u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_248374:
    // 0x248374: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x248374u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_248378:
    // 0x248378: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x248378u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
label_24837c:
    // 0x24837c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x24837cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_248380:
    // 0x248380: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x248380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_248384:
    // 0x248384: 0x92420039  lbu         $v0, 0x39($s2)
    ctx->pc = 0x248384u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 57)));
label_248388:
    // 0x248388: 0xa2050005  sb          $a1, 0x5($s0)
    ctx->pc = 0x248388u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 5));
label_24838c:
    // 0x24838c: 0xc08a262  jal         func_228988
label_248390:
    if (ctx->pc == 0x248390u) {
        ctx->pc = 0x248390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24838Cu;
        // 0x248390: 0xa2020004  sb          $v0, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248394u;
        goto label_248394;
    }
    ctx->pc = 0x24838Cu;
    SET_GPR_U32(ctx, 31, 0x248394u);
    ctx->pc = 0x248390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24838Cu;
    // 0x248390: 0xa2020004  sb          $v0, 0x4($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x24838Cu, 0x248394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248394u;
label_248394:
    // 0x248394: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x248394u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_248398:
    // 0x248398: 0xa2020006  sb          $v0, 0x6($s0)
    ctx->pc = 0x248398u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
label_24839c:
    // 0x24839c: 0xa2030007  sb          $v1, 0x7($s0)
    ctx->pc = 0x24839cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 3));
label_2483a0:
    // 0x2483a0: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x2483a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_2483a4:
    // 0x2483a4: 0x92060004  lbu         $a2, 0x4($s0)
    ctx->pc = 0x2483a4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_2483a8:
    // 0x2483a8: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x2483a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_2483ac:
    // 0x2483ac: 0x90440005  lbu         $a0, 0x5($v0)
    ctx->pc = 0x2483acu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
label_2483b0:
    // 0x2483b0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2483b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_2483b4:
    // 0x2483b4: 0xc08b4f8  jal         func_22D3E0
label_2483b8:
    if (ctx->pc == 0x2483B8u) {
        ctx->pc = 0x2483B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2483B4u;
        // 0x2483b8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2483BCu;
        goto label_2483bc;
    }
    ctx->pc = 0x2483B4u;
    SET_GPR_U32(ctx, 31, 0x2483BCu);
    ctx->pc = 0x2483B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2483B4u;
    // 0x2483b8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x2483B4u, 0x2483BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2483BCu;
label_2483bc:
    // 0x2483bc: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x2483bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_2483c0:
    // 0x2483c0: 0x92060004  lbu         $a2, 0x4($s0)
    ctx->pc = 0x2483c0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_2483c4:
    // 0x2483c4: 0x90640005  lbu         $a0, 0x5($v1)
    ctx->pc = 0x2483c4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
label_2483c8:
    // 0x2483c8: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x2483c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_2483cc:
    // 0x2483cc: 0x24c50008  addiu       $a1, $a2, 0x8
    ctx->pc = 0x2483ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_2483d0:
    // 0x2483d0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2483d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_2483d4:
    // 0x2483d4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2483d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2483d8:
    // 0x2483d8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2483d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2483dc:
    // 0x2483dc: 0xc08b4f8  jal         func_22D3E0
label_2483e0:
    if (ctx->pc == 0x2483E0u) {
        ctx->pc = 0x2483E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2483DCu;
        // 0x2483e0: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2483E4u;
        goto label_2483e4;
    }
    ctx->pc = 0x2483DCu;
    SET_GPR_U32(ctx, 31, 0x2483E4u);
    ctx->pc = 0x2483E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2483DCu;
    // 0x2483e0: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x2483DCu, 0x2483E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2483E4u;
label_2483e4:
    // 0x2483e4: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2483e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_2483e8:
    // 0x2483e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2483e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2483ec:
    // 0x2483ec: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x2483ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
label_2483f0:
    // 0x2483f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2483f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2483f4:
    // 0x2483f4: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x2483f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
label_2483f8:
    // 0x2483f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2483f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2483fc:
    // 0x2483fc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2483fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_248400:
    // 0x248400: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x248400u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
label_248404:
    // 0x248404: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x248404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_248408:
    // 0x248408: 0xa6220012  sh          $v0, 0x12($s1)
    ctx->pc = 0x248408u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
label_24840c:
    // 0x24840c: 0x8e4200c0  lw          $v0, 0xC0($s2)
    ctx->pc = 0x24840cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
label_248410:
    // 0x248410: 0x40f809  jalr        $v0
label_248414:
    if (ctx->pc == 0x248414u) {
        ctx->pc = 0x248414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248410u;
        // 0x248414: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248418u;
        goto label_248418;
    }
    ctx->pc = 0x248410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x248418u);
        ctx->pc = 0x248414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248410u;
        // 0x248414: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248410u, 0x248418u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x248418u;
label_248418:
    // 0x248418: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x248418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_24841c:
    // 0x24841c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x24841cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_248420:
    // 0x248420: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x248420u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_248424:
    // 0x248424: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x248424u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_248428:
    // 0x248428: 0x3e00008  jr          $ra
label_24842c:
    if (ctx->pc == 0x24842Cu) {
        ctx->pc = 0x24842Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248428u;
        // 0x24842c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248430u;
        goto label_248430;
    }
    ctx->pc = 0x248428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24842Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248428u;
        // 0x24842c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248430u;
label_248430:
    // 0x248430: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x248430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_248434:
    // 0x248434: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x248434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_248438:
    // 0x248438: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x248438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_24843c:
    // 0x24843c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24843cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248440:
    // 0x248440: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x248440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_248444:
    // 0x248444: 0x3c1e003a  lui         $fp, 0x3A
    ctx->pc = 0x248444u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)58 << 16));
label_248448:
    // 0x248448: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x248448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_24844c:
    // 0x24844c: 0x3c17003a  lui         $s7, 0x3A
    ctx->pc = 0x24844cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)58 << 16));
label_248450:
    // 0x248450: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x248450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_248454:
    // 0x248454: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x248454u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_248458:
    // 0x248458: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x248458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_24845c:
    // 0x24845c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x24845cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_248460:
    // 0x248460: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x248460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_248464:
    // 0x248464: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x248464u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_248468:
    // 0x248468: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x248468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_24846c:
    // 0x24846c: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x24846cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_248470:
    // 0x248470: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x248470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_248474:
    // 0x248474: 0x3c1301c1  lui         $s3, 0x1C1
    ctx->pc = 0x248474u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)449 << 16));
label_248478:
    // 0x248478: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x248478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_24847c:
    // 0x24847c: 0x2412000b  addiu       $s2, $zero, 0xB
    ctx->pc = 0x24847cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_248480:
    // 0x248480: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x248480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_248484:
    // 0x248484: 0x24100014  addiu       $s0, $zero, 0x14
    ctx->pc = 0x248484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_248488:
    // 0x248488: 0xac710088  sw          $s1, 0x88($v1)
    ctx->pc = 0x248488u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 17));
label_24848c:
    // 0x24848c: 0xaee20084  sw          $v0, 0x84($s7)
    ctx->pc = 0x24848cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 132), GPR_U32(ctx, 2));
label_248490:
    // 0x248490: 0xafc00080  sw          $zero, 0x80($fp)
    ctx->pc = 0x248490u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 128), GPR_U32(ctx, 0));
label_248494:
    // 0x248494: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x248494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_248498:
    // 0x248498: 0x12140009  beq         $s0, $s4, . + 4 + (0x9 << 2)
label_24849c:
    if (ctx->pc == 0x24849Cu) {
        ctx->pc = 0x24849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248498u;
        // 0x24849c: 0x8fc20080  lw          $v0, 0x80($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2484A0u;
        goto label_2484a0;
    }
    ctx->pc = 0x248498u;
    {
        const bool branch_taken_0x248498 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x24849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248498u;
        // 0x24849c: 0x8fc20080  lw          $v0, 0x80($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248498) {
            ctx->pc = 0x2484C0u;
            goto label_2484c0;
        }
    }
    ctx->pc = 0x2484A0u;
label_2484a0:
    // 0x2484a0: 0xc0920c0  jal         func_248300
label_2484a4:
    if (ctx->pc == 0x2484A4u) {
        ctx->pc = 0x2484A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484A0u;
        // 0x2484a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2484A8u;
        goto label_2484a8;
    }
    ctx->pc = 0x2484A0u;
    SET_GPR_U32(ctx, 31, 0x2484A8u);
    ctx->pc = 0x2484A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2484A0u;
    // 0x2484a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248300u;
    goto label_248300;
    ctx->pc = 0x2484A8u;
label_2484a8:
    // 0x2484a8: 0x2664ae38  addiu       $a0, $s3, -0x51C8
    ctx->pc = 0x2484a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946360));
label_2484ac:
    // 0x2484ac: 0xc08b65c  jal         func_22D970
label_2484b0:
    if (ctx->pc == 0x2484B0u) {
        ctx->pc = 0x2484B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484ACu;
        // 0x2484b0: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2484B4u;
        goto label_2484b4;
    }
    ctx->pc = 0x2484ACu;
    SET_GPR_U32(ctx, 31, 0x2484B4u);
    ctx->pc = 0x2484B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2484ACu;
    // 0x2484b0: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D970u, 0x2484ACu, 0x2484B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2484B4u;
label_2484b4:
    // 0x2484b4: 0x1052fff8  beq         $v0, $s2, . + 4 + (-0x8 << 2)
label_2484b8:
    if (ctx->pc == 0x2484B8u) {
        ctx->pc = 0x2484B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484B4u;
        // 0x2484b8: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2484BCu;
        goto label_2484bc;
    }
    ctx->pc = 0x2484B4u;
    {
        const bool branch_taken_0x2484b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2484B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484B4u;
        // 0x2484b8: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2484b4) {
            ctx->pc = 0x248498u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_248498;
        }
    }
    ctx->pc = 0x2484BCu;
label_2484bc:
    // 0x2484bc: 0x8fc20080  lw          $v0, 0x80($fp)
    ctx->pc = 0x2484bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 128)));
label_2484c0:
    // 0x2484c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2484c4:
    if (ctx->pc == 0x2484C4u) {
        ctx->pc = 0x2484C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484C0u;
        // 0x2484c4: 0xaee00084  sw          $zero, 0x84($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2484C8u;
        goto label_2484c8;
    }
    ctx->pc = 0x2484C0u;
    {
        const bool branch_taken_0x2484c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2484C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484C0u;
        // 0x2484c4: 0xaee00084  sw          $zero, 0x84($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2484c0) {
            ctx->pc = 0x2484D0u;
            goto label_2484d0;
        }
    }
    ctx->pc = 0x2484C8u;
label_2484c8:
    // 0x2484c8: 0x1000000c  b           . + 4 + (0xC << 2)
label_2484cc:
    if (ctx->pc == 0x2484CCu) {
        ctx->pc = 0x2484CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484C8u;
        // 0x2484cc: 0x24020072  addiu       $v0, $zero, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2484D0u;
        goto label_2484d0;
    }
    ctx->pc = 0x2484C8u;
    {
        const bool branch_taken_0x2484c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2484CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484C8u;
        // 0x2484cc: 0x24020072  addiu       $v0, $zero, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2484c8) {
            ctx->pc = 0x2484FCu;
            goto label_2484fc;
        }
    }
    ctx->pc = 0x2484D0u;
label_2484d0:
    // 0x2484d0: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x2484d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
label_2484d4:
    // 0x2484d4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2484d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2484d8:
    // 0x2484d8: 0x2484ae40  addiu       $a0, $a0, -0x51C0
    ctx->pc = 0x2484d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946368));
label_2484dc:
    // 0x2484dc: 0xc08b4f8  jal         func_22D3E0
label_2484e0:
    if (ctx->pc == 0x2484E0u) {
        ctx->pc = 0x2484E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484DCu;
        // 0x2484e0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2484E4u;
        goto label_2484e4;
    }
    ctx->pc = 0x2484DCu;
    SET_GPR_U32(ctx, 31, 0x2484E4u);
    ctx->pc = 0x2484E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2484DCu;
    // 0x2484e0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x2484DCu, 0x2484E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2484E4u;
label_2484e4:
    // 0x2484e4: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x2484e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
label_2484e8:
    // 0x2484e8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2484e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2484ec:
    // 0x2484ec: 0x2484ae38  addiu       $a0, $a0, -0x51C8
    ctx->pc = 0x2484ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946360));
label_2484f0:
    // 0x2484f0: 0xc08b4f8  jal         func_22D3E0
label_2484f4:
    if (ctx->pc == 0x2484F4u) {
        ctx->pc = 0x2484F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484F0u;
        // 0x2484f4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2484F8u;
        goto label_2484f8;
    }
    ctx->pc = 0x2484F0u;
    SET_GPR_U32(ctx, 31, 0x2484F8u);
    ctx->pc = 0x2484F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2484F0u;
    // 0x2484f4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x2484F0u, 0x2484F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2484F8u;
label_2484f8:
    // 0x2484f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2484f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2484fc:
    // 0x2484fc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2484fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_248500:
    // 0x248500: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x248500u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_248504:
    // 0x248504: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x248504u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_248508:
    // 0x248508: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x248508u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_24850c:
    // 0x24850c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x24850cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_248510:
    // 0x248510: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x248510u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_248514:
    // 0x248514: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x248514u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_248518:
    // 0x248518: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x248518u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24851c:
    // 0x24851c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24851cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_248520:
    // 0x248520: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x248520u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_248524:
    // 0x248524: 0x3e00008  jr          $ra
label_248528:
    if (ctx->pc == 0x248528u) {
        ctx->pc = 0x248528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248524u;
        // 0x248528: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24852Cu;
        goto label_24852c;
    }
    ctx->pc = 0x248524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248524u;
        // 0x248528: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24852Cu;
label_24852c:
    // 0x24852c: 0x0  nop
    ctx->pc = 0x24852cu;
    // NOP
label_248530:
    // 0x248530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x248530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_248534:
    // 0x248534: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x248534u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
label_248538:
    // 0x248538: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x248538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_24853c:
    // 0x24853c: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x24853cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
label_248540:
    // 0x248540: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x248540u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
label_248544:
    // 0x248544: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x248544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_248548:
    // 0x248548: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x248548u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_24854c:
    // 0x24854c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x24854cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_248550:
    // 0x248550: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x248550u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
label_248554:
    // 0x248554: 0xaca00118  sw          $zero, 0x118($a1)
    ctx->pc = 0x248554u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 280), GPR_U32(ctx, 0));
label_248558:
    // 0x248558: 0xacc00140  sw          $zero, 0x140($a2)
    ctx->pc = 0x248558u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 320), GPR_U32(ctx, 0));
label_24855c:
    // 0x24855c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24855cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248560:
    // 0x248560: 0xac40011c  sw          $zero, 0x11C($v0)
    ctx->pc = 0x248560u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 284), GPR_U32(ctx, 0));
label_248564:
    // 0x248564: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x248564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_248568:
    // 0x248568: 0xac600114  sw          $zero, 0x114($v1)
    ctx->pc = 0x248568u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 0));
label_24856c:
    // 0x24856c: 0xace0007c  sw          $zero, 0x7C($a3)
    ctx->pc = 0x24856cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 124), GPR_U32(ctx, 0));
label_248570:
    // 0x248570: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x248570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_248574:
    // 0x248574: 0xc049cb6  jal         func_1272D8
label_248578:
    if (ctx->pc == 0x248578u) {
        ctx->pc = 0x248578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248574u;
        // 0x248578: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24857Cu;
        goto label_24857c;
    }
    ctx->pc = 0x248574u;
    SET_GPR_U32(ctx, 31, 0x24857Cu);
    ctx->pc = 0x248578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248574u;
    // 0x248578: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x248574u, 0x24857Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24857Cu;
label_24857c:
    // 0x24857c: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x24857cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_248580:
    // 0x248580: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x248580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_248584:
    // 0x248584: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x248584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_248588:
    // 0x248588: 0xac400110  sw          $zero, 0x110($v0)
    ctx->pc = 0x248588u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 0));
label_24858c:
    // 0x24858c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x24858cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_248590:
    // 0x248590: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x248590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_248594:
    // 0x248594: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x248594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
label_248598:
    // 0x248598: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x248598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24859c:
    // 0x24859c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24859cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2485a0:
    // 0x2485a0: 0xac600080  sw          $zero, 0x80($v1)
    ctx->pc = 0x2485a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 0));
label_2485a4:
    // 0x2485a4: 0xac400084  sw          $zero, 0x84($v0)
    ctx->pc = 0x2485a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
label_2485a8:
    // 0x2485a8: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x2485a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
label_2485ac:
    // 0x2485ac: 0x3e00008  jr          $ra
label_2485b0:
    if (ctx->pc == 0x2485B0u) {
        ctx->pc = 0x2485B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2485ACu;
        // 0x2485b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2485B4u;
        goto label_2485b4;
    }
    ctx->pc = 0x2485ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2485B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2485ACu;
        // 0x2485b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2485ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2485B4u;
label_2485b4:
    // 0x2485b4: 0x0  nop
    ctx->pc = 0x2485b4u;
    // NOP
}
