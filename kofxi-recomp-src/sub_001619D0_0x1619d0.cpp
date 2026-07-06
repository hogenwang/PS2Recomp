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

// Function: sub_001619D0
// Address: 0x1619d0 - 0x161a40
void sub_001619D0_0x1619d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001619D0_0x1619d0");
#endif

    ctx->pc = 0x1619d0u;

    // 0x1619d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1619d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1619d4: 0x50a30012  beql        $a1, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1619D4u;
    {
        const bool branch_taken_0x1619d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1619d4) {
            ctx->pc = 0x1619D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1619D4u;
            // 0x1619d8: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161A20u;
            goto label_161a20;
        }
    }
    ctx->pc = 0x1619DCu;
    // 0x1619dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1619dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1619e0: 0x50a3000a  beql        $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1619E0u;
    {
        const bool branch_taken_0x1619e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1619e0) {
            ctx->pc = 0x1619E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1619E0u;
            // 0x1619e4: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161A0Cu;
            goto label_161a0c;
        }
    }
    ctx->pc = 0x1619E8u;
    // 0x1619e8: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1619E8u;
    {
        const bool branch_taken_0x1619e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1619e8) {
            ctx->pc = 0x1619ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1619E8u;
            // 0x1619ec: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1619F8u;
            goto label_1619f8;
        }
    }
    ctx->pc = 0x1619F0u;
    // 0x1619f0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1619F0u;
    {
        const bool branch_taken_0x1619f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1619F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1619F0u;
        // 0x1619f4: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1619f0) {
            ctx->pc = 0x161A34u;
            goto label_161a34;
        }
    }
    ctx->pc = 0x1619F8u;
label_1619f8:
    // 0x1619f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1619f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1619fc: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x1619fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x161a00: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x161a00u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x161a04: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x161A04u;
    {
        const bool branch_taken_0x161a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161A04u;
        // 0x161a08: 0xa4800004  sh          $zero, 0x4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161a04) {
            ctx->pc = 0x161A30u;
            goto label_161a30;
        }
    }
    ctx->pc = 0x161A0Cu;
label_161a0c:
    // 0x161a0c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x161a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x161a10: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x161a10u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x161a14: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x161a14u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x161a18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x161A18u;
    {
        const bool branch_taken_0x161a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161A18u;
        // 0x161a1c: 0xa4800004  sh          $zero, 0x4($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161a18) {
            ctx->pc = 0x161A30u;
            goto label_161a30;
        }
    }
    ctx->pc = 0x161A20u;
label_161a20:
    // 0x161a20: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x161a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x161a24: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x161a24u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x161a28: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x161a28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x161a2c: 0xa4800004  sh          $zero, 0x4($a0)
    ctx->pc = 0x161a2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
label_161a30:
    // 0x161a30: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x161a30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_161a34:
    // 0x161a34: 0x3e00008  jr          $ra
    ctx->pc = 0x161A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161A34u;
        // 0x161a38: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161A3Cu;
    // 0x161a3c: 0x0  nop
    ctx->pc = 0x161a3cu;
    // NOP
}
