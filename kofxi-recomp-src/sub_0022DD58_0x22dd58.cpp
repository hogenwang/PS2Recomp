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

// Function: sub_0022DD58
// Address: 0x22dd58 - 0x22dd98
void sub_0022DD58_0x22dd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022DD58_0x22dd58");
#endif

    switch (ctx->pc) {
        case 0x22dd80u: goto label_22dd80;
        default: break;
    }

    ctx->pc = 0x22dd58u;

    // 0x22dd58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22dd58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22dd5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22dd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22dd60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22dd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22dd64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22dd64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dd68: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x22dd68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22dd6c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22DD6Cu;
    {
        const bool branch_taken_0x22dd6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DD6Cu;
        // 0x22dd70: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dd6c) {
            ctx->pc = 0x22DD88u;
            goto label_22dd88;
        }
    }
    ctx->pc = 0x22DD74u;
    // 0x22dd74: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x22dd74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x22dd78: 0xc08b6f4  jal         func_22DBD0
    ctx->pc = 0x22DD78u;
    SET_GPR_U32(ctx, 31, 0x22DD80u);
    ctx->pc = 0x22DD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DD78u;
    // 0x22dd7c: 0x24a5fa08  addiu       $a1, $a1, -0x5F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DBD0u, 0x22DD78u, 0x22DD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DD80u;
label_22dd80:
    // 0x22dd80: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x22dd80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x22dd84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22dd84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22dd88:
    // 0x22dd88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22dd88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22dd8c: 0x3e00008  jr          $ra
    ctx->pc = 0x22DD8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DD8Cu;
        // 0x22dd90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DD8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22DD94u;
    // 0x22dd94: 0x0  nop
    ctx->pc = 0x22dd94u;
    // NOP
}
