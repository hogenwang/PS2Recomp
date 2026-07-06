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

// Function: sub_00203D20
// Address: 0x203d20 - 0x203da0
void sub_00203D20_0x203d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203D20_0x203d20");
#endif

    ctx->pc = 0x203d20u;

    // 0x203d20: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x203d20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x203d24: 0x240b00ff  addiu       $t3, $zero, 0xFF
    ctx->pc = 0x203d24u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x203d28: 0x8c849bf8  lw          $a0, -0x6408($a0)
    ctx->pc = 0x203d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941688)));
    // 0x203d2c: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x203d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x203d30: 0x3c0901c1  lui         $t1, 0x1C1
    ctx->pc = 0x203d30u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)449 << 16));
    // 0x203d34: 0x3c0801c1  lui         $t0, 0x1C1
    ctx->pc = 0x203d34u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)449 << 16));
    // 0x203d38: 0x3c0701c1  lui         $a3, 0x1C1
    ctx->pc = 0x203d38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)449 << 16));
    // 0x203d3c: 0x3c0601c1  lui         $a2, 0x1C1
    ctx->pc = 0x203d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)449 << 16));
    // 0x203d40: 0xa08b0add  sb          $t3, 0xADD($a0)
    ctx->pc = 0x203d40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2781), (uint8_t)GPR_U32(ctx, 11));
    // 0x203d44: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x203d44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x203d48: 0x8c6a9bf8  lw          $t2, -0x6408($v1)
    ctx->pc = 0x203d48u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x203d4c: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x203d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x203d50: 0xa14b0b05  sb          $t3, 0xB05($t2)
    ctx->pc = 0x203d50u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2821), (uint8_t)GPR_U32(ctx, 11));
    // 0x203d54: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x203d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x203d58: 0x8d299bf8  lw          $t1, -0x6408($t1)
    ctx->pc = 0x203d58u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294941688)));
    // 0x203d5c: 0xa12b0b2d  sb          $t3, 0xB2D($t1)
    ctx->pc = 0x203d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2861), (uint8_t)GPR_U32(ctx, 11));
    // 0x203d60: 0x8d089bf8  lw          $t0, -0x6408($t0)
    ctx->pc = 0x203d60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294941688)));
    // 0x203d64: 0xa10b0adc  sb          $t3, 0xADC($t0)
    ctx->pc = 0x203d64u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2780), (uint8_t)GPR_U32(ctx, 11));
    // 0x203d68: 0x8ce79bf8  lw          $a3, -0x6408($a3)
    ctx->pc = 0x203d68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294941688)));
    // 0x203d6c: 0xa0eb0b04  sb          $t3, 0xB04($a3)
    ctx->pc = 0x203d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2820), (uint8_t)GPR_U32(ctx, 11));
    // 0x203d70: 0x8cc69bf8  lw          $a2, -0x6408($a2)
    ctx->pc = 0x203d70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294941688)));
    // 0x203d74: 0xa0cb0b2c  sb          $t3, 0xB2C($a2)
    ctx->pc = 0x203d74u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2860), (uint8_t)GPR_U32(ctx, 11));
    // 0x203d78: 0x8ca59bf8  lw          $a1, -0x6408($a1)
    ctx->pc = 0x203d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294941688)));
    // 0x203d7c: 0xa0a00ad9  sb          $zero, 0xAD9($a1)
    ctx->pc = 0x203d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2777), (uint8_t)GPR_U32(ctx, 0));
    // 0x203d80: 0x8c849bf8  lw          $a0, -0x6408($a0)
    ctx->pc = 0x203d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941688)));
    // 0x203d84: 0xa0800b01  sb          $zero, 0xB01($a0)
    ctx->pc = 0x203d84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2817), (uint8_t)GPR_U32(ctx, 0));
    // 0x203d88: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x203d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x203d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x203D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D8Cu;
        // 0x203d90: 0xa0600b29  sb          $zero, 0xB29($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2857), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203D94u;
    // 0x203d94: 0x0  nop
    ctx->pc = 0x203d94u;
    // NOP
    // 0x203d98: 0x0  nop
    ctx->pc = 0x203d98u;
    // NOP
    // 0x203d9c: 0x0  nop
    ctx->pc = 0x203d9cu;
    // NOP
    if (ctx->pc == 0x203d9cu) { ctx->pc = 0x203da0u; }
}
