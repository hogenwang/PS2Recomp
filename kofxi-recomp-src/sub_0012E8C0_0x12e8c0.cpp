#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012E8C0
// Address: 0x12e8c0 - 0x12e8f0
void sub_0012E8C0_0x12e8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E8C0_0x12e8c0");
#endif

    ctx->pc = 0x12e8c0u;

    // 0x12e8c0: 0x30820030  andi        $v0, $a0, 0x30
    ctx->pc = 0x12e8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)48);
    // 0x12e8c4: 0x22902  srl         $a1, $v0, 4
    ctx->pc = 0x12e8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x12e8c8: 0x3082000c  andi        $v0, $a0, 0xC
    ctx->pc = 0x12e8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x12e8cc: 0x21882  srl         $v1, $v0, 2
    ctx->pc = 0x12e8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x12e8d0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x12e8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x12e8d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12e8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12e8d8: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x12e8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x12e8dc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x12e8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x12e8e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12e8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12e8e4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x12e8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x12e8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x12E8E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E8E8u;
            // 0x12e8ec: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12E8F0u;
    ctx->pc = 0x12e8f0u;
}
