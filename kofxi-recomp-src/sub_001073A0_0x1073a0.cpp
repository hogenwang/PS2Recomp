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

// Function: sub_001073A0
// Address: 0x1073a0 - 0x1073a8
void sub_001073A0_0x1073a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001073A0_0x1073a0");
#endif

    ctx->pc = 0x1073a0u;

    // 0x1073a0: 0x8041cb4  j           func_1072D0
    ctx->pc = 0x1073A0u;
    ctx->pc = 0x1072D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1072D0u, 0x1073A0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1073A8u;
}
