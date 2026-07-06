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

// Function: sub_001E3B90
// Address: 0x1e3b90 - 0x1e3be0
void sub_001E3B90_0x1e3b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3B90_0x1e3b90");
#endif

    switch (ctx->pc) {
        case 0x1e3ba8u: goto label_1e3ba8;
        case 0x1e3bc4u: goto label_1e3bc4;
        default: break;
    }

    ctx->pc = 0x1e3b90u;

    // 0x1e3b90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e3b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e3b94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e3b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e3b98: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e3b98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3b9c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e3b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e3ba0: 0xc078ef8  jal         func_1E3BE0
    ctx->pc = 0x1E3BA0u;
    SET_GPR_U32(ctx, 31, 0x1E3BA8u);
    ctx->pc = 0x1E3BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3BA0u;
    // 0x1e3ba4: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3BE0u, 0x1E3BA0u, 0x1E3BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3BA8u;
label_1e3ba8:
    // 0x1e3ba8: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x1e3ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1e3bac: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e3bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1e3bb0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1e3bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3bb4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E3BB4u;
    {
        const bool branch_taken_0x1e3bb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3BB4u;
        // 0x1e3bb8: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3bb4) {
            ctx->pc = 0x1E3BCCu;
            goto label_1e3bcc;
        }
    }
    ctx->pc = 0x1E3BBCu;
    // 0x1e3bbc: 0xc080bda  jal         func_202F68
    ctx->pc = 0x1E3BBCu;
    SET_GPR_U32(ctx, 31, 0x1E3BC4u);
    ctx->pc = 0x1E3BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3BBCu;
    // 0x1e3bc0: 0x8e05009c  lw          $a1, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202F68u, 0x1E3BBCu, 0x1E3BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3BC4u;
label_1e3bc4:
    // 0x1e3bc4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e3bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1e3bc8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1e3bc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1e3bcc:
    // 0x1e3bcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e3bccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3bd0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e3bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e3bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3BD4u;
        // 0x1e3bd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3BDCu;
    // 0x1e3bdc: 0x0  nop
    ctx->pc = 0x1e3bdcu;
    // NOP
}
