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

// Function: sub_002BAD18
// Address: 0x2bad18 - 0x2badb8
void sub_002BAD18_0x2bad18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BAD18_0x2bad18");
#endif

    switch (ctx->pc) {
        case 0x2bad6cu: goto label_2bad6c;
        case 0x2bad88u: goto label_2bad88;
        case 0x2bada8u: goto label_2bada8;
        default: break;
    }

    ctx->pc = 0x2bad18u;

    // 0x2bad18: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAD18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAD18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAD20u;
    // 0x2bad20: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAD20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD20u;
        // 0x2bad24: 0x8c8200b0  lw          $v0, 0xB0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAD20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAD28u;
    // 0x2bad28: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2bad28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2bad2c: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x2bad2cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bad30: 0x8c647cd0  lw          $a0, 0x7CD0($v1)
    ctx->pc = 0x2bad30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31952)));
    // 0x2bad34: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x2bad34u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bad38: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x2bad38u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bad3c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bad3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bad40: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2bad40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bad44: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x2bad44u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bad48: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2bad48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2bad4c: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2bad4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2bad50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bad50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bad54: 0x24a57cd4  addiu       $a1, $a1, 0x7CD4
    ctx->pc = 0x2bad54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31956));
    // 0x2bad58: 0xac627cd0  sw          $v0, 0x7CD0($v1)
    ctx->pc = 0x2bad58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 31952), GPR_U32(ctx, 2));
    // 0x2bad5c: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x2bad5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bad60: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x2bad60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bad64: 0xc0a5c86  jal         func_297218
    ctx->pc = 0x2BAD64u;
    SET_GPR_U32(ctx, 31, 0x2BAD6Cu);
    ctx->pc = 0x2BAD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAD64u;
    // 0x2bad68: 0x180402d  daddu       $t0, $t4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297218u, 0x2BAD64u, 0x2BAD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAD6Cu;
label_2bad6c:
    // 0x2bad6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bad6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bad70: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAD70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD70u;
        // 0x2bad74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAD70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAD78u;
    // 0x2bad78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bad78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bad7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bad7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bad80: 0xc0a5cd6  jal         func_297358
    ctx->pc = 0x2BAD80u;
    SET_GPR_U32(ctx, 31, 0x2BAD88u);
    ctx->pc = 0x2BAD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAD80u;
    // 0x2bad84: 0x248400bc  addiu       $a0, $a0, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297358u, 0x2BAD80u, 0x2BAD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAD88u;
label_2bad88:
    // 0x2bad88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bad88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bad8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAD8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD8Cu;
        // 0x2bad90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAD8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAD94u;
    // 0x2bad94: 0x0  nop
    ctx->pc = 0x2bad94u;
    // NOP
    // 0x2bad98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bad98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bad9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bad9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bada0: 0xc0a5d12  jal         func_297448
    ctx->pc = 0x2BADA0u;
    SET_GPR_U32(ctx, 31, 0x2BADA8u);
    ctx->pc = 0x2BADA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BADA0u;
    // 0x2bada4: 0x248400bc  addiu       $a0, $a0, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297448u, 0x2BADA0u, 0x2BADA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BADA8u;
label_2bada8:
    // 0x2bada8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bada8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2badac: 0x3e00008  jr          $ra
    ctx->pc = 0x2BADACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BADACu;
        // 0x2badb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BADACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BADB4u;
    // 0x2badb4: 0x0  nop
    ctx->pc = 0x2badb4u;
    // NOP
    if (ctx->pc == 0x2badb4u) { ctx->pc = 0x2badb8u; }
}
