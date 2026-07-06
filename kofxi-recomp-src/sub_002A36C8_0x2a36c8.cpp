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

// Function: sub_002A36C8
// Address: 0x2a36c8 - 0x2a3700
void sub_002A36C8_0x2a36c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A36C8_0x2a36c8");
#endif

    ctx->pc = 0x2a36c8u;

    // 0x2a36c8: 0x3c09003b  lui         $t1, 0x3B
    ctx->pc = 0x2a36c8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)59 << 16));
    // 0x2a36cc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2a36ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a36d0: 0x8d226a38  lw          $v0, 0x6A38($t1)
    ctx->pc = 0x2a36d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 27192)));
    // 0x2a36d4: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x2a36d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2a36d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A36D8u;
    {
        const bool branch_taken_0x2a36d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A36DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A36D8u;
        // 0x2a36dc: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a36d8) {
            ctx->pc = 0x2A36F8u;
            goto label_2a36f8;
        }
    }
    ctx->pc = 0x2A36E0u;
    // 0x2a36e0: 0x3c0301c9  lui         $v1, 0x1C9
    ctx->pc = 0x2a36e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)457 << 16));
    // 0x2a36e4: 0x3c0401c9  lui         $a0, 0x1C9
    ctx->pc = 0x2a36e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)457 << 16));
    // 0x2a36e8: 0xad286a38  sw          $t0, 0x6A38($t1)
    ctx->pc = 0x2a36e8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 27192), GPR_U32(ctx, 8));
    // 0x2a36ec: 0xac4548b8  sw          $a1, 0x48B8($v0)
    ctx->pc = 0x2a36ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18616), GPR_U32(ctx, 5));
    // 0x2a36f0: 0xac6648b0  sw          $a2, 0x48B0($v1)
    ctx->pc = 0x2a36f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18608), GPR_U32(ctx, 6));
    // 0x2a36f4: 0xac8748b4  sw          $a3, 0x48B4($a0)
    ctx->pc = 0x2a36f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 18612), GPR_U32(ctx, 7));
label_2a36f8:
    // 0x2a36f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A36F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A36FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A36F8u;
        // 0x2a36fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A36F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3700u;
}
