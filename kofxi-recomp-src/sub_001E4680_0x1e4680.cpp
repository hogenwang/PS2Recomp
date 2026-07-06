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

// Function: sub_001E4680
// Address: 0x1e4680 - 0x1e46b0
void sub_001E4680_0x1e4680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4680_0x1e4680");
#endif

    switch (ctx->pc) {
        case 0x1e4680u: goto label_1e4680;
        case 0x1e4684u: goto label_1e4684;
        case 0x1e4688u: goto label_1e4688;
        case 0x1e468cu: goto label_1e468c;
        case 0x1e4690u: goto label_1e4690;
        case 0x1e4694u: goto label_1e4694;
        case 0x1e4698u: goto label_1e4698;
        case 0x1e469cu: goto label_1e469c;
        case 0x1e46a0u: goto label_1e46a0;
        case 0x1e46a4u: goto label_1e46a4;
        case 0x1e46a8u: goto label_1e46a8;
        case 0x1e46acu: goto label_1e46ac;
        default: break;
    }

    ctx->pc = 0x1e4680u;

label_1e4680:
    // 0x1e4680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e4680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e4684:
    // 0x1e4684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e4684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e4688:
    // 0x1e4688: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x1e4688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
label_1e468c:
    // 0x1e468c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1e4690:
    if (ctx->pc == 0x1E4690u) {
        ctx->pc = 0x1E4690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E468Cu;
        // 0x1e4690: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4694u;
        goto label_1e4694;
    }
    ctx->pc = 0x1E468Cu;
    {
        const bool branch_taken_0x1e468c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E468Cu;
        // 0x1e4690: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e468c) {
            ctx->pc = 0x1E46A4u;
            goto label_1e46a4;
        }
    }
    ctx->pc = 0x1E4694u;
label_1e4694:
    // 0x1e4694: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e4694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e4698:
    // 0x1e4698: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1e4698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1e469c:
    // 0x1e469c: 0x60f809  jalr        $v1
label_1e46a0:
    if (ctx->pc == 0x1E46A0u) {
        ctx->pc = 0x1E46A4u;
        goto label_1e46a4;
    }
    ctx->pc = 0x1E469Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E46A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E469Cu, 0x1E46A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E46A4u;
label_1e46a4:
    // 0x1e46a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e46a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e46a8:
    // 0x1e46a8: 0x3e00008  jr          $ra
label_1e46ac:
    if (ctx->pc == 0x1E46ACu) {
        ctx->pc = 0x1E46ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E46A8u;
        // 0x1e46ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E46B0u;
        goto label_fallthrough_0x1e46a8;
    }
    ctx->pc = 0x1E46A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E46ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E46A8u;
        // 0x1e46ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E46A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e46a8:
    ctx->pc = 0x1E46B0u;
}
