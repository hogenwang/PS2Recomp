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

// Function: sub_0011E800
// Address: 0x11e800 - 0x11e838
void sub_0011E800_0x11e800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E800_0x11e800");
#endif

    switch (ctx->pc) {
        case 0x11e810u: goto label_11e810;
        default: break;
    }

    ctx->pc = 0x11e800u;

    // 0x11e800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11e800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11e804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11e804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11e808: 0xc0479b6  jal         func_11E6D8
    ctx->pc = 0x11E808u;
    SET_GPR_U32(ctx, 31, 0x11E810u);
    ctx->pc = 0x11E80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E808u;
    // 0x11e80c: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E6D8u, 0x11E808u, 0x11E810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E810u;
label_11e810:
    // 0x11e810: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11e810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e814: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E814u;
    {
        const bool branch_taken_0x11e814 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E814u;
        // 0x11e818: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e814) {
            ctx->pc = 0x11E828u;
            goto label_11e828;
        }
    }
    ctx->pc = 0x11E81Cu;
    // 0x11e81c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11e81cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11e820: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x11e820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x11e824: 0xac62b9d8  sw          $v0, -0x4628($v1)
    ctx->pc = 0x11e824u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294949336), GPR_U32(ctx, 2));
label_11e828:
    // 0x11e828: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x11e828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e82c: 0x3e00008  jr          $ra
    ctx->pc = 0x11E82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E82Cu;
        // 0x11e830: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E834u;
    // 0x11e834: 0x0  nop
    ctx->pc = 0x11e834u;
    // NOP
    if (ctx->pc == 0x11e834u) { ctx->pc = 0x11e838u; }
}
