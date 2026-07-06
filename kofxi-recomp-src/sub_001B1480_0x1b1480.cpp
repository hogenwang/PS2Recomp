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

// Function: sub_001B1480
// Address: 0x1b1480 - 0x1b14b0
void sub_001B1480_0x1b1480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1480_0x1b1480");
#endif

    switch (ctx->pc) {
        case 0x1b14a0u: goto label_1b14a0;
        default: break;
    }

    ctx->pc = 0x1b1480u;

    // 0x1b1480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b1480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b1484: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1b1484u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1488: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1b1488u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b148c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1b148cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1490: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1b1490u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1494: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b1494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b1498: 0xc06c550  jal         func_1B1540
    ctx->pc = 0x1B1498u;
    SET_GPR_U32(ctx, 31, 0x1B14A0u);
    ctx->pc = 0x1B149Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1498u;
    // 0x1b149c: 0x27aa0004  addiu       $t2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1540u, 0x1B1498u, 0x1B14A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B14A0u;
label_1b14a0:
    // 0x1b14a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b14a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b14a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B14A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B14A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B14A4u;
        // 0x1b14a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B14A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B14ACu;
    // 0x1b14ac: 0x0  nop
    ctx->pc = 0x1b14acu;
    // NOP
}
