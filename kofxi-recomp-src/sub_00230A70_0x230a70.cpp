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

// Function: sub_00230A70
// Address: 0x230a70 - 0x230aa0
void sub_00230A70_0x230a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230A70_0x230a70");
#endif

    switch (ctx->pc) {
        case 0x230a84u: goto label_230a84;
        default: break;
    }

    ctx->pc = 0x230a70u;

    // 0x230a70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x230a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x230a74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x230a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x230a78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x230a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x230a7c: 0xc08c4c6  jal         func_231318
    ctx->pc = 0x230A7Cu;
    SET_GPR_U32(ctx, 31, 0x230A84u);
    ctx->pc = 0x230A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230A7Cu;
    // 0x230a80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231318u, 0x230A7Cu, 0x230A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230A84u;
label_230a84:
    // 0x230a84: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x230a84u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x230a88: 0xfe000018  sd          $zero, 0x18($s0)
    ctx->pc = 0x230a88u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 0));
    // 0x230a8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x230a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230a90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x230a90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230a94: 0x3e00008  jr          $ra
    ctx->pc = 0x230A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230A94u;
        // 0x230a98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230A9Cu;
    // 0x230a9c: 0x0  nop
    ctx->pc = 0x230a9cu;
    // NOP
}
