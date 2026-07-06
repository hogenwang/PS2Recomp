#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CDBC0
// Address: 0x1cdbc0 - 0x1cdbf0
void sub_001CDBC0_0x1cdbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CDBC0_0x1cdbc0");
#endif

    switch (ctx->pc) {
        case 0x1cdbd8u: goto label_1cdbd8;
        default: break;
    }

    ctx->pc = 0x1cdbc0u;

    // 0x1cdbc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdbc4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1cdbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cdbc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cdbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cdbcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cdbccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdbd0: 0x8073696  j           func_1CDA58
    ctx->pc = 0x1CDBD0u;
    ctx->pc = 0x1CDBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDBD0u;
            // 0x1cdbd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA58u;
    {
        auto targetFn = runtime->lookupFunction(0x1CDA58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1CDBD8u;
label_1cdbd8:
    // 0x1cdbd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdbd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdbdc: 0x240403e8  addiu       $a0, $zero, 0x3E8
    ctx->pc = 0x1cdbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x1cdbe0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cdbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cdbe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cdbe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdbe8: 0x8073696  j           func_1CDA58
    ctx->pc = 0x1CDBE8u;
    ctx->pc = 0x1CDBECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDBE8u;
            // 0x1cdbec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA58u;
    {
        auto targetFn = runtime->lookupFunction(0x1CDA58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1CDBF0u;
    ctx->pc = 0x1cdbf0u;
}
