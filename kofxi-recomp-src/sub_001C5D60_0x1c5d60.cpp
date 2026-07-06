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

// Function: sub_001C5D60
// Address: 0x1c5d60 - 0x1c5e68
void sub_001C5D60_0x1c5d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5D60_0x1c5d60");
#endif

    switch (ctx->pc) {
        case 0x1c5d60u: goto label_1c5d60;
        case 0x1c5d64u: goto label_1c5d64;
        case 0x1c5d68u: goto label_1c5d68;
        case 0x1c5d6cu: goto label_1c5d6c;
        case 0x1c5d70u: goto label_1c5d70;
        case 0x1c5d74u: goto label_1c5d74;
        case 0x1c5d78u: goto label_1c5d78;
        case 0x1c5d7cu: goto label_1c5d7c;
        case 0x1c5d80u: goto label_1c5d80;
        case 0x1c5d84u: goto label_1c5d84;
        case 0x1c5d88u: goto label_1c5d88;
        case 0x1c5d8cu: goto label_1c5d8c;
        case 0x1c5d90u: goto label_1c5d90;
        case 0x1c5d94u: goto label_1c5d94;
        case 0x1c5d98u: goto label_1c5d98;
        case 0x1c5d9cu: goto label_1c5d9c;
        case 0x1c5da0u: goto label_1c5da0;
        case 0x1c5da4u: goto label_1c5da4;
        case 0x1c5da8u: goto label_1c5da8;
        case 0x1c5dacu: goto label_1c5dac;
        case 0x1c5db0u: goto label_1c5db0;
        case 0x1c5db4u: goto label_1c5db4;
        case 0x1c5db8u: goto label_1c5db8;
        case 0x1c5dbcu: goto label_1c5dbc;
        case 0x1c5dc0u: goto label_1c5dc0;
        case 0x1c5dc4u: goto label_1c5dc4;
        case 0x1c5dc8u: goto label_1c5dc8;
        case 0x1c5dccu: goto label_1c5dcc;
        case 0x1c5dd0u: goto label_1c5dd0;
        case 0x1c5dd4u: goto label_1c5dd4;
        case 0x1c5dd8u: goto label_1c5dd8;
        case 0x1c5ddcu: goto label_1c5ddc;
        case 0x1c5de0u: goto label_1c5de0;
        case 0x1c5de4u: goto label_1c5de4;
        case 0x1c5de8u: goto label_1c5de8;
        case 0x1c5decu: goto label_1c5dec;
        case 0x1c5df0u: goto label_1c5df0;
        case 0x1c5df4u: goto label_1c5df4;
        case 0x1c5df8u: goto label_1c5df8;
        case 0x1c5dfcu: goto label_1c5dfc;
        case 0x1c5e00u: goto label_1c5e00;
        case 0x1c5e04u: goto label_1c5e04;
        case 0x1c5e08u: goto label_1c5e08;
        case 0x1c5e0cu: goto label_1c5e0c;
        case 0x1c5e10u: goto label_1c5e10;
        case 0x1c5e14u: goto label_1c5e14;
        case 0x1c5e18u: goto label_1c5e18;
        case 0x1c5e1cu: goto label_1c5e1c;
        case 0x1c5e20u: goto label_1c5e20;
        case 0x1c5e24u: goto label_1c5e24;
        case 0x1c5e28u: goto label_1c5e28;
        case 0x1c5e2cu: goto label_1c5e2c;
        case 0x1c5e30u: goto label_1c5e30;
        case 0x1c5e34u: goto label_1c5e34;
        case 0x1c5e38u: goto label_1c5e38;
        case 0x1c5e3cu: goto label_1c5e3c;
        case 0x1c5e40u: goto label_1c5e40;
        case 0x1c5e44u: goto label_1c5e44;
        case 0x1c5e48u: goto label_1c5e48;
        case 0x1c5e4cu: goto label_1c5e4c;
        case 0x1c5e50u: goto label_1c5e50;
        case 0x1c5e54u: goto label_1c5e54;
        case 0x1c5e58u: goto label_1c5e58;
        case 0x1c5e5cu: goto label_1c5e5c;
        case 0x1c5e60u: goto label_1c5e60;
        case 0x1c5e64u: goto label_1c5e64;
        default: break;
    }

    ctx->pc = 0x1c5d60u;

label_1c5d60:
    // 0x1c5d60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c5d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c5d64:
    // 0x1c5d64: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c5d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1c5d68:
    // 0x1c5d68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c5d68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c5d6c:
    // 0x1c5d6c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c5d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1c5d70:
    // 0x1c5d70: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c5d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1c5d74:
    // 0x1c5d74: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
label_1c5d78:
    if (ctx->pc == 0x1C5D78u) {
        ctx->pc = 0x1C5D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D74u;
        // 0x1c5d78: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5D7Cu;
        goto label_1c5d7c;
    }
    ctx->pc = 0x1C5D74u;
    {
        const bool branch_taken_0x1c5d74 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D74u;
        // 0x1c5d78: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5d74) {
            ctx->pc = 0x1C5D90u;
            goto label_1c5d90;
        }
    }
    ctx->pc = 0x1C5D7Cu;
label_1c5d7c:
    // 0x1c5d7c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c5d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1c5d80:
    // 0x1c5d80: 0xc071ac8  jal         func_1C6B20
label_1c5d84:
    if (ctx->pc == 0x1C5D84u) {
        ctx->pc = 0x1C5D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D80u;
        // 0x1c5d84: 0x2484a5d8  addiu       $a0, $a0, -0x5A28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5D88u;
        goto label_1c5d88;
    }
    ctx->pc = 0x1C5D80u;
    SET_GPR_U32(ctx, 31, 0x1C5D88u);
    ctx->pc = 0x1C5D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5D80u;
    // 0x1c5d84: 0x2484a5d8  addiu       $a0, $a0, -0x5A28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6B20u, 0x1C5D80u, 0x1C5D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5D88u;
label_1c5d88:
    // 0x1c5d88: 0x10000031  b           . + 4 + (0x31 << 2)
label_1c5d8c:
    if (ctx->pc == 0x1C5D8Cu) {
        ctx->pc = 0x1C5D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D88u;
        // 0x1c5d8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5D90u;
        goto label_1c5d90;
    }
    ctx->pc = 0x1C5D88u;
    {
        const bool branch_taken_0x1c5d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D88u;
        // 0x1c5d8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5d88) {
            ctx->pc = 0x1C5E50u;
            goto label_1c5e50;
        }
    }
    ctx->pc = 0x1C5D90u;
label_1c5d90:
    // 0x1c5d90: 0xc071ab2  jal         func_1C6AC8
label_1c5d94:
    if (ctx->pc == 0x1C5D94u) {
        ctx->pc = 0x1C5D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5D90u;
        // 0x1c5d94: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5D98u;
        goto label_1c5d98;
    }
    ctx->pc = 0x1C5D90u;
    SET_GPR_U32(ctx, 31, 0x1C5D98u);
    ctx->pc = 0x1C5D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5D90u;
    // 0x1c5d94: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6AC8u, 0x1C5D90u, 0x1C5D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5D98u;
label_1c5d98:
    // 0x1c5d98: 0xc071732  jal         func_1C5CC8
label_1c5d9c:
    if (ctx->pc == 0x1C5D9Cu) {
        ctx->pc = 0x1C5DA0u;
        goto label_1c5da0;
    }
    ctx->pc = 0x1C5D98u;
    SET_GPR_U32(ctx, 31, 0x1C5DA0u);
    ctx->pc = 0x1C5CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5CC8u, 0x1C5D98u, 0x1C5DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5DA0u;
label_1c5da0:
    // 0x1c5da0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c5da0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c5da4:
    // 0x1c5da4: 0x56400006  bnel        $s2, $zero, . + 4 + (0x6 << 2)
label_1c5da8:
    if (ctx->pc == 0x1C5DA8u) {
        ctx->pc = 0x1C5DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5DA4u;
        // 0x1c5da8: 0xa2400001  sb          $zero, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5DACu;
        goto label_1c5dac;
    }
    ctx->pc = 0x1C5DA4u;
    {
        const bool branch_taken_0x1c5da4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5da4) {
            ctx->pc = 0x1C5DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5DA4u;
            // 0x1c5da8: 0xa2400001  sb          $zero, 0x1($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5DC0u;
            goto label_1c5dc0;
        }
    }
    ctx->pc = 0x1C5DACu;
label_1c5dac:
    // 0x1c5dac: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c5dacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1c5db0:
    // 0x1c5db0: 0xc071ac8  jal         func_1C6B20
label_1c5db4:
    if (ctx->pc == 0x1C5DB4u) {
        ctx->pc = 0x1C5DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5DB0u;
        // 0x1c5db4: 0x2484a608  addiu       $a0, $a0, -0x59F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5DB8u;
        goto label_1c5db8;
    }
    ctx->pc = 0x1C5DB0u;
    SET_GPR_U32(ctx, 31, 0x1C5DB8u);
    ctx->pc = 0x1C5DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5DB0u;
    // 0x1c5db4: 0x2484a608  addiu       $a0, $a0, -0x59F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6B20u, 0x1C5DB0u, 0x1C5DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5DB8u;
label_1c5db8:
    // 0x1c5db8: 0x10000022  b           . + 4 + (0x22 << 2)
label_1c5dbc:
    if (ctx->pc == 0x1C5DBCu) {
        ctx->pc = 0x1C5DC0u;
        goto label_1c5dc0;
    }
    ctx->pc = 0x1C5DB8u;
    {
        const bool branch_taken_0x1c5db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5db8) {
            ctx->pc = 0x1C5E44u;
            goto label_1c5e44;
        }
    }
    ctx->pc = 0x1C5DC0u;
label_1c5dc0:
    // 0x1c5dc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c5dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c5dc4:
    // 0x1c5dc4: 0xae510008  sw          $s1, 0x8($s2)
    ctx->pc = 0x1c5dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 17));
label_1c5dc8:
    // 0x1c5dc8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1c5dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c5dcc:
    // 0x1c5dcc: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1c5dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1c5dd0:
    // 0x1c5dd0: 0x40f809  jalr        $v0
label_1c5dd4:
    if (ctx->pc == 0x1C5DD4u) {
        ctx->pc = 0x1C5DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5DD0u;
        // 0x1c5dd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5DD8u;
        goto label_1c5dd8;
    }
    ctx->pc = 0x1C5DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C5DD8u);
        ctx->pc = 0x1C5DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5DD0u;
        // 0x1c5dd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5DD0u, 0x1C5DD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C5DD8u;
label_1c5dd8:
    // 0x1c5dd8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1c5dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c5ddc:
    // 0x1c5ddc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c5ddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c5de0:
    // 0x1c5de0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c5de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c5de4:
    // 0x1c5de4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1c5de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1c5de8:
    // 0x1c5de8: 0x40f809  jalr        $v0
label_1c5dec:
    if (ctx->pc == 0x1C5DECu) {
        ctx->pc = 0x1C5DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5DE8u;
        // 0x1c5dec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5DF0u;
        goto label_1c5df0;
    }
    ctx->pc = 0x1C5DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C5DF0u);
        ctx->pc = 0x1C5DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5DE8u;
        // 0x1c5dec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5DE8u, 0x1C5DF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C5DF0u;
label_1c5df0:
    // 0x1c5df0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1c5df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1c5df4:
    // 0x1c5df4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1c5df4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1c5df8:
    // 0x1c5df8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1c5df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1c5dfc:
    // 0x1c5dfc: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1c5dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_1c5e00:
    // 0x1c5e00: 0xae500018  sw          $s0, 0x18($s2)
    ctx->pc = 0x1c5e00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 16));
label_1c5e04:
    // 0x1c5e04: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1c5e04u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1c5e08:
    // 0x1c5e08: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_1c5e0c:
    if (ctx->pc == 0x1C5E0Cu) {
        ctx->pc = 0x1C5E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E08u;
        // 0x1c5e0c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5E10u;
        goto label_1c5e10;
    }
    ctx->pc = 0x1C5E08u;
    {
        const bool branch_taken_0x1c5e08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5e08) {
            ctx->pc = 0x1C5E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5E08u;
            // 0x1c5e0c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5E10u;
            goto label_1c5e10;
        }
    }
    ctx->pc = 0x1C5E10u;
label_1c5e10:
    // 0x1c5e10: 0x26430230  addiu       $v1, $s2, 0x230
    ctx->pc = 0x1c5e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 560));
label_1c5e14:
    // 0x1c5e14: 0x1012  mflo        $v0
    ctx->pc = 0x1c5e14u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1c5e18:
    // 0x1c5e18: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x1c5e18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_1c5e1c:
    // 0x1c5e1c: 0x0  nop
    ctx->pc = 0x1c5e1cu;
    // NOP
label_1c5e20:
    // 0x1c5e20: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1c5e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1c5e24:
    // 0x1c5e24: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1c5e24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1c5e28:
    // 0x1c5e28: 0x0  nop
    ctx->pc = 0x1c5e28u;
    // NOP
label_1c5e2c:
    // 0x1c5e2c: 0x0  nop
    ctx->pc = 0x1c5e2cu;
    // NOP
label_1c5e30:
    // 0x1c5e30: 0x0  nop
    ctx->pc = 0x1c5e30u;
    // NOP
label_1c5e34:
    // 0x1c5e34: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
label_1c5e38:
    if (ctx->pc == 0x1C5E38u) {
        ctx->pc = 0x1C5E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E34u;
        // 0x1c5e38: 0x2463ffe0  addiu       $v1, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5E3Cu;
        goto label_1c5e3c;
    }
    ctx->pc = 0x1C5E34u;
    {
        const bool branch_taken_0x1c5e34 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1C5E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E34u;
        // 0x1c5e38: 0x2463ffe0  addiu       $v1, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5e34) {
            ctx->pc = 0x1C5E20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c5e20;
        }
    }
    ctx->pc = 0x1C5E3Cu;
label_1c5e3c:
    // 0x1c5e3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c5e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c5e40:
    // 0x1c5e40: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x1c5e40u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
label_1c5e44:
    // 0x1c5e44: 0xc071ab8  jal         func_1C6AE0
label_1c5e48:
    if (ctx->pc == 0x1C5E48u) {
        ctx->pc = 0x1C5E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E44u;
        // 0x1c5e48: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5E4Cu;
        goto label_1c5e4c;
    }
    ctx->pc = 0x1C5E44u;
    SET_GPR_U32(ctx, 31, 0x1C5E4Cu);
    ctx->pc = 0x1C5E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5E44u;
    // 0x1c5e48: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6AE0u, 0x1C5E44u, 0x1C5E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5E4Cu;
label_1c5e4c:
    // 0x1c5e4c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1c5e4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c5e50:
    // 0x1c5e50: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c5e50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c5e54:
    // 0x1c5e54: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c5e54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1c5e58:
    // 0x1c5e58: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c5e58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c5e5c:
    // 0x1c5e5c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c5e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1c5e60:
    // 0x1c5e60: 0x3e00008  jr          $ra
label_1c5e64:
    if (ctx->pc == 0x1C5E64u) {
        ctx->pc = 0x1C5E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E60u;
        // 0x1c5e64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C5E68u;
        goto label_fallthrough_0x1c5e60;
    }
    ctx->pc = 0x1C5E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5E60u;
        // 0x1c5e64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c5e60:
    ctx->pc = 0x1C5E68u;
}
