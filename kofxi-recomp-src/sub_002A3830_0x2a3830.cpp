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

// Function: sub_002A3830
// Address: 0x2a3830 - 0x2a3878
void sub_002A3830_0x2a3830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3830_0x2a3830");
#endif

    switch (ctx->pc) {
        case 0x2a3830u: goto label_2a3830;
        case 0x2a3834u: goto label_2a3834;
        case 0x2a3838u: goto label_2a3838;
        case 0x2a383cu: goto label_2a383c;
        case 0x2a3840u: goto label_2a3840;
        case 0x2a3844u: goto label_2a3844;
        case 0x2a3848u: goto label_2a3848;
        case 0x2a384cu: goto label_2a384c;
        case 0x2a3850u: goto label_2a3850;
        case 0x2a3854u: goto label_2a3854;
        case 0x2a3858u: goto label_2a3858;
        case 0x2a385cu: goto label_2a385c;
        case 0x2a3860u: goto label_2a3860;
        case 0x2a3864u: goto label_2a3864;
        case 0x2a3868u: goto label_2a3868;
        case 0x2a386cu: goto label_2a386c;
        case 0x2a3870u: goto label_2a3870;
        case 0x2a3874u: goto label_2a3874;
        default: break;
    }

    ctx->pc = 0x2a3830u;

label_2a3830:
    // 0x2a3830: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a3830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2a3834:
    // 0x2a3834: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a3834u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a3838:
    // 0x2a3838: 0x8c426a40  lw          $v0, 0x6A40($v0)
    ctx->pc = 0x2a3838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27200)));
label_2a383c:
    // 0x2a383c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2a3840:
    if (ctx->pc == 0x2A3840u) {
        ctx->pc = 0x2A3840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A383Cu;
        // 0x2a3840: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3844u;
        goto label_2a3844;
    }
    ctx->pc = 0x2A383Cu;
    {
        const bool branch_taken_0x2a383c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A383Cu;
        // 0x2a3840: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a383c) {
            ctx->pc = 0x2A3854u;
            goto label_2a3854;
        }
    }
    ctx->pc = 0x2A3844u;
label_2a3844:
    // 0x2a3844: 0x40f809  jalr        $v0
label_2a3848:
    if (ctx->pc == 0x2A3848u) {
        ctx->pc = 0x2A384Cu;
        goto label_2a384c;
    }
    ctx->pc = 0x2A3844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A384Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3844u, 0x2A384Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A384Cu;
label_2a384c:
    // 0x2a384c: 0x10000003  b           . + 4 + (0x3 << 2)
label_2a3850:
    if (ctx->pc == 0x2A3850u) {
        ctx->pc = 0x2A3850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A384Cu;
        // 0x2a3850: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3854u;
        goto label_2a3854;
    }
    ctx->pc = 0x2A384Cu;
    {
        const bool branch_taken_0x2a384c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A384Cu;
        // 0x2a3850: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a384c) {
            ctx->pc = 0x2A385Cu;
            goto label_2a385c;
        }
    }
    ctx->pc = 0x2A3854u;
label_2a3854:
    // 0x2a3854: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a3854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a3858:
    // 0x2a3858: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a3858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a385c:
    // 0x2a385c: 0x3e00008  jr          $ra
label_2a3860:
    if (ctx->pc == 0x2A3860u) {
        ctx->pc = 0x2A3860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A385Cu;
        // 0x2a3860: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3864u;
        goto label_2a3864;
    }
    ctx->pc = 0x2A385Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A385Cu;
        // 0x2a3860: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A385Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3864u;
label_2a3864:
    // 0x2a3864: 0x0  nop
    ctx->pc = 0x2a3864u;
    // NOP
label_2a3868:
    // 0x2a3868: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2a3868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2a386c:
    // 0x2a386c: 0x3e00008  jr          $ra
label_2a3870:
    if (ctx->pc == 0x2A3870u) {
        ctx->pc = 0x2A3870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A386Cu;
        // 0x2a3870: 0x8c626a40  lw          $v0, 0x6A40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3874u;
        goto label_2a3874;
    }
    ctx->pc = 0x2A386Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A386Cu;
        // 0x2a3870: 0x8c626a40  lw          $v0, 0x6A40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27200)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A386Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3874u;
label_2a3874:
    // 0x2a3874: 0x0  nop
    ctx->pc = 0x2a3874u;
    // NOP
    if (ctx->pc == 0x2a3874u) { ctx->pc = 0x2a3878u; }
}
