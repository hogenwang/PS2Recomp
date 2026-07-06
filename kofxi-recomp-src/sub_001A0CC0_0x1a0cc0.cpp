#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A0CC0
// Address: 0x1a0cc0 - 0x1a0cf0
void sub_001A0CC0_0x1a0cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0CC0_0x1a0cc0");
#endif

    ctx->pc = 0x1a0cc0u;

    // 0x1a0cc0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a0cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a0cc4: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a0cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a0cc8: 0x9066dae0  lbu         $a2, -0x2520($v1)
    ctx->pc = 0x1a0cc8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957792)));
    // 0x1a0ccc: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x1a0cccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x1a0cd0: 0x9084dad8  lbu         $a0, -0x2528($a0)
    ctx->pc = 0x1a0cd0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294957784)));
    // 0x1a0cd4: 0x30c600fc  andi        $a2, $a2, 0xFC
    ctx->pc = 0x1a0cd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)252);
    // 0x1a0cd8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a0cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a0cdc: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x1a0cdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x1a0ce0: 0xa0a6dae0  sb          $a2, -0x2520($a1)
    ctx->pc = 0x1a0ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294957792), (uint8_t)GPR_U32(ctx, 6));
    // 0x1a0ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0CE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0CE4u;
            // 0x1a0ce8: 0xa064dad8  sb          $a0, -0x2528($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294957784), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0CECu;
    // 0x1a0cec: 0x0  nop
    ctx->pc = 0x1a0cecu;
    // NOP
    ctx->pc = 0x1a0cf0u;
}
