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

// Function: sub_001CBFE0
// Address: 0x1cbfe0 - 0x1cc018
void sub_001CBFE0_0x1cbfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CBFE0_0x1cbfe0");
#endif

    ctx->pc = 0x1cbfe0u;

    // 0x1cbfe0: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1cbfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1cbfe4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1cbfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1cbfe8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1cbfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cbfec: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1cbfecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1cbff0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBFF0u;
        // 0x1cbff4: 0x8ca20028  lw          $v0, 0x28($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBFF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBFF8u;
    // 0x1cbff8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cbff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cbffc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cbffcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1cc000: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cc000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cc004: 0x2484bb50  addiu       $a0, $a0, -0x44B0
    ctx->pc = 0x1cc004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949712));
    // 0x1cc008: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc00c: 0x8072a06  j           func_1CA818
    ctx->pc = 0x1CC00Cu;
    ctx->pc = 0x1CC010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC00Cu;
    // 0x1cc010: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA818u;
    sub_001CA818_0x1ca818(rdram, ctx, runtime); return;
    ctx->pc = 0x1CC014u;
    // 0x1cc014: 0x0  nop
    ctx->pc = 0x1cc014u;
    // NOP
    if (ctx->pc == 0x1cc014u) { ctx->pc = 0x1cc018u; }
}
