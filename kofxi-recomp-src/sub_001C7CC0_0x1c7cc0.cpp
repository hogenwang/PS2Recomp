#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C7CC0
// Address: 0x1c7cc0 - 0x1c7cf0
void sub_001C7CC0_0x1c7cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7CC0_0x1c7cc0");
#endif

    switch (ctx->pc) {
        case 0x1c7cd4u: goto label_1c7cd4;
        case 0x1c7cdcu: goto label_1c7cdc;
        default: break;
    }

    ctx->pc = 0x1c7cc0u;

    // 0x1c7cc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c7cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c7cc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c7cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c7cc8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c7cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c7ccc: 0xc071e82  jal         func_1C7A08
    ctx->pc = 0x1C7CCCu;
    SET_GPR_U32(ctx, 31, 0x1C7CD4u);
    ctx->pc = 0x1C7CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7CCCu;
            // 0x1c7cd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7A08u;
    if (runtime->hasFunction(0x1C7A08u)) {
        auto targetFn = runtime->lookupFunction(0x1C7A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7CD4u; }
        if (ctx->pc != 0x1C7CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7A08_0x1c7a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7CD4u; }
        if (ctx->pc != 0x1C7CD4u) { return; }
    }
    ctx->pc = 0x1C7CD4u;
label_1c7cd4:
    // 0x1c7cd4: 0xc071f3c  jal         func_1C7CF0
    ctx->pc = 0x1C7CD4u;
    SET_GPR_U32(ctx, 31, 0x1C7CDCu);
    ctx->pc = 0x1C7CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7CD4u;
            // 0x1c7cd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7CF0u;
    if (runtime->hasFunction(0x1C7CF0u)) {
        auto targetFn = runtime->lookupFunction(0x1C7CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7CDCu; }
        if (ctx->pc != 0x1C7CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7CF0_0x1c7cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7CDCu; }
        if (ctx->pc != 0x1C7CDCu) { return; }
    }
    ctx->pc = 0x1C7CDCu;
label_1c7cdc:
    // 0x1c7cdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c7cdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7ce0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c7ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c7ce4: 0x8071e88  j           func_1C7A20
    ctx->pc = 0x1C7CE4u;
    ctx->pc = 0x1C7CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7CE4u;
            // 0x1c7ce8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7A20u;
    if (runtime->hasFunction(0x1C7A20u)) {
        auto targetFn = runtime->lookupFunction(0x1C7A20u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C7A20_0x1c7a20(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C7CECu;
    // 0x1c7cec: 0x0  nop
    ctx->pc = 0x1c7cecu;
    // NOP
    ctx->pc = 0x1c7cf0u;
}
