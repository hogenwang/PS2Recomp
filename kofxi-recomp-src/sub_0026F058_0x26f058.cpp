#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026F058
// Address: 0x26f058 - 0x26f0bc
void sub_0026F058_0x26f058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026F058_0x26f058");
#endif

    switch (ctx->pc) {
        case 0x26f078u: goto label_26f078;
        case 0x26f098u: goto label_26f098;
        case 0x26f0b0u: goto label_26f0b0;
        default: break;
    }

    ctx->pc = 0x26f058u;

    // 0x26f058: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x26f058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x26f05c: 0xffb50190  sd          $s5, 0x190($sp)
    ctx->pc = 0x26f05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 21));
    // 0x26f060: 0xffb40180  sd          $s4, 0x180($sp)
    ctx->pc = 0x26f060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 20));
    // 0x26f064: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x26f064u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
    // 0x26f068: 0xffb20160  sd          $s2, 0x160($sp)
    ctx->pc = 0x26f068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 18));
    // 0x26f06c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x26f06cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f070: 0xffb00140  sd          $s0, 0x140($sp)
    ctx->pc = 0x26f070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 16));
    // 0x26f074: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26f074u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26f078:
    // 0x26f078: 0xffb30170  sd          $s3, 0x170($sp)
    ctx->pc = 0x26f078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 19));
    // 0x26f07c: 0x26b09570  addiu       $s0, $s5, -0x6A90
    ctx->pc = 0x26f07cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294940016));
    // 0x26f080: 0xffb10150  sd          $s1, 0x150($sp)
    ctx->pc = 0x26f080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 17));
    // 0x26f084: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x26f084u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f088: 0xffbf01a0  sd          $ra, 0x1A0($sp)
    ctx->pc = 0x26f088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 31));
    // 0x26f08c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26f08cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f090: 0xc099d10  jal         func_267440
    ctx->pc = 0x26F090u;
    SET_GPR_U32(ctx, 31, 0x26F098u);
    ctx->pc = 0x26F094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F090u;
            // 0x26f094: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x267440u;
    if (runtime->hasFunction(0x267440u)) {
        auto targetFn = runtime->lookupFunction(0x267440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F098u; }
        if (ctx->pc != 0x26F098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00267440_0x267440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F098u; }
        if (ctx->pc != 0x26F098u) { return; }
    }
    ctx->pc = 0x26F098u;
label_26f098:
    // 0x26f098: 0xae620050  sw          $v0, 0x50($s3)
    ctx->pc = 0x26f098u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 2));
    // 0x26f09c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26f09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f0a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26f0a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f0a4: 0xae820050  sw          $v0, 0x50($s4)
    ctx->pc = 0x26f0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
    // 0x26f0a8: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x26F0A8u;
    SET_GPR_U32(ctx, 31, 0x26F0B0u);
    ctx->pc = 0x26F0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F0A8u;
            // 0x26f0ac: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F0B0u; }
        if (ctx->pc != 0x26F0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F0B0u; }
        if (ctx->pc != 0x26F0B0u) { return; }
    }
    ctx->pc = 0x26F0B0u;
label_26f0b0:
    // 0x26f0b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26f0b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f0b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26f0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f0b8: 0xc04a966  jal         func_12A598
    ctx->pc = 0x26F0B8u;
    SET_GPR_U32(ctx, 31, 0x26F0C0u);
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F0C0u; }
        if (ctx->pc != 0x26F0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F0C0u; }
        if (ctx->pc != 0x26F0C0u) { return; }
    }
    ctx->pc = 0x26F0C0u;
    ctx->pc = 0x26f0bcu;
}
