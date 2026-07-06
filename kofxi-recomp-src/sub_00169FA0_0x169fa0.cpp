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

// Function: sub_00169FA0
// Address: 0x169fa0 - 0x169fd0
void sub_00169FA0_0x169fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169FA0_0x169fa0");
#endif

    switch (ctx->pc) {
        case 0x169fbcu: goto label_169fbc;
        default: break;
    }

    ctx->pc = 0x169fa0u;

    // 0x169fa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x169fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x169fa4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x169fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x169fa8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x169fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169fac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169fb0: 0x24a52b40  addiu       $a1, $a1, 0x2B40
    ctx->pc = 0x169fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11072));
    // 0x169fb4: 0xc05a138  jal         func_1684E0
    ctx->pc = 0x169FB4u;
    SET_GPR_U32(ctx, 31, 0x169FBCu);
    ctx->pc = 0x169FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169FB4u;
    // 0x169fb8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1684E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1684E0u, 0x169FB4u, 0x169FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169FBCu;
label_169fbc:
    // 0x169fbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169fc0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x169fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x169fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x169FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169FC4u;
        // 0x169fc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169FCCu;
    // 0x169fcc: 0x0  nop
    ctx->pc = 0x169fccu;
    // NOP
    if (ctx->pc == 0x169fccu) { ctx->pc = 0x169fd0u; }
}
