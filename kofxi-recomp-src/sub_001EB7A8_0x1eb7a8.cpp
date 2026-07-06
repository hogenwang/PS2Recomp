#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EB7A8
// Address: 0x1eb7a8 - 0x1eb7e0
void sub_001EB7A8_0x1eb7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EB7A8_0x1eb7a8");
#endif

    switch (ctx->pc) {
        case 0x1eb7a8u: goto label_1eb7a8;
        case 0x1eb7acu: goto label_1eb7ac;
        case 0x1eb7b0u: goto label_1eb7b0;
        case 0x1eb7b4u: goto label_1eb7b4;
        case 0x1eb7b8u: goto label_1eb7b8;
        case 0x1eb7bcu: goto label_1eb7bc;
        case 0x1eb7c0u: goto label_1eb7c0;
        case 0x1eb7c4u: goto label_1eb7c4;
        case 0x1eb7c8u: goto label_1eb7c8;
        case 0x1eb7ccu: goto label_1eb7cc;
        case 0x1eb7d0u: goto label_1eb7d0;
        case 0x1eb7d4u: goto label_1eb7d4;
        case 0x1eb7d8u: goto label_1eb7d8;
        case 0x1eb7dcu: goto label_1eb7dc;
        default: break;
    }

    ctx->pc = 0x1eb7a8u;

label_1eb7a8:
    // 0x1eb7a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eb7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1eb7ac:
    // 0x1eb7ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eb7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1eb7b0:
    // 0x1eb7b0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1eb7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1eb7b4:
    // 0x1eb7b4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1eb7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1eb7b8:
    // 0x1eb7b8: 0x40f809  jalr        $v0
label_1eb7bc:
    if (ctx->pc == 0x1EB7BCu) {
        ctx->pc = 0x1EB7C0u;
        goto label_1eb7c0;
    }
    ctx->pc = 0x1EB7B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EB7C0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EB7C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EB7C0u; }
            if (ctx->pc != 0x1EB7C0u) { return; }
        }
        }
    }
    ctx->pc = 0x1EB7C0u;
label_1eb7c0:
    // 0x1eb7c0: 0x3c0301c0  lui         $v1, 0x1C0
    ctx->pc = 0x1eb7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)448 << 16));
label_1eb7c4:
    // 0x1eb7c4: 0x8c643cb0  lw          $a0, 0x3CB0($v1)
    ctx->pc = 0x1eb7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15536)));
label_1eb7c8:
    // 0x1eb7c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eb7c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1eb7cc:
    // 0x1eb7cc: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x1eb7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
label_1eb7d0:
    // 0x1eb7d0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1eb7d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1eb7d4:
    // 0x1eb7d4: 0x3e00008  jr          $ra
label_1eb7d8:
    if (ctx->pc == 0x1EB7D8u) {
        ctx->pc = 0x1EB7D8u;
            // 0x1eb7d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1EB7DCu;
        goto label_1eb7dc;
    }
    ctx->pc = 0x1EB7D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB7D4u;
            // 0x1eb7d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EB7DCu;
label_1eb7dc:
    // 0x1eb7dc: 0x0  nop
    ctx->pc = 0x1eb7dcu;
    // NOP
    ctx->pc = 0x1eb7e0u;
}
