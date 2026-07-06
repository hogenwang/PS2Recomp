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

// Function: sub_00282FF8
// Address: 0x282ff8 - 0x283050
void sub_00282FF8_0x282ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282FF8_0x282ff8");
#endif

    switch (ctx->pc) {
        case 0x283008u: goto label_283008;
        case 0x283040u: goto label_283040;
        default: break;
    }

    ctx->pc = 0x282ff8u;

    // 0x282ff8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x282ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x282ffc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x282ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x283000: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x283000u;
    SET_GPR_U32(ctx, 31, 0x283008u);
    ctx->pc = 0x283004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283000u;
    // 0x283004: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x283000u, 0x283008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283008u;
label_283008:
    // 0x283008: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x283008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28300c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28300Cu;
    {
        const bool branch_taken_0x28300c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x283010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28300Cu;
        // 0x283010: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28300c) {
            ctx->pc = 0x283020u;
            goto label_283020;
        }
    }
    ctx->pc = 0x283014u;
    // 0x283014: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x283014u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x283018: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x283018u;
    {
        const bool branch_taken_0x283018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283018u;
        // 0x28301c: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283018) {
            ctx->pc = 0x283044u;
            goto label_283044;
        }
    }
    ctx->pc = 0x283020u;
label_283020:
    // 0x283020: 0x240200d6  addiu       $v0, $zero, 0xD6
    ctx->pc = 0x283020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
    // 0x283024: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x283024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x283028: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x283028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x28302c: 0x24050077  addiu       $a1, $zero, 0x77
    ctx->pc = 0x28302cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x283030: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x283030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x283034: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x283034u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283038: 0xc0a5648  jal         func_295920
    ctx->pc = 0x283038u;
    SET_GPR_U32(ctx, 31, 0x283040u);
    ctx->pc = 0x28303Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283038u;
    // 0x28303c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x283038u, 0x283040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283040u;
label_283040:
    // 0x283040: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x283040u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_283044:
    // 0x283044: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x283044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x283048: 0x3e00008  jr          $ra
    ctx->pc = 0x283048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283048u;
        // 0x28304c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283050u;
}
