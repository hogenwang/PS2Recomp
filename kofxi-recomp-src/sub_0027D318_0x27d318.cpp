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

// Function: sub_0027D318
// Address: 0x27d318 - 0x27d3f8
void sub_0027D318_0x27d318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027D318_0x27d318");
#endif

    switch (ctx->pc) {
        case 0x27d350u: goto label_27d350;
        case 0x27d358u: goto label_27d358;
        case 0x27d3d8u: goto label_27d3d8;
        default: break;
    }

    ctx->pc = 0x27d318u;

    // 0x27d318: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x27d318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x27d31c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27d31cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27d320: 0x2c820006  sltiu       $v0, $a0, 0x6
    ctx->pc = 0x27d320u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x27d324: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x27D324u;
    {
        const bool branch_taken_0x27d324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D324u;
        // 0x27d328: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d324) {
            ctx->pc = 0x27D390u;
            goto label_27d390;
        }
    }
    ctx->pc = 0x27D32Cu;
    // 0x27d32c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x27d32cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x27d330: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x27d330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x27d334: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27d334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27d338: 0x8c63a240  lw          $v1, -0x5DC0($v1)
    ctx->pc = 0x27d338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943296)));
    // 0x27d33c: 0x600008  jr          $v1
    ctx->pc = 0x27D33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27D348u: goto label_27d348;
            case 0x27D370u: goto label_27d370;
            case 0x27D378u: goto label_27d378;
            case 0x27D380u: goto label_27d380;
            case 0x27D388u: goto label_27d388;
            case 0x27D390u: goto label_27d390;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D33Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27D344u;
    // 0x27d344: 0x0  nop
    ctx->pc = 0x27d344u;
    // NOP
label_27d348:
    // 0x27d348: 0xc0bf0fc  jal         func_2FC3F0
    ctx->pc = 0x27D348u;
    SET_GPR_U32(ctx, 31, 0x27D350u);
    ctx->pc = 0x2FC3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC3F0u, 0x27D348u, 0x27D350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D350u;
label_27d350:
    // 0x27d350: 0xc09f4a6  jal         func_27D298
    ctx->pc = 0x27D350u;
    SET_GPR_U32(ctx, 31, 0x27D358u);
    ctx->pc = 0x27D354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D350u;
    // 0x27d354: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D298u, 0x27D350u, 0x27D358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D358u;
label_27d358:
    // 0x27d358: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x27d358u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d35c: 0x2402fd8f  addiu       $v0, $zero, -0x271
    ctx->pc = 0x27d35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966671));
    // 0x27d360: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27D360u;
    {
        const bool branch_taken_0x27d360 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27D364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D360u;
        // 0x27d364: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d360) {
            ctx->pc = 0x27D398u;
            goto label_27d398;
        }
    }
    ctx->pc = 0x27D368u;
    // 0x27d368: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27D368u;
    {
        const bool branch_taken_0x27d368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D368u;
        // 0x27d36c: 0x2403fd99  addiu       $v1, $zero, -0x267 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966681));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d368) {
            ctx->pc = 0x27D398u;
            goto label_27d398;
        }
    }
    ctx->pc = 0x27D370u;
label_27d370:
    // 0x27d370: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27D370u;
    {
        const bool branch_taken_0x27d370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D370u;
        // 0x27d374: 0x2403fd9d  addiu       $v1, $zero, -0x263 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966685));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d370) {
            ctx->pc = 0x27D394u;
            goto label_27d394;
        }
    }
    ctx->pc = 0x27D378u;
label_27d378:
    // 0x27d378: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27D378u;
    {
        const bool branch_taken_0x27d378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D378u;
        // 0x27d37c: 0x2403fd9c  addiu       $v1, $zero, -0x264 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966684));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d378) {
            ctx->pc = 0x27D394u;
            goto label_27d394;
        }
    }
    ctx->pc = 0x27D380u;
label_27d380:
    // 0x27d380: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27D380u;
    {
        const bool branch_taken_0x27d380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D380u;
        // 0x27d384: 0x2403fd9b  addiu       $v1, $zero, -0x265 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966683));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d380) {
            ctx->pc = 0x27D394u;
            goto label_27d394;
        }
    }
    ctx->pc = 0x27D388u;
label_27d388:
    // 0x27d388: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27D388u;
    {
        const bool branch_taken_0x27d388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D388u;
        // 0x27d38c: 0x2403fd9a  addiu       $v1, $zero, -0x266 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966682));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d388) {
            ctx->pc = 0x27D394u;
            goto label_27d394;
        }
    }
    ctx->pc = 0x27D390u;
label_27d390:
    // 0x27d390: 0x2403fd99  addiu       $v1, $zero, -0x267
    ctx->pc = 0x27d390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966681));
label_27d394:
    // 0x27d394: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27d394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27d398:
    // 0x27d398: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x27d398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d39c: 0x3e00008  jr          $ra
    ctx->pc = 0x27D39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D39Cu;
        // 0x27d3a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D39Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27D3A4u;
    // 0x27d3a4: 0x0  nop
    ctx->pc = 0x27d3a4u;
    // NOP
    // 0x27d3a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27d3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27d3ac: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x27d3acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d3b0: 0x3c0401c9  lui         $a0, 0x1C9
    ctx->pc = 0x27d3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)457 << 16));
    // 0x27d3b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27d3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27d3b8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x27d3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x27d3bc: 0x24843c50  addiu       $a0, $a0, 0x3C50
    ctx->pc = 0x27d3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15440));
    // 0x27d3c0: 0x30b0ffff  andi        $s0, $a1, 0xFFFF
    ctx->pc = 0x27d3c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x27d3c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27d3c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d3c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27d3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d3cc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x27d3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x27d3d0: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x27D3D0u;
    SET_GPR_U32(ctx, 31, 0x27D3D8u);
    ctx->pc = 0x27D3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D3D0u;
    // 0x27d3d4: 0xac623538  sw          $v0, 0x3538($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 13624), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x27D3D0u, 0x27D3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D3D8u;
label_27d3d8:
    // 0x27d3d8: 0x3c0301c9  lui         $v1, 0x1C9
    ctx->pc = 0x27d3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)457 << 16));
    // 0x27d3dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x27d3dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27d3e0: 0xa4703e50  sh          $s0, 0x3E50($v1)
    ctx->pc = 0x27d3e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 15952), (uint16_t)GPR_U32(ctx, 16));
    // 0x27d3e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27d3e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d3e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27d3e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d3ec: 0x3e00008  jr          $ra
    ctx->pc = 0x27D3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D3ECu;
        // 0x27d3f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D3ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27D3F4u;
    // 0x27d3f4: 0x0  nop
    ctx->pc = 0x27d3f4u;
    // NOP
    if (ctx->pc == 0x27d3f4u) { ctx->pc = 0x27d3f8u; }
}
