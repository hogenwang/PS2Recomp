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

// Function: sub_001B6538
// Address: 0x1b6538 - 0x1b6570
void sub_001B6538_0x1b6538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6538_0x1b6538");
#endif

    ctx->pc = 0x1b6538u;

    // 0x1b6538: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6538u;
        // 0x1b653c: 0x8c8200a8  lw          $v0, 0xA8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6540u;
    // 0x1b6540: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1b6540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1b6544: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6544u;
        // 0x1b6548: 0xac44b410  sw          $a0, -0x4BF0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294947856), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B654Cu;
    // 0x1b654c: 0x0  nop
    ctx->pc = 0x1b654cu;
    // NOP
    // 0x1b6550: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1b6550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1b6554: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1b6554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1b6558: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1b6558u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b655c: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x1b655cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x1b6560: 0xac62b414  sw          $v0, -0x4BEC($v1)
    ctx->pc = 0x1b6560u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294947860), GPR_U32(ctx, 2));
    // 0x1b6564: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6564u;
        // 0x1b6568: 0xaca4b418  sw          $a0, -0x4BE8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294947864), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B656Cu;
    // 0x1b656c: 0x0  nop
    ctx->pc = 0x1b656cu;
    // NOP
}
