#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00281168
// Address: 0x281168 - 0x281188
void sub_00281168_0x281168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281168_0x281168");
#endif

    switch (ctx->pc) {
        case 0x28117cu: goto label_28117c;
        default: break;
    }

    ctx->pc = 0x281168u;

    // 0x281168: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x281168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28116c: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x28116cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x281170: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x281170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x281174: 0xc09fdc0  jal         func_27F700
    ctx->pc = 0x281174u;
    SET_GPR_U32(ctx, 31, 0x28117Cu);
    ctx->pc = 0x281178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281174u;
            // 0x281178: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F700u;
    if (runtime->hasFunction(0x27F700u)) {
        auto targetFn = runtime->lookupFunction(0x27F700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28117Cu; }
        if (ctx->pc != 0x28117Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F700_0x27f700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28117Cu; }
        if (ctx->pc != 0x28117Cu) { return; }
    }
    ctx->pc = 0x28117Cu;
label_28117c:
    // 0x28117c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28117cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281180: 0x3e00008  jr          $ra
    ctx->pc = 0x281180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281180u;
            // 0x281184: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x281188u;
    ctx->pc = 0x281188u;
}
