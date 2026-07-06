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

// Function: sub_001C69A0
// Address: 0x1c69a0 - 0x1c6a10
void sub_001C69A0_0x1c69a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C69A0_0x1c69a0");
#endif

    switch (ctx->pc) {
        case 0x1c69b8u: goto label_1c69b8;
        default: break;
    }

    ctx->pc = 0x1c69a0u;

    // 0x1c69a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c69a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c69a4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C69A4u;
    {
        const bool branch_taken_0x1c69a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C69A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C69A4u;
        // 0x1c69a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c69a4) {
            ctx->pc = 0x1C69C0u;
            goto label_1c69c0;
        }
    }
    ctx->pc = 0x1C69ACu;
    // 0x1c69ac: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c69acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c69b0: 0xc071ac8  jal         func_1C6B20
    ctx->pc = 0x1C69B0u;
    SET_GPR_U32(ctx, 31, 0x1C69B8u);
    ctx->pc = 0x1C69B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C69B0u;
    // 0x1c69b4: 0x2484a990  addiu       $a0, $a0, -0x5670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6B20u, 0x1C69B0u, 0x1C69B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C69B8u;
label_1c69b8:
    // 0x1c69b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C69B8u;
    {
        const bool branch_taken_0x1c69b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C69BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C69B8u;
        // 0x1c69bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c69b8) {
            ctx->pc = 0x1C69C4u;
            goto label_1c69c4;
        }
    }
    ctx->pc = 0x1C69C0u;
label_1c69c0:
    // 0x1c69c0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1c69c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1c69c4:
    // 0x1c69c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c69c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c69c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C69C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C69CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C69C8u;
        // 0x1c69cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C69C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C69D0u;
    // 0x1c69d0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1c69d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c69d4: 0x14e00008  bnez        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C69D4u;
    {
        const bool branch_taken_0x1c69d4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C69D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C69D4u;
        // 0x1c69d8: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c69d4) {
            ctx->pc = 0x1C69F8u;
            goto label_1c69f8;
        }
    }
    ctx->pc = 0x1C69DCu;
    // 0x1c69dc: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c69dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c69e0: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1c69e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1c69e4: 0xac40f098  sw          $zero, -0xF68($v0)
    ctx->pc = 0x1c69e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963352), GPR_U32(ctx, 0));
    // 0x1c69e8: 0xac60f09c  sw          $zero, -0xF64($v1)
    ctx->pc = 0x1c69e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963356), GPR_U32(ctx, 0));
    // 0x1c69ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1C69ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C69F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C69ECu;
        // 0x1c69f0: 0xac80f0a0  sw          $zero, -0xF60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294963360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C69ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C69F4u;
    // 0x1c69f4: 0x0  nop
    ctx->pc = 0x1c69f4u;
    // NOP
label_1c69f8:
    // 0x1c69f8: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c69f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c69fc: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1c69fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1c6a00: 0xac47f098  sw          $a3, -0xF68($v0)
    ctx->pc = 0x1c6a00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963352), GPR_U32(ctx, 7));
    // 0x1c6a04: 0xac65f09c  sw          $a1, -0xF64($v1)
    ctx->pc = 0x1c6a04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963356), GPR_U32(ctx, 5));
    // 0x1c6a08: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6A08u;
        // 0x1c6a0c: 0xac86f0a0  sw          $a2, -0xF60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294963360), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6A10u;
}
