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

// Function: sub_002A9710
// Address: 0x2a9710 - 0x2a9780
void sub_002A9710_0x2a9710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9710_0x2a9710");
#endif

    switch (ctx->pc) {
        case 0x2a9710u: goto label_2a9710;
        case 0x2a9714u: goto label_2a9714;
        case 0x2a9718u: goto label_2a9718;
        case 0x2a971cu: goto label_2a971c;
        case 0x2a9720u: goto label_2a9720;
        case 0x2a9724u: goto label_2a9724;
        case 0x2a9728u: goto label_2a9728;
        case 0x2a972cu: goto label_2a972c;
        case 0x2a9730u: goto label_2a9730;
        case 0x2a9734u: goto label_2a9734;
        case 0x2a9738u: goto label_2a9738;
        case 0x2a973cu: goto label_2a973c;
        case 0x2a9740u: goto label_2a9740;
        case 0x2a9744u: goto label_2a9744;
        case 0x2a9748u: goto label_2a9748;
        case 0x2a974cu: goto label_2a974c;
        case 0x2a9750u: goto label_2a9750;
        case 0x2a9754u: goto label_2a9754;
        case 0x2a9758u: goto label_2a9758;
        case 0x2a975cu: goto label_2a975c;
        case 0x2a9760u: goto label_2a9760;
        case 0x2a9764u: goto label_2a9764;
        case 0x2a9768u: goto label_2a9768;
        case 0x2a976cu: goto label_2a976c;
        case 0x2a9770u: goto label_2a9770;
        case 0x2a9774u: goto label_2a9774;
        case 0x2a9778u: goto label_2a9778;
        case 0x2a977cu: goto label_2a977c;
        default: break;
    }

    ctx->pc = 0x2a9710u;

label_2a9710:
    // 0x2a9710: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a9710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2a9714:
    // 0x2a9714: 0x3e00008  jr          $ra
label_2a9718:
    if (ctx->pc == 0x2A9718u) {
        ctx->pc = 0x2A9718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9714u;
        // 0x2a9718: 0xac446ab4  sw          $a0, 0x6AB4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 27316), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A971Cu;
        goto label_2a971c;
    }
    ctx->pc = 0x2A9714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9714u;
        // 0x2a9718: 0xac446ab4  sw          $a0, 0x6AB4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 27316), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A971Cu;
label_2a971c:
    // 0x2a971c: 0x0  nop
    ctx->pc = 0x2a971cu;
    // NOP
label_2a9720:
    // 0x2a9720: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a9720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2a9724:
    // 0x2a9724: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a9724u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a9728:
    // 0x2a9728: 0x8c436aac  lw          $v1, 0x6AAC($v0)
    ctx->pc = 0x2a9728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27308)));
label_2a972c:
    // 0x2a972c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a972cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a9730:
    // 0x2a9730: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2a9734:
    if (ctx->pc == 0x2A9734u) {
        ctx->pc = 0x2A9734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9730u;
        // 0x2a9734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9738u;
        goto label_2a9738;
    }
    ctx->pc = 0x2A9730u;
    {
        const bool branch_taken_0x2a9730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9730u;
        // 0x2a9734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9730) {
            ctx->pc = 0x2A9740u;
            goto label_2a9740;
        }
    }
    ctx->pc = 0x2A9738u;
label_2a9738:
    // 0x2a9738: 0x60f809  jalr        $v1
label_2a973c:
    if (ctx->pc == 0x2A973Cu) {
        ctx->pc = 0x2A9740u;
        goto label_2a9740;
    }
    ctx->pc = 0x2A9738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2A9740u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9738u, 0x2A9740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A9740u;
label_2a9740:
    // 0x2a9740: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a9740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a9744:
    // 0x2a9744: 0x3e00008  jr          $ra
label_2a9748:
    if (ctx->pc == 0x2A9748u) {
        ctx->pc = 0x2A9748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9744u;
        // 0x2a9748: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A974Cu;
        goto label_2a974c;
    }
    ctx->pc = 0x2A9744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9744u;
        // 0x2a9748: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A974Cu;
label_2a974c:
    // 0x2a974c: 0x0  nop
    ctx->pc = 0x2a974cu;
    // NOP
label_2a9750:
    // 0x2a9750: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a9750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2a9754:
    // 0x2a9754: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a9754u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a9758:
    // 0x2a9758: 0x8c436ab4  lw          $v1, 0x6AB4($v0)
    ctx->pc = 0x2a9758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27316)));
label_2a975c:
    // 0x2a975c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a975cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a9760:
    // 0x2a9760: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2a9764:
    if (ctx->pc == 0x2A9764u) {
        ctx->pc = 0x2A9764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9760u;
        // 0x2a9764: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A9768u;
        goto label_2a9768;
    }
    ctx->pc = 0x2A9760u;
    {
        const bool branch_taken_0x2a9760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9760u;
        // 0x2a9764: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9760) {
            ctx->pc = 0x2A9770u;
            goto label_2a9770;
        }
    }
    ctx->pc = 0x2A9768u;
label_2a9768:
    // 0x2a9768: 0x60f809  jalr        $v1
label_2a976c:
    if (ctx->pc == 0x2A976Cu) {
        ctx->pc = 0x2A9770u;
        goto label_2a9770;
    }
    ctx->pc = 0x2A9768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2A9770u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9768u, 0x2A9770u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A9770u;
label_2a9770:
    // 0x2a9770: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a9770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a9774:
    // 0x2a9774: 0x3e00008  jr          $ra
label_2a9778:
    if (ctx->pc == 0x2A9778u) {
        ctx->pc = 0x2A9778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9774u;
        // 0x2a9778: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A977Cu;
        goto label_2a977c;
    }
    ctx->pc = 0x2A9774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9774u;
        // 0x2a9778: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A977Cu;
label_2a977c:
    // 0x2a977c: 0x0  nop
    ctx->pc = 0x2a977cu;
    // NOP
    if (ctx->pc == 0x2a977cu) { ctx->pc = 0x2a9780u; }
}
