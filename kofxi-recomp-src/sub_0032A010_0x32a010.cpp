#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0032A010
// Address: 0x32a010 - 0x32a030
void sub_0032A010_0x32a010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A010_0x32a010");
#endif

    ctx->pc = 0x32a010u;

    // 0x32a010: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x32a010u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x32a014: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x32a014u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x32a018: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x32a018u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x32a01c: 0x80ca7fc  j           func_329FF0
    ctx->pc = 0x32A01Cu;
    ctx->pc = 0x32A020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32A01Cu;
            // 0x32a020: 0xa480000a  sh          $zero, 0xA($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x329FF0u;
    if (runtime->hasFunction(0x329FF0u)) {
        auto targetFn = runtime->lookupFunction(0x329FF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00329FF0_0x329ff0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x32A024u;
    // 0x32a024: 0x0  nop
    ctx->pc = 0x32a024u;
    // NOP
    // 0x32a028: 0x0  nop
    ctx->pc = 0x32a028u;
    // NOP
    // 0x32a02c: 0x0  nop
    ctx->pc = 0x32a02cu;
    // NOP
    ctx->pc = 0x32a030u;
}
