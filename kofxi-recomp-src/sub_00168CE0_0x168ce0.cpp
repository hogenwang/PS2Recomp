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

// Function: sub_00168CE0
// Address: 0x168ce0 - 0x168d30
void sub_00168CE0_0x168ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168CE0_0x168ce0");
#endif

    ctx->pc = 0x168ce0u;

    // 0x168ce0: 0x8c83048c  lw          $v1, 0x48C($a0)
    ctx->pc = 0x168ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1164)));
    // 0x168ce4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x168ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x168ce8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x168ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x168cec: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x168CECu;
    {
        const bool branch_taken_0x168cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168cec) {
            ctx->pc = 0x168CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168CECu;
            // 0x168cf0: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168CFCu;
            goto label_168cfc;
        }
    }
    ctx->pc = 0x168CF4u;
    // 0x168cf4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x168CF4u;
    {
        const bool branch_taken_0x168cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168CF4u;
        // 0x168cf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168cf4) {
            ctx->pc = 0x168D1Cu;
            goto label_168d1c;
        }
    }
    ctx->pc = 0x168CFCu;
label_168cfc:
    // 0x168cfc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x168cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x168d00: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x168D00u;
    {
        const bool branch_taken_0x168d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168d00) {
            ctx->pc = 0x168D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168D00u;
            // 0x168d04: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168D10u;
            goto label_168d10;
        }
    }
    ctx->pc = 0x168D08u;
    // 0x168d08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x168D08u;
    {
        const bool branch_taken_0x168d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D08u;
        // 0x168d0c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168d08) {
            ctx->pc = 0x168D1Cu;
            goto label_168d1c;
        }
    }
    ctx->pc = 0x168D10u;
label_168d10:
    // 0x168d10: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x168D10u;
    {
        const bool branch_taken_0x168d10 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x168d10) {
            ctx->pc = 0x168D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168D10u;
            // 0x168d14: 0x2102a  slt         $v0, $zero, $v0 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x168D1Cu;
            goto label_168d1c;
        }
    }
    ctx->pc = 0x168D18u;
    // 0x168d18: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x168d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_168d1c:
    // 0x168d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x168D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168D24u;
    // 0x168d24: 0x0  nop
    ctx->pc = 0x168d24u;
    // NOP
    // 0x168d28: 0x0  nop
    ctx->pc = 0x168d28u;
    // NOP
    // 0x168d2c: 0x0  nop
    ctx->pc = 0x168d2cu;
    // NOP
    if (ctx->pc == 0x168d2cu) { ctx->pc = 0x168d30u; }
}
