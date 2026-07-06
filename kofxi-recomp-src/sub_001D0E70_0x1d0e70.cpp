#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D0E70
// Address: 0x1d0e70 - 0x1d0ec0
void sub_001D0E70_0x1d0e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0E70_0x1d0e70");
#endif

    switch (ctx->pc) {
        case 0x1d0ea8u: goto label_1d0ea8;
        case 0x1d0eb8u: goto label_1d0eb8;
        default: break;
    }

    ctx->pc = 0x1d0e70u;

    // 0x1d0e70: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x1d0e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1d0e74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d0e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0e78: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0E78u;
    {
        const bool branch_taken_0x1d0e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D0E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0E78u;
            // 0x1d0e7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0e78) {
            ctx->pc = 0x1D0E9Cu;
            goto label_1d0e9c;
        }
    }
    ctx->pc = 0x1D0E80u;
    // 0x1d0e80: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x1d0e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x1d0e84: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D0E84u;
    {
        const bool branch_taken_0x1d0e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d0e84) {
            ctx->pc = 0x1D0E88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0E84u;
            // 0x1d0e88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D0E9Cu;
            goto label_1d0e9c;
        }
    }
    ctx->pc = 0x1D0E8Cu;
    // 0x1d0e8c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d0e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d0e90: 0x54450005  bnel        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D0E90u;
    {
        const bool branch_taken_0x1d0e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1d0e90) {
            ctx->pc = 0x1D0E94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0E90u;
            // 0x1d0e94: 0x8c820134  lw          $v0, 0x134($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 308)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D0EA8u;
            goto label_1d0ea8;
        }
    }
    ctx->pc = 0x1D0E98u;
    // 0x1d0e98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0e9c:
    // 0x1d0e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0E9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0E9Cu;
            // 0x1d0ea0: 0xac820038  sw          $v0, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D0EA4u;
    // 0x1d0ea4: 0x0  nop
    ctx->pc = 0x1d0ea4u;
    // NOP
label_1d0ea8:
    // 0x1d0ea8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0EA8u;
    {
        const bool branch_taken_0x1d0ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D0EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0EA8u;
            // 0x1d0eac: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ea8) {
            ctx->pc = 0x1D0EB8u;
            goto label_1d0eb8;
        }
    }
    ctx->pc = 0x1D0EB0u;
    // 0x1d0eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0EB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0EB0u;
            // 0x1d0eb4: 0xac820038  sw          $v0, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D0EB8u;
label_1d0eb8:
    // 0x1d0eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0EB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0EB8u;
            // 0x1d0ebc: 0xac850038  sw          $a1, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D0EC0u;
    ctx->pc = 0x1d0ec0u;
}
