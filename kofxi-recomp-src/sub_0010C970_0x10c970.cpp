#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C970
// Address: 0x10c970 - 0x10c980
void sub_0010C970_0x10c970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C970_0x10c970");
#endif

    ctx->pc = 0x10c970u;

    // 0x10c970: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x10c970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x10c974: 0xc  syscall     0
    ctx->pc = 0x10c974u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c978: 0x3e00008  jr          $ra
    ctx->pc = 0x10C978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C980u;
    ctx->pc = 0x10c980u;
}
