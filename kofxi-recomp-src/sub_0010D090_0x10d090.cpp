#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010D090
// Address: 0x10d090 - 0x10d0c0
void sub_0010D090_0x10d090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D090_0x10d090");
#endif

    switch (ctx->pc) {
        case 0x10d0a0u: goto label_10d0a0;
        case 0x10d0b0u: goto label_10d0b0;
        default: break;
    }

    ctx->pc = 0x10d090u;

    // 0x10d090: 0x2403007c  addiu       $v1, $zero, 0x7C
    ctx->pc = 0x10d090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x10d094: 0xc  syscall     0
    ctx->pc = 0x10d094u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10d098: 0x3e00008  jr          $ra
    ctx->pc = 0x10D098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10D0A0u;
label_10d0a0:
    // 0x10d0a0: 0x2403007d  addiu       $v1, $zero, 0x7D
    ctx->pc = 0x10d0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x10d0a4: 0xc  syscall     0
    ctx->pc = 0x10d0a4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10d0a8: 0x3e00008  jr          $ra
    ctx->pc = 0x10D0A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10D0B0u;
label_10d0b0:
    // 0x10d0b0: 0x2403007e  addiu       $v1, $zero, 0x7E
    ctx->pc = 0x10d0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x10d0b4: 0xc  syscall     0
    ctx->pc = 0x10d0b4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10d0b8: 0x3e00008  jr          $ra
    ctx->pc = 0x10D0B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10D0C0u;
    ctx->pc = 0x10d0c0u;
}
