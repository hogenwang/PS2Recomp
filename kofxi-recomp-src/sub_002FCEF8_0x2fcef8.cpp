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

// Function: sub_002FCEF8
// Address: 0x2fcef8 - 0x2fcf28
void sub_002FCEF8_0x2fcef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FCEF8_0x2fcef8");
#endif

    ctx->pc = 0x2fcef8u;

    // 0x2fcef8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2fcef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcefc: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x2fcefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2fcf00: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x2fcf00u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x2fcf04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2fcf04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2fcf08: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2fcf08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2fcf0c: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FCF0Cu;
    {
        const bool branch_taken_0x2fcf0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FCF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCF0Cu;
        // 0x2fcf10: 0xa0a30003  sb          $v1, 0x3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcf0c) {
            ctx->pc = 0x2FCF20u;
            goto label_2fcf20;
        }
    }
    ctx->pc = 0x2FCF14u;
    // 0x2fcf14: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2fcf14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcf18: 0x80bf366  j           func_2FCD98
    ctx->pc = 0x2FCF18u;
    ctx->pc = 0x2FCF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCF18u;
    // 0x2fcf1c: 0xa0a00003  sb          $zero, 0x3($a1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCD98u, 0x2FCF18u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2FCF20u;
label_2fcf20:
    // 0x2fcf20: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FCF20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FCF28u;
}
