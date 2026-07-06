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

// Function: sub_001B6980
// Address: 0x1b6980 - 0x1b69d8
void sub_001B6980_0x1b6980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6980_0x1b6980");
#endif

    switch (ctx->pc) {
        case 0x1b699cu: goto label_1b699c;
        case 0x1b69a4u: goto label_1b69a4;
        default: break;
    }

    ctx->pc = 0x1b6980u;

    // 0x1b6980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b6980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b6984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b6988: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b6988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b698c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B698Cu;
    {
        const bool branch_taken_0x1b698c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B698Cu;
        // 0x1b6990: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b698c) {
            ctx->pc = 0x1B69C8u;
            goto label_1b69c8;
        }
    }
    ctx->pc = 0x1B6994u;
    // 0x1b6994: 0xc06dbcc  jal         func_1B6F30
    ctx->pc = 0x1B6994u;
    SET_GPR_U32(ctx, 31, 0x1B699Cu);
    ctx->pc = 0x1B6F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F30u, 0x1B6994u, 0x1B699Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B699Cu;
label_1b699c:
    // 0x1b699c: 0xc06daf6  jal         func_1B6BD8
    ctx->pc = 0x1B699Cu;
    SET_GPR_U32(ctx, 31, 0x1B69A4u);
    ctx->pc = 0x1B69A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B699Cu;
    // 0x1b69a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BD8u, 0x1B699Cu, 0x1B69A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B69A4u;
label_1b69a4:
    // 0x1b69a4: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1b69a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b69a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b69a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b69ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b69acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b69b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b69b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b69b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b69b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b69b8: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x1b69b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1b69bc: 0x8049cb6  j           func_1272D8
    ctx->pc = 0x1B69BCu;
    ctx->pc = 0x1B69C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B69BCu;
    // 0x1b69c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    sub_001272D8_0x1272d8(rdram, ctx, runtime); return;
    ctx->pc = 0x1B69C4u;
    // 0x1b69c4: 0x0  nop
    ctx->pc = 0x1b69c4u;
    // NOP
label_1b69c8:
    // 0x1b69c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b69c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b69cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b69ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b69d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B69D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B69D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B69D0u;
        // 0x1b69d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B69D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B69D8u;
}
