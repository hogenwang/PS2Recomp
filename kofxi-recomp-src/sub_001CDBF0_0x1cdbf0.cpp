#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CDBF0
// Address: 0x1cdbf0 - 0x1cdc20
void sub_001CDBF0_0x1cdbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CDBF0_0x1cdbf0");
#endif

    switch (ctx->pc) {
        case 0x1cdc08u: goto label_1cdc08;
        default: break;
    }

    ctx->pc = 0x1cdbf0u;

    // 0x1cdbf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdbf4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1cdbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cdbf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cdbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cdbfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cdbfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdc00: 0x80736ae  j           func_1CDAB8
    ctx->pc = 0x1CDC00u;
    ctx->pc = 0x1CDC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDC00u;
            // 0x1cdc04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDAB8u;
    {
        auto targetFn = runtime->lookupFunction(0x1CDAB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1CDC08u;
label_1cdc08:
    // 0x1cdc08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdc08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdc0c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cdc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cdc10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cdc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cdc14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cdc14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdc18: 0x80736ae  j           func_1CDAB8
    ctx->pc = 0x1CDC18u;
    ctx->pc = 0x1CDC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDC18u;
            // 0x1cdc1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDAB8u;
    {
        auto targetFn = runtime->lookupFunction(0x1CDAB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1CDC20u;
    ctx->pc = 0x1cdc20u;
}
