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

// Function: sub_0013C750
// Address: 0x13c750 - 0x13c790
void sub_0013C750_0x13c750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C750_0x13c750");
#endif

    switch (ctx->pc) {
        case 0x13c764u: goto label_13c764;
        case 0x13c77cu: goto label_13c77c;
        default: break;
    }

    ctx->pc = 0x13c750u;

    // 0x13c750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13c750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13c754: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13c754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13c758: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13c758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13c75c: 0xc04f1e4  jal         func_13C790
    ctx->pc = 0x13C75Cu;
    SET_GPR_U32(ctx, 31, 0x13C764u);
    ctx->pc = 0x13C760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C75Cu;
    // 0x13c760: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C790u, 0x13C75Cu, 0x13C764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C764u;
label_13c764:
    // 0x13c764: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C764u;
    {
        const bool branch_taken_0x13c764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c764) {
            ctx->pc = 0x13C768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C764u;
            // 0x13c768: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C774u;
            goto label_13c774;
        }
    }
    ctx->pc = 0x13C76Cu;
    // 0x13c76c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13C76Cu;
    {
        const bool branch_taken_0x13c76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C76Cu;
        // 0x13c770: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c76c) {
            ctx->pc = 0x13C780u;
            goto label_13c780;
        }
    }
    ctx->pc = 0x13C774u;
label_13c774:
    // 0x13c774: 0xc04f200  jal         func_13C800
    ctx->pc = 0x13C774u;
    SET_GPR_U32(ctx, 31, 0x13C77Cu);
    ctx->pc = 0x13C800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C800u, 0x13C774u, 0x13C77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C77Cu;
label_13c77c:
    // 0x13c77c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x13c77cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13c780:
    // 0x13c780: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13c780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c784: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13c784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c788: 0x3e00008  jr          $ra
    ctx->pc = 0x13C788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C788u;
        // 0x13c78c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C790u;
}
