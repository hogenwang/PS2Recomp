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

// Function: sub_001CA850
// Address: 0x1ca850 - 0x1ca898
void sub_001CA850_0x1ca850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA850_0x1ca850");
#endif

    switch (ctx->pc) {
        case 0x1ca870u: goto label_1ca870;
        case 0x1ca87cu: goto label_1ca87c;
        case 0x1ca884u: goto label_1ca884;
        default: break;
    }

    ctx->pc = 0x1ca850u;

    // 0x1ca850: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ca850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ca854: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1ca854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca858: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1ca858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1ca85c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ca85cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca860: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ca860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca864: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1ca864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1ca868: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x1CA868u;
    SET_GPR_U32(ctx, 31, 0x1CA870u);
    ctx->pc = 0x1CA86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA868u;
    // 0x1ca86c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x1CA868u, 0x1CA870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA870u;
label_1ca870:
    // 0x1ca870: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ca870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca874: 0xc04a6da  jal         func_129B68
    ctx->pc = 0x1CA874u;
    SET_GPR_U32(ctx, 31, 0x1CA87Cu);
    ctx->pc = 0x1CA878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA874u;
    // 0x1ca878: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129B68u, 0x1CA874u, 0x1CA87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA87Cu;
label_1ca87c:
    // 0x1ca87c: 0xc072a06  jal         func_1CA818
    ctx->pc = 0x1CA87Cu;
    SET_GPR_U32(ctx, 31, 0x1CA884u);
    ctx->pc = 0x1CA880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA87Cu;
    // 0x1ca880: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA818u, 0x1CA87Cu, 0x1CA884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA884u;
label_1ca884:
    // 0x1ca884: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1ca884u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ca888: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1ca888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ca88c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA88Cu;
        // 0x1ca890: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA88Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA894u;
    // 0x1ca894: 0x0  nop
    ctx->pc = 0x1ca894u;
    // NOP
}
