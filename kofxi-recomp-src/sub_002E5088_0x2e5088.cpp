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

// Function: sub_002E5088
// Address: 0x2e5088 - 0x2e50e8
void sub_002E5088_0x2e5088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5088_0x2e5088");
#endif

    switch (ctx->pc) {
        case 0x2e50b8u: goto label_2e50b8;
        case 0x2e50ccu: goto label_2e50cc;
        default: break;
    }

    ctx->pc = 0x2e5088u;

    // 0x2e5088: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e5088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e508c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2e508cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2e5090: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2e5090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2e5094: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2e5094u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5098: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2e5098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2e509c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e509cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e50a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e50a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e50a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e50a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2e50a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e50a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e50ac: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x2e50acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2e50b0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2E50B0u;
    SET_GPR_U32(ctx, 31, 0x2E50B8u);
    ctx->pc = 0x2E50B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E50B0u;
    // 0x2e50b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2E50B0u, 0x2E50B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E50B8u;
label_2e50b8:
    // 0x2e50b8: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x2e50b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x2e50bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e50bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e50c0: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x2e50c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
    // 0x2e50c4: 0xc043318  jal         func_10CC60
    ctx->pc = 0x2E50C4u;
    SET_GPR_U32(ctx, 31, 0x2E50CCu);
    ctx->pc = 0x2E50C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E50C4u;
    // 0x2e50c8: 0xafb20014  sw          $s2, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC60u, 0x2E50C4u, 0x2E50CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E50CCu;
label_2e50cc:
    // 0x2e50cc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e50ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e50d0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2e50d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e50d4: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2e50d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e50d8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2e50d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e50dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E50DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E50E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E50DCu;
        // 0x2e50e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E50DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E50E4u;
    // 0x2e50e4: 0x0  nop
    ctx->pc = 0x2e50e4u;
    // NOP
}
