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

// Function: sub_0028E5E0
// Address: 0x28e5e0 - 0x28e670
void sub_0028E5E0_0x28e5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E5E0_0x28e5e0");
#endif

    switch (ctx->pc) {
        case 0x28e5e0u: goto label_28e5e0;
        case 0x28e5e4u: goto label_28e5e4;
        case 0x28e5e8u: goto label_28e5e8;
        case 0x28e5ecu: goto label_28e5ec;
        case 0x28e5f0u: goto label_28e5f0;
        case 0x28e5f4u: goto label_28e5f4;
        case 0x28e5f8u: goto label_28e5f8;
        case 0x28e5fcu: goto label_28e5fc;
        case 0x28e600u: goto label_28e600;
        case 0x28e604u: goto label_28e604;
        case 0x28e608u: goto label_28e608;
        case 0x28e60cu: goto label_28e60c;
        case 0x28e610u: goto label_28e610;
        case 0x28e614u: goto label_28e614;
        case 0x28e618u: goto label_28e618;
        case 0x28e61cu: goto label_28e61c;
        case 0x28e620u: goto label_28e620;
        case 0x28e624u: goto label_28e624;
        case 0x28e628u: goto label_28e628;
        case 0x28e62cu: goto label_28e62c;
        case 0x28e630u: goto label_28e630;
        case 0x28e634u: goto label_28e634;
        case 0x28e638u: goto label_28e638;
        case 0x28e63cu: goto label_28e63c;
        case 0x28e640u: goto label_28e640;
        case 0x28e644u: goto label_28e644;
        case 0x28e648u: goto label_28e648;
        case 0x28e64cu: goto label_28e64c;
        case 0x28e650u: goto label_28e650;
        case 0x28e654u: goto label_28e654;
        case 0x28e658u: goto label_28e658;
        case 0x28e65cu: goto label_28e65c;
        case 0x28e660u: goto label_28e660;
        case 0x28e664u: goto label_28e664;
        case 0x28e668u: goto label_28e668;
        case 0x28e66cu: goto label_28e66c;
        default: break;
    }

    ctx->pc = 0x28e5e0u;

label_28e5e0:
    // 0x28e5e0: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28e5e4:
    // 0x28e5e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28e5e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28e5e8:
    // 0x28e5e8: 0x8c4245dc  lw          $v0, 0x45DC($v0)
    ctx->pc = 0x28e5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17884)));
label_28e5ec:
    // 0x28e5ec: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28e5f0:
    if (ctx->pc == 0x28E5F0u) {
        ctx->pc = 0x28E5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E5ECu;
        // 0x28e5f0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E5F4u;
        goto label_28e5f4;
    }
    ctx->pc = 0x28E5ECu;
    {
        const bool branch_taken_0x28e5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E5ECu;
        // 0x28e5f0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e5ec) {
            ctx->pc = 0x28E614u;
            goto label_28e614;
        }
    }
    ctx->pc = 0x28E5F4u;
label_28e5f4:
    // 0x28e5f4: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28e5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28e5f8:
    // 0x28e5f8: 0x24050077  addiu       $a1, $zero, 0x77
    ctx->pc = 0x28e5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_28e5fc:
    // 0x28e5fc: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28e5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28e600:
    // 0x28e600: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28e600u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e604:
    // 0x28e604: 0xc0a5648  jal         func_295920
label_28e608:
    if (ctx->pc == 0x28E608u) {
        ctx->pc = 0x28E608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E604u;
        // 0x28e608: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E60Cu;
        goto label_28e60c;
    }
    ctx->pc = 0x28E604u;
    SET_GPR_U32(ctx, 31, 0x28E60Cu);
    ctx->pc = 0x28E608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E604u;
    // 0x28e608: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x28E604u, 0x28E60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E60Cu;
label_28e60c:
    // 0x28e60c: 0x10000003  b           . + 4 + (0x3 << 2)
label_28e610:
    if (ctx->pc == 0x28E610u) {
        ctx->pc = 0x28E610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E60Cu;
        // 0x28e610: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E614u;
        goto label_28e614;
    }
    ctx->pc = 0x28E60Cu;
    {
        const bool branch_taken_0x28e60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E60Cu;
        // 0x28e610: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e60c) {
            ctx->pc = 0x28E61Cu;
            goto label_28e61c;
        }
    }
    ctx->pc = 0x28E614u;
label_28e614:
    // 0x28e614: 0x40f809  jalr        $v0
label_28e618:
    if (ctx->pc == 0x28E618u) {
        ctx->pc = 0x28E61Cu;
        goto label_28e61c;
    }
    ctx->pc = 0x28E614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28E61Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E614u, 0x28E61Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28E61Cu;
label_28e61c:
    // 0x28e61c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28e61cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28e620:
    // 0x28e620: 0x3e00008  jr          $ra
label_28e624:
    if (ctx->pc == 0x28E624u) {
        ctx->pc = 0x28E624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E620u;
        // 0x28e624: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E628u;
        goto label_28e628;
    }
    ctx->pc = 0x28E620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E620u;
        // 0x28e624: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E628u;
label_28e628:
    // 0x28e628: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28e62c:
    // 0x28e62c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28e62cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28e630:
    // 0x28e630: 0x8c4245e0  lw          $v0, 0x45E0($v0)
    ctx->pc = 0x28e630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17888)));
label_28e634:
    // 0x28e634: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28e638:
    if (ctx->pc == 0x28E638u) {
        ctx->pc = 0x28E638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E634u;
        // 0x28e638: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E63Cu;
        goto label_28e63c;
    }
    ctx->pc = 0x28E634u;
    {
        const bool branch_taken_0x28e634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E634u;
        // 0x28e638: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e634) {
            ctx->pc = 0x28E65Cu;
            goto label_28e65c;
        }
    }
    ctx->pc = 0x28E63Cu;
label_28e63c:
    // 0x28e63c: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28e63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28e640:
    // 0x28e640: 0x24050095  addiu       $a1, $zero, 0x95
    ctx->pc = 0x28e640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
label_28e644:
    // 0x28e644: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28e644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28e648:
    // 0x28e648: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28e648u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e64c:
    // 0x28e64c: 0xc0a5648  jal         func_295920
label_28e650:
    if (ctx->pc == 0x28E650u) {
        ctx->pc = 0x28E650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E64Cu;
        // 0x28e650: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E654u;
        goto label_28e654;
    }
    ctx->pc = 0x28E64Cu;
    SET_GPR_U32(ctx, 31, 0x28E654u);
    ctx->pc = 0x28E650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E64Cu;
    // 0x28e650: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x28E64Cu, 0x28E654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E654u;
label_28e654:
    // 0x28e654: 0x10000003  b           . + 4 + (0x3 << 2)
label_28e658:
    if (ctx->pc == 0x28E658u) {
        ctx->pc = 0x28E658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E654u;
        // 0x28e658: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E65Cu;
        goto label_28e65c;
    }
    ctx->pc = 0x28E654u;
    {
        const bool branch_taken_0x28e654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E654u;
        // 0x28e658: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e654) {
            ctx->pc = 0x28E664u;
            goto label_28e664;
        }
    }
    ctx->pc = 0x28E65Cu;
label_28e65c:
    // 0x28e65c: 0x40f809  jalr        $v0
label_28e660:
    if (ctx->pc == 0x28E660u) {
        ctx->pc = 0x28E664u;
        goto label_28e664;
    }
    ctx->pc = 0x28E65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28E664u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E65Cu, 0x28E664u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28E664u;
label_28e664:
    // 0x28e664: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28e664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28e668:
    // 0x28e668: 0x3e00008  jr          $ra
label_28e66c:
    if (ctx->pc == 0x28E66Cu) {
        ctx->pc = 0x28E66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E668u;
        // 0x28e66c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E670u;
        goto label_fallthrough_0x28e668;
    }
    ctx->pc = 0x28E668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E668u;
        // 0x28e66c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28e668:
    ctx->pc = 0x28E670u;
}
