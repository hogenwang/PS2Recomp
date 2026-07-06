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

// Function: sub_00228330
// Address: 0x228330 - 0x2284d8
void sub_00228330_0x228330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228330_0x228330");
#endif

    switch (ctx->pc) {
        case 0x228330u: goto label_228330;
        case 0x228334u: goto label_228334;
        case 0x228338u: goto label_228338;
        case 0x22833cu: goto label_22833c;
        case 0x228340u: goto label_228340;
        case 0x228344u: goto label_228344;
        case 0x228348u: goto label_228348;
        case 0x22834cu: goto label_22834c;
        case 0x228350u: goto label_228350;
        case 0x228354u: goto label_228354;
        case 0x228358u: goto label_228358;
        case 0x22835cu: goto label_22835c;
        case 0x228360u: goto label_228360;
        case 0x228364u: goto label_228364;
        case 0x228368u: goto label_228368;
        case 0x22836cu: goto label_22836c;
        case 0x228370u: goto label_228370;
        case 0x228374u: goto label_228374;
        case 0x228378u: goto label_228378;
        case 0x22837cu: goto label_22837c;
        case 0x228380u: goto label_228380;
        case 0x228384u: goto label_228384;
        case 0x228388u: goto label_228388;
        case 0x22838cu: goto label_22838c;
        case 0x228390u: goto label_228390;
        case 0x228394u: goto label_228394;
        case 0x228398u: goto label_228398;
        case 0x22839cu: goto label_22839c;
        case 0x2283a0u: goto label_2283a0;
        case 0x2283a4u: goto label_2283a4;
        case 0x2283a8u: goto label_2283a8;
        case 0x2283acu: goto label_2283ac;
        case 0x2283b0u: goto label_2283b0;
        case 0x2283b4u: goto label_2283b4;
        case 0x2283b8u: goto label_2283b8;
        case 0x2283bcu: goto label_2283bc;
        case 0x2283c0u: goto label_2283c0;
        case 0x2283c4u: goto label_2283c4;
        case 0x2283c8u: goto label_2283c8;
        case 0x2283ccu: goto label_2283cc;
        case 0x2283d0u: goto label_2283d0;
        case 0x2283d4u: goto label_2283d4;
        case 0x2283d8u: goto label_2283d8;
        case 0x2283dcu: goto label_2283dc;
        case 0x2283e0u: goto label_2283e0;
        case 0x2283e4u: goto label_2283e4;
        case 0x2283e8u: goto label_2283e8;
        case 0x2283ecu: goto label_2283ec;
        case 0x2283f0u: goto label_2283f0;
        case 0x2283f4u: goto label_2283f4;
        case 0x2283f8u: goto label_2283f8;
        case 0x2283fcu: goto label_2283fc;
        case 0x228400u: goto label_228400;
        case 0x228404u: goto label_228404;
        case 0x228408u: goto label_228408;
        case 0x22840cu: goto label_22840c;
        case 0x228410u: goto label_228410;
        case 0x228414u: goto label_228414;
        case 0x228418u: goto label_228418;
        case 0x22841cu: goto label_22841c;
        case 0x228420u: goto label_228420;
        case 0x228424u: goto label_228424;
        case 0x228428u: goto label_228428;
        case 0x22842cu: goto label_22842c;
        case 0x228430u: goto label_228430;
        case 0x228434u: goto label_228434;
        case 0x228438u: goto label_228438;
        case 0x22843cu: goto label_22843c;
        case 0x228440u: goto label_228440;
        case 0x228444u: goto label_228444;
        case 0x228448u: goto label_228448;
        case 0x22844cu: goto label_22844c;
        case 0x228450u: goto label_228450;
        case 0x228454u: goto label_228454;
        case 0x228458u: goto label_228458;
        case 0x22845cu: goto label_22845c;
        case 0x228460u: goto label_228460;
        case 0x228464u: goto label_228464;
        case 0x228468u: goto label_228468;
        case 0x22846cu: goto label_22846c;
        case 0x228470u: goto label_228470;
        case 0x228474u: goto label_228474;
        case 0x228478u: goto label_228478;
        case 0x22847cu: goto label_22847c;
        case 0x228480u: goto label_228480;
        case 0x228484u: goto label_228484;
        case 0x228488u: goto label_228488;
        case 0x22848cu: goto label_22848c;
        case 0x228490u: goto label_228490;
        case 0x228494u: goto label_228494;
        case 0x228498u: goto label_228498;
        case 0x22849cu: goto label_22849c;
        case 0x2284a0u: goto label_2284a0;
        case 0x2284a4u: goto label_2284a4;
        case 0x2284a8u: goto label_2284a8;
        case 0x2284acu: goto label_2284ac;
        case 0x2284b0u: goto label_2284b0;
        case 0x2284b4u: goto label_2284b4;
        case 0x2284b8u: goto label_2284b8;
        case 0x2284bcu: goto label_2284bc;
        case 0x2284c0u: goto label_2284c0;
        case 0x2284c4u: goto label_2284c4;
        case 0x2284c8u: goto label_2284c8;
        case 0x2284ccu: goto label_2284cc;
        case 0x2284d0u: goto label_2284d0;
        case 0x2284d4u: goto label_2284d4;
        default: break;
    }

    ctx->pc = 0x228330u;

label_228330:
    // 0x228330: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x228330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_228334:
    // 0x228334: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x228334u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
label_228338:
    // 0x228338: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x228338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
label_22833c:
    // 0x22833c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x22833cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_228340:
    // 0x228340: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x228340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
label_228344:
    // 0x228344: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x228344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_228348:
    // 0x228348: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x228348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_22834c:
    // 0x22834c: 0x24c60348  addiu       $a2, $a2, 0x348
    ctx->pc = 0x22834cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 840));
label_228350:
    // 0x228350: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x228350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_228354:
    // 0x228354: 0x24a500c8  addiu       $a1, $a1, 0xC8
    ctx->pc = 0x228354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 200));
label_228358:
    // 0x228358: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x228358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_22835c:
    // 0x22835c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x22835cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_228360:
    // 0x228360: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x228360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_228364:
    // 0x228364: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x228364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_228368:
    // 0x228368: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x228368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_22836c:
    // 0x22836c: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x22836cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
label_228370:
    // 0x228370: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x228370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_228374:
    // 0x228374: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x228374u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_228378:
    // 0x228378: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x228378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_22837c:
    // 0x22837c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22837cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_228380:
    // 0x228380: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x228380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_228384:
    // 0x228384: 0xac60f990  sw          $zero, -0x670($v1)
    ctx->pc = 0x228384u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965648), GPR_U32(ctx, 0));
label_228388:
    // 0x228388: 0xac80f994  sw          $zero, -0x66C($a0)
    ctx->pc = 0x228388u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294965652), GPR_U32(ctx, 0));
label_22838c:
    // 0x22838c: 0xaca6001c  sw          $a2, 0x1C($a1)
    ctx->pc = 0x22838cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 6));
label_228390:
    // 0x228390: 0xac45001c  sw          $a1, 0x1C($v0)
    ctx->pc = 0x228390u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 5));
label_228394:
    // 0x228394: 0xace2f998  sw          $v0, -0x668($a3)
    ctx->pc = 0x228394u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294965656), GPR_U32(ctx, 2));
label_228398:
    // 0x228398: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
label_22839c:
    if (ctx->pc == 0x22839Cu) {
        ctx->pc = 0x22839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228398u;
        // 0x22839c: 0xacc0001c  sw          $zero, 0x1C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2283A0u;
        goto label_2283a0;
    }
    ctx->pc = 0x228398u;
    {
        const bool branch_taken_0x228398 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228398u;
        // 0x22839c: 0xacc0001c  sw          $zero, 0x1C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228398) {
            ctx->pc = 0x22841Cu;
            goto label_22841c;
        }
    }
    ctx->pc = 0x2283A0u;
label_2283a0:
    // 0x2283a0: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x2283a0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
label_2283a4:
    // 0x2283a4: 0x3c15003a  lui         $s5, 0x3A
    ctx->pc = 0x2283a4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)58 << 16));
label_2283a8:
    // 0x2283a8: 0x3c17003a  lui         $s7, 0x3A
    ctx->pc = 0x2283a8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)58 << 16));
label_2283ac:
    // 0x2283ac: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x2283acu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
label_2283b0:
    // 0x2283b0: 0x3c13003a  lui         $s3, 0x3A
    ctx->pc = 0x2283b0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)58 << 16));
label_2283b4:
    // 0x2283b4: 0x3c160023  lui         $s6, 0x23
    ctx->pc = 0x2283b4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)35 << 16));
label_2283b8:
    // 0x2283b8: 0x3c1e0023  lui         $fp, 0x23
    ctx->pc = 0x2283b8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)35 << 16));
label_2283bc:
    // 0x2283bc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2283bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2283c0:
    // 0x2283c0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2283c4:
    if (ctx->pc == 0x2283C4u) {
        ctx->pc = 0x2283C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2283C0u;
        // 0x2283c4: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2283C8u;
        goto label_2283c8;
    }
    ctx->pc = 0x2283C0u;
    {
        const bool branch_taken_0x2283c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2283c0) {
            ctx->pc = 0x2283C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2283C0u;
            // 0x2283c4: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2283D4u;
            goto label_2283d4;
        }
    }
    ctx->pc = 0x2283C8u;
label_2283c8:
    // 0x2283c8: 0x40f809  jalr        $v0
label_2283cc:
    if (ctx->pc == 0x2283CCu) {
        ctx->pc = 0x2283D0u;
        goto label_2283d0;
    }
    ctx->pc = 0x2283C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2283D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2283C8u, 0x2283D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2283D0u;
label_2283d0:
    // 0x2283d0: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x2283d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2283d4:
    // 0x2283d4: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x2283d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2283d8:
    // 0x2283d8: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x2283d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2283dc:
    // 0x2283dc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_2283e0:
    if (ctx->pc == 0x2283E0u) {
        ctx->pc = 0x2283E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2283DCu;
        // 0x2283e0: 0x8e31001c  lw          $s1, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2283E4u;
        goto label_2283e4;
    }
    ctx->pc = 0x2283DCu;
    {
        const bool branch_taken_0x2283dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2283dc) {
            ctx->pc = 0x2283E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2283DCu;
            // 0x2283e0: 0x8e31001c  lw          $s1, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22840Cu;
            goto label_22840c;
        }
    }
    ctx->pc = 0x2283E4u;
label_2283e4:
    // 0x2283e4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2283e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2283e8:
    // 0x2283e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2283ec:
    if (ctx->pc == 0x2283ECu) {
        ctx->pc = 0x2283ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2283E8u;
        // 0x2283ec: 0x26100034  addiu       $s0, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2283F0u;
        goto label_2283f0;
    }
    ctx->pc = 0x2283E8u;
    {
        const bool branch_taken_0x2283e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2283ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2283E8u;
        // 0x2283ec: 0x26100034  addiu       $s0, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2283e8) {
            ctx->pc = 0x2283FCu;
            goto label_2283fc;
        }
    }
    ctx->pc = 0x2283F0u;
label_2283f0:
    // 0x2283f0: 0x40f809  jalr        $v0
label_2283f4:
    if (ctx->pc == 0x2283F4u) {
        ctx->pc = 0x2283F8u;
        goto label_2283f8;
    }
    ctx->pc = 0x2283F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2283F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2283F0u, 0x2283F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2283F8u;
label_2283f8:
    // 0x2283f8: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x2283f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2283fc:
    // 0x2283fc: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x2283fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_228400:
    // 0x228400: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
label_228404:
    if (ctx->pc == 0x228404u) {
        ctx->pc = 0x228404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228400u;
        // 0x228404: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228408u;
        goto label_228408;
    }
    ctx->pc = 0x228400u;
    {
        const bool branch_taken_0x228400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x228400) {
            ctx->pc = 0x228404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228400u;
            // 0x228404: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2283E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2283e8;
        }
    }
    ctx->pc = 0x228408u;
label_228408:
    // 0x228408: 0x8e31001c  lw          $s1, 0x1C($s1)
    ctx->pc = 0x228408u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_22840c:
    // 0x22840c: 0x5620ffec  bnel        $s1, $zero, . + 4 + (-0x14 << 2)
label_228410:
    if (ctx->pc == 0x228410u) {
        ctx->pc = 0x228410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22840Cu;
        // 0x228410: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228414u;
        goto label_228414;
    }
    ctx->pc = 0x22840Cu;
    {
        const bool branch_taken_0x22840c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x22840c) {
            ctx->pc = 0x228410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22840Cu;
            // 0x228410: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2283C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2283c0;
        }
    }
    ctx->pc = 0x228414u;
label_228414:
    // 0x228414: 0x10000009  b           . + 4 + (0x9 << 2)
label_228418:
    if (ctx->pc == 0x228418u) {
        ctx->pc = 0x228418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228414u;
        // 0x228418: 0x8e44f9e8  lw          $a0, -0x618($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294965736)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22841Cu;
        goto label_22841c;
    }
    ctx->pc = 0x228414u;
    {
        const bool branch_taken_0x228414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228414u;
        // 0x228418: 0x8e44f9e8  lw          $a0, -0x618($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294965736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228414) {
            ctx->pc = 0x22843Cu;
            goto label_22843c;
        }
    }
    ctx->pc = 0x22841Cu;
label_22841c:
    // 0x22841c: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x22841cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
label_228420:
    // 0x228420: 0x3c15003a  lui         $s5, 0x3A
    ctx->pc = 0x228420u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)58 << 16));
label_228424:
    // 0x228424: 0x3c17003a  lui         $s7, 0x3A
    ctx->pc = 0x228424u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)58 << 16));
label_228428:
    // 0x228428: 0x3c14003a  lui         $s4, 0x3A
    ctx->pc = 0x228428u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
label_22842c:
    // 0x22842c: 0x3c13003a  lui         $s3, 0x3A
    ctx->pc = 0x22842cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)58 << 16));
label_228430:
    // 0x228430: 0x3c160023  lui         $s6, 0x23
    ctx->pc = 0x228430u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)35 << 16));
label_228434:
    // 0x228434: 0x3c1e0023  lui         $fp, 0x23
    ctx->pc = 0x228434u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)35 << 16));
label_228438:
    // 0x228438: 0x8e44f9e8  lw          $a0, -0x618($s2)
    ctx->pc = 0x228438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294965736)));
label_22843c:
    // 0x22843c: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x22843cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
label_228440:
    // 0x228440: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_228444:
    if (ctx->pc == 0x228444u) {
        ctx->pc = 0x228444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228440u;
        // 0x228444: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228448u;
        goto label_228448;
    }
    ctx->pc = 0x228440u;
    {
        const bool branch_taken_0x228440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228440u;
        // 0x228444: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228440) {
            ctx->pc = 0x228450u;
            goto label_228450;
        }
    }
    ctx->pc = 0x228448u;
label_228448:
    // 0x228448: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x228448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_22844c:
    // 0x22844c: 0xae42f9e8  sw          $v0, -0x618($s2)
    ctx->pc = 0x22844cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294965736), GPR_U32(ctx, 2));
label_228450:
    // 0x228450: 0x8ea2f9ec  lw          $v0, -0x614($s5)
    ctx->pc = 0x228450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294965740)));
label_228454:
    // 0x228454: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x228454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_228458:
    // 0x228458: 0x2690f9a0  addiu       $s0, $s4, -0x660
    ctx->pc = 0x228458u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294965664));
label_22845c:
    // 0x22845c: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x22845cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
label_228460:
    // 0x228460: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x228460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_228464:
    // 0x228464: 0x2671f9c0  addiu       $s1, $s3, -0x640
    ctx->pc = 0x228464u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965696));
label_228468:
    // 0x228468: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x228468u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22846c:
    // 0x22846c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22846cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_228470:
    // 0x228470: 0xaee3f9f4  sw          $v1, -0x60C($s7)
    ctx->pc = 0x228470u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294965748), GPR_U32(ctx, 3));
label_228474:
    // 0x228474: 0xc08a054  jal         func_228150
label_228478:
    if (ctx->pc == 0x228478u) {
        ctx->pc = 0x22847Cu;
        goto label_22847c;
    }
    ctx->pc = 0x228474u;
    SET_GPR_U32(ctx, 31, 0x22847Cu);
    ctx->pc = 0x228150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228150u, 0x228474u, 0x22847Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22847Cu;
label_22847c:
    // 0x22847c: 0xc08a054  jal         func_228150
label_228480:
    if (ctx->pc == 0x228480u) {
        ctx->pc = 0x228480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22847Cu;
        // 0x228480: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228484u;
        goto label_228484;
    }
    ctx->pc = 0x22847Cu;
    SET_GPR_U32(ctx, 31, 0x228484u);
    ctx->pc = 0x228480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22847Cu;
    // 0x228480: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228150u, 0x22847Cu, 0x228484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228484u;
label_228484:
    // 0x228484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x228484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_228488:
    // 0x228488: 0x26c68890  addiu       $a2, $s6, -0x7770
    ctx->pc = 0x228488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 4294936720));
label_22848c:
    // 0x22848c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22848cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_228490:
    // 0x228490: 0xc08a058  jal         func_228160
label_228494:
    if (ctx->pc == 0x228494u) {
        ctx->pc = 0x228494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228490u;
        // 0x228494: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228498u;
        goto label_228498;
    }
    ctx->pc = 0x228490u;
    SET_GPR_U32(ctx, 31, 0x228498u);
    ctx->pc = 0x228494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228490u;
    // 0x228494: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228160u, 0x228490u, 0x228498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228498u;
label_228498:
    // 0x228498: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x228498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22849c:
    // 0x22849c: 0x27c687d0  addiu       $a2, $fp, -0x7830
    ctx->pc = 0x22849cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 4294936528));
label_2284a0:
    // 0x2284a0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2284a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2284a4:
    // 0x2284a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2284a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2284a8:
    // 0x2284a8: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2284a8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2284ac:
    // 0x2284ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2284acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2284b0:
    // 0x2284b0: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2284b0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2284b4:
    // 0x2284b4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2284b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2284b8:
    // 0x2284b8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2284b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2284bc:
    // 0x2284bc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2284bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2284c0:
    // 0x2284c0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2284c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2284c4:
    // 0x2284c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2284c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2284c8:
    // 0x2284c8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2284c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2284cc:
    // 0x2284cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2284ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2284d0:
    // 0x2284d0: 0x808a058  j           func_228160
label_2284d4:
    if (ctx->pc == 0x2284D4u) {
        ctx->pc = 0x2284D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2284D0u;
        // 0x2284d4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2284D8u;
        goto label_fallthrough_0x2284d0;
    }
    ctx->pc = 0x2284D0u;
    ctx->pc = 0x2284D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2284D0u;
    // 0x2284d4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228160u;
    sub_00228160_0x228160(rdram, ctx, runtime); return;
label_fallthrough_0x2284d0:
    ctx->pc = 0x2284D8u;
}
