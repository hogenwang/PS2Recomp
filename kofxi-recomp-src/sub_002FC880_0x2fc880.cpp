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

// Function: sub_002FC880
// Address: 0x2fc880 - 0x2fc8e0
void sub_002FC880_0x2fc880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC880_0x2fc880");
#endif

    switch (ctx->pc) {
        case 0x2fc890u: goto label_2fc890;
        case 0x2fc8b0u: goto label_2fc8b0;
        case 0x2fc8d0u: goto label_2fc8d0;
        default: break;
    }

    ctx->pc = 0x2fc880u;

    // 0x2fc880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fc880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fc884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fc884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fc888: 0xc09754a  jal         func_25D528
    ctx->pc = 0x2FC888u;
    SET_GPR_U32(ctx, 31, 0x2FC890u);
    ctx->pc = 0x25D528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D528u, 0x2FC888u, 0x2FC890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC890u;
label_2fc890:
    // 0x2fc890: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fc890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc894: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC894u;
        // 0x2fc898: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC89Cu;
    // 0x2fc89c: 0x0  nop
    ctx->pc = 0x2fc89cu;
    // NOP
    // 0x2fc8a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fc8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fc8a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fc8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fc8a8: 0xc097576  jal         func_25D5D8
    ctx->pc = 0x2FC8A8u;
    SET_GPR_U32(ctx, 31, 0x2FC8B0u);
    ctx->pc = 0x25D5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D5D8u, 0x2FC8A8u, 0x2FC8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC8B0u;
label_2fc8b0:
    // 0x2fc8b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fc8b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc8b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC8B4u;
        // 0x2fc8b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC8B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC8BCu;
    // 0x2fc8bc: 0x0  nop
    ctx->pc = 0x2fc8bcu;
    // NOP
    // 0x2fc8c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fc8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fc8c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fc8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fc8c8: 0xc0977ce  jal         func_25DF38
    ctx->pc = 0x2FC8C8u;
    SET_GPR_U32(ctx, 31, 0x2FC8D0u);
    ctx->pc = 0x25DF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DF38u, 0x2FC8C8u, 0x2FC8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC8D0u;
label_2fc8d0:
    // 0x2fc8d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fc8d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc8d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC8D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC8D4u;
        // 0x2fc8d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC8D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC8DCu;
    // 0x2fc8dc: 0x0  nop
    ctx->pc = 0x2fc8dcu;
    // NOP
    if (ctx->pc == 0x2fc8dcu) { ctx->pc = 0x2fc8e0u; }
}
