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

// Function: sub_00163E40
// Address: 0x163e40 - 0x163e80
void sub_00163E40_0x163e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163E40_0x163e40");
#endif

    switch (ctx->pc) {
        case 0x163e5cu: goto label_163e5c;
        default: break;
    }

    ctx->pc = 0x163e40u;

    // 0x163e40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x163e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x163e44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x163e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163e48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x163e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x163e4c: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x163e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x163e50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x163e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163e54: 0xc067c9c  jal         func_19F270
    ctx->pc = 0x163E54u;
    SET_GPR_U32(ctx, 31, 0x163E5Cu);
    ctx->pc = 0x163E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163E54u;
    // 0x163e58: 0xa04347d0  sb          $v1, 0x47D0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 18384), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F270u, 0x163E54u, 0x163E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163E5Cu;
label_163e5c:
    // 0x163e5c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x163E5Cu;
    {
        const bool branch_taken_0x163e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163e5c) {
            ctx->pc = 0x163E68u;
            goto label_163e68;
        }
    }
    ctx->pc = 0x163E64u;
    // 0x163e64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x163e64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163e68:
    // 0x163e68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x163e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x163E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163E6Cu;
        // 0x163e70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163E74u;
    // 0x163e74: 0x0  nop
    ctx->pc = 0x163e74u;
    // NOP
    // 0x163e78: 0x0  nop
    ctx->pc = 0x163e78u;
    // NOP
    // 0x163e7c: 0x0  nop
    ctx->pc = 0x163e7cu;
    // NOP
}
