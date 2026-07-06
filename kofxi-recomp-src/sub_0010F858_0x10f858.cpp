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

// Function: sub_0010F858
// Address: 0x10f858 - 0x10f890
void sub_0010F858_0x10f858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F858_0x10f858");
#endif

    switch (ctx->pc) {
        case 0x10f884u: goto label_10f884;
        default: break;
    }

    ctx->pc = 0x10f858u;

    // 0x10f858: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10f858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10f85c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x10f85cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f860: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x10f860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10f864: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x10f864u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f868: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x10f868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f86c: 0x3c040011  lui         $a0, 0x11
    ctx->pc = 0x10f86cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17 << 16));
    // 0x10f870: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10f870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10f874: 0x2484f760  addiu       $a0, $a0, -0x8A0
    ctx->pc = 0x10f874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965088));
    // 0x10f878: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x10f878u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f87c: 0xc043a92  jal         func_10EA48
    ctx->pc = 0x10F87Cu;
    SET_GPR_U32(ctx, 31, 0x10F884u);
    ctx->pc = 0x10F880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F87Cu;
    // 0x10f880: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EA48u, 0x10F87Cu, 0x10F884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F884u;
label_10f884:
    // 0x10f884: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10f884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f888: 0x3e00008  jr          $ra
    ctx->pc = 0x10F888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F888u;
        // 0x10f88c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F890u;
}
