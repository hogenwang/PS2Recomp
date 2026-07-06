#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: kofxiFrameSleepCurrent
// Address: 0x1b40c8 - 0x1b40f0
void kofxiFrameSleepCurrent_0x1b40c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiFrameSleepCurrent_0x1b40c8");
#endif

    ctx->pc = 0x1b40c8u;

    // 0x1b40c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b40c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b40cc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b40ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b40d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b40d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b40d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b40d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b40d8: 0x2442304c  addiu       $v0, $v0, 0x304C
    ctx->pc = 0x1b40d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12364));
    // 0x1b40dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b40dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b40e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1b40e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1b40e4: 0x806cc60  j           func_1B3180
    ctx->pc = 0x1B40E4u;
    ctx->pc = 0x1B40E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B40E4u;
    // 0x1b40e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3180u;
    kofxiThreadSleepCurrent_0x1b3180(rdram, ctx, runtime); return;
    ctx->pc = 0x1B40ECu;
    // 0x1b40ec: 0x0  nop
    ctx->pc = 0x1b40ecu;
    // NOP
    if (ctx->pc == 0x1b40ecu) { ctx->pc = 0x1b40f0u; }
}
