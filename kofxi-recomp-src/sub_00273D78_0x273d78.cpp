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

// Function: sub_00273D78
// Address: 0x273d78 - 0x273e90
void sub_00273D78_0x273d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273D78_0x273d78");
#endif

    switch (ctx->pc) {
        case 0x273d78u: goto label_273d78;
        case 0x273d7cu: goto label_273d7c;
        case 0x273d80u: goto label_273d80;
        case 0x273d84u: goto label_273d84;
        case 0x273d88u: goto label_273d88;
        case 0x273d8cu: goto label_273d8c;
        case 0x273d90u: goto label_273d90;
        case 0x273d94u: goto label_273d94;
        case 0x273d98u: goto label_273d98;
        case 0x273d9cu: goto label_273d9c;
        case 0x273da0u: goto label_273da0;
        case 0x273da4u: goto label_273da4;
        case 0x273da8u: goto label_273da8;
        case 0x273dacu: goto label_273dac;
        case 0x273db0u: goto label_273db0;
        case 0x273db4u: goto label_273db4;
        case 0x273db8u: goto label_273db8;
        case 0x273dbcu: goto label_273dbc;
        case 0x273dc0u: goto label_273dc0;
        case 0x273dc4u: goto label_273dc4;
        case 0x273dc8u: goto label_273dc8;
        case 0x273dccu: goto label_273dcc;
        case 0x273dd0u: goto label_273dd0;
        case 0x273dd4u: goto label_273dd4;
        case 0x273dd8u: goto label_273dd8;
        case 0x273ddcu: goto label_273ddc;
        case 0x273de0u: goto label_273de0;
        case 0x273de4u: goto label_273de4;
        case 0x273de8u: goto label_273de8;
        case 0x273decu: goto label_273dec;
        case 0x273df0u: goto label_273df0;
        case 0x273df4u: goto label_273df4;
        case 0x273df8u: goto label_273df8;
        case 0x273dfcu: goto label_273dfc;
        case 0x273e00u: goto label_273e00;
        case 0x273e04u: goto label_273e04;
        case 0x273e08u: goto label_273e08;
        case 0x273e0cu: goto label_273e0c;
        case 0x273e10u: goto label_273e10;
        case 0x273e14u: goto label_273e14;
        case 0x273e18u: goto label_273e18;
        case 0x273e1cu: goto label_273e1c;
        case 0x273e20u: goto label_273e20;
        case 0x273e24u: goto label_273e24;
        case 0x273e28u: goto label_273e28;
        case 0x273e2cu: goto label_273e2c;
        case 0x273e30u: goto label_273e30;
        case 0x273e34u: goto label_273e34;
        case 0x273e38u: goto label_273e38;
        case 0x273e3cu: goto label_273e3c;
        case 0x273e40u: goto label_273e40;
        case 0x273e44u: goto label_273e44;
        case 0x273e48u: goto label_273e48;
        case 0x273e4cu: goto label_273e4c;
        case 0x273e50u: goto label_273e50;
        case 0x273e54u: goto label_273e54;
        case 0x273e58u: goto label_273e58;
        case 0x273e5cu: goto label_273e5c;
        case 0x273e60u: goto label_273e60;
        case 0x273e64u: goto label_273e64;
        case 0x273e68u: goto label_273e68;
        case 0x273e6cu: goto label_273e6c;
        case 0x273e70u: goto label_273e70;
        case 0x273e74u: goto label_273e74;
        case 0x273e78u: goto label_273e78;
        case 0x273e7cu: goto label_273e7c;
        case 0x273e80u: goto label_273e80;
        case 0x273e84u: goto label_273e84;
        case 0x273e88u: goto label_273e88;
        case 0x273e8cu: goto label_273e8c;
        default: break;
    }

    ctx->pc = 0x273d78u;

label_273d78:
    // 0x273d78: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x273d78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
label_273d7c:
    // 0x273d7c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x273d7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_273d80:
    // 0x273d80: 0x8c832d74  lw          $v1, 0x2D74($a0)
    ctx->pc = 0x273d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11636)));
label_273d84:
    // 0x273d84: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x273d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_273d88:
    // 0x273d88: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x273d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_273d8c:
    // 0x273d8c: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
label_273d90:
    if (ctx->pc == 0x273D90u) {
        ctx->pc = 0x273D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D8Cu;
        // 0x273d90: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273D94u;
        goto label_273d94;
    }
    ctx->pc = 0x273D8Cu;
    {
        const bool branch_taken_0x273d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x273D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D8Cu;
        // 0x273d90: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273d8c) {
            ctx->pc = 0x273E7Cu;
            goto label_273e7c;
        }
    }
    ctx->pc = 0x273D94u;
label_273d94:
    // 0x273d94: 0xc09c8a8  jal         func_2722A0
label_273d98:
    if (ctx->pc == 0x273D98u) {
        ctx->pc = 0x273D9Cu;
        goto label_273d9c;
    }
    ctx->pc = 0x273D94u;
    SET_GPR_U32(ctx, 31, 0x273D9Cu);
    ctx->pc = 0x2722A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2722A0u, 0x273D94u, 0x273D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273D9Cu;
label_273d9c:
    // 0x273d9c: 0x5c400005  bgtzl       $v0, . + 4 + (0x5 << 2)
label_273da0:
    if (ctx->pc == 0x273DA0u) {
        ctx->pc = 0x273DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D9Cu;
        // 0x273da0: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273DA4u;
        goto label_273da4;
    }
    ctx->pc = 0x273D9Cu;
    {
        const bool branch_taken_0x273d9c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x273d9c) {
            ctx->pc = 0x273DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273D9Cu;
            // 0x273da0: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273DB4u;
            goto label_273db4;
        }
    }
    ctx->pc = 0x273DA4u;
label_273da4:
    // 0x273da4: 0xc09c8ac  jal         func_2722B0
label_273da8:
    if (ctx->pc == 0x273DA8u) {
        ctx->pc = 0x273DACu;
        goto label_273dac;
    }
    ctx->pc = 0x273DA4u;
    SET_GPR_U32(ctx, 31, 0x273DACu);
    ctx->pc = 0x2722B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2722B0u, 0x273DA4u, 0x273DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273DACu;
label_273dac:
    // 0x273dac: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
label_273db0:
    if (ctx->pc == 0x273DB0u) {
        ctx->pc = 0x273DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DACu;
        // 0x273db0: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273DB4u;
        goto label_273db4;
    }
    ctx->pc = 0x273DACu;
    {
        const bool branch_taken_0x273dac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x273DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DACu;
        // 0x273db0: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273dac) {
            ctx->pc = 0x273E10u;
            goto label_273e10;
        }
    }
    ctx->pc = 0x273DB4u;
label_273db4:
    // 0x273db4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x273db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_273db8:
    // 0x273db8: 0x24502d78  addiu       $s0, $v0, 0x2D78
    ctx->pc = 0x273db8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11640));
label_273dbc:
    // 0x273dbc: 0xc0432d8  jal         func_10CB60
label_273dc0:
    if (ctx->pc == 0x273DC0u) {
        ctx->pc = 0x273DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DBCu;
        // 0x273dc0: 0x8e040418  lw          $a0, 0x418($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273DC4u;
        goto label_273dc4;
    }
    ctx->pc = 0x273DBCu;
    SET_GPR_U32(ctx, 31, 0x273DC4u);
    ctx->pc = 0x273DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273DBCu;
    // 0x273dc0: 0x8e040418  lw          $a0, 0x418($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB60u, 0x273DBCu, 0x273DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273DC4u;
label_273dc4:
    // 0x273dc4: 0x440002d  bltz        $v0, . + 4 + (0x2D << 2)
label_273dc8:
    if (ctx->pc == 0x273DC8u) {
        ctx->pc = 0x273DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DC4u;
        // 0x273dc8: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273DCCu;
        goto label_273dcc;
    }
    ctx->pc = 0x273DC4u;
    {
        const bool branch_taken_0x273dc4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x273DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DC4u;
        // 0x273dc8: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273dc4) {
            ctx->pc = 0x273E7Cu;
            goto label_273e7c;
        }
    }
    ctx->pc = 0x273DCCu;
label_273dcc:
    // 0x273dcc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x273dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_273dd0:
    // 0x273dd0: 0x1483002a  bne         $a0, $v1, . + 4 + (0x2A << 2)
label_273dd4:
    if (ctx->pc == 0x273DD4u) {
        ctx->pc = 0x273DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DD0u;
        // 0x273dd4: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273DD8u;
        goto label_273dd8;
    }
    ctx->pc = 0x273DD0u;
    {
        const bool branch_taken_0x273dd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x273DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DD0u;
        // 0x273dd4: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273dd0) {
            ctx->pc = 0x273E7Cu;
            goto label_273e7c;
        }
    }
    ctx->pc = 0x273DD8u;
label_273dd8:
    // 0x273dd8: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x273dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_273ddc:
    // 0x273ddc: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x273ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_273de0:
    // 0x273de0: 0xc043328  jal         func_10CCA0
label_273de4:
    if (ctx->pc == 0x273DE4u) {
        ctx->pc = 0x273DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DE0u;
        // 0x273de4: 0x8c8406c8  lw          $a0, 0x6C8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273DE8u;
        goto label_273de8;
    }
    ctx->pc = 0x273DE0u;
    SET_GPR_U32(ctx, 31, 0x273DE8u);
    ctx->pc = 0x273DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273DE0u;
    // 0x273de4: 0x8c8406c8  lw          $a0, 0x6C8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x273DE0u, 0x273DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273DE8u;
label_273de8:
    // 0x273de8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x273de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_273dec:
    // 0x273dec: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x273decu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_273df0:
    // 0x273df0: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x273df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_273df4:
    // 0x273df4: 0x8c8406c8  lw          $a0, 0x6C8($a0)
    ctx->pc = 0x273df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
label_273df8:
    // 0x273df8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x273df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_273dfc:
    // 0x273dfc: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x273dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
label_273e00:
    // 0x273e00: 0xc043320  jal         func_10CC80
label_273e04:
    if (ctx->pc == 0x273E04u) {
        ctx->pc = 0x273E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E00u;
        // 0x273e04: 0xac2306f4  sw          $v1, 0x6F4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1780), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273E08u;
        goto label_273e08;
    }
    ctx->pc = 0x273E00u;
    SET_GPR_U32(ctx, 31, 0x273E08u);
    ctx->pc = 0x273E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273E00u;
    // 0x273e04: 0xac2306f4  sw          $v1, 0x6F4($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 1780), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x273E00u, 0x273E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273E08u;
label_273e08:
    // 0x273e08: 0x1000001c  b           . + 4 + (0x1C << 2)
label_273e0c:
    if (ctx->pc == 0x273E0Cu) {
        ctx->pc = 0x273E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E08u;
        // 0x273e0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273E10u;
        goto label_273e10;
    }
    ctx->pc = 0x273E08u;
    {
        const bool branch_taken_0x273e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E08u;
        // 0x273e0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273e08) {
            ctx->pc = 0x273E7Cu;
            goto label_273e7c;
        }
    }
    ctx->pc = 0x273E10u;
label_273e10:
    // 0x273e10: 0x24502d78  addiu       $s0, $v0, 0x2D78
    ctx->pc = 0x273e10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11640));
label_273e14:
    // 0x273e14: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x273e14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_273e18:
    // 0x273e18: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x273e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_273e1c:
    // 0x273e1c: 0xc043328  jal         func_10CCA0
label_273e20:
    if (ctx->pc == 0x273E20u) {
        ctx->pc = 0x273E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E1Cu;
        // 0x273e20: 0x8c8406c8  lw          $a0, 0x6C8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273E24u;
        goto label_273e24;
    }
    ctx->pc = 0x273E1Cu;
    SET_GPR_U32(ctx, 31, 0x273E24u);
    ctx->pc = 0x273E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273E1Cu;
    // 0x273e20: 0x8c8406c8  lw          $a0, 0x6C8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x273E1Cu, 0x273E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273E24u;
label_273e24:
    // 0x273e24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x273e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_273e28:
    // 0x273e28: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x273e28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_273e2c:
    // 0x273e2c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x273e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_273e30:
    // 0x273e30: 0x8c8406c8  lw          $a0, 0x6C8($a0)
    ctx->pc = 0x273e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1736)));
label_273e34:
    // 0x273e34: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x273e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_273e38:
    // 0x273e38: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x273e38u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
label_273e3c:
    // 0x273e3c: 0xc043320  jal         func_10CC80
label_273e40:
    if (ctx->pc == 0x273E40u) {
        ctx->pc = 0x273E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E3Cu;
        // 0x273e40: 0xac2306f4  sw          $v1, 0x6F4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1780), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273E44u;
        goto label_273e44;
    }
    ctx->pc = 0x273E3Cu;
    SET_GPR_U32(ctx, 31, 0x273E44u);
    ctx->pc = 0x273E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273E3Cu;
    // 0x273e40: 0xac2306f4  sw          $v1, 0x6F4($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 1780), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x273E3Cu, 0x273E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273E44u;
label_273e44:
    // 0x273e44: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x273e44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_273e48:
    // 0x273e48: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x273e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_273e4c:
    // 0x273e4c: 0xc04332c  jal         func_10CCB0
label_273e50:
    if (ctx->pc == 0x273E50u) {
        ctx->pc = 0x273E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E4Cu;
        // 0x273e50: 0x8c8406d0  lw          $a0, 0x6D0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1744)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273E54u;
        goto label_273e54;
    }
    ctx->pc = 0x273E4Cu;
    SET_GPR_U32(ctx, 31, 0x273E54u);
    ctx->pc = 0x273E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273E4Cu;
    // 0x273e50: 0x8c8406d0  lw          $a0, 0x6D0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1744)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x273E4Cu, 0x273E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273E54u;
label_273e54:
    // 0x273e54: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
label_273e58:
    if (ctx->pc == 0x273E58u) {
        ctx->pc = 0x273E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E54u;
        // 0x273e58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273E5Cu;
        goto label_273e5c;
    }
    ctx->pc = 0x273E54u;
    {
        const bool branch_taken_0x273e54 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x273E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E54u;
        // 0x273e58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273e54) {
            ctx->pc = 0x273E7Cu;
            goto label_273e7c;
        }
    }
    ctx->pc = 0x273E5Cu;
label_273e5c:
    // 0x273e5c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x273e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_273e60:
    // 0x273e60: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x273e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_273e64:
    // 0x273e64: 0x8c420728  lw          $v0, 0x728($v0)
    ctx->pc = 0x273e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1832)));
label_273e68:
    // 0x273e68: 0x40f809  jalr        $v0
label_273e6c:
    if (ctx->pc == 0x273E6Cu) {
        ctx->pc = 0x273E70u;
        goto label_273e70;
    }
    ctx->pc = 0x273E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x273E70u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273E68u, 0x273E70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x273E70u;
label_273e70:
    // 0x273e70: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
label_273e74:
    if (ctx->pc == 0x273E74u) {
        ctx->pc = 0x273E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E70u;
        // 0x273e74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273E78u;
        goto label_273e78;
    }
    ctx->pc = 0x273E70u;
    {
        const bool branch_taken_0x273e70 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x273e70) {
            ctx->pc = 0x273E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273E70u;
            // 0x273e74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273E7Cu;
            goto label_273e7c;
        }
    }
    ctx->pc = 0x273E78u;
label_273e78:
    // 0x273e78: 0x2402fffa  addiu       $v0, $zero, -0x6
    ctx->pc = 0x273e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
label_273e7c:
    // 0x273e7c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x273e7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_273e80:
    // 0x273e80: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x273e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_273e84:
    // 0x273e84: 0x3e00008  jr          $ra
label_273e88:
    if (ctx->pc == 0x273E88u) {
        ctx->pc = 0x273E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E84u;
        // 0x273e88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273E8Cu;
        goto label_273e8c;
    }
    ctx->pc = 0x273E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E84u;
        // 0x273e88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273E8Cu;
label_273e8c:
    // 0x273e8c: 0x0  nop
    ctx->pc = 0x273e8cu;
    // NOP
}
