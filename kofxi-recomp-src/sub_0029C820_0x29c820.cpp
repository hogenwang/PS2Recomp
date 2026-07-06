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

// Function: sub_0029C820
// Address: 0x29c820 - 0x29c870
void sub_0029C820_0x29c820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C820_0x29c820");
#endif

    switch (ctx->pc) {
        case 0x29c840u: goto label_29c840;
        case 0x29c85cu: goto label_29c85c;
        default: break;
    }

    ctx->pc = 0x29c820u;

    // 0x29c820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29c820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29c824: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x29c824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x29c828: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29c828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29c82c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x29c82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29c830: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29C830u;
    {
        const bool branch_taken_0x29c830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29c830) {
            ctx->pc = 0x29C834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C830u;
            // 0x29c834: 0x24020074  addiu       $v0, $zero, 0x74 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C848u;
            goto label_29c848;
        }
    }
    ctx->pc = 0x29C838u;
    // 0x29c838: 0xc0aa39c  jal         func_2A8E70
    ctx->pc = 0x29C838u;
    SET_GPR_U32(ctx, 31, 0x29C840u);
    ctx->pc = 0x29C83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C838u;
    // 0x29c83c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8E70u, 0x29C838u, 0x29C840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C840u;
label_29c840:
    // 0x29c840: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29C840u;
    {
        const bool branch_taken_0x29c840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C840u;
        // 0x29c844: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c840) {
            ctx->pc = 0x29C864u;
            goto label_29c864;
        }
    }
    ctx->pc = 0x29C848u;
label_29c848:
    // 0x29c848: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29C848u;
    {
        const bool branch_taken_0x29c848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29C84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C848u;
        // 0x29c84c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c848) {
            ctx->pc = 0x29C864u;
            goto label_29c864;
        }
    }
    ctx->pc = 0x29C850u;
    // 0x29c850: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x29c850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x29c854: 0xc0a1a02  jal         func_286808
    ctx->pc = 0x29C854u;
    SET_GPR_U32(ctx, 31, 0x29C85Cu);
    ctx->pc = 0x29C858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C854u;
    // 0x29c858: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286808u, 0x29C854u, 0x29C85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C85Cu;
label_29c85c:
    // 0x29c85c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29C85Cu;
    {
        const bool branch_taken_0x29c85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C85Cu;
        // 0x29c860: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c85c) {
            ctx->pc = 0x29C868u;
            goto label_29c868;
        }
    }
    ctx->pc = 0x29C864u;
label_29c864:
    // 0x29c864: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29c864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29c868:
    // 0x29c868: 0x3e00008  jr          $ra
    ctx->pc = 0x29C868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C868u;
        // 0x29c86c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C870u;
}
