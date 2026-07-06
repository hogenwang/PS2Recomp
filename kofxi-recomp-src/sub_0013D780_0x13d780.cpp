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

// Function: sub_0013D780
// Address: 0x13d780 - 0x13d7e0
void sub_0013D780_0x13d780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D780_0x13d780");
#endif

    switch (ctx->pc) {
        case 0x13d790u: goto label_13d790;
        default: break;
    }

    ctx->pc = 0x13d780u;

    // 0x13d780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13d780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13d784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d788: 0xc062884  jal         func_18A210
    ctx->pc = 0x13D788u;
    SET_GPR_U32(ctx, 31, 0x13D790u);
    ctx->pc = 0x13D78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D788u;
    // 0x13d78c: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A210u, 0x13D788u, 0x13D790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D790u;
label_13d790:
    // 0x13d790: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x13d790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x13d794: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x13d794u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x13d798: 0x28620054  slti        $v0, $v1, 0x54
    ctx->pc = 0x13d798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)84) ? 1 : 0);
    // 0x13d79c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D79Cu;
    {
        const bool branch_taken_0x13d79c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d79c) {
            ctx->pc = 0x13D7A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D79Cu;
            // 0x13d7a0: 0x28620038  slti        $v0, $v1, 0x38 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)56) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D7ACu;
            goto label_13d7ac;
        }
    }
    ctx->pc = 0x13D7A4u;
    // 0x13d7a4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13D7A4u;
    {
        const bool branch_taken_0x13d7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D7A4u;
        // 0x13d7a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d7a4) {
            ctx->pc = 0x13D7CCu;
            goto label_13d7cc;
        }
    }
    ctx->pc = 0x13D7ACu;
label_13d7ac:
    // 0x13d7ac: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D7ACu;
    {
        const bool branch_taken_0x13d7ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d7ac) {
            ctx->pc = 0x13D7B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D7ACu;
            // 0x13d7b0: 0x2862001c  slti        $v0, $v1, 0x1C (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)28) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D7BCu;
            goto label_13d7bc;
        }
    }
    ctx->pc = 0x13D7B4u;
    // 0x13d7b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13D7B4u;
    {
        const bool branch_taken_0x13d7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D7B4u;
        // 0x13d7b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d7b4) {
            ctx->pc = 0x13D7CCu;
            goto label_13d7cc;
        }
    }
    ctx->pc = 0x13D7BCu;
label_13d7bc:
    // 0x13d7bc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D7BCu;
    {
        const bool branch_taken_0x13d7bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d7bc) {
            ctx->pc = 0x13D7C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D7BCu;
            // 0x13d7c0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D7CCu;
            goto label_13d7cc;
        }
    }
    ctx->pc = 0x13D7C4u;
    // 0x13d7c4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x13D7C4u;
    {
        const bool branch_taken_0x13d7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D7C4u;
        // 0x13d7c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d7c4) {
            ctx->pc = 0x13D7CCu;
            goto label_13d7cc;
        }
    }
    ctx->pc = 0x13D7CCu;
label_13d7cc:
    // 0x13d7cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d7ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d7d0: 0x3e00008  jr          $ra
    ctx->pc = 0x13D7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D7D0u;
        // 0x13d7d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D7D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D7D8u;
    // 0x13d7d8: 0x0  nop
    ctx->pc = 0x13d7d8u;
    // NOP
    // 0x13d7dc: 0x0  nop
    ctx->pc = 0x13d7dcu;
    // NOP
    if (ctx->pc == 0x13d7dcu) { ctx->pc = 0x13d7e0u; }
}
