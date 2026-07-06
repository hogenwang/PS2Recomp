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

// Function: sub_001C9CF8
// Address: 0x1c9cf8 - 0x1c9de0
void sub_001C9CF8_0x1c9cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C9CF8_0x1c9cf8");
#endif

    switch (ctx->pc) {
        case 0x1c9d28u: goto label_1c9d28;
        case 0x1c9d74u: goto label_1c9d74;
        case 0x1c9da8u: goto label_1c9da8;
        default: break;
    }

    ctx->pc = 0x1c9cf8u;

    // 0x1c9cf8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c9cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c9cfc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c9cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9d00: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1c9d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
    // 0x1c9d04: 0x54660005  bnel        $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9D04u;
    {
        const bool branch_taken_0x1c9d04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x1c9d04) {
            ctx->pc = 0x1C9D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9D04u;
            // 0x1c9d08: 0xa0850050  sb          $a1, 0x50($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9D1Cu;
            goto label_1c9d1c;
        }
    }
    ctx->pc = 0x1C9D0Cu;
    // 0x1c9d0c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c9d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c9d10: 0x8c435320  lw          $v1, 0x5320($v0)
    ctx->pc = 0x1c9d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21280)));
    // 0x1c9d14: 0x5c600001  bgtzl       $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C9D14u;
    {
        const bool branch_taken_0x1c9d14 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1c9d14) {
            ctx->pc = 0x1C9D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9D14u;
            // 0x1c9d18: 0xa0850050  sb          $a1, 0x50($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9D1Cu;
            goto label_1c9d1c;
        }
    }
    ctx->pc = 0x1C9D1Cu;
label_1c9d1c:
    // 0x1c9d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9D24u;
    // 0x1c9d24: 0x0  nop
    ctx->pc = 0x1c9d24u;
    // NOP
label_1c9d28:
    // 0x1c9d28: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c9d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c9d2c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c9d2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c9d30: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1c9d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
    // 0x1c9d34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c9d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9d38: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1c9d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1c9d3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c9d3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9d40: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1c9d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1c9d44: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9D44u;
    {
        const bool branch_taken_0x1c9d44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1C9D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D44u;
        // 0x1c9d48: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9d44) {
            ctx->pc = 0x1C9D5Cu;
            goto label_1c9d5c;
        }
    }
    ctx->pc = 0x1C9D4Cu;
    // 0x1c9d4c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c9d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c9d50: 0x8c435320  lw          $v1, 0x5320($v0)
    ctx->pc = 0x1c9d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21280)));
    // 0x1c9d54: 0x58600010  blezl       $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C9D54u;
    {
        const bool branch_taken_0x1c9d54 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1c9d54) {
            ctx->pc = 0x1C9D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9D54u;
            // 0x1c9d58: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9D98u;
            goto label_1c9d98;
        }
    }
    ctx->pc = 0x1C9D5Cu;
label_1c9d5c:
    // 0x1c9d5c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1c9d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c9d60: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c9d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9d64: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1c9d64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9d68: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1c9d68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c9d6c: 0xc07096e  jal         func_1C25B8
    ctx->pc = 0x1C9D6Cu;
    SET_GPR_U32(ctx, 31, 0x1C9D74u);
    ctx->pc = 0x1C9D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9D6Cu;
    // 0x1c9d70: 0xafb00010  sw          $s0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C25B8u, 0x1C9D6Cu, 0x1C9D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9D74u;
label_1c9d74:
    // 0x1c9d74: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1c9d74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9d78: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c9d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c9d7c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1c9d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1c9d80: 0x24635360  addiu       $v1, $v1, 0x5360
    ctx->pc = 0x1c9d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21344));
    // 0x1c9d84: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c9d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c9d88: 0xac505354  sw          $s0, 0x5354($v0)
    ctx->pc = 0x1c9d88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 21332), GPR_U32(ctx, 16));
    // 0x1c9d8c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1c9d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1c9d90: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1c9d90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1c9d94: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1c9d94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c9d98:
    // 0x1c9d98: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c9d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c9d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D9Cu;
        // 0x1c9da0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9DA4u;
    // 0x1c9da4: 0x0  nop
    ctx->pc = 0x1c9da4u;
    // NOP
label_1c9da8:
    // 0x1c9da8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c9da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c9dac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c9dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9db0: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1c9db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
    // 0x1c9db4: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9DB4u;
    {
        const bool branch_taken_0x1c9db4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1C9DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9DB4u;
        // 0x1c9db8: 0x3c030038  lui         $v1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9db4) {
            ctx->pc = 0x1C9DD0u;
            goto label_1c9dd0;
        }
    }
    ctx->pc = 0x1C9DBCu;
    // 0x1c9dbc: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1c9dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1c9dc0: 0x8c835320  lw          $v1, 0x5320($a0)
    ctx->pc = 0x1c9dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 21280)));
    // 0x1c9dc4: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9DC4u;
    {
        const bool branch_taken_0x1c9dc4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1C9DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9DC4u;
        // 0x1c9dc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9dc4) {
            ctx->pc = 0x1C9DD4u;
            goto label_1c9dd4;
        }
    }
    ctx->pc = 0x1C9DCCu;
    // 0x1c9dcc: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c9dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
label_1c9dd0:
    // 0x1c9dd0: 0x8c625354  lw          $v0, 0x5354($v1)
    ctx->pc = 0x1c9dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21332)));
label_1c9dd4:
    // 0x1c9dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9DDCu;
    // 0x1c9ddc: 0x0  nop
    ctx->pc = 0x1c9ddcu;
    // NOP
    if (ctx->pc == 0x1c9ddcu) { ctx->pc = 0x1c9de0u; }
}
