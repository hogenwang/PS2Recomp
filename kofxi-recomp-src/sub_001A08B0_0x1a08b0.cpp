#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A08B0
// Address: 0x1a08b0 - 0x1a0900
void sub_001A08B0_0x1a08b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A08B0_0x1a08b0");
#endif

    ctx->pc = 0x1a08b0u;

    // 0x1a08b0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a08b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a08b4: 0x9066db00  lbu         $a2, -0x2500($v1)
    ctx->pc = 0x1a08b4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957824)));
    // 0x1a08b8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a08b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a08bc: 0x30c50003  andi        $a1, $a2, 0x3
    ctx->pc = 0x1a08bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x1a08c0: 0x14a3000d  bne         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1A08C0u;
    {
        const bool branch_taken_0x1a08c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a08c0) {
            ctx->pc = 0x1A08F8u;
            goto label_1a08f8;
        }
    }
    ctx->pc = 0x1A08C8u;
    // 0x1a08c8: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1a08c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1a08cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a08ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a08d0: 0x832004  sllv        $a0, $v1, $a0
    ctx->pc = 0x1a08d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1a08d4: 0x802827  not         $a1, $a0
    ctx->pc = 0x1a08d4u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
    // 0x1a08d8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a08d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a08dc: 0x9064daf0  lbu         $a0, -0x2510($v1)
    ctx->pc = 0x1a08dcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957808)));
    // 0x1a08e0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1a08e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1a08e4: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x1a08e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1a08e8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1a08e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1a08ec: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a08ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a08f0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1a08f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1a08f4: 0xa064daf0  sb          $a0, -0x2510($v1)
    ctx->pc = 0x1a08f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957808), (uint8_t)GPR_U32(ctx, 4));
label_1a08f8:
    // 0x1a08f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A08F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0900u;
    ctx->pc = 0x1a0900u;
}
