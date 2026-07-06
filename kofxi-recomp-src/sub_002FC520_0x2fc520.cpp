#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FC520
// Address: 0x2fc520 - 0x2fc560
void sub_002FC520_0x2fc520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC520_0x2fc520");
#endif

    switch (ctx->pc) {
        case 0x2fc530u: goto label_2fc530;
        case 0x2fc540u: goto label_2fc540;
        case 0x2fc550u: goto label_2fc550;
        default: break;
    }

    ctx->pc = 0x2fc520u;

    // 0x2fc520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fc520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fc524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fc524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fc528: 0xc097360  jal         func_25CD80
    ctx->pc = 0x2FC528u;
    SET_GPR_U32(ctx, 31, 0x2FC530u);
    ctx->pc = 0x25CD80u;
    if (runtime->hasFunction(0x25CD80u)) {
        auto targetFn = runtime->lookupFunction(0x25CD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC530u; }
        if (ctx->pc != 0x2FC530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CD80_0x25cd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC530u; }
        if (ctx->pc != 0x2FC530u) { return; }
    }
    ctx->pc = 0x2FC530u;
label_2fc530:
    // 0x2fc530: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fc530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc534: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fc534u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc538: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC538u;
            // 0x2fc53c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FC540u;
label_2fc540:
    // 0x2fc540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fc540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fc544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fc544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fc548: 0xc098ed8  jal         func_263B60
    ctx->pc = 0x2FC548u;
    SET_GPR_U32(ctx, 31, 0x2FC550u);
    ctx->pc = 0x263B60u;
    if (runtime->hasFunction(0x263B60u)) {
        auto targetFn = runtime->lookupFunction(0x263B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC550u; }
        if (ctx->pc != 0x2FC550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00263B60_0x263b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC550u; }
        if (ctx->pc != 0x2FC550u) { return; }
    }
    ctx->pc = 0x2FC550u;
label_2fc550:
    // 0x2fc550: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fc550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc554: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC554u;
            // 0x2fc558: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FC55Cu;
    // 0x2fc55c: 0x0  nop
    ctx->pc = 0x2fc55cu;
    // NOP
    ctx->pc = 0x2fc560u;
}
