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

// Function: sub_002C0428
// Address: 0x2c0428 - 0x2c0458
void sub_002C0428_0x2c0428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0428_0x2c0428");
#endif

    switch (ctx->pc) {
        case 0x2c0448u: goto label_2c0448;
        default: break;
    }

    ctx->pc = 0x2c0428u;

    // 0x2c0428: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2c0428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c042c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c042cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c0430: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x2c0430u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x2c0434: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x2c0434u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x2c0438: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c0438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c043c: 0x24841fe0  addiu       $a0, $a0, 0x1FE0
    ctx->pc = 0x2c043cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8160));
    // 0x2c0440: 0xc0a0018  jal         func_280060
    ctx->pc = 0x2C0440u;
    SET_GPR_U32(ctx, 31, 0x2C0448u);
    ctx->pc = 0x2C0444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0440u;
    // 0x2c0444: 0x24a52228  addiu       $a1, $a1, 0x2228 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280060u, 0x2C0440u, 0x2C0448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0448u;
label_2c0448:
    // 0x2c0448: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c0448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c044c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C044Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C044Cu;
        // 0x2c0450: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C044Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0454u;
    // 0x2c0454: 0x0  nop
    ctx->pc = 0x2c0454u;
    // NOP
    if (ctx->pc == 0x2c0454u) { ctx->pc = 0x2c0458u; }
}
