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

// Function: sub_00323820
// Address: 0x323820 - 0x323860
void sub_00323820_0x323820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323820_0x323820");
#endif

    switch (ctx->pc) {
        case 0x323840u: goto label_323840;
        default: break;
    }

    ctx->pc = 0x323820u;

    // 0x323820: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x323820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x323824: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x323824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x323828: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x323828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32382c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32382cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x323830: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x323830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323834: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x323834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323838: 0xc0c87e4  jal         func_321F90
    ctx->pc = 0x323838u;
    SET_GPR_U32(ctx, 31, 0x323840u);
    ctx->pc = 0x32383Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323838u;
    // 0x32383c: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321F90u, 0x323838u, 0x323840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323840u;
label_323840:
    // 0x323840: 0xa4510006  sh          $s1, 0x6($v0)
    ctx->pc = 0x323840u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 17));
    // 0x323844: 0xa4500008  sh          $s0, 0x8($v0)
    ctx->pc = 0x323844u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 16));
    // 0x323848: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x323848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32384c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32384cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323850: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x323850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323854: 0x3e00008  jr          $ra
    ctx->pc = 0x323854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323854u;
        // 0x323858: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32385Cu;
    // 0x32385c: 0x0  nop
    ctx->pc = 0x32385cu;
    // NOP
}
