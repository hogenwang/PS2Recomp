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

// Function: sub_002A0370
// Address: 0x2a0370 - 0x2a03a0
void sub_002A0370_0x2a0370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0370_0x2a0370");
#endif

    switch (ctx->pc) {
        case 0x2a0370u: goto label_2a0370;
        case 0x2a0374u: goto label_2a0374;
        case 0x2a0378u: goto label_2a0378;
        case 0x2a037cu: goto label_2a037c;
        case 0x2a0380u: goto label_2a0380;
        case 0x2a0384u: goto label_2a0384;
        case 0x2a0388u: goto label_2a0388;
        case 0x2a038cu: goto label_2a038c;
        case 0x2a0390u: goto label_2a0390;
        case 0x2a0394u: goto label_2a0394;
        case 0x2a0398u: goto label_2a0398;
        case 0x2a039cu: goto label_2a039c;
        default: break;
    }

    ctx->pc = 0x2a0370u;

label_2a0370:
    // 0x2a0370: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2a0370u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a0374:
    // 0x2a0374: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a0374u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a0378:
    // 0x2a0378: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a0378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a037c:
    // 0x2a037c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2a037cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a0380:
    // 0x2a0380: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2a0380u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2a0384:
    // 0x2a0384: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x2a0384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2a0388:
    // 0x2a0388: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2a0388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2a038c:
    // 0x2a038c: 0x40f809  jalr        $v0
label_2a0390:
    if (ctx->pc == 0x2A0390u) {
        ctx->pc = 0x2A0390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A038Cu;
        // 0x2a0390: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A0394u;
        goto label_2a0394;
    }
    ctx->pc = 0x2A038Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A0394u);
        ctx->pc = 0x2A0390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A038Cu;
        // 0x2a0390: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A038Cu, 0x2A0394u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A0394u;
label_2a0394:
    // 0x2a0394: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a0394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a0398:
    // 0x2a0398: 0x3e00008  jr          $ra
label_2a039c:
    if (ctx->pc == 0x2A039Cu) {
        ctx->pc = 0x2A039Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0398u;
        // 0x2a039c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A03A0u;
        goto label_fallthrough_0x2a0398;
    }
    ctx->pc = 0x2A0398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A039Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0398u;
        // 0x2a039c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a0398:
    ctx->pc = 0x2A03A0u;
}
