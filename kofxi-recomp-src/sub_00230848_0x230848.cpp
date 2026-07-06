#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00230848
// Address: 0x230848 - 0x230878
void sub_00230848_0x230848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230848_0x230848");
#endif

    switch (ctx->pc) {
        case 0x230868u: goto label_230868;
        default: break;
    }

    ctx->pc = 0x230848u;

    // 0x230848: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x230848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23084c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x23084cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230850: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x230850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x230854: 0x94620030  lhu         $v0, 0x30($v1)
    ctx->pc = 0x230854u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x230858: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x230858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x23085c: 0xa4620030  sh          $v0, 0x30($v1)
    ctx->pc = 0x23085cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x230860: 0xc08b65c  jal         func_22D970
    ctx->pc = 0x230860u;
    SET_GPR_U32(ctx, 31, 0x230868u);
    ctx->pc = 0x230864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230860u;
    // 0x230864: 0x84850032  lh          $a1, 0x32($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 50)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D970u, 0x230860u, 0x230868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230868u;
label_230868:
    // 0x230868: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x230868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23086c: 0x3e00008  jr          $ra
    ctx->pc = 0x23086Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23086Cu;
        // 0x230870: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23086Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230874u;
    // 0x230874: 0x0  nop
    ctx->pc = 0x230874u;
    // NOP
    if (ctx->pc == 0x230874u) { ctx->pc = 0x230878u; }
}
