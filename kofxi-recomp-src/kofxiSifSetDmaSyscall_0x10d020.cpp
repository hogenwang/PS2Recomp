#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: kofxiSifSetDmaSyscall
// Address: 0x10d020 - 0x10d030
void kofxiSifSetDmaSyscall_0x10d020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiSifSetDmaSyscall_0x10d020");
#endif

    ctx->pc = 0x10d020u;

    // 0x10d020: 0x24030077  addiu       $v1, $zero, 0x77
    ctx->pc = 0x10d020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x10d024: 0xc  syscall     0
    ctx->pc = 0x10d024u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10d028: 0x3e00008  jr          $ra
    ctx->pc = 0x10D028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10D030u;
    ctx->pc = 0x10d030u;
}
