#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D1BC0
// Address: 0x1d1bc0 - 0x1d1c00
void sub_001D1BC0_0x1d1bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1BC0_0x1d1bc0");
#endif

    ctx->pc = 0x1d1bc0u;

    // 0x1d1bc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d1bc4: 0x24870168  addiu       $a3, $a0, 0x168
    ctx->pc = 0x1d1bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 360));
    // 0x1d1bc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d1bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d1bcc: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1d1bccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1bd0: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1d1bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1d1bd4: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x1d1bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1d1bd8: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1d1bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d1bdc: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x1d1bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1d1be0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d1be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1be4: 0x106182a  slt         $v1, $t0, $a2
    ctx->pc = 0x1d1be4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1d1be8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1d1be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d1bec: 0x103300b  movn        $a2, $t0, $v1
    ctx->pc = 0x1d1becu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 8));
    // 0x1d1bf0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1d1bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d1bf4: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x1d1bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x1d1bf8: 0x8049c48  j           func_127120
    ctx->pc = 0x1D1BF8u;
    ctx->pc = 0x1D1BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1BF8u;
            // 0x1d1bfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00127120_0x127120(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1D1C00u;
    ctx->pc = 0x1d1c00u;
}
