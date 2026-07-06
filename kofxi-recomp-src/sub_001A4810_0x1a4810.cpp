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

// Function: sub_001A4810
// Address: 0x1a4810 - 0x1a48a0
void sub_001A4810_0x1a4810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4810_0x1a4810");
#endif

    switch (ctx->pc) {
        case 0x1a4844u: goto label_1a4844;
        case 0x1a4864u: goto label_1a4864;
        case 0x1a487cu: goto label_1a487c;
        case 0x1a488cu: goto label_1a488c;
        default: break;
    }

    ctx->pc = 0x1a4810u;

    // 0x1a4810: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a4810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a4814: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1a4814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4818: 0x28c10321  slti        $at, $a2, 0x321
    ctx->pc = 0x1a4818u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)801) ? 1 : 0);
    // 0x1a481c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A481Cu;
    {
        const bool branch_taken_0x1a481c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A481Cu;
        // 0x1a4820: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a481c) {
            ctx->pc = 0x1A4828u;
            goto label_1a4828;
        }
    }
    ctx->pc = 0x1A4824u;
    // 0x1a4824: 0x24060320  addiu       $a2, $zero, 0x320
    ctx->pc = 0x1a4824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
label_1a4828:
    // 0x1a4828: 0x54c00008  bnel        $a2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A4828u;
    {
        const bool branch_taken_0x1a4828 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4828) {
            ctx->pc = 0x1A482Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4828u;
            // 0x1a482c: 0x28c10265  slti        $at, $a2, 0x265 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)613) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A484Cu;
            goto label_1a484c;
        }
    }
    ctx->pc = 0x1A4830u;
    // 0x1a4830: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1a4830u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1a4834: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1a4834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a4838: 0x24a56910  addiu       $a1, $a1, 0x6910
    ctx->pc = 0x1a4838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26896));
    // 0x1a483c: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x1A483Cu;
    SET_GPR_U32(ctx, 31, 0x1A4844u);
    ctx->pc = 0x1A4840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A483Cu;
    // 0x1a4840: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x1A483Cu, 0x1A4844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4844u;
label_1a4844:
    // 0x1a4844: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A4844u;
    {
        const bool branch_taken_0x1a4844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4844) {
            ctx->pc = 0x1A487Cu;
            goto label_1a487c;
        }
    }
    ctx->pc = 0x1A484Cu;
label_1a484c:
    // 0x1a484c: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A484Cu;
    {
        const bool branch_taken_0x1a484c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a484c) {
            ctx->pc = 0x1A486Cu;
            goto label_1a486c;
        }
    }
    ctx->pc = 0x1A4854u;
    // 0x1a4854: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1a4854u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1a4858: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1a4858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a485c: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x1A485Cu;
    SET_GPR_U32(ctx, 31, 0x1A4864u);
    ctx->pc = 0x1A4860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A485Cu;
    // 0x1a4860: 0x24a56910  addiu       $a1, $a1, 0x6910 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x1A485Cu, 0x1A4864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4864u;
label_1a4864:
    // 0x1a4864: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4864u;
    {
        const bool branch_taken_0x1a4864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4864) {
            ctx->pc = 0x1A487Cu;
            goto label_1a487c;
        }
    }
    ctx->pc = 0x1A486Cu;
label_1a486c:
    // 0x1a486c: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1a486cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1a4870: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1a4870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a4874: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x1A4874u;
    SET_GPR_U32(ctx, 31, 0x1A487Cu);
    ctx->pc = 0x1A4878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4874u;
    // 0x1a4878: 0x24a56930  addiu       $a1, $a1, 0x6930 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x1A4874u, 0x1A487Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A487Cu;
label_1a487c:
    // 0x1a487c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a487cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a4880: 0x8c45b7d8  lw          $a1, -0x4828($v0)
    ctx->pc = 0x1a4880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948824)));
    // 0x1a4884: 0xc068f6c  jal         func_1A3DB0
    ctx->pc = 0x1A4884u;
    SET_GPR_U32(ctx, 31, 0x1A488Cu);
    ctx->pc = 0x1A4888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4884u;
    // 0x1a4888: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3DB0u, 0x1A4884u, 0x1A488Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A488Cu;
label_1a488c:
    // 0x1a488c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a488cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4890: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4890u;
        // 0x1a4894: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4898u;
    // 0x1a4898: 0x0  nop
    ctx->pc = 0x1a4898u;
    // NOP
    // 0x1a489c: 0x0  nop
    ctx->pc = 0x1a489cu;
    // NOP
    if (ctx->pc == 0x1a489cu) { ctx->pc = 0x1a48a0u; }
}
