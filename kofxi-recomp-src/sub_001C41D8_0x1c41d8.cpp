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

// Function: sub_001C41D8
// Address: 0x1c41d8 - 0x1c4208
void sub_001C41D8_0x1c41d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C41D8_0x1c41d8");
#endif

    switch (ctx->pc) {
        case 0x1c41d8u: goto label_1c41d8;
        case 0x1c41dcu: goto label_1c41dc;
        case 0x1c41e0u: goto label_1c41e0;
        case 0x1c41e4u: goto label_1c41e4;
        case 0x1c41e8u: goto label_1c41e8;
        case 0x1c41ecu: goto label_1c41ec;
        case 0x1c41f0u: goto label_1c41f0;
        case 0x1c41f4u: goto label_1c41f4;
        case 0x1c41f8u: goto label_1c41f8;
        case 0x1c41fcu: goto label_1c41fc;
        case 0x1c4200u: goto label_1c4200;
        case 0x1c4204u: goto label_1c4204;
        default: break;
    }

    ctx->pc = 0x1c41d8u;

label_1c41d8:
    // 0x1c41d8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c41d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c41dc:
    // 0x1c41dc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c41dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c41e0:
    // 0x1c41e0: 0x8c43eb3c  lw          $v1, -0x14C4($v0)
    ctx->pc = 0x1c41e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961980)));
label_1c41e4:
    // 0x1c41e4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c41e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c41e8:
    // 0x1c41e8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1c41ec:
    if (ctx->pc == 0x1C41ECu) {
        ctx->pc = 0x1C41ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C41E8u;
        // 0x1c41ec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C41F0u;
        goto label_1c41f0;
    }
    ctx->pc = 0x1C41E8u;
    {
        const bool branch_taken_0x1c41e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C41ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C41E8u;
        // 0x1c41ec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c41e8) {
            ctx->pc = 0x1C41FCu;
            goto label_1c41fc;
        }
    }
    ctx->pc = 0x1C41F0u;
label_1c41f0:
    // 0x1c41f0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c41f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c41f4:
    // 0x1c41f4: 0x60f809  jalr        $v1
label_1c41f8:
    if (ctx->pc == 0x1C41F8u) {
        ctx->pc = 0x1C41F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C41F4u;
        // 0x1c41f8: 0x8c44eb40  lw          $a0, -0x14C0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961984)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C41FCu;
        goto label_1c41fc;
    }
    ctx->pc = 0x1C41F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C41FCu);
        ctx->pc = 0x1C41F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C41F4u;
        // 0x1c41f8: 0x8c44eb40  lw          $a0, -0x14C0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961984)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C41F4u, 0x1C41FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C41FCu;
label_1c41fc:
    // 0x1c41fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c41fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c4200:
    // 0x1c4200: 0x3e00008  jr          $ra
label_1c4204:
    if (ctx->pc == 0x1C4204u) {
        ctx->pc = 0x1C4204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4200u;
        // 0x1c4204: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C4208u;
        goto label_fallthrough_0x1c4200;
    }
    ctx->pc = 0x1C4200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4200u;
        // 0x1c4204: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c4200:
    ctx->pc = 0x1C4208u;
}
