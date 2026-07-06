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

// Function: sub_002617F8
// Address: 0x2617f8 - 0x261858
void sub_002617F8_0x2617f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002617F8_0x2617f8");
#endif

    switch (ctx->pc) {
        case 0x261810u: goto label_261810;
        case 0x261818u: goto label_261818;
        case 0x26182cu: goto label_26182c;
        case 0x26183cu: goto label_26183c;
        default: break;
    }

    ctx->pc = 0x2617f8u;

    // 0x2617f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2617f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2617fc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2617fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x261800: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x261800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x261804: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x261804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x261808: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x261808u;
    SET_GPR_U32(ctx, 31, 0x261810u);
    ctx->pc = 0x26180Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261808u;
    // 0x26180c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x261808u, 0x261810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261810u;
label_261810:
    // 0x261810: 0xc098552  jal         func_261548
    ctx->pc = 0x261810u;
    SET_GPR_U32(ctx, 31, 0x261818u);
    ctx->pc = 0x261814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261810u;
    // 0x261814: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x261810u, 0x261818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261818u;
label_261818:
    // 0x261818: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x261818u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26181c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26181Cu;
    {
        const bool branch_taken_0x26181c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x261820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26181Cu;
        // 0x261820: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26181c) {
            ctx->pc = 0x261840u;
            goto label_261840;
        }
    }
    ctx->pc = 0x261824u;
    // 0x261824: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x261824u;
    SET_GPR_U32(ctx, 31, 0x26182Cu);
    ctx->pc = 0x261828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261824u;
    // 0x261828: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x261824u, 0x26182Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26182Cu;
label_26182c:
    // 0x26182c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26182cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261830: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x261830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x261834: 0xc04a966  jal         func_12A598
    ctx->pc = 0x261834u;
    SET_GPR_U32(ctx, 31, 0x26183Cu);
    ctx->pc = 0x261838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261834u;
    // 0x261838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x261834u, 0x26183Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26183Cu;
label_26183c:
    // 0x26183c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x26183cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_261840:
    // 0x261840: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x261840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x261844: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x261844u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261848: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x261848u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26184c: 0x3e00008  jr          $ra
    ctx->pc = 0x26184Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26184Cu;
        // 0x261850: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26184Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261854u;
    // 0x261854: 0x0  nop
    ctx->pc = 0x261854u;
    // NOP
}
