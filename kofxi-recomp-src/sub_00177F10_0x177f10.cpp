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

// Function: sub_00177F10
// Address: 0x177f10 - 0x177f30
void sub_00177F10_0x177f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177F10_0x177f10");
#endif

    ctx->pc = 0x177f10u;

    // 0x177f10: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x177f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x177f14: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x177f14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x177f18: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x177f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x177f1c: 0x2442a580  addiu       $v0, $v0, -0x5A80
    ctx->pc = 0x177f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944128));
    // 0x177f20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x177f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177f24: 0x3e00008  jr          $ra
    ctx->pc = 0x177F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F24u;
        // 0x177f28: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177F2Cu;
    // 0x177f2c: 0x0  nop
    ctx->pc = 0x177f2cu;
    // NOP
    if (ctx->pc == 0x177f2cu) { ctx->pc = 0x177f30u; }
}
