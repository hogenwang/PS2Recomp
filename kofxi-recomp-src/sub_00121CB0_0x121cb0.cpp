#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00121CB0
// Address: 0x121cb0 - 0x121cd0
void sub_00121CB0_0x121cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121CB0_0x121cb0");
#endif

    switch (ctx->pc) {
        case 0x121cc0u: goto label_121cc0;
        default: break;
    }

    ctx->pc = 0x121cb0u;

    // 0x121cb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x121cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x121cb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x121cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x121cb8: 0xc048734  jal         func_121CD0
    ctx->pc = 0x121CB8u;
    SET_GPR_U32(ctx, 31, 0x121CC0u);
    ctx->pc = 0x121CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x121CB8u;
            // 0x121cbc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121CD0u;
    if (runtime->hasFunction(0x121CD0u)) {
        auto targetFn = runtime->lookupFunction(0x121CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121CC0u; }
        if (ctx->pc != 0x121CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00121CD0_0x121cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121CC0u; }
        if (ctx->pc != 0x121CC0u) { return; }
    }
    ctx->pc = 0x121CC0u;
label_121cc0:
    // 0x121cc0: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x121cc0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121cc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x121cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x121cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x121CC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121CC8u;
            // 0x121ccc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x121CD0u;
    ctx->pc = 0x121cd0u;
}
