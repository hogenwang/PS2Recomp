#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010E150
// Address: 0x10e150 - 0x10e178
void sub_0010E150_0x10e150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E150_0x10e150");
#endif

    switch (ctx->pc) {
        case 0x10e168u: goto label_10e168;
        default: break;
    }

    ctx->pc = 0x10e150u;

    // 0x10e150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10e150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10e154: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x10e154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10e158: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10e158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e15c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10e15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10e160: 0xc043424  jal         func_10D090
    ctx->pc = 0x10E160u;
    SET_GPR_U32(ctx, 31, 0x10E168u);
    ctx->pc = 0x10E164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10E160u;
            // 0x10e164: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D090u;
    if (runtime->hasFunction(0x10D090u)) {
        auto targetFn = runtime->lookupFunction(0x10D090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E168u; }
        if (ctx->pc != 0x10E168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D090_0x10d090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10E168u; }
        if (ctx->pc != 0x10E168u) { return; }
    }
    ctx->pc = 0x10E168u;
label_10e168:
    // 0x10e168: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10e168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e16c: 0x3e00008  jr          $ra
    ctx->pc = 0x10E16Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10E16Cu;
            // 0x10e170: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E174u;
    // 0x10e174: 0x0  nop
    ctx->pc = 0x10e174u;
    // NOP
    ctx->pc = 0x10e178u;
}
