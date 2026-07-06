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

// Function: sub_001C2750
// Address: 0x1c2750 - 0x1c2780
void sub_001C2750_0x1c2750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2750_0x1c2750");
#endif

    switch (ctx->pc) {
        case 0x1c2750u: goto label_1c2750;
        case 0x1c2754u: goto label_1c2754;
        case 0x1c2758u: goto label_1c2758;
        case 0x1c275cu: goto label_1c275c;
        case 0x1c2760u: goto label_1c2760;
        case 0x1c2764u: goto label_1c2764;
        case 0x1c2768u: goto label_1c2768;
        case 0x1c276cu: goto label_1c276c;
        case 0x1c2770u: goto label_1c2770;
        case 0x1c2774u: goto label_1c2774;
        case 0x1c2778u: goto label_1c2778;
        case 0x1c277cu: goto label_1c277c;
        default: break;
    }

    ctx->pc = 0x1c2750u;

label_1c2750:
    // 0x1c2750: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c2750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c2754:
    // 0x1c2754: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c2754u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c2758:
    // 0x1c2758: 0x8c43dca4  lw          $v1, -0x235C($v0)
    ctx->pc = 0x1c2758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958244)));
label_1c275c:
    // 0x1c275c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c275cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c2760:
    // 0x1c2760: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1c2764:
    if (ctx->pc == 0x1C2764u) {
        ctx->pc = 0x1C2764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2760u;
        // 0x1c2764: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2768u;
        goto label_1c2768;
    }
    ctx->pc = 0x1C2760u;
    {
        const bool branch_taken_0x1c2760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2760u;
        // 0x1c2764: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2760) {
            ctx->pc = 0x1C2774u;
            goto label_1c2774;
        }
    }
    ctx->pc = 0x1C2768u;
label_1c2768:
    // 0x1c2768: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c2768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c276c:
    // 0x1c276c: 0x60f809  jalr        $v1
label_1c2770:
    if (ctx->pc == 0x1C2770u) {
        ctx->pc = 0x1C2770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C276Cu;
        // 0x1c2770: 0x8c44dca8  lw          $a0, -0x2358($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2774u;
        goto label_1c2774;
    }
    ctx->pc = 0x1C276Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C2774u);
        ctx->pc = 0x1C2770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C276Cu;
        // 0x1c2770: 0x8c44dca8  lw          $a0, -0x2358($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958248)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C276Cu, 0x1C2774u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C2774u;
label_1c2774:
    // 0x1c2774: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c2774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c2778:
    // 0x1c2778: 0x3e00008  jr          $ra
label_1c277c:
    if (ctx->pc == 0x1C277Cu) {
        ctx->pc = 0x1C277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2778u;
        // 0x1c277c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2780u;
        goto label_fallthrough_0x1c2778;
    }
    ctx->pc = 0x1C2778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2778u;
        // 0x1c277c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c2778:
    ctx->pc = 0x1C2780u;
}
