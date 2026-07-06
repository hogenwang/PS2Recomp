#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022DD48
// Address: 0x22dd48 - 0x22dd58
void sub_0022DD48_0x22dd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022DD48_0x22dd48");
#endif

    ctx->pc = 0x22dd48u;

    // 0x22dd48: 0x94820008  lhu         $v0, 0x8($a0)
    ctx->pc = 0x22dd48u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x22dd4c: 0x3e00008  jr          $ra
    ctx->pc = 0x22DD4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DD4Cu;
            // 0x22dd50: 0xa4a20000  sh          $v0, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22DD54u;
    // 0x22dd54: 0x0  nop
    ctx->pc = 0x22dd54u;
    // NOP
    ctx->pc = 0x22dd58u;
}
