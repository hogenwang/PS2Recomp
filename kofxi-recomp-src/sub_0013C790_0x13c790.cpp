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

// Function: sub_0013C790
// Address: 0x13c790 - 0x13c800
void sub_0013C790_0x13c790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C790_0x13c790");
#endif

    switch (ctx->pc) {
        case 0x13c7a8u: goto label_13c7a8;
        case 0x13c7c0u: goto label_13c7c0;
        case 0x13c7ccu: goto label_13c7cc;
        case 0x13c7ecu: goto label_13c7ec;
        default: break;
    }

    ctx->pc = 0x13c790u;

    // 0x13c790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13c790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13c794: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13c794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13c798: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13c798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13c79c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13c79cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c7a0: 0xc062804  jal         func_18A010
    ctx->pc = 0x13C7A0u;
    SET_GPR_U32(ctx, 31, 0x13C7A8u);
    ctx->pc = 0x13C7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C7A0u;
    // 0x13c7a4: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A010u, 0x13C7A0u, 0x13C7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C7A8u;
label_13c7a8:
    // 0x13c7a8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C7A8u;
    {
        const bool branch_taken_0x13c7a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c7a8) {
            ctx->pc = 0x13C7ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C7A8u;
            // 0x13c7ac: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C7B8u;
            goto label_13c7b8;
        }
    }
    ctx->pc = 0x13C7B0u;
    // 0x13c7b0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x13C7B0u;
    {
        const bool branch_taken_0x13c7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C7B0u;
        // 0x13c7b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c7b0) {
            ctx->pc = 0x13C7F0u;
            goto label_13c7f0;
        }
    }
    ctx->pc = 0x13C7B8u;
label_13c7b8:
    // 0x13c7b8: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x13C7B8u;
    SET_GPR_U32(ctx, 31, 0x13C7C0u);
    ctx->pc = 0x171AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171AB0u, 0x13C7B8u, 0x13C7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C7C0u;
label_13c7c0:
    // 0x13c7c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13c7c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c7c4: 0xc04f880  jal         func_13E200
    ctx->pc = 0x13C7C4u;
    SET_GPR_U32(ctx, 31, 0x13C7CCu);
    ctx->pc = 0x13C7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C7C4u;
    // 0x13c7c8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E200u, 0x13C7C4u, 0x13C7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C7CCu;
label_13c7cc:
    // 0x13c7cc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C7CCu;
    {
        const bool branch_taken_0x13c7cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c7cc) {
            ctx->pc = 0x13C7D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C7CCu;
            // 0x13c7d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C7DCu;
            goto label_13c7dc;
        }
    }
    ctx->pc = 0x13C7D4u;
    // 0x13c7d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13C7D4u;
    {
        const bool branch_taken_0x13c7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C7D4u;
        // 0x13c7d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c7d4) {
            ctx->pc = 0x13C7F0u;
            goto label_13c7f0;
        }
    }
    ctx->pc = 0x13C7DCu;
label_13c7dc:
    // 0x13c7dc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x13c7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13c7e0: 0x24060300  addiu       $a2, $zero, 0x300
    ctx->pc = 0x13c7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x13c7e4: 0xc05a888  jal         func_16A220
    ctx->pc = 0x13C7E4u;
    SET_GPR_U32(ctx, 31, 0x13C7ECu);
    ctx->pc = 0x13C7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C7E4u;
    // 0x13c7e8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x13C7E4u, 0x13C7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C7ECu;
label_13c7ec:
    // 0x13c7ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13c7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13c7f0:
    // 0x13c7f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13c7f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c7f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13c7f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x13C7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C7F8u;
        // 0x13c7fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C7F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C800u;
}
