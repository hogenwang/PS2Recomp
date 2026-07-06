#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00280FC0
// Address: 0x280fc0 - 0x280fe0
void sub_00280FC0_0x280fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280FC0_0x280fc0");
#endif

    switch (ctx->pc) {
        case 0x280fd0u: goto label_280fd0;
        default: break;
    }

    ctx->pc = 0x280fc0u;

    // 0x280fc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x280fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x280fc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x280fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x280fc8: 0xc09fd42  jal         func_27F508
    ctx->pc = 0x280FC8u;
    SET_GPR_U32(ctx, 31, 0x280FD0u);
    ctx->pc = 0x280FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280FC8u;
            // 0x280fcc: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F508u;
    if (runtime->hasFunction(0x27F508u)) {
        auto targetFn = runtime->lookupFunction(0x27F508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280FD0u; }
        if (ctx->pc != 0x280FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F508_0x27f508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280FD0u; }
        if (ctx->pc != 0x280FD0u) { return; }
    }
    ctx->pc = 0x280FD0u;
label_280fd0:
    // 0x280fd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x280fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x280FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280FD4u;
            // 0x280fd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x280FDCu;
    // 0x280fdc: 0x0  nop
    ctx->pc = 0x280fdcu;
    // NOP
    ctx->pc = 0x280fe0u;
}
