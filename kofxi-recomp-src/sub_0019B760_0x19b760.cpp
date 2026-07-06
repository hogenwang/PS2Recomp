#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019B760
// Address: 0x19b760 - 0x19b790
void sub_0019B760_0x19b760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019B760_0x19b760");
#endif

    switch (ctx->pc) {
        case 0x19b770u: goto label_19b770;
        default: break;
    }

    ctx->pc = 0x19b760u;

    // 0x19b760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19b760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19b764: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19b764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19b768: 0xc0c4a4c  jal         func_312930
    ctx->pc = 0x19B768u;
    SET_GPR_U32(ctx, 31, 0x19B770u);
    ctx->pc = 0x19B76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B768u;
            // 0x19b76c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x312930u;
    if (runtime->hasFunction(0x312930u)) {
        auto targetFn = runtime->lookupFunction(0x312930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B770u; }
        if (ctx->pc != 0x19B770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00312930_0x312930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B770u; }
        if (ctx->pc != 0x19B770u) { return; }
    }
    ctx->pc = 0x19B770u;
label_19b770:
    // 0x19b770: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19b770u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b774: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19b774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b778: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19b778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b77c: 0x3e00008  jr          $ra
    ctx->pc = 0x19B77Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B77Cu;
            // 0x19b780: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B784u;
    // 0x19b784: 0x0  nop
    ctx->pc = 0x19b784u;
    // NOP
    // 0x19b788: 0x0  nop
    ctx->pc = 0x19b788u;
    // NOP
    // 0x19b78c: 0x0  nop
    ctx->pc = 0x19b78cu;
    // NOP
    ctx->pc = 0x19b790u;
}
