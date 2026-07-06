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

// Function: sub_002AA328
// Address: 0x2aa328 - 0x2aa370
void sub_002AA328_0x2aa328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AA328_0x2aa328");
#endif

    switch (ctx->pc) {
        case 0x2aa338u: goto label_2aa338;
        default: break;
    }

    ctx->pc = 0x2aa328u;

    // 0x2aa328: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2aa328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2aa32c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aa32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aa330: 0xc0aeef6  jal         func_2BBBD8
    ctx->pc = 0x2AA330u;
    SET_GPR_U32(ctx, 31, 0x2AA338u);
    ctx->pc = 0x2BBBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBBD8u, 0x2AA330u, 0x2AA338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA338u;
label_2aa338:
    // 0x2aa338: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2aa338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa33c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2aa33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2aa340: 0x24456d38  addiu       $a1, $v0, 0x6D38
    ctx->pc = 0x2aa340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 27960));
    // 0x2aa344: 0x8ca30054  lw          $v1, 0x54($a1)
    ctx->pc = 0x2aa344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x2aa348: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA348u;
    {
        const bool branch_taken_0x2aa348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA348u;
        // 0x2aa34c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa348) {
            ctx->pc = 0x2AA358u;
            goto label_2aa358;
        }
    }
    ctx->pc = 0x2AA350u;
    // 0x2aa350: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x2aa350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2aa354: 0xaca20054  sw          $v0, 0x54($a1)
    ctx->pc = 0x2aa354u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 2));
label_2aa358:
    // 0x2aa358: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA358u;
        // 0x2aa35c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA360u;
    // 0x2aa360: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA360u;
        // 0x2aa364: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA368u;
    // 0x2aa368: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA368u;
        // 0x2aa36c: 0x2402012c  addiu       $v0, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA370u;
}
