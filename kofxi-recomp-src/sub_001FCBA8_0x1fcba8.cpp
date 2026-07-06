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

// Function: sub_001FCBA8
// Address: 0x1fcba8 - 0x1fcbe0
void sub_001FCBA8_0x1fcba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FCBA8_0x1fcba8");
#endif

    ctx->pc = 0x1fcba8u;

    // 0x1fcba8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fcba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fcbac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fcbacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcbb0: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FCBB0u;
    {
        const bool branch_taken_0x1fcbb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCBB0u;
        // 0x1fcbb4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcbb0) {
            ctx->pc = 0x1FCBD0u;
            goto label_1fcbd0;
        }
    }
    ctx->pc = 0x1FCBB8u;
    // 0x1fcbb8: 0x8ca60018  lw          $a2, 0x18($a1)
    ctx->pc = 0x1fcbb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1fcbbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fcbbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fcbc0: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x1fcbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1fcbc4: 0x807f2f8  j           func_1FCBE0
    ctx->pc = 0x1FCBC4u;
    ctx->pc = 0x1FCBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCBC4u;
    // 0x1fcbc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCBE0u;
    sub_001FCBE0_0x1fcbe0(rdram, ctx, runtime); return;
    ctx->pc = 0x1FCBCCu;
    // 0x1fcbcc: 0x0  nop
    ctx->pc = 0x1fcbccu;
    // NOP
label_1fcbd0:
    // 0x1fcbd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fcbd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fcbd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FCBD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCBD4u;
        // 0x1fcbd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCBD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FCBDCu;
    // 0x1fcbdc: 0x0  nop
    ctx->pc = 0x1fcbdcu;
    // NOP
    if (ctx->pc == 0x1fcbdcu) { ctx->pc = 0x1fcbe0u; }
}
