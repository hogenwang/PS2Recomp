#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00294A58
// Address: 0x294a58 - 0x294a80
void sub_00294A58_0x294a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294A58_0x294a58");
#endif

    switch (ctx->pc) {
        case 0x294a6cu: goto label_294a6c;
        default: break;
    }

    ctx->pc = 0x294a58u;

    // 0x294a58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x294a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x294a5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x294a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x294a60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x294a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x294a64: 0xc0a3dd0  jal         func_28F740
    ctx->pc = 0x294A64u;
    SET_GPR_U32(ctx, 31, 0x294A6Cu);
    ctx->pc = 0x294A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294A64u;
            // 0x294a68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F740u;
    if (runtime->hasFunction(0x28F740u)) {
        auto targetFn = runtime->lookupFunction(0x28F740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294A6Cu; }
        if (ctx->pc != 0x294A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F740_0x28f740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294A6Cu; }
        if (ctx->pc != 0x294A6Cu) { return; }
    }
    ctx->pc = 0x294A6Cu;
label_294a6c:
    // 0x294a6c: 0xac500028  sw          $s0, 0x28($v0)
    ctx->pc = 0x294a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 16));
    // 0x294a70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x294a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294a74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x294a74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294a78: 0x3e00008  jr          $ra
    ctx->pc = 0x294A78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294A78u;
            // 0x294a7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x294A80u;
    ctx->pc = 0x294a80u;
}
