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

// Function: sub_00188680
// Address: 0x188680 - 0x1886c0
void sub_00188680_0x188680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188680_0x188680");
#endif

    ctx->pc = 0x188680u;

    // 0x188680: 0x8c820490  lw          $v0, 0x490($a0)
    ctx->pc = 0x188680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1168)));
    // 0x188684: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x188684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x188688: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x188688u;
    {
        const bool branch_taken_0x188688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188688) {
            ctx->pc = 0x18868Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188688u;
            // 0x18868c: 0x8c830494  lw          $v1, 0x494($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188698u;
            goto label_188698;
        }
    }
    ctx->pc = 0x188690u;
    // 0x188690: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x188690u;
    {
        const bool branch_taken_0x188690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188690u;
        // 0x188694: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188690) {
            ctx->pc = 0x1886ACu;
            goto label_1886ac;
        }
    }
    ctx->pc = 0x188698u;
label_188698:
    // 0x188698: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x188698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18869c: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x18869cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x1886a0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1886a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1886a4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1886a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1886a8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1886a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1886ac:
    // 0x1886ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1886ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1886ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1886B4u;
    // 0x1886b4: 0x0  nop
    ctx->pc = 0x1886b4u;
    // NOP
    // 0x1886b8: 0x0  nop
    ctx->pc = 0x1886b8u;
    // NOP
    // 0x1886bc: 0x0  nop
    ctx->pc = 0x1886bcu;
    // NOP
    if (ctx->pc == 0x1886bcu) { ctx->pc = 0x1886c0u; }
}
