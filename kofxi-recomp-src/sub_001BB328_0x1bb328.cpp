#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BB328
// Address: 0x1bb328 - 0x1bb368
void sub_001BB328_0x1bb328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB328_0x1bb328");
#endif

    switch (ctx->pc) {
        case 0x1bb330u: goto label_1bb330;
        case 0x1bb344u: goto label_1bb344;
        case 0x1bb34cu: goto label_1bb34c;
        case 0x1bb354u: goto label_1bb354;
        default: break;
    }

    ctx->pc = 0x1bb328u;

    // 0x1bb328: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BB330u;
label_1bb330:
    // 0x1bb330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bb330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb334: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bb334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bb338: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bb338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bb33c: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BB33Cu;
    SET_GPR_U32(ctx, 31, 0x1BB344u);
    ctx->pc = 0x1BB340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB33Cu;
            // 0x1bb340: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB344u; }
        if (ctx->pc != 0x1BB344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB344u; }
        if (ctx->pc != 0x1BB344u) { return; }
    }
    ctx->pc = 0x1BB344u;
label_1bb344:
    // 0x1bb344: 0xc06ecda  jal         func_1BB368
    ctx->pc = 0x1BB344u;
    SET_GPR_U32(ctx, 31, 0x1BB34Cu);
    ctx->pc = 0x1BB348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB344u;
            // 0x1bb348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB368u;
    if (runtime->hasFunction(0x1BB368u)) {
        auto targetFn = runtime->lookupFunction(0x1BB368u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB34Cu; }
        if (ctx->pc != 0x1BB34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB368_0x1bb368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB34Cu; }
        if (ctx->pc != 0x1BB34Cu) { return; }
    }
    ctx->pc = 0x1BB34Cu;
label_1bb34c:
    // 0x1bb34c: 0xc06b49c  jal         func_1AD270
    ctx->pc = 0x1BB34Cu;
    SET_GPR_U32(ctx, 31, 0x1BB354u);
    ctx->pc = 0x1BB350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB34Cu;
            // 0x1bb350: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB354u; }
        if (ctx->pc != 0x1BB354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD270_0x1ad270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB354u; }
        if (ctx->pc != 0x1BB354u) { return; }
    }
    ctx->pc = 0x1BB354u;
label_1bb354:
    // 0x1bb354: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bb354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bb358: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bb358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb35c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bb35cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb360: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB360u;
            // 0x1bb364: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BB368u;
    ctx->pc = 0x1bb368u;
}
