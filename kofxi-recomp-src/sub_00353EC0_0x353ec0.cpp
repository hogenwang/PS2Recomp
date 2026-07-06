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

// Function: sub_00353EC0
// Address: 0x353ec0 - 0x353f20
void sub_00353EC0_0x353ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353EC0_0x353ec0");
#endif

    switch (ctx->pc) {
        case 0x353ed0u: goto label_353ed0;
        case 0x353eecu: goto label_353eec;
        case 0x353ef4u: goto label_353ef4;
        case 0x353f10u: goto label_353f10;
        default: break;
    }

    ctx->pc = 0x353ec0u;

    // 0x353ec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x353ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x353ec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x353ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x353ec8: 0xc062810  jal         func_18A040
    ctx->pc = 0x353EC8u;
    SET_GPR_U32(ctx, 31, 0x353ED0u);
    ctx->pc = 0x353ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353EC8u;
    // 0x353ecc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A040u, 0x353EC8u, 0x353ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353ED0u;
label_353ed0:
    // 0x353ed0: 0x8c43049c  lw          $v1, 0x49C($v0)
    ctx->pc = 0x353ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1180)));
    // 0x353ed4: 0x2444028c  addiu       $a0, $v0, 0x28C
    ctx->pc = 0x353ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 652));
    // 0x353ed8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x353ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353edc: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x353edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x353ee0: 0x346301ff  ori         $v1, $v1, 0x1FF
    ctx->pc = 0x353ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)511);
    // 0x353ee4: 0xc04bbe8  jal         func_12EFA0
    ctx->pc = 0x353EE4u;
    SET_GPR_U32(ctx, 31, 0x353EECu);
    ctx->pc = 0x353EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353EE4u;
    // 0x353ee8: 0xac43049c  sw          $v1, 0x49C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1180), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFA0u, 0x353EE4u, 0x353EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353EECu;
label_353eec:
    // 0x353eec: 0xc062810  jal         func_18A040
    ctx->pc = 0x353EECu;
    SET_GPR_U32(ctx, 31, 0x353EF4u);
    ctx->pc = 0x353EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353EECu;
    // 0x353ef0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A040u, 0x353EECu, 0x353EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353EF4u;
label_353ef4:
    // 0x353ef4: 0x8c43049c  lw          $v1, 0x49C($v0)
    ctx->pc = 0x353ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1180)));
    // 0x353ef8: 0x2444028c  addiu       $a0, $v0, 0x28C
    ctx->pc = 0x353ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 652));
    // 0x353efc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x353efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353f00: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x353f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x353f04: 0x346301ff  ori         $v1, $v1, 0x1FF
    ctx->pc = 0x353f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)511);
    // 0x353f08: 0xc04bbe8  jal         func_12EFA0
    ctx->pc = 0x353F08u;
    SET_GPR_U32(ctx, 31, 0x353F10u);
    ctx->pc = 0x353F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353F08u;
    // 0x353f0c: 0xac43049c  sw          $v1, 0x49C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1180), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFA0u, 0x353F08u, 0x353F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353F10u;
label_353f10:
    // 0x353f10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x353f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x353f14: 0x3e00008  jr          $ra
    ctx->pc = 0x353F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353F14u;
        // 0x353f18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353F1Cu;
    // 0x353f1c: 0x0  nop
    ctx->pc = 0x353f1cu;
    // NOP
}
