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

// Function: sub_00155FE0
// Address: 0x155fe0 - 0x156000
void sub_00155FE0_0x155fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155FE0_0x155fe0");
#endif

    switch (ctx->pc) {
        case 0x155fe0u: goto label_155fe0;
        case 0x155fe4u: goto label_155fe4;
        case 0x155fe8u: goto label_155fe8;
        case 0x155fecu: goto label_155fec;
        case 0x155ff0u: goto label_155ff0;
        case 0x155ff4u: goto label_155ff4;
        case 0x155ff8u: goto label_155ff8;
        case 0x155ffcu: goto label_155ffc;
        default: break;
    }

    ctx->pc = 0x155fe0u;

label_155fe0:
    // 0x155fe0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x155fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
label_155fe4:
    // 0x155fe4: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x155fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
label_155fe8:
    // 0x155fe8: 0x8c42f788  lw          $v0, -0x878($v0)
    ctx->pc = 0x155fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965128)));
label_155fec:
    // 0x155fec: 0x2484f780  addiu       $a0, $a0, -0x880
    ctx->pc = 0x155fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965120));
label_155ff0:
    // 0x155ff0: 0x400008  jr          $v0
label_155ff4:
    if (ctx->pc == 0x155FF4u) {
        ctx->pc = 0x155FF8u;
        goto label_155ff8;
    }
    ctx->pc = 0x155FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155FF0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x155FF8u;
label_155ff8:
    // 0x155ff8: 0x0  nop
    ctx->pc = 0x155ff8u;
    // NOP
label_155ffc:
    // 0x155ffc: 0x0  nop
    ctx->pc = 0x155ffcu;
    // NOP
    if (ctx->pc == 0x155ffcu) { ctx->pc = 0x156000u; }
}
