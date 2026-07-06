#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00165930
// Address: 0x165930 - 0x165950
void sub_00165930_0x165930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165930_0x165930");
#endif

    switch (ctx->pc) {
        case 0x165940u: goto label_165940;
        default: break;
    }

    ctx->pc = 0x165930u;

    // 0x165930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x165930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x165934: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165938: 0xc0627b0  jal         func_189EC0
    ctx->pc = 0x165938u;
    SET_GPR_U32(ctx, 31, 0x165940u);
    ctx->pc = 0x16593Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165938u;
            // 0x16593c: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189EC0u;
    if (runtime->hasFunction(0x189EC0u)) {
        auto targetFn = runtime->lookupFunction(0x189EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165940u; }
        if (ctx->pc != 0x165940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189EC0_0x189ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165940u; }
        if (ctx->pc != 0x165940u) { return; }
    }
    ctx->pc = 0x165940u;
label_165940:
    // 0x165940: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x165940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165944: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x165944u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165948: 0x3e00008  jr          $ra
    ctx->pc = 0x165948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16594Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165948u;
            // 0x16594c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x165950u;
    ctx->pc = 0x165950u;
}
