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

// Function: sub_001C64B0
// Address: 0x1c64b0 - 0x1c64e0
void sub_001C64B0_0x1c64b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C64B0_0x1c64b0");
#endif

    switch (ctx->pc) {
        case 0x1c64c8u: goto label_1c64c8;
        default: break;
    }

    ctx->pc = 0x1c64b0u;

    // 0x1c64b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c64b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c64b4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C64B4u;
    {
        const bool branch_taken_0x1c64b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C64B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C64B4u;
        // 0x1c64b8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c64b4) {
            ctx->pc = 0x1C64D0u;
            goto label_1c64d0;
        }
    }
    ctx->pc = 0x1C64BCu;
    // 0x1c64bc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c64bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c64c0: 0xc071ac8  jal         func_1C6B20
    ctx->pc = 0x1C64C0u;
    SET_GPR_U32(ctx, 31, 0x1C64C8u);
    ctx->pc = 0x1C64C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C64C0u;
    // 0x1c64c4: 0x2484a758  addiu       $a0, $a0, -0x58A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6B20u, 0x1C64C0u, 0x1C64C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C64C8u;
label_1c64c8:
    // 0x1c64c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C64C8u;
    {
        const bool branch_taken_0x1c64c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C64CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C64C8u;
        // 0x1c64cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c64c8) {
            ctx->pc = 0x1C64D4u;
            goto label_1c64d4;
        }
    }
    ctx->pc = 0x1C64D0u;
label_1c64d0:
    // 0x1c64d0: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x1c64d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_1c64d4:
    // 0x1c64d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c64d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c64d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C64D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C64DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C64D8u;
        // 0x1c64dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C64D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C64E0u;
}
