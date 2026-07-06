#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A0CF0
// Address: 0x1a0cf0 - 0x1a0d40
void sub_001A0CF0_0x1a0cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0CF0_0x1a0cf0");
#endif

    ctx->pc = 0x1a0cf0u;

    // 0x1a0cf0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a0cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a0cf4: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a0cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a0cf8: 0x9067dae0  lbu         $a3, -0x2520($v1)
    ctx->pc = 0x1a0cf8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957792)));
    // 0x1a0cfc: 0x24050300  addiu       $a1, $zero, 0x300
    ctx->pc = 0x1a0cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x1a0d00: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a0d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a0d04: 0x9466dab0  lhu         $a2, -0x2550($v1)
    ctx->pc = 0x1a0d04u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957744)));
    // 0x1a0d08: 0x34e30002  ori         $v1, $a3, 0x2
    ctx->pc = 0x1a0d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2);
    // 0x1a0d0c: 0x30c6ff00  andi        $a2, $a2, 0xFF00
    ctx->pc = 0x1a0d0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x1a0d10: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1a0d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1a0d14: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x1a0d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x1a0d18: 0x14c50006  bne         $a2, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0D18u;
    {
        const bool branch_taken_0x1a0d18 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x1A0D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0D18u;
            // 0x1a0d1c: 0xa083dae0  sb          $v1, -0x2520($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4294957792), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0d18) {
            ctx->pc = 0x1A0D34u;
            goto label_1a0d34;
        }
    }
    ctx->pc = 0x1A0D20u;
    // 0x1a0d20: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a0d20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a0d24: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a0d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a0d28: 0x9084dad8  lbu         $a0, -0x2528($a0)
    ctx->pc = 0x1a0d28u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294957784)));
    // 0x1a0d2c: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x1a0d2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x1a0d30: 0xa064dad8  sb          $a0, -0x2528($v1)
    ctx->pc = 0x1a0d30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957784), (uint8_t)GPR_U32(ctx, 4));
label_1a0d34:
    // 0x1a0d34: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0D34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0D3Cu;
    // 0x1a0d3c: 0x0  nop
    ctx->pc = 0x1a0d3cu;
    // NOP
    ctx->pc = 0x1a0d40u;
}
