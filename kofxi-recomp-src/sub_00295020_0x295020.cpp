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

// Function: sub_00295020
// Address: 0x295020 - 0x295080
void sub_00295020_0x295020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295020_0x295020");
#endif

    switch (ctx->pc) {
        case 0x295034u: goto label_295034;
        case 0x295058u: goto label_295058;
        case 0x29506cu: goto label_29506c;
        default: break;
    }

    ctx->pc = 0x295020u;

    // 0x295020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x295020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x295024: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x295024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x295028: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x295028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29502c: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x29502Cu;
    SET_GPR_U32(ctx, 31, 0x295034u);
    ctx->pc = 0x295030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29502Cu;
    // 0x295030: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x29502Cu, 0x295034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295034u;
label_295034:
    // 0x295034: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x295034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295038: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x295038u;
    {
        const bool branch_taken_0x295038 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x29503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295038u;
        // 0x29503c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295038) {
            ctx->pc = 0x295060u;
            goto label_295060;
        }
    }
    ctx->pc = 0x295040u;
    // 0x295040: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x295040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x295044: 0x24050072  addiu       $a1, $zero, 0x72
    ctx->pc = 0x295044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x295048: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x295048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x29504c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29504cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295050: 0xc0a5648  jal         func_295920
    ctx->pc = 0x295050u;
    SET_GPR_U32(ctx, 31, 0x295058u);
    ctx->pc = 0x295054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295050u;
    // 0x295054: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x295050u, 0x295058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295058u;
label_295058:
    // 0x295058: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x295058u;
    {
        const bool branch_taken_0x295058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295058u;
        // 0x29505c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295058) {
            ctx->pc = 0x295070u;
            goto label_295070;
        }
    }
    ctx->pc = 0x295060u;
label_295060:
    // 0x295060: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x295060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295064: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x295064u;
    SET_GPR_U32(ctx, 31, 0x29506Cu);
    ctx->pc = 0x295068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295064u;
    // 0x295068: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x295064u, 0x29506Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29506Cu;
label_29506c:
    // 0x29506c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29506cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_295070:
    // 0x295070: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x295070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x295074: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x295074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295078: 0x3e00008  jr          $ra
    ctx->pc = 0x295078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295078u;
        // 0x29507c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295080u;
}
