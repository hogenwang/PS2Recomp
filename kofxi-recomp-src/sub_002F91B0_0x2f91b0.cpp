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

// Function: sub_002F91B0
// Address: 0x2f91b0 - 0x2f91e8
void sub_002F91B0_0x2f91b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F91B0_0x2f91b0");
#endif

    switch (ctx->pc) {
        case 0x2f91b0u: goto label_2f91b0;
        case 0x2f91b4u: goto label_2f91b4;
        case 0x2f91b8u: goto label_2f91b8;
        case 0x2f91bcu: goto label_2f91bc;
        case 0x2f91c0u: goto label_2f91c0;
        case 0x2f91c4u: goto label_2f91c4;
        case 0x2f91c8u: goto label_2f91c8;
        case 0x2f91ccu: goto label_2f91cc;
        case 0x2f91d0u: goto label_2f91d0;
        case 0x2f91d4u: goto label_2f91d4;
        case 0x2f91d8u: goto label_2f91d8;
        case 0x2f91dcu: goto label_2f91dc;
        case 0x2f91e0u: goto label_2f91e0;
        case 0x2f91e4u: goto label_2f91e4;
        default: break;
    }

    ctx->pc = 0x2f91b0u;

label_2f91b0:
    // 0x2f91b0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2f91b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_2f91b4:
    // 0x2f91b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f91b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2f91b8:
    // 0x2f91b8: 0x8c420660  lw          $v0, 0x660($v0)
    ctx->pc = 0x2f91b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1632)));
label_2f91bc:
    // 0x2f91bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2f91c0:
    if (ctx->pc == 0x2F91C0u) {
        ctx->pc = 0x2F91C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F91BCu;
        // 0x2f91c0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F91C4u;
        goto label_2f91c4;
    }
    ctx->pc = 0x2F91BCu;
    {
        const bool branch_taken_0x2f91bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F91C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F91BCu;
        // 0x2f91c0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f91bc) {
            ctx->pc = 0x2F91D4u;
            goto label_2f91d4;
        }
    }
    ctx->pc = 0x2F91C4u;
label_2f91c4:
    // 0x2f91c4: 0x40f809  jalr        $v0
label_2f91c8:
    if (ctx->pc == 0x2F91C8u) {
        ctx->pc = 0x2F91CCu;
        goto label_2f91cc;
    }
    ctx->pc = 0x2F91C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F91CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F91C4u, 0x2F91CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F91CCu;
label_2f91cc:
    // 0x2f91cc: 0x10000004  b           . + 4 + (0x4 << 2)
label_2f91d0:
    if (ctx->pc == 0x2F91D0u) {
        ctx->pc = 0x2F91D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F91CCu;
        // 0x2f91d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F91D4u;
        goto label_2f91d4;
    }
    ctx->pc = 0x2F91CCu;
    {
        const bool branch_taken_0x2f91cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F91D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F91CCu;
        // 0x2f91d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f91cc) {
            ctx->pc = 0x2F91E0u;
            goto label_2f91e0;
        }
    }
    ctx->pc = 0x2F91D4u;
label_2f91d4:
    // 0x2f91d4: 0xc04a3ec  jal         func_128FB0
label_2f91d8:
    if (ctx->pc == 0x2F91D8u) {
        ctx->pc = 0x2F91DCu;
        goto label_2f91dc;
    }
    ctx->pc = 0x2F91D4u;
    SET_GPR_U32(ctx, 31, 0x2F91DCu);
    ctx->pc = 0x128FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128FB0u, 0x2F91D4u, 0x2F91DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F91DCu;
label_2f91dc:
    // 0x2f91dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f91dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f91e0:
    // 0x2f91e0: 0x3e00008  jr          $ra
label_2f91e4:
    if (ctx->pc == 0x2F91E4u) {
        ctx->pc = 0x2F91E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F91E0u;
        // 0x2f91e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F91E8u;
        goto label_fallthrough_0x2f91e0;
    }
    ctx->pc = 0x2F91E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F91E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F91E0u;
        // 0x2f91e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F91E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f91e0:
    ctx->pc = 0x2F91E8u;
}
