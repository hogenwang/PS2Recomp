#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010D050
// Address: 0x10d050 - 0x10d060
void sub_0010D050_0x10d050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D050_0x10d050");
#endif

    ctx->pc = 0x10d050u;

    // 0x10d050: 0x2403ff88  addiu       $v1, $zero, -0x78
    ctx->pc = 0x10d050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967176));
    // 0x10d054: 0xc  syscall     0
    ctx->pc = 0x10d054u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10d058: 0x3e00008  jr          $ra
    ctx->pc = 0x10D058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10D060u;
    ctx->pc = 0x10d060u;
}
