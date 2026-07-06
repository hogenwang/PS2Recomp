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

// Function: sub_0029B318
// Address: 0x29b318 - 0x29b348
void sub_0029B318_0x29b318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B318_0x29b318");
#endif

    switch (ctx->pc) {
        case 0x29b32cu: goto label_29b32c;
        default: break;
    }

    ctx->pc = 0x29b318u;

    // 0x29b318: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29b318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29b31c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29b31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29b320: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29b320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29b324: 0xc0a6dfa  jal         func_29B7E8
    ctx->pc = 0x29B324u;
    SET_GPR_U32(ctx, 31, 0x29B32Cu);
    ctx->pc = 0x29B328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B324u;
    // 0x29b328: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B7E8u, 0x29B324u, 0x29B32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B32Cu;
label_29b32c:
    // 0x29b32c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29b32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b330: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29b330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b334: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29b334u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b338: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29b338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b33c: 0x80a6d7a  j           func_29B5E8
    ctx->pc = 0x29B33Cu;
    ctx->pc = 0x29B340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B33Cu;
    // 0x29b340: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B5E8u, 0x29B33Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x29B344u;
    // 0x29b344: 0x0  nop
    ctx->pc = 0x29b344u;
    // NOP
}
