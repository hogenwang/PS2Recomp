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

// Function: sub_0025CBE8
// Address: 0x25cbe8 - 0x25cc20
void sub_0025CBE8_0x25cbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CBE8_0x25cbe8");
#endif

    switch (ctx->pc) {
        case 0x25cbf8u: goto label_25cbf8;
        case 0x25cc00u: goto label_25cc00;
        default: break;
    }

    ctx->pc = 0x25cbe8u;

    // 0x25cbe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25cbe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25cbec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25cbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25cbf0: 0xc0432d4  jal         func_10CB50
    ctx->pc = 0x25CBF0u;
    SET_GPR_U32(ctx, 31, 0x25CBF8u);
    ctx->pc = 0x10CB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB50u, 0x25CBF0u, 0x25CBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CBF8u;
label_25cbf8:
    // 0x25cbf8: 0xc097242  jal         func_25C908
    ctx->pc = 0x25CBF8u;
    SET_GPR_U32(ctx, 31, 0x25CC00u);
    ctx->pc = 0x25CBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CBF8u;
    // 0x25cbfc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C908u, 0x25CBF8u, 0x25CC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CC00u;
label_25cc00:
    // 0x25cc00: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x25CC00u;
    {
        const bool branch_taken_0x25cc00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25cc00) {
            ctx->pc = 0x25CC04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25CC00u;
            // 0x25cc04: 0x2442000c  addiu       $v0, $v0, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25CC10u;
            goto label_25cc10;
        }
    }
    ctx->pc = 0x25CC08u;
    // 0x25cc08: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x25cc08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x25cc0c: 0x24421754  addiu       $v0, $v0, 0x1754
    ctx->pc = 0x25cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5972));
label_25cc10:
    // 0x25cc10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25cc10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25cc14: 0x3e00008  jr          $ra
    ctx->pc = 0x25CC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC14u;
        // 0x25cc18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CC14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CC1Cu;
    // 0x25cc1c: 0x0  nop
    ctx->pc = 0x25cc1cu;
    // NOP
    if (ctx->pc == 0x25cc1cu) { ctx->pc = 0x25cc20u; }
}
