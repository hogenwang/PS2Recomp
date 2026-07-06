#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A0560
// Address: 0x1a0560 - 0x1a0580
void sub_001A0560_0x1a0560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0560_0x1a0560");
#endif

    ctx->pc = 0x1a0560u;

label_1a0560:
    // 0x1a0560: 0x0  nop
    ctx->pc = 0x1a0560u;
    // NOP
    // 0x1a0564: 0x0  nop
    ctx->pc = 0x1a0564u;
    // NOP
    // 0x1a0568: 0x0  nop
    ctx->pc = 0x1a0568u;
    // NOP
    // 0x1a056c: 0x0  nop
    ctx->pc = 0x1a056cu;
    // NOP
    // 0x1a0570: 0x0  nop
    ctx->pc = 0x1a0570u;
    // NOP
    // 0x1a0574: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A0574u;
    {
        const bool branch_taken_0x1a0574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0574) {
            ctx->pc = 0x1A0560u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a0560;
        }
    }
    ctx->pc = 0x1A057Cu;
    // 0x1a057c: 0x0  nop
    ctx->pc = 0x1a057cu;
    // NOP
    ctx->pc = 0x1a0580u;
}
