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

// Function: sub_001A99A0
// Address: 0x1a99a0 - 0x1a99d0
void sub_001A99A0_0x1a99a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A99A0_0x1a99a0");
#endif

    switch (ctx->pc) {
        case 0x1a99a0u: goto label_1a99a0;
        case 0x1a99a4u: goto label_1a99a4;
        case 0x1a99a8u: goto label_1a99a8;
        case 0x1a99acu: goto label_1a99ac;
        case 0x1a99b0u: goto label_1a99b0;
        case 0x1a99b4u: goto label_1a99b4;
        case 0x1a99b8u: goto label_1a99b8;
        case 0x1a99bcu: goto label_1a99bc;
        case 0x1a99c0u: goto label_1a99c0;
        case 0x1a99c4u: goto label_1a99c4;
        case 0x1a99c8u: goto label_1a99c8;
        case 0x1a99ccu: goto label_1a99cc;
        default: break;
    }

    ctx->pc = 0x1a99a0u;

label_1a99a0:
    // 0x1a99a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a99a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a99a4:
    // 0x1a99a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a99a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a99a8:
    // 0x1a99a8: 0x8c8200b4  lw          $v0, 0xB4($a0)
    ctx->pc = 0x1a99a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
label_1a99ac:
    // 0x1a99ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a99b0:
    if (ctx->pc == 0x1A99B0u) {
        ctx->pc = 0x1A99B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A99ACu;
        // 0x1a99b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A99B4u;
        goto label_1a99b4;
    }
    ctx->pc = 0x1A99ACu;
    {
        const bool branch_taken_0x1a99ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A99B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A99ACu;
        // 0x1a99b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a99ac) {
            ctx->pc = 0x1A99C4u;
            goto label_1a99c4;
        }
    }
    ctx->pc = 0x1A99B4u;
label_1a99b4:
    // 0x1a99b4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a99b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a99b8:
    // 0x1a99b8: 0x8c43e470  lw          $v1, -0x1B90($v0)
    ctx->pc = 0x1a99b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960240)));
label_1a99bc:
    // 0x1a99bc: 0x60f809  jalr        $v1
label_1a99c0:
    if (ctx->pc == 0x1A99C0u) {
        ctx->pc = 0x1A99C4u;
        goto label_1a99c4;
    }
    ctx->pc = 0x1A99BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A99C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A99BCu, 0x1A99C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A99C4u;
label_1a99c4:
    // 0x1a99c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a99c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a99c8:
    // 0x1a99c8: 0x3e00008  jr          $ra
label_1a99cc:
    if (ctx->pc == 0x1A99CCu) {
        ctx->pc = 0x1A99CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A99C8u;
        // 0x1a99cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A99D0u;
        goto label_fallthrough_0x1a99c8;
    }
    ctx->pc = 0x1A99C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A99CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A99C8u;
        // 0x1a99cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A99C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a99c8:
    ctx->pc = 0x1A99D0u;
}
