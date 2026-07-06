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

// Function: sub_002FC8E0
// Address: 0x2fc8e0 - 0x2fc918
void sub_002FC8E0_0x2fc8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC8E0_0x2fc8e0");
#endif

    switch (ctx->pc) {
        case 0x2fc8f4u: goto label_2fc8f4;
        case 0x2fc904u: goto label_2fc904;
        default: break;
    }

    ctx->pc = 0x2fc8e0u;

    // 0x2fc8e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fc8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fc8e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fc8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fc8e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fc8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fc8ec: 0xc0977aa  jal         func_25DEA8
    ctx->pc = 0x2FC8ECu;
    SET_GPR_U32(ctx, 31, 0x2FC8F4u);
    ctx->pc = 0x2FC8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC8ECu;
    // 0x2fc8f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25DEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DEA8u, 0x2FC8ECu, 0x2FC8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC8F4u;
label_2fc8f4:
    // 0x2fc8f4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FC8F4u;
    {
        const bool branch_taken_0x2fc8f4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2FC8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC8F4u;
        // 0x2fc8f8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc8f4) {
            ctx->pc = 0x2FC908u;
            goto label_2fc908;
        }
    }
    ctx->pc = 0x2FC8FCu;
    // 0x2fc8fc: 0xc097c9e  jal         func_25F278
    ctx->pc = 0x2FC8FCu;
    SET_GPR_U32(ctx, 31, 0x2FC904u);
    ctx->pc = 0x2FC900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC8FCu;
    // 0x2fc900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F278u, 0x2FC8FCu, 0x2FC904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC904u;
label_2fc904:
    // 0x2fc904: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fc904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2fc908:
    // 0x2fc908: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fc908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc90c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC90Cu;
        // 0x2fc910: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC90Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC914u;
    // 0x2fc914: 0x0  nop
    ctx->pc = 0x2fc914u;
    // NOP
}
