#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E7E68
// Address: 0x2e7e68 - 0x2e7e88
void sub_002E7E68_0x2e7e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7E68_0x2e7e68");
#endif

    switch (ctx->pc) {
        case 0x2e7e7cu: goto label_2e7e7c;
        default: break;
    }

    ctx->pc = 0x2e7e68u;

    // 0x2e7e68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e7e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e7e6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e7e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7e70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e7e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e7e74: 0xc0b9f12  jal         func_2E7C48
    ctx->pc = 0x2E7E74u;
    SET_GPR_U32(ctx, 31, 0x2E7E7Cu);
    ctx->pc = 0x2E7E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7E74u;
            // 0x2e7e78: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7C48u;
    if (runtime->hasFunction(0x2E7C48u)) {
        auto targetFn = runtime->lookupFunction(0x2E7C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7E7Cu; }
        if (ctx->pc != 0x2E7E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7C48_0x2e7c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7E7Cu; }
        if (ctx->pc != 0x2E7E7Cu) { return; }
    }
    ctx->pc = 0x2E7E7Cu;
label_2e7e7c:
    // 0x2e7e7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e7e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7e80: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7E80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7E80u;
            // 0x2e7e84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E7E88u;
    ctx->pc = 0x2e7e88u;
}
