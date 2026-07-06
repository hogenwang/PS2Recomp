#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FDBF8
// Address: 0x1fdbf8 - 0x1fdc00
void sub_001FDBF8_0x1fdbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FDBF8_0x1fdbf8");
#endif

    ctx->pc = 0x1fdbf8u;

    // 0x1fdbf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDBF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDBF8u;
            // 0x1fdbfc: 0xac85000c  sw          $a1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FDC00u;
    ctx->pc = 0x1fdc00u;
}
