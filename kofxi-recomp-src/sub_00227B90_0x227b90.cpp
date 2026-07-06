#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00227B90
// Address: 0x227b90 - 0x227bc0
void sub_00227B90_0x227b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227B90_0x227b90");
#endif

    switch (ctx->pc) {
        case 0x227ba0u: goto label_227ba0;
        default: break;
    }

    ctx->pc = 0x227b90u;

    // 0x227b90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x227b94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227b98: 0xc089ef0  jal         func_227BC0
    ctx->pc = 0x227B98u;
    SET_GPR_U32(ctx, 31, 0x227BA0u);
    ctx->pc = 0x227BC0u;
    if (runtime->hasFunction(0x227BC0u)) {
        auto targetFn = runtime->lookupFunction(0x227BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227BA0u; }
        if (ctx->pc != 0x227BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00227BC0_0x227bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227BA0u; }
        if (ctx->pc != 0x227BA0u) { return; }
    }
    ctx->pc = 0x227BA0u;
label_227ba0:
    // 0x227ba0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x227BA0u;
    {
        const bool branch_taken_0x227ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227BA0u;
            // 0x227ba4: 0x240ffffe  addiu       $t7, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227ba0) {
            ctx->pc = 0x227BACu;
            goto label_227bac;
        }
    }
    ctx->pc = 0x227BA8u;
    // 0x227ba8: 0x8c4f0000  lw          $t7, 0x0($v0)
    ctx->pc = 0x227ba8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_227bac:
    // 0x227bac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227bb0: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x227bb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x227BB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227BB4u;
            // 0x227bb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x227BBCu;
    // 0x227bbc: 0x0  nop
    ctx->pc = 0x227bbcu;
    // NOP
    ctx->pc = 0x227bc0u;
}
