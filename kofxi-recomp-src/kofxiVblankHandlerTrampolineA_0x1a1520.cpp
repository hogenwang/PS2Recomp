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

// Function: kofxiVblankHandlerTrampolineA
// Address: 0x1a1520 - 0x1a1550
void kofxiVblankHandlerTrampolineA_0x1a1520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiVblankHandlerTrampolineA_0x1a1520");
#endif

    switch (ctx->pc) {
        case 0x1a1530u: goto label_1a1530;
        default: break;
    }

    ctx->pc = 0x1a1520u;

    // 0x1a1520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a1524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1528: 0xc06cfe4  jal         func_1B3F90
    ctx->pc = 0x1A1528u;
    SET_GPR_U32(ctx, 31, 0x1A1530u);
    ctx->pc = 0x1A152Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1528u;
    // 0x1a152c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3F90u, 0x1A1528u, 0x1A1530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1530u;
label_1a1530:
    // 0x1a1530: 0xf  sync
    ctx->pc = 0x1a1530u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a1534: 0x42000038  ei
    ctx->pc = 0x1a1534u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x1a1538: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a153c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a153cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1540: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1540u;
        // 0x1a1544: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1548u;
    // 0x1a1548: 0x0  nop
    ctx->pc = 0x1a1548u;
    // NOP
    // 0x1a154c: 0x0  nop
    ctx->pc = 0x1a154cu;
    // NOP
    if (ctx->pc == 0x1a154cu) { ctx->pc = 0x1a1550u; }
}
