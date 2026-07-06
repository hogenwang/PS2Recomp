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

// Function: sub_00122918
// Address: 0x122918 - 0x122970
void sub_00122918_0x122918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122918_0x122918");
#endif

    switch (ctx->pc) {
        case 0x122938u: goto label_122938;
        case 0x122948u: goto label_122948;
        case 0x122958u: goto label_122958;
        case 0x122960u: goto label_122960;
        default: break;
    }

    ctx->pc = 0x122918u;

    // 0x122918: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x122918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x12291c: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x12291cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x122920: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x122920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x122924: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x122924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x122928: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x122928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12292c: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x12292cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x122930: 0xc048998  jal         func_122660
    ctx->pc = 0x122930u;
    SET_GPR_U32(ctx, 31, 0x122938u);
    ctx->pc = 0x122934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122930u;
    // 0x122934: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122660u, 0x122930u, 0x122938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122938u;
label_122938:
    // 0x122938: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x122938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12293c: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x12293cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x122940: 0xc048998  jal         func_122660
    ctx->pc = 0x122940u;
    SET_GPR_U32(ctx, 31, 0x122948u);
    ctx->pc = 0x122944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122940u;
    // 0x122944: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122660u, 0x122940u, 0x122948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122948u;
label_122948:
    // 0x122948: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x122948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12294c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x12294cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x122950: 0xc0489bc  jal         func_1226F0
    ctx->pc = 0x122950u;
    SET_GPR_U32(ctx, 31, 0x122958u);
    ctx->pc = 0x122954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122950u;
    // 0x122954: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1226F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1226F0u, 0x122950u, 0x122958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122958u;
label_122958:
    // 0x122958: 0xc048966  jal         func_122598
    ctx->pc = 0x122958u;
    SET_GPR_U32(ctx, 31, 0x122960u);
    ctx->pc = 0x12295Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122958u;
    // 0x12295c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122598u, 0x122958u, 0x122960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122960u;
label_122960:
    // 0x122960: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x122960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x122964: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x122964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122968: 0x3e00008  jr          $ra
    ctx->pc = 0x122968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12296Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122968u;
        // 0x12296c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122970u;
}
