#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00305010
// Address: 0x305010 - 0x305060
void sub_00305010_0x305010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305010_0x305010");
#endif

    switch (ctx->pc) {
        case 0x305034u: goto label_305034;
        default: break;
    }

    ctx->pc = 0x305010u;

    // 0x305010: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x305010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x305014: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x305014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x305018: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x305018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30501c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30501cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x305020: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x305020u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305024: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x305024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x305028: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x305028u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30502c: 0xc0c0dbc  jal         func_3036F0
    ctx->pc = 0x30502Cu;
    SET_GPR_U32(ctx, 31, 0x305034u);
    ctx->pc = 0x305030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30502Cu;
            // 0x305030: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3036F0u;
    if (runtime->hasFunction(0x3036F0u)) {
        auto targetFn = runtime->lookupFunction(0x3036F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305034u; }
        if (ctx->pc != 0x305034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003036F0_0x3036f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305034u; }
        if (ctx->pc != 0x305034u) { return; }
    }
    ctx->pc = 0x305034u;
label_305034:
    // 0x305034: 0xae510004  sw          $s1, 0x4($s2)
    ctx->pc = 0x305034u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
    // 0x305038: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x305038u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30503c: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x30503cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x305040: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x305040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x305044: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x305044u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x305048: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x305048u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30504c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30504cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x305050: 0x3e00008  jr          $ra
    ctx->pc = 0x305050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305050u;
            // 0x305054: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x305058u;
    // 0x305058: 0x0  nop
    ctx->pc = 0x305058u;
    // NOP
    // 0x30505c: 0x0  nop
    ctx->pc = 0x30505cu;
    // NOP
    ctx->pc = 0x305060u;
}
