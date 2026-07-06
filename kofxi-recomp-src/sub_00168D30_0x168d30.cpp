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

// Function: sub_00168D30
// Address: 0x168d30 - 0x168d60
void sub_00168D30_0x168d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168D30_0x168d30");
#endif

    ctx->pc = 0x168d30u;

    // 0x168d30: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x168d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x168d34: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x168d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x168d38: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x168D38u;
    {
        const bool branch_taken_0x168d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168d38) {
            ctx->pc = 0x168D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168D38u;
            // 0x168d3c: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x168D48u;
            goto label_168d48;
        }
    }
    ctx->pc = 0x168D40u;
    // 0x168d40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x168D40u;
    {
        const bool branch_taken_0x168d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D40u;
        // 0x168d44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168d40) {
            ctx->pc = 0x168D58u;
            goto label_168d58;
        }
    }
    ctx->pc = 0x168D48u;
label_168d48:
    // 0x168d48: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x168D48u;
    {
        const bool branch_taken_0x168d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168d48) {
            ctx->pc = 0x168D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168D48u;
            // 0x168d4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168D58u;
            goto label_168d58;
        }
    }
    ctx->pc = 0x168D50u;
    // 0x168d50: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x168D50u;
    {
        const bool branch_taken_0x168d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D50u;
        // 0x168d54: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168d50) {
            ctx->pc = 0x168D58u;
            goto label_168d58;
        }
    }
    ctx->pc = 0x168D58u;
label_168d58:
    // 0x168d58: 0x3e00008  jr          $ra
    ctx->pc = 0x168D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168D60u;
}
