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

// Function: sub_0016A650
// Address: 0x16a650 - 0x16a6b0
void sub_0016A650_0x16a650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A650_0x16a650");
#endif

    switch (ctx->pc) {
        case 0x16a670u: goto label_16a670;
        default: break;
    }

    ctx->pc = 0x16a650u;

    // 0x16a650: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16a650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16a654: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x16a654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a658: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16a658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16a65c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x16a65cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a660: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16a660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16a664: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x16a664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16a668: 0xc0597dc  jal         func_165F70
    ctx->pc = 0x16A668u;
    SET_GPR_U32(ctx, 31, 0x16A670u);
    ctx->pc = 0x16A66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A668u;
    // 0x16a66c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165F70u, 0x16A668u, 0x16A670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A670u;
label_16a670:
    // 0x16a670: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16a670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16a674: 0x52020007  beql        $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16A674u;
    {
        const bool branch_taken_0x16a674 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x16a674) {
            ctx->pc = 0x16A678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A674u;
            // 0x16a678: 0x97a20020  lhu         $v0, 0x20($sp) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A694u;
            goto label_16a694;
        }
    }
    ctx->pc = 0x16A67Cu;
    // 0x16a67c: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x16A67Cu;
    {
        const bool branch_taken_0x16a67c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a67c) {
            ctx->pc = 0x16A680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A67Cu;
            // 0x16a680: 0x97a20028  lhu         $v0, 0x28($sp) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A694u;
            goto label_16a694;
        }
    }
    ctx->pc = 0x16A684u;
    // 0x16a684: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16a684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a688: 0x52020002  beql        $s0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16A688u;
    {
        const bool branch_taken_0x16a688 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x16a688) {
            ctx->pc = 0x16A68Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A688u;
            // 0x16a68c: 0x97a2002a  lhu         $v0, 0x2A($sp) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 42)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A694u;
            goto label_16a694;
        }
    }
    ctx->pc = 0x16A690u;
    // 0x16a690: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16a690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a694:
    // 0x16a694: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16a694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a698: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16a698u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a69c: 0x3e00008  jr          $ra
    ctx->pc = 0x16A69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A69Cu;
        // 0x16a6a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A69Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A6A4u;
    // 0x16a6a4: 0x0  nop
    ctx->pc = 0x16a6a4u;
    // NOP
    // 0x16a6a8: 0x0  nop
    ctx->pc = 0x16a6a8u;
    // NOP
    // 0x16a6ac: 0x0  nop
    ctx->pc = 0x16a6acu;
    // NOP
}
