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

// Function: sub_001A45A0
// Address: 0x1a45a0 - 0x1a4610
void sub_001A45A0_0x1a45a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A45A0_0x1a45a0");
#endif

    switch (ctx->pc) {
        case 0x1a45b0u: goto label_1a45b0;
        case 0x1a45d8u: goto label_1a45d8;
        case 0x1a4600u: goto label_1a4600;
        default: break;
    }

    ctx->pc = 0x1a45a0u;

    // 0x1a45a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a45a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a45a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a45a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a45a8: 0xc082918  jal         func_20A460
    ctx->pc = 0x1A45A8u;
    SET_GPR_U32(ctx, 31, 0x1A45B0u);
    ctx->pc = 0x20A460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A460u, 0x1A45A8u, 0x1A45B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A45B0u;
label_1a45b0:
    // 0x1a45b0: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x1a45b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x1a45b4: 0x24053480  addiu       $a1, $zero, 0x3480
    ctx->pc = 0x1a45b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13440));
    // 0x1a45b8: 0x2484a210  addiu       $a0, $a0, -0x5DF0
    ctx->pc = 0x1a45b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943248));
    // 0x1a45bc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1a45bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a45c0: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x1a45c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1a45c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a45c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a45c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a45c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a45cc: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x1a45ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1a45d0: 0xc040532  jal         func_1014C8
    ctx->pc = 0x1A45D0u;
    SET_GPR_U32(ctx, 31, 0x1A45D8u);
    ctx->pc = 0x1A45D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A45D0u;
    // 0x1a45d4: 0x240b0200  addiu       $t3, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x1A45D0u, 0x1A45D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A45D8u;
label_1a45d8:
    // 0x1a45d8: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x1a45d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x1a45dc: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x1a45dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a45e0: 0x2484a090  addiu       $a0, $a0, -0x5F70
    ctx->pc = 0x1a45e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942864));
    // 0x1a45e4: 0x24053e80  addiu       $a1, $zero, 0x3E80
    ctx->pc = 0x1a45e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16000));
    // 0x1a45e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a45e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a45ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a45ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a45f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a45f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a45f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a45f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a45f8: 0xc040532  jal         func_1014C8
    ctx->pc = 0x1A45F8u;
    SET_GPR_U32(ctx, 31, 0x1A4600u);
    ctx->pc = 0x1A45FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A45F8u;
    // 0x1a45fc: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x1A45F8u, 0x1A4600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4600u;
label_1a4600:
    // 0x1a4600: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4604: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4604u;
        // 0x1a4608: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A460Cu;
    // 0x1a460c: 0x0  nop
    ctx->pc = 0x1a460cu;
    // NOP
}
