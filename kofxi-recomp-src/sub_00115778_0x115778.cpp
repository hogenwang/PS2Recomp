#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00115778
// Address: 0x115778 - 0x1157b0
void sub_00115778_0x115778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115778_0x115778");
#endif

    switch (ctx->pc) {
        case 0x1157a0u: goto label_1157a0;
        default: break;
    }

    ctx->pc = 0x115778u;

    // 0x115778: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x115778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11577c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11577cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x115780: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x115780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x115784: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x115784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x115788: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x115788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11578c: 0x24849e68  addiu       $a0, $a0, -0x6198
    ctx->pc = 0x11578cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942312));
    // 0x115790: 0xac438760  sw          $v1, -0x78A0($v0)
    ctx->pc = 0x115790u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936416), GPR_U32(ctx, 3));
    // 0x115794: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x115794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115798: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x115798u;
    SET_GPR_U32(ctx, 31, 0x1157A0u);
    ctx->pc = 0x11579Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x115798u;
            // 0x11579c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1157A0u; }
        if (ctx->pc != 0x1157A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1157A0u; }
        if (ctx->pc != 0x1157A0u) { return; }
    }
    ctx->pc = 0x1157A0u;
label_1157a0:
    // 0x1157a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1157a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1157a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1157a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1157a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1157A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1157ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1157A8u;
            // 0x1157ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1157B0u;
    ctx->pc = 0x1157b0u;
}
