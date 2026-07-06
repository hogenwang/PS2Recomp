#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CF3F0
// Address: 0x2cf3f0 - 0x2cf420
void sub_002CF3F0_0x2cf3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF3F0_0x2cf3f0");
#endif

    switch (ctx->pc) {
        case 0x2cf404u: goto label_2cf404;
        default: break;
    }

    ctx->pc = 0x2cf3f0u;

    // 0x2cf3f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cf3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cf3f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cf3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cf3f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2cf3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2cf3fc: 0xc0b3dc2  jal         func_2CF708
    ctx->pc = 0x2CF3FCu;
    SET_GPR_U32(ctx, 31, 0x2CF404u);
    ctx->pc = 0x2CF400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF3FCu;
            // 0x2cf400: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF708u;
    if (runtime->hasFunction(0x2CF708u)) {
        auto targetFn = runtime->lookupFunction(0x2CF708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF404u; }
        if (ctx->pc != 0x2CF404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CF708_0x2cf708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF404u; }
        if (ctx->pc != 0x2CF404u) { return; }
    }
    ctx->pc = 0x2CF404u;
label_2cf404:
    // 0x2cf404: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2cf404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cf408: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x2cf408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2cf40c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cf40cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf410: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cf410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf414: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2cf414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2cf418: 0x80b608e  j           func_2D8238
    ctx->pc = 0x2CF418u;
    ctx->pc = 0x2CF41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF418u;
            // 0x2cf41c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002D8238_0x2d8238(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2CF420u;
    ctx->pc = 0x2cf420u;
}
