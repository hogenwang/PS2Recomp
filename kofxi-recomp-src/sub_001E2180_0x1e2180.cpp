#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E2180
// Address: 0x1e2180 - 0x1e21b0
void sub_001E2180_0x1e2180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2180_0x1e2180");
#endif

    switch (ctx->pc) {
        case 0x1e21a0u: goto label_1e21a0;
        default: break;
    }

    ctx->pc = 0x1e2180u;

    // 0x1e2180: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1e2180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2184: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1e2184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x1e2188: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1e2188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1e218c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e218cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e2190: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1e2190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2194: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e2194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e2198: 0xc049c48  jal         func_127120
    ctx->pc = 0x1E2198u;
    SET_GPR_U32(ctx, 31, 0x1E21A0u);
    ctx->pc = 0x1E219Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2198u;
            // 0x1e219c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E21A0u; }
        if (ctx->pc != 0x1E21A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E21A0u; }
        if (ctx->pc != 0x1E21A0u) { return; }
    }
    ctx->pc = 0x1E21A0u;
label_1e21a0:
    // 0x1e21a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e21a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e21a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e21a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e21a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E21A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E21ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E21A8u;
            // 0x1e21ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E21B0u;
    ctx->pc = 0x1e21b0u;
}
