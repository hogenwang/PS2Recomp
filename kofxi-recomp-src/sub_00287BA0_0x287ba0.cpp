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

// Function: sub_00287BA0
// Address: 0x287ba0 - 0x287be8
void sub_00287BA0_0x287ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287BA0_0x287ba0");
#endif

    switch (ctx->pc) {
        case 0x287bb4u: goto label_287bb4;
        case 0x287bc8u: goto label_287bc8;
        default: break;
    }

    ctx->pc = 0x287ba0u;

    // 0x287ba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x287ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x287ba4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x287ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x287ba8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x287ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x287bac: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x287BACu;
    SET_GPR_U32(ctx, 31, 0x287BB4u);
    ctx->pc = 0x287BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287BACu;
    // 0x287bb0: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x287BACu, 0x287BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287BB4u;
label_287bb4:
    // 0x287bb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x287bb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287bb8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x287BB8u;
    {
        const bool branch_taken_0x287bb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x287BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287BB8u;
        // 0x287bbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287bb8) {
            ctx->pc = 0x287BD4u;
            goto label_287bd4;
        }
    }
    ctx->pc = 0x287BC0u;
    // 0x287bc0: 0xc0a1efa  jal         func_287BE8
    ctx->pc = 0x287BC0u;
    SET_GPR_U32(ctx, 31, 0x287BC8u);
    ctx->pc = 0x287BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287BC0u;
    // 0x287bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287BE8u, 0x287BC0u, 0x287BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287BC8u;
label_287bc8:
    // 0x287bc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x287bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287bcc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x287bccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287bd0: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x287bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
label_287bd4:
    // 0x287bd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x287bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x287bd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x287bd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x287bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x287BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287BDCu;
        // 0x287be0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287BE4u;
    // 0x287be4: 0x0  nop
    ctx->pc = 0x287be4u;
    // NOP
}
