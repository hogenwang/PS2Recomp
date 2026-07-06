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

// Function: sub_00122970
// Address: 0x122970 - 0x1229d8
void sub_00122970_0x122970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122970_0x122970");
#endif

    switch (ctx->pc) {
        case 0x122990u: goto label_122990;
        case 0x1229a0u: goto label_1229a0;
        case 0x1229bcu: goto label_1229bc;
        case 0x1229c4u: goto label_1229c4;
        default: break;
    }

    ctx->pc = 0x122970u;

    // 0x122970: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x122970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x122974: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x122974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x122978: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x122978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x12297c: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x12297cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x122980: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x122980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x122984: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x122984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x122988: 0xc048998  jal         func_122660
    ctx->pc = 0x122988u;
    SET_GPR_U32(ctx, 31, 0x122990u);
    ctx->pc = 0x12298Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122988u;
    // 0x12298c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122660u, 0x122988u, 0x122990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122990u;
label_122990:
    // 0x122990: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x122990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x122994: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x122994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x122998: 0xc048998  jal         func_122660
    ctx->pc = 0x122998u;
    SET_GPR_U32(ctx, 31, 0x1229A0u);
    ctx->pc = 0x12299Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122998u;
    // 0x12299c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122660u, 0x122998u, 0x1229A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1229A0u;
label_1229a0:
    // 0x1229a0: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x1229a0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1229a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1229a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1229a8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1229a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1229ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1229acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1229b0: 0x39ef0001  xori        $t7, $t7, 0x1
    ctx->pc = 0x1229b0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ (uint64_t)(uint16_t)1);
    // 0x1229b4: 0xc0489bc  jal         func_1226F0
    ctx->pc = 0x1229B4u;
    SET_GPR_U32(ctx, 31, 0x1229BCu);
    ctx->pc = 0x1229B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1229B4u;
    // 0x1229b8: 0xafaf0024  sw          $t7, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1226F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1226F0u, 0x1229B4u, 0x1229BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1229BCu;
label_1229bc:
    // 0x1229bc: 0xc048966  jal         func_122598
    ctx->pc = 0x1229BCu;
    SET_GPR_U32(ctx, 31, 0x1229C4u);
    ctx->pc = 0x1229C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1229BCu;
    // 0x1229c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122598u, 0x1229BCu, 0x1229C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1229C4u;
label_1229c4:
    // 0x1229c4: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1229c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1229c8: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x1229c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1229cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1229CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1229D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1229CCu;
        // 0x1229d0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1229CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1229D4u;
    // 0x1229d4: 0x0  nop
    ctx->pc = 0x1229d4u;
    // NOP
}
