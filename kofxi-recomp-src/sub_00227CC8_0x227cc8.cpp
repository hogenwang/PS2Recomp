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

// Function: sub_00227CC8
// Address: 0x227cc8 - 0x227d00
void sub_00227CC8_0x227cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227CC8_0x227cc8");
#endif

    switch (ctx->pc) {
        case 0x227cd8u: goto label_227cd8;
        case 0x227ce8u: goto label_227ce8;
        default: break;
    }

    ctx->pc = 0x227cc8u;

    // 0x227cc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x227ccc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227cd0: 0xc089f44  jal         func_227D10
    ctx->pc = 0x227CD0u;
    SET_GPR_U32(ctx, 31, 0x227CD8u);
    ctx->pc = 0x227D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D10u, 0x227CD0u, 0x227CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227CD8u;
label_227cd8:
    // 0x227cd8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x227CD8u;
    {
        const bool branch_taken_0x227cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227CD8u;
        // 0x227cdc: 0x3c0f003a  lui         $t7, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227cd8) {
            ctx->pc = 0x227CF4u;
            goto label_227cf4;
        }
    }
    ctx->pc = 0x227CE0u;
    // 0x227ce0: 0x8deef200  lw          $t6, -0xE00($t7)
    ctx->pc = 0x227ce0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963712)));
    // 0x227ce4: 0x8dc20324  lw          $v0, 0x324($t6)
    ctx->pc = 0x227ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 804)));
label_227ce8:
    // 0x227ce8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227cec: 0x3e00008  jr          $ra
    ctx->pc = 0x227CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227CECu;
        // 0x227cf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227CF4u;
label_227cf4:
    // 0x227cf4: 0x1000fffc  b           . + 4 + (-0x4 << 2)
    ctx->pc = 0x227CF4u;
    {
        const bool branch_taken_0x227cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227CF4u;
        // 0x227cf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227cf4) {
            ctx->pc = 0x227CE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_227ce8;
        }
    }
    ctx->pc = 0x227CFCu;
    // 0x227cfc: 0x0  nop
    ctx->pc = 0x227cfcu;
    // NOP
}
