#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: kofxiSyscallReferThreadStatusWrapper
// Address: 0x10cb60 - 0x10cb70
void kofxiSyscallReferThreadStatusWrapper_0x10cb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiSyscallReferThreadStatusWrapper_0x10cb60");
#endif

    ctx->pc = 0x10cb60u;

    // 0x10cb60: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x10cb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10cb64: 0xc  syscall     0
    ctx->pc = 0x10cb64u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cb68: 0x3e00008  jr          $ra
    ctx->pc = 0x10CB68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CB70u;
    ctx->pc = 0x10cb70u;
}
