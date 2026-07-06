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

// Function: sub_00169FD0
// Address: 0x169fd0 - 0x16a000
void sub_00169FD0_0x169fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169FD0_0x169fd0");
#endif

    switch (ctx->pc) {
        case 0x169fecu: goto label_169fec;
        default: break;
    }

    ctx->pc = 0x169fd0u;

    // 0x169fd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x169fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x169fd4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x169fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x169fd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169fdc: 0x24a52b60  addiu       $a1, $a1, 0x2B60
    ctx->pc = 0x169fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11104));
    // 0x169fe0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x169fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x169fe4: 0xc05a138  jal         func_1684E0
    ctx->pc = 0x169FE4u;
    SET_GPR_U32(ctx, 31, 0x169FECu);
    ctx->pc = 0x169FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169FE4u;
    // 0x169fe8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1684E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1684E0u, 0x169FE4u, 0x169FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169FECu;
label_169fec:
    // 0x169fec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169ff0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x169ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x169ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x169FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169FF4u;
        // 0x169ff8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169FFCu;
    // 0x169ffc: 0x0  nop
    ctx->pc = 0x169ffcu;
    // NOP
    if (ctx->pc == 0x169ffcu) { ctx->pc = 0x16a000u; }
}
