#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: kofxiSyscallSignalSemaIntrWrapper
// Address: 0x10cc90 - 0x10cca0
void kofxiSyscallSignalSemaIntrWrapper_0x10cc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiSyscallSignalSemaIntrWrapper_0x10cc90");
#endif

    ctx->pc = 0x10cc90u;

    // 0x10cc90: 0x2403ffbd  addiu       $v1, $zero, -0x43
    ctx->pc = 0x10cc90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967229));
    // 0x10cc94: 0xc  syscall     0
    ctx->pc = 0x10cc94u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cc98: 0x3e00008  jr          $ra
    ctx->pc = 0x10CC98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CCA0u;
    ctx->pc = 0x10cca0u;
}
