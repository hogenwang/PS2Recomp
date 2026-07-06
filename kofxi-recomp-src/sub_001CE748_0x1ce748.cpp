#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CE748
// Address: 0x1ce748 - 0x1ce788
void sub_001CE748_0x1ce748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE748_0x1ce748");
#endif

    switch (ctx->pc) {
        case 0x1ce76cu: goto label_1ce76c;
        default: break;
    }

    ctx->pc = 0x1ce748u;

    // 0x1ce748: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ce748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ce74c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1ce74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1ce750: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ce750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ce754: 0x2450e55c  addiu       $s0, $v0, -0x1AA4
    ctx->pc = 0x1ce754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960476));
    // 0x1ce758: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ce758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ce75c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE75Cu;
    {
        const bool branch_taken_0x1ce75c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE75Cu;
            // 0x1ce760: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce75c) {
            ctx->pc = 0x1CE76Cu;
            goto label_1ce76c;
        }
    }
    ctx->pc = 0x1CE764u;
    // 0x1ce764: 0xc0739a8  jal         func_1CE6A0
    ctx->pc = 0x1CE764u;
    SET_GPR_U32(ctx, 31, 0x1CE76Cu);
    ctx->pc = 0x1CE6A0u;
    if (runtime->hasFunction(0x1CE6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1CE6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE76Cu; }
        if (ctx->pc != 0x1CE76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE6A0_0x1ce6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE76Cu; }
        if (ctx->pc != 0x1CE76Cu) { return; }
    }
    ctx->pc = 0x1CE76Cu;
label_1ce76c:
    // 0x1ce76c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ce76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ce770: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ce770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ce774: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ce774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ce778: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ce778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1ce77c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ce77cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce780: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE780u;
            // 0x1ce784: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CE788u;
    ctx->pc = 0x1ce788u;
}
