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

// Function: sub_0031FE50
// Address: 0x31fe50 - 0x31fea0
void sub_0031FE50_0x31fe50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031FE50_0x31fe50");
#endif

    ctx->pc = 0x31fe50u;

    // 0x31fe50: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x31fe50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x31fe54: 0x8463db22  lh          $v1, -0x24DE($v1)
    ctx->pc = 0x31fe54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957858)));
    // 0x31fe58: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31FE58u;
    {
        const bool branch_taken_0x31fe58 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x31fe58) {
            ctx->pc = 0x31FE68u;
            goto label_31fe68;
        }
    }
    ctx->pc = 0x31FE60u;
    // 0x31fe60: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x31fe60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x31fe64: 0xa460db22  sh          $zero, -0x24DE($v1)
    ctx->pc = 0x31fe64u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294957858), (uint16_t)GPR_U32(ctx, 0));
label_31fe68:
    // 0x31fe68: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x31fe68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x31fe6c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x31fe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x31fe70: 0x9484f102  lhu         $a0, -0xEFE($a0)
    ctx->pc = 0x31fe70u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294963458)));
    // 0x31fe74: 0x8463db22  lh          $v1, -0x24DE($v1)
    ctx->pc = 0x31fe74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957858)));
    // 0x31fe78: 0x2484fe20  addiu       $a0, $a0, -0x1E0
    ctx->pc = 0x31fe78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966816));
    // 0x31fe7c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x31fe7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x31fe80: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31FE80u;
    {
        const bool branch_taken_0x31fe80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31fe80) {
            ctx->pc = 0x31FE90u;
            goto label_31fe90;
        }
    }
    ctx->pc = 0x31FE88u;
    // 0x31fe88: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x31fe88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x31fe8c: 0xa464db22  sh          $a0, -0x24DE($v1)
    ctx->pc = 0x31fe8cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294957858), (uint16_t)GPR_U32(ctx, 4));
label_31fe90:
    // 0x31fe90: 0x3e00008  jr          $ra
    ctx->pc = 0x31FE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FE90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FE98u;
    // 0x31fe98: 0x0  nop
    ctx->pc = 0x31fe98u;
    // NOP
    // 0x31fe9c: 0x0  nop
    ctx->pc = 0x31fe9cu;
    // NOP
}
