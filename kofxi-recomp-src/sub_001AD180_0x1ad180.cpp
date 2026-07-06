#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AD180
// Address: 0x1ad180 - 0x1ad1d8
void sub_001AD180_0x1ad180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AD180_0x1ad180");
#endif

    switch (ctx->pc) {
        case 0x1ad1a8u: goto label_1ad1a8;
        case 0x1ad1b8u: goto label_1ad1b8;
        case 0x1ad1d0u: goto label_1ad1d0;
        default: break;
    }

    ctx->pc = 0x1ad180u;

    // 0x1ad180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ad180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ad184: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ad184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ad188: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ad188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ad18c: 0x8483009c  lh          $v1, 0x9C($a0)
    ctx->pc = 0x1ad18cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x1ad190: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AD190u;
    {
        const bool branch_taken_0x1ad190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AD194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD190u;
            // 0x1ad194: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad190) {
            ctx->pc = 0x1AD1A8u;
            goto label_1ad1a8;
        }
    }
    ctx->pc = 0x1AD198u;
    // 0x1ad198: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ad198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad19c: 0x806b3de  j           func_1ACF78
    ctx->pc = 0x1AD19Cu;
    ctx->pc = 0x1AD1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD19Cu;
            // 0x1ad1a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ACF78u;
    {
        auto targetFn = runtime->lookupFunction(0x1ACF78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1AD1A4u;
    // 0x1ad1a4: 0x0  nop
    ctx->pc = 0x1ad1a4u;
    // NOP
label_1ad1a8:
    // 0x1ad1a8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AD1A8u;
    {
        const bool branch_taken_0x1ad1a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AD1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD1A8u;
            // 0x1ad1ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad1a8) {
            ctx->pc = 0x1AD1B8u;
            goto label_1ad1b8;
        }
    }
    ctx->pc = 0x1AD1B0u;
    // 0x1ad1b0: 0x806b378  j           func_1ACDE0
    ctx->pc = 0x1AD1B0u;
    ctx->pc = 0x1AD1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD1B0u;
            // 0x1ad1b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ACDE0u;
    {
        auto targetFn = runtime->lookupFunction(0x1ACDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1AD1B8u;
label_1ad1b8:
    // 0x1ad1b8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AD1B8u;
    {
        const bool branch_taken_0x1ad1b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad1b8) {
            ctx->pc = 0x1AD1D0u;
            goto label_1ad1d0;
        }
    }
    ctx->pc = 0x1AD1C0u;
    // 0x1ad1c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ad1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad1c4: 0x806b31a  j           func_1ACC68
    ctx->pc = 0x1AD1C4u;
    ctx->pc = 0x1AD1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD1C4u;
            // 0x1ad1c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ACC68u;
    {
        auto targetFn = runtime->lookupFunction(0x1ACC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1AD1CCu;
    // 0x1ad1cc: 0x0  nop
    ctx->pc = 0x1ad1ccu;
    // NOP
label_1ad1d0:
    // 0x1ad1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD1D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD1D0u;
            // 0x1ad1d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AD1D8u;
    ctx->pc = 0x1ad1d8u;
}
