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

// Function: sub_0010E060
// Address: 0x10e060 - 0x10e098
void sub_0010E060_0x10e060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E060_0x10e060");
#endif

    switch (ctx->pc) {
        case 0x10e088u: goto label_10e088;
        default: break;
    }

    ctx->pc = 0x10e060u;

    // 0x10e060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10e060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10e064: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x10e064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e068: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x10e068u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x10e06c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x10e06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10e070: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10e070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10e074: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10e074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e078: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x10e078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x10e07c: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x10e07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x10e080: 0xc043424  jal         func_10D090
    ctx->pc = 0x10E080u;
    SET_GPR_U32(ctx, 31, 0x10E088u);
    ctx->pc = 0x10E084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E080u;
    // 0x10e084: 0xafa60008  sw          $a2, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D090u, 0x10E080u, 0x10E088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E088u;
label_10e088:
    // 0x10e088: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10e088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e08c: 0x3e00008  jr          $ra
    ctx->pc = 0x10E08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E08Cu;
        // 0x10e090: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E08Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E094u;
    // 0x10e094: 0x0  nop
    ctx->pc = 0x10e094u;
    // NOP
}
