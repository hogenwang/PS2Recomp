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

// Function: sub_00283738
// Address: 0x283738 - 0x283760
void sub_00283738_0x283738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283738_0x283738");
#endif

    ctx->pc = 0x283738u;

    // 0x283738: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x283738u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x28373c: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28373Cu;
    {
        const bool branch_taken_0x28373c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x283740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28373Cu;
        // 0x283740: 0xac870004  sw          $a3, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28373c) {
            ctx->pc = 0x283750u;
            goto label_283750;
        }
    }
    ctx->pc = 0x283744u;
    // 0x283744: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x283744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x283748: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x283748u;
    {
        const bool branch_taken_0x283748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28374Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283748u;
        // 0x28374c: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283748) {
            ctx->pc = 0x283754u;
            goto label_283754;
        }
    }
    ctx->pc = 0x283750u;
label_283750:
    // 0x283750: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x283750u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_283754:
    // 0x283754: 0x3e00008  jr          $ra
    ctx->pc = 0x283754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283754u;
        // 0x283758: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28375Cu;
    // 0x28375c: 0x0  nop
    ctx->pc = 0x28375cu;
    // NOP
}
