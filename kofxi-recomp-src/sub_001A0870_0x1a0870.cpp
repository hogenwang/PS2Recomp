#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A0870
// Address: 0x1a0870 - 0x1a08b0
void sub_001A0870_0x1a0870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0870_0x1a0870");
#endif

    ctx->pc = 0x1a0870u;

    // 0x1a0870: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a0870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a0874: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1a0874u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1a0878: 0x9066db00  lbu         $a2, -0x2500($v1)
    ctx->pc = 0x1a0878u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957824)));
    // 0x1a087c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a087cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0880: 0xa41804  sllv        $v1, $a0, $a1
    ctx->pc = 0x1a0880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x1a0884: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x1a0884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1a0888: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A0888u;
    {
        const bool branch_taken_0x1a0888 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0888) {
            ctx->pc = 0x1A08A8u;
            goto label_1a08a8;
        }
    }
    ctx->pc = 0x1A0890u;
    // 0x1a0890: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a0890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a0894: 0x2463da90  addiu       $v1, $v1, -0x2570
    ctx->pc = 0x1a0894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957712));
    // 0x1a0898: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x1a0898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1a089c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1a089cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a08a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a08a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a08a4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1a08a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_1a08a8:
    // 0x1a08a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A08A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A08B0u;
    ctx->pc = 0x1a08b0u;
}
