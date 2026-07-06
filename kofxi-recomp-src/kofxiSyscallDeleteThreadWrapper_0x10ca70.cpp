#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: kofxiSyscallDeleteThreadWrapper
// Address: 0x10ca70 - 0x10ca80
void kofxiSyscallDeleteThreadWrapper_0x10ca70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiSyscallDeleteThreadWrapper_0x10ca70");
#endif

    ctx->pc = 0x10ca70u;

    // 0x10ca70: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x10ca70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x10ca74: 0xc  syscall     0
    ctx->pc = 0x10ca74u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10ca78: 0x3e00008  jr          $ra
    ctx->pc = 0x10CA78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CA80u;
    ctx->pc = 0x10ca80u;
}
