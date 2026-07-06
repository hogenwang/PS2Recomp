#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00100218
// Address: 0x100218 - 0x100230
void sub_00100218_0x100218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100218_0x100218");
#endif

    switch (ctx->pc) {
        case 0x100220u: goto label_100220;
        default: break;
    }

    ctx->pc = 0x100218u;

    // 0x100218: 0x8045d56  j           func_117558
    ctx->pc = 0x100218u;
    ctx->pc = 0x117558u;
    if (runtime->hasFunction(0x117558u)) {
        auto targetFn = runtime->lookupFunction(0x117558u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00117558_0x117558(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x100220u;
label_100220:
    // 0x100220: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x100220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x100224: 0xc  syscall     0
    ctx->pc = 0x100224u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x100228: 0x0  nop
    ctx->pc = 0x100228u;
    // NOP
    // 0x10022c: 0x0  nop
    ctx->pc = 0x10022cu;
    // NOP
    ctx->pc = 0x100230u;
}
