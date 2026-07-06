#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AF940
// Address: 0x1af940 - 0x1af978
void sub_001AF940_0x1af940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF940_0x1af940");
#endif

    switch (ctx->pc) {
        case 0x1af954u: goto label_1af954;
        case 0x1af95cu: goto label_1af95c;
        case 0x1af964u: goto label_1af964;
        default: break;
    }

    ctx->pc = 0x1af940u;

    // 0x1af940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1af940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1af944: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1af944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1af948: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1af948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1af94c: 0xc06c6ac  jal         func_1B1AB0
    ctx->pc = 0x1AF94Cu;
    SET_GPR_U32(ctx, 31, 0x1AF954u);
    ctx->pc = 0x1AF950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF94Cu;
            // 0x1af950: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AB0u;
    if (runtime->hasFunction(0x1B1AB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF954u; }
        if (ctx->pc != 0x1AF954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AB0_0x1b1ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF954u; }
        if (ctx->pc != 0x1AF954u) { return; }
    }
    ctx->pc = 0x1AF954u;
label_1af954:
    // 0x1af954: 0xc06be5e  jal         func_1AF978
    ctx->pc = 0x1AF954u;
    SET_GPR_U32(ctx, 31, 0x1AF95Cu);
    ctx->pc = 0x1AF958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF954u;
            // 0x1af958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF978u;
    if (runtime->hasFunction(0x1AF978u)) {
        auto targetFn = runtime->lookupFunction(0x1AF978u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF95Cu; }
        if (ctx->pc != 0x1AF95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF978_0x1af978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF95Cu; }
        if (ctx->pc != 0x1AF95Cu) { return; }
    }
    ctx->pc = 0x1AF95Cu;
label_1af95c:
    // 0x1af95c: 0xc06c6b2  jal         func_1B1AC8
    ctx->pc = 0x1AF95Cu;
    SET_GPR_U32(ctx, 31, 0x1AF964u);
    ctx->pc = 0x1AF960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF95Cu;
            // 0x1af960: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AC8u;
    if (runtime->hasFunction(0x1B1AC8u)) {
        auto targetFn = runtime->lookupFunction(0x1B1AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF964u; }
        if (ctx->pc != 0x1AF964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1AC8_0x1b1ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF964u; }
        if (ctx->pc != 0x1AF964u) { return; }
    }
    ctx->pc = 0x1AF964u;
label_1af964:
    // 0x1af964: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1af964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1af968: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1af968u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af96c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af96cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af970: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF970u;
            // 0x1af974: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF978u;
    ctx->pc = 0x1af978u;
}
