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

// Function: sub_00307350
// Address: 0x307350 - 0x307390
void sub_00307350_0x307350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307350_0x307350");
#endif

    switch (ctx->pc) {
        case 0x30736cu: goto label_30736c;
        case 0x30737cu: goto label_30737c;
        default: break;
    }

    ctx->pc = 0x307350u;

    // 0x307350: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x307350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x307354: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x307354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307358: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x307358u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30735c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30735cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x307360: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x307360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x307364: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x307364u;
    SET_GPR_U32(ctx, 31, 0x30736Cu);
    ctx->pc = 0x307368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307364u;
    // 0x307368: 0x24a535b0  addiu       $a1, $a1, 0x35B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x307364u, 0x30736Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30736Cu;
label_30736c:
    // 0x30736c: 0x3c0201d1  lui         $v0, 0x1D1
    ctx->pc = 0x30736cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)465 << 16));
    // 0x307370: 0x8c451db8  lw          $a1, 0x1DB8($v0)
    ctx->pc = 0x307370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7608)));
    // 0x307374: 0xc068f6c  jal         func_1A3DB0
    ctx->pc = 0x307374u;
    SET_GPR_U32(ctx, 31, 0x30737Cu);
    ctx->pc = 0x307378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307374u;
    // 0x307378: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3DB0u, 0x307374u, 0x30737Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30737Cu;
label_30737c:
    // 0x30737c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30737cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x307380: 0x3e00008  jr          $ra
    ctx->pc = 0x307380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307380u;
        // 0x307384: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307388u;
    // 0x307388: 0x0  nop
    ctx->pc = 0x307388u;
    // NOP
    // 0x30738c: 0x0  nop
    ctx->pc = 0x30738cu;
    // NOP
    if (ctx->pc == 0x30738cu) { ctx->pc = 0x307390u; }
}
