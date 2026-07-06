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

// Function: sub_00296918
// Address: 0x296918 - 0x296948
void sub_00296918_0x296918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296918_0x296918");
#endif

    ctx->pc = 0x296918u;

    // 0x296918: 0x3e00008  jr          $ra
    ctx->pc = 0x296918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29691Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296918u;
        // 0x29691c: 0x2482002c  addiu       $v0, $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296920u;
    // 0x296920: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x296920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296924: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x296924u;
    {
        const bool branch_taken_0x296924 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x296928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296924u;
        // 0x296928: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296924) {
            ctx->pc = 0x29693Cu;
            goto label_29693c;
        }
    }
    ctx->pc = 0x29692Cu;
    // 0x29692c: 0x3c0401c9  lui         $a0, 0x1C9
    ctx->pc = 0x29692cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)457 << 16));
    // 0x296930: 0x2406004f  addiu       $a2, $zero, 0x4F
    ctx->pc = 0x296930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x296934: 0x804a966  j           func_12A598
    ctx->pc = 0x296934u;
    ctx->pc = 0x296938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296934u;
    // 0x296938: 0x24844830  addiu       $a0, $a0, 0x4830 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    sub_0012A598_0x12a598(rdram, ctx, runtime); return;
    ctx->pc = 0x29693Cu;
label_29693c:
    // 0x29693c: 0x3e00008  jr          $ra
    ctx->pc = 0x29693Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29693Cu;
        // 0x296940: 0xa0404830  sb          $zero, 0x4830($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 18480), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29693Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296944u;
    // 0x296944: 0x0  nop
    ctx->pc = 0x296944u;
    // NOP
    if (ctx->pc == 0x296944u) { ctx->pc = 0x296948u; }
}
