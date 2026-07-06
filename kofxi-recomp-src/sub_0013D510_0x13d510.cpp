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

// Function: sub_0013D510
// Address: 0x13d510 - 0x13d540
void sub_0013D510_0x13d510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D510_0x13d510");
#endif

    ctx->pc = 0x13d510u;

    // 0x13d510: 0x58a00009  blezl       $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x13D510u;
    {
        const bool branch_taken_0x13d510 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x13d510) {
            ctx->pc = 0x13D514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D510u;
            // 0x13d514: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D538u;
            goto label_13d538;
        }
    }
    ctx->pc = 0x13D518u;
    // 0x13d518: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x13d518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x13d51c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x13d51cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13d520: 0x2463cb6c  addiu       $v1, $v1, -0x3494
    ctx->pc = 0x13d520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953836));
    // 0x13d524: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x13d524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x13d528: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x13d528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13d52c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x13d52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13d530: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13d530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13d534: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x13d534u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13d538:
    // 0x13d538: 0x3e00008  jr          $ra
    ctx->pc = 0x13D538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D540u;
}
