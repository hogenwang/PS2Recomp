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

// Function: sub_001F51E8
// Address: 0x1f51e8 - 0x1f5228
void sub_001F51E8_0x1f51e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F51E8_0x1f51e8");
#endif

    switch (ctx->pc) {
        case 0x1f51f8u: goto label_1f51f8;
        default: break;
    }

    ctx->pc = 0x1f51e8u;

    // 0x1f51e8: 0x8c822018  lw          $v0, 0x2018($a0)
    ctx->pc = 0x1f51e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8216)));
    // 0x1f51ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f51ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f51f0: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x1f51f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x1f51f4: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x1f51f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_1f51f8:
    // 0x1f51f8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1f51f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f51fc: 0x10650008  beq         $v1, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F51FCu;
    {
        const bool branch_taken_0x1f51fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1F5200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F51FCu;
        // 0x1f5200: 0x248400f0  addiu       $a0, $a0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f51fc) {
            ctx->pc = 0x1F5220u;
            goto label_1f5220;
        }
    }
    ctx->pc = 0x1F5204u;
    // 0x1f5204: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f5204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1f5208: 0x28c20010  slti        $v0, $a2, 0x10
    ctx->pc = 0x1f5208u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1f520c: 0x0  nop
    ctx->pc = 0x1f520cu;
    // NOP
    // 0x1f5210: 0x0  nop
    ctx->pc = 0x1f5210u;
    // NOP
    // 0x1f5214: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F5214u;
    {
        const bool branch_taken_0x1f5214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5214) {
            ctx->pc = 0x1F5218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5214u;
            // 0x1f5218: 0x8c830058  lw          $v1, 0x58($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F51F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f51f8;
        }
    }
    ctx->pc = 0x1F521Cu;
    // 0x1f521c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f521cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5220:
    // 0x1f5220: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5228u;
}
