#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010CA20
// Address: 0x10ca20 - 0x10ca30
void sub_0010CA20_0x10ca20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CA20_0x10ca20");
#endif

    ctx->pc = 0x10ca20u;

    // 0x10ca20: 0x2403ffe4  addiu       $v1, $zero, -0x1C
    ctx->pc = 0x10ca20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
    // 0x10ca24: 0xc  syscall     0
    ctx->pc = 0x10ca24u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10ca28: 0x3e00008  jr          $ra
    ctx->pc = 0x10CA28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CA30u;
    ctx->pc = 0x10ca30u;
}
