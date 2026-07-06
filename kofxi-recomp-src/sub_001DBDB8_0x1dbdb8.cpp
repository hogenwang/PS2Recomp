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

// Function: sub_001DBDB8
// Address: 0x1dbdb8 - 0x1dbe00
void sub_001DBDB8_0x1dbdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DBDB8_0x1dbdb8");
#endif

    switch (ctx->pc) {
        case 0x1dbdd8u: goto label_1dbdd8;
        default: break;
    }

    ctx->pc = 0x1dbdb8u;

    // 0x1dbdb8: 0x3c0201c0  lui         $v0, 0x1C0
    ctx->pc = 0x1dbdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
    // 0x1dbdbc: 0x24428080  addiu       $v0, $v0, -0x7F80
    ctx->pc = 0x1dbdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934656));
    // 0x1dbdc0: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x1dbdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1dbdc4: 0x1880000b  blez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1DBDC4u;
    {
        const bool branch_taken_0x1dbdc4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1DBDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBDC4u;
        // 0x1dbdc8: 0x8c430058  lw          $v1, 0x58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbdc4) {
            ctx->pc = 0x1DBDF4u;
            goto label_1dbdf4;
        }
    }
    ctx->pc = 0x1DBDCCu;
    // 0x1dbdcc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1dbdccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbdd0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1dbdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbdd4: 0x0  nop
    ctx->pc = 0x1dbdd4u;
    // NOP
label_1dbdd8:
    // 0x1dbdd8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1dbdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1dbddc: 0xac640188  sw          $a0, 0x188($v1)
    ctx->pc = 0x1dbddcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 392), GPR_U32(ctx, 4));
    // 0x1dbde0: 0x0  nop
    ctx->pc = 0x1dbde0u;
    // NOP
    // 0x1dbde4: 0x0  nop
    ctx->pc = 0x1dbde4u;
    // NOP
    // 0x1dbde8: 0x0  nop
    ctx->pc = 0x1dbde8u;
    // NOP
    // 0x1dbdec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DBDECu;
    {
        const bool branch_taken_0x1dbdec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DBDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBDECu;
        // 0x1dbdf0: 0x24630440  addiu       $v1, $v1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbdec) {
            ctx->pc = 0x1DBDD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dbdd8;
        }
    }
    ctx->pc = 0x1DBDF4u;
label_1dbdf4:
    // 0x1dbdf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBDF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBDF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBDFCu;
    // 0x1dbdfc: 0x0  nop
    ctx->pc = 0x1dbdfcu;
    // NOP
    if (ctx->pc == 0x1dbdfcu) { ctx->pc = 0x1dbe00u; }
}
