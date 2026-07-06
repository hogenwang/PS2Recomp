#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00189F20
// Address: 0x189f20 - 0x189f60
void sub_00189F20_0x189f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189F20_0x189f20");
#endif

    ctx->pc = 0x189f20u;

    // 0x189f20: 0x3082000c  andi        $v0, $a0, 0xC
    ctx->pc = 0x189f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x189f24: 0x22882  srl         $a1, $v0, 2
    ctx->pc = 0x189f24u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x189f28: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x189f28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x189f2c: 0x30820030  andi        $v0, $a0, 0x30
    ctx->pc = 0x189f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)48);
    // 0x189f30: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x189f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x189f34: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x189f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x189f38: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x189f38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x189f3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x189f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x189f40: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x189f40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x189f44: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x189f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x189f48: 0x2463dbc8  addiu       $v1, $v1, -0x2438
    ctx->pc = 0x189f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958024));
    // 0x189f4c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x189f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x189f50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x189f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x189f54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x189f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189f58: 0x3e00008  jr          $ra
    ctx->pc = 0x189F58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189F58u;
            // 0x189f5c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x189F60u;
    ctx->pc = 0x189f60u;
}
