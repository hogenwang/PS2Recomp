#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6B98
// Address: 0x1b6b98 - 0x1b6bd8
void sub_001B6B98_0x1b6b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6B98_0x1b6b98");
#endif

    switch (ctx->pc) {
        case 0x1b6bacu: goto label_1b6bac;
        case 0x1b6bb4u: goto label_1b6bb4;
        default: break;
    }

    ctx->pc = 0x1b6b98u;

    // 0x1b6b98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b6b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b6b9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b6ba0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b6ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b6ba4: 0xc06dba6  jal         func_1B6E98
    ctx->pc = 0x1B6BA4u;
    SET_GPR_U32(ctx, 31, 0x1B6BACu);
    ctx->pc = 0x1B6BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6BA4u;
            // 0x1b6ba8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E98u;
    if (runtime->hasFunction(0x1B6E98u)) {
        auto targetFn = runtime->lookupFunction(0x1B6E98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6BACu; }
        if (ctx->pc != 0x1B6BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6E98_0x1b6e98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6BACu; }
        if (ctx->pc != 0x1B6BACu) { return; }
    }
    ctx->pc = 0x1B6BACu;
label_1b6bac:
    // 0x1b6bac: 0xc06e042  jal         func_1B8108
    ctx->pc = 0x1B6BACu;
    SET_GPR_U32(ctx, 31, 0x1B6BB4u);
    ctx->pc = 0x1B8108u;
    if (runtime->hasFunction(0x1B8108u)) {
        auto targetFn = runtime->lookupFunction(0x1B8108u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6BB4u; }
        if (ctx->pc != 0x1B6BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8108_0x1b8108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6BB4u; }
        if (ctx->pc != 0x1B6BB4u) { return; }
    }
    ctx->pc = 0x1B6BB4u;
label_1b6bb4:
    // 0x1b6bb4: 0x82030049  lb          $v1, 0x49($s0)
    ctx->pc = 0x1b6bb4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
    // 0x1b6bb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b6bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6bbc: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B6BBCu;
    {
        const bool branch_taken_0x1b6bbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b6bbc) {
            ctx->pc = 0x1B6BC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6BBCu;
            // 0x1b6bc0: 0xa2030046  sb          $v1, 0x46($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 70), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B6BC4u;
            goto label_1b6bc4;
        }
    }
    ctx->pc = 0x1B6BC4u;
label_1b6bc4:
    // 0x1b6bc4: 0xa2000045  sb          $zero, 0x45($s0)
    ctx->pc = 0x1b6bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b6bc8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b6bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6bcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6bccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6bd0: 0x806e048  j           func_1B8120
    ctx->pc = 0x1B6BD0u;
    ctx->pc = 0x1B6BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6BD0u;
            // 0x1b6bd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8120u;
    if (runtime->hasFunction(0x1B8120u)) {
        auto targetFn = runtime->lookupFunction(0x1B8120u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B8120_0x1b8120(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B6BD8u;
    ctx->pc = 0x1b6bd8u;
}
