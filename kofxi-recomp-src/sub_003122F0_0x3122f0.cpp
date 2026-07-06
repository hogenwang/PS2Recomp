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

// Function: sub_003122F0
// Address: 0x3122f0 - 0x312490
void sub_003122F0_0x3122f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003122F0_0x3122f0");
#endif

    switch (ctx->pc) {
        case 0x312340u: goto label_312340;
        case 0x312380u: goto label_312380;
        case 0x31238cu: goto label_31238c;
        case 0x3123b0u: goto label_3123b0;
        case 0x3123b8u: goto label_3123b8;
        case 0x3123e0u: goto label_3123e0;
        case 0x3123f0u: goto label_3123f0;
        case 0x3123fcu: goto label_3123fc;
        case 0x312420u: goto label_312420;
        case 0x312428u: goto label_312428;
        case 0x312430u: goto label_312430;
        case 0x312458u: goto label_312458;
        case 0x31246cu: goto label_31246c;
        case 0x312478u: goto label_312478;
        case 0x312480u: goto label_312480;
        default: break;
    }

    ctx->pc = 0x3122f0u;

label_3122f0:
    // 0x3122f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3122f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3122f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3122f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3122f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3122f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3122fc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3122fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x312300: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x312300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x312304: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x312304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x312308: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x312308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x31230c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31230cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312310: 0x244208f0  addiu       $v0, $v0, 0x8F0
    ctx->pc = 0x312310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2288));
    // 0x312314: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x312314u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312318: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x312318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x31231c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31231cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312320: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x312320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x312324: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x312324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x312328: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x312328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x31232c: 0x244208e0  addiu       $v0, $v0, 0x8E0
    ctx->pc = 0x31232cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2272));
    // 0x312330: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x312330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x312334: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x312334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x312338: 0xc09cdb6  jal         func_2736D8
    ctx->pc = 0x312338u;
    SET_GPR_U32(ctx, 31, 0x312340u);
    ctx->pc = 0x31233Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312338u;
    // 0x31233c: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2736D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2736D8u, 0x312338u, 0x312340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312340u;
label_312340:
    // 0x312340: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x312340u;
    {
        const bool branch_taken_0x312340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x312340) {
            ctx->pc = 0x312344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312340u;
            // 0x312344: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312358u;
            goto label_312358;
        }
    }
    ctx->pc = 0x312348u;
    // 0x312348: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x312348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31234c: 0xb8030001  swr         $v1, 0x1($zero)
    ctx->pc = 0x31234cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x312350: 0xa8030004  swl         $v1, 0x4($zero)
    ctx->pc = 0x312350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x312354: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x312354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_312358:
    // 0x312358: 0x3e00008  jr          $ra
    ctx->pc = 0x312358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31235Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312358u;
        // 0x31235c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312360u;
    // 0x312360: 0x80828f0  j           func_20A3C0
    ctx->pc = 0x312360u;
    ctx->pc = 0x20A3C0u;
    sub_0020A3C0_0x20a3c0(rdram, ctx, runtime); return;
    ctx->pc = 0x312368u;
    // 0x312368: 0x0  nop
    ctx->pc = 0x312368u;
    // NOP
    // 0x31236c: 0x0  nop
    ctx->pc = 0x31236cu;
    // NOP
    // 0x312370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x312370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x312374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x312374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x312378: 0xc0828f0  jal         func_20A3C0
    ctx->pc = 0x312378u;
    SET_GPR_U32(ctx, 31, 0x312380u);
    ctx->pc = 0x20A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A3C0u, 0x312378u, 0x312380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312380u;
label_312380:
    // 0x312380: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x312380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x312384: 0xc082908  jal         func_20A420
    ctx->pc = 0x312384u;
    SET_GPR_U32(ctx, 31, 0x31238Cu);
    ctx->pc = 0x312388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312384u;
    // 0x312388: 0x8c444378  lw          $a0, 0x4378($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A420u, 0x312384u, 0x31238Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31238Cu;
label_31238c:
    // 0x31238c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31238cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x312390: 0x3e00008  jr          $ra
    ctx->pc = 0x312390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312390u;
        // 0x312394: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312398u;
    // 0x312398: 0x0  nop
    ctx->pc = 0x312398u;
    // NOP
    // 0x31239c: 0x0  nop
    ctx->pc = 0x31239cu;
    // NOP
    // 0x3123a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3123a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3123a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3123a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3123a8: 0xc0828f0  jal         func_20A3C0
    ctx->pc = 0x3123A8u;
    SET_GPR_U32(ctx, 31, 0x3123B0u);
    ctx->pc = 0x20A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A3C0u, 0x3123A8u, 0x3123B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3123B0u;
label_3123b0:
    // 0x3123b0: 0xc082900  jal         func_20A400
    ctx->pc = 0x3123B0u;
    SET_GPR_U32(ctx, 31, 0x3123B8u);
    ctx->pc = 0x20A400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A400u, 0x3123B0u, 0x3123B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3123B8u;
label_3123b8:
    // 0x3123b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3123b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3123bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3123BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3123C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3123BCu;
        // 0x3123c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3123BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3123C4u;
    // 0x3123c4: 0x0  nop
    ctx->pc = 0x3123c4u;
    // NOP
    // 0x3123c8: 0x0  nop
    ctx->pc = 0x3123c8u;
    // NOP
    // 0x3123cc: 0x0  nop
    ctx->pc = 0x3123ccu;
    // NOP
    // 0x3123d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3123d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3123d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3123d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3123d8: 0xc069204  jal         func_1A4810
    ctx->pc = 0x3123D8u;
    SET_GPR_U32(ctx, 31, 0x3123E0u);
    ctx->pc = 0x3123DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3123D8u;
    // 0x3123dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4810u, 0x3123D8u, 0x3123E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3123E0u;
label_3123e0:
    // 0x3123e0: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x3123e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x3123e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3123e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3123e8: 0xc082678  jal         func_2099E0
    ctx->pc = 0x3123E8u;
    SET_GPR_U32(ctx, 31, 0x3123F0u);
    ctx->pc = 0x3123ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3123E8u;
    // 0x3123ec: 0x24842360  addiu       $a0, $a0, 0x2360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x3123E8u, 0x3123F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3123F0u;
label_3123f0:
    // 0x3123f0: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x3123f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x3123f4: 0xc082674  jal         func_2099D0
    ctx->pc = 0x3123F4u;
    SET_GPR_U32(ctx, 31, 0x3123FCu);
    ctx->pc = 0x3123F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3123F4u;
    // 0x3123f8: 0x24842410  addiu       $a0, $a0, 0x2410 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x3123F4u, 0x3123FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3123FCu;
label_3123fc:
    // 0x3123fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3123fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x312400: 0x3e00008  jr          $ra
    ctx->pc = 0x312400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312400u;
        // 0x312404: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312408u;
    // 0x312408: 0x0  nop
    ctx->pc = 0x312408u;
    // NOP
    // 0x31240c: 0x0  nop
    ctx->pc = 0x31240cu;
    // NOP
    // 0x312410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x312410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x312414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x312414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x312418: 0xc0c48bc  jal         func_3122F0
    ctx->pc = 0x312418u;
    SET_GPR_U32(ctx, 31, 0x312420u);
    ctx->pc = 0x3122F0u;
    goto label_3122f0;
    ctx->pc = 0x312420u;
label_312420:
    // 0x312420: 0xc047062  jal         func_11C188
    ctx->pc = 0x312420u;
    SET_GPR_U32(ctx, 31, 0x312428u);
    ctx->pc = 0x312424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312420u;
    // 0x312424: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C188u, 0x312420u, 0x312428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312428u;
label_312428:
    // 0x312428: 0xc09d07a  jal         func_2741E8
    ctx->pc = 0x312428u;
    SET_GPR_U32(ctx, 31, 0x312430u);
    ctx->pc = 0x2741E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2741E8u, 0x312428u, 0x312430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312430u;
label_312430:
    // 0x312430: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x312430u;
    {
        const bool branch_taken_0x312430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x312430) {
            ctx->pc = 0x312444u;
            goto label_312444;
        }
    }
    ctx->pc = 0x312438u;
    // 0x312438: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x312438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31243c: 0xb8020001  swr         $v0, 0x1($zero)
    ctx->pc = 0x31243cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x312440: 0xa8020004  swl         $v0, 0x4($zero)
    ctx->pc = 0x312440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_312444:
    // 0x312444: 0x3c0401da  lui         $a0, 0x1DA
    ctx->pc = 0x312444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)474 << 16));
    // 0x312448: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x312448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31244c: 0x248429d0  addiu       $a0, $a0, 0x29D0
    ctx->pc = 0x31244cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10704));
    // 0x312450: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x312450u;
    SET_GPR_U32(ctx, 31, 0x312458u);
    ctx->pc = 0x312454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312450u;
    // 0x312454: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x312450u, 0x312458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312458u;
label_312458:
    // 0x312458: 0x3c0401da  lui         $a0, 0x1DA
    ctx->pc = 0x312458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)474 << 16));
    // 0x31245c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31245cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312460: 0x248429c0  addiu       $a0, $a0, 0x29C0
    ctx->pc = 0x312460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10688));
    // 0x312464: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x312464u;
    SET_GPR_U32(ctx, 31, 0x31246Cu);
    ctx->pc = 0x312468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312464u;
    // 0x312468: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x312464u, 0x31246Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31246Cu;
label_31246c:
    // 0x31246c: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x31246cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x312470: 0xc082674  jal         func_2099D0
    ctx->pc = 0x312470u;
    SET_GPR_U32(ctx, 31, 0x312478u);
    ctx->pc = 0x312474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312470u;
    // 0x312474: 0x24842490  addiu       $a0, $a0, 0x2490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x312470u, 0x312478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312478u;
label_312478:
    // 0x312478: 0xc0c4924  jal         func_312490
    ctx->pc = 0x312478u;
    SET_GPR_U32(ctx, 31, 0x312480u);
    ctx->pc = 0x312490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312490u, 0x312478u, 0x312480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312480u;
label_312480:
    // 0x312480: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x312480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x312484: 0x3e00008  jr          $ra
    ctx->pc = 0x312484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312484u;
        // 0x312488: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31248Cu;
    // 0x31248c: 0x0  nop
    ctx->pc = 0x31248cu;
    // NOP
}
