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

// Function: sub_0025CD40
// Address: 0x25cd40 - 0x25cd80
void sub_0025CD40_0x25cd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CD40_0x25cd40");
#endif

    switch (ctx->pc) {
        case 0x25cd64u: goto label_25cd64;
        default: break;
    }

    ctx->pc = 0x25cd40u;

    // 0x25cd40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25cd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25cd44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25cd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25cd48: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x25cd48u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
    // 0x25cd4c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25cd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25cd50: 0x8e041750  lw          $a0, 0x1750($s0)
    ctx->pc = 0x25cd50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5968)));
    // 0x25cd54: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25CD54u;
    {
        const bool branch_taken_0x25cd54 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x25CD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CD54u;
        // 0x25cd58: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cd54) {
            ctx->pc = 0x25CD68u;
            goto label_25cd68;
        }
    }
    ctx->pc = 0x25CD5Cu;
    // 0x25cd5c: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x25CD5Cu;
    SET_GPR_U32(ctx, 31, 0x25CD64u);
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x25CD5Cu, 0x25CD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CD64u;
label_25cd64:
    // 0x25cd64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x25cd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_25cd68:
    // 0x25cd68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25cd68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cd6c: 0xae021750  sw          $v0, 0x1750($s0)
    ctx->pc = 0x25cd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5968), GPR_U32(ctx, 2));
    // 0x25cd70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25cd70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25cd74: 0x3e00008  jr          $ra
    ctx->pc = 0x25CD74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CD74u;
        // 0x25cd78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CD74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CD7Cu;
    // 0x25cd7c: 0x0  nop
    ctx->pc = 0x25cd7cu;
    // NOP
}
