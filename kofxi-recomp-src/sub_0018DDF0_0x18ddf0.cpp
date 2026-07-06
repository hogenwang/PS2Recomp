#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018DDF0
// Address: 0x18ddf0 - 0x18de30
void sub_0018DDF0_0x18ddf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018DDF0_0x18ddf0");
#endif

    ctx->pc = 0x18ddf0u;

    // 0x18ddf0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18ddf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18ddf4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18ddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18ddf8: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x18ddf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x18ddfc: 0x2463bcc0  addiu       $v1, $v1, -0x4340
    ctx->pc = 0x18ddfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950080));
    // 0x18de00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18de00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18de04: 0x2442bd94  addiu       $v0, $v0, -0x426C
    ctx->pc = 0x18de04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950292));
    // 0x18de08: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x18de08u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18de0c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x18de0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18de10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18de10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18de14: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x18de14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x18de18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18de18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18de1c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18de1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18de20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18de20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18de24: 0x3e00008  jr          $ra
    ctx->pc = 0x18DE24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DE24u;
            // 0x18de28: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18DE2Cu;
    // 0x18de2c: 0x0  nop
    ctx->pc = 0x18de2cu;
    // NOP
    ctx->pc = 0x18de30u;
}
