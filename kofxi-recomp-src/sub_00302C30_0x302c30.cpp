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

// Function: sub_00302C30
// Address: 0x302c30 - 0x302c50
void sub_00302C30_0x302c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302C30_0x302c30");
#endif

    switch (ctx->pc) {
        case 0x302c40u: goto label_302c40;
        default: break;
    }

    ctx->pc = 0x302c30u;

    // 0x302c30: 0x94890000  lhu         $t1, 0x0($a0)
    ctx->pc = 0x302c30u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x302c34: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x302c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302c38: 0xc0c0bd4  jal         func_302F50
    ctx->pc = 0x302C38u;
    SET_GPR_U32(ctx, 31, 0x302C40u);
    ctx->pc = 0x302C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302C38u;
    // 0x302c3c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302F50u, 0x302C38u, 0x302C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302C40u;
label_302c40:
    // 0x302c40: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x302c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x302c44: 0x3e00008  jr          $ra
    ctx->pc = 0x302C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302C44u;
        // 0x302c48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302C4Cu;
    // 0x302c4c: 0x0  nop
    ctx->pc = 0x302c4cu;
    // NOP
}
