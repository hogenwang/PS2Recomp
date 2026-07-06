#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00322AE0
// Address: 0x322ae0 - 0x322b00
void sub_00322AE0_0x322ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322AE0_0x322ae0");
#endif

    ctx->pc = 0x322ae0u;

    // 0x322ae0: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x322ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x322ae4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x322ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x322ae8: 0x2442f018  addiu       $v0, $v0, -0xFE8
    ctx->pc = 0x322ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963224));
    // 0x322aec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x322aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x322af0: 0x3e00008  jr          $ra
    ctx->pc = 0x322AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x322AF0u;
            // 0x322af4: 0x94420000  lhu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x322AF8u;
    // 0x322af8: 0x0  nop
    ctx->pc = 0x322af8u;
    // NOP
    // 0x322afc: 0x0  nop
    ctx->pc = 0x322afcu;
    // NOP
    ctx->pc = 0x322b00u;
}
