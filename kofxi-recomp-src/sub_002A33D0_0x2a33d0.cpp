#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A33D0
// Address: 0x2a33d0 - 0x2a3408
void sub_002A33D0_0x2a33d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A33D0_0x2a33d0");
#endif

    switch (ctx->pc) {
        case 0x2a33d0u: goto label_2a33d0;
        case 0x2a33d4u: goto label_2a33d4;
        case 0x2a33d8u: goto label_2a33d8;
        case 0x2a33dcu: goto label_2a33dc;
        case 0x2a33e0u: goto label_2a33e0;
        case 0x2a33e4u: goto label_2a33e4;
        case 0x2a33e8u: goto label_2a33e8;
        case 0x2a33ecu: goto label_2a33ec;
        case 0x2a33f0u: goto label_2a33f0;
        case 0x2a33f4u: goto label_2a33f4;
        case 0x2a33f8u: goto label_2a33f8;
        case 0x2a33fcu: goto label_2a33fc;
        case 0x2a3400u: goto label_2a3400;
        case 0x2a3404u: goto label_2a3404;
        default: break;
    }

    ctx->pc = 0x2a33d0u;

label_2a33d0:
    // 0x2a33d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a33d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2a33d4:
    // 0x2a33d4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2a33d8:
    if (ctx->pc == 0x2A33D8u) {
        ctx->pc = 0x2A33D8u;
            // 0x2a33d8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x2A33DCu;
        goto label_2a33dc;
    }
    ctx->pc = 0x2A33D4u;
    {
        const bool branch_taken_0x2a33d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A33D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A33D4u;
            // 0x2a33d8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a33d4) {
            ctx->pc = 0x2A33E8u;
            goto label_2a33e8;
        }
    }
    ctx->pc = 0x2A33DCu;
label_2a33dc:
    // 0x2a33dc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a33dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2a33e0:
    // 0x2a33e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2a33e4:
    if (ctx->pc == 0x2A33E4u) {
        ctx->pc = 0x2A33E8u;
        goto label_2a33e8;
    }
    ctx->pc = 0x2A33E0u;
    {
        const bool branch_taken_0x2a33e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a33e0) {
            ctx->pc = 0x2A33F0u;
            goto label_2a33f0;
        }
    }
    ctx->pc = 0x2A33E8u;
label_2a33e8:
    // 0x2a33e8: 0x10000003  b           . + 4 + (0x3 << 2)
label_2a33ec:
    if (ctx->pc == 0x2A33ECu) {
        ctx->pc = 0x2A33ECu;
            // 0x2a33ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2A33F0u;
        goto label_2a33f0;
    }
    ctx->pc = 0x2A33E8u;
    {
        const bool branch_taken_0x2a33e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A33ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A33E8u;
            // 0x2a33ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a33e8) {
            ctx->pc = 0x2A33F8u;
            goto label_2a33f8;
        }
    }
    ctx->pc = 0x2A33F0u;
label_2a33f0:
    // 0x2a33f0: 0x40f809  jalr        $v0
label_2a33f4:
    if (ctx->pc == 0x2A33F4u) {
        ctx->pc = 0x2A33F8u;
        goto label_2a33f8;
    }
    ctx->pc = 0x2A33F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A33F8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A33F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A33F8u; }
            if (ctx->pc != 0x2A33F8u) { return; }
        }
        }
    }
    ctx->pc = 0x2A33F8u;
label_2a33f8:
    // 0x2a33f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a33f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a33fc:
    // 0x2a33fc: 0x3e00008  jr          $ra
label_2a3400:
    if (ctx->pc == 0x2A3400u) {
        ctx->pc = 0x2A3400u;
            // 0x2a3400: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2A3404u;
        goto label_2a3404;
    }
    ctx->pc = 0x2A33FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A33FCu;
            // 0x2a3400: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A3404u;
label_2a3404:
    // 0x2a3404: 0x0  nop
    ctx->pc = 0x2a3404u;
    // NOP
    ctx->pc = 0x2a3408u;
}
