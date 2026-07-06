#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D02B0
// Address: 0x1d02b0 - 0x1d02d8
void sub_001D02B0_0x1d02b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D02B0_0x1d02b0");
#endif

    switch (ctx->pc) {
        case 0x1d02b0u: goto label_1d02b0;
        case 0x1d02b4u: goto label_1d02b4;
        case 0x1d02b8u: goto label_1d02b8;
        case 0x1d02bcu: goto label_1d02bc;
        case 0x1d02c0u: goto label_1d02c0;
        case 0x1d02c4u: goto label_1d02c4;
        case 0x1d02c8u: goto label_1d02c8;
        case 0x1d02ccu: goto label_1d02cc;
        case 0x1d02d0u: goto label_1d02d0;
        case 0x1d02d4u: goto label_1d02d4;
        default: break;
    }

    ctx->pc = 0x1d02b0u;

label_1d02b0:
    // 0x1d02b0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d02b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1d02b4:
    // 0x1d02b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d02b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d02b8:
    // 0x1d02b8: 0x8c42e67c  lw          $v0, -0x1984($v0)
    ctx->pc = 0x1d02b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960764)));
label_1d02bc:
    // 0x1d02bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d02c0:
    if (ctx->pc == 0x1D02C0u) {
        ctx->pc = 0x1D02C0u;
            // 0x1d02c0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1D02C4u;
        goto label_1d02c4;
    }
    ctx->pc = 0x1D02BCu;
    {
        const bool branch_taken_0x1d02bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D02C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D02BCu;
            // 0x1d02c0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d02bc) {
            ctx->pc = 0x1D02CCu;
            goto label_1d02cc;
        }
    }
    ctx->pc = 0x1D02C4u;
label_1d02c4:
    // 0x1d02c4: 0x40f809  jalr        $v0
label_1d02c8:
    if (ctx->pc == 0x1D02C8u) {
        ctx->pc = 0x1D02CCu;
        goto label_1d02cc;
    }
    ctx->pc = 0x1D02C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D02CCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D02CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D02CCu; }
            if (ctx->pc != 0x1D02CCu) { return; }
        }
        }
    }
    ctx->pc = 0x1D02CCu;
label_1d02cc:
    // 0x1d02cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d02ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d02d0:
    // 0x1d02d0: 0x3e00008  jr          $ra
label_1d02d4:
    if (ctx->pc == 0x1D02D4u) {
        ctx->pc = 0x1D02D4u;
            // 0x1d02d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1D02D8u;
        goto label_fallthrough_0x1d02d0;
    }
    ctx->pc = 0x1D02D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D02D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D02D0u;
            // 0x1d02d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1d02d0:
    ctx->pc = 0x1D02D8u;
    ctx->pc = 0x1d02d8u;
}
