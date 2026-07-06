#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001659A0
// Address: 0x1659a0 - 0x1659e0
void sub_001659A0_0x1659a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001659A0_0x1659a0");
#endif

    ctx->pc = 0x1659a0u;

    // 0x1659a0: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x1659a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x1659a4: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x1659a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1659a8: 0x41103  sra         $v0, $a0, 4
    ctx->pc = 0x1659a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 4));
    // 0x1659ac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1659acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1659b0: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x1659b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x1659b4: 0x244247e0  addiu       $v0, $v0, 0x47E0
    ctx->pc = 0x1659b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18400));
    // 0x1659b8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1659b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1659bc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1659bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1659c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1659c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1659c4: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x1659c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x1659c8: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1659c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1659cc: 0xc41806  srlv        $v1, $a0, $a2
    ctx->pc = 0x1659ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 6) & 0x1F));
    // 0x1659d0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1659d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1659d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1659D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1659D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1659D4u;
            // 0x1659d8: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1659DCu;
    // 0x1659dc: 0x0  nop
    ctx->pc = 0x1659dcu;
    // NOP
    ctx->pc = 0x1659e0u;
}
