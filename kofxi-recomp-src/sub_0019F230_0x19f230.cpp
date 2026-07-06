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

// Function: sub_0019F230
// Address: 0x19f230 - 0x19f270
void sub_0019F230_0x19f230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F230_0x19f230");
#endif

    switch (ctx->pc) {
        case 0x19f254u: goto label_19f254;
        case 0x19f264u: goto label_19f264;
        default: break;
    }

    ctx->pc = 0x19f230u;

    // 0x19f230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19f230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19f234: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x19f234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x19f238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19f238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19f23c: 0x90439780  lbu         $v1, -0x6880($v0)
    ctx->pc = 0x19f23cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x19f240: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x19f240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x19f244: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F244u;
    {
        const bool branch_taken_0x19f244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19f244) {
            ctx->pc = 0x19F25Cu;
            goto label_19f25c;
        }
    }
    ctx->pc = 0x19F24Cu;
    // 0x19f24c: 0xc067c48  jal         func_19F120
    ctx->pc = 0x19F24Cu;
    SET_GPR_U32(ctx, 31, 0x19F254u);
    ctx->pc = 0x19F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F120u, 0x19F24Cu, 0x19F254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F254u;
label_19f254:
    // 0x19f254: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19F254u;
    {
        const bool branch_taken_0x19f254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F254u;
        // 0x19f258: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f254) {
            ctx->pc = 0x19F268u;
            goto label_19f268;
        }
    }
    ctx->pc = 0x19F25Cu;
label_19f25c:
    // 0x19f25c: 0xc067c78  jal         func_19F1E0
    ctx->pc = 0x19F25Cu;
    SET_GPR_U32(ctx, 31, 0x19F264u);
    ctx->pc = 0x19F1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F1E0u, 0x19F25Cu, 0x19F264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F264u;
label_19f264:
    // 0x19f264: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19f264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19f268:
    // 0x19f268: 0x3e00008  jr          $ra
    ctx->pc = 0x19F268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F268u;
        // 0x19f26c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F270u;
}
