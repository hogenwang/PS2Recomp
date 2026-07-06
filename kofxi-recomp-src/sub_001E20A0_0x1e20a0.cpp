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

// Function: sub_001E20A0
// Address: 0x1e20a0 - 0x1e20d8
void sub_001E20A0_0x1e20a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E20A0_0x1e20a0");
#endif

    switch (ctx->pc) {
        case 0x1e20c4u: goto label_1e20c4;
        default: break;
    }

    ctx->pc = 0x1e20a0u;

    // 0x1e20a0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1e20a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e20a4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e20a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e20a8: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x1e20a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x1e20ac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e20acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e20b0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1e20b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e20b4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1e20b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e20b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e20b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e20bc: 0xc049c48  jal         func_127120
    ctx->pc = 0x1E20BCu;
    SET_GPR_U32(ctx, 31, 0x1E20C4u);
    ctx->pc = 0x1E20C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E20BCu;
    // 0x1e20c0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x1E20BCu, 0x1E20C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E20C4u;
label_1e20c4:
    // 0x1e20c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e20c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e20c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e20c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e20cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E20CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E20D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20CCu;
        // 0x1e20d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E20CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E20D4u;
    // 0x1e20d4: 0x0  nop
    ctx->pc = 0x1e20d4u;
    // NOP
    if (ctx->pc == 0x1e20d4u) { ctx->pc = 0x1e20d8u; }
}
