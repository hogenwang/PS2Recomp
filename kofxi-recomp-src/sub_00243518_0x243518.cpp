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

// Function: sub_00243518
// Address: 0x243518 - 0x243540
void sub_00243518_0x243518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243518_0x243518");
#endif

    switch (ctx->pc) {
        case 0x243518u: goto label_243518;
        case 0x24351cu: goto label_24351c;
        case 0x243520u: goto label_243520;
        case 0x243524u: goto label_243524;
        case 0x243528u: goto label_243528;
        case 0x24352cu: goto label_24352c;
        case 0x243530u: goto label_243530;
        case 0x243534u: goto label_243534;
        case 0x243538u: goto label_243538;
        case 0x24353cu: goto label_24353c;
        default: break;
    }

    ctx->pc = 0x243518u;

label_243518:
    // 0x243518: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x243518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_24351c:
    // 0x24351c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x24351cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_243520:
    // 0x243520: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x243520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_243524:
    // 0x243524: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x243524u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
label_243528:
    // 0x243528: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x243528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_24352c:
    // 0x24352c: 0x40f809  jalr        $v0
label_243530:
    if (ctx->pc == 0x243530u) {
        ctx->pc = 0x243530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24352Cu;
        // 0x243530: 0x24a534d8  addiu       $a1, $a1, 0x34D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243534u;
        goto label_243534;
    }
    ctx->pc = 0x24352Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x243534u);
        ctx->pc = 0x243530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24352Cu;
        // 0x243530: 0x24a534d8  addiu       $a1, $a1, 0x34D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24352Cu, 0x243534u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x243534u;
label_243534:
    // 0x243534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x243534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_243538:
    // 0x243538: 0x3e00008  jr          $ra
label_24353c:
    if (ctx->pc == 0x24353Cu) {
        ctx->pc = 0x24353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243538u;
        // 0x24353c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243540u;
        goto label_fallthrough_0x243538;
    }
    ctx->pc = 0x243538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243538u;
        // 0x24353c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x243538:
    ctx->pc = 0x243540u;
}
