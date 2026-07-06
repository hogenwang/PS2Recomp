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

// Function: sub_00127898
// Address: 0x127898 - 0x1278d0
void sub_00127898_0x127898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127898_0x127898");
#endif

    switch (ctx->pc) {
        case 0x1278b0u: goto label_1278b0;
        default: break;
    }

    ctx->pc = 0x127898u;

    // 0x127898: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x127898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12789c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12789cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1278a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1278a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1278a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1278a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1278a8: 0xc049d12  jal         func_127448
    ctx->pc = 0x1278A8u;
    SET_GPR_U32(ctx, 31, 0x1278B0u);
    ctx->pc = 0x1278ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1278A8u;
    // 0x1278ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127448u, 0x1278A8u, 0x1278B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1278B0u;
label_1278b0:
    // 0x1278b0: 0xac500014  sw          $s0, 0x14($v0)
    ctx->pc = 0x1278b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 16));
    // 0x1278b4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1278b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1278b8: 0xac4f0010  sw          $t7, 0x10($v0)
    ctx->pc = 0x1278b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 15));
    // 0x1278bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1278bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1278c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1278c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1278c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1278C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1278C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1278C4u;
        // 0x1278c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1278C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1278CCu;
    // 0x1278cc: 0x0  nop
    ctx->pc = 0x1278ccu;
    // NOP
    if (ctx->pc == 0x1278ccu) { ctx->pc = 0x1278d0u; }
}
