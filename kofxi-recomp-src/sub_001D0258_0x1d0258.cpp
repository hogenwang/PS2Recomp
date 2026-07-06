#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D0258
// Address: 0x1d0258 - 0x1d0280
void sub_001D0258_0x1d0258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0258_0x1d0258");
#endif

    switch (ctx->pc) {
        case 0x1d0258u: goto label_1d0258;
        case 0x1d025cu: goto label_1d025c;
        case 0x1d0260u: goto label_1d0260;
        case 0x1d0264u: goto label_1d0264;
        case 0x1d0268u: goto label_1d0268;
        case 0x1d026cu: goto label_1d026c;
        case 0x1d0270u: goto label_1d0270;
        case 0x1d0274u: goto label_1d0274;
        case 0x1d0278u: goto label_1d0278;
        case 0x1d027cu: goto label_1d027c;
        default: break;
    }

    ctx->pc = 0x1d0258u;

label_1d0258:
    // 0x1d0258: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d0258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1d025c:
    // 0x1d025c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d025cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d0260:
    // 0x1d0260: 0x8c42e674  lw          $v0, -0x198C($v0)
    ctx->pc = 0x1d0260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960756)));
label_1d0264:
    // 0x1d0264: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d0268:
    if (ctx->pc == 0x1D0268u) {
        ctx->pc = 0x1D0268u;
            // 0x1d0268: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1D026Cu;
        goto label_1d026c;
    }
    ctx->pc = 0x1D0264u;
    {
        const bool branch_taken_0x1d0264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0264u;
            // 0x1d0268: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0264) {
            ctx->pc = 0x1D0274u;
            goto label_1d0274;
        }
    }
    ctx->pc = 0x1D026Cu;
label_1d026c:
    // 0x1d026c: 0x40f809  jalr        $v0
label_1d0270:
    if (ctx->pc == 0x1D0270u) {
        ctx->pc = 0x1D0274u;
        goto label_1d0274;
    }
    ctx->pc = 0x1D026Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D0274u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D0274u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D0274u; }
            if (ctx->pc != 0x1D0274u) { return; }
        }
        }
    }
    ctx->pc = 0x1D0274u;
label_1d0274:
    // 0x1d0274: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0278:
    // 0x1d0278: 0x3e00008  jr          $ra
label_1d027c:
    if (ctx->pc == 0x1D027Cu) {
        ctx->pc = 0x1D027Cu;
            // 0x1d027c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1D0280u;
        goto label_fallthrough_0x1d0278;
    }
    ctx->pc = 0x1D0278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D027Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0278u;
            // 0x1d027c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1d0278:
    ctx->pc = 0x1D0280u;
    ctx->pc = 0x1d0280u;
}
