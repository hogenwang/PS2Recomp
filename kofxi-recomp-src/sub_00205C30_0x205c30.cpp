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

// Function: sub_00205C30
// Address: 0x205c30 - 0x205c80
void sub_00205C30_0x205c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205C30_0x205c30");
#endif

    ctx->pc = 0x205c30u;

    // 0x205c30: 0x24870020  addiu       $a3, $a0, 0x20
    ctx->pc = 0x205c30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x205c34: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x205c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x205c38: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x205C38u;
    {
        const bool branch_taken_0x205c38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x205C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C38u;
        // 0x205c3c: 0xacc70000  sw          $a3, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c38) {
            ctx->pc = 0x205C50u;
            goto label_205c50;
        }
    }
    ctx->pc = 0x205C40u;
    // 0x205c40: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x205c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x205c44: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x205c44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x205c48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x205C48u;
    {
        const bool branch_taken_0x205c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205C48u;
        // 0x205c4c: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205c48) {
            ctx->pc = 0x205C6Cu;
            goto label_205c6c;
        }
    }
    ctx->pc = 0x205C50u;
label_205c50:
    // 0x205c50: 0x58800006  blezl       $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x205C50u;
    {
        const bool branch_taken_0x205c50 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x205c50) {
            ctx->pc = 0x205C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205C50u;
            // 0x205c54: 0xaca70000  sw          $a3, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205C6Cu;
            goto label_205c6c;
        }
    }
    ctx->pc = 0x205C58u;
    // 0x205c58: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x205c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x205c5c: 0x246398d0  addiu       $v1, $v1, -0x6730
    ctx->pc = 0x205c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940880));
    // 0x205c60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x205c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x205c64: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x205c64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x205c68: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x205c68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_205c6c:
    // 0x205c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x205C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205C74u;
    // 0x205c74: 0x0  nop
    ctx->pc = 0x205c74u;
    // NOP
    // 0x205c78: 0x0  nop
    ctx->pc = 0x205c78u;
    // NOP
    // 0x205c7c: 0x0  nop
    ctx->pc = 0x205c7cu;
    // NOP
    if (ctx->pc == 0x205c7cu) { ctx->pc = 0x205c80u; }
}
