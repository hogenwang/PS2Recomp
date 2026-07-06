#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: kofxiSyscallGetThreadIdWrapper
// Address: 0x10cb50 - 0x10cb60
void kofxiSyscallGetThreadIdWrapper_0x10cb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiSyscallGetThreadIdWrapper_0x10cb50");
#endif

    ctx->pc = 0x10cb50u;

    // 0x10cb50: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x10cb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x10cb54: 0xc  syscall     0
    ctx->pc = 0x10cb54u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cb58: 0x3e00008  jr          $ra
    ctx->pc = 0x10CB58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CB60u;
    ctx->pc = 0x10cb60u;
}
