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

// Function: sub_002970B0
// Address: 0x2970b0 - 0x2970f8
void sub_002970B0_0x2970b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002970B0_0x2970b0");
#endif

    switch (ctx->pc) {
        case 0x2970c0u: goto label_2970c0;
        case 0x2970e8u: goto label_2970e8;
        default: break;
    }

    ctx->pc = 0x2970b0u;

    // 0x2970b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2970b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2970b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2970b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2970b8: 0xc0a6872  jal         func_29A1C8
    ctx->pc = 0x2970B8u;
    SET_GPR_U32(ctx, 31, 0x2970C0u);
    ctx->pc = 0x2970BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2970B8u;
    // 0x2970bc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A1C8u, 0x2970B8u, 0x2970C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2970C0u;
label_2970c0:
    // 0x2970c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2970c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2970c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2970c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2970c8: 0x80a6872  j           func_29A1C8
    ctx->pc = 0x2970C8u;
    ctx->pc = 0x2970CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2970C8u;
    // 0x2970cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A1C8u;
    sub_0029A1C8_0x29a1c8(rdram, ctx, runtime); return;
    ctx->pc = 0x2970D0u;
    // 0x2970d0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2970d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2970d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2970d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2970d8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2970d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2970dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2970dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2970e0: 0xc0a67f0  jal         func_299FC0
    ctx->pc = 0x2970E0u;
    SET_GPR_U32(ctx, 31, 0x2970E8u);
    ctx->pc = 0x2970E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2970E0u;
    // 0x2970e4: 0x34058002  ori         $a1, $zero, 0x8002 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    ctx->in_delay_slot = false;
    ctx->pc = 0x299FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299FC0u, 0x2970E0u, 0x2970E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2970E8u;
label_2970e8:
    // 0x2970e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2970e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2970ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2970ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2970F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2970ECu;
        // 0x2970f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2970ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2970F4u;
    // 0x2970f4: 0x0  nop
    ctx->pc = 0x2970f4u;
    // NOP
    if (ctx->pc == 0x2970f4u) { ctx->pc = 0x2970f8u; }
}
