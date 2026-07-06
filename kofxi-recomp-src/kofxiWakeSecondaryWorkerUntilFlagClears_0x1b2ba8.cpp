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

// Function: kofxiWakeSecondaryWorkerUntilFlagClears
// Address: 0x1b2ba8 - 0x1b2bd0
void kofxiWakeSecondaryWorkerUntilFlagClears_0x1b2ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiWakeSecondaryWorkerUntilFlagClears_0x1b2ba8");
#endif

    ctx->pc = 0x1b2ba8u;

    // 0x1b2ba8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b2bac: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b2bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b2bb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2bb4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b2bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b2bb8: 0x244230a0  addiu       $v0, $v0, 0x30A0
    ctx->pc = 0x1b2bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12448));
    // 0x1b2bbc: 0x8c65301c  lw          $a1, 0x301C($v1)
    ctx->pc = 0x1b2bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12316)));
    // 0x1b2bc0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b2bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2bc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2bc8: 0x806caa6  j           func_1B2A98
    ctx->pc = 0x1B2BC8u;
    ctx->pc = 0x1B2BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2BC8u;
    // 0x1b2bcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2A98u;
    kofxiWakeThreadUntilFlagClears_0x1b2a98(rdram, ctx, runtime); return;
    ctx->pc = 0x1B2BD0u;
}
