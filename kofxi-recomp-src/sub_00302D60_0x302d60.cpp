#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00302D60
// Address: 0x302d60 - 0x302db0
void sub_00302D60_0x302d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302D60_0x302d60");
#endif

    switch (ctx->pc) {
        case 0x302da4u: goto label_302da4;
        default: break;
    }

    ctx->pc = 0x302d60u;

    // 0x302d60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x302d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x302d64: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x302d64u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x302d68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x302d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x302d6c: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x302d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x302d70: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x302d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
    // 0x302d74: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x302d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302d78: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x302d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x302d7c: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x302d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x302d80: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x302d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x302d84: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x302d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x302d88: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x302d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x302d8c: 0x2406a81f  addiu       $a2, $zero, -0x57E1
    ctx->pc = 0x302d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944799));
    // 0x302d90: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x302d90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x302d94: 0x240801e0  addiu       $t0, $zero, 0x1E0
    ctx->pc = 0x302d94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x302d98: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x302d98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302d9c: 0xc0c0ba8  jal         func_302EA0
    ctx->pc = 0x302D9Cu;
    SET_GPR_U32(ctx, 31, 0x302DA4u);
    ctx->pc = 0x302DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x302D9Cu;
            // 0x302da0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (runtime->hasFunction(0x302EA0u)) {
        auto targetFn = runtime->lookupFunction(0x302EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302DA4u; }
        if (ctx->pc != 0x302DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00302EA0_0x302ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x302DA4u; }
        if (ctx->pc != 0x302DA4u) { return; }
    }
    ctx->pc = 0x302DA4u;
label_302da4:
    // 0x302da4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x302da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x302da8: 0x3e00008  jr          $ra
    ctx->pc = 0x302DA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x302DA8u;
            // 0x302dac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x302DB0u;
    ctx->pc = 0x302db0u;
}
