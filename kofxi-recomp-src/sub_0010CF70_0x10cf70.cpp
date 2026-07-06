#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010CF70
// Address: 0x10cf70 - 0x10cf80
void sub_0010CF70_0x10cf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CF70_0x10cf70");
#endif

    ctx->pc = 0x10cf70u;

    // 0x10cf70: 0x2403006f  addiu       $v1, $zero, 0x6F
    ctx->pc = 0x10cf70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x10cf74: 0xc  syscall     0
    ctx->pc = 0x10cf74u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cf78: 0x3e00008  jr          $ra
    ctx->pc = 0x10CF78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CF80u;
    ctx->pc = 0x10cf80u;
}
