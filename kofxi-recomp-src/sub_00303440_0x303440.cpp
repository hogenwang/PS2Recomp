#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00303440
// Address: 0x303440 - 0x303480
void sub_00303440_0x303440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303440_0x303440");
#endif

    switch (ctx->pc) {
        case 0x303464u: goto label_303464;
        case 0x30346cu: goto label_30346c;
        default: break;
    }

    ctx->pc = 0x303440u;

    // 0x303440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x303440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x303444: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x303444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x303448: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x303448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30344c: 0x90439780  lbu         $v1, -0x6880($v0)
    ctx->pc = 0x30344cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x303450: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x303450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x303454: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x303454u;
    {
        const bool branch_taken_0x303454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x303454) {
            ctx->pc = 0x303464u;
            goto label_303464;
        }
    }
    ctx->pc = 0x30345Cu;
    // 0x30345c: 0xc0d071c  jal         func_341C70
    ctx->pc = 0x30345Cu;
    SET_GPR_U32(ctx, 31, 0x303464u);
    ctx->pc = 0x341C70u;
    if (runtime->hasFunction(0x341C70u)) {
        auto targetFn = runtime->lookupFunction(0x341C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303464u; }
        if (ctx->pc != 0x303464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00341C70_0x341c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303464u; }
        if (ctx->pc != 0x303464u) { return; }
    }
    ctx->pc = 0x303464u;
label_303464:
    // 0x303464: 0xc0c0c98  jal         func_303260
    ctx->pc = 0x303464u;
    SET_GPR_U32(ctx, 31, 0x30346Cu);
    ctx->pc = 0x303260u;
    if (runtime->hasFunction(0x303260u)) {
        auto targetFn = runtime->lookupFunction(0x303260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30346Cu; }
        if (ctx->pc != 0x30346Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00303260_0x303260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30346Cu; }
        if (ctx->pc != 0x30346Cu) { return; }
    }
    ctx->pc = 0x30346Cu;
label_30346c:
    // 0x30346c: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x30346cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x303470: 0xac600c68  sw          $zero, 0xC68($v1)
    ctx->pc = 0x303470u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3176), GPR_U32(ctx, 0));
    // 0x303474: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x303474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x303478: 0x3e00008  jr          $ra
    ctx->pc = 0x303478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30347Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303478u;
            // 0x30347c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303480u;
    ctx->pc = 0x303480u;
}
