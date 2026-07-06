#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00116768
// Address: 0x116768 - 0x116778
void sub_00116768_0x116768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116768_0x116768");
#endif

    ctx->pc = 0x116768u;

    // 0x116768: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x116768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x11676c: 0xc  syscall     0
    ctx->pc = 0x11676cu;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x116770: 0x3e00008  jr          $ra
    ctx->pc = 0x116770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x116778u;
    ctx->pc = 0x116778u;
}
