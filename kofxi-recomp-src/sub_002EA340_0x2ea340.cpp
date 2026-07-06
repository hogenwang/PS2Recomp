#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002EA340
// Address: 0x2ea340 - 0x2ea388
void sub_002EA340_0x2ea340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA340_0x2ea340");
#endif

    switch (ctx->pc) {
        case 0x2ea34cu: goto label_2ea34c;
        case 0x2ea374u: goto label_2ea374;
        default: break;
    }

    ctx->pc = 0x2ea340u;

    // 0x2ea340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ea340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ea344: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ea344u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea348: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ea348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ea34c:
    // 0x2ea34c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2ea34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea350: 0xac450174  sw          $a1, 0x174($v0)
    ctx->pc = 0x2ea350u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 372), GPR_U32(ctx, 5));
    // 0x2ea354: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x2ea354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2ea358: 0x8c430138  lw          $v1, 0x138($v0)
    ctx->pc = 0x2ea358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x2ea35c: 0x24460160  addiu       $a2, $v0, 0x160
    ctx->pc = 0x2ea35cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
    // 0x2ea360: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ea360u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea364: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ea364u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea368: 0x8c6500a0  lw          $a1, 0xA0($v1)
    ctx->pc = 0x2ea368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x2ea36c: 0xc098ab4  jal         func_262AD0
    ctx->pc = 0x2EA36Cu;
    SET_GPR_U32(ctx, 31, 0x2EA374u);
    ctx->pc = 0x2EA370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA36Cu;
            // 0x2ea370: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262AD0u;
    if (runtime->hasFunction(0x262AD0u)) {
        auto targetFn = runtime->lookupFunction(0x262AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA374u; }
        if (ctx->pc != 0x2EA374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262AD0_0x262ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA374u; }
        if (ctx->pc != 0x2EA374u) { return; }
    }
    ctx->pc = 0x2EA374u;
label_2ea374:
    // 0x2ea374: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ea374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ea378: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ea378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea37c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA37Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA37Cu;
            // 0x2ea380: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EA384u;
    // 0x2ea384: 0x0  nop
    ctx->pc = 0x2ea384u;
    // NOP
    ctx->pc = 0x2ea388u;
}
