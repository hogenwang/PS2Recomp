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

// Function: sub_001EB5D8
// Address: 0x1eb5d8 - 0x1eb610
void sub_001EB5D8_0x1eb5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EB5D8_0x1eb5d8");
#endif

    ctx->pc = 0x1eb5d8u;

    // 0x1eb5d8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1eb5d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb5dc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1eb5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1eb5e0: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x1eb5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1eb5e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eb5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb5e8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1eb5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1eb5ec: 0x10c50005  beq         $a2, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EB5ECu;
    {
        const bool branch_taken_0x1eb5ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x1EB5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB5ECu;
        // 0x1eb5f0: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb5ec) {
            ctx->pc = 0x1EB604u;
            goto label_1eb604;
        }
    }
    ctx->pc = 0x1EB5F4u;
    // 0x1eb5f4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1eb5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1eb5f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1eb5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1eb5fc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1eb5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1eb600: 0x8c621374  lw          $v0, 0x1374($v1)
    ctx->pc = 0x1eb600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4980)));
label_1eb604:
    // 0x1eb604: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB60Cu;
    // 0x1eb60c: 0x0  nop
    ctx->pc = 0x1eb60cu;
    // NOP
    if (ctx->pc == 0x1eb60cu) { ctx->pc = 0x1eb610u; }
}
