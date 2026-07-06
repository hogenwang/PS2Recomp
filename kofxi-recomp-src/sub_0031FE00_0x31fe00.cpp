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

// Function: sub_0031FE00
// Address: 0x31fe00 - 0x31fe50
void sub_0031FE00_0x31fe00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031FE00_0x31fe00");
#endif

    ctx->pc = 0x31fe00u;

    // 0x31fe00: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x31fe00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x31fe04: 0x8463db20  lh          $v1, -0x24E0($v1)
    ctx->pc = 0x31fe04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957856)));
    // 0x31fe08: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31FE08u;
    {
        const bool branch_taken_0x31fe08 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x31fe08) {
            ctx->pc = 0x31FE18u;
            goto label_31fe18;
        }
    }
    ctx->pc = 0x31FE10u;
    // 0x31fe10: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x31fe10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x31fe14: 0xa460db20  sh          $zero, -0x24E0($v1)
    ctx->pc = 0x31fe14u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294957856), (uint16_t)GPR_U32(ctx, 0));
label_31fe18:
    // 0x31fe18: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x31fe18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x31fe1c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x31fe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x31fe20: 0x9484f100  lhu         $a0, -0xF00($a0)
    ctx->pc = 0x31fe20u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294963456)));
    // 0x31fe24: 0x8463db20  lh          $v1, -0x24E0($v1)
    ctx->pc = 0x31fe24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957856)));
    // 0x31fe28: 0x2484fd80  addiu       $a0, $a0, -0x280
    ctx->pc = 0x31fe28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966656));
    // 0x31fe2c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x31fe2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x31fe30: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31FE30u;
    {
        const bool branch_taken_0x31fe30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31fe30) {
            ctx->pc = 0x31FE40u;
            goto label_31fe40;
        }
    }
    ctx->pc = 0x31FE38u;
    // 0x31fe38: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x31fe38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x31fe3c: 0xa464db20  sh          $a0, -0x24E0($v1)
    ctx->pc = 0x31fe3cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294957856), (uint16_t)GPR_U32(ctx, 4));
label_31fe40:
    // 0x31fe40: 0x3e00008  jr          $ra
    ctx->pc = 0x31FE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FE40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FE48u;
    // 0x31fe48: 0x0  nop
    ctx->pc = 0x31fe48u;
    // NOP
    // 0x31fe4c: 0x0  nop
    ctx->pc = 0x31fe4cu;
    // NOP
}
