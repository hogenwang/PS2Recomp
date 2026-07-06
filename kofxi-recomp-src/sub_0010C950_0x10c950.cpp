#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C950
// Address: 0x10c950 - 0x10c960
void sub_0010C950_0x10c950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C950_0x10c950");
#endif

    ctx->pc = 0x10c950u;

    // 0x10c950: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x10c950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10c954: 0xc  syscall     0
    ctx->pc = 0x10c954u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c958: 0x3e00008  jr          $ra
    ctx->pc = 0x10C958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C960u;
    ctx->pc = 0x10c960u;
}
