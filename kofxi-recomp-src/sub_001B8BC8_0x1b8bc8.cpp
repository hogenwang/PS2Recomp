#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B8BC8
// Address: 0x1b8bc8 - 0x1b8bf0
void sub_001B8BC8_0x1b8bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8BC8_0x1b8bc8");
#endif

    switch (ctx->pc) {
        case 0x1b8bc8u: goto label_1b8bc8;
        case 0x1b8bccu: goto label_1b8bcc;
        case 0x1b8bd0u: goto label_1b8bd0;
        case 0x1b8bd4u: goto label_1b8bd4;
        case 0x1b8bd8u: goto label_1b8bd8;
        case 0x1b8bdcu: goto label_1b8bdc;
        case 0x1b8be0u: goto label_1b8be0;
        case 0x1b8be4u: goto label_1b8be4;
        case 0x1b8be8u: goto label_1b8be8;
        case 0x1b8becu: goto label_1b8bec;
        default: break;
    }

    ctx->pc = 0x1b8bc8u;

label_1b8bc8:
    // 0x1b8bc8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1b8bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1b8bcc:
    // 0x1b8bcc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b8bccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b8bd0:
    // 0x1b8bd0: 0x8c42c374  lw          $v0, -0x3C8C($v0)
    ctx->pc = 0x1b8bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951796)));
label_1b8bd4:
    // 0x1b8bd4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b8bd8:
    if (ctx->pc == 0x1B8BD8u) {
        ctx->pc = 0x1B8BD8u;
            // 0x1b8bd8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1B8BDCu;
        goto label_1b8bdc;
    }
    ctx->pc = 0x1B8BD4u;
    {
        const bool branch_taken_0x1b8bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8BD4u;
            // 0x1b8bd8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8bd4) {
            ctx->pc = 0x1B8BE4u;
            goto label_1b8be4;
        }
    }
    ctx->pc = 0x1B8BDCu;
label_1b8bdc:
    // 0x1b8bdc: 0x40f809  jalr        $v0
label_1b8be0:
    if (ctx->pc == 0x1B8BE0u) {
        ctx->pc = 0x1B8BE4u;
        goto label_1b8be4;
    }
    ctx->pc = 0x1B8BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B8BE4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B8BE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B8BE4u; }
            if (ctx->pc != 0x1B8BE4u) { return; }
        }
        }
    }
    ctx->pc = 0x1B8BE4u;
label_1b8be4:
    // 0x1b8be4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b8be8:
    // 0x1b8be8: 0x3e00008  jr          $ra
label_1b8bec:
    if (ctx->pc == 0x1B8BECu) {
        ctx->pc = 0x1B8BECu;
            // 0x1b8bec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1B8BF0u;
        goto label_fallthrough_0x1b8be8;
    }
    ctx->pc = 0x1B8BE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8BE8u;
            // 0x1b8bec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1b8be8:
    ctx->pc = 0x1B8BF0u;
    ctx->pc = 0x1b8bf0u;
}
