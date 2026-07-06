#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AF718
// Address: 0x2af718 - 0x2af768
void sub_002AF718_0x2af718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF718_0x2af718");
#endif

    switch (ctx->pc) {
        case 0x2af728u: goto label_2af728;
        case 0x2af730u: goto label_2af730;
        case 0x2af738u: goto label_2af738;
        case 0x2af740u: goto label_2af740;
        case 0x2af748u: goto label_2af748;
        case 0x2af750u: goto label_2af750;
        case 0x2af758u: goto label_2af758;
        default: break;
    }

    ctx->pc = 0x2af718u;

    // 0x2af718: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2af718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2af71c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2af71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2af720: 0xc0ac610  jal         func_2B1840
    ctx->pc = 0x2AF720u;
    SET_GPR_U32(ctx, 31, 0x2AF728u);
    ctx->pc = 0x2B1840u;
    if (runtime->hasFunction(0x2B1840u)) {
        auto targetFn = runtime->lookupFunction(0x2B1840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF728u; }
        if (ctx->pc != 0x2AF728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B1840_0x2b1840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF728u; }
        if (ctx->pc != 0x2AF728u) { return; }
    }
    ctx->pc = 0x2AF728u;
label_2af728:
    // 0x2af728: 0xc0abdda  jal         func_2AF768
    ctx->pc = 0x2AF728u;
    SET_GPR_U32(ctx, 31, 0x2AF730u);
    ctx->pc = 0x2AF768u;
    if (runtime->hasFunction(0x2AF768u)) {
        auto targetFn = runtime->lookupFunction(0x2AF768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF730u; }
        if (ctx->pc != 0x2AF730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AF768_0x2af768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF730u; }
        if (ctx->pc != 0x2AF730u) { return; }
    }
    ctx->pc = 0x2AF730u;
label_2af730:
    // 0x2af730: 0xc0a373a  jal         func_28DCE8
    ctx->pc = 0x2AF730u;
    SET_GPR_U32(ctx, 31, 0x2AF738u);
    ctx->pc = 0x28DCE8u;
    if (runtime->hasFunction(0x28DCE8u)) {
        auto targetFn = runtime->lookupFunction(0x28DCE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF738u; }
        if (ctx->pc != 0x2AF738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028DCE8_0x28dce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF738u; }
        if (ctx->pc != 0x2AF738u) { return; }
    }
    ctx->pc = 0x2AF738u;
label_2af738:
    // 0x2af738: 0xc0a2d52  jal         func_28B548
    ctx->pc = 0x2AF738u;
    SET_GPR_U32(ctx, 31, 0x2AF740u);
    ctx->pc = 0x28B548u;
    if (runtime->hasFunction(0x28B548u)) {
        auto targetFn = runtime->lookupFunction(0x28B548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF740u; }
        if (ctx->pc != 0x2AF740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B548_0x28b548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF740u; }
        if (ctx->pc != 0x2AF740u) { return; }
    }
    ctx->pc = 0x2AF740u;
label_2af740:
    // 0x2af740: 0xc0aa142  jal         func_2A8508
    ctx->pc = 0x2AF740u;
    SET_GPR_U32(ctx, 31, 0x2AF748u);
    ctx->pc = 0x2AF744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF740u;
            // 0x2af744: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A8508u;
    if (runtime->hasFunction(0x2A8508u)) {
        auto targetFn = runtime->lookupFunction(0x2A8508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF748u; }
        if (ctx->pc != 0x2AF748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A8508_0x2a8508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF748u; }
        if (ctx->pc != 0x2AF748u) { return; }
    }
    ctx->pc = 0x2AF748u;
label_2af748:
    // 0x2af748: 0xc0a8cda  jal         func_2A3368
    ctx->pc = 0x2AF748u;
    SET_GPR_U32(ctx, 31, 0x2AF750u);
    ctx->pc = 0x2AF74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF748u;
            // 0x2af74c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3368u;
    if (runtime->hasFunction(0x2A3368u)) {
        auto targetFn = runtime->lookupFunction(0x2A3368u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF750u; }
        if (ctx->pc != 0x2AF750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3368_0x2a3368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF750u; }
        if (ctx->pc != 0x2AF750u) { return; }
    }
    ctx->pc = 0x2AF750u;
label_2af750:
    // 0x2af750: 0xc0af700  jal         func_2BDC00
    ctx->pc = 0x2AF750u;
    SET_GPR_U32(ctx, 31, 0x2AF758u);
    ctx->pc = 0x2BDC00u;
    if (runtime->hasFunction(0x2BDC00u)) {
        auto targetFn = runtime->lookupFunction(0x2BDC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF758u; }
        if (ctx->pc != 0x2AF758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BDC00_0x2bdc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF758u; }
        if (ctx->pc != 0x2AF758u) { return; }
    }
    ctx->pc = 0x2AF758u;
label_2af758:
    // 0x2af758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2af758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af75c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2af75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af760: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF760u;
            // 0x2af764: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AF768u;
    ctx->pc = 0x2af768u;
}
