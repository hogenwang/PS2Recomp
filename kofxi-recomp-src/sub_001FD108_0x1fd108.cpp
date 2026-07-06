#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FD108
// Address: 0x1fd108 - 0x1fd110
void sub_001FD108_0x1fd108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD108_0x1fd108");
#endif

    ctx->pc = 0x1fd108u;

    // 0x1fd108: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD108u;
            // 0x1fd10c: 0xac851034  sw          $a1, 0x1034($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4148), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FD110u;
    ctx->pc = 0x1fd110u;
}
