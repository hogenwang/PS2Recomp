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

// Function: sub_00126008
// Address: 0x126008 - 0x126030
void sub_00126008_0x126008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126008_0x126008");
#endif

    switch (ctx->pc) {
        case 0x126024u: goto label_126024;
        default: break;
    }

    ctx->pc = 0x126008u;

    // 0x126008: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x126008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12600c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x12600cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126010: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x126010u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
    // 0x126014: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x126014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x126018: 0x8de4bde8  lw          $a0, -0x4218($t7)
    ctx->pc = 0x126018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294950376)));
    // 0x12601c: 0xc04980c  jal         func_126030
    ctx->pc = 0x12601Cu;
    SET_GPR_U32(ctx, 31, 0x126024u);
    ctx->pc = 0x126020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12601Cu;
    // 0x126020: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126030u, 0x12601Cu, 0x126024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126024u;
label_126024:
    // 0x126024: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x126024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126028: 0x3e00008  jr          $ra
    ctx->pc = 0x126028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12602Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126028u;
        // 0x12602c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126030u;
}
