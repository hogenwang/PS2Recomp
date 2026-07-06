#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D0280
// Address: 0x1d0280 - 0x1d02b0
void sub_001D0280_0x1d0280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0280_0x1d0280");
#endif

    switch (ctx->pc) {
        case 0x1d0280u: goto label_1d0280;
        case 0x1d0284u: goto label_1d0284;
        case 0x1d0288u: goto label_1d0288;
        case 0x1d028cu: goto label_1d028c;
        case 0x1d0290u: goto label_1d0290;
        case 0x1d0294u: goto label_1d0294;
        case 0x1d0298u: goto label_1d0298;
        case 0x1d029cu: goto label_1d029c;
        case 0x1d02a0u: goto label_1d02a0;
        case 0x1d02a4u: goto label_1d02a4;
        case 0x1d02a8u: goto label_1d02a8;
        case 0x1d02acu: goto label_1d02ac;
        default: break;
    }

    ctx->pc = 0x1d0280u;

label_1d0280:
    // 0x1d0280: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1d0280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_1d0284:
    // 0x1d0284: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0284u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d0288:
    // 0x1d0288: 0x8c63e678  lw          $v1, -0x1988($v1)
    ctx->pc = 0x1d0288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960760)));
label_1d028c:
    // 0x1d028c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d028cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0290:
    // 0x1d0290: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1d0294:
    if (ctx->pc == 0x1D0294u) {
        ctx->pc = 0x1D0294u;
            // 0x1d0294: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1D0298u;
        goto label_1d0298;
    }
    ctx->pc = 0x1D0290u;
    {
        const bool branch_taken_0x1d0290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0290u;
            // 0x1d0294: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0290) {
            ctx->pc = 0x1D02A0u;
            goto label_1d02a0;
        }
    }
    ctx->pc = 0x1D0298u;
label_1d0298:
    // 0x1d0298: 0x60f809  jalr        $v1
label_1d029c:
    if (ctx->pc == 0x1D029Cu) {
        ctx->pc = 0x1D02A0u;
        goto label_1d02a0;
    }
    ctx->pc = 0x1D0298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D02A0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D02A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D02A0u; }
            if (ctx->pc != 0x1D02A0u) { return; }
        }
        }
    }
    ctx->pc = 0x1D02A0u;
label_1d02a0:
    // 0x1d02a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d02a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d02a4:
    // 0x1d02a4: 0x3e00008  jr          $ra
label_1d02a8:
    if (ctx->pc == 0x1D02A8u) {
        ctx->pc = 0x1D02A8u;
            // 0x1d02a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1D02ACu;
        goto label_1d02ac;
    }
    ctx->pc = 0x1D02A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D02A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D02A4u;
            // 0x1d02a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D02ACu;
label_1d02ac:
    // 0x1d02ac: 0x0  nop
    ctx->pc = 0x1d02acu;
    // NOP
    ctx->pc = 0x1d02b0u;
}
