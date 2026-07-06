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

// Function: sub_00308800
// Address: 0x308800 - 0x308860
void sub_00308800_0x308800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308800_0x308800");
#endif

    switch (ctx->pc) {
        case 0x308820u: goto label_308820;
        case 0x308828u: goto label_308828;
        default: break;
    }

    ctx->pc = 0x308800u;

    // 0x308800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x308800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x308804: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x308804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x308808: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x308808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30880c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30880cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x308810: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x308810u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x308814: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x308814u;
    {
        const bool branch_taken_0x308814 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x308818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308814u;
        // 0x308818: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308814) {
            ctx->pc = 0x308840u;
            goto label_308840;
        }
    }
    ctx->pc = 0x30881Cu;
    // 0x30881c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x30881cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_308820:
    // 0x308820: 0xc04a78a  jal         func_129E28
    ctx->pc = 0x308820u;
    SET_GPR_U32(ctx, 31, 0x308828u);
    ctx->pc = 0x308824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308820u;
    // 0x308824: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129E28u, 0x308820u, 0x308828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308828u;
label_308828:
    // 0x308828: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x308828u;
    {
        const bool branch_taken_0x308828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x308828) {
            ctx->pc = 0x30882Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308828u;
            // 0x30882c: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308838u;
            goto label_308838;
        }
    }
    ctx->pc = 0x308830u;
    // 0x308830: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x308830u;
    {
        const bool branch_taken_0x308830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308830u;
        // 0x308834: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308830) {
            ctx->pc = 0x308844u;
            goto label_308844;
        }
    }
    ctx->pc = 0x308838u;
label_308838:
    // 0x308838: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x308838u;
    {
        const bool branch_taken_0x308838 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x308838) {
            ctx->pc = 0x30883Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308838u;
            // 0x30883c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308820u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_308820;
        }
    }
    ctx->pc = 0x308840u;
label_308840:
    // 0x308840: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x308840u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_308844:
    // 0x308844: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x308844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x308848: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x308848u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30884c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30884cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308850: 0x3e00008  jr          $ra
    ctx->pc = 0x308850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308850u;
        // 0x308854: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308858u;
    // 0x308858: 0x0  nop
    ctx->pc = 0x308858u;
    // NOP
    // 0x30885c: 0x0  nop
    ctx->pc = 0x30885cu;
    // NOP
}
