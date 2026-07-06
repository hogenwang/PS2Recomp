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

// Function: sub_0026D2F0
// Address: 0x26d2f0 - 0x26d330
void sub_0026D2F0_0x26d2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026D2F0_0x26d2f0");
#endif

    switch (ctx->pc) {
        case 0x26d300u: goto label_26d300;
        default: break;
    }

    ctx->pc = 0x26d2f0u;

    // 0x26d2f0: 0x18c0000c  blez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x26D2F0u;
    {
        const bool branch_taken_0x26d2f0 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x26D2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D2F0u;
        // 0x26d2f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d2f0) {
            ctx->pc = 0x26D324u;
            goto label_26d324;
        }
    }
    ctx->pc = 0x26D2F8u;
    // 0x26d2f8: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x26d2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x26d2fc: 0x0  nop
    ctx->pc = 0x26d2fcu;
    // NOP
label_26d300:
    // 0x26d300: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x26d300u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26d304: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26D304u;
    {
        const bool branch_taken_0x26d304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D304u;
        // 0x26d308: 0x90680000  lbu         $t0, 0x0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d304) {
            ctx->pc = 0x26D314u;
            goto label_26d314;
        }
    }
    ctx->pc = 0x26D30Cu;
    // 0x26d30c: 0xa0a80000  sb          $t0, 0x0($a1)
    ctx->pc = 0x26d30cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x26d310: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x26d310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_26d314:
    // 0x26d314: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x26d314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x26d318: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x26d318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x26d31c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x26D31Cu;
    {
        const bool branch_taken_0x26d31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D31Cu;
        // 0x26d320: 0x871821  addu        $v1, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d31c) {
            ctx->pc = 0x26D300u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26d300;
        }
    }
    ctx->pc = 0x26D324u;
label_26d324:
    // 0x26d324: 0x3e00008  jr          $ra
    ctx->pc = 0x26D324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D324u;
        // 0x26d328: 0xa0a00000  sb          $zero, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26D32Cu;
    // 0x26d32c: 0x0  nop
    ctx->pc = 0x26d32cu;
    // NOP
    if (ctx->pc == 0x26d32cu) { ctx->pc = 0x26d330u; }
}
