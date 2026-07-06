#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A0530
// Address: 0x1a0530 - 0x1a0560
void sub_001A0530_0x1a0530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0530_0x1a0530");
#endif

    ctx->pc = 0x1a0530u;

    // 0x1a0530: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a0530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a0534: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x1a0534u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x1a0538: 0x9467dab0  lhu         $a3, -0x2550($v1)
    ctx->pc = 0x1a0538u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957744)));
    // 0x1a053c: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x1a053cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x1a0540: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a0540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a0544: 0xa4c7daa8  sh          $a3, -0x2558($a2)
    ctx->pc = 0x1a0544u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4294957736), (uint16_t)GPR_U32(ctx, 7));
    // 0x1a0548: 0xa060d9d0  sb          $zero, -0x2630($v1)
    ctx->pc = 0x1a0548u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957520), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a054c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A054Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A054Cu;
            // 0x1a0550: 0xa4a4dab0  sh          $a0, -0x2550($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 4294957744), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0554u;
    // 0x1a0554: 0x0  nop
    ctx->pc = 0x1a0554u;
    // NOP
    // 0x1a0558: 0x0  nop
    ctx->pc = 0x1a0558u;
    // NOP
    // 0x1a055c: 0x0  nop
    ctx->pc = 0x1a055cu;
    // NOP
    ctx->pc = 0x1a0560u;
}
