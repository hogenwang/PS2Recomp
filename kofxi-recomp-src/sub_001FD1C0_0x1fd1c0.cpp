#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FD1C0
// Address: 0x1fd1c0 - 0x1fd1f8
void sub_001FD1C0_0x1fd1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD1C0_0x1fd1c0");
#endif

    switch (ctx->pc) {
        case 0x1fd1e4u: goto label_1fd1e4;
        default: break;
    }

    ctx->pc = 0x1fd1c0u;

    // 0x1fd1c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fd1c4: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x1fd1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x1fd1c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fd1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fd1cc: 0x24509b88  addiu       $s0, $v0, -0x6478
    ctx->pc = 0x1fd1ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941576));
    // 0x1fd1d0: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x1fd1d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fd1d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FD1D4u;
    {
        const bool branch_taken_0x1fd1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD1D4u;
            // 0x1fd1d8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd1d4) {
            ctx->pc = 0x1FD1E8u;
            goto label_1fd1e8;
        }
    }
    ctx->pc = 0x1FD1DCu;
    // 0x1fd1dc: 0xc07f446  jal         func_1FD118
    ctx->pc = 0x1FD1DCu;
    SET_GPR_U32(ctx, 31, 0x1FD1E4u);
    ctx->pc = 0x1FD118u;
    if (runtime->hasFunction(0x1FD118u)) {
        auto targetFn = runtime->lookupFunction(0x1FD118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD1E4u; }
        if (ctx->pc != 0x1FD1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD118_0x1fd118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD1E4u; }
        if (ctx->pc != 0x1FD1E4u) { return; }
    }
    ctx->pc = 0x1FD1E4u;
label_1fd1e4:
    // 0x1fd1e4: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x1fd1e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_1fd1e8:
    // 0x1fd1e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fd1e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd1ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1fd1ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fd1f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD1F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD1F0u;
            // 0x1fd1f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FD1F8u;
    ctx->pc = 0x1fd1f8u;
}
