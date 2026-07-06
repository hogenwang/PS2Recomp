#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D0230
// Address: 0x1d0230 - 0x1d0258
void sub_001D0230_0x1d0230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0230_0x1d0230");
#endif

    switch (ctx->pc) {
        case 0x1d0230u: goto label_1d0230;
        case 0x1d0234u: goto label_1d0234;
        case 0x1d0238u: goto label_1d0238;
        case 0x1d023cu: goto label_1d023c;
        case 0x1d0240u: goto label_1d0240;
        case 0x1d0244u: goto label_1d0244;
        case 0x1d0248u: goto label_1d0248;
        case 0x1d024cu: goto label_1d024c;
        case 0x1d0250u: goto label_1d0250;
        case 0x1d0254u: goto label_1d0254;
        default: break;
    }

    ctx->pc = 0x1d0230u;

label_1d0230:
    // 0x1d0230: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d0230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1d0234:
    // 0x1d0234: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0234u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d0238:
    // 0x1d0238: 0x8c42e670  lw          $v0, -0x1990($v0)
    ctx->pc = 0x1d0238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960752)));
label_1d023c:
    // 0x1d023c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d0240:
    if (ctx->pc == 0x1D0240u) {
        ctx->pc = 0x1D0240u;
            // 0x1d0240: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1D0244u;
        goto label_1d0244;
    }
    ctx->pc = 0x1D023Cu;
    {
        const bool branch_taken_0x1d023c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D023Cu;
            // 0x1d0240: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d023c) {
            ctx->pc = 0x1D024Cu;
            goto label_1d024c;
        }
    }
    ctx->pc = 0x1D0244u;
label_1d0244:
    // 0x1d0244: 0x40f809  jalr        $v0
label_1d0248:
    if (ctx->pc == 0x1D0248u) {
        ctx->pc = 0x1D024Cu;
        goto label_1d024c;
    }
    ctx->pc = 0x1D0244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D024Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D024Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D024Cu; }
            if (ctx->pc != 0x1D024Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1D024Cu;
label_1d024c:
    // 0x1d024c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d024cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0250:
    // 0x1d0250: 0x3e00008  jr          $ra
label_1d0254:
    if (ctx->pc == 0x1D0254u) {
        ctx->pc = 0x1D0254u;
            // 0x1d0254: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1D0258u;
        goto label_fallthrough_0x1d0250;
    }
    ctx->pc = 0x1D0250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0250u;
            // 0x1d0254: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1d0250:
    ctx->pc = 0x1D0258u;
    ctx->pc = 0x1d0258u;
}
