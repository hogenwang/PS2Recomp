#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E7A48
// Address: 0x1e7a48 - 0x1e7a70
void sub_001E7A48_0x1e7a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7A48_0x1e7a48");
#endif

    switch (ctx->pc) {
        case 0x1e7a5cu: goto label_1e7a5c;
        default: break;
    }

    ctx->pc = 0x1e7a48u;

    // 0x1e7a48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e7a4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e7a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e7a50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e7a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e7a54: 0xc0781e0  jal         func_1E0780
    ctx->pc = 0x1E7A54u;
    SET_GPR_U32(ctx, 31, 0x1E7A5Cu);
    ctx->pc = 0x1E7A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7A54u;
            // 0x1e7a58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0780u;
    if (runtime->hasFunction(0x1E0780u)) {
        auto targetFn = runtime->lookupFunction(0x1E0780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7A5Cu; }
        if (ctx->pc != 0x1E7A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0780_0x1e0780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7A5Cu; }
        if (ctx->pc != 0x1E7A5Cu) { return; }
    }
    ctx->pc = 0x1E7A5Cu;
label_1e7a5c:
    // 0x1e7a5c: 0xac5028cc  sw          $s0, 0x28CC($v0)
    ctx->pc = 0x1e7a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10444), GPR_U32(ctx, 16));
    // 0x1e7a60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e7a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e7a64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e7a64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7a68: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7A68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7A68u;
            // 0x1e7a6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7A70u;
    ctx->pc = 0x1e7a70u;
}
