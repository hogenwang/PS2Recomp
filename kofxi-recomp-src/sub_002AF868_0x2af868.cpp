#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AF868
// Address: 0x2af868 - 0x2af8c8
void sub_002AF868_0x2af868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF868_0x2af868");
#endif

    switch (ctx->pc) {
        case 0x2af878u: goto label_2af878;
        case 0x2af880u: goto label_2af880;
        case 0x2af888u: goto label_2af888;
        case 0x2af890u: goto label_2af890;
        case 0x2af898u: goto label_2af898;
        case 0x2af8a0u: goto label_2af8a0;
        case 0x2af8a8u: goto label_2af8a8;
        case 0x2af8b0u: goto label_2af8b0;
        case 0x2af8b8u: goto label_2af8b8;
        default: break;
    }

    ctx->pc = 0x2af868u;

    // 0x2af868: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2af868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2af86c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2af86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2af870: 0xc0a5c2c  jal         func_2970B0
    ctx->pc = 0x2AF870u;
    SET_GPR_U32(ctx, 31, 0x2AF878u);
    ctx->pc = 0x2970B0u;
    if (runtime->hasFunction(0x2970B0u)) {
        auto targetFn = runtime->lookupFunction(0x2970B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF878u; }
        if (ctx->pc != 0x2AF878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002970B0_0x2970b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF878u; }
        if (ctx->pc != 0x2AF878u) { return; }
    }
    ctx->pc = 0x2AF878u;
label_2af878:
    // 0x2af878: 0xc0a8d8a  jal         func_2A3628
    ctx->pc = 0x2AF878u;
    SET_GPR_U32(ctx, 31, 0x2AF880u);
    ctx->pc = 0x2A3628u;
    if (runtime->hasFunction(0x2A3628u)) {
        auto targetFn = runtime->lookupFunction(0x2A3628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF880u; }
        if (ctx->pc != 0x2AF880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3628_0x2a3628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF880u; }
        if (ctx->pc != 0x2AF880u) { return; }
    }
    ctx->pc = 0x2AF880u;
label_2af880:
    // 0x2af880: 0xc0a8d48  jal         func_2A3520
    ctx->pc = 0x2AF880u;
    SET_GPR_U32(ctx, 31, 0x2AF888u);
    ctx->pc = 0x2AF884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF880u;
            // 0x2af884: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3520u;
    if (runtime->hasFunction(0x2A3520u)) {
        auto targetFn = runtime->lookupFunction(0x2A3520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF888u; }
        if (ctx->pc != 0x2AF888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3520_0x2a3520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF888u; }
        if (ctx->pc != 0x2AF888u) { return; }
    }
    ctx->pc = 0x2AF888u;
label_2af888:
    // 0x2af888: 0xc0a6872  jal         func_29A1C8
    ctx->pc = 0x2AF888u;
    SET_GPR_U32(ctx, 31, 0x2AF890u);
    ctx->pc = 0x2AF88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF888u;
            // 0x2af88c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A1C8u;
    if (runtime->hasFunction(0x29A1C8u)) {
        auto targetFn = runtime->lookupFunction(0x29A1C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF890u; }
        if (ctx->pc != 0x2AF890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029A1C8_0x29a1c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF890u; }
        if (ctx->pc != 0x2AF890u) { return; }
    }
    ctx->pc = 0x2AF890u;
label_2af890:
    // 0x2af890: 0xc0a6944  jal         func_29A510
    ctx->pc = 0x2AF890u;
    SET_GPR_U32(ctx, 31, 0x2AF898u);
    ctx->pc = 0x29A510u;
    if (runtime->hasFunction(0x29A510u)) {
        auto targetFn = runtime->lookupFunction(0x29A510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF898u; }
        if (ctx->pc != 0x2AF898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029A510_0x29a510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF898u; }
        if (ctx->pc != 0x2AF898u) { return; }
    }
    ctx->pc = 0x2AF898u;
label_2af898:
    // 0x2af898: 0xc0a3c18  jal         func_28F060
    ctx->pc = 0x2AF898u;
    SET_GPR_U32(ctx, 31, 0x2AF8A0u);
    ctx->pc = 0x28F060u;
    if (runtime->hasFunction(0x28F060u)) {
        auto targetFn = runtime->lookupFunction(0x28F060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF8A0u; }
        if (ctx->pc != 0x2AF8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F060_0x28f060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF8A0u; }
        if (ctx->pc != 0x2AF8A0u) { return; }
    }
    ctx->pc = 0x2AF8A0u;
label_2af8a0:
    // 0x2af8a0: 0xc0ac610  jal         func_2B1840
    ctx->pc = 0x2AF8A0u;
    SET_GPR_U32(ctx, 31, 0x2AF8A8u);
    ctx->pc = 0x2B1840u;
    if (runtime->hasFunction(0x2B1840u)) {
        auto targetFn = runtime->lookupFunction(0x2B1840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF8A8u; }
        if (ctx->pc != 0x2AF8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B1840_0x2b1840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF8A8u; }
        if (ctx->pc != 0x2AF8A8u) { return; }
    }
    ctx->pc = 0x2AF8A8u;
label_2af8a8:
    // 0x2af8a8: 0xc0a5724  jal         func_295C90
    ctx->pc = 0x2AF8A8u;
    SET_GPR_U32(ctx, 31, 0x2AF8B0u);
    ctx->pc = 0x2AF8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF8A8u;
            // 0x2af8ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295C90u;
    if (runtime->hasFunction(0x295C90u)) {
        auto targetFn = runtime->lookupFunction(0x295C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF8B0u; }
        if (ctx->pc != 0x2AF8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295C90_0x295c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF8B0u; }
        if (ctx->pc != 0x2AF8B0u) { return; }
    }
    ctx->pc = 0x2AF8B0u;
label_2af8b0:
    // 0x2af8b0: 0xc0a562a  jal         func_2958A8
    ctx->pc = 0x2AF8B0u;
    SET_GPR_U32(ctx, 31, 0x2AF8B8u);
    ctx->pc = 0x2958A8u;
    if (runtime->hasFunction(0x2958A8u)) {
        auto targetFn = runtime->lookupFunction(0x2958A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF8B8u; }
        if (ctx->pc != 0x2AF8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002958A8_0x2958a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF8B8u; }
        if (ctx->pc != 0x2AF8B8u) { return; }
    }
    ctx->pc = 0x2AF8B8u;
label_2af8b8:
    // 0x2af8b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2af8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af8bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2af8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF8C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF8C0u;
            // 0x2af8c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AF8C8u;
    ctx->pc = 0x2af8c8u;
}
