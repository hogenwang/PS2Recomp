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

// Function: sub_002C37B0
// Address: 0x2c37b0 - 0x2c3f48
void sub_002C37B0_0x2c37b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C37B0_0x2c37b0");
#endif

    switch (ctx->pc) {
        case 0x2c3804u: goto label_2c3804;
        case 0x2c384cu: goto label_2c384c;
        case 0x2c388cu: goto label_2c388c;
        case 0x2c38e0u: goto label_2c38e0;
        case 0x2c38fcu: goto label_2c38fc;
        case 0x2c3938u: goto label_2c3938;
        case 0x2c3974u: goto label_2c3974;
        case 0x2c39c4u: goto label_2c39c4;
        case 0x2c3a08u: goto label_2c3a08;
        case 0x2c3a10u: goto label_2c3a10;
        case 0x2c3a18u: goto label_2c3a18;
        case 0x2c3a68u: goto label_2c3a68;
        case 0x2c3ab0u: goto label_2c3ab0;
        case 0x2c3af8u: goto label_2c3af8;
        case 0x2c3b00u: goto label_2c3b00;
        case 0x2c3b08u: goto label_2c3b08;
        case 0x2c3b44u: goto label_2c3b44;
        case 0x2c3ba8u: goto label_2c3ba8;
        case 0x2c3bd8u: goto label_2c3bd8;
        case 0x2c3c18u: goto label_2c3c18;
        case 0x2c3c28u: goto label_2c3c28;
        case 0x2c3c2cu: goto label_2c3c2c;
        case 0x2c3c4cu: goto label_2c3c4c;
        case 0x2c3ca8u: goto label_2c3ca8;
        case 0x2c3cb8u: goto label_2c3cb8;
        case 0x2c3cc8u: goto label_2c3cc8;
        case 0x2c3cdcu: goto label_2c3cdc;
        case 0x2c3d04u: goto label_2c3d04;
        case 0x2c3d10u: goto label_2c3d10;
        case 0x2c3d1cu: goto label_2c3d1c;
        case 0x2c3d28u: goto label_2c3d28;
        case 0x2c3d9cu: goto label_2c3d9c;
        case 0x2c3de4u: goto label_2c3de4;
        case 0x2c3e0cu: goto label_2c3e0c;
        case 0x2c3e48u: goto label_2c3e48;
        case 0x2c3e84u: goto label_2c3e84;
        case 0x2c3eb4u: goto label_2c3eb4;
        case 0x2c3ee0u: goto label_2c3ee0;
        case 0x2c3ee8u: goto label_2c3ee8;
        case 0x2c3ef4u: goto label_2c3ef4;
        case 0x2c3f04u: goto label_2c3f04;
        case 0x2c3f28u: goto label_2c3f28;
        default: break;
    }

    ctx->pc = 0x2c37b0u;

label_2c37b0:
    // 0x2c37b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2c37b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2c37b4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2c37b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c37b8: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x2c37b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x2c37bc: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2c37bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2c37c0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2c37c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c37c4: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x2c37c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x2c37c8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c37c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c37cc: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2c37ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2c37d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c37d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c37d4: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2c37d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2c37d8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2c37d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c37dc: 0xffa60030  sd          $a2, 0x30($sp)
    ctx->pc = 0x2c37dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 6));
    // 0x2c37e0: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2c37e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2c37e4: 0xafb20028  sw          $s2, 0x28($sp)
    ctx->pc = 0x2c37e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 18));
    // 0x2c37e8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C37E8u;
    {
        const bool branch_taken_0x2c37e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C37ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C37E8u;
        // 0x2c37ec: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c37e8) {
            ctx->pc = 0x2C37FCu;
            goto label_2c37fc;
        }
    }
    ctx->pc = 0x2C37F0u;
    // 0x2c37f0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c37f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c37f4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C37F4u;
    {
        const bool branch_taken_0x2c37f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C37F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C37F4u;
        // 0x2c37f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c37f4) {
            ctx->pc = 0x2C381Cu;
            goto label_2c381c;
        }
    }
    ctx->pc = 0x2C37FCu;
label_2c37fc:
    // 0x2c37fc: 0xc0b0ff2  jal         func_2C3FC8
    ctx->pc = 0x2C37FCu;
    SET_GPR_U32(ctx, 31, 0x2C3804u);
    ctx->pc = 0x2C3FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3FC8u, 0x2C37FCu, 0x2C3804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3804u;
label_2c3804:
    // 0x2c3804: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c3804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3808: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3808u;
    {
        const bool branch_taken_0x2c3808 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3808) {
            ctx->pc = 0x2C380Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3808u;
            // 0x2c380c: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C381Cu;
            goto label_2c381c;
        }
    }
    ctx->pc = 0x2C3810u;
    // 0x2c3810: 0x24020073  addiu       $v0, $zero, 0x73
    ctx->pc = 0x2c3810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x2c3814: 0x100000fa  b           . + 4 + (0xFA << 2)
    ctx->pc = 0x2C3814u;
    {
        const bool branch_taken_0x2c3814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3814u;
        // 0x2c3818: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3814) {
            ctx->pc = 0x2C3C00u;
            goto label_2c3c00;
        }
    }
    ctx->pc = 0x2C381Cu;
label_2c381c:
    // 0x2c381c: 0xdfa20030  ld          $v0, 0x30($sp)
    ctx->pc = 0x2c381cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c3820: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C3820u;
    {
        const bool branch_taken_0x2c3820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3820u;
        // 0x2c3824: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3820) {
            ctx->pc = 0x2C3838u;
            goto label_2c3838;
        }
    }
    ctx->pc = 0x2C3828u;
    // 0x2c3828: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2c3828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2c382c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2c382cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2c3830: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C3830u;
    {
        const bool branch_taken_0x2c3830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3830u;
        // 0x2c3834: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3830) {
            ctx->pc = 0x2C383Cu;
            goto label_2c383c;
        }
    }
    ctx->pc = 0x2C3838u;
label_2c3838:
    // 0x2c3838: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c3838u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c383c:
    // 0x2c383c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2c383cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2c3840: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c3840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3844: 0xc0a067c  jal         func_2819F0
    ctx->pc = 0x2C3844u;
    SET_GPR_U32(ctx, 31, 0x2C384Cu);
    ctx->pc = 0x2C3848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3844u;
    // 0x2c3848: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2819F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2819F0u, 0x2C3844u, 0x2C384Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C384Cu;
label_2c384c:
    // 0x2c384c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C384Cu;
    {
        const bool branch_taken_0x2c384c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C384Cu;
        // 0x2c3850: 0xdfa60018  ld          $a2, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c384c) {
            ctx->pc = 0x2C3860u;
            goto label_2c3860;
        }
    }
    ctx->pc = 0x2C3854u;
    // 0x2c3854: 0x24020077  addiu       $v0, $zero, 0x77
    ctx->pc = 0x2c3854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x2c3858: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x2C3858u;
    {
        const bool branch_taken_0x2c3858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3858u;
        // 0x2c385c: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3858) {
            ctx->pc = 0x2C3C00u;
            goto label_2c3c00;
        }
    }
    ctx->pc = 0x2C3860u;
label_2c3860:
    // 0x2c3860: 0x10c00014  beqz        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C3860u;
    {
        const bool branch_taken_0x2c3860 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3860u;
        // 0x2c3864: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3860) {
            ctx->pc = 0x2C38B4u;
            goto label_2c38b4;
        }
    }
    ctx->pc = 0x2C3868u;
    // 0x2c3868: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c3868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c386c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2c386cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c3870: 0x304200df  andi        $v0, $v0, 0xDF
    ctx->pc = 0x2c3870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)223);
    // 0x2c3874: 0x54430010  bnel        $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C3874u;
    {
        const bool branch_taken_0x2c3874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c3874) {
            ctx->pc = 0x2C3878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3874u;
            // 0x2c3878: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C38B8u;
            goto label_2c38b8;
        }
    }
    ctx->pc = 0x2C387Cu;
    // 0x2c387c: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x2c387cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
    // 0x2c3880: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c3880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3884: 0xc0a00b6  jal         func_2802D8
    ctx->pc = 0x2C3884u;
    SET_GPR_U32(ctx, 31, 0x2C388Cu);
    ctx->pc = 0x2C3888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3884u;
    // 0x2c3888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2802D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2802D8u, 0x2C3884u, 0x2C388Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C388Cu;
label_2c388c:
    // 0x2c388c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C388Cu;
    {
        const bool branch_taken_0x2c388c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C388Cu;
        // 0x2c3890: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c388c) {
            ctx->pc = 0x2C38A0u;
            goto label_2c38a0;
        }
    }
    ctx->pc = 0x2C3894u;
    // 0x2c3894: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x2c3894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2c3898: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x2C3898u;
    {
        const bool branch_taken_0x2c3898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3898u;
        // 0x2c389c: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3898) {
            ctx->pc = 0x2C3C00u;
            goto label_2c3c00;
        }
    }
    ctx->pc = 0x2C38A0u;
label_2c38a0:
    // 0x2c38a0: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x2c38a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c38a4: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x2c38a4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c38a8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2c38a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c38ac: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x2c38acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x2c38b0: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x2c38b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_2c38b4:
    // 0x2c38b4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2c38b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c38b8:
    // 0x2c38b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C38B8u;
    {
        const bool branch_taken_0x2c38b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c38b8) {
            ctx->pc = 0x2C38C8u;
            goto label_2c38c8;
        }
    }
    ctx->pc = 0x2C38C0u;
    // 0x2c38c0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2c38c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c38c4: 0x90530000  lbu         $s3, 0x0($v0)
    ctx->pc = 0x2c38c4u;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2c38c8:
    // 0x2c38c8: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C38C8u;
    {
        const bool branch_taken_0x2c38c8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C38CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C38C8u;
        // 0x2c38cc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c38c8) {
            ctx->pc = 0x2C38E8u;
            goto label_2c38e8;
        }
    }
    ctx->pc = 0x2C38D0u;
    // 0x2c38d0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C38D0u;
    {
        const bool branch_taken_0x2c38d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c38d0) {
            ctx->pc = 0x2C38D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C38D0u;
            // 0x2c38d4: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C38ECu;
            goto label_2c38ec;
        }
    }
    ctx->pc = 0x2C38D8u;
    // 0x2c38d8: 0xc0a070c  jal         func_281C30
    ctx->pc = 0x2C38D8u;
    SET_GPR_U32(ctx, 31, 0x2C38E0u);
    ctx->pc = 0x281C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281C30u, 0x2C38D8u, 0x2C38E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C38E0u;
label_2c38e0:
    // 0x2c38e0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2c38e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2c38e4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2c38e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c38e8:
    // 0x2c38e8: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2c38e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2c38ec:
    // 0x2c38ec: 0xdfa60018  ld          $a2, 0x18($sp)
    ctx->pc = 0x2c38ecu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c38f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c38f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c38f4: 0xc0b0970  jal         func_2C25C0
    ctx->pc = 0x2C38F4u;
    SET_GPR_U32(ctx, 31, 0x2C38FCu);
    ctx->pc = 0x2C38F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C38F4u;
    // 0x2c38f8: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C25C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C25C0u, 0x2C38F4u, 0x2C38FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C38FCu;
label_2c38fc:
    // 0x2c38fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C38FCu;
    {
        const bool branch_taken_0x2c38fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C38FCu;
        // 0x2c3900: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c38fc) {
            ctx->pc = 0x2C3910u;
            goto label_2c3910;
        }
    }
    ctx->pc = 0x2C3904u;
    // 0x2c3904: 0x24020081  addiu       $v0, $zero, 0x81
    ctx->pc = 0x2c3904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x2c3908: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x2C3908u;
    {
        const bool branch_taken_0x2c3908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3908u;
        // 0x2c390c: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3908) {
            ctx->pc = 0x2C3C00u;
            goto label_2c3c00;
        }
    }
    ctx->pc = 0x2C3910u;
label_2c3910:
    // 0x2c3910: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2c3910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2c3914: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2c3914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c3918: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c3918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c391c: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x2c391cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3920: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x2c3920u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2c3924: 0xafa60024  sw          $a2, 0x24($sp)
    ctx->pc = 0x2c3924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
    // 0x2c3928: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x2c3928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x2c392c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c392cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3930: 0xc0a088a  jal         func_282228
    ctx->pc = 0x2C3930u;
    SET_GPR_U32(ctx, 31, 0x2C3938u);
    ctx->pc = 0x2C3934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3930u;
    // 0x2c3934: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282228u, 0x2C3930u, 0x2C3938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3938u;
label_2c3938:
    // 0x2c3938: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3938u;
    {
        const bool branch_taken_0x2c3938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3938u;
        // 0x2c393c: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3938) {
            ctx->pc = 0x2C394Cu;
            goto label_2c394c;
        }
    }
    ctx->pc = 0x2C3940u;
    // 0x2c3940: 0x24020082  addiu       $v0, $zero, 0x82
    ctx->pc = 0x2c3940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x2c3944: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x2C3944u;
    {
        const bool branch_taken_0x2c3944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3944u;
        // 0x2c3948: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3944) {
            ctx->pc = 0x2C3C00u;
            goto label_2c3c00;
        }
    }
    ctx->pc = 0x2C394Cu;
label_2c394c:
    // 0x2c394c: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x2c394cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2c3950: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2c3950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c3954: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c3954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3958: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x2c3958u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c395c: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x2c395cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2c3960: 0xafa60024  sw          $a2, 0x24($sp)
    ctx->pc = 0x2c3960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
    // 0x2c3964: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x2c3964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x2c3968: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c3968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c396c: 0xc0a0462  jal         func_281188
    ctx->pc = 0x2C396Cu;
    SET_GPR_U32(ctx, 31, 0x2C3974u);
    ctx->pc = 0x2C3970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C396Cu;
    // 0x2c3970: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281188u, 0x2C396Cu, 0x2C3974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3974u;
label_2c3974:
    // 0x2c3974: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3974u;
    {
        const bool branch_taken_0x2c3974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3974u;
        // 0x2c3978: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3974) {
            ctx->pc = 0x2C3988u;
            goto label_2c3988;
        }
    }
    ctx->pc = 0x2C397Cu;
    // 0x2c397c: 0x24020083  addiu       $v0, $zero, 0x83
    ctx->pc = 0x2c397cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x2c3980: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x2C3980u;
    {
        const bool branch_taken_0x2c3980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3980u;
        // 0x2c3984: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3980) {
            ctx->pc = 0x2C3C00u;
            goto label_2c3c00;
        }
    }
    ctx->pc = 0x2C3988u;
label_2c3988:
    // 0x2c3988: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x2c3988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c398c: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x2c398cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3990: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x2c3990u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c3994: 0x62302f  dsubu       $a2, $v1, $v0
    ctx->pc = 0x2c3994u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x2c3998: 0x10c00014  beqz        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C3998u;
    {
        const bool branch_taken_0x2c3998 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3998u;
        // 0x2c399c: 0xffa60018  sd          $a2, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3998) {
            ctx->pc = 0x2C39ECu;
            goto label_2c39ec;
        }
    }
    ctx->pc = 0x2C39A0u;
    // 0x2c39a0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2c39a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c39a4: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x2c39a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2c39a8: 0x304200df  andi        $v0, $v0, 0xDF
    ctx->pc = 0x2c39a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)223);
    // 0x2c39ac: 0x54430010  bnel        $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C39ACu;
    {
        const bool branch_taken_0x2c39ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c39ac) {
            ctx->pc = 0x2C39B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C39ACu;
            // 0x2c39b0: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C39F0u;
            goto label_2c39f0;
        }
    }
    ctx->pc = 0x2C39B4u;
    // 0x2c39b4: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x2c39b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
    // 0x2c39b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c39b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c39bc: 0xc0a0462  jal         func_281188
    ctx->pc = 0x2C39BCu;
    SET_GPR_U32(ctx, 31, 0x2C39C4u);
    ctx->pc = 0x2C39C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C39BCu;
    // 0x2c39c0: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281188u, 0x2C39BCu, 0x2C39C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C39C4u;
label_2c39c4:
    // 0x2c39c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C39C4u;
    {
        const bool branch_taken_0x2c39c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C39C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C39C4u;
        // 0x2c39c8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c39c4) {
            ctx->pc = 0x2C39D8u;
            goto label_2c39d8;
        }
    }
    ctx->pc = 0x2C39CCu;
    // 0x2c39cc: 0x24020084  addiu       $v0, $zero, 0x84
    ctx->pc = 0x2c39ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x2c39d0: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x2C39D0u;
    {
        const bool branch_taken_0x2c39d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C39D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C39D0u;
        // 0x2c39d4: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c39d0) {
            ctx->pc = 0x2C3C00u;
            goto label_2c3c00;
        }
    }
    ctx->pc = 0x2C39D8u;
label_2c39d8:
    // 0x2c39d8: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x2c39d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c39dc: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x2c39dcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c39e0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2c39e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c39e4: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x2c39e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x2c39e8: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x2c39e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_2c39ec:
    // 0x2c39ec: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2c39ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2c39f0:
    // 0x2c39f0: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C39F0u;
    {
        const bool branch_taken_0x2c39f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C39F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C39F0u;
        // 0x2c39f4: 0xdfa60018  ld          $a2, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c39f0) {
            ctx->pc = 0x2C3A28u;
            goto label_2c3a28;
        }
    }
    ctx->pc = 0x2C39F8u;
    // 0x2c39f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c39f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c39fc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C39FCu;
    {
        const bool branch_taken_0x2c39fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c39fc) {
            ctx->pc = 0x2C3A28u;
            goto label_2c3a28;
        }
    }
    ctx->pc = 0x2C3A04u;
    // 0x2c3a04: 0x0  nop
    ctx->pc = 0x2c3a04u;
    // NOP
label_2c3a08:
    // 0x2c3a08: 0xc0af12a  jal         func_2BC4A8
    ctx->pc = 0x2C3A08u;
    SET_GPR_U32(ctx, 31, 0x2C3A10u);
    ctx->pc = 0x2C3A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3A08u;
    // 0x2c3a0c: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC4A8u, 0x2C3A08u, 0x2C3A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3A10u;
label_2c3a10:
    // 0x2c3a10: 0xc0b1046  jal         func_2C4118
    ctx->pc = 0x2C3A10u;
    SET_GPR_U32(ctx, 31, 0x2C3A18u);
    ctx->pc = 0x2C3A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3A10u;
    // 0x2c3a14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4118u, 0x2C3A10u, 0x2C3A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3A18u;
label_2c3a18:
    // 0x2c3a18: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2c3a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2c3a1c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c3a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c3a20: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2C3A20u;
    {
        const bool branch_taken_0x2c3a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A20u;
        // 0x2c3a24: 0xdfa60018  ld          $a2, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3a20) {
            ctx->pc = 0x2C3A08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c3a08;
        }
    }
    ctx->pc = 0x2C3A28u;
label_2c3a28:
    // 0x2c3a28: 0x10c0001a  beqz        $a2, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C3A28u;
    {
        const bool branch_taken_0x2c3a28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A28u;
        // 0x2c3a2c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3a28) {
            ctx->pc = 0x2C3A94u;
            goto label_2c3a94;
        }
    }
    ctx->pc = 0x2C3A30u;
    // 0x2c3a30: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2c3a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2c3a34: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2c3a34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c3a38: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C3A38u;
    {
        const bool branch_taken_0x2c3a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C3A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A38u;
        // 0x2c3a3c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3a38) {
            ctx->pc = 0x2C3A98u;
            goto label_2c3a98;
        }
    }
    ctx->pc = 0x2C3A40u;
    // 0x2c3a40: 0x3c07002c  lui         $a3, 0x2C
    ctx->pc = 0x2c3a40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)44 << 16));
    // 0x2c3a44: 0x3c08002c  lui         $t0, 0x2C
    ctx->pc = 0x2c3a44u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)44 << 16));
    // 0x2c3a48: 0xafa50024  sw          $a1, 0x24($sp)
    ctx->pc = 0x2c3a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
    // 0x2c3a4c: 0x24e73320  addiu       $a3, $a3, 0x3320
    ctx->pc = 0x2c3a4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13088));
    // 0x2c3a50: 0x25084118  addiu       $t0, $t0, 0x4118
    ctx->pc = 0x2c3a50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16664));
    // 0x2c3a54: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x2c3a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x2c3a58: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c3a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3a5c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x2c3a5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c3a60: 0xc0a0a02  jal         func_282808
    ctx->pc = 0x2C3A60u;
    SET_GPR_U32(ctx, 31, 0x2C3A68u);
    ctx->pc = 0x2C3A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3A60u;
    // 0x2c3a64: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282808u, 0x2C3A60u, 0x2C3A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3A68u;
label_2c3a68:
    // 0x2c3a68: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3A68u;
    {
        const bool branch_taken_0x2c3a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A68u;
        // 0x2c3a6c: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3a68) {
            ctx->pc = 0x2C3A7Cu;
            goto label_2c3a7c;
        }
    }
    ctx->pc = 0x2C3A70u;
    // 0x2c3a70: 0x2402008a  addiu       $v0, $zero, 0x8A
    ctx->pc = 0x2c3a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    // 0x2c3a74: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x2C3A74u;
    {
        const bool branch_taken_0x2c3a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A74u;
        // 0x2c3a78: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3a74) {
            ctx->pc = 0x2C3C00u;
            goto label_2c3c00;
        }
    }
    ctx->pc = 0x2C3A7Cu;
label_2c3a7c:
    // 0x2c3a7c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2c3a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c3a80: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x2c3a80u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3a84: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2c3a84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c3a88: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x2c3a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x2c3a8c: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x2c3a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x2c3a90: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2c3a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2c3a94:
    // 0x2c3a94: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2c3a94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c3a98:
    // 0x2c3a98: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2C3A98u;
    {
        const bool branch_taken_0x2c3a98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3a98) {
            ctx->pc = 0x2C3AD8u;
            goto label_2c3ad8;
        }
    }
    ctx->pc = 0x2C3AA0u;
    // 0x2c3aa0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c3aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c3aa4: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C3AA4u;
    {
        const bool branch_taken_0x2c3aa4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C3AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3AA4u;
        // 0x2c3aa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3aa4) {
            ctx->pc = 0x2C3AD8u;
            goto label_2c3ad8;
        }
    }
    ctx->pc = 0x2C3AACu;
    // 0x2c3aac: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2c3aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2c3ab0:
    // 0x2c3ab0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2c3ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2c3ab4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c3ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c3ab8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c3ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c3abc: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x2c3abcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
    // 0x2c3ac0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2c3ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2c3ac4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2c3ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2c3ac8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c3ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c3acc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2c3accu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c3ad0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2C3AD0u;
    {
        const bool branch_taken_0x2c3ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3ad0) {
            ctx->pc = 0x2C3AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3AD0u;
            // 0x2c3ad4: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3AB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c3ab0;
        }
    }
    ctx->pc = 0x2C3AD8u;
label_2c3ad8:
    // 0x2c3ad8: 0x1a60003d  blez        $s3, . + 4 + (0x3D << 2)
    ctx->pc = 0x2C3AD8u;
    {
        const bool branch_taken_0x2c3ad8 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x2c3ad8) {
            ctx->pc = 0x2C3BD0u;
            goto label_2c3bd0;
        }
    }
    ctx->pc = 0x2C3AE0u;
    // 0x2c3ae0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2c3ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2c3ae4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C3AE4u;
    {
        const bool branch_taken_0x2c3ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3AE4u;
        // 0x2c3ae8: 0xdfa80018  ld          $t0, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3ae4) {
            ctx->pc = 0x2C3B18u;
            goto label_2c3b18;
        }
    }
    ctx->pc = 0x2C3AECu;
    // 0x2c3aec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c3aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c3af0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C3AF0u;
    {
        const bool branch_taken_0x2c3af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3af0) {
            ctx->pc = 0x2C3B18u;
            goto label_2c3b18;
        }
    }
    ctx->pc = 0x2C3AF8u;
label_2c3af8:
    // 0x2c3af8: 0xc0af12a  jal         func_2BC4A8
    ctx->pc = 0x2C3AF8u;
    SET_GPR_U32(ctx, 31, 0x2C3B00u);
    ctx->pc = 0x2C3AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3AF8u;
    // 0x2c3afc: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC4A8u, 0x2C3AF8u, 0x2C3B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3B00u;
label_2c3b00:
    // 0x2c3b00: 0xc0b11a4  jal         func_2C4690
    ctx->pc = 0x2C3B00u;
    SET_GPR_U32(ctx, 31, 0x2C3B08u);
    ctx->pc = 0x2C3B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3B00u;
    // 0x2c3b04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4690u, 0x2C3B00u, 0x2C3B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3B08u;
label_2c3b08:
    // 0x2c3b08: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2c3b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2c3b0c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c3b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c3b10: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2C3B10u;
    {
        const bool branch_taken_0x2c3b10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B10u;
        // 0x2c3b14: 0xdfa80018  ld          $t0, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3b10) {
            ctx->pc = 0x2C3AF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c3af8;
        }
    }
    ctx->pc = 0x2C3B18u;
label_2c3b18:
    // 0x2c3b18: 0x1100002d  beqz        $t0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2C3B18u;
    {
        const bool branch_taken_0x2c3b18 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B18u;
        // 0x2c3b1c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3b18) {
            ctx->pc = 0x2C3BD0u;
            goto label_2c3bd0;
        }
    }
    ctx->pc = 0x2C3B20u;
    // 0x2c3b20: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x2c3b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x2c3b24: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2c3b24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c3b28: 0x14430029  bne         $v0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2C3B28u;
    {
        const bool branch_taken_0x2c3b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C3B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B28u;
        // 0x2c3b2c: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3b28) {
            ctx->pc = 0x2C3BD0u;
            goto label_2c3bd0;
        }
    }
    ctx->pc = 0x2C3B30u;
    // 0x2c3b30: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x2c3b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
    // 0x2c3b34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c3b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3b38: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2c3b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c3b3c: 0xc0a0554  jal         func_281550
    ctx->pc = 0x2C3B3Cu;
    SET_GPR_U32(ctx, 31, 0x2C3B44u);
    ctx->pc = 0x2C3B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3B3Cu;
    // 0x2c3b40: 0x27a70044  addiu       $a3, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281550u, 0x2C3B3Cu, 0x2C3B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3B44u;
label_2c3b44:
    // 0x2c3b44: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2c3b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2c3b48: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C3B48u;
    {
        const bool branch_taken_0x2c3b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B48u;
        // 0x2c3b4c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3b48) {
            ctx->pc = 0x2C3B74u;
            goto label_2c3b74;
        }
    }
    ctx->pc = 0x2C3B50u;
    // 0x2c3b50: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2c3b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c3b54: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x2c3b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c3b58: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x2c3b58u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3b5c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2c3b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c3b60: 0xdfa60038  ld          $a2, 0x38($sp)
    ctx->pc = 0x2c3b60u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3b64: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x2c3b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x2c3b68: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x2c3b68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2c3b6c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C3B6Cu;
    {
        const bool branch_taken_0x2c3b6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B6Cu;
        // 0x2c3b70: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3b6c) {
            ctx->pc = 0x2C3B84u;
            goto label_2c3b84;
        }
    }
    ctx->pc = 0x2C3B74u;
label_2c3b74:
    // 0x2c3b74: 0x2403009e  addiu       $v1, $zero, 0x9E
    ctx->pc = 0x2c3b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    // 0x2c3b78: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2c3b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2c3b7c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2C3B7Cu;
    {
        const bool branch_taken_0x2c3b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B7Cu;
        // 0x2c3b80: 0xafa3002c  sw          $v1, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3b7c) {
            ctx->pc = 0x2C3C00u;
            goto label_2c3c00;
        }
    }
    ctx->pc = 0x2C3B84u;
label_2c3b84:
    // 0x2c3b84: 0x3c07002c  lui         $a3, 0x2C
    ctx->pc = 0x2c3b84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)44 << 16));
    // 0x2c3b88: 0x3c08002c  lui         $t0, 0x2C
    ctx->pc = 0x2c3b88u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)44 << 16));
    // 0x2c3b8c: 0x24e743b0  addiu       $a3, $a3, 0x43B0
    ctx->pc = 0x2c3b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17328));
    // 0x2c3b90: 0x25084690  addiu       $t0, $t0, 0x4690
    ctx->pc = 0x2c3b90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 18064));
    // 0x2c3b94: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x2c3b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x2c3b98: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c3b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3b9c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x2c3b9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c3ba0: 0xc0a0a02  jal         func_282808
    ctx->pc = 0x2C3BA0u;
    SET_GPR_U32(ctx, 31, 0x2C3BA8u);
    ctx->pc = 0x2C3BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3BA0u;
    // 0x2c3ba4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282808u, 0x2C3BA0u, 0x2C3BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3BA8u;
label_2c3ba8:
    // 0x2c3ba8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3BA8u;
    {
        const bool branch_taken_0x2c3ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3BA8u;
        // 0x2c3bac: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3ba8) {
            ctx->pc = 0x2C3BBCu;
            goto label_2c3bbc;
        }
    }
    ctx->pc = 0x2C3BB0u;
    // 0x2c3bb0: 0x2402009e  addiu       $v0, $zero, 0x9E
    ctx->pc = 0x2c3bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    // 0x2c3bb4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2C3BB4u;
    {
        const bool branch_taken_0x2c3bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3BB4u;
        // 0x2c3bb8: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3bb4) {
            ctx->pc = 0x2C3C00u;
            goto label_2c3c00;
        }
    }
    ctx->pc = 0x2C3BBCu;
label_2c3bbc:
    // 0x2c3bbc: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x2c3bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c3bc0: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x2c3bc0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3bc4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2c3bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c3bc8: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x2c3bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x2c3bcc: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x2c3bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_2c3bd0:
    // 0x2c3bd0: 0xc0a065c  jal         func_281970
    ctx->pc = 0x2C3BD0u;
    SET_GPR_U32(ctx, 31, 0x2C3BD8u);
    ctx->pc = 0x2C3BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3BD0u;
    // 0x2c3bd4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281970u, 0x2C3BD0u, 0x2C3BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3BD8u;
label_2c3bd8:
    // 0x2c3bd8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3BD8u;
    {
        const bool branch_taken_0x2c3bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3BD8u;
        // 0x2c3bdc: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3bd8) {
            ctx->pc = 0x2C3BECu;
            goto label_2c3bec;
        }
    }
    ctx->pc = 0x2C3BE0u;
    // 0x2c3be0: 0x240200a1  addiu       $v0, $zero, 0xA1
    ctx->pc = 0x2c3be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x2c3be4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C3BE4u;
    {
        const bool branch_taken_0x2c3be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3BE4u;
        // 0x2c3be8: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3be4) {
            ctx->pc = 0x2C3C00u;
            goto label_2c3c00;
        }
    }
    ctx->pc = 0x2C3BECu;
label_2c3bec:
    // 0x2c3bec: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C3BECu;
    {
        const bool branch_taken_0x2c3bec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3BECu;
        // 0x2c3bf0: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3bec) {
            ctx->pc = 0x2C3BF8u;
            goto label_2c3bf8;
        }
    }
    ctx->pc = 0x2C3BF4u;
    // 0x2c3bf4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2c3bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_2c3bf8:
    // 0x2c3bf8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2C3BF8u;
    {
        const bool branch_taken_0x2c3bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3BF8u;
        // 0x2c3bfc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3bf8) {
            ctx->pc = 0x2C3C50u;
            goto label_2c3c50;
        }
    }
    ctx->pc = 0x2C3C00u;
label_2c3c00:
    // 0x2c3c00: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x2c3c00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c3c04: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2c3c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2c3c08: 0x240500a4  addiu       $a1, $zero, 0xA4
    ctx->pc = 0x2c3c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
    // 0x2c3c0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c3c0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3c10: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2C3C10u;
    SET_GPR_U32(ctx, 31, 0x2C3C18u);
    ctx->pc = 0x2C3C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3C10u;
    // 0x2c3c14: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2C3C10u, 0x2C3C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3C18u;
label_2c3c18:
    // 0x2c3c18: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2c3c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c3c1c: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x2c3c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c3c20: 0xc0a0738  jal         func_281CE0
    ctx->pc = 0x2C3C20u;
    SET_GPR_U32(ctx, 31, 0x2C3C28u);
    ctx->pc = 0x2C3C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3C20u;
    // 0x2c3c24: 0xa42823  subu        $a1, $a1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281CE0u, 0x2C3C20u, 0x2C3C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3C28u;
label_2c3c28:
    // 0x2c3c28: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_2c3c2c:
    if (ctx->pc == 0x2C3C2Cu) {
        ctx->pc = 0x2C3C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C28u;
        // 0x2c3c2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3C30u;
        goto label_fallthrough_0x2c3c28;
    }
    ctx->pc = 0x2C3C28u;
    {
        const bool branch_taken_0x2c3c28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C28u;
        // 0x2c3c2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3c28) {
            ctx->pc = 0x2C3C50u;
            goto label_2c3c50;
        }
    }
label_fallthrough_0x2c3c28:
    ctx->pc = 0x2C3C30u;
    // 0x2c3c30: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3C30u;
    {
        const bool branch_taken_0x2c3c30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3c30) {
            ctx->pc = 0x2C3C44u;
            goto label_2c3c44;
        }
    }
    ctx->pc = 0x2C3C38u;
    // 0x2c3c38: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c3c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c3c3c: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3C3Cu;
    {
        const bool branch_taken_0x2c3c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2C3C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C3Cu;
        // 0x2c3c40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3c3c) {
            ctx->pc = 0x2C3C50u;
            goto label_2c3c50;
        }
    }
    ctx->pc = 0x2C3C44u;
label_2c3c44:
    // 0x2c3c44: 0xc0b105c  jal         func_2C4170
    ctx->pc = 0x2C3C44u;
    SET_GPR_U32(ctx, 31, 0x2C3C4Cu);
    ctx->pc = 0x2C3C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3C44u;
    // 0x2c3c48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4170u, 0x2C3C44u, 0x2C3C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3C4Cu;
label_2c3c4c:
    // 0x2c3c4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c3c4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3c50:
    // 0x2c3c50: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2c3c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c3c54: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x2c3c54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c3c58: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2c3c58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c3c5c: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x2c3c5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c3c60: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2c3c60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c3c64: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C64u;
        // 0x2c3c68: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3C6Cu;
    // 0x2c3c6c: 0x0  nop
    ctx->pc = 0x2c3c6cu;
    // NOP
    // 0x2c3c70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c3c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c3c74: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2c3c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2c3c78: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2c3c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2c3c7c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c3c7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3c80: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c3c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c3c84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c3c84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3c88: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2c3c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2c3c8c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3C8Cu;
    {
        const bool branch_taken_0x2c3c8c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C8Cu;
        // 0x2c3c90: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3c8c) {
            ctx->pc = 0x2C3C9Cu;
            goto label_2c3c9c;
        }
    }
    ctx->pc = 0x2C3C94u;
    // 0x2c3c94: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2C3C94u;
    {
        const bool branch_taken_0x2c3c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3C94u;
        // 0x2c3c98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3c94) {
            ctx->pc = 0x2C3D34u;
            goto label_2c3d34;
        }
    }
    ctx->pc = 0x2C3C9Cu;
label_2c3c9c:
    // 0x2c3c9c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c3c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c3ca0: 0xc0b0d4e  jal         func_2C3538
    ctx->pc = 0x2C3CA0u;
    SET_GPR_U32(ctx, 31, 0x2C3CA8u);
    ctx->pc = 0x2C3CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3CA0u;
    // 0x2c3ca4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3538u, 0x2C3CA0u, 0x2C3CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3CA8u;
label_2c3ca8:
    // 0x2c3ca8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2c3ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c3cac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c3cacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3cb0: 0xc0b093c  jal         func_2C24F0
    ctx->pc = 0x2C3CB0u;
    SET_GPR_U32(ctx, 31, 0x2C3CB8u);
    ctx->pc = 0x2C3CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3CB0u;
    // 0x2c3cb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C24F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C24F0u, 0x2C3CB0u, 0x2C3CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3CB8u;
label_2c3cb8:
    // 0x2c3cb8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2c3cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c3cbc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2c3cbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c3cc0: 0xc09fc32  jal         func_27F0C8
    ctx->pc = 0x2C3CC0u;
    SET_GPR_U32(ctx, 31, 0x2C3CC8u);
    ctx->pc = 0x2C3CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3CC0u;
    // 0x2c3cc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C8u, 0x2C3CC0u, 0x2C3CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3CC8u;
label_2c3cc8:
    // 0x2c3cc8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2c3cc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c3ccc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c3cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3cd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c3cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3cd4: 0xc0a063a  jal         func_2818E8
    ctx->pc = 0x2C3CD4u;
    SET_GPR_U32(ctx, 31, 0x2C3CDCu);
    ctx->pc = 0x2C3CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3CD4u;
    // 0x2c3cd8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2818E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2818E8u, 0x2C3CD4u, 0x2C3CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3CDCu;
label_2c3cdc:
    // 0x2c3cdc: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C3CDCu;
    {
        const bool branch_taken_0x2c3cdc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3CDCu;
        // 0x2c3ce0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3cdc) {
            ctx->pc = 0x2C3D34u;
            goto label_2c3d34;
        }
    }
    ctx->pc = 0x2C3CE4u;
    // 0x2c3ce4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2c3ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c3ce8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c3ce8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3cec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c3cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3cf0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c3cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3cf4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2c3cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2c3cf8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2c3cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c3cfc: 0xc0a05d0  jal         func_281740
    ctx->pc = 0x2C3CFCu;
    SET_GPR_U32(ctx, 31, 0x2C3D04u);
    ctx->pc = 0x2C3D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3CFCu;
    // 0x2c3d00: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281740u, 0x2C3CFCu, 0x2C3D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3D04u;
label_2c3d04:
    // 0x2c3d04: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c3d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c3d08: 0xc0b0d4e  jal         func_2C3538
    ctx->pc = 0x2C3D08u;
    SET_GPR_U32(ctx, 31, 0x2C3D10u);
    ctx->pc = 0x2C3D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3D08u;
    // 0x2c3d0c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3538u, 0x2C3D08u, 0x2C3D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3D10u;
label_2c3d10:
    // 0x2c3d10: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2c3d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c3d14: 0xc0b093c  jal         func_2C24F0
    ctx->pc = 0x2C3D14u;
    SET_GPR_U32(ctx, 31, 0x2C3D1Cu);
    ctx->pc = 0x2C3D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3D14u;
    // 0x2c3d18: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C24F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C24F0u, 0x2C3D14u, 0x2C3D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3D1Cu;
label_2c3d1c:
    // 0x2c3d1c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2c3d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c3d20: 0xc09fc32  jal         func_27F0C8
    ctx->pc = 0x2C3D20u;
    SET_GPR_U32(ctx, 31, 0x2C3D28u);
    ctx->pc = 0x2C3D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3D20u;
    // 0x2c3d24: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F0C8u, 0x2C3D20u, 0x2C3D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3D28u;
label_2c3d28:
    // 0x2c3d28: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2c3d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c3d2c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2c3d2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3d30: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2c3d30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_2c3d34:
    // 0x2c3d34: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c3d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c3d38: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2c3d38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c3d3c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2c3d3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c3d40: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2c3d40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c3d44: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c3d44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c3d48: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3D48u;
        // 0x2c3d4c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3D50u;
    // 0x2c3d50: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2c3d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2c3d54: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2c3d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c3d58: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2c3d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2c3d5c: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x2c3d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2c3d60: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c3d60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3d64: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2c3d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2c3d68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c3d68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3d6c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2c3d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2c3d70: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2c3d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c3d74: 0xffa60030  sd          $a2, 0x30($sp)
    ctx->pc = 0x2c3d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 6));
    // 0x2c3d78: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2c3d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2c3d7c: 0xafb20028  sw          $s2, 0x28($sp)
    ctx->pc = 0x2c3d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 18));
    // 0x2c3d80: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3D80u;
    {
        const bool branch_taken_0x2c3d80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3D80u;
        // 0x2c3d84: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3d80) {
            ctx->pc = 0x2C3D94u;
            goto label_2c3d94;
        }
    }
    ctx->pc = 0x2C3D88u;
    // 0x2c3d88: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c3d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c3d8c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C3D8Cu;
    {
        const bool branch_taken_0x2c3d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3D8Cu;
        // 0x2c3d90: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3d8c) {
            ctx->pc = 0x2C3DB4u;
            goto label_2c3db4;
        }
    }
    ctx->pc = 0x2C3D94u;
label_2c3d94:
    // 0x2c3d94: 0xc0b1022  jal         func_2C4088
    ctx->pc = 0x2C3D94u;
    SET_GPR_U32(ctx, 31, 0x2C3D9Cu);
    ctx->pc = 0x2C4088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4088u, 0x2C3D94u, 0x2C3D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3D9Cu;
label_2c3d9c:
    // 0x2c3d9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c3d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3da0: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3DA0u;
    {
        const bool branch_taken_0x2c3da0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3da0) {
            ctx->pc = 0x2C3DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3DA0u;
            // 0x2c3da4: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3DB4u;
            goto label_2c3db4;
        }
    }
    ctx->pc = 0x2C3DA8u;
    // 0x2c3da8: 0x240200bc  addiu       $v0, $zero, 0xBC
    ctx->pc = 0x2c3da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    // 0x2c3dac: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x2C3DACu;
    {
        const bool branch_taken_0x2c3dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3DACu;
        // 0x2c3db0: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3dac) {
            ctx->pc = 0x2C3EDCu;
            goto label_2c3edc;
        }
    }
    ctx->pc = 0x2C3DB4u;
label_2c3db4:
    // 0x2c3db4: 0xdfa20030  ld          $v0, 0x30($sp)
    ctx->pc = 0x2c3db4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c3db8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C3DB8u;
    {
        const bool branch_taken_0x2c3db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3DB8u;
        // 0x2c3dbc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3db8) {
            ctx->pc = 0x2C3DD0u;
            goto label_2c3dd0;
        }
    }
    ctx->pc = 0x2C3DC0u;
    // 0x2c3dc0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2c3dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2c3dc4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2c3dc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2c3dc8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C3DC8u;
    {
        const bool branch_taken_0x2c3dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3DC8u;
        // 0x2c3dcc: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3dc8) {
            ctx->pc = 0x2C3DD4u;
            goto label_2c3dd4;
        }
    }
    ctx->pc = 0x2C3DD0u;
label_2c3dd0:
    // 0x2c3dd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c3dd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3dd4:
    // 0x2c3dd4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2c3dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2c3dd8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c3dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3ddc: 0xc0a067c  jal         func_2819F0
    ctx->pc = 0x2C3DDCu;
    SET_GPR_U32(ctx, 31, 0x2C3DE4u);
    ctx->pc = 0x2C3DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3DDCu;
    // 0x2c3de0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2819F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2819F0u, 0x2C3DDCu, 0x2C3DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3DE4u;
label_2c3de4:
    // 0x2c3de4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3DE4u;
    {
        const bool branch_taken_0x2c3de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3DE4u;
        // 0x2c3de8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3de4) {
            ctx->pc = 0x2C3DF8u;
            goto label_2c3df8;
        }
    }
    ctx->pc = 0x2C3DECu;
    // 0x2c3dec: 0x240200bf  addiu       $v0, $zero, 0xBF
    ctx->pc = 0x2c3decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
    // 0x2c3df0: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2C3DF0u;
    {
        const bool branch_taken_0x2c3df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3DF0u;
        // 0x2c3df4: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3df0) {
            ctx->pc = 0x2C3EDCu;
            goto label_2c3edc;
        }
    }
    ctx->pc = 0x2C3DF8u;
label_2c3df8:
    // 0x2c3df8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3dfc: 0xdfa60018  ld          $a2, 0x18($sp)
    ctx->pc = 0x2c3dfcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3e00: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c3e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3e04: 0xc0b0dec  jal         func_2C37B0
    ctx->pc = 0x2C3E04u;
    SET_GPR_U32(ctx, 31, 0x2C3E0Cu);
    ctx->pc = 0x2C3E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3E04u;
    // 0x2c3e08: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C37B0u;
    goto label_2c37b0;
    ctx->pc = 0x2C3E0Cu;
label_2c3e0c:
    // 0x2c3e0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3E0Cu;
    {
        const bool branch_taken_0x2c3e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E0Cu;
        // 0x2c3e10: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e0c) {
            ctx->pc = 0x2C3E20u;
            goto label_2c3e20;
        }
    }
    ctx->pc = 0x2C3E14u;
    // 0x2c3e14: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x2c3e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2c3e18: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2C3E18u;
    {
        const bool branch_taken_0x2c3e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E18u;
        // 0x2c3e1c: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e18) {
            ctx->pc = 0x2C3EDCu;
            goto label_2c3edc;
        }
    }
    ctx->pc = 0x2C3E20u;
label_2c3e20:
    // 0x2c3e20: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2c3e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2c3e24: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2c3e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c3e28: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c3e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3e2c: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x2c3e2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3e30: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x2c3e30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2c3e34: 0xafa60024  sw          $a2, 0x24($sp)
    ctx->pc = 0x2c3e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
    // 0x2c3e38: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x2c3e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x2c3e3c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c3e3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3e40: 0xc0b0970  jal         func_2C25C0
    ctx->pc = 0x2C3E40u;
    SET_GPR_U32(ctx, 31, 0x2C3E48u);
    ctx->pc = 0x2C3E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3E40u;
    // 0x2c3e44: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C25C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C25C0u, 0x2C3E40u, 0x2C3E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3E48u;
label_2c3e48:
    // 0x2c3e48: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3E48u;
    {
        const bool branch_taken_0x2c3e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E48u;
        // 0x2c3e4c: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e48) {
            ctx->pc = 0x2C3E5Cu;
            goto label_2c3e5c;
        }
    }
    ctx->pc = 0x2C3E50u;
    // 0x2c3e50: 0x240200c1  addiu       $v0, $zero, 0xC1
    ctx->pc = 0x2c3e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
    // 0x2c3e54: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2C3E54u;
    {
        const bool branch_taken_0x2c3e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E54u;
        // 0x2c3e58: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e54) {
            ctx->pc = 0x2C3EDCu;
            goto label_2c3edc;
        }
    }
    ctx->pc = 0x2C3E5Cu;
label_2c3e5c:
    // 0x2c3e5c: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2c3e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2c3e60: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2c3e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c3e64: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c3e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3e68: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x2c3e68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3e6c: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x2c3e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2c3e70: 0xafa60024  sw          $a2, 0x24($sp)
    ctx->pc = 0x2c3e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
    // 0x2c3e74: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x2c3e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x2c3e78: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c3e78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3e7c: 0xc09fc76  jal         func_27F1D8
    ctx->pc = 0x2C3E7Cu;
    SET_GPR_U32(ctx, 31, 0x2C3E84u);
    ctx->pc = 0x2C3E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3E7Cu;
    // 0x2c3e80: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F1D8u, 0x2C3E7Cu, 0x2C3E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3E84u;
label_2c3e84:
    // 0x2c3e84: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3E84u;
    {
        const bool branch_taken_0x2c3e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E84u;
        // 0x2c3e88: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e84) {
            ctx->pc = 0x2C3E98u;
            goto label_2c3e98;
        }
    }
    ctx->pc = 0x2C3E8Cu;
    // 0x2c3e8c: 0x240200c2  addiu       $v0, $zero, 0xC2
    ctx->pc = 0x2c3e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
    // 0x2c3e90: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2C3E90u;
    {
        const bool branch_taken_0x2c3e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E90u;
        // 0x2c3e94: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3e90) {
            ctx->pc = 0x2C3EDCu;
            goto label_2c3edc;
        }
    }
    ctx->pc = 0x2C3E98u;
label_2c3e98:
    // 0x2c3e98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c3e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3e9c: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x2c3e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c3ea0: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x2c3ea0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c3ea4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2c3ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c3ea8: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x2c3ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x2c3eac: 0xc0a065c  jal         func_281970
    ctx->pc = 0x2C3EACu;
    SET_GPR_U32(ctx, 31, 0x2C3EB4u);
    ctx->pc = 0x2C3EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3EACu;
    // 0x2c3eb0: 0xffa30018  sd          $v1, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281970u, 0x2C3EACu, 0x2C3EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3EB4u;
label_2c3eb4:
    // 0x2c3eb4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3EB4u;
    {
        const bool branch_taken_0x2c3eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3EB4u;
        // 0x2c3eb8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3eb4) {
            ctx->pc = 0x2C3EC8u;
            goto label_2c3ec8;
        }
    }
    ctx->pc = 0x2C3EBCu;
    // 0x2c3ebc: 0x240200c4  addiu       $v0, $zero, 0xC4
    ctx->pc = 0x2c3ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
    // 0x2c3ec0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C3EC0u;
    {
        const bool branch_taken_0x2c3ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3EC0u;
        // 0x2c3ec4: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3ec0) {
            ctx->pc = 0x2C3EDCu;
            goto label_2c3edc;
        }
    }
    ctx->pc = 0x2C3EC8u;
label_2c3ec8:
    // 0x2c3ec8: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C3EC8u;
    {
        const bool branch_taken_0x2c3ec8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3EC8u;
        // 0x2c3ecc: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3ec8) {
            ctx->pc = 0x2C3ED4u;
            goto label_2c3ed4;
        }
    }
    ctx->pc = 0x2C3ED0u;
    // 0x2c3ed0: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2c3ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_2c3ed4:
    // 0x2c3ed4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2C3ED4u;
    {
        const bool branch_taken_0x2c3ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3ED4u;
        // 0x2c3ed8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3ed4) {
            ctx->pc = 0x2C3F2Cu;
            goto label_2c3f2c;
        }
    }
    ctx->pc = 0x2C3EDCu;
label_2c3edc:
    // 0x2c3edc: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x2c3edcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2c3ee0:
    // 0x2c3ee0: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2c3ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2c3ee4: 0x240500a3  addiu       $a1, $zero, 0xA3
    ctx->pc = 0x2c3ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
label_2c3ee8:
    // 0x2c3ee8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c3ee8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3eec: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2C3EECu;
    SET_GPR_U32(ctx, 31, 0x2C3EF4u);
    ctx->pc = 0x2C3EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3EECu;
    // 0x2c3ef0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2C3EECu, 0x2C3EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3EF4u;
label_2c3ef4:
    // 0x2c3ef4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2c3ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c3ef8: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x2c3ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2c3efc: 0xc0a0738  jal         func_281CE0
    ctx->pc = 0x2C3EFCu;
    SET_GPR_U32(ctx, 31, 0x2C3F04u);
    ctx->pc = 0x2C3F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3EFCu;
    // 0x2c3f00: 0xa42823  subu        $a1, $a1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281CE0u, 0x2C3EFCu, 0x2C3F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3F04u;
label_2c3f04:
    // 0x2c3f04: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C3F04u;
    {
        const bool branch_taken_0x2c3f04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F04u;
        // 0x2c3f08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3f04) {
            ctx->pc = 0x2C3F2Cu;
            goto label_2c3f2c;
        }
    }
    ctx->pc = 0x2C3F0Cu;
    // 0x2c3f0c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3F0Cu;
    {
        const bool branch_taken_0x2c3f0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3f0c) {
            ctx->pc = 0x2C3F20u;
            goto label_2c3f20;
        }
    }
    ctx->pc = 0x2C3F14u;
    // 0x2c3f14: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c3f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c3f18: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3F18u;
    {
        const bool branch_taken_0x2c3f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2C3F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F18u;
        // 0x2c3f1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3f18) {
            ctx->pc = 0x2C3F2Cu;
            goto label_2c3f2c;
        }
    }
    ctx->pc = 0x2C3F20u;
label_2c3f20:
    // 0x2c3f20: 0xc0b1080  jal         func_2C4200
    ctx->pc = 0x2C3F20u;
    SET_GPR_U32(ctx, 31, 0x2C3F28u);
    ctx->pc = 0x2C3F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3F20u;
    // 0x2c3f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4200u, 0x2C3F20u, 0x2C3F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3F28u;
label_2c3f28:
    // 0x2c3f28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c3f28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3f2c:
    // 0x2c3f2c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2c3f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c3f30: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2c3f30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c3f34: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x2c3f34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c3f38: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2c3f38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c3f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F3Cu;
        // 0x2c3f40: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3F44u;
    // 0x2c3f44: 0x0  nop
    ctx->pc = 0x2c3f44u;
    // NOP
}
