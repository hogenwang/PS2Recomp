#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void sub_0012BEC8_0x12bec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sub_0012BEC8_0x12bec8");
#endif
    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::vfprintf(rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
