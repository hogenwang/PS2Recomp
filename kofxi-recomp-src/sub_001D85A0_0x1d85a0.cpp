#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D85A0
// Address: 0x1d85a0 - 0x1d85e8
void sub_001D85A0_0x1d85a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D85A0_0x1d85a0");
#endif

    switch (ctx->pc) {
        case 0x1d85c0u: goto label_1d85c0;
        case 0x1d85d0u: goto label_1d85d0;
        case 0x1d85d8u: goto label_1d85d8;
        default: break;
    }

    ctx->pc = 0x1d85a0u;

    // 0x1d85a0: 0x3c0301c0  lui         $v1, 0x1C0
    ctx->pc = 0x1d85a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)448 << 16));
    // 0x1d85a4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1d85a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1d85a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d85a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d85ac: 0x24638070  addiu       $v1, $v1, -0x7F90
    ctx->pc = 0x1d85acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934640));
    // 0x1d85b0: 0x2442c1c8  addiu       $v0, $v0, -0x3E38
    ctx->pc = 0x1d85b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951368));
    // 0x1d85b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d85b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d85b8: 0xc07617a  jal         func_1D85E8
    ctx->pc = 0x1D85B8u;
    SET_GPR_U32(ctx, 31, 0x1D85C0u);
    ctx->pc = 0x1D85BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D85B8u;
            // 0x1d85bc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D85E8u;
    if (runtime->hasFunction(0x1D85E8u)) {
        auto targetFn = runtime->lookupFunction(0x1D85E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D85C0u; }
        if (ctx->pc != 0x1D85C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D85E8_0x1d85e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D85C0u; }
        if (ctx->pc != 0x1D85C0u) { return; }
    }
    ctx->pc = 0x1D85C0u;
label_1d85c0:
    // 0x1d85c0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D85C0u;
    {
        const bool branch_taken_0x1d85c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D85C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D85C0u;
            // 0x1d85c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d85c0) {
            ctx->pc = 0x1D85E0u;
            goto label_1d85e0;
        }
    }
    ctx->pc = 0x1D85C8u;
    // 0x1d85c8: 0xc07592c  jal         func_1D64B0
    ctx->pc = 0x1D85C8u;
    SET_GPR_U32(ctx, 31, 0x1D85D0u);
    ctx->pc = 0x1D64B0u;
    if (runtime->hasFunction(0x1D64B0u)) {
        auto targetFn = runtime->lookupFunction(0x1D64B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D85D0u; }
        if (ctx->pc != 0x1D85D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D64B0_0x1d64b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D85D0u; }
        if (ctx->pc != 0x1D85D0u) { return; }
    }
    ctx->pc = 0x1D85D0u;
label_1d85d0:
    // 0x1d85d0: 0xc0760d4  jal         func_1D8350
    ctx->pc = 0x1D85D0u;
    SET_GPR_U32(ctx, 31, 0x1D85D8u);
    ctx->pc = 0x1D8350u;
    if (runtime->hasFunction(0x1D8350u)) {
        auto targetFn = runtime->lookupFunction(0x1D8350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D85D8u; }
        if (ctx->pc != 0x1D85D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8350_0x1d8350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D85D8u; }
        if (ctx->pc != 0x1D85D8u) { return; }
    }
    ctx->pc = 0x1D85D8u;
label_1d85d8:
    // 0x1d85d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d85d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d85dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d85dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d85e0:
    // 0x1d85e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D85E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D85E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D85E0u;
            // 0x1d85e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D85E8u;
    ctx->pc = 0x1d85e8u;
}
