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

// Function: sub_00110638
// Address: 0x110638 - 0x110668
void sub_00110638_0x110638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110638_0x110638");
#endif

    ctx->pc = 0x110638u;

    // 0x110638: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x110638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x11063c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x11063cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x110640: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x110640u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x110644: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x110644u;
    {
        const bool branch_taken_0x110644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x110644) {
            ctx->pc = 0x110648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110644u;
            // 0x110648: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11064Cu;
            goto label_11064c;
        }
    }
    ctx->pc = 0x11064Cu;
label_11064c:
    // 0x11064c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x11064cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x110650: 0x1010  mfhi        $v0
    ctx->pc = 0x110650u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x110654: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x110654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x110658: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x110658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x11065c: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x11065cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x110660: 0x3e00008  jr          $ra
    ctx->pc = 0x110660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110660u;
        // 0x110664: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110668u;
}
