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

// Function: sub_0014CEF0
// Address: 0x14cef0 - 0x14cf30
void sub_0014CEF0_0x14cef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014CEF0_0x14cef0");
#endif

    ctx->pc = 0x14cef0u;

    // 0x14cef0: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x14cef0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x14cef4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x14cef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x14cef8: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x14cef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x14cefc: 0x24425dc0  addiu       $v0, $v0, 0x5DC0
    ctx->pc = 0x14cefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24000));
    // 0x14cf00: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x14cf00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14cf04: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x14cf04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x14cf08: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x14cf08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14cf0c: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x14cf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x14cf10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14cf10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14cf14: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x14cf14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14cf18: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x14CF18u;
    {
        const bool branch_taken_0x14cf18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14cf18) {
            ctx->pc = 0x14CF1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CF18u;
            // 0x14cf1c: 0x240400ff  addiu       $a0, $zero, 0xFF (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CF20u;
            goto label_14cf20;
        }
    }
    ctx->pc = 0x14CF20u;
label_14cf20:
    // 0x14cf20: 0x3e00008  jr          $ra
    ctx->pc = 0x14CF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CF20u;
        // 0x14cf24: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CF20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14CF28u;
    // 0x14cf28: 0x0  nop
    ctx->pc = 0x14cf28u;
    // NOP
    // 0x14cf2c: 0x0  nop
    ctx->pc = 0x14cf2cu;
    // NOP
    if (ctx->pc == 0x14cf2cu) { ctx->pc = 0x14cf30u; }
}
