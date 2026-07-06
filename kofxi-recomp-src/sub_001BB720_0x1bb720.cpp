#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BB720
// Address: 0x1bb720 - 0x1bb770
void sub_001BB720_0x1bb720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB720_0x1bb720");
#endif

    switch (ctx->pc) {
        case 0x1bb738u: goto label_1bb738;
        case 0x1bb74cu: goto label_1bb74c;
        case 0x1bb754u: goto label_1bb754;
        case 0x1bb75cu: goto label_1bb75c;
        default: break;
    }

    ctx->pc = 0x1bb720u;

    // 0x1bb720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bb720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb728: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1bb728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bb72c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb72cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb730: 0x806d87c  j           func_1B61F0
    ctx->pc = 0x1BB730u;
    ctx->pc = 0x1BB734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB730u;
            // 0x1bb734: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B61F0u;
    {
        auto targetFn = runtime->lookupFunction(0x1B61F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1BB738u;
label_1bb738:
    // 0x1bb738: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bb738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb73c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bb73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bb740: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bb740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bb744: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BB744u;
    SET_GPR_U32(ctx, 31, 0x1BB74Cu);
    ctx->pc = 0x1BB748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB744u;
            // 0x1bb748: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB74Cu; }
        if (ctx->pc != 0x1BB74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB74Cu; }
        if (ctx->pc != 0x1BB74Cu) { return; }
    }
    ctx->pc = 0x1BB74Cu;
label_1bb74c:
    // 0x1bb74c: 0xc06eddc  jal         func_1BB770
    ctx->pc = 0x1BB74Cu;
    SET_GPR_U32(ctx, 31, 0x1BB754u);
    ctx->pc = 0x1BB750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB74Cu;
            // 0x1bb750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB770u;
    if (runtime->hasFunction(0x1BB770u)) {
        auto targetFn = runtime->lookupFunction(0x1BB770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB754u; }
        if (ctx->pc != 0x1BB754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB770_0x1bb770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB754u; }
        if (ctx->pc != 0x1BB754u) { return; }
    }
    ctx->pc = 0x1BB754u;
label_1bb754:
    // 0x1bb754: 0xc06b49c  jal         func_1AD270
    ctx->pc = 0x1BB754u;
    SET_GPR_U32(ctx, 31, 0x1BB75Cu);
    ctx->pc = 0x1BB758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB754u;
            // 0x1bb758: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB75Cu; }
        if (ctx->pc != 0x1BB75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD270_0x1ad270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB75Cu; }
        if (ctx->pc != 0x1BB75Cu) { return; }
    }
    ctx->pc = 0x1BB75Cu;
label_1bb75c:
    // 0x1bb75c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bb75cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bb760: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bb760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb764: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bb764u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb768: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB768u;
            // 0x1bb76c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BB770u;
    ctx->pc = 0x1bb770u;
}
