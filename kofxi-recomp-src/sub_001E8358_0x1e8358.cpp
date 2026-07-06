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

// Function: sub_001E8358
// Address: 0x1e8358 - 0x1e8388
void sub_001E8358_0x1e8358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8358_0x1e8358");
#endif

    switch (ctx->pc) {
        case 0x1e8358u: goto label_1e8358;
        case 0x1e835cu: goto label_1e835c;
        case 0x1e8360u: goto label_1e8360;
        case 0x1e8364u: goto label_1e8364;
        case 0x1e8368u: goto label_1e8368;
        case 0x1e836cu: goto label_1e836c;
        case 0x1e8370u: goto label_1e8370;
        case 0x1e8374u: goto label_1e8374;
        case 0x1e8378u: goto label_1e8378;
        case 0x1e837cu: goto label_1e837c;
        case 0x1e8380u: goto label_1e8380;
        case 0x1e8384u: goto label_1e8384;
        default: break;
    }

    ctx->pc = 0x1e8358u;

label_1e8358:
    // 0x1e8358: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e8358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e835c:
    // 0x1e835c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e835cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e8360:
    // 0x1e8360: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e8360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e8364:
    // 0x1e8364: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1e8364u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e8368:
    // 0x1e8368: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1e8368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e836c:
    // 0x1e836c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1e836cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1e8370:
    // 0x1e8370: 0x40f809  jalr        $v0
label_1e8374:
    if (ctx->pc == 0x1E8374u) {
        ctx->pc = 0x1E8374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8370u;
        // 0x1e8374: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8378u;
        goto label_1e8378;
    }
    ctx->pc = 0x1E8370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E8378u);
        ctx->pc = 0x1E8374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8370u;
        // 0x1e8374: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8370u, 0x1E8378u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E8378u;
label_1e8378:
    // 0x1e8378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e8378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e837c:
    // 0x1e837c: 0x3e00008  jr          $ra
label_1e8380:
    if (ctx->pc == 0x1E8380u) {
        ctx->pc = 0x1E8380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E837Cu;
        // 0x1e8380: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E8384u;
        goto label_1e8384;
    }
    ctx->pc = 0x1E837Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E837Cu;
        // 0x1e8380: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E837Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8384u;
label_1e8384:
    // 0x1e8384: 0x0  nop
    ctx->pc = 0x1e8384u;
    // NOP
    if (ctx->pc == 0x1e8384u) { ctx->pc = 0x1e8388u; }
}
