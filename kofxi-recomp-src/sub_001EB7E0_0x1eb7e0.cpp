#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EB7E0
// Address: 0x1eb7e0 - 0x1eb818
void sub_001EB7E0_0x1eb7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EB7E0_0x1eb7e0");
#endif

    switch (ctx->pc) {
        case 0x1eb7e0u: goto label_1eb7e0;
        case 0x1eb7e4u: goto label_1eb7e4;
        case 0x1eb7e8u: goto label_1eb7e8;
        case 0x1eb7ecu: goto label_1eb7ec;
        case 0x1eb7f0u: goto label_1eb7f0;
        case 0x1eb7f4u: goto label_1eb7f4;
        case 0x1eb7f8u: goto label_1eb7f8;
        case 0x1eb7fcu: goto label_1eb7fc;
        case 0x1eb800u: goto label_1eb800;
        case 0x1eb804u: goto label_1eb804;
        case 0x1eb808u: goto label_1eb808;
        case 0x1eb80cu: goto label_1eb80c;
        case 0x1eb810u: goto label_1eb810;
        case 0x1eb814u: goto label_1eb814;
        default: break;
    }

    ctx->pc = 0x1eb7e0u;

label_1eb7e0:
    // 0x1eb7e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eb7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1eb7e4:
    // 0x1eb7e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eb7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1eb7e8:
    // 0x1eb7e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1eb7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1eb7ec:
    // 0x1eb7ec: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1eb7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1eb7f0:
    // 0x1eb7f0: 0x40f809  jalr        $v0
label_1eb7f4:
    if (ctx->pc == 0x1EB7F4u) {
        ctx->pc = 0x1EB7F8u;
        goto label_1eb7f8;
    }
    ctx->pc = 0x1EB7F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EB7F8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EB7F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EB7F8u; }
            if (ctx->pc != 0x1EB7F8u) { return; }
        }
        }
    }
    ctx->pc = 0x1EB7F8u;
label_1eb7f8:
    // 0x1eb7f8: 0x3c0301c0  lui         $v1, 0x1C0
    ctx->pc = 0x1eb7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)448 << 16));
label_1eb7fc:
    // 0x1eb7fc: 0x8c643cb4  lw          $a0, 0x3CB4($v1)
    ctx->pc = 0x1eb7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15540)));
label_1eb800:
    // 0x1eb800: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eb800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1eb804:
    // 0x1eb804: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x1eb804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
label_1eb808:
    // 0x1eb808: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1eb808u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1eb80c:
    // 0x1eb80c: 0x3e00008  jr          $ra
label_1eb810:
    if (ctx->pc == 0x1EB810u) {
        ctx->pc = 0x1EB810u;
            // 0x1eb810: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1EB814u;
        goto label_1eb814;
    }
    ctx->pc = 0x1EB80Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB80Cu;
            // 0x1eb810: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EB814u;
label_1eb814:
    // 0x1eb814: 0x0  nop
    ctx->pc = 0x1eb814u;
    // NOP
    ctx->pc = 0x1eb818u;
}
