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

// Function: sub_001CE0F0
// Address: 0x1ce0f0 - 0x1ce130
void sub_001CE0F0_0x1ce0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE0F0_0x1ce0f0");
#endif

    switch (ctx->pc) {
        case 0x1ce10cu: goto label_1ce10c;
        case 0x1ce118u: goto label_1ce118;
        default: break;
    }

    ctx->pc = 0x1ce0f0u;

    // 0x1ce0f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ce0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ce0f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ce0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ce0f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ce0f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce0fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ce0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ce100: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ce100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ce104: 0xc0736d2  jal         func_1CDB48
    ctx->pc = 0x1CE104u;
    SET_GPR_U32(ctx, 31, 0x1CE10Cu);
    ctx->pc = 0x1CE108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE104u;
    // 0x1ce108: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDB48u, 0x1CE104u, 0x1CE10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE10Cu;
label_1ce10c:
    // 0x1ce10c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ce10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce110: 0xc07384c  jal         func_1CE130
    ctx->pc = 0x1CE110u;
    SET_GPR_U32(ctx, 31, 0x1CE118u);
    ctx->pc = 0x1CE114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE110u;
    // 0x1ce114: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE130u, 0x1CE110u, 0x1CE118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE118u;
label_1ce118:
    // 0x1ce118: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ce118u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce11c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ce11cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ce120: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ce120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce124: 0x80736d8  j           func_1CDB60
    ctx->pc = 0x1CE124u;
    ctx->pc = 0x1CE128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE124u;
    // 0x1ce128: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB60u;
    kofxiLeaveCallbackCriticalSection_0x1cdb60(rdram, ctx, runtime); return;
    ctx->pc = 0x1CE12Cu;
    // 0x1ce12c: 0x0  nop
    ctx->pc = 0x1ce12cu;
    // NOP
}
