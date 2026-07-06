#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00205800
// Address: 0x205800 - 0x205860
void sub_00205800_0x205800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205800_0x205800");
#endif

    switch (ctx->pc) {
        case 0x205830u: goto label_205830;
        case 0x205848u: goto label_205848;
        default: break;
    }

    ctx->pc = 0x205800u;

    // 0x205800: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x205800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x205804: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x205804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x205808: 0x27a6003d  addiu       $a2, $sp, 0x3D
    ctx->pc = 0x205808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 61));
    // 0x20580c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20580cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x205810: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x205810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x205814: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x205814u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205818: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x205818u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20581c: 0x27a4003f  addiu       $a0, $sp, 0x3F
    ctx->pc = 0x20581cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 63));
    // 0x205820: 0x27a5003e  addiu       $a1, $sp, 0x3E
    ctx->pc = 0x205820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 62));
    // 0x205824: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x205824u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205828: 0xc080e78  jal         func_2039E0
    ctx->pc = 0x205828u;
    SET_GPR_U32(ctx, 31, 0x205830u);
    ctx->pc = 0x20582Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205828u;
            // 0x20582c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2039E0u;
    if (runtime->hasFunction(0x2039E0u)) {
        auto targetFn = runtime->lookupFunction(0x2039E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205830u; }
        if (ctx->pc != 0x205830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002039E0_0x2039e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205830u; }
        if (ctx->pc != 0x205830u) { return; }
    }
    ctx->pc = 0x205830u;
label_205830:
    // 0x205830: 0x93a4003f  lbu         $a0, 0x3F($sp)
    ctx->pc = 0x205830u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 63)));
    // 0x205834: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x205834u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205838: 0x93a5003e  lbu         $a1, 0x3E($sp)
    ctx->pc = 0x205838u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 62)));
    // 0x20583c: 0x93a6003d  lbu         $a2, 0x3D($sp)
    ctx->pc = 0x20583cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 61)));
    // 0x205840: 0xc080ee8  jal         func_203BA0
    ctx->pc = 0x205840u;
    SET_GPR_U32(ctx, 31, 0x205848u);
    ctx->pc = 0x205844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205840u;
            // 0x205844: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x203BA0u;
    if (runtime->hasFunction(0x203BA0u)) {
        auto targetFn = runtime->lookupFunction(0x203BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205848u; }
        if (ctx->pc != 0x205848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00203BA0_0x203ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205848u; }
        if (ctx->pc != 0x205848u) { return; }
    }
    ctx->pc = 0x205848u;
label_205848:
    // 0x205848: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x205848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20584c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20584cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x205850: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x205850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205854: 0x3e00008  jr          $ra
    ctx->pc = 0x205854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205854u;
            // 0x205858: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20585Cu;
    // 0x20585c: 0x0  nop
    ctx->pc = 0x20585cu;
    // NOP
    ctx->pc = 0x205860u;
}
