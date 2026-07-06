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

// Function: sub_002FCFE0
// Address: 0x2fcfe0 - 0x2fd030
void sub_002FCFE0_0x2fcfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FCFE0_0x2fcfe0");
#endif

    switch (ctx->pc) {
        case 0x2fd000u: goto label_2fd000;
        case 0x2fd008u: goto label_2fd008;
        default: break;
    }

    ctx->pc = 0x2fcfe0u;

    // 0x2fcfe0: 0x80bf3d4  j           func_2FCF50
    ctx->pc = 0x2FCFE0u;
    ctx->pc = 0x2FCFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCFE0u;
    // 0x2fcfe4: 0x2405fde4  addiu       $a1, $zero, -0x21C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966756));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2FCFE0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2FCFE8u;
    // 0x2fcfe8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fcfe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fcfec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fcfecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fcff0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2fcff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2fcff4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fcff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2fcff8: 0xc0bf2bc  jal         func_2FCAF0
    ctx->pc = 0x2FCFF8u;
    SET_GPR_U32(ctx, 31, 0x2FD000u);
    ctx->pc = 0x2FCFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCFF8u;
    // 0x2fcffc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCAF0u, 0x2FCFF8u, 0x2FD000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD000u;
label_2fd000:
    // 0x2fd000: 0xc0bf2ea  jal         func_2FCBA8
    ctx->pc = 0x2FD000u;
    SET_GPR_U32(ctx, 31, 0x2FD008u);
    ctx->pc = 0x2FD004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD000u;
    // 0x2fd004: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCBA8u, 0x2FD000u, 0x2FD008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD008u;
label_2fd008:
    // 0x2fd008: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x2fd008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2fd00c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fd00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd010: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2fd010u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2fd014: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fd014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fd018: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fd018u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fd01c: 0x2442fde4  addiu       $v0, $v0, -0x21C
    ctx->pc = 0x2fd01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966756));
    // 0x2fd020: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x2fd020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2fd024: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2fd024u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fd028: 0x80bf3d4  j           func_2FCF50
    ctx->pc = 0x2FD028u;
    ctx->pc = 0x2FD02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD028u;
    // 0x2fd02c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF50u, 0x2FD028u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2FD030u;
}
