#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A2CA0
// Address: 0x1a2ca0 - 0x1a2d00
void sub_001A2CA0_0x1a2ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2CA0_0x1a2ca0");
#endif

    ctx->pc = 0x1a2ca0u;

    // 0x1a2ca0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a2ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a2ca4: 0x9442ea20  lhu         $v0, -0x15E0($v0)
    ctx->pc = 0x1a2ca4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961696)));
    // 0x1a2ca8: 0x30420f09  andi        $v0, $v0, 0xF09
    ctx->pc = 0x1a2ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3849);
    // 0x1a2cac: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1a2cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1a2cb0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1a2cb0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a2cb4: 0x38420f09  xori        $v0, $v0, 0xF09
    ctx->pc = 0x1a2cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3849);
    // 0x1a2cb8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A2CB8u;
    {
        const bool branch_taken_0x1a2cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2cb8) {
            ctx->pc = 0x1A2CC8u;
            goto label_1a2cc8;
        }
    }
    ctx->pc = 0x1A2CC0u;
    // 0x1a2cc0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A2CC0u;
    {
        const bool branch_taken_0x1a2cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CC0u;
        // 0x1a2cc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2cc0) {
            ctx->pc = 0x1A2CF0u;
            goto label_1a2cf0;
        }
    }
    ctx->pc = 0x1A2CC8u;
label_1a2cc8:
    // 0x1a2cc8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a2cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1a2ccc: 0x9442ea2c  lhu         $v0, -0x15D4($v0)
    ctx->pc = 0x1a2cccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961708)));
    // 0x1a2cd0: 0x30420f09  andi        $v0, $v0, 0xF09
    ctx->pc = 0x1a2cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3849);
    // 0x1a2cd4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1a2cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1a2cd8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1a2cd8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a2cdc: 0x38420f09  xori        $v0, $v0, 0xF09
    ctx->pc = 0x1a2cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3849);
    // 0x1a2ce0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A2CE0u;
    {
        const bool branch_taken_0x1a2ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2ce0) {
            ctx->pc = 0x1A2CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2CE0u;
            // 0x1a2ce4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2CF0u;
            goto label_1a2cf0;
        }
    }
    ctx->pc = 0x1A2CE8u;
    // 0x1a2ce8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1A2CE8u;
    {
        const bool branch_taken_0x1a2ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CE8u;
        // 0x1a2cec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2ce8) {
            ctx->pc = 0x1A2CF0u;
            goto label_1a2cf0;
        }
    }
    ctx->pc = 0x1A2CF0u;
label_1a2cf0:
    // 0x1a2cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2CF8u;
    // 0x1a2cf8: 0x0  nop
    ctx->pc = 0x1a2cf8u;
    // NOP
    // 0x1a2cfc: 0x0  nop
    ctx->pc = 0x1a2cfcu;
    // NOP
}
