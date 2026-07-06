#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FC560
// Address: 0x2fc560 - 0x2fc580
void sub_002FC560_0x2fc560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC560_0x2fc560");
#endif

    switch (ctx->pc) {
        case 0x2fc570u: goto label_2fc570;
        default: break;
    }

    ctx->pc = 0x2fc560u;

    // 0x2fc560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fc560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fc564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fc564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fc568: 0xc098d9e  jal         func_263678
    ctx->pc = 0x2FC568u;
    SET_GPR_U32(ctx, 31, 0x2FC570u);
    ctx->pc = 0x263678u;
    if (runtime->hasFunction(0x263678u)) {
        auto targetFn = runtime->lookupFunction(0x263678u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC570u; }
        if (ctx->pc != 0x2FC570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00263678_0x263678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC570u; }
        if (ctx->pc != 0x2FC570u) { return; }
    }
    ctx->pc = 0x2FC570u;
label_2fc570:
    // 0x2fc570: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fc570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc574: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC574u;
            // 0x2fc578: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FC57Cu;
    // 0x2fc57c: 0x0  nop
    ctx->pc = 0x2fc57cu;
    // NOP
    ctx->pc = 0x2fc580u;
}
