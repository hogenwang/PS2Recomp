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

// Function: sub_001CA818
// Address: 0x1ca818 - 0x1ca850
void sub_001CA818_0x1ca818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA818_0x1ca818");
#endif

    ctx->pc = 0x1ca818u;

label_1ca818:
    // 0x1ca818: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca81c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ca81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ca820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca824: 0x8073748  j           func_1CDD20
    ctx->pc = 0x1CA824u;
    ctx->pc = 0x1CA828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA824u;
    // 0x1ca828: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDD20u;
    sub_001CDD20_0x1cdd20(rdram, ctx, runtime); return;
    ctx->pc = 0x1CA82Cu;
    // 0x1ca82c: 0x0  nop
    ctx->pc = 0x1ca82cu;
    // NOP
    // 0x1ca830: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca834: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ca834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1ca838: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ca838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ca83c: 0x2484b848  addiu       $a0, $a0, -0x47B8
    ctx->pc = 0x1ca83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948936));
    // 0x1ca840: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca844: 0x8072a06  j           func_1CA818
    ctx->pc = 0x1CA844u;
    ctx->pc = 0x1CA848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA844u;
    // 0x1ca848: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA818u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_1ca818;
    ctx->pc = 0x1CA84Cu;
    // 0x1ca84c: 0x0  nop
    ctx->pc = 0x1ca84cu;
    // NOP
    if (ctx->pc == 0x1ca84cu) { ctx->pc = 0x1ca850u; }
}
