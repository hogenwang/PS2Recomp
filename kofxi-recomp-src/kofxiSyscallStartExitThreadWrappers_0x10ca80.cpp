#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: kofxiSyscallStartExitThreadWrappers
// Address: 0x10ca80 - 0x10caa0
void kofxiSyscallStartExitThreadWrappers_0x10ca80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiSyscallStartExitThreadWrappers_0x10ca80");
#endif

    switch (ctx->pc) {
        case 0x10ca90u: goto label_10ca90;
        default: break;
    }

    ctx->pc = 0x10ca80u;

    // 0x10ca80: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x10ca80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x10ca84: 0xc  syscall     0
    ctx->pc = 0x10ca84u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10ca88: 0x3e00008  jr          $ra
    ctx->pc = 0x10CA88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CA90u;
label_10ca90:
    // 0x10ca90: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x10ca90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x10ca94: 0xc  syscall     0
    ctx->pc = 0x10ca94u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10ca98: 0x3e00008  jr          $ra
    ctx->pc = 0x10CA98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CAA0u;
    ctx->pc = 0x10caa0u;
}
