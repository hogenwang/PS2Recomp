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

// Function: sub_001CFFB8
// Address: 0x1cffb8 - 0x1d0000
void sub_001CFFB8_0x1cffb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CFFB8_0x1cffb8");
#endif

    ctx->pc = 0x1cffb8u;

    // 0x1cffb8: 0x870018  mult        $zero, $a0, $a3
    ctx->pc = 0x1cffb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1cffbc: 0x70c50018  mult1       $zero, $a2, $a1
    ctx->pc = 0x1cffbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1cffc0: 0x1012  mflo        $v0
    ctx->pc = 0x1cffc0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1cffc4: 0x2010  mfhi        $a0
    ctx->pc = 0x1cffc4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1cffc8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1cffc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1cffcc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1cffccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1cffd0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1cffd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1cffd4: 0x70001812  mflo1       $v1
    ctx->pc = 0x1cffd4u;
    SET_GPR_U64(ctx, 3, ctx->lo1);
    // 0x1cffd8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1cffd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1cffdc: 0x70001010  mfhi1       $v0
    ctx->pc = 0x1cffdcu;
    SET_GPR_U64(ctx, 2, ctx->hi1);
    // 0x1cffe0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1cffe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1cffe4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1cffe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1cffe8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1cffe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1cffec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1cffecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1cfff0: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1cfff0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1cfff4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFFF4u;
        // 0x1cfff8: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFFF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFFFCu;
    // 0x1cfffc: 0x0  nop
    ctx->pc = 0x1cfffcu;
    // NOP
    if (ctx->pc == 0x1cfffcu) { ctx->pc = 0x1d0000u; }
}
