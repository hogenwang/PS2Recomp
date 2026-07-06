#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002960C8
// Address: 0x2960c8 - 0x2960f0
void sub_002960C8_0x2960c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002960C8_0x2960c8");
#endif

    switch (ctx->pc) {
        case 0x2960c8u: goto label_2960c8;
        case 0x2960ccu: goto label_2960cc;
        case 0x2960d0u: goto label_2960d0;
        case 0x2960d4u: goto label_2960d4;
        case 0x2960d8u: goto label_2960d8;
        case 0x2960dcu: goto label_2960dc;
        case 0x2960e0u: goto label_2960e0;
        case 0x2960e4u: goto label_2960e4;
        case 0x2960e8u: goto label_2960e8;
        case 0x2960ecu: goto label_2960ec;
        default: break;
    }

    ctx->pc = 0x2960c8u;

label_2960c8:
    // 0x2960c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2960c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2960cc:
    // 0x2960cc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2960ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2960d0:
    // 0x2960d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2960d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2960d4:
    // 0x2960d4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2960d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2960d8:
    // 0x2960d8: 0x40f809  jalr        $v0
label_2960dc:
    if (ctx->pc == 0x2960DCu) {
        ctx->pc = 0x2960E0u;
        goto label_2960e0;
    }
    ctx->pc = 0x2960D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2960E0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2960E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2960E0u; }
            if (ctx->pc != 0x2960E0u) { return; }
        }
        }
    }
    ctx->pc = 0x2960E0u;
label_2960e0:
    // 0x2960e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2960e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2960e4:
    // 0x2960e4: 0x3e00008  jr          $ra
label_2960e8:
    if (ctx->pc == 0x2960E8u) {
        ctx->pc = 0x2960E8u;
            // 0x2960e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2960ECu;
        goto label_2960ec;
    }
    ctx->pc = 0x2960E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2960E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2960E4u;
            // 0x2960e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2960ECu;
label_2960ec:
    // 0x2960ec: 0x0  nop
    ctx->pc = 0x2960ecu;
    // NOP
    ctx->pc = 0x2960f0u;
}
