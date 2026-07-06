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

// Function: sub_0029B798
// Address: 0x29b798 - 0x29b7e8
void sub_0029B798_0x29b798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B798_0x29b798");
#endif

    switch (ctx->pc) {
        case 0x29b7b8u: goto label_29b7b8;
        default: break;
    }

    ctx->pc = 0x29b798u;

    // 0x29b798: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29b798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29b79c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29b79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29b7a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29b7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29b7a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29b7a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b7a8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29b7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29b7ac: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x29b7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x29b7b0: 0xc0a0fe0  jal         func_283F80
    ctx->pc = 0x29B7B0u;
    SET_GPR_U32(ctx, 31, 0x29B7B8u);
    ctx->pc = 0x29B7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B7B0u;
    // 0x29b7b4: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283F80u, 0x29B7B0u, 0x29B7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B7B8u;
label_29b7b8:
    // 0x29b7b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x29b7b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b7bc: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29B7BCu;
    {
        const bool branch_taken_0x29b7bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B7BCu;
        // 0x29b7c0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b7bc) {
            ctx->pc = 0x29B7D4u;
            goto label_29b7d4;
        }
    }
    ctx->pc = 0x29B7C4u;
    // 0x29b7c4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x29b7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29b7c8: 0x56220002  bnel        $s1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29B7C8u;
    {
        const bool branch_taken_0x29b7c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x29b7c8) {
            ctx->pc = 0x29B7CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29B7C8u;
            // 0x29b7cc: 0xae1100d0  sw          $s1, 0xD0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29B7D4u;
            goto label_29b7d4;
        }
    }
    ctx->pc = 0x29B7D0u;
    // 0x29b7d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29b7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29b7d4:
    // 0x29b7d4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x29b7d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b7d8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29b7d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b7dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29b7dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b7e0: 0x3e00008  jr          $ra
    ctx->pc = 0x29B7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B7E0u;
        // 0x29b7e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B7E8u;
}
