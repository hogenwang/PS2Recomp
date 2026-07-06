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

// Function: sub_001EE390
// Address: 0x1ee390 - 0x1ee3b8
void sub_001EE390_0x1ee390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EE390_0x1ee390");
#endif

    ctx->pc = 0x1ee390u;

    // 0x1ee390: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1ee390u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee394: 0x8c441fdc  lw          $a0, 0x1FDC($v0)
    ctx->pc = 0x1ee394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8156)));
    // 0x1ee398: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1ee398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1ee39c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1ee39cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ee3a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ee3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ee3a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ee3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ee3a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ee3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ee3ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ee3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ee3b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE3B0u;
        // 0x1ee3b4: 0x24421378  addiu       $v0, $v0, 0x1378 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4984));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE3B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE3B8u;
}
