#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002625A8
// Address: 0x2625a8 - 0x2625d0
void sub_002625A8_0x2625a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002625A8_0x2625a8");
#endif

    switch (ctx->pc) {
        case 0x2625b8u: goto label_2625b8;
        default: break;
    }

    ctx->pc = 0x2625a8u;

    // 0x2625a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2625a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2625ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2625acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2625b0: 0xc0986b6  jal         func_261AD8
    ctx->pc = 0x2625B0u;
    SET_GPR_U32(ctx, 31, 0x2625B8u);
    ctx->pc = 0x261AD8u;
    if (runtime->hasFunction(0x261AD8u)) {
        auto targetFn = runtime->lookupFunction(0x261AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2625B8u; }
        if (ctx->pc != 0x2625B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261AD8_0x261ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2625B8u; }
        if (ctx->pc != 0x2625B8u) { return; }
    }
    ctx->pc = 0x2625B8u;
label_2625b8:
    // 0x2625b8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2625b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2625bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2625bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2625c0: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x2625c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2625c4: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x2625c4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2625c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2625C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2625CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2625C8u;
            // 0x2625cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2625D0u;
    ctx->pc = 0x2625d0u;
}
