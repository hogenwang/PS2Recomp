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

// Function: sub_001E2880
// Address: 0x1e2880 - 0x1e28a8
void sub_001E2880_0x1e2880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2880_0x1e2880");
#endif

    ctx->pc = 0x1e2880u;

    // 0x1e2880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e2880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e2884: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e2884u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2888: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E2888u;
    {
        const bool branch_taken_0x1e2888 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2888u;
        // 0x1e288c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2888) {
            ctx->pc = 0x1E2894u;
            goto label_1e2894;
        }
    }
    ctx->pc = 0x1E2890u;
    // 0x1e2890: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1e2890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_1e2894:
    // 0x1e2894: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2898: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e2898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e289c: 0x807ebda  j           func_1FAF68
    ctx->pc = 0x1E289Cu;
    ctx->pc = 0x1E28A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E289Cu;
    // 0x1e28a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF68u;
    sub_001FAF68_0x1faf68(rdram, ctx, runtime); return;
    ctx->pc = 0x1E28A4u;
    // 0x1e28a4: 0x0  nop
    ctx->pc = 0x1e28a4u;
    // NOP
}
