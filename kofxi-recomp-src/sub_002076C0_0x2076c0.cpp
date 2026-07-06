#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002076C0
// Address: 0x2076c0 - 0x2076f0
void sub_002076C0_0x2076c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002076C0_0x2076c0");
#endif

    switch (ctx->pc) {
        case 0x2076d0u: goto label_2076d0;
        case 0x2076e0u: goto label_2076e0;
        default: break;
    }

    ctx->pc = 0x2076c0u;

    // 0x2076c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2076c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2076c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2076c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2076c8: 0xc081048  jal         func_204120
    ctx->pc = 0x2076C8u;
    SET_GPR_U32(ctx, 31, 0x2076D0u);
    ctx->pc = 0x204120u;
    if (runtime->hasFunction(0x204120u)) {
        auto targetFn = runtime->lookupFunction(0x204120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2076D0u; }
        if (ctx->pc != 0x2076D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00204120_0x204120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2076D0u; }
        if (ctx->pc != 0x2076D0u) { return; }
    }
    ctx->pc = 0x2076D0u;
label_2076d0:
    // 0x2076d0: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x2076d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x2076d4: 0x8c429bf8  lw          $v0, -0x6408($v0)
    ctx->pc = 0x2076d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941688)));
    // 0x2076d8: 0xc081b7c  jal         func_206DF0
    ctx->pc = 0x2076D8u;
    SET_GPR_U32(ctx, 31, 0x2076E0u);
    ctx->pc = 0x2076DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2076D8u;
            // 0x2076dc: 0x24440824  addiu       $a0, $v0, 0x824 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2084));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206DF0u;
    if (runtime->hasFunction(0x206DF0u)) {
        auto targetFn = runtime->lookupFunction(0x206DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2076E0u; }
        if (ctx->pc != 0x2076E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206DF0_0x206df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2076E0u; }
        if (ctx->pc != 0x2076E0u) { return; }
    }
    ctx->pc = 0x2076E0u;
label_2076e0:
    // 0x2076e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2076e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2076e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2076E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2076E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2076E4u;
            // 0x2076e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2076ECu;
    // 0x2076ec: 0x0  nop
    ctx->pc = 0x2076ecu;
    // NOP
    ctx->pc = 0x2076f0u;
}
