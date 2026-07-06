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

// Function: sub_002CAD20
// Address: 0x2cad20 - 0x2cad98
void sub_002CAD20_0x2cad20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CAD20_0x2cad20");
#endif

    ctx->pc = 0x2cad20u;

    // 0x2cad20: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x2cad20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2cad24: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x2cad24u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2cad28: 0x2cc30008  sltiu       $v1, $a2, 0x8
    ctx->pc = 0x2cad28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2cad2c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2CAD2Cu;
    {
        const bool branch_taken_0x2cad2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAD2Cu;
        // 0x2cad30: 0x24020801  addiu       $v0, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cad2c) {
            ctx->pc = 0x2CAD90u;
            goto label_2cad90;
        }
    }
    ctx->pc = 0x2CAD34u;
    // 0x2cad34: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CAD34u;
    {
        const bool branch_taken_0x2cad34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAD34u;
        // 0x2cad38: 0x8c830010  lw          $v1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cad34) {
            ctx->pc = 0x2CAD50u;
            goto label_2cad50;
        }
    }
    ctx->pc = 0x2CAD3Cu;
    // 0x2cad3c: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x2cad3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2cad40: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CAD40u;
    {
        const bool branch_taken_0x2cad40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cad40) {
            ctx->pc = 0x2CAD44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAD40u;
            // 0x2cad44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CAD54u;
            goto label_2cad54;
        }
    }
    ctx->pc = 0x2CAD48u;
    // 0x2cad48: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAD48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAD48u;
        // 0x2cad4c: 0x24020801  addiu       $v0, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAD48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CAD50u;
label_2cad50:
    // 0x2cad50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cad50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cad54:
    // 0x2cad54: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CAD54u;
    {
        const bool branch_taken_0x2cad54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CAD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAD54u;
        // 0x2cad58: 0x24e30001  addiu       $v1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cad54) {
            ctx->pc = 0x2CAD70u;
            goto label_2cad70;
        }
    }
    ctx->pc = 0x2CAD5Cu;
    // 0x2cad5c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x2cad5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x2cad60: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2cad60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2cad64: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2CAD64u;
    {
        const bool branch_taken_0x2cad64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAD64u;
        // 0x2cad68: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cad64) {
            ctx->pc = 0x2CAD8Cu;
            goto label_2cad8c;
        }
    }
    ctx->pc = 0x2CAD6Cu;
    // 0x2cad6c: 0x0  nop
    ctx->pc = 0x2cad6cu;
    // NOP
label_2cad70:
    // 0x2cad70: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2cad70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2cad74: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2cad74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2cad78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2cad78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2cad7c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2cad7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2cad80: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2cad80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2cad84: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2cad84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cad88: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x2cad88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_2cad8c:
    // 0x2cad8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cad8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cad90:
    // 0x2cad90: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAD90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAD90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CAD98u;
}
