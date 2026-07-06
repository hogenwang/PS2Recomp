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

// Function: sub_002FC7A0
// Address: 0x2fc7a0 - 0x2fc840
void sub_002FC7A0_0x2fc7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC7A0_0x2fc7a0");
#endif

    switch (ctx->pc) {
        case 0x2fc7b0u: goto label_2fc7b0;
        case 0x2fc7d0u: goto label_2fc7d0;
        case 0x2fc7f0u: goto label_2fc7f0;
        case 0x2fc810u: goto label_2fc810;
        case 0x2fc830u: goto label_2fc830;
        default: break;
    }

    ctx->pc = 0x2fc7a0u;

    // 0x2fc7a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fc7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fc7a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fc7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fc7a8: 0xc0974ee  jal         func_25D3B8
    ctx->pc = 0x2FC7A8u;
    SET_GPR_U32(ctx, 31, 0x2FC7B0u);
    ctx->pc = 0x25D3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D3B8u, 0x2FC7A8u, 0x2FC7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC7B0u;
label_2fc7b0:
    // 0x2fc7b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fc7b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC7B4u;
        // 0x2fc7b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC7B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC7BCu;
    // 0x2fc7bc: 0x0  nop
    ctx->pc = 0x2fc7bcu;
    // NOP
    // 0x2fc7c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fc7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fc7c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fc7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fc7c8: 0xc0978e0  jal         func_25E380
    ctx->pc = 0x2FC7C8u;
    SET_GPR_U32(ctx, 31, 0x2FC7D0u);
    ctx->pc = 0x25E380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E380u, 0x2FC7C8u, 0x2FC7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC7D0u;
label_2fc7d0:
    // 0x2fc7d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fc7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc7d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC7D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC7D4u;
        // 0x2fc7d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC7D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC7DCu;
    // 0x2fc7dc: 0x0  nop
    ctx->pc = 0x2fc7dcu;
    // NOP
    // 0x2fc7e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fc7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fc7e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fc7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fc7e8: 0xc09789e  jal         func_25E278
    ctx->pc = 0x2FC7E8u;
    SET_GPR_U32(ctx, 31, 0x2FC7F0u);
    ctx->pc = 0x25E278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E278u, 0x2FC7E8u, 0x2FC7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC7F0u;
label_2fc7f0:
    // 0x2fc7f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fc7f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc7f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC7F4u;
        // 0x2fc7f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC7F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC7FCu;
    // 0x2fc7fc: 0x0  nop
    ctx->pc = 0x2fc7fcu;
    // NOP
    // 0x2fc800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fc800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fc804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fc804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fc808: 0xc097812  jal         func_25E048
    ctx->pc = 0x2FC808u;
    SET_GPR_U32(ctx, 31, 0x2FC810u);
    ctx->pc = 0x25E048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E048u, 0x2FC808u, 0x2FC810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC810u;
label_2fc810:
    // 0x2fc810: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fc810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc814: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC814u;
        // 0x2fc818: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC81Cu;
    // 0x2fc81c: 0x0  nop
    ctx->pc = 0x2fc81cu;
    // NOP
    // 0x2fc820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fc820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fc824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fc824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fc828: 0xc09741e  jal         func_25D078
    ctx->pc = 0x2FC828u;
    SET_GPR_U32(ctx, 31, 0x2FC830u);
    ctx->pc = 0x25D078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D078u, 0x2FC828u, 0x2FC830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC830u;
label_2fc830:
    // 0x2fc830: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fc830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc834: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC834u;
        // 0x2fc838: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC83Cu;
    // 0x2fc83c: 0x0  nop
    ctx->pc = 0x2fc83cu;
    // NOP
}
