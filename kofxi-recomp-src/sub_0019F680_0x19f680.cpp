#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019F680
// Address: 0x19f680 - 0x19f690
void sub_0019F680_0x19f680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F680_0x19f680");
#endif

    ctx->pc = 0x19f680u;

    // 0x19f680: 0x8049c48  j           func_127120
    ctx->pc = 0x19F680u;
    ctx->pc = 0x19F684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F680u;
    // 0x19f684: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    sub_00127120_0x127120(rdram, ctx, runtime); return;
    ctx->pc = 0x19F688u;
    // 0x19f688: 0x0  nop
    ctx->pc = 0x19f688u;
    // NOP
    // 0x19f68c: 0x0  nop
    ctx->pc = 0x19f68cu;
    // NOP
}
