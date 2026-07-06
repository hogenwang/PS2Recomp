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

// Function: sub_0019F660
// Address: 0x19f660 - 0x19f680
void sub_0019F660_0x19f660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F660_0x19f660");
#endif

    ctx->pc = 0x19f660u;

    // 0x19f660: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x19f660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x19f664: 0x419c0  sll         $v1, $a0, 7
    ctx->pc = 0x19f664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x19f668: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x19f668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x19f66c: 0x430019  multu       $v0, $v1
    ctx->pc = 0x19f66cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19f670: 0x1010  mfhi        $v0
    ctx->pc = 0x19f670u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x19f674: 0x3e00008  jr          $ra
    ctx->pc = 0x19F674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F674u;
        // 0x19f678: 0x21142  srl         $v0, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F67Cu;
    // 0x19f67c: 0x0  nop
    ctx->pc = 0x19f67cu;
    // NOP
    if (ctx->pc == 0x19f67cu) { ctx->pc = 0x19f680u; }
}
