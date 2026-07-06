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

// Function: kofxiDispatchFrameCallback
// Address: 0x1b45c8 - 0x1b45f8
void kofxiDispatchFrameCallback_0x1b45c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiDispatchFrameCallback_0x1b45c8");
#endif

    switch (ctx->pc) {
        case 0x1b45c8u: goto label_1b45c8;
        case 0x1b45ccu: goto label_1b45cc;
        case 0x1b45d0u: goto label_1b45d0;
        case 0x1b45d4u: goto label_1b45d4;
        case 0x1b45d8u: goto label_1b45d8;
        case 0x1b45dcu: goto label_1b45dc;
        case 0x1b45e0u: goto label_1b45e0;
        case 0x1b45e4u: goto label_1b45e4;
        case 0x1b45e8u: goto label_1b45e8;
        case 0x1b45ecu: goto label_1b45ec;
        case 0x1b45f0u: goto label_1b45f0;
        case 0x1b45f4u: goto label_1b45f4;
        default: break;
    }

    ctx->pc = 0x1b45c8u;

label_1b45c8:
    // 0x1b45c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b45c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b45cc:
    // 0x1b45cc: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1b45ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
label_1b45d0:
    // 0x1b45d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b45d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b45d4:
    // 0x1b45d4: 0x24425320  addiu       $v0, $v0, 0x5320
    ctx->pc = 0x1b45d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21280));
label_1b45d8:
    // 0x1b45d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b45d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b45dc:
    // 0x1b45dc: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_1b45e0:
    if (ctx->pc == 0x1B45E0u) {
        ctx->pc = 0x1B45E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B45DCu;
        // 0x1b45e0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B45E4u;
        goto label_1b45e4;
    }
    ctx->pc = 0x1B45DCu;
    {
        const bool branch_taken_0x1b45dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b45dc) {
            ctx->pc = 0x1B45E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B45DCu;
            // 0x1b45e0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B45F0u;
            goto label_1b45f0;
        }
    }
    ctx->pc = 0x1B45E4u;
label_1b45e4:
    // 0x1b45e4: 0x60f809  jalr        $v1
label_1b45e8:
    if (ctx->pc == 0x1B45E8u) {
        ctx->pc = 0x1B45E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B45E4u;
        // 0x1b45e8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B45ECu;
        goto label_1b45ec;
    }
    ctx->pc = 0x1B45E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B45ECu);
        ctx->pc = 0x1B45E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B45E4u;
        // 0x1b45e8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B45E4u, 0x1B45ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B45ECu;
label_1b45ec:
    // 0x1b45ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b45ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b45f0:
    // 0x1b45f0: 0x3e00008  jr          $ra
label_1b45f4:
    if (ctx->pc == 0x1B45F4u) {
        ctx->pc = 0x1B45F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B45F0u;
        // 0x1b45f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B45F8u;
        goto label_fallthrough_0x1b45f0;
    }
    ctx->pc = 0x1B45F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B45F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B45F0u;
        // 0x1b45f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B45F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b45f0:
    ctx->pc = 0x1B45F8u;
}
