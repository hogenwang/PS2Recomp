#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010CFA0
// Address: 0x10cfa0 - 0x10cfd0
void sub_0010CFA0_0x10cfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CFA0_0x10cfa0");
#endif

    switch (ctx->pc) {
        case 0x10cfb0u: goto label_10cfb0;
        case 0x10cfc0u: goto label_10cfc0;
        default: break;
    }

    ctx->pc = 0x10cfa0u;

    // 0x10cfa0: 0x24030071  addiu       $v1, $zero, 0x71
    ctx->pc = 0x10cfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x10cfa4: 0xc  syscall     0
    ctx->pc = 0x10cfa4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cfa8: 0x3e00008  jr          $ra
    ctx->pc = 0x10CFA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CFB0u;
label_10cfb0:
    // 0x10cfb0: 0x2403ff8f  addiu       $v1, $zero, -0x71
    ctx->pc = 0x10cfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967183));
    // 0x10cfb4: 0xc  syscall     0
    ctx->pc = 0x10cfb4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cfb8: 0x3e00008  jr          $ra
    ctx->pc = 0x10CFB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CFC0u;
label_10cfc0:
    // 0x10cfc0: 0x24030072  addiu       $v1, $zero, 0x72
    ctx->pc = 0x10cfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x10cfc4: 0xc  syscall     0
    ctx->pc = 0x10cfc4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cfc8: 0x3e00008  jr          $ra
    ctx->pc = 0x10CFC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CFD0u;
    ctx->pc = 0x10cfd0u;
}
