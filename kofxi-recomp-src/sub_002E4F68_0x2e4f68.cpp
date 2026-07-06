#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E4F68
// Address: 0x2e4f68 - 0x2e4f78
void sub_002E4F68_0x2e4f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4F68_0x2e4f68");
#endif

    ctx->pc = 0x2e4f68u;

    // 0x2e4f68: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x2e4f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x2e4f6c: 0xc  syscall     0
    ctx->pc = 0x2e4f6cu;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x2e4f70: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4F70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E4F78u;
    ctx->pc = 0x2e4f78u;
}
