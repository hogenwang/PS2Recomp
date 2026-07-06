#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030D2B0
// Address: 0x30d2b0 - 0x30d300
void sub_0030D2B0_0x30d2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D2B0_0x30d2b0");
#endif

    switch (ctx->pc) {
        case 0x30d2c8u: goto label_30d2c8;
        case 0x30d2d0u: goto label_30d2d0;
        default: break;
    }

    ctx->pc = 0x30d2b0u;

    // 0x30d2b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30d2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30d2b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30d2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30d2b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30d2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30d2bc: 0x8c900018  lw          $s0, 0x18($a0)
    ctx->pc = 0x30d2bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x30d2c0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x30D2C0u;
    {
        const bool branch_taken_0x30d2c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d2c0) {
            ctx->pc = 0x30D2E8u;
            goto label_30d2e8;
        }
    }
    ctx->pc = 0x30D2C8u;
label_30d2c8:
    // 0x30d2c8: 0xc0c31e0  jal         func_30C780
    ctx->pc = 0x30D2C8u;
    SET_GPR_U32(ctx, 31, 0x30D2D0u);
    ctx->pc = 0x30D2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30D2C8u;
            // 0x30d2cc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30C780u;
    if (runtime->hasFunction(0x30C780u)) {
        auto targetFn = runtime->lookupFunction(0x30C780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D2D0u; }
        if (ctx->pc != 0x30D2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030C780_0x30c780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30D2D0u; }
        if (ctx->pc != 0x30D2D0u) { return; }
    }
    ctx->pc = 0x30D2D0u;
label_30d2d0:
    // 0x30d2d0: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x30d2d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30d2d4: 0x0  nop
    ctx->pc = 0x30d2d4u;
    // NOP
    // 0x30d2d8: 0x0  nop
    ctx->pc = 0x30d2d8u;
    // NOP
    // 0x30d2dc: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30D2DCu;
    {
        const bool branch_taken_0x30d2dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d2dc) {
            ctx->pc = 0x30D2C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30d2c8;
        }
    }
    ctx->pc = 0x30D2E4u;
    // 0x30d2e4: 0x0  nop
    ctx->pc = 0x30d2e4u;
    // NOP
label_30d2e8:
    // 0x30d2e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30d2e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d2ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30d2ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30d2f0: 0x3e00008  jr          $ra
    ctx->pc = 0x30D2F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30D2F0u;
            // 0x30d2f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30D2F8u;
    // 0x30d2f8: 0x0  nop
    ctx->pc = 0x30d2f8u;
    // NOP
    // 0x30d2fc: 0x0  nop
    ctx->pc = 0x30d2fcu;
    // NOP
    ctx->pc = 0x30d300u;
}
