#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015ED20
// Address: 0x15ed20 - 0x15ed70
void sub_0015ED20_0x15ed20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015ED20_0x15ed20");
#endif

    ctx->pc = 0x15ed20u;

    // 0x15ed20: 0xa0800012  sb          $zero, 0x12($a0)
    ctx->pc = 0x15ed20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x15ed24: 0xa0800013  sb          $zero, 0x13($a0)
    ctx->pc = 0x15ed24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x15ed28: 0xa0800014  sb          $zero, 0x14($a0)
    ctx->pc = 0x15ed28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x15ed2c: 0xa0800015  sb          $zero, 0x15($a0)
    ctx->pc = 0x15ed2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 21), (uint8_t)GPR_U32(ctx, 0));
    // 0x15ed30: 0xa0800016  sb          $zero, 0x16($a0)
    ctx->pc = 0x15ed30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 22), (uint8_t)GPR_U32(ctx, 0));
    // 0x15ed34: 0xa0800017  sb          $zero, 0x17($a0)
    ctx->pc = 0x15ed34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 23), (uint8_t)GPR_U32(ctx, 0));
    // 0x15ed38: 0xa0800018  sb          $zero, 0x18($a0)
    ctx->pc = 0x15ed38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x15ed3c: 0xa0800019  sb          $zero, 0x19($a0)
    ctx->pc = 0x15ed3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 25), (uint8_t)GPR_U32(ctx, 0));
    // 0x15ed40: 0xa080001a  sb          $zero, 0x1A($a0)
    ctx->pc = 0x15ed40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 0));
    // 0x15ed44: 0xa080001b  sb          $zero, 0x1B($a0)
    ctx->pc = 0x15ed44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x15ed48: 0xa080001c  sb          $zero, 0x1C($a0)
    ctx->pc = 0x15ed48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x15ed4c: 0xa080001d  sb          $zero, 0x1D($a0)
    ctx->pc = 0x15ed4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 29), (uint8_t)GPR_U32(ctx, 0));
    // 0x15ed50: 0xa080001e  sb          $zero, 0x1E($a0)
    ctx->pc = 0x15ed50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 30), (uint8_t)GPR_U32(ctx, 0));
    // 0x15ed54: 0xa080001f  sb          $zero, 0x1F($a0)
    ctx->pc = 0x15ed54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 31), (uint8_t)GPR_U32(ctx, 0));
    // 0x15ed58: 0xa480000e  sh          $zero, 0xE($a0)
    ctx->pc = 0x15ed58u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x15ed5c: 0x3e00008  jr          $ra
    ctx->pc = 0x15ED5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15ED60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15ED5Cu;
            // 0x15ed60: 0xa4800010  sh          $zero, 0x10($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15ED64u;
    // 0x15ed64: 0x0  nop
    ctx->pc = 0x15ed64u;
    // NOP
    // 0x15ed68: 0x0  nop
    ctx->pc = 0x15ed68u;
    // NOP
    // 0x15ed6c: 0x0  nop
    ctx->pc = 0x15ed6cu;
    // NOP
    ctx->pc = 0x15ed70u;
}
