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

// Function: sub_001D8768
// Address: 0x1d8768 - 0x1d87a0
void sub_001D8768_0x1d8768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8768_0x1d8768");
#endif

    switch (ctx->pc) {
        case 0x1d8768u: goto label_1d8768;
        case 0x1d876cu: goto label_1d876c;
        case 0x1d8770u: goto label_1d8770;
        case 0x1d8774u: goto label_1d8774;
        case 0x1d8778u: goto label_1d8778;
        case 0x1d877cu: goto label_1d877c;
        case 0x1d8780u: goto label_1d8780;
        case 0x1d8784u: goto label_1d8784;
        case 0x1d8788u: goto label_1d8788;
        case 0x1d878cu: goto label_1d878c;
        case 0x1d8790u: goto label_1d8790;
        case 0x1d8794u: goto label_1d8794;
        case 0x1d8798u: goto label_1d8798;
        case 0x1d879cu: goto label_1d879c;
        default: break;
    }

    ctx->pc = 0x1d8768u;

label_1d8768:
    // 0x1d8768: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d876c:
    // 0x1d876c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1d876cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d8770:
    // 0x1d8770: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d8770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d8774:
    // 0x1d8774: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1d8778:
    if (ctx->pc == 0x1D8778u) {
        ctx->pc = 0x1D8778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8774u;
        // 0x1d8778: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D877Cu;
        goto label_1d877c;
    }
    ctx->pc = 0x1D8774u;
    {
        const bool branch_taken_0x1d8774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8774u;
        // 0x1d8778: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8774) {
            ctx->pc = 0x1D8790u;
            goto label_1d8790;
        }
    }
    ctx->pc = 0x1D877Cu;
label_1d877c:
    // 0x1d877c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d877cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d8780:
    // 0x1d8780: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1d8784:
    if (ctx->pc == 0x1D8784u) {
        ctx->pc = 0x1D8784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8780u;
        // 0x1d8784: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8788u;
        goto label_1d8788;
    }
    ctx->pc = 0x1D8780u;
    {
        const bool branch_taken_0x1d8780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8780) {
            ctx->pc = 0x1D8784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8780u;
            // 0x1d8784: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8794u;
            goto label_1d8794;
        }
    }
    ctx->pc = 0x1D8788u;
label_1d8788:
    // 0x1d8788: 0x40f809  jalr        $v0
label_1d878c:
    if (ctx->pc == 0x1D878Cu) {
        ctx->pc = 0x1D878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8788u;
        // 0x1d878c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D8790u;
        goto label_1d8790;
    }
    ctx->pc = 0x1D8788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D8790u);
        ctx->pc = 0x1D878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8788u;
        // 0x1d878c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8788u, 0x1D8790u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D8790u;
label_1d8790:
    // 0x1d8790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d8794:
    // 0x1d8794: 0x3e00008  jr          $ra
label_1d8798:
    if (ctx->pc == 0x1D8798u) {
        ctx->pc = 0x1D8798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8794u;
        // 0x1d8798: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D879Cu;
        goto label_1d879c;
    }
    ctx->pc = 0x1D8794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8794u;
        // 0x1d8798: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D879Cu;
label_1d879c:
    // 0x1d879c: 0x0  nop
    ctx->pc = 0x1d879cu;
    // NOP
    if (ctx->pc == 0x1d879cu) { ctx->pc = 0x1d87a0u; }
}
