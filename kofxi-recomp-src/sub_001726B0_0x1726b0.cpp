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

// Function: sub_001726B0
// Address: 0x1726b0 - 0x1726f0
void sub_001726B0_0x1726b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001726B0_0x1726b0");
#endif

    switch (ctx->pc) {
        case 0x1726c0u: goto label_1726c0;
        case 0x1726c8u: goto label_1726c8;
        default: break;
    }

    ctx->pc = 0x1726b0u;

    // 0x1726b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1726b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1726b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1726b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1726b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1726b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1726bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1726bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1726c0:
    // 0x1726c0: 0xc05cc70  jal         func_1731C0
    ctx->pc = 0x1726C0u;
    SET_GPR_U32(ctx, 31, 0x1726C8u);
    ctx->pc = 0x1726C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1726C0u;
    // 0x1726c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1731C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1731C0u, 0x1726C0u, 0x1726C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1726C8u;
label_1726c8:
    // 0x1726c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1726c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1726cc: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x1726ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1726d0: 0x0  nop
    ctx->pc = 0x1726d0u;
    // NOP
    // 0x1726d4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1726D4u;
    {
        const bool branch_taken_0x1726d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1726d4) {
            ctx->pc = 0x1726C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1726c0;
        }
    }
    ctx->pc = 0x1726DCu;
    // 0x1726dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1726dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1726e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1726e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1726e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1726E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1726E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1726E4u;
        // 0x1726e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1726E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1726ECu;
    // 0x1726ec: 0x0  nop
    ctx->pc = 0x1726ecu;
    // NOP
    if (ctx->pc == 0x1726ecu) { ctx->pc = 0x1726f0u; }
}
