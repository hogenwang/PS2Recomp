#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00281BA8
// Address: 0x281ba8 - 0x281bc8
void sub_00281BA8_0x281ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281BA8_0x281ba8");
#endif

    switch (ctx->pc) {
        case 0x281bb8u: goto label_281bb8;
        default: break;
    }

    ctx->pc = 0x281ba8u;

    // 0x281ba8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x281ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x281bac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x281bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x281bb0: 0xc0a06f2  jal         func_281BC8
    ctx->pc = 0x281BB0u;
    SET_GPR_U32(ctx, 31, 0x281BB8u);
    ctx->pc = 0x281BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281BB0u;
            // 0x281bb4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281BC8u;
    if (runtime->hasFunction(0x281BC8u)) {
        auto targetFn = runtime->lookupFunction(0x281BC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281BB8u; }
        if (ctx->pc != 0x281BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281BC8_0x281bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281BB8u; }
        if (ctx->pc != 0x281BB8u) { return; }
    }
    ctx->pc = 0x281BB8u;
label_281bb8:
    // 0x281bb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x281BBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281BBCu;
            // 0x281bc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x281BC4u;
    // 0x281bc4: 0x0  nop
    ctx->pc = 0x281bc4u;
    // NOP
    ctx->pc = 0x281bc8u;
}
