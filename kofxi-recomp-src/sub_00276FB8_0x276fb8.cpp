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

// Function: sub_00276FB8
// Address: 0x276fb8 - 0x276fe8
void sub_00276FB8_0x276fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276FB8_0x276fb8");
#endif

    switch (ctx->pc) {
        case 0x276fd0u: goto label_276fd0;
        default: break;
    }

    ctx->pc = 0x276fb8u;

    // 0x276fb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x276fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x276fbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x276fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x276fc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x276fc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276fc4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x276fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x276fc8: 0xc09e562  jal         func_279588
    ctx->pc = 0x276FC8u;
    SET_GPR_U32(ctx, 31, 0x276FD0u);
    ctx->pc = 0x276FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276FC8u;
    // 0x276fcc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279588u, 0x276FC8u, 0x276FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276FD0u;
label_276fd0:
    // 0x276fd0: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x276fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x276fd4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x276fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x276fd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x276fd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x276FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276FDCu;
        // 0x276fe0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276FE4u;
    // 0x276fe4: 0x0  nop
    ctx->pc = 0x276fe4u;
    // NOP
    if (ctx->pc == 0x276fe4u) { ctx->pc = 0x276fe8u; }
}
