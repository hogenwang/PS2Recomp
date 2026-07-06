#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001899A0
// Address: 0x1899a0 - 0x1899b0
void sub_001899A0_0x1899a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001899A0_0x1899a0");
#endif

    ctx->pc = 0x1899a0u;

    // 0x1899a0: 0xa48004f8  sh          $zero, 0x4F8($a0)
    ctx->pc = 0x1899a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1272), (uint16_t)GPR_U32(ctx, 0));
    // 0x1899a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1899A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1899A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1899A4u;
            // 0x1899a8: 0xa48004f6  sh          $zero, 0x4F6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1270), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1899ACu;
    // 0x1899ac: 0x0  nop
    ctx->pc = 0x1899acu;
    // NOP
    ctx->pc = 0x1899b0u;
}
