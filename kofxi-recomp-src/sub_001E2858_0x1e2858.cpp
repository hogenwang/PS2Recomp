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

// Function: sub_001E2858
// Address: 0x1e2858 - 0x1e2880
void sub_001E2858_0x1e2858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2858_0x1e2858");
#endif

    ctx->pc = 0x1e2858u;

    // 0x1e2858: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e2858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e285c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e285cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2860: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E2860u;
    {
        const bool branch_taken_0x1e2860 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2860u;
        // 0x1e2864: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2860) {
            ctx->pc = 0x1E286Cu;
            goto label_1e286c;
        }
    }
    ctx->pc = 0x1E2868u;
    // 0x1e2868: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1e2868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_1e286c:
    // 0x1e286c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e286cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2870: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e2870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2874: 0x807eb40  j           func_1FAD00
    ctx->pc = 0x1E2874u;
    ctx->pc = 0x1E2878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2874u;
    // 0x1e2878: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD00u;
    sub_001FAD00_0x1fad00(rdram, ctx, runtime); return;
    ctx->pc = 0x1E287Cu;
    // 0x1e287c: 0x0  nop
    ctx->pc = 0x1e287cu;
    // NOP
    if (ctx->pc == 0x1e287cu) { ctx->pc = 0x1e2880u; }
}
