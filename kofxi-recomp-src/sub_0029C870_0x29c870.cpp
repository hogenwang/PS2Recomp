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

// Function: sub_0029C870
// Address: 0x29c870 - 0x29c8c8
void sub_0029C870_0x29c870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C870_0x29c870");
#endif

    switch (ctx->pc) {
        case 0x29c894u: goto label_29c894;
        case 0x29c8acu: goto label_29c8ac;
        default: break;
    }

    ctx->pc = 0x29c870u;

    // 0x29c870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29c870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29c874: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x29C874u;
    {
        const bool branch_taken_0x29c874 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C874u;
        // 0x29c878: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c874) {
            ctx->pc = 0x29C8B4u;
            goto label_29c8b4;
        }
    }
    ctx->pc = 0x29C87Cu;
    // 0x29c87c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x29c87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29c880: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x29c880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x29c884: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29C884u;
    {
        const bool branch_taken_0x29c884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29C888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C884u;
        // 0x29c888: 0x24020074  addiu       $v0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c884) {
            ctx->pc = 0x29C89Cu;
            goto label_29c89c;
        }
    }
    ctx->pc = 0x29C88Cu;
    // 0x29c88c: 0xc0aa39c  jal         func_2A8E70
    ctx->pc = 0x29C88Cu;
    SET_GPR_U32(ctx, 31, 0x29C894u);
    ctx->pc = 0x29C890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C88Cu;
    // 0x29c890: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8E70u, 0x29C88Cu, 0x29C894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C894u;
label_29c894:
    // 0x29c894: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x29C894u;
    {
        const bool branch_taken_0x29c894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C894u;
        // 0x29c898: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c894) {
            ctx->pc = 0x29C8BCu;
            goto label_29c8bc;
        }
    }
    ctx->pc = 0x29C89Cu;
label_29c89c:
    // 0x29c89c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29C89Cu;
    {
        const bool branch_taken_0x29c89c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x29C8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C89Cu;
        // 0x29c8a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c89c) {
            ctx->pc = 0x29C8B8u;
            goto label_29c8b8;
        }
    }
    ctx->pc = 0x29C8A4u;
    // 0x29c8a4: 0xc0a5174  jal         func_2945D0
    ctx->pc = 0x29C8A4u;
    SET_GPR_U32(ctx, 31, 0x29C8ACu);
    ctx->pc = 0x29C8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C8A4u;
    // 0x29c8a8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2945D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2945D0u, 0x29C8A4u, 0x29C8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C8ACu;
label_29c8ac:
    // 0x29c8ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x29C8ACu;
    {
        const bool branch_taken_0x29c8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C8ACu;
        // 0x29c8b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c8ac) {
            ctx->pc = 0x29C8BCu;
            goto label_29c8bc;
        }
    }
    ctx->pc = 0x29C8B4u;
label_29c8b4:
    // 0x29c8b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29c8b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29c8b8:
    // 0x29c8b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29c8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29c8bc:
    // 0x29c8bc: 0x3e00008  jr          $ra
    ctx->pc = 0x29C8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C8BCu;
        // 0x29c8c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C8BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C8C4u;
    // 0x29c8c4: 0x0  nop
    ctx->pc = 0x29c8c4u;
    // NOP
    if (ctx->pc == 0x29c8c4u) { ctx->pc = 0x29c8c8u; }
}
