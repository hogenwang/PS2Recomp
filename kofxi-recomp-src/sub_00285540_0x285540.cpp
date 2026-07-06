#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00285540
// Address: 0x285540 - 0x285560
void sub_00285540_0x285540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285540_0x285540");
#endif

    switch (ctx->pc) {
        case 0x285554u: goto label_285554;
        default: break;
    }

    ctx->pc = 0x285540u;

    // 0x285540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x285540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x285544: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x285544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x285548: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x285548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28554c: 0xc0a1558  jal         func_285560
    ctx->pc = 0x28554Cu;
    SET_GPR_U32(ctx, 31, 0x285554u);
    ctx->pc = 0x285550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28554Cu;
            // 0x285550: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285560u;
    if (runtime->hasFunction(0x285560u)) {
        auto targetFn = runtime->lookupFunction(0x285560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285554u; }
        if (ctx->pc != 0x285554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285560_0x285560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285554u; }
        if (ctx->pc != 0x285554u) { return; }
    }
    ctx->pc = 0x285554u;
label_285554:
    // 0x285554: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x285554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285558: 0x3e00008  jr          $ra
    ctx->pc = 0x285558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28555Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285558u;
            // 0x28555c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x285560u;
    ctx->pc = 0x285560u;
}
