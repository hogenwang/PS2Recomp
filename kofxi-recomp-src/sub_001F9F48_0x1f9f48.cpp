#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F9F48
// Address: 0x1f9f48 - 0x1f9fb8
void sub_001F9F48_0x1f9f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9F48_0x1f9f48");
#endif

    switch (ctx->pc) {
        case 0x1f9f64u: goto label_1f9f64;
        case 0x1f9f6cu: goto label_1f9f6c;
        default: break;
    }

    ctx->pc = 0x1f9f48u;

    // 0x1f9f48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f9f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f9f4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f9f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9f50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f9f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f9f54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f9f54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9f58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f9f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f9f5c: 0xc0758fa  jal         func_1D63E8
    ctx->pc = 0x1F9F5Cu;
    SET_GPR_U32(ctx, 31, 0x1F9F64u);
    ctx->pc = 0x1F9F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9F5Cu;
            // 0x1f9f60: 0x24060376  addiu       $a2, $zero, 0x376 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 886));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D63E8u;
    if (runtime->hasFunction(0x1D63E8u)) {
        auto targetFn = runtime->lookupFunction(0x1D63E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9F64u; }
        if (ctx->pc != 0x1F9F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D63E8_0x1d63e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9F64u; }
        if (ctx->pc != 0x1F9F64u) { return; }
    }
    ctx->pc = 0x1F9F64u;
label_1f9f64:
    // 0x1f9f64: 0xc07e7ee  jal         func_1F9FB8
    ctx->pc = 0x1F9F64u;
    SET_GPR_U32(ctx, 31, 0x1F9F6Cu);
    ctx->pc = 0x1F9F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9F64u;
            // 0x1f9f68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9FB8u;
    if (runtime->hasFunction(0x1F9FB8u)) {
        auto targetFn = runtime->lookupFunction(0x1F9FB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9F6Cu; }
        if (ctx->pc != 0x1F9F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F9FB8_0x1f9fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9F6Cu; }
        if (ctx->pc != 0x1F9F6Cu) { return; }
    }
    ctx->pc = 0x1F9F6Cu;
label_1f9f6c:
    // 0x1f9f6c: 0xae000da8  sw          $zero, 0xDA8($s0)
    ctx->pc = 0x1f9f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3496), GPR_U32(ctx, 0));
    // 0x1f9f70: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f9f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f9f74: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x1f9f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1f9f78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f9f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9f7c: 0xae020dd4  sw          $v0, 0xDD4($s0)
    ctx->pc = 0x1f9f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3540), GPR_U32(ctx, 2));
    // 0x1f9f80: 0xae030dc8  sw          $v1, 0xDC8($s0)
    ctx->pc = 0x1f9f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3528), GPR_U32(ctx, 3));
    // 0x1f9f84: 0xae040dcc  sw          $a0, 0xDCC($s0)
    ctx->pc = 0x1f9f84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3532), GPR_U32(ctx, 4));
    // 0x1f9f88: 0xae000dac  sw          $zero, 0xDAC($s0)
    ctx->pc = 0x1f9f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3500), GPR_U32(ctx, 0));
    // 0x1f9f8c: 0xae030db0  sw          $v1, 0xDB0($s0)
    ctx->pc = 0x1f9f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3504), GPR_U32(ctx, 3));
    // 0x1f9f90: 0xae040db4  sw          $a0, 0xDB4($s0)
    ctx->pc = 0x1f9f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3508), GPR_U32(ctx, 4));
    // 0x1f9f94: 0xae020db8  sw          $v0, 0xDB8($s0)
    ctx->pc = 0x1f9f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3512), GPR_U32(ctx, 2));
    // 0x1f9f98: 0xae020dbc  sw          $v0, 0xDBC($s0)
    ctx->pc = 0x1f9f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3516), GPR_U32(ctx, 2));
    // 0x1f9f9c: 0xae000dc0  sw          $zero, 0xDC0($s0)
    ctx->pc = 0x1f9f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3520), GPR_U32(ctx, 0));
    // 0x1f9fa0: 0xae000dc4  sw          $zero, 0xDC4($s0)
    ctx->pc = 0x1f9fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3524), GPR_U32(ctx, 0));
    // 0x1f9fa4: 0xae000dd0  sw          $zero, 0xDD0($s0)
    ctx->pc = 0x1f9fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3536), GPR_U32(ctx, 0));
    // 0x1f9fa8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f9fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f9fac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f9facu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9FB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9FB0u;
            // 0x1f9fb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F9FB8u;
    ctx->pc = 0x1f9fb8u;
}
