#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A0B80
// Address: 0x1a0b80 - 0x1a0bc0
void sub_001A0B80_0x1a0b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0B80_0x1a0b80");
#endif

    ctx->pc = 0x1a0b80u;

    // 0x1a0b80: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1a0b80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1a0b84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a0b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0b88: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a0b88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a0b8c: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x1a0b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x1a0b90: 0x2484dab8  addiu       $a0, $a0, -0x2548
    ctx->pc = 0x1a0b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957752));
    // 0x1a0b94: 0x601827  not         $v1, $v1
    ctx->pc = 0x1a0b94u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x1a0b98: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1a0b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a0b9c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1a0b9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a0ba0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1a0ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0ba4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a0ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a0ba8: 0x9064db00  lbu         $a0, -0x2500($v1)
    ctx->pc = 0x1a0ba8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957824)));
    // 0x1a0bac: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a0bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a0bb0: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1a0bb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1a0bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0BB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0BB4u;
            // 0x1a0bb8: 0xa064db00  sb          $a0, -0x2500($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294957824), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0BBCu;
    // 0x1a0bbc: 0x0  nop
    ctx->pc = 0x1a0bbcu;
    // NOP
    ctx->pc = 0x1a0bc0u;
}
