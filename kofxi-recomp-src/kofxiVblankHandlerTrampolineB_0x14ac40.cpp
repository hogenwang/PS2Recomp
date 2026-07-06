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

// Function: kofxiVblankHandlerTrampolineB
// Address: 0x14ac40 - 0x14ac70
void kofxiVblankHandlerTrampolineB_0x14ac40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiVblankHandlerTrampolineB_0x14ac40");
#endif

    switch (ctx->pc) {
        case 0x14ac50u: goto label_14ac50;
        default: break;
    }

    ctx->pc = 0x14ac40u;

    // 0x14ac40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14ac40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14ac44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14ac44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14ac48: 0xc06cfe4  jal         func_1B3F90
    ctx->pc = 0x14AC48u;
    SET_GPR_U32(ctx, 31, 0x14AC50u);
    ctx->pc = 0x14AC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AC48u;
    // 0x14ac4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3F90u, 0x14AC48u, 0x14AC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AC50u;
label_14ac50:
    // 0x14ac50: 0xf  sync
    ctx->pc = 0x14ac50u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x14ac54: 0x42000038  ei
    ctx->pc = 0x14ac54u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x14ac58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14ac58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ac5c: 0x3e00008  jr          $ra
    ctx->pc = 0x14AC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14AC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AC5Cu;
        // 0x14ac60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AC5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14AC64u;
    // 0x14ac64: 0x0  nop
    ctx->pc = 0x14ac64u;
    // NOP
    // 0x14ac68: 0x0  nop
    ctx->pc = 0x14ac68u;
    // NOP
    // 0x14ac6c: 0x0  nop
    ctx->pc = 0x14ac6cu;
    // NOP
    if (ctx->pc == 0x14ac6cu) { ctx->pc = 0x14ac70u; }
}
