#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001004D8
// Address: 0x1004d8 - 0x1004e8
void sub_001004D8_0x1004d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001004D8_0x1004d8");
#endif

    ctx->pc = 0x1004d8u;

    // 0x1004d8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1004d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1004dc: 0xc  syscall     0
    ctx->pc = 0x1004dcu;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1004e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1004E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1004E8u;
    ctx->pc = 0x1004e8u;
}
