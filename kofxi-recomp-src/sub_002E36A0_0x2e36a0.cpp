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

// Function: sub_002E36A0
// Address: 0x2e36a0 - 0x2e36d0
void sub_002E36A0_0x2e36a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E36A0_0x2e36a0");
#endif

    ctx->pc = 0x2e36a0u;

    // 0x2e36a0: 0x90a60001  lbu         $a2, 0x1($a1)
    ctx->pc = 0x2e36a0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2e36a4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2e36a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e36a8: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x2e36a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2e36ac: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2e36acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2e36b0: 0x90a70003  lbu         $a3, 0x3($a1)
    ctx->pc = 0x2e36b0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x2e36b4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2e36b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2e36b8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2e36b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2e36bc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2e36bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2e36c0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2e36c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2e36c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e36c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e36c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E36C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E36CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E36C8u;
        // 0x2e36cc: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E36C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E36D0u;
}
