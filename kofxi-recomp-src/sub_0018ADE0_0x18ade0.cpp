#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018ADE0
// Address: 0x18ade0 - 0x18ae10
void sub_0018ADE0_0x18ade0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018ADE0_0x18ade0");
#endif

    ctx->pc = 0x18ade0u;

    // 0x18ade0: 0x3082000c  andi        $v0, $a0, 0xC
    ctx->pc = 0x18ade0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x18ade4: 0x22082  srl         $a0, $v0, 2
    ctx->pc = 0x18ade4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x18ade8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x18ade8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18adec: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18adecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18adf0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18adf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18adf4: 0x2442db62  addiu       $v0, $v0, -0x249E
    ctx->pc = 0x18adf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957922));
    // 0x18adf8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18adf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18adfc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18adfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18ae00: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18ae00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18ae04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18ae04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18ae08: 0x3e00008  jr          $ra
    ctx->pc = 0x18AE08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AE08u;
            // 0x18ae0c: 0x94420000  lhu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18AE10u;
    ctx->pc = 0x18ae10u;
}
