#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B02A0
// Address: 0x2b02a0 - 0x2b02e0
void sub_002B02A0_0x2b02a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B02A0_0x2b02a0");
#endif

    switch (ctx->pc) {
        case 0x2b02a0u: goto label_2b02a0;
        case 0x2b02a4u: goto label_2b02a4;
        case 0x2b02a8u: goto label_2b02a8;
        case 0x2b02acu: goto label_2b02ac;
        case 0x2b02b0u: goto label_2b02b0;
        case 0x2b02b4u: goto label_2b02b4;
        case 0x2b02b8u: goto label_2b02b8;
        case 0x2b02bcu: goto label_2b02bc;
        case 0x2b02c0u: goto label_2b02c0;
        case 0x2b02c4u: goto label_2b02c4;
        case 0x2b02c8u: goto label_2b02c8;
        case 0x2b02ccu: goto label_2b02cc;
        case 0x2b02d0u: goto label_2b02d0;
        case 0x2b02d4u: goto label_2b02d4;
        case 0x2b02d8u: goto label_2b02d8;
        case 0x2b02dcu: goto label_2b02dc;
        default: break;
    }

    ctx->pc = 0x2b02a0u;

label_2b02a0:
    // 0x2b02a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b02a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2b02a4:
    // 0x2b02a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b02a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2b02a8:
    // 0x2b02a8: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x2b02a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_2b02ac:
    // 0x2b02ac: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2b02acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2b02b0:
    // 0x2b02b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2b02b4:
    if (ctx->pc == 0x2B02B4u) {
        ctx->pc = 0x2B02B4u;
            // 0x2b02b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B02B8u;
        goto label_2b02b8;
    }
    ctx->pc = 0x2B02B0u;
    {
        const bool branch_taken_0x2b02b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B02B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B02B0u;
            // 0x2b02b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b02b0) {
            ctx->pc = 0x2B02C4u;
            goto label_2b02c4;
        }
    }
    ctx->pc = 0x2B02B8u;
label_2b02b8:
    // 0x2b02b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b02b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b02bc:
    // 0x2b02bc: 0x10000005  b           . + 4 + (0x5 << 2)
label_2b02c0:
    if (ctx->pc == 0x2B02C0u) {
        ctx->pc = 0x2B02C0u;
            // 0x2b02c0: 0xac830018  sw          $v1, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
        ctx->pc = 0x2B02C4u;
        goto label_2b02c4;
    }
    ctx->pc = 0x2B02BCu;
    {
        const bool branch_taken_0x2b02bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B02C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B02BCu;
            // 0x2b02c0: 0xac830018  sw          $v1, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b02bc) {
            ctx->pc = 0x2B02D4u;
            goto label_2b02d4;
        }
    }
    ctx->pc = 0x2B02C4u;
label_2b02c4:
    // 0x2b02c4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2b02c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2b02c8:
    // 0x2b02c8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2b02c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2b02cc:
    // 0x2b02cc: 0x40f809  jalr        $v0
label_2b02d0:
    if (ctx->pc == 0x2B02D0u) {
        ctx->pc = 0x2B02D4u;
        goto label_2b02d4;
    }
    ctx->pc = 0x2B02CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B02D4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B02D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B02D4u; }
            if (ctx->pc != 0x2B02D4u) { return; }
        }
        }
    }
    ctx->pc = 0x2B02D4u;
label_2b02d4:
    // 0x2b02d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b02d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b02d8:
    // 0x2b02d8: 0x3e00008  jr          $ra
label_2b02dc:
    if (ctx->pc == 0x2B02DCu) {
        ctx->pc = 0x2B02DCu;
            // 0x2b02dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2B02E0u;
        goto label_fallthrough_0x2b02d8;
    }
    ctx->pc = 0x2B02D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B02DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B02D8u;
            // 0x2b02dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2b02d8:
    ctx->pc = 0x2B02E0u;
    ctx->pc = 0x2b02e0u;
}
