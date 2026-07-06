#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002863A8
// Address: 0x2863a8 - 0x2863e0
void sub_002863A8_0x2863a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002863A8_0x2863a8");
#endif

    switch (ctx->pc) {
        case 0x2863d0u: goto label_2863d0;
        default: break;
    }

    ctx->pc = 0x2863a8u;

    // 0x2863a8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2863a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2863ac: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2863acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2863b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2863b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2863b4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2863b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2863b8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2863b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2863bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2863bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2863c0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2863c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2863c4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2863c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2863c8: 0xc0a1748  jal         func_285D20
    ctx->pc = 0x2863C8u;
    SET_GPR_U32(ctx, 31, 0x2863D0u);
    ctx->pc = 0x2863CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2863C8u;
            // 0x2863cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285D20u;
    if (runtime->hasFunction(0x285D20u)) {
        auto targetFn = runtime->lookupFunction(0x285D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2863D0u; }
        if (ctx->pc != 0x2863D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285D20_0x285d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2863D0u; }
        if (ctx->pc != 0x2863D0u) { return; }
    }
    ctx->pc = 0x2863D0u;
label_2863d0:
    // 0x2863d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2863d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2863d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2863D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2863D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2863D4u;
            // 0x2863d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2863DCu;
    // 0x2863dc: 0x0  nop
    ctx->pc = 0x2863dcu;
    // NOP
    ctx->pc = 0x2863e0u;
}
