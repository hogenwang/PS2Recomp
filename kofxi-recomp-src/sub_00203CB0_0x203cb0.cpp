#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00203CB0
// Address: 0x203cb0 - 0x203d20
void sub_00203CB0_0x203cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203CB0_0x203cb0");
#endif

    ctx->pc = 0x203cb0u;

    // 0x203cb0: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x203cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x203cb4: 0x3c0801c1  lui         $t0, 0x1C1
    ctx->pc = 0x203cb4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)449 << 16));
    // 0x203cb8: 0x8c649bf8  lw          $a0, -0x6408($v1)
    ctx->pc = 0x203cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x203cbc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x203cbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203cc0: 0x3c0701c1  lui         $a3, 0x1C1
    ctx->pc = 0x203cc0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)449 << 16));
    // 0x203cc4: 0x3c0601c1  lui         $a2, 0x1C1
    ctx->pc = 0x203cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)449 << 16));
    // 0x203cc8: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x203cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x203ccc: 0xa4800824  sh          $zero, 0x824($a0)
    ctx->pc = 0x203cccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2084), (uint16_t)GPR_U32(ctx, 0));
    // 0x203cd0: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x203cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x203cd4: 0x8c6a9bf8  lw          $t2, -0x6408($v1)
    ctx->pc = 0x203cd4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x203cd8: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x203cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x203cdc: 0xa5400826  sh          $zero, 0x826($t2)
    ctx->pc = 0x203cdcu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2086), (uint16_t)GPR_U32(ctx, 0));
    // 0x203ce0: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x203ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x203ce4: 0x8d089bf8  lw          $t0, -0x6408($t0)
    ctx->pc = 0x203ce4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294941688)));
    // 0x203ce8: 0xa1090854  sb          $t1, 0x854($t0)
    ctx->pc = 0x203ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2132), (uint8_t)GPR_U32(ctx, 9));
    // 0x203cec: 0x8ce79bf8  lw          $a3, -0x6408($a3)
    ctx->pc = 0x203cecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294941688)));
    // 0x203cf0: 0xa0e90855  sb          $t1, 0x855($a3)
    ctx->pc = 0x203cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2133), (uint8_t)GPR_U32(ctx, 9));
    // 0x203cf4: 0x8cc69bf8  lw          $a2, -0x6408($a2)
    ctx->pc = 0x203cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294941688)));
    // 0x203cf8: 0xacc00864  sw          $zero, 0x864($a2)
    ctx->pc = 0x203cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2148), GPR_U32(ctx, 0));
    // 0x203cfc: 0x8ca59bf8  lw          $a1, -0x6408($a1)
    ctx->pc = 0x203cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294941688)));
    // 0x203d00: 0xaca00868  sw          $zero, 0x868($a1)
    ctx->pc = 0x203d00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2152), GPR_U32(ctx, 0));
    // 0x203d04: 0x8c849bf8  lw          $a0, -0x6408($a0)
    ctx->pc = 0x203d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941688)));
    // 0x203d08: 0xa4800860  sh          $zero, 0x860($a0)
    ctx->pc = 0x203d08u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2144), (uint16_t)GPR_U32(ctx, 0));
    // 0x203d0c: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x203d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x203d10: 0x3e00008  jr          $ra
    ctx->pc = 0x203D10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203D10u;
            // 0x203d14: 0xa4600862  sh          $zero, 0x862($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2146), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x203D18u;
    // 0x203d18: 0x0  nop
    ctx->pc = 0x203d18u;
    // NOP
    // 0x203d1c: 0x0  nop
    ctx->pc = 0x203d1cu;
    // NOP
    ctx->pc = 0x203d20u;
}
