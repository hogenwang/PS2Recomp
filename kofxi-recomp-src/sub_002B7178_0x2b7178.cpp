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

// Function: sub_002B7178
// Address: 0x2b7178 - 0x2b7198
void sub_002B7178_0x2b7178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7178_0x2b7178");
#endif

    ctx->pc = 0x2b7178u;

    // 0x2b7178: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2b7178u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b717c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2b717cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b7180: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2b7180u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2b7184: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x2b7184u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b7188: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2b7188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2b718c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B718Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B718Cu;
        // 0x2b7190: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B718Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7194u;
    // 0x2b7194: 0x0  nop
    ctx->pc = 0x2b7194u;
    // NOP
    if (ctx->pc == 0x2b7194u) { ctx->pc = 0x2b7198u; }
}
