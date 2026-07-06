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

// Function: sub_00343330
// Address: 0x343330 - 0x343460
void sub_00343330_0x343330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343330_0x343330");
#endif

    switch (ctx->pc) {
        case 0x343340u: goto label_343340;
        case 0x343348u: goto label_343348;
        case 0x343350u: goto label_343350;
        case 0x343358u: goto label_343358;
        case 0x343360u: goto label_343360;
        case 0x343368u: goto label_343368;
        case 0x343370u: goto label_343370;
        case 0x343378u: goto label_343378;
        case 0x343380u: goto label_343380;
        case 0x343388u: goto label_343388;
        case 0x343390u: goto label_343390;
        case 0x343398u: goto label_343398;
        case 0x3433b8u: goto label_3433b8;
        case 0x3433c0u: goto label_3433c0;
        case 0x3433c8u: goto label_3433c8;
        case 0x3433d0u: goto label_3433d0;
        case 0x3433d8u: goto label_3433d8;
        case 0x343400u: goto label_343400;
        case 0x343408u: goto label_343408;
        case 0x34341cu: goto label_34341c;
        case 0x34342cu: goto label_34342c;
        case 0x34344cu: goto label_34344c;
        default: break;
    }

    ctx->pc = 0x343330u;

    // 0x343330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x343330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x343334: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x343334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x343338: 0xc0c0d9c  jal         func_303670
    ctx->pc = 0x343338u;
    SET_GPR_U32(ctx, 31, 0x343340u);
    ctx->pc = 0x303670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303670u, 0x343338u, 0x343340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343340u;
label_343340:
    // 0x343340: 0xc0551c0  jal         func_154700
    ctx->pc = 0x343340u;
    SET_GPR_U32(ctx, 31, 0x343348u);
    ctx->pc = 0x154700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154700u, 0x343340u, 0x343348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343348u;
label_343348:
    // 0x343348: 0xc05d8bc  jal         func_1762F0
    ctx->pc = 0x343348u;
    SET_GPR_U32(ctx, 31, 0x343350u);
    ctx->pc = 0x1762F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1762F0u, 0x343348u, 0x343350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343350u;
label_343350:
    // 0x343350: 0xc05d7ac  jal         func_175EB0
    ctx->pc = 0x343350u;
    SET_GPR_U32(ctx, 31, 0x343358u);
    ctx->pc = 0x175EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175EB0u, 0x343350u, 0x343358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343358u;
label_343358:
    // 0x343358: 0xc06350c  jal         func_18D430
    ctx->pc = 0x343358u;
    SET_GPR_U32(ctx, 31, 0x343360u);
    ctx->pc = 0x18D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D430u, 0x343358u, 0x343360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343360u;
label_343360:
    // 0x343360: 0xc055684  jal         func_155A10
    ctx->pc = 0x343360u;
    SET_GPR_U32(ctx, 31, 0x343368u);
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x343360u, 0x343368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343368u;
label_343368:
    // 0x343368: 0xc064f58  jal         func_193D60
    ctx->pc = 0x343368u;
    SET_GPR_U32(ctx, 31, 0x343370u);
    ctx->pc = 0x193D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193D60u, 0x343368u, 0x343370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343370u;
label_343370:
    // 0x343370: 0xc05ce28  jal         func_1738A0
    ctx->pc = 0x343370u;
    SET_GPR_U32(ctx, 31, 0x343378u);
    ctx->pc = 0x1738A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1738A0u, 0x343370u, 0x343378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343378u;
label_343378:
    // 0x343378: 0xc05c5f4  jal         func_1717D0
    ctx->pc = 0x343378u;
    SET_GPR_U32(ctx, 31, 0x343380u);
    ctx->pc = 0x1717D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1717D0u, 0x343378u, 0x343380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343380u;
label_343380:
    // 0x343380: 0xc058f14  jal         func_163C50
    ctx->pc = 0x343380u;
    SET_GPR_U32(ctx, 31, 0x343388u);
    ctx->pc = 0x163C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C50u, 0x343380u, 0x343388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343388u;
label_343388:
    // 0x343388: 0xc065fe0  jal         func_197F80
    ctx->pc = 0x343388u;
    SET_GPR_U32(ctx, 31, 0x343390u);
    ctx->pc = 0x197F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197F80u, 0x343388u, 0x343390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343390u;
label_343390:
    // 0x343390: 0xc0690cc  jal         func_1A4330
    ctx->pc = 0x343390u;
    SET_GPR_U32(ctx, 31, 0x343398u);
    ctx->pc = 0x1A4330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4330u, 0x343390u, 0x343398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343398u;
label_343398:
    // 0x343398: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x343398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x34339c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x34339cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3433a0: 0xa040d9a8  sb          $zero, -0x2658($v0)
    ctx->pc = 0x3433a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957480), (uint8_t)GPR_U32(ctx, 0));
    // 0x3433a4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x3433a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x3433a8: 0xac4363c0  sw          $v1, 0x63C0($v0)
    ctx->pc = 0x3433a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25536), GPR_U32(ctx, 3));
    // 0x3433ac: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x3433acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x3433b0: 0xc0c0d90  jal         func_303640
    ctx->pc = 0x3433B0u;
    SET_GPR_U32(ctx, 31, 0x3433B8u);
    ctx->pc = 0x303640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303640u, 0x3433B0u, 0x3433B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3433B8u;
label_3433b8:
    // 0x3433b8: 0xc0c0db0  jal         func_3036C0
    ctx->pc = 0x3433B8u;
    SET_GPR_U32(ctx, 31, 0x3433C0u);
    ctx->pc = 0x3036C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3036C0u, 0x3433B8u, 0x3433C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3433C0u;
label_3433c0:
    // 0x3433c0: 0xc0c0db8  jal         func_3036E0
    ctx->pc = 0x3433C0u;
    SET_GPR_U32(ctx, 31, 0x3433C8u);
    ctx->pc = 0x3036E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3036E0u, 0x3433C0u, 0x3433C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3433C8u;
label_3433c8:
    // 0x3433c8: 0xc0692c0  jal         func_1A4B00
    ctx->pc = 0x3433C8u;
    SET_GPR_U32(ctx, 31, 0x3433D0u);
    ctx->pc = 0x1A4B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B00u, 0x3433C8u, 0x3433D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3433D0u;
label_3433d0:
    // 0x3433d0: 0xc0cb1f4  jal         func_32C7D0
    ctx->pc = 0x3433D0u;
    SET_GPR_U32(ctx, 31, 0x3433D8u);
    ctx->pc = 0x32C7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C7D0u, 0x3433D0u, 0x3433D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3433D8u;
label_3433d8:
    // 0x3433d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3433d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3433dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3433DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3433E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3433DCu;
        // 0x3433e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3433DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3433E4u;
    // 0x3433e4: 0x0  nop
    ctx->pc = 0x3433e4u;
    // NOP
    // 0x3433e8: 0x0  nop
    ctx->pc = 0x3433e8u;
    // NOP
    // 0x3433ec: 0x0  nop
    ctx->pc = 0x3433ecu;
    // NOP
    // 0x3433f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3433f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3433f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3433f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3433f8: 0xc0c353c  jal         func_30D4F0
    ctx->pc = 0x3433F8u;
    SET_GPR_U32(ctx, 31, 0x343400u);
    ctx->pc = 0x30D4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D4F0u, 0x3433F8u, 0x343400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343400u;
label_343400:
    // 0x343400: 0xc0828e8  jal         func_20A3A0
    ctx->pc = 0x343400u;
    SET_GPR_U32(ctx, 31, 0x343408u);
    ctx->pc = 0x20A3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A3A0u, 0x343400u, 0x343408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343408u;
label_343408:
    // 0x343408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x343408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34340c: 0x3e00008  jr          $ra
    ctx->pc = 0x34340Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34340Cu;
        // 0x343410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34340Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343414u;
    // 0x343414: 0x0  nop
    ctx->pc = 0x343414u;
    // NOP
    // 0x343418: 0x0  nop
    ctx->pc = 0x343418u;
    // NOP
label_34341c:
    // 0x34341c: 0x0  nop
    ctx->pc = 0x34341cu;
    // NOP
    // 0x343420: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x343420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x343424: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x343424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x343428: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x343428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_34342c:
    // 0x34342c: 0x8c644348  lw          $a0, 0x4348($v1)
    ctx->pc = 0x34342cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17224)));
    // 0x343430: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x343430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x343434: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x343434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x343438: 0x1c800004  bgtz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x343438u;
    {
        const bool branch_taken_0x343438 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x34343Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343438u;
        // 0x34343c: 0xac644348  sw          $a0, 0x4348($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 17224), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343438) {
            ctx->pc = 0x34344Cu;
            goto label_34344c;
        }
    }
    ctx->pc = 0x343440u;
    // 0x343440: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x343440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x343444: 0xc082674  jal         func_2099D0
    ctx->pc = 0x343444u;
    SET_GPR_U32(ctx, 31, 0x34344Cu);
    ctx->pc = 0x343448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343444u;
    // 0x343448: 0x8c44f78c  lw          $a0, -0x874($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x343444u, 0x34344Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34344Cu;
label_34344c:
    // 0x34344c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34344cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343450: 0x3e00008  jr          $ra
    ctx->pc = 0x343450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343450u;
        // 0x343454: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343458u;
    // 0x343458: 0x0  nop
    ctx->pc = 0x343458u;
    // NOP
    // 0x34345c: 0x0  nop
    ctx->pc = 0x34345cu;
    // NOP
}
