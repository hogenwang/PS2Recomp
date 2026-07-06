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

// Function: sub_002FC4B0
// Address: 0x2fc4b0 - 0x2fc4f8
void sub_002FC4B0_0x2fc4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC4B0_0x2fc4b0");
#endif

    switch (ctx->pc) {
        case 0x2fc4c8u: goto label_2fc4c8;
        case 0x2fc4dcu: goto label_2fc4dc;
        default: break;
    }

    ctx->pc = 0x2fc4b0u;

    // 0x2fc4b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fc4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fc4b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fc4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fc4b8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2fc4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2fc4bc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fc4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2fc4c0: 0xc097d76  jal         func_25F5D8
    ctx->pc = 0x2FC4C0u;
    SET_GPR_U32(ctx, 31, 0x2FC4C8u);
    ctx->pc = 0x2FC4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC4C0u;
    // 0x2fc4c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F5D8u, 0x2FC4C0u, 0x2FC4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC4C8u;
label_2fc4c8:
    // 0x2fc4c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2fc4c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc4cc: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FC4CCu;
    {
        const bool branch_taken_0x2fc4cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC4CCu;
        // 0x2fc4d0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc4cc) {
            ctx->pc = 0x2FC4E0u;
            goto label_2fc4e0;
        }
    }
    ctx->pc = 0x2FC4D4u;
    // 0x2fc4d4: 0xc097cb8  jal         func_25F2E0
    ctx->pc = 0x2FC4D4u;
    SET_GPR_U32(ctx, 31, 0x2FC4DCu);
    ctx->pc = 0x2FC4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC4D4u;
    // 0x2fc4d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F2E0u, 0x2FC4D4u, 0x2FC4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC4DCu;
label_2fc4dc:
    // 0x2fc4dc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2fc4dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fc4e0:
    // 0x2fc4e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fc4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fc4e4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2fc4e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fc4e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fc4e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC4ECu;
        // 0x2fc4f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC4F4u;
    // 0x2fc4f4: 0x0  nop
    ctx->pc = 0x2fc4f4u;
    // NOP
}
