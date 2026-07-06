#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019F5D0
// Address: 0x19f5d0 - 0x19f5f0
void sub_0019F5D0_0x19f5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F5D0_0x19f5d0");
#endif

    ctx->pc = 0x19f5d0u;

    // 0x19f5d0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x19f5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19f5d4: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x19f5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19f5d8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19f5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19f5dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19f5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19f5e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19f5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19f5e4: 0x3e00008  jr          $ra
    ctx->pc = 0x19F5E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F5E4u;
            // 0x19f5e8: 0x211c2  srl         $v0, $v0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F5ECu;
    // 0x19f5ec: 0x0  nop
    ctx->pc = 0x19f5ecu;
    // NOP
    ctx->pc = 0x19f5f0u;
}
