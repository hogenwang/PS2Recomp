#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010D460
// Address: 0x10d460 - 0x10d4b0
void sub_0010D460_0x10d460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D460_0x10d460");
#endif

    switch (ctx->pc) {
        case 0x10d470u: goto label_10d470;
        case 0x10d488u: goto label_10d488;
        case 0x10d498u: goto label_10d498;
        default: break;
    }

    ctx->pc = 0x10d460u;

    // 0x10d460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10d460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10d464: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10d464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10d468: 0xc0491f2  jal         func_1247C8
    ctx->pc = 0x10D468u;
    SET_GPR_U32(ctx, 31, 0x10D470u);
    ctx->pc = 0x1247C8u;
    if (runtime->hasFunction(0x1247C8u)) {
        auto targetFn = runtime->lookupFunction(0x1247C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D470u; }
        if (ctx->pc != 0x10D470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001247C8_0x1247c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D470u; }
        if (ctx->pc != 0x10D470u) { return; }
    }
    ctx->pc = 0x10D470u;
label_10d470:
    // 0x10d470: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x10d470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10d474: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10d474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d478: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10d478u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x10d47c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10d47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10d480: 0x3e00008  jr          $ra
    ctx->pc = 0x10D480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D480u;
            // 0x10d484: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10D488u;
label_10d488:
    // 0x10d488: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10d488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10d48c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10d48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10d490: 0xc0491f2  jal         func_1247C8
    ctx->pc = 0x10D490u;
    SET_GPR_U32(ctx, 31, 0x10D498u);
    ctx->pc = 0x1247C8u;
    if (runtime->hasFunction(0x1247C8u)) {
        auto targetFn = runtime->lookupFunction(0x1247C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D498u; }
        if (ctx->pc != 0x10D498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001247C8_0x1247c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D498u; }
        if (ctx->pc != 0x10D498u) { return; }
    }
    ctx->pc = 0x10D498u;
label_10d498:
    // 0x10d498: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x10d498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10d49c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10d49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d4a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10d4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x10d4a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10d4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10d4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x10D4A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D4A8u;
            // 0x10d4ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10D4B0u;
    ctx->pc = 0x10d4b0u;
}
