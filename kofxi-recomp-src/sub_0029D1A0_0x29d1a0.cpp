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

// Function: sub_0029D1A0
// Address: 0x29d1a0 - 0x29d1d8
void sub_0029D1A0_0x29d1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D1A0_0x29d1a0");
#endif

    switch (ctx->pc) {
        case 0x29d1ccu: goto label_29d1cc;
        default: break;
    }

    ctx->pc = 0x29d1a0u;

    // 0x29d1a0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x29d1a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d1a4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x29d1a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d1a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29d1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29d1ac: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x29d1acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d1b0: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x29d1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
    // 0x29d1b4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x29d1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x29d1b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29d1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29d1bc: 0x24840cd0  addiu       $a0, $a0, 0xCD0
    ctx->pc = 0x29d1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3280));
    // 0x29d1c0: 0x24a5c588  addiu       $a1, $a1, -0x3A78
    ctx->pc = 0x29d1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952328));
    // 0x29d1c4: 0xc0a74b2  jal         func_29D2C8
    ctx->pc = 0x29D1C4u;
    SET_GPR_U32(ctx, 31, 0x29D1CCu);
    ctx->pc = 0x29D1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D1C4u;
    // 0x29d1c8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D2C8u, 0x29D1C4u, 0x29D1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D1CCu;
label_29d1cc:
    // 0x29d1cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29d1ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x29D1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D1D0u;
        // 0x29d1d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D1D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D1D8u;
}
