#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020A3E0
// Address: 0x20a3e0 - 0x20a400
void sub_0020A3E0_0x20a3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A3E0_0x20a3e0");
#endif

    ctx->pc = 0x20a3e0u;

    // 0x20a3e0: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20a3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20a3e4: 0x8c64a060  lw          $a0, -0x5FA0($v1)
    ctx->pc = 0x20a3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942816)));
    // 0x20a3e8: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20a3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20a3ec: 0x34840020  ori         $a0, $a0, 0x20
    ctx->pc = 0x20a3ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
    // 0x20a3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x20A3F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A3F0u;
            // 0x20a3f4: 0xac64a060  sw          $a0, -0x5FA0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294942816), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20A3F8u;
    // 0x20a3f8: 0x0  nop
    ctx->pc = 0x20a3f8u;
    // NOP
    // 0x20a3fc: 0x0  nop
    ctx->pc = 0x20a3fcu;
    // NOP
    ctx->pc = 0x20a400u;
}
