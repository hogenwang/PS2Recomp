#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DED78
// Address: 0x1ded78 - 0x1dedb0
void sub_001DED78_0x1ded78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DED78_0x1ded78");
#endif

    ctx->pc = 0x1ded78u;

    // 0x1ded78: 0x248403f0  addiu       $a0, $a0, 0x3F0
    ctx->pc = 0x1ded78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1008));
    // 0x1ded7c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1ded7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1ded80: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ded80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ded84: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1ded84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ded88: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1ded88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ded8c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DED8Cu;
    {
        const bool branch_taken_0x1ded8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DED90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DED8Cu;
            // 0x1ded90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ded8c) {
            ctx->pc = 0x1DEDA4u;
            goto label_1deda4;
        }
    }
    ctx->pc = 0x1DED94u;
    // 0x1ded94: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x1ded94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ded98: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x1ded98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x1ded9c: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x1ded9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1deda0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1deda0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1deda4:
    // 0x1deda4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEDA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEDA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEDA4u;
            // 0x1deda8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DEDACu;
    // 0x1dedac: 0x0  nop
    ctx->pc = 0x1dedacu;
    // NOP
    ctx->pc = 0x1dedb0u;
}
