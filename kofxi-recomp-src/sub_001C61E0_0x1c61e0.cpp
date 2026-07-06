#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C61E0
// Address: 0x1c61e0 - 0x1c6220
void sub_001C61E0_0x1c61e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C61E0_0x1c61e0");
#endif

    switch (ctx->pc) {
        case 0x1c6200u: goto label_1c6200;
        default: break;
    }

    ctx->pc = 0x1c61e0u;

    // 0x1c61e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c61e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c61e4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C61E4u;
    {
        const bool branch_taken_0x1c61e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C61E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C61E4u;
            // 0x1c61e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61e4) {
            ctx->pc = 0x1C6200u;
            goto label_1c6200;
        }
    }
    ctx->pc = 0x1C61ECu;
    // 0x1c61ec: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c61ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c61f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c61f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c61f4: 0x2484a698  addiu       $a0, $a0, -0x5968
    ctx->pc = 0x1c61f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944408));
    // 0x1c61f8: 0x8071ac8  j           func_1C6B20
    ctx->pc = 0x1C61F8u;
    ctx->pc = 0x1C61FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C61F8u;
            // 0x1c61fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6B20u;
    if (runtime->hasFunction(0x1C6B20u)) {
        auto targetFn = runtime->lookupFunction(0x1C6B20u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C6B20_0x1c6b20(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C6200u;
label_1c6200:
    // 0x1c6200: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x1c6200u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x1c6204: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6204u;
    {
        const bool branch_taken_0x1c6204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6204u;
            // 0x1c6208: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6204) {
            ctx->pc = 0x1C6218u;
            goto label_1c6218;
        }
    }
    ctx->pc = 0x1C620Cu;
    // 0x1c620c: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1c620cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1c6210: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1c6210u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1c6214: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1c6214u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
label_1c6218:
    // 0x1c6218: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C621Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6218u;
            // 0x1c621c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C6220u;
    ctx->pc = 0x1c6220u;
}
