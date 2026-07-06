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

// Function: sub_002FCC78
// Address: 0x2fcc78 - 0x2fcca8
void sub_002FCC78_0x2fcc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FCC78_0x2fcc78");
#endif

    ctx->pc = 0x2fcc78u;

    // 0x2fcc78: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2fcc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2fcc7c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2fcc7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2fcc80: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2fcc80u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2fcc84: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2fcc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2fcc88: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FCC88u;
    {
        const bool branch_taken_0x2fcc88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fcc88) {
            ctx->pc = 0x2FCC8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FCC88u;
            // 0x2fcc8c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FCC90u;
            goto label_2fcc90;
        }
    }
    ctx->pc = 0x2FCC90u;
label_2fcc90:
    // 0x2fcc90: 0x1012  mflo        $v0
    ctx->pc = 0x2fcc90u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2fcc94: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x2fcc94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2fcc98: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x2fcc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2fcc9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCC9Cu;
        // 0x2fcca0: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FCC9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FCCA4u;
    // 0x2fcca4: 0x0  nop
    ctx->pc = 0x2fcca4u;
    // NOP
    if (ctx->pc == 0x2fcca4u) { ctx->pc = 0x2fcca8u; }
}
