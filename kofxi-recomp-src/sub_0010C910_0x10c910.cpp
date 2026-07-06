#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C910
// Address: 0x10c910 - 0x10c920
void sub_0010C910_0x10c910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C910_0x10c910");
#endif

    ctx->pc = 0x10c910u;

    // 0x10c910: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x10c910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x10c914: 0xc  syscall     0
    ctx->pc = 0x10c914u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c918: 0x3e00008  jr          $ra
    ctx->pc = 0x10C918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C920u;
    ctx->pc = 0x10c920u;
}
