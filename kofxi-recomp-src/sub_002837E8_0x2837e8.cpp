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

// Function: sub_002837E8
// Address: 0x2837e8 - 0x283810
void sub_002837E8_0x2837e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002837E8_0x2837e8");
#endif

    ctx->pc = 0x2837e8u;

    // 0x2837e8: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2837e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2837ec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2837ECu;
    {
        const bool branch_taken_0x2837ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2837F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2837ECu;
        // 0x2837f0: 0xaca30018  sw          $v1, 0x18($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2837ec) {
            ctx->pc = 0x283800u;
            goto label_283800;
        }
    }
    ctx->pc = 0x2837F4u;
    // 0x2837f4: 0x90620016  lbu         $v0, 0x16($v1)
    ctx->pc = 0x2837f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22)));
    // 0x2837f8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2837f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2837fc: 0xa0620016  sb          $v0, 0x16($v1)
    ctx->pc = 0x2837fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 22), (uint8_t)GPR_U32(ctx, 2));
label_283800:
    // 0x283800: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x283800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x283804: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x283804u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
    // 0x283808: 0x3e00008  jr          $ra
    ctx->pc = 0x283808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283808u;
        // 0x28380c: 0xac85001c  sw          $a1, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283810u;
}
