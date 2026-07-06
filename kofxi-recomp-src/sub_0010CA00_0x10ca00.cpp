#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010CA00
// Address: 0x10ca00 - 0x10ca10
void sub_0010CA00_0x10ca00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CA00_0x10ca00");
#endif

    ctx->pc = 0x10ca00u;

    // 0x10ca00: 0x2403ffe6  addiu       $v1, $zero, -0x1A
    ctx->pc = 0x10ca00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967270));
    // 0x10ca04: 0xc  syscall     0
    ctx->pc = 0x10ca04u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10ca08: 0x3e00008  jr          $ra
    ctx->pc = 0x10CA08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CA10u;
    ctx->pc = 0x10ca10u;
}
