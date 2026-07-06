#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AA3E8
// Address: 0x1aa3e8 - 0x1aa410
void sub_001AA3E8_0x1aa3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA3E8_0x1aa3e8");
#endif

    switch (ctx->pc) {
        case 0x1aa408u: goto label_1aa408;
        default: break;
    }

    ctx->pc = 0x1aa3e8u;

    // 0x1aa3e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aa3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aa3ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aa3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa3f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aa3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aa3f4: 0x8483009c  lh          $v1, 0x9C($a0)
    ctx->pc = 0x1aa3f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x1aa3f8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AA3F8u;
    {
        const bool branch_taken_0x1aa3f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AA3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA3F8u;
            // 0x1aa3fc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa3f8) {
            ctx->pc = 0x1AA408u;
            goto label_1aa408;
        }
    }
    ctx->pc = 0x1AA400u;
    // 0x1aa400: 0x806a89a  j           func_1AA268
    ctx->pc = 0x1AA400u;
    ctx->pc = 0x1AA404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA400u;
            // 0x1aa404: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA268u;
    {
        auto targetFn = runtime->lookupFunction(0x1AA268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1AA408u;
label_1aa408:
    // 0x1aa408: 0x806a82c  j           func_1AA0B0
    ctx->pc = 0x1AA408u;
    ctx->pc = 0x1AA40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA408u;
            // 0x1aa40c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA0B0u;
    {
        auto targetFn = runtime->lookupFunction(0x1AA0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1AA410u;
    ctx->pc = 0x1aa410u;
}
