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

// Function: sub_00322180
// Address: 0x322180 - 0x3221b0
void sub_00322180_0x322180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322180_0x322180");
#endif

    ctx->pc = 0x322180u;

    // 0x322180: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x322180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x322184: 0x8c64f02c  lw          $a0, -0xFD4($v1)
    ctx->pc = 0x322184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963244)));
    // 0x322188: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x322188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32218c: 0x8c63f030  lw          $v1, -0xFD0($v1)
    ctx->pc = 0x32218cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963248)));
    // 0x322190: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x322190u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x322194: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x322194u;
    {
        const bool branch_taken_0x322194 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x322194) {
            ctx->pc = 0x3221A4u;
            goto label_3221a4;
        }
    }
    ctx->pc = 0x32219Cu;
    // 0x32219c: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32219cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x3221a0: 0xa464f010  sh          $a0, -0xFF0($v1)
    ctx->pc = 0x3221a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294963216), (uint16_t)GPR_U32(ctx, 4));
label_3221a4:
    // 0x3221a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3221A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3221A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3221ACu;
    // 0x3221ac: 0x0  nop
    ctx->pc = 0x3221acu;
    // NOP
}
