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

// Function: sub_0021FEB0
// Address: 0x21feb0 - 0x21fee0
void sub_0021FEB0_0x21feb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021FEB0_0x21feb0");
#endif

    ctx->pc = 0x21feb0u;

    // 0x21feb0: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21feb0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21feb4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21feb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21feb8: 0x8deeca14  lw          $t6, -0x35EC($t7)
    ctx->pc = 0x21feb8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294953492)));
    // 0x21febc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21febcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21fec0: 0x19c00004  blez        $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x21FEC0u;
    {
        const bool branch_taken_0x21fec0 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x21FEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FEC0u;
        // 0x21fec4: 0x1c0202d  daddu       $a0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fec0) {
            ctx->pc = 0x21FED4u;
            goto label_21fed4;
        }
    }
    ctx->pc = 0x21FEC8u;
    // 0x21fec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21fec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21fecc: 0x8043320  j           func_10CC80
    ctx->pc = 0x21FECCu;
    ctx->pc = 0x21FED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FECCu;
    // 0x21fed0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    sub_0010CC80_0x10cc80(rdram, ctx, runtime); return;
    ctx->pc = 0x21FED4u;
label_21fed4:
    // 0x21fed4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21fed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21fed8: 0x3e00008  jr          $ra
    ctx->pc = 0x21FED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FED8u;
        // 0x21fedc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21FEE0u;
}
