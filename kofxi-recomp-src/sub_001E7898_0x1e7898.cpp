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

// Function: sub_001E7898
// Address: 0x1e7898 - 0x1e7900
void sub_001E7898_0x1e7898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7898_0x1e7898");
#endif

    switch (ctx->pc) {
        case 0x1e78b0u: goto label_1e78b0;
        case 0x1e78ccu: goto label_1e78cc;
        case 0x1e78e0u: goto label_1e78e0;
        default: break;
    }

    ctx->pc = 0x1e7898u;

    // 0x1e7898: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e7898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e789c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e789cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e78a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e78a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e78a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e78a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e78a8: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E78A8u;
    SET_GPR_U32(ctx, 31, 0x1E78B0u);
    ctx->pc = 0x1E78ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E78A8u;
    // 0x1e78ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2960u, 0x1E78A8u, 0x1E78B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E78B0u;
label_1e78b0:
    // 0x1e78b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e78b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e78b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e78b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e78b8: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E78B8u;
    {
        const bool branch_taken_0x1e78b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E78BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E78B8u;
        // 0x1e78bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e78b8) {
            ctx->pc = 0x1E78D8u;
            goto label_1e78d8;
        }
    }
    ctx->pc = 0x1E78C0u;
    // 0x1e78c0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e78c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e78c4: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E78C4u;
    SET_GPR_U32(ctx, 31, 0x1E78CCu);
    ctx->pc = 0x1E78C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E78C4u;
    // 0x1e78c8: 0x2484e5c0  addiu       $a0, $a0, -0x1A40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1E78C4u, 0x1E78CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E78CCu;
label_1e78cc:
    // 0x1e78cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E78CCu;
    {
        const bool branch_taken_0x1e78cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E78D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E78CCu;
        // 0x1e78d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e78cc) {
            ctx->pc = 0x1E78E8u;
            goto label_1e78e8;
        }
    }
    ctx->pc = 0x1E78D4u;
    // 0x1e78d4: 0x0  nop
    ctx->pc = 0x1e78d4u;
    // NOP
label_1e78d8:
    // 0x1e78d8: 0xc079e20  jal         func_1E7880
    ctx->pc = 0x1E78D8u;
    SET_GPR_U32(ctx, 31, 0x1E78E0u);
    ctx->pc = 0x1E7880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7880u, 0x1E78D8u, 0x1E78E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E78E0u;
label_1e78e0:
    // 0x1e78e0: 0x511026  xor         $v0, $v0, $s1
    ctx->pc = 0x1e78e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 17));
    // 0x1e78e4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e78e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e78e8:
    // 0x1e78e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e78e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e78ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e78ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e78f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e78f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e78f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E78F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E78F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E78F4u;
        // 0x1e78f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E78F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E78FCu;
    // 0x1e78fc: 0x0  nop
    ctx->pc = 0x1e78fcu;
    // NOP
}
