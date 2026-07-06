#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003208A0
// Address: 0x3208a0 - 0x3208d0
void sub_003208A0_0x3208a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003208A0_0x3208a0");
#endif

    switch (ctx->pc) {
        case 0x3208b0u: goto label_3208b0;
        case 0x3208bcu: goto label_3208bc;
        default: break;
    }

    ctx->pc = 0x3208a0u;

    // 0x3208a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3208a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3208a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3208a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3208a8: 0xc0cb238  jal         func_32C8E0
    ctx->pc = 0x3208A8u;
    SET_GPR_U32(ctx, 31, 0x3208B0u);
    ctx->pc = 0x3208ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3208A8u;
            // 0x3208ac: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32C8E0u;
    if (runtime->hasFunction(0x32C8E0u)) {
        auto targetFn = runtime->lookupFunction(0x32C8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3208B0u; }
        if (ctx->pc != 0x3208B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032C8E0_0x32c8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3208B0u; }
        if (ctx->pc != 0x3208B0u) { return; }
    }
    ctx->pc = 0x3208B0u;
label_3208b0:
    // 0x3208b0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x3208b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x3208b4: 0xc067cc0  jal         func_19F300
    ctx->pc = 0x3208B4u;
    SET_GPR_U32(ctx, 31, 0x3208BCu);
    ctx->pc = 0x3208B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3208B4u;
            // 0x3208b8: 0x24840c60  addiu       $a0, $a0, 0xC60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F300u;
    if (runtime->hasFunction(0x19F300u)) {
        auto targetFn = runtime->lookupFunction(0x19F300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3208BCu; }
        if (ctx->pc != 0x3208BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F300_0x19f300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3208BCu; }
        if (ctx->pc != 0x3208BCu) { return; }
    }
    ctx->pc = 0x3208BCu;
label_3208bc:
    // 0x3208bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3208bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3208c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3208C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3208C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3208C0u;
            // 0x3208c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3208C8u;
    // 0x3208c8: 0x0  nop
    ctx->pc = 0x3208c8u;
    // NOP
    // 0x3208cc: 0x0  nop
    ctx->pc = 0x3208ccu;
    // NOP
    ctx->pc = 0x3208d0u;
}
