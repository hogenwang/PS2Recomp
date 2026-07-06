#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B0278
// Address: 0x2b0278 - 0x2b02a0
void sub_002B0278_0x2b0278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0278_0x2b0278");
#endif

    switch (ctx->pc) {
        case 0x2b0278u: goto label_2b0278;
        case 0x2b027cu: goto label_2b027c;
        case 0x2b0280u: goto label_2b0280;
        case 0x2b0284u: goto label_2b0284;
        case 0x2b0288u: goto label_2b0288;
        case 0x2b028cu: goto label_2b028c;
        case 0x2b0290u: goto label_2b0290;
        case 0x2b0294u: goto label_2b0294;
        case 0x2b0298u: goto label_2b0298;
        case 0x2b029cu: goto label_2b029c;
        default: break;
    }

    ctx->pc = 0x2b0278u;

label_2b0278:
    // 0x2b0278: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b0278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2b027c:
    // 0x2b027c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b027cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2b0280:
    // 0x2b0280: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2b0280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2b0284:
    // 0x2b0284: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x2b0284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_2b0288:
    // 0x2b0288: 0x40f809  jalr        $v0
label_2b028c:
    if (ctx->pc == 0x2B028Cu) {
        ctx->pc = 0x2B0290u;
        goto label_2b0290;
    }
    ctx->pc = 0x2B0288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B0290u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B0290u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B0290u; }
            if (ctx->pc != 0x2B0290u) { return; }
        }
        }
    }
    ctx->pc = 0x2B0290u;
label_2b0290:
    // 0x2b0290: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b0290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b0294:
    // 0x2b0294: 0x3e00008  jr          $ra
label_2b0298:
    if (ctx->pc == 0x2B0298u) {
        ctx->pc = 0x2B0298u;
            // 0x2b0298: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2B029Cu;
        goto label_2b029c;
    }
    ctx->pc = 0x2B0294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0294u;
            // 0x2b0298: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B029Cu;
label_2b029c:
    // 0x2b029c: 0x0  nop
    ctx->pc = 0x2b029cu;
    // NOP
    ctx->pc = 0x2b02a0u;
}
