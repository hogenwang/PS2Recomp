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

// Function: sub_00122C28
// Address: 0x122c28 - 0x122c80
void sub_00122C28_0x122c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122C28_0x122c28");
#endif

    switch (ctx->pc) {
        case 0x122c48u: goto label_122c48;
        case 0x122c58u: goto label_122c58;
        case 0x122c64u: goto label_122c64;
        case 0x122c6cu: goto label_122c6c;
        default: break;
    }

    ctx->pc = 0x122c28u;

    // 0x122c28: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x122c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x122c2c: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x122c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x122c30: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x122c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x122c34: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x122c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x122c38: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x122c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x122c3c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x122c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x122c40: 0xc048998  jal         func_122660
    ctx->pc = 0x122C40u;
    SET_GPR_U32(ctx, 31, 0x122C48u);
    ctx->pc = 0x122C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122C40u;
    // 0x122c44: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122660u, 0x122C40u, 0x122C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122C48u;
label_122c48:
    // 0x122c48: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x122c48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x122c4c: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x122c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x122c50: 0xc048998  jal         func_122660
    ctx->pc = 0x122C50u;
    SET_GPR_U32(ctx, 31, 0x122C58u);
    ctx->pc = 0x122C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122C50u;
    // 0x122c54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122660u, 0x122C50u, 0x122C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122C58u;
label_122c58:
    // 0x122c58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x122c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122c5c: 0xc048b20  jal         func_122C80
    ctx->pc = 0x122C5Cu;
    SET_GPR_U32(ctx, 31, 0x122C64u);
    ctx->pc = 0x122C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122C5Cu;
    // 0x122c60: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122C80u, 0x122C5Cu, 0x122C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122C64u;
label_122c64:
    // 0x122c64: 0xc048966  jal         func_122598
    ctx->pc = 0x122C64u;
    SET_GPR_U32(ctx, 31, 0x122C6Cu);
    ctx->pc = 0x122C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122C64u;
    // 0x122c68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122598u, 0x122C64u, 0x122C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122C6Cu;
label_122c6c:
    // 0x122c6c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x122c6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x122c70: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x122c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x122c74: 0x3e00008  jr          $ra
    ctx->pc = 0x122C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C74u;
        // 0x122c78: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122C7Cu;
    // 0x122c7c: 0x0  nop
    ctx->pc = 0x122c7cu;
    // NOP
}
