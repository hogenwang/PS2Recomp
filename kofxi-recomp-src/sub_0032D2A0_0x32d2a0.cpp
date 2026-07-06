#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0032D2A0
// Address: 0x32d2a0 - 0x32d300
void sub_0032D2A0_0x32d2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D2A0_0x32d2a0");
#endif

    switch (ctx->pc) {
        case 0x32d2c4u: goto label_32d2c4;
        default: break;
    }

    ctx->pc = 0x32d2a0u;

    // 0x32d2a0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x32d2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x32d2a4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x32d2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x32d2a8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32D2A8u;
    {
        const bool branch_taken_0x32d2a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32d2a8) {
            ctx->pc = 0x32D2B8u;
            goto label_32d2b8;
        }
    }
    ctx->pc = 0x32D2B0u;
    // 0x32d2b0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x32D2B0u;
    {
        const bool branch_taken_0x32d2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D2B0u;
            // 0x32d2b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d2b0) {
            ctx->pc = 0x32D2F8u;
            goto label_32d2f8;
        }
    }
    ctx->pc = 0x32D2B8u;
label_32d2b8:
    // 0x32d2b8: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x32d2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x32d2bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32d2bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d2c0: 0x24849700  addiu       $a0, $a0, -0x6900
    ctx->pc = 0x32d2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940416));
label_32d2c4:
    // 0x32d2c4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x32d2c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32d2c8: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x32D2C8u;
    {
        const bool branch_taken_0x32d2c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x32d2c8) {
            ctx->pc = 0x32D2CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32D2C8u;
            // 0x32d2cc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32D2E8u;
            goto label_32d2e8;
        }
    }
    ctx->pc = 0x32D2D0u;
    // 0x32d2d0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x32d2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x32d2d4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x32d2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x32d2d8: 0x24429708  addiu       $v0, $v0, -0x68F8
    ctx->pc = 0x32d2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940424));
    // 0x32d2dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32d2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32d2e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x32D2E0u;
    {
        const bool branch_taken_0x32d2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D2E0u;
            // 0x32d2e4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d2e0) {
            ctx->pc = 0x32D2F8u;
            goto label_32d2f8;
        }
    }
    ctx->pc = 0x32D2E8u;
label_32d2e8:
    // 0x32d2e8: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x32d2e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x32d2ec: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x32D2ECu;
    {
        const bool branch_taken_0x32d2ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32D2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32D2ECu;
            // 0x32d2f0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d2ec) {
            ctx->pc = 0x32D2C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32d2c4;
        }
    }
    ctx->pc = 0x32D2F4u;
    // 0x32d2f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32d2f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32d2f8:
    // 0x32d2f8: 0x3e00008  jr          $ra
    ctx->pc = 0x32D2F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32D300u;
    ctx->pc = 0x32d300u;
}
