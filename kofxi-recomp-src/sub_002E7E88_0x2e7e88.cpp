#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E7E88
// Address: 0x2e7e88 - 0x2e7ec0
void sub_002E7E88_0x2e7e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7E88_0x2e7e88");
#endif

    switch (ctx->pc) {
        case 0x2e7e9cu: goto label_2e7e9c;
        case 0x2e7ea8u: goto label_2e7ea8;
        default: break;
    }

    ctx->pc = 0x2e7e88u;

    // 0x2e7e88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e7e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e7e8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e7e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7e90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e7e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e7e94: 0xc0b9f12  jal         func_2E7C48
    ctx->pc = 0x2E7E94u;
    SET_GPR_U32(ctx, 31, 0x2E7E9Cu);
    ctx->pc = 0x2E7E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7E94u;
            // 0x2e7e98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7C48u;
    if (runtime->hasFunction(0x2E7C48u)) {
        auto targetFn = runtime->lookupFunction(0x2E7C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7E9Cu; }
        if (ctx->pc != 0x2E7E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7C48_0x2e7c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7E9Cu; }
        if (ctx->pc != 0x2E7E9Cu) { return; }
    }
    ctx->pc = 0x2E7E9Cu;
label_2e7e9c:
    // 0x2e7e9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e7e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7EA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7EA0u;
            // 0x2e7ea4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E7EA8u;
label_2e7ea8:
    // 0x2e7ea8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2e7ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2e7eac: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x2e7eacu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e7eb0: 0xac44ea34  sw          $a0, -0x15CC($v0)
    ctx->pc = 0x2e7eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961716), GPR_U32(ctx, 4));
    // 0x2e7eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7EB4u;
            // 0x2e7eb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E7EBCu;
    // 0x2e7ebc: 0x0  nop
    ctx->pc = 0x2e7ebcu;
    // NOP
    ctx->pc = 0x2e7ec0u;
}
