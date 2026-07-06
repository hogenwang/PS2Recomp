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

// Function: sub_002B0740
// Address: 0x2b0740 - 0x2b0778
void sub_002B0740_0x2b0740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0740_0x2b0740");
#endif

    ctx->pc = 0x2b0740u;

    // 0x2b0740: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B0740u;
    {
        const bool branch_taken_0x2b0740 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0740u;
        // 0x2b0744: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0740) {
            ctx->pc = 0x2B0770u;
            goto label_2b0770;
        }
    }
    ctx->pc = 0x2B0748u;
    // 0x2b0748: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x2b0748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x2b074c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B074Cu;
    {
        const bool branch_taken_0x2b074c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b074c) {
            ctx->pc = 0x2B0770u;
            goto label_2b0770;
        }
    }
    ctx->pc = 0x2B0754u;
    // 0x2b0754: 0x8c8400dc  lw          $a0, 0xDC($a0)
    ctx->pc = 0x2b0754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x2b0758: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B0758u;
    {
        const bool branch_taken_0x2b0758 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B075Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0758u;
        // 0x2b075c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0758) {
            ctx->pc = 0x2B0770u;
            goto label_2b0770;
        }
    }
    ctx->pc = 0x2B0760u;
    // 0x2b0760: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2b0760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2b0764: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B0764u;
    {
        const bool branch_taken_0x2b0764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0764u;
        // 0x2b0768: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0764) {
            ctx->pc = 0x2B0770u;
            goto label_2b0770;
        }
    }
    ctx->pc = 0x2B076Cu;
    // 0x2b076c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b076cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b0770:
    // 0x2b0770: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0778u;
}
