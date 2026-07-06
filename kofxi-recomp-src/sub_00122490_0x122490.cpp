#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00122490
// Address: 0x122490 - 0x1224c0
void sub_00122490_0x122490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122490_0x122490");
#endif

    switch (ctx->pc) {
        case 0x1224b0u: goto label_1224b0;
        default: break;
    }

    ctx->pc = 0x122490u;

    // 0x122490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x122490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x122494: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x122494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x122498: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x122498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12249c: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x12249cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x1224a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1224a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1224a4: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x1224a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x1224a8: 0xc0488e0  jal         func_122380
    ctx->pc = 0x1224A8u;
    SET_GPR_U32(ctx, 31, 0x1224B0u);
    ctx->pc = 0x1224ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1224A8u;
            // 0x1224ac: 0xafa7000c  sw          $a3, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122380u;
    if (runtime->hasFunction(0x122380u)) {
        auto targetFn = runtime->lookupFunction(0x122380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1224B0u; }
        if (ctx->pc != 0x1224B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122380_0x122380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1224B0u; }
        if (ctx->pc != 0x1224B0u) { return; }
    }
    ctx->pc = 0x1224B0u;
label_1224b0:
    // 0x1224b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1224b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1224b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1224B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1224B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1224B4u;
            // 0x1224b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1224BCu;
    // 0x1224bc: 0x0  nop
    ctx->pc = 0x1224bcu;
    // NOP
    ctx->pc = 0x1224c0u;
}
