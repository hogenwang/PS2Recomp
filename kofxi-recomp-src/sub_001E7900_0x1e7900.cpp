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

// Function: sub_001E7900
// Address: 0x1e7900 - 0x1e7948
void sub_001E7900_0x1e7900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7900_0x1e7900");
#endif

    switch (ctx->pc) {
        case 0x1e791cu: goto label_1e791c;
        default: break;
    }

    ctx->pc = 0x1e7900u;

    // 0x1e7900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e7900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e7904: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e7904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e7908: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e7908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e790c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e790cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e7910: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e7910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e7914: 0xc0781e0  jal         func_1E0780
    ctx->pc = 0x1E7914u;
    SET_GPR_U32(ctx, 31, 0x1E791Cu);
    ctx->pc = 0x1E7918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7914u;
    // 0x1e7918: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0780u, 0x1E7914u, 0x1E791Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E791Cu;
label_1e791c:
    // 0x1e791c: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E791Cu;
    {
        const bool branch_taken_0x1e791c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e791c) {
            ctx->pc = 0x1E7920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E791Cu;
            // 0x1e7920: 0xae11005c  sw          $s1, 0x5C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E7924u;
            goto label_1e7924;
        }
    }
    ctx->pc = 0x1E7924u;
label_1e7924:
    // 0x1e7924: 0xac510024  sw          $s1, 0x24($v0)
    ctx->pc = 0x1e7924u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 17));
    // 0x1e7928: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e7928u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e792c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e792cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e7930: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e7930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7934: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7934u;
        // 0x1e7938: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E793Cu;
    // 0x1e793c: 0x0  nop
    ctx->pc = 0x1e793cu;
    // NOP
    // 0x1e7940: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7940u;
        // 0x1e7944: 0x8c82005c  lw          $v0, 0x5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7948u;
}
