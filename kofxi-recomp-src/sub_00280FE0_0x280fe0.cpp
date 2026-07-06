#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00280FE0
// Address: 0x280fe0 - 0x281000
void sub_00280FE0_0x280fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280FE0_0x280fe0");
#endif

    switch (ctx->pc) {
        case 0x280ff4u: goto label_280ff4;
        default: break;
    }

    ctx->pc = 0x280fe0u;

    // 0x280fe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x280fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x280fe4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x280fe4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280fe8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x280fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x280fec: 0xc09fdc0  jal         func_27F700
    ctx->pc = 0x280FECu;
    SET_GPR_U32(ctx, 31, 0x280FF4u);
    ctx->pc = 0x280FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280FECu;
            // 0x280ff0: 0x8c860004  lw          $a2, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F700u;
    if (runtime->hasFunction(0x27F700u)) {
        auto targetFn = runtime->lookupFunction(0x27F700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280FF4u; }
        if (ctx->pc != 0x280FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F700_0x27f700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280FF4u; }
        if (ctx->pc != 0x280FF4u) { return; }
    }
    ctx->pc = 0x280FF4u;
label_280ff4:
    // 0x280ff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x280ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x280FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280FF8u;
            // 0x280ffc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x281000u;
    ctx->pc = 0x281000u;
}
