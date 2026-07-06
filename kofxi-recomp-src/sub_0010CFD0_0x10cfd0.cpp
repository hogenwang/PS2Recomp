#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010CFD0
// Address: 0x10cfd0 - 0x10d000
void sub_0010CFD0_0x10cfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CFD0_0x10cfd0");
#endif

    switch (ctx->pc) {
        case 0x10cfe0u: goto label_10cfe0;
        case 0x10cff0u: goto label_10cff0;
        default: break;
    }

    ctx->pc = 0x10cfd0u;

    // 0x10cfd0: 0x24030073  addiu       $v1, $zero, 0x73
    ctx->pc = 0x10cfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x10cfd4: 0xc  syscall     0
    ctx->pc = 0x10cfd4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cfd8: 0x3e00008  jr          $ra
    ctx->pc = 0x10CFD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CFE0u;
label_10cfe0:
    // 0x10cfe0: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x10cfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x10cfe4: 0xc  syscall     0
    ctx->pc = 0x10cfe4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cfe8: 0x3e00008  jr          $ra
    ctx->pc = 0x10CFE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CFF0u;
label_10cff0:
    // 0x10cff0: 0x24030075  addiu       $v1, $zero, 0x75
    ctx->pc = 0x10cff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x10cff4: 0xc  syscall     0
    ctx->pc = 0x10cff4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cff8: 0x3e00008  jr          $ra
    ctx->pc = 0x10CFF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10D000u;
    ctx->pc = 0x10d000u;
}
