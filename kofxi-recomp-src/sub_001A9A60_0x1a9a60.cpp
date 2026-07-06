#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A9A60
// Address: 0x1a9a60 - 0x1a9a90
void sub_001A9A60_0x1a9a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9A60_0x1a9a60");
#endif

    switch (ctx->pc) {
        case 0x1a9a60u: goto label_1a9a60;
        case 0x1a9a64u: goto label_1a9a64;
        case 0x1a9a68u: goto label_1a9a68;
        case 0x1a9a6cu: goto label_1a9a6c;
        case 0x1a9a70u: goto label_1a9a70;
        case 0x1a9a74u: goto label_1a9a74;
        case 0x1a9a78u: goto label_1a9a78;
        case 0x1a9a7cu: goto label_1a9a7c;
        case 0x1a9a80u: goto label_1a9a80;
        case 0x1a9a84u: goto label_1a9a84;
        case 0x1a9a88u: goto label_1a9a88;
        case 0x1a9a8cu: goto label_1a9a8c;
        default: break;
    }

    ctx->pc = 0x1a9a60u;

label_1a9a60:
    // 0x1a9a60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a9a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a9a64:
    // 0x1a9a64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a9a68:
    // 0x1a9a68: 0x8c8200b4  lw          $v0, 0xB4($a0)
    ctx->pc = 0x1a9a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
label_1a9a6c:
    // 0x1a9a6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a9a70:
    if (ctx->pc == 0x1A9A70u) {
        ctx->pc = 0x1A9A70u;
            // 0x1a9a70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9A74u;
        goto label_1a9a74;
    }
    ctx->pc = 0x1A9A6Cu;
    {
        const bool branch_taken_0x1a9a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9A6Cu;
            // 0x1a9a70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9a6c) {
            ctx->pc = 0x1A9A84u;
            goto label_1a9a84;
        }
    }
    ctx->pc = 0x1A9A74u;
label_1a9a74:
    // 0x1a9a74: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a9a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a9a78:
    // 0x1a9a78: 0x8c43e478  lw          $v1, -0x1B88($v0)
    ctx->pc = 0x1a9a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960248)));
label_1a9a7c:
    // 0x1a9a7c: 0x60f809  jalr        $v1
label_1a9a80:
    if (ctx->pc == 0x1A9A80u) {
        ctx->pc = 0x1A9A84u;
        goto label_1a9a84;
    }
    ctx->pc = 0x1A9A7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A9A84u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A9A84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A9A84u; }
            if (ctx->pc != 0x1A9A84u) { return; }
        }
        }
    }
    ctx->pc = 0x1A9A84u;
label_1a9a84:
    // 0x1a9a84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a9a88:
    // 0x1a9a88: 0x3e00008  jr          $ra
label_1a9a8c:
    if (ctx->pc == 0x1A9A8Cu) {
        ctx->pc = 0x1A9A8Cu;
            // 0x1a9a8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1A9A90u;
        goto label_fallthrough_0x1a9a88;
    }
    ctx->pc = 0x1A9A88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9A88u;
            // 0x1a9a8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a9a88:
    ctx->pc = 0x1A9A90u;
    ctx->pc = 0x1a9a90u;
}
