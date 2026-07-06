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

// Function: sub_00131C70
// Address: 0x131c70 - 0x131cd0
void sub_00131C70_0x131c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131C70_0x131c70");
#endif

    switch (ctx->pc) {
        case 0x131c84u: goto label_131c84;
        case 0x131c8cu: goto label_131c8c;
        case 0x131c98u: goto label_131c98;
        case 0x131cc0u: goto label_131cc0;
        default: break;
    }

    ctx->pc = 0x131c70u;

    // 0x131c70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x131c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x131c74: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x131c74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x131c78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x131c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x131c7c: 0xc067cc0  jal         func_19F300
    ctx->pc = 0x131C7Cu;
    SET_GPR_U32(ctx, 31, 0x131C84u);
    ctx->pc = 0x131C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131C7Cu;
    // 0x131c80: 0x2484d840  addiu       $a0, $a0, -0x27C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F300u, 0x131C7Cu, 0x131C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131C84u;
label_131c84:
    // 0x131c84: 0xc0cb238  jal         func_32C8E0
    ctx->pc = 0x131C84u;
    SET_GPR_U32(ctx, 31, 0x131C8Cu);
    ctx->pc = 0x131C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131C84u;
    // 0x131c88: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C8E0u, 0x131C84u, 0x131C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131C8Cu;
label_131c8c:
    // 0x131c8c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x131c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x131c90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x131c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131c94: 0x246359c0  addiu       $v1, $v1, 0x59C0
    ctx->pc = 0x131c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22976));
label_131c98:
    // 0x131c98: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x131c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x131c9c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x131c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x131ca0: 0x2c820036  sltiu       $v0, $a0, 0x36
    ctx->pc = 0x131ca0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)54) ? 1 : 0);
    // 0x131ca4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x131ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x131ca8: 0x0  nop
    ctx->pc = 0x131ca8u;
    // NOP
    // 0x131cac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x131CACu;
    {
        const bool branch_taken_0x131cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x131cac) {
            ctx->pc = 0x131C98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_131c98;
        }
    }
    ctx->pc = 0x131CB4u;
    // 0x131cb4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x131cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x131cb8: 0xc063d68  jal         func_18F5A0
    ctx->pc = 0x131CB8u;
    SET_GPR_U32(ctx, 31, 0x131CC0u);
    ctx->pc = 0x131CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131CB8u;
    // 0x131cbc: 0xac405608  sw          $zero, 0x5608($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 22024), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F5A0u, 0x131CB8u, 0x131CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131CC0u;
label_131cc0:
    // 0x131cc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x131cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x131CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131CC4u;
        // 0x131cc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131CCCu;
    // 0x131ccc: 0x0  nop
    ctx->pc = 0x131cccu;
    // NOP
}
