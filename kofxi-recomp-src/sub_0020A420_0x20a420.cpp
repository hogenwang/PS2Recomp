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

// Function: sub_0020A420
// Address: 0x20a420 - 0x20a460
void sub_0020A420_0x20a420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A420_0x20a420");
#endif

    ctx->pc = 0x20a420u;

    // 0x20a420: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20A420u;
    {
        const bool branch_taken_0x20a420 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a420) {
            ctx->pc = 0x20A440u;
            goto label_20a440;
        }
    }
    ctx->pc = 0x20A428u;
    // 0x20a428: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x20a428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20a42c: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20a42cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20a430: 0x8c84a060  lw          $a0, -0x5FA0($a0)
    ctx->pc = 0x20a430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294942816)));
    // 0x20a434: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x20a434u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x20a438: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20A438u;
    {
        const bool branch_taken_0x20a438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A438u;
        // 0x20a43c: 0xac64a060  sw          $a0, -0x5FA0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294942816), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a438) {
            ctx->pc = 0x20A454u;
            goto label_20a454;
        }
    }
    ctx->pc = 0x20A440u;
label_20a440:
    // 0x20a440: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x20a440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20a444: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20a444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20a448: 0x8c84a060  lw          $a0, -0x5FA0($a0)
    ctx->pc = 0x20a448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294942816)));
    // 0x20a44c: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x20a44cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x20a450: 0xac64a060  sw          $a0, -0x5FA0($v1)
    ctx->pc = 0x20a450u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942816), GPR_U32(ctx, 4));
label_20a454:
    // 0x20a454: 0x3e00008  jr          $ra
    ctx->pc = 0x20A454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A45Cu;
    // 0x20a45c: 0x0  nop
    ctx->pc = 0x20a45cu;
    // NOP
}
