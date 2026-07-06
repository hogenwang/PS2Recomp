#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002018F8
// Address: 0x2018f8 - 0x201938
void sub_002018F8_0x2018f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002018F8_0x2018f8");
#endif

    switch (ctx->pc) {
        case 0x2018f8u: goto label_2018f8;
        case 0x2018fcu: goto label_2018fc;
        case 0x201900u: goto label_201900;
        case 0x201904u: goto label_201904;
        case 0x201908u: goto label_201908;
        case 0x20190cu: goto label_20190c;
        case 0x201910u: goto label_201910;
        case 0x201914u: goto label_201914;
        case 0x201918u: goto label_201918;
        case 0x20191cu: goto label_20191c;
        case 0x201920u: goto label_201920;
        case 0x201924u: goto label_201924;
        case 0x201928u: goto label_201928;
        case 0x20192cu: goto label_20192c;
        case 0x201930u: goto label_201930;
        case 0x201934u: goto label_201934;
        default: break;
    }

    ctx->pc = 0x2018f8u;

label_2018f8:
    // 0x2018f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2018f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2018fc:
    // 0x2018fc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2018fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_201900:
    // 0x201900: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_201904:
    // 0x201904: 0x24421900  addiu       $v0, $v0, 0x1900
    ctx->pc = 0x201904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6400));
label_201908:
    // 0x201908: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x201908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20190c:
    // 0x20190c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x20190cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_201910:
    // 0x201910: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x201910u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_201914:
    // 0x201914: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x201914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_201918:
    // 0x201918: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x201918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_20191c:
    // 0x20191c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_201920:
    if (ctx->pc == 0x201920u) {
        ctx->pc = 0x201920u;
            // 0x201920: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x201924u;
        goto label_201924;
    }
    ctx->pc = 0x20191Cu;
    {
        const bool branch_taken_0x20191c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x201920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20191Cu;
            // 0x201920: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20191c) {
            ctx->pc = 0x20192Cu;
            goto label_20192c;
        }
    }
    ctx->pc = 0x201924u;
label_201924:
    // 0x201924: 0xc0f809  jalr        $a2
label_201928:
    if (ctx->pc == 0x201928u) {
        ctx->pc = 0x20192Cu;
        goto label_20192c;
    }
    ctx->pc = 0x201924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x20192Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x20192Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20192Cu; }
            if (ctx->pc != 0x20192Cu) { return; }
        }
        }
    }
    ctx->pc = 0x20192Cu;
label_20192c:
    // 0x20192c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20192cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_201930:
    // 0x201930: 0x3e00008  jr          $ra
label_201934:
    if (ctx->pc == 0x201934u) {
        ctx->pc = 0x201934u;
            // 0x201934: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x201938u;
        goto label_fallthrough_0x201930;
    }
    ctx->pc = 0x201930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201930u;
            // 0x201934: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x201930:
    ctx->pc = 0x201938u;
    ctx->pc = 0x201938u;
}
