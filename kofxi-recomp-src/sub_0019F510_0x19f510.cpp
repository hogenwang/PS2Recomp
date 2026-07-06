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

// Function: sub_0019F510
// Address: 0x19f510 - 0x19f540
void sub_0019F510_0x19f510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F510_0x19f510");
#endif

    ctx->pc = 0x19f510u;

    // 0x19f510: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19f510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19f514: 0xffa60020  sd          $a2, 0x20($sp)
    ctx->pc = 0x19f514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 6));
    // 0x19f518: 0xffa70028  sd          $a3, 0x28($sp)
    ctx->pc = 0x19f518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 7));
    // 0x19f51c: 0xffa80030  sd          $t0, 0x30($sp)
    ctx->pc = 0x19f51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 8));
    // 0x19f520: 0xffa90038  sd          $t1, 0x38($sp)
    ctx->pc = 0x19f520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 9));
    // 0x19f524: 0xffaa0040  sd          $t2, 0x40($sp)
    ctx->pc = 0x19f524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 10));
    // 0x19f528: 0xffab0048  sd          $t3, 0x48($sp)
    ctx->pc = 0x19f528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 11));
    // 0x19f52c: 0x3e00008  jr          $ra
    ctx->pc = 0x19F52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F52Cu;
        // 0x19f530: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F534u;
    // 0x19f534: 0x0  nop
    ctx->pc = 0x19f534u;
    // NOP
    // 0x19f538: 0x0  nop
    ctx->pc = 0x19f538u;
    // NOP
    // 0x19f53c: 0x0  nop
    ctx->pc = 0x19f53cu;
    // NOP
}
