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

// Function: sub_001CD000
// Address: 0x1cd000 - 0x1cd038
void sub_001CD000_0x1cd000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD000_0x1cd000");
#endif

    switch (ctx->pc) {
        case 0x1cd020u: goto label_1cd020;
        default: break;
    }

    ctx->pc = 0x1cd000u;

    // 0x1cd000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cd000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cd004: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1cd004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1cd008: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cd008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cd00c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cd00cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd010: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1cd010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1cd014: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cd014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cd018: 0xc0733bc  jal         func_1CCEF0
    ctx->pc = 0x1CD018u;
    SET_GPR_U32(ctx, 31, 0x1CD020u);
    ctx->pc = 0x1CD01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD018u;
    // 0x1cd01c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCEF0u, 0x1CD018u, 0x1CD020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD020u;
label_1cd020:
    // 0x1cd020: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1cd020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1cd024: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cd024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cd028: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd028u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd02c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD02Cu;
        // 0x1cd030: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD02Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD034u;
    // 0x1cd034: 0x0  nop
    ctx->pc = 0x1cd034u;
    // NOP
    if (ctx->pc == 0x1cd034u) { ctx->pc = 0x1cd038u; }
}
