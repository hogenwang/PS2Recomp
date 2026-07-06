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

// Function: sub_001DBD30
// Address: 0x1dbd30 - 0x1dbdb8
void sub_001DBD30_0x1dbd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DBD30_0x1dbd30");
#endif

    switch (ctx->pc) {
        case 0x1dbd40u: goto label_1dbd40;
        case 0x1dbd60u: goto label_1dbd60;
        case 0x1dbd88u: goto label_1dbd88;
        default: break;
    }

    ctx->pc = 0x1dbd30u;

    // 0x1dbd30: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1dbd30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1dbd34: 0x2403017f  addiu       $v1, $zero, 0x17F
    ctx->pc = 0x1dbd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 383));
    // 0x1dbd38: 0x2444e6d8  addiu       $a0, $v0, -0x1928
    ctx->pc = 0x1dbd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960856));
    // 0x1dbd3c: 0x0  nop
    ctx->pc = 0x1dbd3cu;
    // NOP
label_1dbd40:
    // 0x1dbd40: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1dbd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1dbd44: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1dbd44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dbd48: 0x0  nop
    ctx->pc = 0x1dbd48u;
    // NOP
    // 0x1dbd4c: 0x0  nop
    ctx->pc = 0x1dbd4cu;
    // NOP
    // 0x1dbd50: 0x0  nop
    ctx->pc = 0x1dbd50u;
    // NOP
    // 0x1dbd54: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DBD54u;
    {
        const bool branch_taken_0x1dbd54 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DBD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD54u;
        // 0x1dbd58: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbd54) {
            ctx->pc = 0x1DBD40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dbd40;
        }
    }
    ctx->pc = 0x1DBD5Cu;
    // 0x1dbd5c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1dbd5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dbd60:
    // 0x1dbd60: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1dbd60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1dbd64: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1dbd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1dbd68: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x1dbd68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1dbd6c: 0x0  nop
    ctx->pc = 0x1dbd6cu;
    // NOP
    // 0x1dbd70: 0x0  nop
    ctx->pc = 0x1dbd70u;
    // NOP
    // 0x1dbd74: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DBD74u;
    {
        const bool branch_taken_0x1dbd74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DBD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD74u;
        // 0x1dbd78: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbd74) {
            ctx->pc = 0x1DBD60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dbd60;
        }
    }
    ctx->pc = 0x1DBD7Cu;
    // 0x1dbd7c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1dbd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dbd80: 0x2403017f  addiu       $v1, $zero, 0x17F
    ctx->pc = 0x1dbd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 383));
    // 0x1dbd84: 0x0  nop
    ctx->pc = 0x1dbd84u;
    // NOP
label_1dbd88:
    // 0x1dbd88: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1dbd88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1dbd8c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x1dbd8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1dbd90: 0x0  nop
    ctx->pc = 0x1dbd90u;
    // NOP
    // 0x1dbd94: 0x0  nop
    ctx->pc = 0x1dbd94u;
    // NOP
    // 0x1dbd98: 0x0  nop
    ctx->pc = 0x1dbd98u;
    // NOP
    // 0x1dbd9c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DBD9Cu;
    {
        const bool branch_taken_0x1dbd9c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DBDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBD9Cu;
        // 0x1dbda0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbd9c) {
            ctx->pc = 0x1DBD88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dbd88;
        }
    }
    ctx->pc = 0x1DBDA4u;
    // 0x1dbda4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1dbda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1dbda8: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1dbda8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1dbdac: 0x2442e858  addiu       $v0, $v0, -0x17A8
    ctx->pc = 0x1dbdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961240));
    // 0x1dbdb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBDB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBDB0u;
        // 0x1dbdb4: 0xac62e6cc  sw          $v0, -0x1934($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBDB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBDB8u;
}
