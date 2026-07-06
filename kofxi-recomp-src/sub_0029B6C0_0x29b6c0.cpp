#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029B6C0
// Address: 0x29b6c0 - 0x29b720
void sub_0029B6C0_0x29b6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B6C0_0x29b6c0");
#endif

    switch (ctx->pc) {
        case 0x29b6e0u: goto label_29b6e0;
        case 0x29b6f4u: goto label_29b6f4;
        default: break;
    }

    ctx->pc = 0x29b6c0u;

    // 0x29b6c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29b6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29b6c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29b6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29b6c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29b6c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b6cc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29b6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29b6d0: 0x26110008  addiu       $s1, $s0, 0x8
    ctx->pc = 0x29b6d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x29b6d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29b6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29b6d8: 0xc0a0e94  jal         func_283A50
    ctx->pc = 0x29B6D8u;
    SET_GPR_U32(ctx, 31, 0x29B6E0u);
    ctx->pc = 0x29B6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B6D8u;
            // 0x29b6dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283A50u;
    if (runtime->hasFunction(0x283A50u)) {
        auto targetFn = runtime->lookupFunction(0x283A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B6E0u; }
        if (ctx->pc != 0x29B6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00283A50_0x283a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B6E0u; }
        if (ctx->pc != 0x29B6E0u) { return; }
    }
    ctx->pc = 0x29B6E0u;
label_29b6e0:
    // 0x29b6e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29b6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b6e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29b6e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b6e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29b6e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b6ec: 0xc0a0dce  jal         func_283738
    ctx->pc = 0x29B6ECu;
    SET_GPR_U32(ctx, 31, 0x29B6F4u);
    ctx->pc = 0x29B6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B6ECu;
            // 0x29b6f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283738u;
    if (runtime->hasFunction(0x283738u)) {
        auto targetFn = runtime->lookupFunction(0x283738u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B6F4u; }
        if (ctx->pc != 0x29B6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00283738_0x283738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B6F4u; }
        if (ctx->pc != 0x29B6F4u) { return; }
    }
    ctx->pc = 0x29B6F4u;
label_29b6f4:
    // 0x29b6f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29b6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29b6f8: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x29b6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x29b6fc: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x29b6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x29b700: 0x26040048  addiu       $a0, $s0, 0x48
    ctx->pc = 0x29b700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x29b704: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29b704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b708: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29b708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b70c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29b70cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b710: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x29b710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x29b714: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29b714u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b718: 0x8049cb6  j           func_1272D8
    ctx->pc = 0x29B718u;
    ctx->pc = 0x29B71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B718u;
            // 0x29b71c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001272D8_0x1272d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x29B720u;
    ctx->pc = 0x29b720u;
}
