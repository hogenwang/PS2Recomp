#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00287558
// Address: 0x287558 - 0x287580
void sub_00287558_0x287558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287558_0x287558");
#endif

    switch (ctx->pc) {
        case 0x287558u: goto label_287558;
        case 0x28755cu: goto label_28755c;
        case 0x287560u: goto label_287560;
        case 0x287564u: goto label_287564;
        case 0x287568u: goto label_287568;
        case 0x28756cu: goto label_28756c;
        case 0x287570u: goto label_287570;
        case 0x287574u: goto label_287574;
        case 0x287578u: goto label_287578;
        case 0x28757cu: goto label_28757c;
        default: break;
    }

    ctx->pc = 0x287558u;

label_287558:
    // 0x287558: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x287558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28755c:
    // 0x28755c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x28755cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_287560:
    // 0x287560: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x287560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_287564:
    // 0x287564: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x287564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_287568:
    // 0x287568: 0x40f809  jalr        $v0
label_28756c:
    if (ctx->pc == 0x28756Cu) {
        ctx->pc = 0x287570u;
        goto label_287570;
    }
    ctx->pc = 0x287568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x287570u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x287570u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x287570u; }
            if (ctx->pc != 0x287570u) { return; }
        }
        }
    }
    ctx->pc = 0x287570u;
label_287570:
    // 0x287570: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x287570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_287574:
    // 0x287574: 0x3e00008  jr          $ra
label_287578:
    if (ctx->pc == 0x287578u) {
        ctx->pc = 0x287578u;
            // 0x287578: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x28757Cu;
        goto label_28757c;
    }
    ctx->pc = 0x287574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287574u;
            // 0x287578: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28757Cu;
label_28757c:
    // 0x28757c: 0x0  nop
    ctx->pc = 0x28757cu;
    // NOP
    ctx->pc = 0x287580u;
}
