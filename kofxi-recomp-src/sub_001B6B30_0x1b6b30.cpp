#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6B30
// Address: 0x1b6b30 - 0x1b6b68
void sub_001B6B30_0x1b6b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6B30_0x1b6b30");
#endif

    switch (ctx->pc) {
        case 0x1b6b44u: goto label_1b6b44;
        case 0x1b6b48u: goto label_1b6b48;
        case 0x1b6b50u: goto label_1b6b50;
        default: break;
    }

    ctx->pc = 0x1b6b30u;

    // 0x1b6b30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b6b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b6b34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b6b38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b6b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b6b3c: 0xc06da76  jal         func_1B69D8
    ctx->pc = 0x1B6B3Cu;
    SET_GPR_U32(ctx, 31, 0x1B6B44u);
    ctx->pc = 0x1B6B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6B3Cu;
            // 0x1b6b40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B69D8u;
    if (runtime->hasFunction(0x1B69D8u)) {
        auto targetFn = runtime->lookupFunction(0x1B69D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6B44u; }
        if (ctx->pc != 0x1B6B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B69D8_0x1b69d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6B44u; }
        if (ctx->pc != 0x1B6B44u) { return; }
    }
    ctx->pc = 0x1B6B44u;
label_1b6b44:
    // 0x1b6b44: 0x0  nop
    ctx->pc = 0x1b6b44u;
    // NOP
label_1b6b48:
    // 0x1b6b48: 0xc06c6b8  jal         func_1B1AE0
    ctx->pc = 0x1B6B48u;
    SET_GPR_U32(ctx, 31, 0x1B6B50u);
    ctx->pc = 0x1B1AE0u;
    if (runtime->hasFunction(0x1B1AE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6B50u; }
        if (ctx->pc != 0x1B6B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AE0_0x1b1ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6B50u; }
        if (ctx->pc != 0x1B6B50u) { return; }
    }
    ctx->pc = 0x1B6B50u;
label_1b6b50:
    // 0x1b6b50: 0x82020045  lb          $v0, 0x45($s0)
    ctx->pc = 0x1b6b50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x1b6b54: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1B6B54u;
    {
        const bool branch_taken_0x1b6b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6B54u;
            // 0x1b6b58: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6b54) {
            ctx->pc = 0x1B6B48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b6b48;
        }
    }
    ctx->pc = 0x1B6B5Cu;
    // 0x1b6b5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6b5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6b60: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6B60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6B60u;
            // 0x1b6b64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B6B68u;
    ctx->pc = 0x1b6b68u;
}
