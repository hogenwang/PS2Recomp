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

// Function: sub_001EBE18
// Address: 0x1ebe18 - 0x1ebe78
void sub_001EBE18_0x1ebe18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EBE18_0x1ebe18");
#endif

    switch (ctx->pc) {
        case 0x1ebe34u: goto label_1ebe34;
        default: break;
    }

    ctx->pc = 0x1ebe18u;

    // 0x1ebe18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ebe18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ebe1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ebe1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebe20: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1ebe20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1ebe24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ebe24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ebe28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ebe28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ebe2c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1EBE2Cu;
    SET_GPR_U32(ctx, 31, 0x1EBE34u);
    ctx->pc = 0x1EBE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBE2Cu;
    // 0x1ebe30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1EBE2Cu, 0x1EBE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBE34u;
label_1ebe34:
    // 0x1ebe34: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1ebe34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ebe38: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1ebe38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1ebe3c: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1ebe3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ebe40: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1ebe40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1ebe44: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1ebe44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1ebe48: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1ebe48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1ebe4c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1ebe4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1ebe50: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1ebe50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1ebe54: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1ebe54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1ebe58: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1ebe58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1ebe5c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1ebe5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1ebe60: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1ebe60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1ebe64: 0xa2000028  sb          $zero, 0x28($s0)
    ctx->pc = 0x1ebe64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ebe68: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ebe68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ebe6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ebe6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ebe70: 0x3e00008  jr          $ra
    ctx->pc = 0x1EBE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE70u;
        // 0x1ebe74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBE70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EBE78u;
}
