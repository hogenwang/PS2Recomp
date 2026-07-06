#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: kofxiSyscallSleepThreadWrapper
// Address: 0x10cb80 - 0x10cb90
void kofxiSyscallSleepThreadWrapper_0x10cb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiSyscallSleepThreadWrapper_0x10cb80");
#endif

    ctx->pc = 0x10cb80u;

    // 0x10cb80: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x10cb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x10cb84: 0xc  syscall     0
    ctx->pc = 0x10cb84u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cb88: 0x3e00008  jr          $ra
    ctx->pc = 0x10CB88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CB90u;
    ctx->pc = 0x10cb90u;
}
