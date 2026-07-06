#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013E0B0
// Address: 0x13e0b0 - 0x13e0f0
void sub_0013E0B0_0x13e0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E0B0_0x13e0b0");
#endif

    ctx->pc = 0x13e0b0u;

    // 0x13e0b0: 0x8c83048c  lw          $v1, 0x48C($a0)
    ctx->pc = 0x13e0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1164)));
    // 0x13e0b4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x13e0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x13e0b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13e0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13e0bc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E0BCu;
    {
        const bool branch_taken_0x13e0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e0bc) {
            ctx->pc = 0x13E0C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E0BCu;
            // 0x13e0c0: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E0CCu;
            goto label_13e0cc;
        }
    }
    ctx->pc = 0x13E0C4u;
    // 0x13e0c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13E0C4u;
    {
        const bool branch_taken_0x13e0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E0C4u;
            // 0x13e0c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e0c4) {
            ctx->pc = 0x13E0E0u;
            goto label_13e0e0;
        }
    }
    ctx->pc = 0x13E0CCu;
label_13e0cc:
    // 0x13e0cc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13e0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13e0d0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E0D0u;
    {
        const bool branch_taken_0x13e0d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e0d0) {
            ctx->pc = 0x13E0D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E0D0u;
            // 0x13e0d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E0E0u;
            goto label_13e0e0;
        }
    }
    ctx->pc = 0x13E0D8u;
    // 0x13e0d8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x13E0D8u;
    {
        const bool branch_taken_0x13e0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E0D8u;
            // 0x13e0dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e0d8) {
            ctx->pc = 0x13E0E0u;
            goto label_13e0e0;
        }
    }
    ctx->pc = 0x13E0E0u;
label_13e0e0:
    // 0x13e0e0: 0x3e00008  jr          $ra
    ctx->pc = 0x13E0E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13E0E8u;
    // 0x13e0e8: 0x0  nop
    ctx->pc = 0x13e0e8u;
    // NOP
    // 0x13e0ec: 0x0  nop
    ctx->pc = 0x13e0ecu;
    // NOP
    ctx->pc = 0x13e0f0u;
}
