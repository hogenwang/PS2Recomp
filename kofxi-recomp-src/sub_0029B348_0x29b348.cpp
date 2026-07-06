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

// Function: sub_0029B348
// Address: 0x29b348 - 0x29b378
void sub_0029B348_0x29b348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B348_0x29b348");
#endif

    switch (ctx->pc) {
        case 0x29b35cu: goto label_29b35c;
        default: break;
    }

    ctx->pc = 0x29b348u;

    // 0x29b348: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29b348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29b34c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29b34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29b350: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29b350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29b354: 0xc0a6dfe  jal         func_29B7F8
    ctx->pc = 0x29B354u;
    SET_GPR_U32(ctx, 31, 0x29B35Cu);
    ctx->pc = 0x29B358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B354u;
    // 0x29b358: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B7F8u, 0x29B354u, 0x29B35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B35Cu;
label_29b35c:
    // 0x29b35c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29b35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b360: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29b360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b364: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29b364u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b368: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29b368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b36c: 0x80a6d7a  j           func_29B5E8
    ctx->pc = 0x29B36Cu;
    ctx->pc = 0x29B370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B36Cu;
    // 0x29b370: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B5E8u, 0x29B36Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x29B374u;
    // 0x29b374: 0x0  nop
    ctx->pc = 0x29b374u;
    // NOP
}
