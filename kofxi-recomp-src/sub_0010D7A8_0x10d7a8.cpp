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

// Function: sub_0010D7A8
// Address: 0x10d7a8 - 0x10d810
void sub_0010D7A8_0x10d7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D7A8_0x10d7a8");
#endif

    switch (ctx->pc) {
        case 0x10d7d8u: goto label_10d7d8;
        case 0x10d7e0u: goto label_10d7e0;
        case 0x10d7f8u: goto label_10d7f8;
        default: break;
    }

    ctx->pc = 0x10d7a8u;

    // 0x10d7a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10d7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10d7ac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10d7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10d7b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10d7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10d7b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10d7b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d7b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10d7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10d7bc: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x10d7bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x10d7c0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10d7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10d7c4: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x10d7c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x10d7c8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D7C8u;
    {
        const bool branch_taken_0x10d7c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d7c8) {
            ctx->pc = 0x10D7D8u;
            goto label_10d7d8;
        }
    }
    ctx->pc = 0x10D7D0u;
    // 0x10d7d0: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x10D7D0u;
    SET_GPR_U32(ctx, 31, 0x10D7D8u);
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x10D7D0u, 0x10D7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D7D8u;
label_10d7d8:
    // 0x10d7d8: 0xc043268  jal         func_10C9A0
    ctx->pc = 0x10D7D8u;
    SET_GPR_U32(ctx, 31, 0x10D7E0u);
    ctx->pc = 0x10D7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D7D8u;
    // 0x10d7dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C9A0u, 0x10D7D8u, 0x10D7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D7E0u;
label_10d7e0:
    // 0x10d7e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10d7e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d7e4: 0xf  sync
    ctx->pc = 0x10d7e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10d7e8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D7E8u;
    {
        const bool branch_taken_0x10d7e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D7E8u;
        // 0x10d7ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d7e8) {
            ctx->pc = 0x10D7FCu;
            goto label_10d7fc;
        }
    }
    ctx->pc = 0x10D7F0u;
    // 0x10d7f0: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x10D7F0u;
    SET_GPR_U32(ctx, 31, 0x10D7F8u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x10D7F0u, 0x10D7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D7F8u;
label_10d7f8:
    // 0x10d7f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x10d7f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10d7fc:
    // 0x10d7fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10d7fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d800: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10d800u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d804: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10d804u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d808: 0x3e00008  jr          $ra
    ctx->pc = 0x10D808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D808u;
        // 0x10d80c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D810u;
}
