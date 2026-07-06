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

// Function: sub_001DD358
// Address: 0x1dd358 - 0x1dd428
void sub_001DD358_0x1dd358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD358_0x1dd358");
#endif

    switch (ctx->pc) {
        case 0x1dd400u: goto label_1dd400;
        case 0x1dd410u: goto label_1dd410;
        case 0x1dd41cu: goto label_1dd41c;
        default: break;
    }

    ctx->pc = 0x1dd358u;

    // 0x1dd358: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dd358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dd35c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1dd35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1dd360: 0x8c8603c0  lw          $a2, 0x3C0($a0)
    ctx->pc = 0x1dd360u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 960)));
    // 0x1dd364: 0x10c0002d  beqz        $a2, . + 4 + (0x2D << 2)
    ctx->pc = 0x1DD364u;
    {
        const bool branch_taken_0x1dd364 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD364u;
        // 0x1dd368: 0x8c87003c  lw          $a3, 0x3C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd364) {
            ctx->pc = 0x1DD41Cu;
            goto label_1dd41c;
        }
    }
    ctx->pc = 0x1DD36Cu;
    // 0x1dd36c: 0x8c8203e4  lw          $v0, 0x3E4($a0)
    ctx->pc = 0x1dd36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 996)));
    // 0x1dd370: 0x54c2000b  bnel        $a2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1DD370u;
    {
        const bool branch_taken_0x1dd370 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dd370) {
            ctx->pc = 0x1DD374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD370u;
            // 0x1dd374: 0x8c8203c4  lw          $v0, 0x3C4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 964)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD3A0u;
            goto label_1dd3a0;
        }
    }
    ctx->pc = 0x1DD378u;
    // 0x1dd378: 0x8c8203ec  lw          $v0, 0x3EC($a0)
    ctx->pc = 0x1dd378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1004)));
    // 0x1dd37c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dd37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd380: 0x8c8403e8  lw          $a0, 0x3E8($a0)
    ctx->pc = 0x1dd380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1000)));
    // 0x1dd384: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x1dd384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x1dd388: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1dd388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1dd38c: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x1dd38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x1dd390: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x1dd390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x1dd394: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1DD394u;
    {
        const bool branch_taken_0x1dd394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD394u;
        // 0x1dd398: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd394) {
            ctx->pc = 0x1DD3F0u;
            goto label_1dd3f0;
        }
    }
    ctx->pc = 0x1DD39Cu;
    // 0x1dd39c: 0x0  nop
    ctx->pc = 0x1dd39cu;
    // NOP
label_1dd3a0:
    // 0x1dd3a0: 0x54c2000b  bnel        $a2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1DD3A0u;
    {
        const bool branch_taken_0x1dd3a0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dd3a0) {
            ctx->pc = 0x1DD3A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD3A0u;
            // 0x1dd3a4: 0x8c8203d4  lw          $v0, 0x3D4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 980)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD3D0u;
            goto label_1dd3d0;
        }
    }
    ctx->pc = 0x1DD3A8u;
    // 0x1dd3a8: 0x8c8203d0  lw          $v0, 0x3D0($a0)
    ctx->pc = 0x1dd3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 976)));
    // 0x1dd3ac: 0x8c8303c8  lw          $v1, 0x3C8($a0)
    ctx->pc = 0x1dd3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 968)));
    // 0x1dd3b0: 0x8c8403cc  lw          $a0, 0x3CC($a0)
    ctx->pc = 0x1dd3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 972)));
    // 0x1dd3b4: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x1dd3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x1dd3b8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1dd3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1dd3bc: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x1dd3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x1dd3c0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1dd3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1dd3c4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1DD3C4u;
    {
        const bool branch_taken_0x1dd3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD3C4u;
        // 0x1dd3c8: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd3c4) {
            ctx->pc = 0x1DD3F0u;
            goto label_1dd3f0;
        }
    }
    ctx->pc = 0x1DD3CCu;
    // 0x1dd3cc: 0x0  nop
    ctx->pc = 0x1dd3ccu;
    // NOP
label_1dd3d0:
    // 0x1dd3d0: 0x8c8503e0  lw          $a1, 0x3E0($a0)
    ctx->pc = 0x1dd3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 992)));
    // 0x1dd3d4: 0x8c8303d8  lw          $v1, 0x3D8($a0)
    ctx->pc = 0x1dd3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 984)));
    // 0x1dd3d8: 0x8c8403dc  lw          $a0, 0x3DC($a0)
    ctx->pc = 0x1dd3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 988)));
    // 0x1dd3dc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1dd3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1dd3e0: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x1dd3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x1dd3e4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1dd3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1dd3e8: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x1dd3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x1dd3ec: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1dd3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
label_1dd3f0:
    // 0x1dd3f0: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1dd3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1dd3f4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1dd3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd3f8: 0xc07e688  jal         func_1F9A20
    ctx->pc = 0x1DD3F8u;
    SET_GPR_U32(ctx, 31, 0x1DD400u);
    ctx->pc = 0x1DD3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD3F8u;
    // 0x1dd3fc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9A20u, 0x1DD3F8u, 0x1DD400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD400u;
label_1dd400:
    // 0x1dd400: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DD400u;
    {
        const bool branch_taken_0x1dd400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD400u;
        // 0x1dd404: 0x2404fec8  addiu       $a0, $zero, -0x138 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd400) {
            ctx->pc = 0x1DD41Cu;
            goto label_1dd41c;
        }
    }
    ctx->pc = 0x1DD408u;
    // 0x1dd408: 0xc078328  jal         func_1E0CA0
    ctx->pc = 0x1DD408u;
    SET_GPR_U32(ctx, 31, 0x1DD410u);
    ctx->pc = 0x1E0CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0CA0u, 0x1DD408u, 0x1DD410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD410u;
label_1dd410:
    // 0x1dd410: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1dd410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1dd414: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1DD414u;
    SET_GPR_U32(ctx, 31, 0x1DD41Cu);
    ctx->pc = 0x1DD418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD414u;
    // 0x1dd418: 0x2484c458  addiu       $a0, $a0, -0x3BA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1DD414u, 0x1DD41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD41Cu;
label_1dd41c:
    // 0x1dd41c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1dd41cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd420: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD420u;
        // 0x1dd424: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD428u;
}
