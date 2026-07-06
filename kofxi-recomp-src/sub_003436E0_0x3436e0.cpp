#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003436E0
// Address: 0x3436e0 - 0x343700
void sub_003436E0_0x3436e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003436E0_0x3436e0");
#endif

    ctx->pc = 0x3436e0u;

    // 0x3436e0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3436e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3436e4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3436e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3436e8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3436e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3436ec: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3436ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3436f0: 0xac604348  sw          $zero, 0x4348($v1)
    ctx->pc = 0x3436f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17224), GPR_U32(ctx, 0));
    // 0x3436f4: 0x24843650  addiu       $a0, $a0, 0x3650
    ctx->pc = 0x3436f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13904));
    // 0x3436f8: 0x80558d4  j           func_156350
    ctx->pc = 0x3436F8u;
    ctx->pc = 0x3436FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3436F8u;
            // 0x3436fc: 0xac40d9c0  sw          $zero, -0x2640($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294957504), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (runtime->hasFunction(0x156350u)) {
        auto targetFn = runtime->lookupFunction(0x156350u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00156350_0x156350(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x343700u;
    ctx->pc = 0x343700u;
}
