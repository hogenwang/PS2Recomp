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

// Function: sub_002BC4E0
// Address: 0x2bc4e0 - 0x2bc520
void sub_002BC4E0_0x2bc4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC4E0_0x2bc4e0");
#endif

    switch (ctx->pc) {
        case 0x2bc50cu: goto label_2bc50c;
        default: break;
    }

    ctx->pc = 0x2bc4e0u;

    // 0x2bc4e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bc4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bc4e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bc4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bc4e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bc4e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc4ec: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BC4ECu;
    {
        const bool branch_taken_0x2bc4ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC4ECu;
        // 0x2bc4f0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc4ec) {
            ctx->pc = 0x2BC510u;
            goto label_2bc510;
        }
    }
    ctx->pc = 0x2BC4F4u;
    // 0x2bc4f4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2bc4f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bc4f8: 0x18c00005  blez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BC4F8u;
    {
        const bool branch_taken_0x2bc4f8 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x2BC4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC4F8u;
        // 0x2bc4fc: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc4f8) {
            ctx->pc = 0x2BC510u;
            goto label_2bc510;
        }
    }
    ctx->pc = 0x2BC500u;
    // 0x2bc500: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2bc500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2bc504: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2BC504u;
    SET_GPR_U32(ctx, 31, 0x2BC50Cu);
    ctx->pc = 0x2BC508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC504u;
    // 0x2bc508: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2BC504u, 0x2BC50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC50Cu;
label_2bc50c:
    // 0x2bc50c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2bc50cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2bc510:
    // 0x2bc510: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bc510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bc514: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bc514u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc518: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC518u;
        // 0x2bc51c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC520u;
}
