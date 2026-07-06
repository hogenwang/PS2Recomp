#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002944F0
// Address: 0x2944f0 - 0x294520
void sub_002944F0_0x2944f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002944F0_0x2944f0");
#endif

    switch (ctx->pc) {
        case 0x2944f0u: goto label_2944f0;
        case 0x2944f4u: goto label_2944f4;
        case 0x2944f8u: goto label_2944f8;
        case 0x2944fcu: goto label_2944fc;
        case 0x294500u: goto label_294500;
        case 0x294504u: goto label_294504;
        case 0x294508u: goto label_294508;
        case 0x29450cu: goto label_29450c;
        case 0x294510u: goto label_294510;
        case 0x294514u: goto label_294514;
        case 0x294518u: goto label_294518;
        case 0x29451cu: goto label_29451c;
        default: break;
    }

    ctx->pc = 0x2944f0u;

label_2944f0:
    // 0x2944f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2944f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2944f4:
    // 0x2944f4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2944f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
label_2944f8:
    // 0x2944f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2944f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2944fc:
    // 0x2944fc: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2944fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_294500:
    // 0x294500: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x294500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_294504:
    // 0x294504: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x294504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_294508:
    // 0x294508: 0x40f809  jalr        $v0
label_29450c:
    if (ctx->pc == 0x29450Cu) {
        ctx->pc = 0x29450Cu;
            // 0x29450c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->pc = 0x294510u;
        goto label_294510;
    }
    ctx->pc = 0x294508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x294510u);
        ctx->pc = 0x29450Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294508u;
            // 0x29450c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x294510u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x294510u; }
            if (ctx->pc != 0x294510u) { return; }
        }
        }
    }
    ctx->pc = 0x294510u;
label_294510:
    // 0x294510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x294510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_294514:
    // 0x294514: 0x3e00008  jr          $ra
label_294518:
    if (ctx->pc == 0x294518u) {
        ctx->pc = 0x294518u;
            // 0x294518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x29451Cu;
        goto label_29451c;
    }
    ctx->pc = 0x294514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294514u;
            // 0x294518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29451Cu;
label_29451c:
    // 0x29451c: 0x0  nop
    ctx->pc = 0x29451cu;
    // NOP
    ctx->pc = 0x294520u;
}
