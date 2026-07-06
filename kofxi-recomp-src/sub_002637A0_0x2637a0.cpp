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

// Function: sub_002637A0
// Address: 0x2637a0 - 0x263b60
void sub_002637A0_0x2637a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002637A0_0x2637a0");
#endif

    switch (ctx->pc) {
        case 0x2637acu: goto label_2637ac;
        case 0x2637d8u: goto label_2637d8;
        case 0x2637f8u: goto label_2637f8;
        case 0x263810u: goto label_263810;
        case 0x263838u: goto label_263838;
        case 0x263848u: goto label_263848;
        case 0x263868u: goto label_263868;
        case 0x26387cu: goto label_26387c;
        case 0x263888u: goto label_263888;
        case 0x2638ecu: goto label_2638ec;
        case 0x263954u: goto label_263954;
        case 0x263998u: goto label_263998;
        case 0x2639a8u: goto label_2639a8;
        case 0x2639c0u: goto label_2639c0;
        case 0x263a08u: goto label_263a08;
        case 0x263a18u: goto label_263a18;
        case 0x263a24u: goto label_263a24;
        case 0x263a80u: goto label_263a80;
        case 0x263ab0u: goto label_263ab0;
        case 0x263ad4u: goto label_263ad4;
        case 0x263aecu: goto label_263aec;
        case 0x263afcu: goto label_263afc;
        case 0x263b10u: goto label_263b10;
        case 0x263b20u: goto label_263b20;
        case 0x263b30u: goto label_263b30;
        default: break;
    }

    ctx->pc = 0x2637a0u;

    // 0x2637a0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2637a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2637a4: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2637a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2637a8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2637a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_2637ac:
    // 0x2637ac: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2637acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2637b0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2637b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2637b4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2637b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2637b8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2637b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2637bc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2637bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2637c0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2637c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2637c4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2637c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2637c8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2637c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2637cc: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2637ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2637d0: 0xc09728e  jal         func_25CA38
    ctx->pc = 0x2637D0u;
    SET_GPR_U32(ctx, 31, 0x2637D8u);
    ctx->pc = 0x2637D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2637D0u;
    // 0x2637d4: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CA38u, 0x2637D0u, 0x2637D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2637D8u;
label_2637d8:
    // 0x2637d8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2637d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2637dc: 0x128000d5  beqz        $s4, . + 4 + (0xD5 << 2)
    ctx->pc = 0x2637DCu;
    {
        const bool branch_taken_0x2637dc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2637E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2637DCu;
        // 0x2637e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2637dc) {
            ctx->pc = 0x263B34u;
            goto label_263b34;
        }
    }
    ctx->pc = 0x2637E4u;
    // 0x2637e4: 0x8e820050  lw          $v0, 0x50($s4)
    ctx->pc = 0x2637e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x2637e8: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2637E8u;
    {
        const bool branch_taken_0x2637e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2637e8) {
            ctx->pc = 0x2637ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2637E8u;
            // 0x2637ec: 0xac510000  sw          $s1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26381Cu;
            goto label_26381c;
        }
    }
    ctx->pc = 0x2637F0u;
    // 0x2637f0: 0xc099642  jal         func_265908
    ctx->pc = 0x2637F0u;
    SET_GPR_U32(ctx, 31, 0x2637F8u);
    ctx->pc = 0x2637F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2637F0u;
    // 0x2637f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265908u, 0x2637F0u, 0x2637F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2637F8u;
label_2637f8:
    // 0x2637f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2637f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2637fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2637fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x263800: 0x56020005  bnel        $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x263800u;
    {
        const bool branch_taken_0x263800 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x263800) {
            ctx->pc = 0x263804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263800u;
            // 0x263804: 0x8e820050  lw          $v0, 0x50($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263818u;
            goto label_263818;
        }
    }
    ctx->pc = 0x263808u;
    // 0x263808: 0xc097308  jal         func_25CC20
    ctx->pc = 0x263808u;
    SET_GPR_U32(ctx, 31, 0x263810u);
    ctx->pc = 0x25CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CC20u, 0x263808u, 0x263810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263810u;
label_263810:
    // 0x263810: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x263810u;
    {
        const bool branch_taken_0x263810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263810u;
        // 0x263814: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263810) {
            ctx->pc = 0x263AE0u;
            goto label_263ae0;
        }
    }
    ctx->pc = 0x263818u;
label_263818:
    // 0x263818: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x263818u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_26381c:
    // 0x26381c: 0x8e820050  lw          $v0, 0x50($s4)
    ctx->pc = 0x26381cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x263820: 0xac520004  sw          $s2, 0x4($v0)
    ctx->pc = 0x263820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
    // 0x263824: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x263824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x263828: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x263828u;
    {
        const bool branch_taken_0x263828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263828u;
        // 0x26382c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263828) {
            ctx->pc = 0x26386Cu;
            goto label_26386c;
        }
    }
    ctx->pc = 0x263830u;
    // 0x263830: 0xc098552  jal         func_261548
    ctx->pc = 0x263830u;
    SET_GPR_U32(ctx, 31, 0x263838u);
    ctx->pc = 0x263834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263830u;
    // 0x263834: 0x24042140  addiu       $a0, $zero, 0x2140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x263830u, 0x263838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263838u;
label_263838:
    // 0x263838: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x263838u;
    {
        const bool branch_taken_0x263838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263838u;
        // 0x26383c: 0xae82004c  sw          $v0, 0x4C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263838) {
            ctx->pc = 0x263858u;
            goto label_263858;
        }
    }
    ctx->pc = 0x263840u;
    // 0x263840: 0xc097308  jal         func_25CC20
    ctx->pc = 0x263840u;
    SET_GPR_U32(ctx, 31, 0x263848u);
    ctx->pc = 0x25CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CC20u, 0x263840u, 0x263848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263848u;
label_263848:
    // 0x263848: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x263848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26384c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26384cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263850: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x263850u;
    {
        const bool branch_taken_0x263850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263850u;
        // 0x263854: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263850) {
            ctx->pc = 0x263AE4u;
            goto label_263ae4;
        }
    }
    ctx->pc = 0x263858u;
label_263858:
    // 0x263858: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x263858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26385c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26385cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263860: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x263860u;
    SET_GPR_U32(ctx, 31, 0x263868u);
    ctx->pc = 0x263864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263860u;
    // 0x263864: 0x24062140  addiu       $a2, $zero, 0x2140 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x263860u, 0x263868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263868u;
label_263868:
    // 0x263868: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x263868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26386c:
    // 0x26386c: 0x52c2000a  beql        $s6, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26386Cu;
    {
        const bool branch_taken_0x26386c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x26386c) {
            ctx->pc = 0x263870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26386Cu;
            // 0x263870: 0x8e82004c  lw          $v0, 0x4C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263898u;
            goto label_263898;
        }
    }
    ctx->pc = 0x263874u;
    // 0x263874: 0xc097308  jal         func_25CC20
    ctx->pc = 0x263874u;
    SET_GPR_U32(ctx, 31, 0x26387Cu);
    ctx->pc = 0x25CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CC20u, 0x263874u, 0x26387Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26387Cu;
label_26387c:
    // 0x26387c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x26387cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x263880: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x263880u;
    SET_GPR_U32(ctx, 31, 0x263888u);
    ctx->pc = 0x263884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263880u;
    // 0x263884: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x263880u, 0x263888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263888u;
label_263888:
    // 0x263888: 0x2403006a  addiu       $v1, $zero, 0x6A
    ctx->pc = 0x263888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x26388c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26388cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263890: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x263890u;
    {
        const bool branch_taken_0x263890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263890u;
        // 0x263894: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263890) {
            ctx->pc = 0x263AE4u;
            goto label_263ae4;
        }
    }
    ctx->pc = 0x263898u;
label_263898:
    // 0x263898: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x263898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26389c: 0x3c10003e  lui         $s0, 0x3E
    ctx->pc = 0x26389cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)62 << 16));
    // 0x2638a0: 0xac560098  sw          $s6, 0x98($v0)
    ctx->pc = 0x2638a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 152), GPR_U32(ctx, 22));
    // 0x2638a4: 0x2603b7c8  addiu       $v1, $s0, -0x4838
    ctx->pc = 0x2638a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948808));
    // 0x2638a8: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x2638a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x2638ac: 0xac44009c  sw          $a0, 0x9C($v0)
    ctx->pc = 0x2638acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 4));
    // 0x2638b0: 0x92a60000  lbu         $a2, 0x0($s5)
    ctx->pc = 0x2638b0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2638b4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2638b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2638b8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2638b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2638bc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2638bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2638c0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2638C0u;
    {
        const bool branch_taken_0x2638c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2638C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2638C0u;
        // 0x2638c4: 0x2602b7c8  addiu       $v0, $s0, -0x4838 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2638c0) {
            ctx->pc = 0x263938u;
            goto label_263938;
        }
    }
    ctx->pc = 0x2638C8u;
    // 0x2638c8: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2638C8u;
    {
        const bool branch_taken_0x2638c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2638CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2638C8u;
        // 0x2638cc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2638c8) {
            ctx->pc = 0x2638E8u;
            goto label_2638e8;
        }
    }
    ctx->pc = 0x2638D0u;
    // 0x2638d0: 0x82a3ffff  lb          $v1, -0x1($s5)
    ctx->pc = 0x2638d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 4294967295)));
    // 0x2638d4: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x2638d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x2638d8: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2638D8u;
    {
        const bool branch_taken_0x2638d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2638DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2638D8u;
        // 0x2638dc: 0x2602b7c8  addiu       $v0, $s0, -0x4838 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2638d8) {
            ctx->pc = 0x263938u;
            goto label_263938;
        }
    }
    ctx->pc = 0x2638E0u;
    // 0x2638e0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2638E0u;
    {
        const bool branch_taken_0x2638e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2638E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2638E0u;
        // 0x2638e4: 0x8e86004c  lw          $a2, 0x4C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2638e0) {
            ctx->pc = 0x263998u;
            goto label_263998;
        }
    }
    ctx->pc = 0x2638E8u;
label_2638e8:
    // 0x2638e8: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x2638e8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2638ec:
    // 0x2638ec: 0x2602b7c8  addiu       $v0, $s0, -0x4838
    ctx->pc = 0x2638ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948808));
    // 0x2638f0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2638f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2638f4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2638f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2638f8: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2638f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2638fc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2638FCu;
    {
        const bool branch_taken_0x2638fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x263900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2638FCu;
        // 0x263900: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2638fc) {
            ctx->pc = 0x263918u;
            goto label_263918;
        }
    }
    ctx->pc = 0x263904u;
    // 0x263904: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x263904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x263908: 0x2403002e  addiu       $v1, $zero, 0x2E
    ctx->pc = 0x263908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x26390c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x26390cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x263910: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x263910u;
    {
        const bool branch_taken_0x263910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x263914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263910u;
        // 0x263914: 0x2602b7c8  addiu       $v0, $s0, -0x4838 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263910) {
            ctx->pc = 0x263938u;
            goto label_263938;
        }
    }
    ctx->pc = 0x263918u;
label_263918:
    // 0x263918: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x263918u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26391c: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x26391Cu;
    {
        const bool branch_taken_0x26391c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26391c) {
            ctx->pc = 0x263920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26391Cu;
            // 0x263920: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2638ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2638ec;
        }
    }
    ctx->pc = 0x263924u;
    // 0x263924: 0x80a3ffff  lb          $v1, -0x1($a1)
    ctx->pc = 0x263924u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
    // 0x263928: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x263928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x26392c: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x26392Cu;
    {
        const bool branch_taken_0x26392c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26392c) {
            ctx->pc = 0x263930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26392Cu;
            // 0x263930: 0x8e86004c  lw          $a2, 0x4C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263998u;
            goto label_263998;
        }
    }
    ctx->pc = 0x263934u;
    // 0x263934: 0x2602b7c8  addiu       $v0, $s0, -0x4838
    ctx->pc = 0x263934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948808));
label_263938:
    // 0x263938: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x263938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x26393c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x26393cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x263940: 0x30630044  andi        $v1, $v1, 0x44
    ctx->pc = 0x263940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)68);
    // 0x263944: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x263944u;
    {
        const bool branch_taken_0x263944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x263948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263944u;
        // 0x263948: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263944) {
            ctx->pc = 0x26395Cu;
            goto label_26395c;
        }
    }
    ctx->pc = 0x26394Cu;
    // 0x26394c: 0xc04a726  jal         func_129C98
    ctx->pc = 0x26394Cu;
    SET_GPR_U32(ctx, 31, 0x263954u);
    ctx->pc = 0x263950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26394Cu;
    // 0x263950: 0x2405003a  addiu       $a1, $zero, 0x3A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129C98u, 0x26394Cu, 0x263954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263954u;
label_263954:
    // 0x263954: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x263954u;
    {
        const bool branch_taken_0x263954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263954) {
            ctx->pc = 0x263958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263954u;
            // 0x263958: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263974u;
            goto label_263974;
        }
    }
    ctx->pc = 0x26395Cu;
label_26395c:
    // 0x26395c: 0x82a30000  lb          $v1, 0x0($s5)
    ctx->pc = 0x26395cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x263960: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x263960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x263964: 0x14620044  bne         $v1, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x263964u;
    {
        const bool branch_taken_0x263964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x263968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263964u;
        // 0x263968: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263964) {
            ctx->pc = 0x263A78u;
            goto label_263a78;
        }
    }
    ctx->pc = 0x26396Cu;
    // 0x26396c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26396Cu;
    {
        const bool branch_taken_0x26396c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26396Cu;
        // 0x263970: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26396c) {
            ctx->pc = 0x263978u;
            goto label_263978;
        }
    }
    ctx->pc = 0x263974u;
label_263974:
    // 0x263974: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x263974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_263978:
    // 0x263978: 0x5480002a  bnel        $a0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x263978u;
    {
        const bool branch_taken_0x263978 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x263978) {
            ctx->pc = 0x26397Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263978u;
            // 0x26397c: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263A24u;
            goto label_263a24;
        }
    }
    ctx->pc = 0x263980u;
    // 0x263980: 0x82a3ffff  lb          $v1, -0x1($s5)
    ctx->pc = 0x263980u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 4294967295)));
    // 0x263984: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x263984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x263988: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x263988u;
    {
        const bool branch_taken_0x263988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x263988) {
            ctx->pc = 0x263A78u;
            goto label_263a78;
        }
    }
    ctx->pc = 0x263990u;
    // 0x263990: 0x8e86004c  lw          $a2, 0x4C($s4)
    ctx->pc = 0x263990u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x263994: 0x0  nop
    ctx->pc = 0x263994u;
    // NOP
label_263998:
    // 0x263998: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x263998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26399c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26399cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2639a0: 0xc09913e  jal         func_2644F8
    ctx->pc = 0x2639A0u;
    SET_GPR_U32(ctx, 31, 0x2639A8u);
    ctx->pc = 0x2639A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2639A0u;
    // 0x2639a4: 0x24c62130  addiu       $a2, $a2, 0x2130 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2644F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2644F8u, 0x2639A0u, 0x2639A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2639A8u;
label_2639a8:
    // 0x2639a8: 0x18400052  blez        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x2639A8u;
    {
        const bool branch_taken_0x2639a8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2639ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2639A8u;
        // 0x2639ac: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2639a8) {
            ctx->pc = 0x263AF4u;
            goto label_263af4;
        }
    }
    ctx->pc = 0x2639B0u;
    // 0x2639b0: 0x8e84004c  lw          $a0, 0x4C($s4)
    ctx->pc = 0x2639b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x2639b4: 0x24060401  addiu       $a2, $zero, 0x401
    ctx->pc = 0x2639b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
    // 0x2639b8: 0xc04a966  jal         func_12A598
    ctx->pc = 0x2639B8u;
    SET_GPR_U32(ctx, 31, 0x2639C0u);
    ctx->pc = 0x2639BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2639B8u;
    // 0x2639bc: 0x24840130  addiu       $a0, $a0, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x2639B8u, 0x2639C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2639C0u;
label_2639c0:
    // 0x2639c0: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x2639c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x2639c4: 0xa0600531  sb          $zero, 0x531($v1)
    ctx->pc = 0x2639c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1329), (uint8_t)GPR_U32(ctx, 0));
    // 0x2639c8: 0x8e84004c  lw          $a0, 0x4C($s4)
    ctx->pc = 0x2639c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x2639cc: 0x24820130  addiu       $v0, $a0, 0x130
    ctx->pc = 0x2639ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 304));
    // 0x2639d0: 0xac820090  sw          $v0, 0x90($a0)
    ctx->pc = 0x2639d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 2));
    // 0x2639d4: 0x8e85004c  lw          $a1, 0x4C($s4)
    ctx->pc = 0x2639d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x2639d8: 0x24a200a4  addiu       $v0, $a1, 0xA4
    ctx->pc = 0x2639d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
    // 0x2639dc: 0xaca20094  sw          $v0, 0x94($a1)
    ctx->pc = 0x2639dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 148), GPR_U32(ctx, 2));
    // 0x2639e0: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x2639e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x2639e4: 0xac6000a4  sw          $zero, 0xA4($v1)
    ctx->pc = 0x2639e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 0));
    // 0x2639e8: 0x8e84004c  lw          $a0, 0x4C($s4)
    ctx->pc = 0x2639e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x2639ec: 0x24822130  addiu       $v0, $a0, 0x2130
    ctx->pc = 0x2639ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8496));
    // 0x2639f0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2639f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2639f4: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x2639f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x2639f8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2639f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2639fc: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x2639fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x263a00: 0xc097308  jal         func_25CC20
    ctx->pc = 0x263A00u;
    SET_GPR_U32(ctx, 31, 0x263A08u);
    ctx->pc = 0x263A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263A00u;
    // 0x263a04: 0xac4200a0  sw          $v0, 0xA0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CC20u, 0x263A00u, 0x263A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263A08u;
label_263a08:
    // 0x263a08: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x263a08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x263a0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x263a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263a10: 0xc0972da  jal         func_25CB68
    ctx->pc = 0x263A10u;
    SET_GPR_U32(ctx, 31, 0x263A18u);
    ctx->pc = 0x263A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263A10u;
    // 0x263a14: 0x8e85000c  lw          $a1, 0xC($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB68u, 0x263A10u, 0x263A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263A18u;
label_263a18:
    // 0x263a18: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x263a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x263a1c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x263A1Cu;
    {
        const bool branch_taken_0x263a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263A1Cu;
        // 0x263a20: 0x24420090  addiu       $v0, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263a1c) {
            ctx->pc = 0x263B34u;
            goto label_263b34;
        }
    }
    ctx->pc = 0x263A24u;
label_263a24:
    // 0x263a24: 0x2602b7c8  addiu       $v0, $s0, -0x4838
    ctx->pc = 0x263a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948808));
    // 0x263a28: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x263a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x263a2c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x263a2cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x263a30: 0x30630044  andi        $v1, $v1, 0x44
    ctx->pc = 0x263a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)68);
    // 0x263a34: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x263A34u;
    {
        const bool branch_taken_0x263a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x263a34) {
            ctx->pc = 0x263A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263A34u;
            // 0x263a38: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263A5Cu;
            goto label_263a5c;
        }
    }
    ctx->pc = 0x263A3Cu;
    // 0x263a3c: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x263a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x263a40: 0x2403003a  addiu       $v1, $zero, 0x3A
    ctx->pc = 0x263a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x263a44: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x263a44u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x263a48: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x263A48u;
    {
        const bool branch_taken_0x263a48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x263A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263A48u;
        // 0x263a4c: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263a48) {
            ctx->pc = 0x263A58u;
            goto label_263a58;
        }
    }
    ctx->pc = 0x263A50u;
    // 0x263a50: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x263A50u;
    {
        const bool branch_taken_0x263a50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x263a50) {
            ctx->pc = 0x263A78u;
            goto label_263a78;
        }
    }
    ctx->pc = 0x263A58u;
label_263a58:
    // 0x263a58: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x263a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_263a5c:
    // 0x263a5c: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x263a5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x263a60: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x263A60u;
    {
        const bool branch_taken_0x263a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263a60) {
            ctx->pc = 0x263A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263A60u;
            // 0x263a64: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263A24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_263a24;
        }
    }
    ctx->pc = 0x263A68u;
    // 0x263a68: 0x80a3ffff  lb          $v1, -0x1($a1)
    ctx->pc = 0x263a68u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
    // 0x263a6c: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x263a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x263a70: 0x5462ffc9  bnel        $v1, $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x263A70u;
    {
        const bool branch_taken_0x263a70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x263a70) {
            ctx->pc = 0x263A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263A70u;
            // 0x263a74: 0x8e86004c  lw          $a2, 0x4C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263998u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_263998;
        }
    }
    ctx->pc = 0x263A78u;
label_263a78:
    // 0x263a78: 0xc097308  jal         func_25CC20
    ctx->pc = 0x263A78u;
    SET_GPR_U32(ctx, 31, 0x263A80u);
    ctx->pc = 0x263A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263A78u;
    // 0x263a7c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CC20u, 0x263A78u, 0x263A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263A80u;
label_263a80:
    // 0x263a80: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x263a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x263a84: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x263a84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
    // 0x263a88: 0x3c11003f  lui         $s1, 0x3F
    ctx->pc = 0x263a88u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
    // 0x263a8c: 0x3c12003f  lui         $s2, 0x3F
    ctx->pc = 0x263a8cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)63 << 16));
    // 0x263a90: 0x3c13003f  lui         $s3, 0x3F
    ctx->pc = 0x263a90u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)63 << 16));
    // 0x263a94: 0x26107638  addiu       $s0, $s0, 0x7638
    ctx->pc = 0x263a94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 30264));
    // 0x263a98: 0x26317650  addiu       $s1, $s1, 0x7650
    ctx->pc = 0x263a98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 30288));
    // 0x263a9c: 0x26527658  addiu       $s2, $s2, 0x7658
    ctx->pc = 0x263a9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 30296));
    // 0x263aa0: 0x26737610  addiu       $s3, $s3, 0x7610
    ctx->pc = 0x263aa0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 30224));
    // 0x263aa4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x263aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x263aa8: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x263AA8u;
    SET_GPR_U32(ctx, 31, 0x263AB0u);
    ctx->pc = 0x263AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263AA8u;
    // 0x263aac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x263AA8u, 0x263AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263AB0u;
label_263ab0:
    // 0x263ab0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x263ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263ab4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x263ab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263ab8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x263ab8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263abc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x263abcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263ac0: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x263ac0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263ac4: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x263ac4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263ac8: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x263ac8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263acc: 0xc09922e  jal         func_2648B8
    ctx->pc = 0x263ACCu;
    SET_GPR_U32(ctx, 31, 0x263AD4u);
    ctx->pc = 0x263AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263ACCu;
    // 0x263ad0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2648B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2648B8u, 0x263ACCu, 0x263AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263AD4u;
label_263ad4:
    // 0x263ad4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x263ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263ad8: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x263AD8u;
    {
        const bool branch_taken_0x263ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x263ad8) {
            ctx->pc = 0x263B18u;
            goto label_263b18;
        }
    }
    ctx->pc = 0x263AE0u;
label_263ae0:
    // 0x263ae0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x263ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_263ae4:
    // 0x263ae4: 0xc0972da  jal         func_25CB68
    ctx->pc = 0x263AE4u;
    SET_GPR_U32(ctx, 31, 0x263AECu);
    ctx->pc = 0x263AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263AE4u;
    // 0x263ae8: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB68u, 0x263AE4u, 0x263AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263AECu;
label_263aec:
    // 0x263aec: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x263AECu;
    {
        const bool branch_taken_0x263aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263AECu;
        // 0x263af0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263aec) {
            ctx->pc = 0x263B34u;
            goto label_263b34;
        }
    }
    ctx->pc = 0x263AF4u;
label_263af4:
    // 0x263af4: 0xc097308  jal         func_25CC20
    ctx->pc = 0x263AF4u;
    SET_GPR_U32(ctx, 31, 0x263AFCu);
    ctx->pc = 0x25CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CC20u, 0x263AF4u, 0x263AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263AFCu;
label_263afc:
    // 0x263afc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x263afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263b00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x263b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263b04: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x263b04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x263b08: 0xc0972da  jal         func_25CB68
    ctx->pc = 0x263B08u;
    SET_GPR_U32(ctx, 31, 0x263B10u);
    ctx->pc = 0x263B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263B08u;
    // 0x263b0c: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB68u, 0x263B08u, 0x263B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263B10u;
label_263b10:
    // 0x263b10: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x263B10u;
    {
        const bool branch_taken_0x263b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263B10u;
        // 0x263b14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263b10) {
            ctx->pc = 0x263B34u;
            goto label_263b34;
        }
    }
    ctx->pc = 0x263B18u;
label_263b18:
    // 0x263b18: 0xc097308  jal         func_25CC20
    ctx->pc = 0x263B18u;
    SET_GPR_U32(ctx, 31, 0x263B20u);
    ctx->pc = 0x25CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CC20u, 0x263B18u, 0x263B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263B20u;
label_263b20:
    // 0x263b20: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x263b20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x263b24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x263b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263b28: 0xc0972da  jal         func_25CB68
    ctx->pc = 0x263B28u;
    SET_GPR_U32(ctx, 31, 0x263B30u);
    ctx->pc = 0x263B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263B28u;
    // 0x263b2c: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB68u, 0x263B28u, 0x263B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263B30u;
label_263b30:
    // 0x263b30: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x263b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_263b34:
    // 0x263b34: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x263b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x263b38: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x263b38u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x263b3c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x263b3cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x263b40: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x263b40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x263b44: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x263b44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x263b48: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x263b48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x263b4c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x263b4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x263b50: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x263b50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263b54: 0x3e00008  jr          $ra
    ctx->pc = 0x263B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263B54u;
        // 0x263b58: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x263B5Cu;
    // 0x263b5c: 0x0  nop
    ctx->pc = 0x263b5cu;
    // NOP
    if (ctx->pc == 0x263b5cu) { ctx->pc = 0x263b60u; }
}
